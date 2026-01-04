#!/usr/bin/env python3
"""
Generate C++ source files with compact RS data storage.
RS entries stored as arrays of structs instead of nested initializers to minimize size.
"""

import json
import csv
import os
from pathlib import Path
from typing import Dict, List, Tuple

def parse_filename(filename: str) -> Tuple[str, str, Tuple[str, ...]]:
    """Parse filename like 'A_angle_C1p_C2p_C3p_prosco.json'"""
    parts = filename.replace('_prosco.json', '').split('_')
    residue = parts[0]
    meas_type = parts[1]
    atoms = tuple(parts[2:])
    return residue, meas_type, atoms

def normalize_atom_name(atom: str) -> str:
    """Normalize atom name from CSV format (C1') to JSON format (C1p)."""
    return atom.replace("'", "p")

def rotamer_matches_residue(rotamer_name: str, residue: str) -> bool:
    """Check if a rotamer name applies to the given residue."""
    if rotamer_name.startswith('PO4=='):
        return True
    if rotamer_name.startswith(('sugar_basic==', 'pucker==', 'other==')):
        residue_part = rotamer_name.split('==')[1]
        parts = residue_part.split('_')
        residue_codes = []
        for part in parts:
            if part in ['C2p', 'C3p', 'endo', 'other']:
                break
            residue_codes.append(part)
        return residue in residue_codes
    residue_codes = rotamer_name.replace('/', '_').split('_')
    return residue in residue_codes

def load_csv_data(csv_file: str) -> Dict:
    """Load restraints from CSV file."""
    data = {}
    with open(csv_file, 'r') as f:
        reader = csv.DictReader(f, delimiter=';')
        for row in reader:
            atoms = tuple(normalize_atom_name(row[f'atom{i}_name'])
                         for i in [1, 2, 3] if f'atom{i}_name' in row and row[f'atom{i}_name'])
            rotamer_name = row['name']
            if atoms not in data:
                data[atoms] = []
            data[atoms].append({
                'rotamer': rotamer_name,
                'csd_target': float(row['csd_target']),
                'csd_std': float(row['csd_std'])
            })
    return data

def load_json_data(json_file: str) -> Dict:
    """Load prosco distribution from JSON file."""
    with open(json_file, 'r') as f:
        return json.load(f)

