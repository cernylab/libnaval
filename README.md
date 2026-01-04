# libnaval - NA-VAL Nucleic Acid Valence Geometry Classification Library

## Citation

This library serves as the reference C++/Python implementation of the validation procedures described in:

**Cerny, J., Nicholls, R.A., Brzezinski, D., Berman, H.M., Gilski, M., Joosten, R., Kowiel, M., Lawson, C., Moriarty, N., Richardson, J.S., Schneider, B., Vonrhein, C., Williams, C.J., Jaskolski, M., and Egli, M.** (2026). New targets and procedures for validating the valence geometry of nucleic acid structures. *Nucleic Acids Research*, https://doi.org/10.1093/nar/gkaf1335

An interactive graphical (web-based) version is also available at [dnatco.datmos.org](https://dnatco.datmos.org), described in:

**Cerny, J., Maly, M., Bozikova, P., Prchalova, T., Svoboda, J., Biedermannova, L., and Schneider, B.** (2026). DNATCO v5.0: Integrated Web Platform for 3D Nucleic Acid Structure Analysis. *Nucleic Acids Research*, https://doi.org/10.1093/nar/gkaf1491

If you use this library in scientific or research applications, please cite the first paper (https://doi.org/10.1093/nar/gkaf1335). If you use the web interface, please also cite the second paper (https://doi.org/10.1093/nar/gkaf1491).

## Overview

A C++ library with Python bindings for classifying nucleic acid valence geometry measurements (bond lengths and angles) into NA-VAL tiers and ProSco groups. The library uses data from the PDB-NA Reference Set (as defined in the publications above), which contains curated high-quality residue-level filtered data with better than 1.8 Å resolution.

## Features

- **Naval Tier Classification**: Three-tier system (Preferred, Allowed, Of Concern) based on ProSco, CSD statistics, and Z' bounds
- **ProSco Groups**: Four-group classification (Common, Rare, Ambiguous, Unique) based on prevalence
- **Angle Wrapping**: Automatically handles angles in any range (negative, >180°, multiple rotations)
- **Unit Support**: Bond lengths in Ångströms, angles in degrees by default (radians optional)
- **Embedded Data**: All classification data compiled into the library - no external files needed
- **Multiple Interfaces**: C++ library, Python bindings, and standalone CLI tool

## Quick Start

```bash
# Initialize submodules and build
git submodule update --init --recursive
./build.sh

# Test the CLI
./build/naval_cli --bond A C2 N1 1.338
./build/naval_cli --angle A C2 N1 C6 118.5

# Install Python bindings
pip install .

# Use in Python
python3 examples/example.py
```

## Building

### Prerequisites

- C++17 compatible compiler
- CMake 3.15 or later
- Python 3.7+ (for Python bindings)
- pybind11 (optional, for Python bindings)

### Build Steps

```bash
# 1. Initialize git submodules (CLI11 for command-line tool)
git submodule update --init --recursive

# 2. Build C++ library and CLI
mkdir build && cd build
cmake ..
make -j4

# 3. Install (optional)
sudo make install
pip install .
```

### Building and Running Examples

Python example (after installing bindings with `pip install .`):
```bash
python3 examples/example.py
```

C++ example (requires `-DBUILD_EXAMPLES=ON` during build, OFF by default):
```bash
cmake -DBUILD_EXAMPLES=ON ..
make example_cpp
./build/example_cpp
```

**Note**: The classification data (JSON files in `assets/`) are published research results from the NA-VAL working group and are also archived on Zenodo (https://doi.org/10.5281/zenodo.15804875). These files should not be modified. The generated C++ source files (`src/data.cpp`, `include/libnaval/data.hpp`, `src/data_measurements/`) are included with the library and ready to use.

Build options:
- `-DBUILD_PYTHON_BINDINGS=ON/OFF` - Build Python bindings (default: ON if pybind11 found)
- `-DBUILD_CLI=ON/OFF` - Build command-line tool (default: ON)
- `-DBUILD_EXAMPLES=ON/OFF` - Build example programs (default: OFF)

## Classification System

### Naval Tiers

The library classifies measurements into three tiers:

- **Preferred**: measurement meeting one of:
  - ProSco ≥ 5 %, OR
  - Within CSD ±3σ AND within Z' ±5 bounds

- **Allowed**:
  - Within Z' ±5 bounds
  - But does not meet Preferred criteria

- **Of Concern**:
  - Outside Z' ±5 bounds

### ProSco Groups

Measurements are also classified into four ProSco groups based on prevalence:

- **Common**: ProSco ≥ 5 % (frequently observed)
- **Rare**: 100/N % ≤ ProSco < 5 % (infrequently observed yet supported by multiple occurences in the PDB-NA Reference Set)
- **Ambiguous**: ProSco < 100/N % but in a "valley" region (contains data above 100/N % surrounded by < 100/N %)
- **Unique**: ProSco < 100/N % (not in a "valley" or outside reference set range)

where N is the total number of reference set observations for that measurement. The counts are between 648 to about 3300, corresponding to the Rare/Unique(Ambiguous) limits between 0.15 % (for U base parameters) and 0.03 % (for pooled backbone parameters).

## Usage

### Atom Naming Conventions

For nucleic acid atoms that contain a prime ('), the library accepts both formats:

- **Preferred format**: `C1p`, `C2p`, `C3p`, `O4p`, `O5p`, etc. (apostrophe replaced with 'p')
- **Alternative format**: `C1'`, `C2'`, `C3'`, `O4'`, `O5'`, etc. (with apostrophe - requires quoting in shell)

The 'p' format is recommended as it's more user-friendly and doesn't require shell escaping. Both formats work identically in all interfaces (Python, C++, CLI). The library automatically normalizes these names internally.

**Examples:**
```bash
# Preferred format (no quoting needed):
./build/naval_cli --bond A C1p O4p 1.413
./build/naval_cli --angle A C2p C3p C4p 104.5

# Alternative format with apostrophes (requires quoting):
./build/naval_cli --bond A "C1'" "O4'" 1.413
./build/naval_cli --angle A C2\' C3\' C4\' 104.5

# Both formats produce identical results
```

### Python

```python
import naval

# Create classifier
classifier = naval.NavalClassifier()

# Classify a bond length (in Angstroms)
result = classifier.classify_bond("A", "C2", "N1", 1.338)
print(f"Tier: {naval.tier_to_string(result.rotamers[0].tier)}")
print(f"ProSco: {result.prosco.prosco:.1f} % ({naval.prosco_group_to_string(result.prosco.group)})")

# Classify an angle (degrees by default)
result = classifier.classify_angle("A", "C2", "N1", "C6", 118.5)
print(f"Tier: {naval.tier_to_string(result.rotamers[0].tier)}")

# Or in radians
import math
result = classifier.classify_angle("A", "C2", "N1", "C6",
                                   2.068, value_in_degrees=False)

# Auto-detect measurement type
result = classifier.classify("A", ["C2", "N1"], 1.338)  # Bond
result = classifier.classify("A", ["C2", "N1", "C6"], 118.5)  # Angle

# Query available data
residues = classifier.get_available_residues()
bonds = classifier.get_available_measurements("A", naval.MeasurementType.BOND)
angles = classifier.get_available_measurements("A", naval.MeasurementType.ANGLE)

# Get JSON output (same format as CLI --json)
# Metadata (residue, atoms, value, units) is stored automatically in the result!
import json
result_dict = result.to_dict()
print(json.dumps(result_dict, indent=2))

# Units are handled automatically - degrees example
result_deg = classifier.classify_angle("A", "C2p", "C3p", "C4p", 104.5)
print(json.dumps(result_deg.to_dict(), indent=2))  # Units: degrees

# Units are handled automatically - radians example
result_rad = classifier.classify_angle("A", "C2p", "C3p", "C4p", 1.8, value_in_degrees=False)
print(json.dumps(result_rad.to_dict(), indent=2))  # Units: radians

# List all rotamer groups available in the dataset
rotamers = classifier.get_all_rotamer_groups()
print(f"Total rotamer groups: {len(rotamers)}")
print("Rotamer groups:")
for r in rotamers:
    print(f"  - {r}")
```

### C++

```cpp
#include <libnaval/naval.hpp>
#include <iostream>

int main() {
    libnaval::NavalClassifier classifier;

    // Classify a bond
    auto result = classifier.classify_bond("A", "C2", "N1", 1.338);

    std::cout << "Tier: " << libnaval::tier_to_string(result.rotamers[0].tier) << "\n";
    std::cout << "ProSco: " << result.prosco.prosco << " % ("
              << libnaval::prosco_group_to_string(result.prosco.group) << ")\n";

    return 0;
}
```

Compile with:
```bash
# From the repository root (before installation):
g++ -std=c++17 -I./include -L./build -lnaval examples/example.cpp -o example
LD_LIBRARY_PATH=./build:$LD_LIBRARY_PATH ./example

# After installation (system-wide):
g++ -std=c++17 example.cpp -lnaval

# Or using CMake:
cmake -DBUILD_EXAMPLES=ON ..
make example_cpp
```

### Command-Line Interface

```bash
# Classify measurements
naval_cli --bond A C2 N1 1.338
naval_cli --angle A C2 N1 C6 118.5
naval_cli --angle A C2 N1 C6 2.068 --radians

# Filter by rotamer group
naval_cli --angle A C2 N1 C6 118.5 --rotamer-group pucker==A_G_C2p_endo

# List available data
naval_cli --list-residues
naval_cli --list-bonds A
naval_cli --list-angles A
naval_cli --list-rotamer-groups
```

Example output:
```
Residue: A
Atoms: C2-N1-C6
Type: Angle
Measured: 118.50 degrees
5Z' lower bound: 116.14 degrees
5Z' upper bound: 122.37 degrees
PDB-NA Reference Set lower: 4lvw_A_A_52 118.50 degrees
PDB-NA Reference Set upper: 1ik5_B_A_18 118.51 degrees
ProSco: 78.0 % (Common)
NA-VAL Tier: Preferred (A/DA)
```

## Understanding the Results

### ProSco Value
The ProSco value is a probability percentile (0-100 %):
- ≥ 5 % automatically qualifies as Preferred tier
- < ~0.1 % = extremely rare
- "None" = outside known reference set range

### CSD Z-Score
Number of standard deviations from the Cambridge Structural Database mean:
- Values within ±3σ contribute to Preferred classification (if also within Z' bounds)

### Z' Bounds
- Within ±5 Z' = Allowed or Preferred
- Outside ±5 Z' = Of Concern

### Reference Set Entries
The library shows the nearest Reference Set entries (rs_lower and rs_upper) bracketing your measurement, including:
- PDB entry ID, chain, residue, sequence number
- The actual measurement value from that structure

## Data Sources

The library combines three quality metrics:

1. **ProSco Distributions** (JSON files): Probability percentiles from the PDB-NA Reference Set
   - Bond lengths in Ångströms, angles in radians
   - Binned distributions with Z' statistics

2. **CSD Statistics** (CSV files): Cambridge Structural Database-derived statistics
   - Target values and standard deviations
   - Bond lengths in Ångströms, angles in degrees

3. **Reference Set** (embedded in JSON): Individual observations from high-quality structures
   - PDB-NA Reference Set (10.1093/nar/gkaf1335)
   - Resolution better than or equal to 1.8 Å

All data is embedded at compile time - no external files needed at runtime.

## Angle Wrapping

The library automatically handles angle wrapping:
- 118.5°, 241.5°, -118.5°, 478.5° all produce identical results
- Input angles are wrapped to [0°, 180°] or [0, π] range
- Works in both degrees and radians

## Project Structure

```
libnaval/
├── include/libnaval/
│   ├── naval.hpp           # Main API header
│   └── data.hpp            # Generated data header (auto-generated)
├── src/
│   ├── naval.cpp           # Core implementation
│   ├── naval_cli.cpp       # CLI tool
│   ├── python_bindings.cpp # Python bindings
│   ├── data.cpp            # Generated data (auto-generated)
│   └── data_measurements/  # Generated measurement data (auto-generated)
├── scripts/
│   └── generate_data_compact.py  # Data generation script
├── assets/
│   ├── angles_lengths/     # Source JSON files (1159 files)
│   ├── bond_restraints.csv # Source bond statistics
│   └── angle_restraints.csv # Source angle statistics
├── examples/
│   ├── example.py          # Python example
│   └── example.cpp         # C++ example
├── CMakeLists.txt
├── setup.py
└── README.md
```

## Troubleshooting

**Build error: `data.hpp not found`**
- Run `python3 scripts/generate_data_compact.py` first

**Build error: `pybind11 not found`**
- Install: `pip install pybind11`
- Or disable: `cmake -DBUILD_PYTHON_BINDINGS=OFF ..`

**Runtime error: "No data found for ..."**
- Check residue and atom names (case-sensitive)
- Use `--list-bonds` or `--list-angles` to see available measurements

**Python import error**
- Install bindings: `pip install .`
- Or add to PYTHONPATH: `export PYTHONPATH=/path/to/build:$PYTHONPATH`

## Development

### For Maintainers: Regenerating Data Files

If you need to update the embedded data from modified JSON files (maintainers only):

```bash
python3 scripts/generate_data_compact.py
```

This regenerates `src/data.cpp`, `include/libnaval/data.hpp`, and `src/data_measurements/*.cpp` from the JSON files in `assets/`.

### Adding New Data

1. Add JSON files to `assets/angles_lengths/`
2. Update CSV files in `assets/` if needed
3. Regenerate: `python3 scripts/generate_data_compact.py`
4. Rebuild: `cd build && make`

## License

This project uses a dual licensing approach:

### Software License (MIT)

The library code (C++, Python bindings, CLI tool, examples) is licensed under the **MIT License**.

Copyright (c) 2025 Jiří Černý, Laboratory of Structural Bioinformatics, Institute of Biotechnology of the Czech Academy of Sciences

See the [LICENSE](LICENSE) file for full details.

### Data License (CC BY 4.0)

The classification data files in the `assets/` directory are licensed under the **Creative Commons Attribution 4.0 International License (CC BY 4.0)**.

These data files are published research results from the NA-VAL working group and are archived at:
https://doi.org/10.5281/zenodo.15804875

To view the CC BY 4.0 license, visit: https://creativecommons.org/licenses/by/4.0/
