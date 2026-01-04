#!/usr/bin/env python3
"""
Example usage of the naval library

Note: RS = PDB-NA Reference Set (as defined in 10.1093/nar/gkaf1335)
The PDB-NA Reference Set contains curated high-quality residue-level filtered data
with better than 1.8 Å resolution.
"""

import naval

def main():
    # Create classifier
    classifier = naval.NavalClassifier()

    print("NA-VAL Nucleic Acid Valence Geometry Classification Example")
    print("=" * 66)
    print()

    # Example 1: Classify a bond length (sugar atoms with 'p' notation)
    print("Example 1: Bond Length Classification")
    print("-" * 50)
    result = classifier.classify_bond("A", "C1p", "O4p", 1.413)

    print(f"Residue: A")
    print(f"Bond: C1p-O4p")
    print(f"Measured value: 1.413 Angstroms")

    # Show optional Z' bounds (None if missing)
    zprime_lower = result.zprime_lower if result.zprime_lower is not None else "N/A"
    zprime_upper = result.zprime_upper if result.zprime_upper is not None else "N/A"
    print(f"5Z' lower: {zprime_lower}")
    print(f"5Z' upper: {zprime_upper}")

    # Display prosco value (check if outside range)
    if result.prosco.value_outside_range:
        print(f"ProSco: None ({naval.prosco_group_to_string(result.prosco.group)})")
    else:
        if result.prosco.prosco < 0.1:
            print(f"ProSco: {result.prosco.prosco:.2e} % ({naval.prosco_group_to_string(result.prosco.group)})")
        elif result.prosco.prosco < 1.0:
            print(f"ProSco: {result.prosco.prosco:.2f} % ({naval.prosco_group_to_string(result.prosco.group)})")
        else:
            print(f"ProSco: {result.prosco.prosco:.1f} % ({naval.prosco_group_to_string(result.prosco.group)})")

    # Display rotamer tiers
    for rotamer in result.rotamers:
        print(f"NA-VAL Tier: {naval.tier_to_string(rotamer.tier)} ({rotamer.rotamer})")
    print()

    # Example 2: Classify an angle (demonstrating all notation formats)
    # Three ways: 'p' format, apostrophe in double quotes, escaped apostrophe in single quotes
    print("Example 2: Angle Classification (Mixed Formats)")
    print("-" * 50)
    result = classifier.classify_angle("A", "C2p", "C3'", 'C4\'', 104.5)

    print(f"Residue: A")
    print(f"Angle: C2p-C3'-C4' (all three formats work identically)")
    print(f"Measured value: 104.5°")

    # Display prosco value
    if result.prosco.value_outside_range:
        print(f"ProSco: None ({naval.prosco_group_to_string(result.prosco.group)})")
    else:
        if result.prosco.prosco < 0.1:
            print(f"ProSco: {result.prosco.prosco:.2e} % ({naval.prosco_group_to_string(result.prosco.group)})")
        elif result.prosco.prosco < 1.0:
            print(f"ProSco: {result.prosco.prosco:.2f} % ({naval.prosco_group_to_string(result.prosco.group)})")
        else:
            print(f"ProSco: {result.prosco.prosco:.1f} % ({naval.prosco_group_to_string(result.prosco.group)})")

    # Display rotamer results
    for rotamer in result.rotamers:
        print(f"NA-VAL Tier: {naval.tier_to_string(rotamer.tier)} ({rotamer.rotamer})")
    print()

    # Example 3: Test different values to see tier changes
    print("Example 3: Testing Different Values")
    print("-" * 50)
    test_values = [1.410, 1.413, 1.420, 1.430, 1.450]
    print(f"Testing bond C1p-O4p with different values:")
    print(f"{'Value':<10} {'ProSco':<15} {'Group':<12} {'Tier':<12}")

    for value in test_values:
        result = classifier.classify_bond("A", "C1p", "O4p", value)

        # Format prosco
        if result.prosco.value_outside_range:
            prosco_str = "None"
        elif result.prosco.prosco < 0.1:
            prosco_str = f"{result.prosco.prosco:.2e} %"
        elif result.prosco.prosco < 1.0:
            prosco_str = f"{result.prosco.prosco:.2f} %"
        else:
            prosco_str = f"{result.prosco.prosco:.1f} %"

        tier_str = naval.tier_to_string(result.rotamers[0].tier) if result.rotamers else "N/A"
        group_str = naval.prosco_group_to_string(result.prosco.group)

        print(f"{value:<10.3f} {prosco_str:<15} {group_str:<12} {tier_str:<12}")
    print()

    # Example 4: List available data
    print("Example 4: Available Data")
    print("-" * 50)
    residues = classifier.get_available_residues()
    print(f"Available residues: {', '.join(residues[:10])}...")
    print()

    bonds = classifier.get_available_measurements("A", naval.MeasurementType.BOND)
    print(f"Available bonds for residue A ({len(bonds)} total):")
    for bond in bonds[:5]:
        print(f"  - {bond}")
    print(f"  ...")
    print()

    angles = classifier.get_available_measurements("A", naval.MeasurementType.ANGLE)
    print(f"Available angles for residue A ({len(angles)} total):")
    for angle in angles[:5]:
        print(f"  - {angle}")
    print(f"  ...")
    print()

    # Example 5: Values outside known range
    print("Example 5: Values Outside Known Range")
    print("-" * 50)
    result = classifier.classify_bond("A", "C1p", "O4p", 999.9)  # Extreme value
    print(f"Bond: C1p-O4p")
    print(f"Measured value: 999.9 Angstroms (extreme)")

    if result.prosco.value_outside_range:
        print(f"ProSco: None ({naval.prosco_group_to_string(result.prosco.group)})")
        print(f"Value is outside the known reference set range")
    else:
        print(f"ProSco: {result.prosco.prosco:.1f} %")

    # Display RS neighbors - accessing all record details
    if result.prosco.rs_lower:
        rs = result.prosco.rs_lower
        print(f"RS lower: {rs.entry_id}_{rs.chain_id}_{rs.comp_id}_{rs.seq_id} "
              f"(model={rs.model_num}, alt={rs.alt_id}, ins={rs.ins_code}) "
              f"value={rs.value:.4f}")
    else:
        print(f"RS lower: None")

    if result.prosco.rs_upper:
        rs = result.prosco.rs_upper
        print(f"RS upper: {rs.entry_id}_{rs.chain_id}_{rs.comp_id}_{rs.seq_id} "
              f"(model={rs.model_num}, alt={rs.alt_id}, ins={rs.ins_code}) "
              f"value={rs.value:.4f}")
    else:
        print(f"RS upper: None")
    print()

    # Example 6: Error handling
    print("Example 6: Error Handling")
    print("-" * 50)
    result = classifier.classify_bond("X", "Y", "Z", 1.5)
    if not result.found:
        print(f"Classification failed: {result.message}")
        print("Tier: UNKNOWN")
    print()

    # Example 7: JSON output with to_dict()
    print("Example 7: JSON Serialization")
    print("-" * 50)
    result = classifier.classify_bond("A", "C1p", "O4p", 1.413)

    # Convert to dictionary - metadata is stored automatically!
    json_dict = result.to_dict()

    print(f"JSON output (automatic metadata from classify call):")
    import json
    print(json.dumps(json_dict, indent=2))
    print()

if __name__ == "__main__":
    main()
