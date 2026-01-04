// Auto-generated file - DO NOT EDIT
#ifndef LIBNAVAL_DATA_HPP
#define LIBNAVAL_DATA_HPP

#include <map>
#include <string>
#include <vector>
#include <array>

namespace libnaval {
namespace data {

struct StatData {
    std::string rotamer;   // CSD rotamer name from CSV
    double csd_target;
    double csd_std;
};

// RS = PDB-NA Reference Set (as defined in 10.1093/nar/gkaf1335)
// Compact RS entry storage: [value, entry_id, model_num, chain_id, comp_id, alt_id, seq_id, ins_code]
// Stored as raw arrays to minimize size, converted to RSEntry on access
struct RSEntryRaw {
    double value;
    const char* entry_id;
    int model_num;
    const char* chain_id;
    const char* comp_id;
    const char* alt_id;
    int seq_id;
    const char* ins_code;
};

struct ProscoData {
    std::vector<double> from;
    std::vector<double> to;
    std::vector<double> prosco;

    // RS bins stored as compact arrays
    const RSEntryRaw* const* rs_bins;  // Array of pointers to arrays
    const size_t* rs_bin_sizes;        // Size of each bin
    size_t num_bins;                   // Total number of bins

    struct {
        double weightedMedian;
        double scaleFactorLower;
        double scaleFactorUpper;
        double ofConcernLower;
        double ofConcernUpper;
    } zprime;
};

struct MeasurementData {
    std::vector<StatData> rotamers;  // All CSD rotamers for this measurement
    ProscoData prosco;
};

// Data accessor
const MeasurementData* get_measurement_data(
    const std::string& residue,
    const std::string& type,
    const std::vector<std::string>& atoms
);

std::vector<std::string> get_available_residues();
std::vector<std::string> get_available_measurements(
    const std::string& residue,
    const std::string& type
);
std::vector<std::string> get_rotamer_groups(
    const std::string& residue,
    const std::string& type,
    const std::vector<std::string>& atoms
);
std::vector<std::string> get_all_rotamer_groups();

} // namespace data
} // namespace libnaval

#endif // LIBNAVAL_DATA_HPP
