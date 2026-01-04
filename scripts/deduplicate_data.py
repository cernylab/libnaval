#!/usr/bin/env python3
"""
Deduplicate symmetric measurement files.
- Bonds: A-B and B-A are identical
- Angles: A-B-C and C-B-A are identical
"""

import json
from pathlib import Path
import sys

def normalize_atoms(atoms, meas_type):
    """
    Normalize atom order to canonical form.
    For bonds: sort alphabetically
    For angles: keep smaller first/last atom first
    """
    if meas_type == "length":
        # Bonds: A-B = B-A, canonicalize as sorted
        return tuple(sorted(atoms))
    elif meas_type == "angle":
        # Angles: A-B-C = C-B-A, canonicalize with smaller outer atom first
        if atoms[0] <= atoms[2]:
            return tuple(atoms)
        else:
            return tuple(reversed(atoms))
    return tuple(atoms)

def get_canonical_filename(filename):
    """Get canonical filename for this measurement."""
    # Parse: residue_type_atoms_prosco.json
    stem = filename.replace("_prosco.json", "")
    parts = stem.split("_", 2)

    if len(parts) < 3:
        return filename  # Can't parse, keep as-is

    residue = parts[0]
    meas_type = parts[1]
    atoms_str = parts[2]

    atoms = atoms_str.split("_")
    canonical_atoms = normalize_atoms(atoms, meas_type)
    canonical_atoms_str = "_".join(canonical_atoms)

    return f"{residue}_{meas_type}_{canonical_atoms_str}_prosco.json"

def main():
    script_dir = Path(__file__).parent
    root_dir = script_dir.parent
    data_dir = root_dir / "assets" / "angles_lengths"

    if not data_dir.exists():
        print(f"Error: {data_dir} not found")
        sys.exit(1)

    print("Analyzing JSON files for duplicates...")

    # Map canonical name -> list of actual files
    canonical_map = {}

    for json_file in sorted(data_dir.glob("*_prosco.json")):
        filename = json_file.name
        canonical = get_canonical_filename(filename)

        if canonical not in canonical_map:
            canonical_map[canonical] = []
        canonical_map[canonical].append(json_file)

    # Find duplicates
    duplicates = []
    kept = []

    for canonical, files in sorted(canonical_map.items()):
        if len(files) > 1:
            # Keep the first one (canonical), mark others for deletion
            kept.append(files[0].name)
            for dup in files[1:]:
                duplicates.append(dup.name)
                print(f"Duplicate: {dup.name} (same as {files[0].name})")
        else:
            kept.append(files[0].name)

    print(f"\nSummary:")
    print(f"  Total files: {len(kept) + len(duplicates)}")
    print(f"  Unique files: {len(kept)}")
    print(f"  Duplicates: {len(duplicates)}")
    print(f"  Space savings: ~{len(duplicates) * 100 // (len(kept) + len(duplicates))}%")

    if duplicates:
        response = input(f"\nDelete {len(duplicates)} duplicate files? [y/N]: ")
        if response.lower() == 'y':
            for dup_name in duplicates:
                dup_path = data_dir / dup_name
                dup_path.unlink()
                print(f"Deleted: {dup_name}")
            print(f"\nDeleted {len(duplicates)} duplicate files")
            print("Regenerate data files with: python3 scripts/generate_data_compact.py")
        else:
            print("No files deleted")
    else:
        print("\nNo duplicates found!")

if __name__ == "__main__":
    main()
