#include "libnaval/naval.hpp"
#include <CLI/CLI.hpp>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>

// Helper function to escape JSON strings
std::string json_escape(const std::string& str) {
    std::ostringstream oss;
    for (char c : str) {
        switch (c) {
            case '"': oss << "\\\""; break;
            case '\\': oss << "\\\\"; break;
            case '\b': oss << "\\b"; break;
            case '\f': oss << "\\f"; break;
            case '\n': oss << "\\n"; break;
            case '\r': oss << "\\r"; break;
            case '\t': oss << "\\t"; break;
            default: oss << c; break;
        }
    }
    return oss.str();
}

// Helper function to output JSON for RS entry
void output_rs_entry_json(std::ostream& os, const libnaval::RSEntry& rs,
                          bool is_angle, bool value_in_degrees, int indent = 4) {
    std::string ind(indent, ' ');
    double rs_value = rs.value;
    std::string units = is_angle ? (value_in_degrees ? "degrees" : "radians") : "Angstroms";

    // Convert to degrees if user requested degrees
    if (is_angle && value_in_degrees) {
        rs_value *= (180.0 / M_PI);
    }

    os << ind << "{\n"
       << ind << "  \"entry_id\": \"" << json_escape(rs.entry_id) << "\",\n"
       << ind << "  \"chain_id\": \"" << json_escape(rs.chain_id) << "\",\n"
       << ind << "  \"comp_id\": \"" << json_escape(rs.comp_id) << "\",\n"
       << ind << "  \"seq_id\": " << rs.seq_id << ",\n"
       << ind << "  \"model_num\": " << rs.model_num << ",\n"
       << ind << "  \"alt_id\": \"" << json_escape(rs.alt_id) << "\",\n"
       << ind << "  \"ins_code\": \"" << json_escape(rs.ins_code) << "\",\n"
       << ind << "  \"value\": " << std::fixed << std::setprecision(6) << rs_value << ",\n"
       << ind << "  \"units\": \"" << units << "\"\n"
       << ind << "}";
}

