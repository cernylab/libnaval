#include "libnaval/naval.hpp"
#include "libnaval/data.hpp"
#include <cmath>
#include <sstream>

namespace libnaval {

// Conversion constants
constexpr double DEG_TO_RAD = M_PI / 180.0;
constexpr double RAD_TO_DEG = 180.0 / M_PI;

// Helper function to wrap angle to [0, pi] range (radians)
// Handles any input: negative, > 2π, multiple rotations, etc.
inline double wrap_angle_radians(double angle_rad) {
    // Normalize to [0, 2π] using modulo
    // std::fmod handles values outside [0, 2π] including negative and > 2π
    double normalized = std::fmod(angle_rad, 2.0 * M_PI);
    if (normalized < 0.0) {
        normalized += 2.0 * M_PI;
    }

    // Map to [0, π] - angles are symmetric
    // e.g., 200° = 160°, 270° = 90°
    if (normalized > M_PI) {
        normalized = 2.0 * M_PI - normalized;
    }

    return normalized;
}

// Helper function to wrap angle to [0, 180] range (degrees)
// Handles any input: negative, > 360, multiple rotations, etc.
inline double wrap_angle_degrees(double angle_deg) {
    // Normalize to [0, 360] using modulo
    // std::fmod handles values outside [0, 360] including negative and > 360
    // Examples: -30° → 330°, 450° → 90°, -450° → 270°
    double normalized = std::fmod(angle_deg, 360.0);
    if (normalized < 0.0) {
        normalized += 360.0;
    }

    // Map to [0, 180] - angles are symmetric
    // e.g., 200° → 160°, 270° → 90°, 330° → 30°
    if (normalized > 180.0) {
        normalized = 360.0 - normalized;
    }

    return normalized;
}

// Helper function to normalize atom names (C1' -> C1p)
inline std::string normalize_atom_name(const std::string& atom) {
    std::string normalized = atom;
    size_t pos = normalized.find('\'');
    if (pos != std::string::npos) {
        normalized.replace(pos, 1, "p");
    }
    return normalized;
}

class NavalClassifier::Impl {
public:

    ClassificationResult classify_measurement(
        const std::string& residue,
        const std::string& type,
        const std::vector<std::string>& atoms,
        double value,
        bool convert_to_radians = false  // For angles, whether to convert input to radians
    ) const {
        ClassificationResult result;

        // Normalize atom names (C1' -> C1p)
        std::vector<std::string> normalized_atoms;
        normalized_atoms.reserve(atoms.size());
        for (const auto& atom : atoms) {
            normalized_atoms.push_back(normalize_atom_name(atom));
        }

        // Get measurement data
        const auto* data = data::get_measurement_data(residue, type, normalized_atoms);

        if (!data) {
            result.message = "No data found for " + residue + " " + type + " " + join_atoms(atoms);
            return result;
        }

        result.found = true;

        // Store measurement metadata
        result.residue = residue;
        result.atoms = atoms;  // Store original (non-normalized) atoms
        result.value = value;
        result.value_in_degrees = convert_to_radians;  // true if input was degrees (needs conversion TO radians)

        // For angles: wrap to [0, 180°] or [0, π] range and convert if needed
        double value_normalized = value;
        double value_for_prosco = value;

        if (type == "angle") {
            if (convert_to_radians) {
                // Input is in degrees, wrap to [0, 180], then convert to radians
                value_normalized = wrap_angle_degrees(value);
                value_for_prosco = value_normalized * DEG_TO_RAD;
            } else {
                // Input is already in radians, wrap to [0, π]
                value_for_prosco = wrap_angle_radians(value);
                value_normalized = value_for_prosco * RAD_TO_DEG;  // For z-score calc
            }
        }

        // Store Z' bounds
        result.zprime_lower = data->prosco.zprime.ofConcernLower;
        result.zprime_upper = data->prosco.zprime.ofConcernUpper;

        // Calculate prosco (same for all rotamers)
        // Use value_for_prosco which is in radians for angles
        result.prosco = calculate_prosco(data->prosco, value_for_prosco);

        // Check if value is outside Zprime ±5 bounds
        bool outside_zprime = (value_for_prosco < data->prosco.zprime.ofConcernLower ||
                              value_for_prosco > data->prosco.zprime.ofConcernUpper);

        // Classify each rotamer
        for (const auto& rotamer_data : data->rotamers) {
            RotamerResult rot_result;
            rot_result.rotamer = rotamer_data.rotamer;
            rot_result.csd_target = rotamer_data.csd_target;
            rot_result.csd_std = rotamer_data.csd_std;
            rot_result.csd_z_score = (value_normalized - rotamer_data.csd_target) / rotamer_data.csd_std;

            // Determine naval tier for this rotamer
            if (outside_zprime) {
                rot_result.tier = NavalTier::OF_CONCERN;
            } else if (result.prosco.prosco >= 5.0 || std::abs(rot_result.csd_z_score) <= 3.0) {
                rot_result.tier = NavalTier::PREFERRED;
            } else {
                rot_result.tier = NavalTier::ALLOWED;
            }

            result.rotamers.push_back(rot_result);
        }

        std::ostringstream msg;
        msg << "Classified " << result.rotamers.size() << " rotamer(s)";
        result.message = msg.str();

        return result;
    }

private:
    std::string join_atoms(const std::vector<std::string>& atoms) const {
        std::string result;
        for (size_t i = 0; i < atoms.size(); ++i) {
            if (i > 0) result += "-";
            result += atoms[i];
        }
        return result;
    }