def generate_measurement_file_compact(output_file: Path, residue: str, meas_type: str,
                                     atoms: tuple, json_file: Path,
                                     bond_stats: dict, angle_stats: dict) -> tuple:
    """Generate a single measurement's data file with compact RS storage."""

    # Determine canonical atom order
    canonical_atoms = atoms
    if meas_type == 'length' and len(atoms) == 2:
        reversed_atoms = (atoms[1], atoms[0])
        canonical_atoms = min(atoms, reversed_atoms)
    elif meas_type == 'angle' and len(atoms) == 3:
        reversed_atoms = (atoms[2], atoms[1], atoms[0])
        canonical_atoms = min(atoms, reversed_atoms)

    prosco_json = load_json_data(str(json_file))
    var_name = f"data_{residue}_{meas_type}_{'_'.join(canonical_atoms)}"

    # Find matching rotamers
    stats_dict = bond_stats if meas_type == 'length' else angle_stats
    rotamer_list = None
    atoms_to_match = [canonical_atoms]

    if any('r2' in atom for atom in canonical_atoms):
        atoms_no_r2 = tuple(atom.replace('r2', '') for atom in canonical_atoms)
        atoms_to_match.append(atoms_no_r2)

    for atom_tuple in atoms_to_match:
        if atom_tuple in stats_dict:
            rotamer_list = stats_dict[atom_tuple]
            break
        if len(atom_tuple) == 2:
            reversed_atoms = (atom_tuple[1], atom_tuple[0])
            if reversed_atoms in stats_dict:
                rotamer_list = stats_dict[reversed_atoms]
                break
        elif len(atom_tuple) == 3:
            reversed_atoms = (atom_tuple[2], atom_tuple[1], atom_tuple[0])
            if reversed_atoms in stats_dict:
                rotamer_list = stats_dict[reversed_atoms]
                break

    if not rotamer_list:
        print(f"ERROR: No CSV rotamers found for {residue} {meas_type} {canonical_atoms} - skipping")
        return None

    filtered_rotamers = [r for r in rotamer_list if rotamer_matches_residue(r['rotamer'], residue)]
    if not filtered_rotamers:
        print(f"ERROR: No rotamers match residue {residue} for {meas_type} {canonical_atoms} - skipping")
        return None

    with open(output_file, 'w') as f:
        f.write(f"""// Auto-generated file - DO NOT EDIT
// Data for {residue} {meas_type} {'-'.join(canonical_atoms)}
#include "libnaval/data.hpp"

namespace libnaval {{
namespace data {{

""")

        # Write RS bins as static arrays
        rs_data = prosco_json.get('rs', {})
        rs_bins = rs_data.get('bins', [])

        # Generate bin arrays and collect non-empty ones
        non_empty_bins = []
        for bin_idx, bin_entries in enumerate(rs_bins):
            valid_entries = [e for e in bin_entries if len(e) >= 8]
            if valid_entries:
                f.write(f"static const RSEntryRaw rs_bin_{bin_idx}[] = {{\n")
                for entry in valid_entries:
                    value, entry_id, model_num, chain_id, comp_id, alt_id, seq_id, ins_code = entry
                    # Convert 0-indexed to 1-indexed for crystal structures (only if 0)
                    if model_num == 0:
                        model_num = 1
                    f.write(f'    {{ {value:.6f}, "{entry_id}", {model_num}, "{chain_id}", "{comp_id}", "{alt_id}", {seq_id}, "{ins_code}" }},\n')
                f.write(f"}};\n\n")
                non_empty_bins.append((bin_idx, len(valid_entries)))

        # Generate arrays of pointers and sizes
        f.write(f"static const RSEntryRaw* const rs_bins[{len(rs_bins)}] = {{\n")
        for bin_idx in range(len(rs_bins)):
            has_data = any(idx == bin_idx for idx, _ in non_empty_bins)
            if has_data:
                f.write(f"    rs_bin_{bin_idx},\n")
            else:
                f.write(f"    nullptr,\n")
        f.write(f"}};\n\n")

        f.write(f"static const size_t rs_bin_sizes[{len(rs_bins)}] = {{\n")
        for bin_idx in range(len(rs_bins)):
            size = next((s for idx, s in non_empty_bins if idx == bin_idx), 0)
            f.write(f"    {size},\n")
        f.write(f"}};\n\n")

        # Write main data structure (extern to make it visible to other files)
        f.write(f"extern const MeasurementData {var_name};\n")
        f.write(f"const MeasurementData {var_name} = {{\n")
        f.write(f"    {{\n")

        # Write rotamers
        for i, rotamer in enumerate(filtered_rotamers):
            f.write(f"        {{ \"{rotamer['rotamer']}\", {rotamer['csd_target']}, {rotamer['csd_std']} }}")
            if i < len(filtered_rotamers) - 1:
                f.write(",\n")
            else:
                f.write("\n")
        f.write(f"    }},\n")
        f.write(f"    {{\n")

        # Write prosco data
        f.write(f"        {{ {', '.join(f'{x:.6f}' for x in prosco_json['from'])} }},\n")
        f.write(f"        {{ {', '.join(f'{x:.6f}' for x in prosco_json['to'])} }},\n")
        f.write(f"        {{ {', '.join(f'{x:.8g}' for x in prosco_json['prosco'])} }},\n")

        # RS bins pointers
        f.write(f"        rs_bins,\n")
        f.write(f"        rs_bin_sizes,\n")
        f.write(f"        {len(rs_bins)},\n")

        # zprime
        zprime = prosco_json.get('zprime', {})
        f.write(f"        {{ {zprime.get('weightedMedian', 0.0)}, {zprime.get('scaleFactorLower', 0.0)}, ")
        f.write(f"{zprime.get('scaleFactorUpper', 0.0)}, {zprime.get('ofConcernLower', 0.0)}, ")
        f.write(f"{zprime.get('ofConcernUpper', 0.0)} }}\n")
        f.write(f"    }}\n")
        f.write(f"}};\n\n")

        f.write("""} // namespace data
} // namespace libnaval
""")

    return var_name, canonical_atoms