// Helper function to print JSON output
void print_json_output(const libnaval::ClassificationResult& result,
                      const std::string& residue,
                      const std::vector<std::string>& atoms,
                      double value,
                      bool value_in_degrees,
                      const std::vector<libnaval::RotamerResult>& rotamers_to_display) {
    bool is_angle = (atoms.size() == 3);
    std::string unit = is_angle ? (value_in_degrees ? "degrees" : "radians") : "Angstroms";
    int precision = (is_angle && value_in_degrees) ? 2 : 4;

    std::cout << "{\n";
    std::cout << "  \"residue\": \"" << json_escape(residue) << "\",\n";
    std::cout << "  \"atoms\": [";
    for (size_t i = 0; i < atoms.size(); ++i) {
        if (i > 0) std::cout << ", ";
        std::cout << "\"" << json_escape(atoms[i]) << "\"";
    }
    std::cout << "],\n";
    std::cout << "  \"measurement_type\": \"" << (is_angle ? "angle" : "bond") << "\",\n";
    std::cout << "  \"value\": " << std::fixed << std::setprecision(precision) << value << ",\n";
    std::cout << "  \"units\": \"" << unit << "\",\n";

    // Z' bounds
    std::cout << "  \"zprime_bounds\": {\n";
    if (result.zprime_lower.has_value() && result.zprime_upper.has_value()) {
        double zprime_lower_display = result.zprime_lower.value();
        double zprime_upper_display = result.zprime_upper.value();
        if (is_angle && value_in_degrees) {
            zprime_lower_display *= (180.0 / M_PI);
            zprime_upper_display *= (180.0 / M_PI);
        }
        std::cout << "    \"lower\": " << std::fixed << std::setprecision(precision) << zprime_lower_display << ",\n";
        std::cout << "    \"upper\": " << std::fixed << std::setprecision(precision) << zprime_upper_display << ",\n";
    } else {
        std::cout << "    \"lower\": null,\n";
        std::cout << "    \"upper\": null,\n";
    }
    std::cout << "    \"units\": \"" << unit << "\"\n";
    std::cout << "  },\n";

    // Reference set
    std::cout << "  \"reference_set\": {\n";
    std::cout << "    \"lower\": ";
    if (result.prosco.rs_lower.has_value()) {
        output_rs_entry_json(std::cout, result.prosco.rs_lower.value(), is_angle, value_in_degrees, 4);
    } else {
        std::cout << "null";
    }
    std::cout << ",\n";
    std::cout << "    \"upper\": ";
    if (result.prosco.rs_upper.has_value()) {
        output_rs_entry_json(std::cout, result.prosco.rs_upper.value(), is_angle, value_in_degrees, 4);
    } else {
        std::cout << "null";
    }
    std::cout << "\n";
    std::cout << "  },\n";

    // Prosco
    std::cout << "  \"prosco\": {\n";
    if (result.prosco.value_outside_range) {
        std::cout << "    \"value\": null,\n";
    } else {
        std::cout << "    \"value\": " << std::fixed << std::setprecision(6) << result.prosco.prosco << ",\n";
    }
    std::cout << "    \"group\": \"" << libnaval::prosco_group_to_string(result.prosco.group) << "\",\n";
    std::cout << "    \"value_outside_range\": " << (result.prosco.value_outside_range ? "true" : "false") << "\n";
    std::cout << "  },\n";

    // Naval tiers (rotamers)
    std::cout << "  \"naval_tiers\": [\n";
    for (size_t i = 0; i < rotamers_to_display.size(); ++i) {
        const auto& rotamer = rotamers_to_display[i];
        std::cout << "    {\n";
        std::cout << "      \"rotamer\": \"" << json_escape(rotamer.rotamer) << "\",\n";
        std::cout << "      \"tier\": \"" << libnaval::tier_to_string(rotamer.tier) << "\",\n";
        std::cout << "      \"csd_target\": " << std::fixed << std::setprecision(precision) << rotamer.csd_target << ",\n";
        std::cout << "      \"csd_std\": " << std::fixed << std::setprecision(precision) << rotamer.csd_std << ",\n";
        std::cout << "      \"csd_z_score\": " << std::fixed << std::setprecision(6) << rotamer.csd_z_score << "\n";
        std::cout << "    }";
        if (i < rotamers_to_display.size() - 1) std::cout << ",";
        std::cout << "\n";
    }
    std::cout << "  ],\n";

    // Status
    std::cout << "  \"found\": true,\n";
    std::cout << "  \"message\": \"" << json_escape(result.message) << "\"\n";
    std::cout << "}\n";
}