    ProscoResult calculate_prosco(const data::ProscoData& prosco, double value) const {
        ProscoResult result;
        result.prosco = 0.0;
        result.bin_index = -1;
        result.value_outside_range = false;

        // Find the bin containing the value
        for (size_t i = 0; i < prosco.from.size(); ++i) {
            if (value >= prosco.from[i] && value < prosco.to[i]) {
                result.bin_index = static_cast<int>(i);
                result.prosco = prosco.prosco[i] * 100.0;  // Multiply by 100 (stored as 0-1 in JSON for precision)
                break;
            }
        }

        // If value is beyond the range
        if (result.bin_index == -1) {
            result.value_outside_range = true;
            if (!prosco.from.empty() && value < prosco.from[0]) {
                result.bin_index = 0;
                result.prosco = prosco.prosco[0] * 100.0;  // Use first bin value (multiply by 100)
            } else if (!prosco.to.empty() && value >= prosco.to.back()) {
                result.bin_index = static_cast<int>(prosco.to.size() - 1);
                result.prosco = prosco.prosco.back() * 100.0;  // Use last bin value (multiply by 100)
            }
        }

        // Find nearest RS (Reference Set) entries
        // Search bins for the nearest lower and upper RS entries
        std::optional<RSEntry> nearest_lower;
        std::optional<RSEntry> nearest_upper;

        // Iterate through compact RS bins
        for (size_t bin_idx = 0; bin_idx < prosco.num_bins; ++bin_idx) {
            const data::RSEntryRaw* bin_entries = prosco.rs_bins[bin_idx];
            size_t bin_size = prosco.rs_bin_sizes[bin_idx];

            for (size_t i = 0; i < bin_size; ++i) {
                const auto& entry = bin_entries[i];
                if (entry.value <= value) {
                    // Lower or equal - potential nearest_lower
                    if (!nearest_lower.has_value() || entry.value > nearest_lower->value) {
                        nearest_lower = RSEntry{entry.value, entry.entry_id, entry.model_num,
                                               entry.chain_id, entry.comp_id, entry.alt_id,
                                               entry.seq_id, entry.ins_code};
                    }
                }
                if (entry.value >= value) {
                    // Upper or equal - potential nearest_upper
                    if (!nearest_upper.has_value() || entry.value < nearest_upper->value) {
                        nearest_upper = RSEntry{entry.value, entry.entry_id, entry.model_num,
                                               entry.chain_id, entry.comp_id, entry.alt_id,
                                               entry.seq_id, entry.ins_code};
                    }
                }
            }
        }

        result.rs_lower = nearest_lower;
        result.rs_upper = nearest_upper;

        // Calculate total number of RS entries (N)
        size_t total_rs_count = 0;
        for (size_t bin_idx = 0; bin_idx < prosco.num_bins; ++bin_idx) {
            total_rs_count += prosco.rs_bin_sizes[bin_idx];
        }

        // Calculate prosco group
        double prosco_fraction = result.prosco / 100.0;  // Convert back to 0-1 range
        double threshold_1_over_n = (total_rs_count > 0) ? (1.0 / static_cast<double>(total_rs_count)) : 0.0;

        if (prosco_fraction >= 0.05) {
            // Common: prosco >= 5 %
            result.group = ProscoGroup::COMMON;
        } else if (prosco_fraction >= threshold_1_over_n) {
            // Rare: 1/N <= prosco < 5 %
            result.group = ProscoGroup::RARE;
        } else {
            // prosco < 1/N - need to determine if Unique or Ambiguous
            // Strategy: Find prosco=100 % position, determine which side queried value is on,
            // scan that side for valley regions. The whole range from first drop below 1/N
            // to the last bin >= 1/N is Ambiguous (can contain multiple valleys).

            bool is_ambiguous = false;

            if (result.bin_index >= 0 && !prosco.prosco.empty()) {
                // Find bin closest to prosco=100 % (stored as decimal 1.0, or 100.0 as percentage)
                int max_prosco_idx = 0;
                double max_prosco = prosco.prosco[0];
                for (size_t i = 1; i < prosco.prosco.size(); ++i) {
                    if (prosco.prosco[i] > max_prosco) {
                        max_prosco = prosco.prosco[i];
                        max_prosco_idx = static_cast<int>(i);
                    }
                }

                // Determine which side of max we're on
                bool on_left_side = (result.bin_index < max_prosco_idx);

                // Scan from max position toward edge on our side
                int scan_start = max_prosco_idx;
                int scan_end = on_left_side ? 0 : static_cast<int>(prosco.prosco.size() - 1);
                int step = on_left_side ? -1 : 1;

                // Find first drop below 1/N and scan for last bin >= 1/N after valleys
                int first_drop = -1;
                int last_above_threshold = -1;

                for (int i = scan_start; on_left_side ? (i >= scan_end) : (i <= scan_end); i += step) {
                    // prosco.prosco[i] is already in 0-1 range from JSON (not percentage)
                    double bin_prosco_fraction = prosco.prosco[i];

                    if (bin_prosco_fraction < threshold_1_over_n) {
                        if (first_drop == -1) {
                            first_drop = i;
                        }
                        // Continue scanning through valley(s)
                    } else {
                        // This bin is >= 1/N
                        if (first_drop != -1) {
                            // We've entered a valley and now recovered
                            last_above_threshold = i;
                        }
                    }
                }

                // Ambiguous region: from first drop to last bin >= 1/N (inclusive)
                // Everything after last_above_threshold is Unique
                if (first_drop != -1 && last_above_threshold != -1) {
                    int range_start = std::min(first_drop, last_above_threshold);
                    int range_end = std::max(first_drop, last_above_threshold);
                    is_ambiguous = (result.bin_index >= range_start && result.bin_index <= range_end);
                }
            }

            result.group = is_ambiguous ? ProscoGroup::AMBIGUOUS : ProscoGroup::UNIQUE;
        }

        // Force UNIQUE for values outside the reference set range
        // to avoid contradictory signals like "Prosco: Common" with value_outside_range=true
        if (result.value_outside_range) {
            result.group = ProscoGroup::UNIQUE;
        }

        return result;
    }
};

// Constructor
NavalClassifier::NavalClassifier() : pImpl(std::make_unique<Impl>()) {}

// Destructor
NavalClassifier::~NavalClassifier() = default;

// Classify bond
ClassificationResult NavalClassifier::classify_bond(
    const std::string& residue,
    const std::string& atom1,
    const std::string& atom2,
    double value
) const {
    return pImpl->classify_measurement(residue, "length", {atom1, atom2}, value);
}

// Classify angle
ClassificationResult NavalClassifier::classify_angle(
    const std::string& residue,
    const std::string& atom1,
    const std::string& atom2,
    const std::string& atom3,
    double value,
    bool value_in_degrees
) const {
    return pImpl->classify_measurement(residue, "angle", {atom1, atom2, atom3}, value, value_in_degrees);
}

// Generic classify
ClassificationResult NavalClassifier::classify(
    const std::string& residue,
    const std::vector<std::string>& atoms,
    double value,
    bool value_in_degrees
) const {
    std::string type = (atoms.size() == 2) ? "length" : "angle";
    bool convert = (type == "angle") && value_in_degrees;
    return pImpl->classify_measurement(residue, type, atoms, value, convert);
}

// Query methods
std::vector<std::string> NavalClassifier::get_available_residues() const {
    return data::get_available_residues();
}

std::vector<std::string> NavalClassifier::get_available_measurements(
    const std::string& residue,
    MeasurementType type
) const {
    std::string type_str = (type == MeasurementType::BOND) ? "length" : "angle";
    return data::get_available_measurements(residue, type_str);
}

std::vector<std::string> NavalClassifier::get_rotamer_groups(
    const std::string& residue,
    const std::vector<std::string>& atoms
) const {
    std::string type_str = (atoms.size() == 2) ? "length" : "angle";
    return data::get_rotamer_groups(residue, type_str, atoms);
}

std::vector<std::string> NavalClassifier::get_all_rotamer_groups() const {
    return data::get_all_rotamer_groups();
}

// Helper functions
std::string tier_to_string(NavalTier tier) {
    switch (tier) {
        case NavalTier::PREFERRED: return "Preferred";
        case NavalTier::ALLOWED: return "Allowed";
        case NavalTier::OF_CONCERN: return "Of Concern";
        default: return "Unknown";
    }
}

std::string prosco_group_to_string(ProscoGroup group) {
    switch (group) {
        case ProscoGroup::COMMON: return "Common";
        case ProscoGroup::RARE: return "Rare";
        case ProscoGroup::AMBIGUOUS: return "Ambiguous";
        case ProscoGroup::UNIQUE: return "Unique";
        default: return "Unknown";
    }
}

NavalTier string_to_tier(const std::string& str) {
    if (str == "Preferred" || str == "PREFERRED") return NavalTier::PREFERRED;
    if (str == "Allowed" || str == "ALLOWED") return NavalTier::ALLOWED;
    if (str == "Of Concern" || str == "OF_CONCERN") return NavalTier::OF_CONCERN;
    return NavalTier::UNKNOWN;
}

} // namespace libnaval