def generate_main_accessor(output_file: Path, all_measurements: list):
    """Generate the main data.cpp with accessor functions."""

    with open(output_file, 'w') as f:
        f.write("""// Auto-generated file - DO NOT EDIT
#include "libnaval/data.hpp"
#include <algorithm>

namespace libnaval {
namespace data {

// External declarations from measurement-specific files
""")

        for var_name, residue, meas_type, atoms in all_measurements:
            f.write(f"extern const MeasurementData {var_name};\n")

        f.write("""
static const std::map<std::tuple<std::string, std::string, std::vector<std::string>>, const MeasurementData*>& get_data_map() {
    static std::map<std::tuple<std::string, std::string, std::vector<std::string>>, const MeasurementData*> data_map = {
""")

        for var_name, residue, meas_type, canonical_atoms in all_measurements:
            atoms_vec = '{' + ', '.join(f'"{a}"' for a in canonical_atoms) + '}'
            f.write(f'        {{std::make_tuple(std::string("{residue}"), std::string("{meas_type}"), std::vector<std::string>{atoms_vec}), &{var_name}}},\n')

            # Also add reversed order
            if meas_type == 'length' and len(canonical_atoms) == 2:
                reversed_atoms = (canonical_atoms[1], canonical_atoms[0])
                if reversed_atoms != canonical_atoms:
                    atoms_vec_rev = '{' + ', '.join(f'"{a}"' for a in reversed_atoms) + '}'
                    f.write(f'        {{std::make_tuple(std::string("{residue}"), std::string("{meas_type}"), std::vector<std::string>{atoms_vec_rev}), &{var_name}}},\n')
            elif meas_type == 'angle' and len(canonical_atoms) == 3:
                reversed_atoms = (canonical_atoms[2], canonical_atoms[1], canonical_atoms[0])
                if reversed_atoms != canonical_atoms:
                    atoms_vec_rev = '{' + ', '.join(f'"{a}"' for a in reversed_atoms) + '}'
                    f.write(f'        {{std::make_tuple(std::string("{residue}"), std::string("{meas_type}"), std::vector<std::string>{atoms_vec_rev}), &{var_name}}},\n')

        f.write("""    };
    return data_map;
}

const MeasurementData* get_measurement_data(
    const std::string& residue,
    const std::string& type,
    const std::vector<std::string>& atoms
) {
    const auto& data_map = get_data_map();
    auto key = std::make_tuple(residue, type, atoms);
    auto it = data_map.find(key);
    if (it != data_map.end()) {
        return it->second;
    }

    if (type == "length" && atoms.size() == 2) {
        std::vector<std::string> reversed_atoms = {atoms[1], atoms[0]};
        auto reversed_key = std::make_tuple(residue, type, reversed_atoms);
        it = data_map.find(reversed_key);
        if (it != data_map.end()) {
            return it->second;
        }
    } else if (type == "angle" && atoms.size() == 3) {
        std::vector<std::string> reversed_atoms = {atoms[2], atoms[1], atoms[0]};
        auto reversed_key = std::make_tuple(residue, type, reversed_atoms);
        it = data_map.find(reversed_key);
        if (it != data_map.end()) {
            return it->second;
        }
    }

    return nullptr;
}

std::vector<std::string> get_available_residues() {
    const auto& data_map = get_data_map();
    std::vector<std::string> residues;
    for (const auto& [key, _] : data_map) {
        const std::string& res = std::get<0>(key);
        if (std::find(residues.begin(), residues.end(), res) == residues.end()) {
            residues.push_back(res);
        }
    }
    return residues;
}

std::vector<std::string> get_available_measurements(
    const std::string& residue,
    const std::string& type
) {
    const auto& data_map = get_data_map();
    std::vector<std::string> measurements;
    std::vector<std::vector<std::string>> seen_canonical;

    for (const auto& [key, _] : data_map) {
        if (std::get<0>(key) == residue && std::get<1>(key) == type) {
            std::vector<std::string> atoms = std::get<2>(key);

            std::vector<std::string> normalized_atoms;
            for (const auto& atom : atoms) {
                if (atom.length() >= 2 && atom.substr(atom.length() - 2) == "r2") {
                    normalized_atoms.push_back(atom.substr(0, atom.length() - 2));
                } else {
                    normalized_atoms.push_back(atom);
                }
            }

            std::vector<std::string> canonical_atoms = normalized_atoms;
            if (type == "length" && normalized_atoms.size() == 2) {
                std::vector<std::string> reversed = {normalized_atoms[1], normalized_atoms[0]};
                canonical_atoms = std::min(normalized_atoms, reversed);
            } else if (type == "angle" && normalized_atoms.size() == 3) {
                std::vector<std::string> reversed = {normalized_atoms[2], normalized_atoms[1], normalized_atoms[0]};
                canonical_atoms = std::min(normalized_atoms, reversed);
            }

            if (std::find(seen_canonical.begin(), seen_canonical.end(), canonical_atoms) != seen_canonical.end()) {
                continue;
            }
            seen_canonical.push_back(canonical_atoms);

            std::string measurement;
            bool has_phosphate = false;
            for (const auto& atom : canonical_atoms) {
                if (atom == "P") {
                    has_phosphate = true;
                    break;
                }
            }

            for (size_t i = 0; i < canonical_atoms.size(); ++i) {
                if (i > 0) measurement += "-";
                std::string atom = canonical_atoms[i];

                bool has_r2_suffix = (atom.length() >= 2 && atom.substr(atom.length() - 2) == "r2");
                std::string base_atom = has_r2_suffix ? atom.substr(0, atom.length() - 2) : atom;

                bool is_prev_residue = has_r2_suffix ||
                                      (has_phosphate && (base_atom == "C3p" || base_atom == "O3p"));

                if (is_prev_residue) {
                    measurement += base_atom + " (residue-1)";
                } else {
                    measurement += base_atom;
                }
            }
            measurements.push_back(measurement);
        }
    }
    return measurements;
}

std::vector<std::string> get_rotamer_groups(
    const std::string& residue,
    const std::string& type,
    const std::vector<std::string>& atoms
) {
    std::vector<std::string> rotamer_groups;

    const MeasurementData* data = get_measurement_data(residue, type, atoms);
    if (!data) {
        return rotamer_groups;
    }

    for (const auto& rotamer : data->rotamers) {
        rotamer_groups.push_back(rotamer.rotamer);
    }

    return rotamer_groups;
}

std::vector<std::string> get_all_rotamer_groups() {
    const auto& data_map = get_data_map();
    std::vector<std::string> all_rotamers;

    for (const auto& [key, measurement_data] : data_map) {
        for (const auto& rotamer : measurement_data->rotamers) {
            if (std::find(all_rotamers.begin(), all_rotamers.end(), rotamer.rotamer) == all_rotamers.end()) {
                all_rotamers.push_back(rotamer.rotamer);
            }
        }
    }

    std::sort(all_rotamers.begin(), all_rotamers.end());
    return all_rotamers;
}

} // namespace data
} // namespace libnaval
""")