// Helper function to print compact text output
void print_text_output(const libnaval::ClassificationResult& result,
                      const std::string& residue,
                      const std::vector<std::string>& atoms,
                      double value,
                      bool value_in_degrees,
                      const std::vector<libnaval::RotamerResult>& rotamers_to_display) {
    bool is_angle = (atoms.size() == 3);
    std::string unit = is_angle ? (value_in_degrees ? "degrees" : "radians") : "Angstroms";
    int precision = (is_angle && value_in_degrees) ? 2 : 4;

    std::cout << "Residue: " << residue << "\n";
    std::cout << "Atoms: " << atoms[0];
    for (size_t i = 1; i < atoms.size(); ++i) {
        std::cout << "-" << atoms[i];
    }
    std::cout << "\n";
    std::cout << "Type: " << (is_angle ? "Angle" : "Bond") << "\n";
    std::cout << "Measured: " << std::fixed << std::setprecision(precision) << value << " " << unit << "\n";

    // Convert Z' bounds to same units as input for angles
    if (result.zprime_lower.has_value() && result.zprime_upper.has_value()) {
        double zprime_lower_display = result.zprime_lower.value();
        double zprime_upper_display = result.zprime_upper.value();
        if (is_angle && value_in_degrees) {
            zprime_lower_display *= (180.0 / M_PI);
            zprime_upper_display *= (180.0 / M_PI);
        }
        std::cout << "5Z' lower bound: " << std::fixed << std::setprecision(precision) << zprime_lower_display << " " << unit << "\n";
        std::cout << "5Z' upper bound: " << std::fixed << std::setprecision(precision) << zprime_upper_display << " " << unit << "\n";
    } else {
        std::cout << "5Z' lower bound: N/A\n";
        std::cout << "5Z' upper bound: N/A\n";
    }

    // Display RS (Reference Set) neighbors
    auto format_rs_entry = [&](const libnaval::RSEntry& rs) -> std::string {
        std::ostringstream oss;
        oss << rs.entry_id << "_" << rs.chain_id << "_" << rs.comp_id << "_" << rs.seq_id;
        if (!rs.ins_code.empty() && rs.ins_code != " ") oss << rs.ins_code;
        if (rs.model_num > 0) oss << "_model" << rs.model_num;
        if (!rs.alt_id.empty() && rs.alt_id != " ") oss << "_alt" << rs.alt_id;
        oss << " " << std::fixed << std::setprecision(precision);

        double rs_value = rs.value;
        if (is_angle && value_in_degrees) {
            rs_value *= (180.0 / M_PI);
        }
        oss << rs_value << " " << unit;
        return oss.str();
    };

    if (result.prosco.rs_lower.has_value()) {
        std::cout << "PDB-NA Reference Set lower: " << format_rs_entry(result.prosco.rs_lower.value()) << "\n";
    } else {
        std::cout << "PDB-NA Reference Set lower: None\n";
    }

    if (result.prosco.rs_upper.has_value()) {
        std::cout << "PDB-NA Reference Set upper: " << format_rs_entry(result.prosco.rs_upper.value()) << "\n";
    } else {
        std::cout << "PDB-NA Reference Set upper: None\n";
    }

    // Display prosco and rotamer tiers in compact format
    std::cout << "ProSco: ";
    if (result.prosco.value_outside_range) {
        std::cout << "None";
    } else if (result.prosco.prosco < 0.1) {
        std::cout << std::scientific << std::setprecision(2) << result.prosco.prosco;
    } else if (result.prosco.prosco < 1.0) {
        std::cout << std::fixed << std::setprecision(2) << result.prosco.prosco;
    } else {
        std::cout << std::fixed << std::setprecision(1) << result.prosco.prosco;
    }
    if (!result.prosco.value_outside_range) {
        std::cout << " %";
    }
    std::cout << " (" << libnaval::prosco_group_to_string(result.prosco.group) << ")\n";

    for (const auto& rotamer : rotamers_to_display) {
        std::cout << "NA-VAL Tier: " << libnaval::tier_to_string(rotamer.tier) << " (" << rotamer.rotamer << ")\n";
    }
}

