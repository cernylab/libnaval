#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "libnaval/naval.hpp"

namespace py = pybind11;

PYBIND11_MODULE(naval, m) {
    m.doc() = "Naval nucleic acid valence geometry classification library";

    // Enums
    py::enum_<libnaval::MeasurementType>(m, "MeasurementType")
        .value("BOND", libnaval::MeasurementType::BOND)
        .value("ANGLE", libnaval::MeasurementType::ANGLE)
        .export_values();

    py::enum_<libnaval::NavalTier>(m, "NavalTier")
        .value("PREFERRED", libnaval::NavalTier::PREFERRED, "ProSco >= 5 % OR (CSD within ±3σ AND Zprime within ±5)")
        .value("ALLOWED", libnaval::NavalTier::ALLOWED, "Zprime within ±5 but not Preferred")
        .value("OF_CONCERN", libnaval::NavalTier::OF_CONCERN, "Zprime outside ±5")
        .value("UNKNOWN", libnaval::NavalTier::UNKNOWN, "Unknown/not found")
        .export_values();

    py::enum_<libnaval::ProscoGroup>(m, "ProscoGroup")
        .value("UNKNOWN", libnaval::ProscoGroup::UNKNOWN, "Classification not performed or failed")
        .value("COMMON", libnaval::ProscoGroup::COMMON, "ProSco >= 5 %")
        .value("RARE", libnaval::ProscoGroup::RARE, "1/N <= ProSco < 5 %")
        .value("AMBIGUOUS", libnaval::ProscoGroup::AMBIGUOUS, "ProSco < 1/N but in a region that rises back above 1/N")
        .value("UNIQUE", libnaval::ProscoGroup::UNIQUE, "ProSco < 1/N (not in ambiguous region) or outside RS range")
        .export_values();

    // Structs
    // RS = PDB-NA Reference Set (as defined in 10.1093/nar/gkaf1335)
    // The PDB-NA Reference Set contains curated high-quality residue-level filtered data with better than 1.8 Å resolution.
    py::class_<libnaval::RSEntry>(m, "RSEntry", "Entry from the PDB-NA Reference Set (10.1093/nar/gkaf1335)")
        .def(py::init<>())
        .def_readwrite("value", &libnaval::RSEntry::value,
                       "Measured value from PDB-NA Reference Set")
        .def_readwrite("entry_id", &libnaval::RSEntry::entry_id,
                       "PDB entry ID")
        .def_readwrite("model_num", &libnaval::RSEntry::model_num,
                       "Model number")
        .def_readwrite("chain_id", &libnaval::RSEntry::chain_id,
                       "Chain identifier")
        .def_readwrite("comp_id", &libnaval::RSEntry::comp_id,
                       "Component/residue ID")
        .def_readwrite("alt_id", &libnaval::RSEntry::alt_id,
                       "Alternate location indicator")
        .def_readwrite("seq_id", &libnaval::RSEntry::seq_id,
                       "Sequence ID")
        .def_readwrite("ins_code", &libnaval::RSEntry::ins_code,
                       "Insertion code")
        .def("__repr__", [](const libnaval::RSEntry& e) {
            return "<RSEntry " + e.entry_id + " value=" + std::to_string(e.value) + ">";
        });

    py::class_<libnaval::ProscoResult>(m, "ProscoResult")
        .def(py::init<>())
        .def_readwrite("prosco", &libnaval::ProscoResult::prosco,
                       "ProSco percentile value (0-100)")
        .def_readwrite("bin_index", &libnaval::ProscoResult::bin_index,
                       "Index of the bin containing this value")
        .def_readwrite("group", &libnaval::ProscoResult::group,
                       "ProSco group classification (Common/Rare/Ambiguous/Unique)")
        .def_readwrite("value_outside_range", &libnaval::ProscoResult::value_outside_range,
                       "True if value is outside the known RS range")
        .def_readwrite("rs_lower", &libnaval::ProscoResult::rs_lower,
                       "Nearest lower RS entry (None if value below all RS entries)")
        .def_readwrite("rs_upper", &libnaval::ProscoResult::rs_upper,
                       "Nearest upper RS entry (None if value above all RS entries)")
        .def("__repr__", [](const libnaval::ProscoResult& p) {
            return "<ProscoResult ProSco=" + std::to_string(p.prosco) +
                   " group=" + libnaval::prosco_group_to_string(p.group) +
                   " bin=" + std::to_string(p.bin_index) + ">";
        });

    py::class_<libnaval::RotamerResult>(m, "RotamerResult")
        .def(py::init<>())
        .def_readwrite("rotamer", &libnaval::RotamerResult::rotamer,
                       "CSD rotamer name")
        .def_readwrite("tier", &libnaval::RotamerResult::tier,
                       "Naval tier for this rotamer")
        .def_readwrite("csd_target", &libnaval::RotamerResult::csd_target,
                       "CSD target value")
        .def_readwrite("csd_std", &libnaval::RotamerResult::csd_std,
                       "CSD standard deviation")
        .def_readwrite("csd_z_score", &libnaval::RotamerResult::csd_z_score,
                       "Signed Z-score from CSD target")
        .def("__repr__", [](const libnaval::RotamerResult& r) {
            return "<RotamerResult " + r.rotamer +
                   " tier=" + libnaval::tier_to_string(r.tier) +
                   " z=" + std::to_string(r.csd_z_score) + ">";
        });

    py::class_<libnaval::ClassificationResult>(m, "ClassificationResult")
        .def(py::init<>())
        .def_readwrite("found", &libnaval::ClassificationResult::found,
                       "Whether the measurement was found in the database")
        .def_readwrite("message", &libnaval::ClassificationResult::message,
                       "Classification message")
        .def_readwrite("prosco", &libnaval::ClassificationResult::prosco,
                       "ProSco probability result")
        .def_readwrite("zprime_lower", &libnaval::ClassificationResult::zprime_lower,
                       "Z' lower bound (of concern)")
        .def_readwrite("zprime_upper", &libnaval::ClassificationResult::zprime_upper,
                       "Z' upper bound (of concern)")
        .def_readwrite("rotamers", &libnaval::ClassificationResult::rotamers,
                       "All matching CSD rotamers with their classifications")
        .def_readwrite("residue", &libnaval::ClassificationResult::residue,
                       "Residue name from the classify call")
        .def_readwrite("atoms", &libnaval::ClassificationResult::atoms,
                       "Atom names from the classify call")
        .def_readwrite("value", &libnaval::ClassificationResult::value,
                       "Measured value from the classify call")
        .def_readwrite("value_in_degrees", &libnaval::ClassificationResult::value_in_degrees,
                       "True if value was in degrees (angles only)")
        .def("to_dict", [](const libnaval::ClassificationResult& result,
                          const std::string& rotamer_filter = "") {
            // Use metadata stored in the result
            bool is_angle = (result.atoms.size() == 3);
            std::string unit = is_angle ? (result.value_in_degrees ? "degrees" : "radians") : "Angstroms";

            py::dict d;
            d["residue"] = result.residue;
            d["atoms"] = result.atoms;
            d["measurement_type"] = is_angle ? "angle" : "bond";
            d["value"] = result.value;
            d["units"] = unit;

            if (!result.found) {
                d["found"] = false;
                d["message"] = result.message;
                return d;
            }

            // Z' bounds - convert to display units
            py::dict zprime_bounds;
            if (result.zprime_lower.has_value() && result.zprime_upper.has_value()) {
                double zprime_lower_display = result.zprime_lower.value();
                double zprime_upper_display = result.zprime_upper.value();
                if (is_angle && result.value_in_degrees) {
                    zprime_lower_display *= (180.0 / M_PI);
                    zprime_upper_display *= (180.0 / M_PI);
                }
                zprime_bounds["lower"] = zprime_lower_display;
                zprime_bounds["upper"] = zprime_upper_display;
            } else {
                zprime_bounds["lower"] = py::none();
                zprime_bounds["upper"] = py::none();
            }
            zprime_bounds["units"] = unit;
            d["zprime_bounds"] = zprime_bounds;

            // Reference set entries
            py::dict reference_set;
            if (result.prosco.rs_lower.has_value()) {
                const auto& rs = result.prosco.rs_lower.value();
                double rs_value = rs.value;
                if (is_angle && result.value_in_degrees) {
                    rs_value *= (180.0 / M_PI);
                }
                py::dict rs_entry;
                rs_entry["entry_id"] = rs.entry_id;
                rs_entry["chain_id"] = rs.chain_id;
                rs_entry["comp_id"] = rs.comp_id;
                rs_entry["seq_id"] = rs.seq_id;
                rs_entry["model_num"] = rs.model_num;
                rs_entry["alt_id"] = rs.alt_id;
                rs_entry["ins_code"] = rs.ins_code;
                rs_entry["value"] = rs_value;
                rs_entry["units"] = unit;
                reference_set["lower"] = rs_entry;
            } else {
                reference_set["lower"] = py::none();
            }

            if (result.prosco.rs_upper.has_value()) {
                const auto& rs = result.prosco.rs_upper.value();
                double rs_value = rs.value;
                if (is_angle && result.value_in_degrees) {
                    rs_value *= (180.0 / M_PI);
                }
                py::dict rs_entry;
                rs_entry["entry_id"] = rs.entry_id;
                rs_entry["chain_id"] = rs.chain_id;
                rs_entry["comp_id"] = rs.comp_id;
                rs_entry["seq_id"] = rs.seq_id;
                rs_entry["model_num"] = rs.model_num;
                rs_entry["alt_id"] = rs.alt_id;
                rs_entry["ins_code"] = rs.ins_code;
                rs_entry["value"] = rs_value;
                rs_entry["units"] = unit;
                reference_set["upper"] = rs_entry;
            } else {
                reference_set["upper"] = py::none();
            }
            d["reference_set"] = reference_set;

            // Prosco
            py::dict prosco;
            if (result.prosco.value_outside_range) {
                prosco["value"] = py::none();
            } else {
                prosco["value"] = result.prosco.prosco;
            }
            prosco["group"] = libnaval::prosco_group_to_string(result.prosco.group);
            prosco["value_outside_range"] = result.prosco.value_outside_range;
            d["prosco"] = prosco;

            // Naval tiers (filter by rotamer if specified)
            py::list naval_tiers;
            for (const auto& rotamer : result.rotamers) {
                if (!rotamer_filter.empty() && rotamer.rotamer != rotamer_filter) {
                    continue;
                }
                py::dict tier_entry;
                tier_entry["rotamer"] = rotamer.rotamer;
                tier_entry["tier"] = libnaval::tier_to_string(rotamer.tier);
                tier_entry["csd_target"] = rotamer.csd_target;
                tier_entry["csd_std"] = rotamer.csd_std;
                tier_entry["csd_z_score"] = rotamer.csd_z_score;
                naval_tiers.append(tier_entry);
            }
            d["naval_tiers"] = naval_tiers;

            d["found"] = true;
            d["message"] = result.message;

            return d;
        },
        py::arg("rotamer_filter") = "",
        "Convert result to JSON-serializable dictionary\n\n"
        "The result contains metadata from the classify call, including residue,\n"
        "atoms, value, and units. All angle values are automatically converted\n"
        "to the original units (degrees or radians) used in the classify call.\n\n"
        "Args:\n"
        "    rotamer_filter (str): Optional rotamer group to filter to\n\n"
        "Returns:\n"
        "    dict: JSON-serializable dictionary")
        .def("__repr__", [](const libnaval::ClassificationResult& r) {
            return "<ClassificationResult rotamers=" + std::to_string(r.rotamers.size()) +
                   " prosco=" + std::to_string(r.prosco.prosco) + "%>";
        });

    // Main classifier class
    py::class_<libnaval::NavalClassifier>(m, "NavalClassifier")
        .def(py::init<>(), "Create a new Naval classifier")
        .def("classify_bond", &libnaval::NavalClassifier::classify_bond,
             py::arg("residue"), py::arg("atom1"), py::arg("atom2"), py::arg("value"),
             "Classify a bond length\n\n"
             "Args:\n"
             "    residue (str): Residue name (e.g., 'A', 'G', 'C', 'U')\n"
             "    atom1 (str): First atom name\n"
             "    atom2 (str): Second atom name\n"
             "    value (float): Measured bond length value\n\n"
             "Returns:\n"
             "    ClassificationResult: The classification result")
        .def("classify_angle", &libnaval::NavalClassifier::classify_angle,
             py::arg("residue"), py::arg("atom1"), py::arg("atom2"), py::arg("atom3"), py::arg("value"),
             py::arg("value_in_degrees") = true,
             "Classify an angle\n\n"
             "Args:\n"
             "    residue (str): Residue name (e.g., 'A', 'G', 'C', 'U')\n"
             "    atom1 (str): First atom name\n"
             "    atom2 (str): Second atom name (vertex)\n"
             "    atom3 (str): Third atom name\n"
             "    value (float): Measured angle value\n"
             "    value_in_degrees (bool): True if value is in degrees (default), False if in radians\n\n"
             "Returns:\n"
             "    ClassificationResult: The classification result")
        .def("classify", &libnaval::NavalClassifier::classify,
             py::arg("residue"), py::arg("atoms"), py::arg("value"),
             py::arg("value_in_degrees") = true,
             "Classify a measurement (auto-detects bond vs angle from atom count)\n\n"
             "Args:\n"
             "    residue (str): Residue name\n"
             "    atoms (list[str]): List of 2 or 3 atom names\n"
             "    value (float): Measured value\n"
             "    value_in_degrees (bool): For angles, True if value is in degrees (default)\n\n"
             "Returns:\n"
             "    ClassificationResult: The classification result")
        .def("get_available_residues", &libnaval::NavalClassifier::get_available_residues,
             "Get list of available residue types\n\n"
             "Returns:\n"
             "    list[str]: List of residue names")
        .def("get_available_measurements", &libnaval::NavalClassifier::get_available_measurements,
             py::arg("residue"), py::arg("type"),
             "Get list of available measurements for a residue\n\n"
             "Args:\n"
             "    residue (str): Residue name\n"
             "    type (MeasurementType): BOND or ANGLE\n\n"
             "Returns:\n"
             "    list[str]: List of available measurements")
        .def("get_all_rotamer_groups", &libnaval::NavalClassifier::get_all_rotamer_groups,
             "Get list of all available rotamer groups\n\n"
             "Returns:\n"
             "    list[str]: List of rotamer group names");

    // Helper functions
    m.def("tier_to_string", &libnaval::tier_to_string,
          py::arg("tier"),
          "Convert NavalTier enum to string");
    m.def("string_to_tier", &libnaval::string_to_tier,
          py::arg("s"),
          "Convert string to NavalTier enum");
    m.def("prosco_group_to_string", &libnaval::prosco_group_to_string,
          py::arg("group"),
          "Convert ProscoGroup enum to string");

    // Module version
    m.attr("__version__") = "0.1.0";
}