def main():
    script_dir = Path(__file__).parent
    root_dir = script_dir.parent
    assets_dir = root_dir / "assets"

    angles_dir = assets_dir / "angles_lengths"
    bond_csv = assets_dir / "bond_restraints.csv"
    angle_csv = assets_dir / "angle_restraints.csv"

    src_dir = root_dir / "src"
    data_dir = src_dir / "data_measurements"

    src_dir.mkdir(parents=True, exist_ok=True)
    data_dir.mkdir(parents=True, exist_ok=True)

    print("Loading CSV data...")
    bond_stats = load_csv_data(str(bond_csv))
    angle_stats = load_csv_data(str(angle_csv))

    json_files = list(Path(angles_dir).glob("*_prosco.json"))

    seen_measurements = {}
    all_measurements = []

    for json_file in sorted(json_files):
        residue, meas_type, atoms = parse_filename(json_file.name)

        canonical_atoms = atoms
        if meas_type == 'length' and len(atoms) == 2:
            reversed_atoms = (atoms[1], atoms[0])
            canonical_atoms = min(atoms, reversed_atoms)
        elif meas_type == 'angle' and len(atoms) == 3:
            reversed_atoms = (atoms[2], atoms[1], atoms[0])
            canonical_atoms = min(atoms, reversed_atoms)

        canonical_key = (residue, meas_type, canonical_atoms)
        if canonical_key in seen_measurements:
            continue

        safe_name = '_'.join(canonical_atoms).replace('(', '').replace(')', '').replace('-', '_')
        output_file = data_dir / f"data_{residue}_{meas_type}_{safe_name}.cpp"

        print(f"Generating {output_file.name}...")
        result = generate_measurement_file_compact(output_file, residue, meas_type, canonical_atoms,
                                                   json_file, bond_stats, angle_stats)

        if result:
            var_name, canonical_atoms = result
            seen_measurements[canonical_key] = var_name
            all_measurements.append((var_name, residue, meas_type, canonical_atoms))

    print("Generating main data.cpp...")
    generate_main_accessor(src_dir / "data.cpp", all_measurements)

    print("Done!")
    print(f"Generated {len(all_measurements)} measurement-specific files with compact RS storage")

if __name__ == "__main__":
    main()
