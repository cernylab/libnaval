#include <libnaval/naval.hpp>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

// Note: RS = PDB-NA Reference Set (as defined in 10.1093/nar/gkaf1335)
// The PDB-NA Reference Set contains curated high-quality residue-level filtered data
// with better than 1.8 Å resolution.

int main() {
    libnaval::NavalClassifier classifier;

    std::cout << "NA-VAL Nucleic Acid Valence Geometry Classification Example\n";
    std::cout << std::string(66, '=') << "\n\n";

    // Example 1: Classify a bond length
    std::cout << "Example 1: Bond Length Classification\n";
    std::cout << std::string(50, '-') << "\n";

    auto result = classifier.classify_bond("A", "C2", "N1", 1.338);

    std::cout << "Residue: A\n";
    std::cout << "Bond: C2-N1\n";
    std::cout << "Measured value: 1.338 Angstroms\n";

    // Optional Z' bounds
    if (result.zprime_lower.has_value() && result.zprime_upper.has_value()) {
        std::cout << "5Z' lower: " << result.zprime_lower.value() << "\n";
        std::cout << "5Z' upper: " << result.zprime_upper.value() << "\n";
    } else {
        std::cout << "5Z' lower: N/A\n";
        std::cout << "5Z' upper: N/A\n";
    }

    // Display prosco value (check if outside range)
    std::cout << "ProSco: ";
    if (result.prosco.value_outside_range) {
        std::cout << "None";
    } else if (result.prosco.prosco < 0.1) {
        std::cout << std::scientific << std::setprecision(2) << result.prosco.prosco << " %";
    } else if (result.prosco.prosco < 1.0) {
        std::cout << std::fixed << std::setprecision(2) << result.prosco.prosco << " %";
    } else {
        std::cout << std::fixed << std::setprecision(1) << result.prosco.prosco << " %";
    }
    std::cout << " (" << libnaval::prosco_group_to_string(result.prosco.group) << ")\n";

    // Display rotamer tiers
    for (const auto& rotamer : result.rotamers) {
        std::cout << "NA-VAL Tier: " << libnaval::tier_to_string(rotamer.tier)
                  << " (" << rotamer.rotamer << ")\n";
    }
    std::cout << "\n";

    // Example 2: Classify an angle
    std::cout << "Example 2: Angle Classification\n";
    std::cout << std::string(50, '-') << "\n";

    result = classifier.classify_angle("A", "C2", "N1", "C6", 118.5);

    std::cout << "Residue: A\n";
    std::cout << "Angle: C2-N1-C6\n";
    std::cout << "Measured value: 118.5°\n";

    // Display prosco value
    std::cout << "ProSco: ";
    if (result.prosco.value_outside_range) {
        std::cout << "None";
    } else if (result.prosco.prosco < 0.1) {
        std::cout << std::scientific << std::setprecision(2) << result.prosco.prosco << " %";
    } else if (result.prosco.prosco < 1.0) {
        std::cout << std::fixed << std::setprecision(2) << result.prosco.prosco << " %";
    } else {
        std::cout << std::fixed << std::setprecision(1) << result.prosco.prosco << " %";
    }
    std::cout << " (" << libnaval::prosco_group_to_string(result.prosco.group) << ")\n";

    // Display rotamer tiers
    for (const auto& rotamer : result.rotamers) {
        std::cout << "NA-VAL Tier: " << libnaval::tier_to_string(rotamer.tier)
                  << " (" << rotamer.rotamer << ")\n";
    }
    std::cout << "\n";

    // Example 3: Test different values to see tier changes
    std::cout << "Example 3: Testing Different Values\n";
    std::cout << std::string(50, '-') << "\n";
    std::cout << "Testing bond C2-N1 with different values:\n";

    std::cout << std::left
              << std::setw(10) << "Value"
              << std::setw(15) << "ProSco"
              << std::setw(12) << "Group"
              << std::setw(12) << "Tier" << "\n";

    std::vector<double> test_values = {1.338, 1.344, 1.350, 1.360, 1.370};

    for (double value : test_values) {
        result = classifier.classify_bond("A", "C2", "N1", value);

        // Format prosco
        std::string prosco_str;
        if (result.prosco.value_outside_range) {
            prosco_str = "None";
        } else if (result.prosco.prosco < 0.1) {
            std::ostringstream oss;
            oss << std::scientific << std::setprecision(2) << result.prosco.prosco << " %";
            prosco_str = oss.str();
        } else if (result.prosco.prosco < 1.0) {
            std::ostringstream oss;
            oss << std::fixed << std::setprecision(2) << result.prosco.prosco << " %";
            prosco_str = oss.str();
        } else {
            std::ostringstream oss;
            oss << std::fixed << std::setprecision(1) << result.prosco.prosco << " %";
            prosco_str = oss.str();
        }

        std::string tier_str = result.rotamers.empty() ? "N/A" : libnaval::tier_to_string(result.rotamers[0].tier);
        std::string group_str = libnaval::prosco_group_to_string(result.prosco.group);

        std::cout << std::fixed << std::setprecision(3);
        std::cout << std::setw(10) << value
                  << std::setw(15) << prosco_str
                  << std::setw(12) << group_str
                  << std::setw(12) << tier_str << "\n";
    }
    std::cout << "\n";

    // Example 4: List available data
    std::cout << "Example 4: Available Data\n";
    std::cout << std::string(50, '-') << "\n";

    auto residues = classifier.get_available_residues();
    std::cout << "Available residues: ";
    for (size_t i = 0; i < std::min(size_t(10), residues.size()); ++i) {
        if (i > 0) std::cout << ", ";
        std::cout << residues[i];
    }
    std::cout << "...\n\n";

    auto bonds = classifier.get_available_measurements("A", libnaval::MeasurementType::BOND);
    std::cout << "Available bonds for residue A (" << bonds.size() << " total):\n";
    for (size_t i = 0; i < std::min(size_t(5), bonds.size()); ++i) {
        std::cout << "  - " << bonds[i] << "\n";
    }
    std::cout << "  ...\n\n";

    auto angles = classifier.get_available_measurements("A", libnaval::MeasurementType::ANGLE);
    std::cout << "Available angles for residue A (" << angles.size() << " total):\n";
    for (size_t i = 0; i < std::min(size_t(5), angles.size()); ++i) {
        std::cout << "  - " << angles[i] << "\n";
    }
    std::cout << "  ...\n\n";

    // Example 5: Values outside known range
    std::cout << "Example 5: Values Outside Known Range\n";
    std::cout << std::string(50, '-') << "\n";

    result = classifier.classify_bond("A", "C2", "N1", 999.9);  // Extreme value
    std::cout << "Bond: C2-N1\n";
    std::cout << "Measured value: 999.9 Angstroms (extreme)\n";

    if (result.prosco.value_outside_range) {
        std::cout << "ProSco: None (" << libnaval::prosco_group_to_string(result.prosco.group) << ")\n";
        std::cout << "Value is outside the known reference set range\n";
    } else {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "ProSco: " << result.prosco.prosco << " %\n";
    }

    // Display RS neighbors - accessing all record details
    if (result.prosco.rs_lower.has_value()) {
        const auto& rs = result.prosco.rs_lower.value();
        std::cout << "RS lower: " << rs.entry_id << "_" << rs.chain_id << "_"
                  << rs.comp_id << "_" << rs.seq_id
                  << " (model=" << rs.model_num << ", alt=" << rs.alt_id
                  << ", ins=" << rs.ins_code << ") value="
                  << std::fixed << std::setprecision(4) << rs.value << "\n";
    } else {
        std::cout << "RS lower: None\n";
    }

    if (result.prosco.rs_upper.has_value()) {
        const auto& rs = result.prosco.rs_upper.value();
        std::cout << "RS upper: " << rs.entry_id << "_" << rs.chain_id << "_"
                  << rs.comp_id << "_" << rs.seq_id
                  << " (model=" << rs.model_num << ", alt=" << rs.alt_id
                  << ", ins=" << rs.ins_code << ") value="
                  << std::fixed << std::setprecision(4) << rs.value << "\n";
    } else {
        std::cout << "RS upper: None\n";
    }
    std::cout << "\n";

    // Example 6: Error handling
    std::cout << "Example 6: Error Handling\n";
    std::cout << std::string(50, '-') << "\n";

    result = classifier.classify_bond("X", "Y", "Z", 1.5);
    if (!result.found) {
        std::cout << "Classification failed: " << result.message << "\n";
        std::cout << "Tier: UNKNOWN\n";
    }
    std::cout << "\n";

    return 0;
}