int main(int argc, char* argv[]) {
    CLI::App app{"Naval nucleic acid valence geometry classification tool"};
    app.set_version_flag("--version", "0.1.0");

    // Measurement options
    bool do_bond = false;
    bool do_angle = false;
    std::vector<std::string> measure_args;

    app.add_flag("--bond", do_bond, "Classify bond length")->group("Measurement");
    app.add_flag("--angle", do_angle, "Classify angle")->group("Measurement");

    // List options
    bool list_residues = false;
    bool list_bonds = false;
    bool list_angles = false;
    bool list_rotamers = false;
    std::string list_residue_arg;

    app.add_flag("--list-residues", list_residues, "List available residues")->group("List");
    app.add_option("--list-bonds", list_residue_arg, "List available bonds for residue")->group("List");
    app.add_option("--list-angles", list_residue_arg, "List available angles for residue")->group("List");
    app.add_flag("--list-rotamer-groups", list_rotamers, "List all rotamer groups")->group("List");

    // Additional flags
    bool radians = false;
    bool json_output = false;
    std::string rotamer_group;

    app.add_flag("--radians", radians, "Angle input in radians (default: degrees)");
    app.add_flag("--json", json_output, "Output in JSON format");
    app.add_option("--rotamer-group", rotamer_group, "Filter by rotamer group name");

    // Positional arguments (for bond/angle measurements)
    app.add_option("args", measure_args, "Measurement arguments (residue atom1 atom2 [atom3] value)");

    app.allow_extras();

    try {
        app.parse(argc, argv);
    } catch (const CLI::ParseError &e) {
        return app.exit(e);
    }

    libnaval::NavalClassifier classifier;

    // Check list option first
    list_bonds = app.count("--list-bonds") > 0;
    list_angles = app.count("--list-angles") > 0;

    // Handle list commands
    if (list_residues) {
        auto residues = classifier.get_available_residues();
        for (const auto& r : residues) {
            std::cout << r << "\n";
        }
        return 0;
    }

    if (list_bonds) {
        auto bonds = classifier.get_available_measurements(list_residue_arg, libnaval::MeasurementType::BOND);
        for (const auto& b : bonds) {
            std::cout << b << "\n";
        }
        return 0;
    }

    if (list_angles) {
        auto angles = classifier.get_available_measurements(list_residue_arg, libnaval::MeasurementType::ANGLE);
        for (const auto& a : angles) {
            std::cout << a << "\n";
        }
        return 0;
    }

    if (list_rotamers) {
        auto rotamers = classifier.get_all_rotamer_groups();
        for (const auto& r : rotamers) {
            std::cout << r << "\n";
        }
        return 0;
    }

    // Handle measurement commands
    if (!do_bond && !do_angle) {
        std::cerr << "Error: Must specify --bond or --angle\n";
        std::cout << app.help();
        return 1;
    }

    if (do_bond && do_angle) {
        std::cerr << "Error: Cannot specify both --bond and --angle\n";
        return 1;
    }

    // Parse measurement arguments
    std::string residue;
    std::vector<std::string> atoms;
    double value;

    if (do_bond) {
        if (measure_args.size() != 4) {
            std::cerr << "Error: --bond requires: residue atom1 atom2 value\n";
            return 1;
        }
        residue = measure_args[0];
        atoms = {measure_args[1], measure_args[2]};
        try {
            value = std::stod(measure_args[3]);
        } catch (...) {
            std::cerr << "Error: Invalid value '" << measure_args[3] << "'\n";
            return 1;
        }
    } else if (do_angle) {
        if (measure_args.size() != 5) {
            std::cerr << "Error: --angle requires: residue atom1 atom2 atom3 value\n";
            return 1;
        }
        residue = measure_args[0];
        atoms = {measure_args[1], measure_args[2], measure_args[3]};
        try {
            value = std::stod(measure_args[4]);
        } catch (...) {
            std::cerr << "Error: Invalid value '" << measure_args[4] << "'\n";
            return 1;
        }
    }

    bool value_in_degrees = !radians;

    // Perform classification
    auto result = classifier.classify(residue, atoms, value, value_in_degrees);

    // Handle errors
    if (!result.found) {
        if (json_output) {
            std::cout << "{\n"
                      << "  \"found\": false,\n"
                      << "  \"message\": \"" << json_escape(result.message) << "\"\n"
                      << "}\n";
        } else {
            std::cerr << "Error: " << result.message << "\n";
        }
        return 1;
    }

    // Filter rotamers if requested
    std::vector<libnaval::RotamerResult> rotamers_to_display;
    if (!rotamer_group.empty()) {
        for (const auto& rotamer : result.rotamers) {
            if (rotamer.rotamer == rotamer_group) {
                rotamers_to_display.push_back(rotamer);
            }
        }
        if (rotamers_to_display.empty()) {
            std::cerr << "Warning: No rotamer found matching '" << rotamer_group << "'\n";
            std::cerr << "Available rotamer groups for this measurement:\n";
            for (const auto& rotamer : result.rotamers) {
                std::cerr << "  " << rotamer.rotamer << "\n";
            }
            return 1;
        }
    } else {
        rotamers_to_display = result.rotamers;
    }

    // Output results
    if (json_output) {
        print_json_output(result, residue, atoms, value, value_in_degrees, rotamers_to_display);
    } else {
        print_text_output(result, residue, atoms, value, value_in_degrees, rotamers_to_display);
    }

    return 0;
}
