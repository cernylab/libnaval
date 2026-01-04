#ifndef LIBNAVAL_NAVAL_HPP
#define LIBNAVAL_NAVAL_HPP

#include <string>
#include <vector>
#include <optional>
#include <map>
#include <memory>

namespace libnaval {

enum class MeasurementType {
    BOND,
    ANGLE
};

enum class NavalTier {
    PREFERRED,    // ProSco >= 5 % OR (CSD within ±3σ AND Zprime within ±5)
    ALLOWED,      // Zprime within ±5 but not Preferred
    OF_CONCERN,   // Zprime outside ±5
    UNKNOWN
};

// RS = PDB-NA Reference Set (as defined in 10.1093/nar/gkaf1335)
// The PDB-NA Reference Set contains curated high-quality residue-level filtered data with better than 1.8 Å resolution.
struct RSEntry {
    double value;
    std::string entry_id;
    int model_num;
    std::string chain_id;
    std::string comp_id;
    std::string alt_id;
    int seq_id;
    std::string ins_code;
};

enum class ProscoGroup {
    UNKNOWN,     // Classification not performed or failed
    COMMON,      // prosco >= 5 %
    RARE,        // 1/N <= prosco < 5 %
    AMBIGUOUS,   // prosco < 1/N but in a region that rises back above 1/N
    UNIQUE       // prosco < 1/N (and not in ambiguous region) or outside RS range
};

std::string prosco_group_to_string(ProscoGroup group);

struct ProscoResult {
    double prosco {0.0};  // ProSco percentile value (0-100)
    int bin_index {-1};
    ProscoGroup group {ProscoGroup::UNKNOWN};  // ProSco group classification
    bool value_outside_range {false};  // True if value is outside the known RS range
    std::optional<RSEntry> rs_lower;  // Nearest lower RS entry (None if value below all RS entries)
    std::optional<RSEntry> rs_upper;  // Nearest upper RS entry (None if value above all RS entries)
};

struct RotamerResult {
    std::string rotamer;     // CSD rotamer name (e.g., "pucker==A_G_C2p_endo")
    NavalTier tier {NavalTier::UNKNOWN};
    double csd_target {0.0};
    double csd_std {0.0};
    double csd_z_score {0.0};      // Signed Z-score
};

struct ClassificationResult {
    bool found {false};
    std::string message;
    ProscoResult prosco;

    // Z' bounds (same for all rotamers)
    std::optional<double> zprime_lower;     // Z' lower bound (of concern)
    std::optional<double> zprime_upper;     // Z' upper bound (of concern)

    // All matching rotamers with their individual classifications
    std::vector<RotamerResult> rotamers;

    // Measurement metadata (for to_dict() and other serialization)
    std::string residue;
    std::vector<std::string> atoms;
    double value {0.0};
    bool value_in_degrees {true};  // true for degrees, false for radians (bonds ignore this)
};

class NavalClassifier {
public:
    NavalClassifier();
    ~NavalClassifier();

    // Main classification methods
    ClassificationResult classify_bond(
        const std::string& residue,
        const std::string& atom1,
        const std::string& atom2,
        double value
    ) const;

    ClassificationResult classify_angle(
        const std::string& residue,
        const std::string& atom1,
        const std::string& atom2,
        const std::string& atom3,
        double value,
        bool value_in_degrees = true  // Input value in degrees by default
    ) const;

    // Generic classification
    ClassificationResult classify(
        const std::string& residue,
        const std::vector<std::string>& atoms,
        double value,
        bool value_in_degrees = true  // For angles, input in degrees by default
    ) const;

    // Query available data
    std::vector<std::string> get_available_residues() const;
    std::vector<std::string> get_available_measurements(const std::string& residue, MeasurementType type) const;
    std::vector<std::string> get_rotamer_groups(const std::string& residue, const std::vector<std::string>& atoms) const;
    std::vector<std::string> get_all_rotamer_groups() const;

private:
    class Impl;
    std::unique_ptr<Impl> pImpl;
};

// Helper functions
std::string tier_to_string(NavalTier tier);
NavalTier string_to_tier(const std::string& str);

} // namespace libnaval

#endif // LIBNAVAL_NAVAL_HPP
