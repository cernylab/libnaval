// Auto-generated file - DO NOT EDIT
#include "libnaval/data.hpp"
#include <algorithm>

namespace libnaval {
namespace data {

// External declarations from measurement-specific files
extern const MeasurementData data_A_angle_C1p_C2p_C3p;
extern const MeasurementData data_A_angle_C1p_C2p_O2p;
extern const MeasurementData data_A_angle_C1p_N9_C4;
extern const MeasurementData data_A_angle_C1p_N9_C8;
extern const MeasurementData data_A_angle_C1p_O4p_C4p;
extern const MeasurementData data_A_angle_C2_N1_C6;
extern const MeasurementData data_A_angle_C2_N3_C4;
extern const MeasurementData data_A_angle_C2p_C1p_N9;
extern const MeasurementData data_A_angle_C2p_C1p_O4p;
extern const MeasurementData data_A_angle_C2p_C3p_C4p;
extern const MeasurementData data_A_angle_C2p_C3p_O3p;
extern const MeasurementData data_A_angle_C3p_C2p_O2p;
extern const MeasurementData data_A_angle_C3p_C4p_C5p;
extern const MeasurementData data_A_angle_C3p_C4p_O4p;
extern const MeasurementData data_A_angle_C3p_O3p_P;
extern const MeasurementData data_A_angle_C3p_O3p_Pr2;
extern const MeasurementData data_A_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_A_angle_C4_C5_C6;
extern const MeasurementData data_A_angle_C4_C5_N7;
extern const MeasurementData data_A_angle_C4_N9_C8;
extern const MeasurementData data_A_angle_C4p_C3p_O3p;
extern const MeasurementData data_A_angle_C4p_C5p_O5p;
extern const MeasurementData data_A_angle_C5_C4_N3;
extern const MeasurementData data_A_angle_C5_C4_N9;
extern const MeasurementData data_A_angle_C5_C6_N1;
extern const MeasurementData data_A_angle_C5_C6_N6;
extern const MeasurementData data_A_angle_C5_N7_C8;
extern const MeasurementData data_A_angle_C5p_C4p_O4p;
extern const MeasurementData data_A_angle_C5p_O5p_P;
extern const MeasurementData data_A_angle_C6_C5_N7;
extern const MeasurementData data_A_angle_N1_C2_N3;
extern const MeasurementData data_A_angle_N1_C6_N6;
extern const MeasurementData data_A_angle_N3_C4_N9;
extern const MeasurementData data_A_angle_N7_C8_N9;
extern const MeasurementData data_A_angle_N9_C1p_O4p;
extern const MeasurementData data_A_angle_O3p_P_O5p;
extern const MeasurementData data_A_angle_O3p_P_OP1;
extern const MeasurementData data_A_angle_O3p_P_OP2;
extern const MeasurementData data_A_angle_O3pr2_P_O5p;
extern const MeasurementData data_A_angle_O3pr2_P_OP1;
extern const MeasurementData data_A_angle_O3pr2_P_OP2;
extern const MeasurementData data_A_angle_O5p_P_OP1;
extern const MeasurementData data_A_angle_O5p_P_OP2;
extern const MeasurementData data_A_angle_OP1_P_OP2;
extern const MeasurementData data_A_length_C1p_C2p;
extern const MeasurementData data_A_length_C1p_N9;
extern const MeasurementData data_A_length_C1p_O4p;
extern const MeasurementData data_A_length_C2_N1;
extern const MeasurementData data_A_length_C2_N3;
extern const MeasurementData data_A_length_C2p_C3p;
extern const MeasurementData data_A_length_C2p_O2p;
extern const MeasurementData data_A_length_C3p_C4p;
extern const MeasurementData data_A_length_C3p_O3p;
extern const MeasurementData data_A_length_C4_C5;
extern const MeasurementData data_A_length_C4_N3;
extern const MeasurementData data_A_length_C4_N9;
extern const MeasurementData data_A_length_C4p_C5p;
extern const MeasurementData data_A_length_C4p_O4p;
extern const MeasurementData data_A_length_C5_C6;
extern const MeasurementData data_A_length_C5_N7;
extern const MeasurementData data_A_length_C5p_O5p;
extern const MeasurementData data_A_length_C6_N1;
extern const MeasurementData data_A_length_C6_N6;
extern const MeasurementData data_A_length_C8_N7;
extern const MeasurementData data_A_length_C8_N9;
extern const MeasurementData data_A_length_O3p_P;
extern const MeasurementData data_A_length_O3pr2_P;
extern const MeasurementData data_A_length_O5p_P;
extern const MeasurementData data_A_length_OP1_P;
extern const MeasurementData data_A_length_OP2_P;
extern const MeasurementData data_C_angle_C1p_C2p_C3p;
extern const MeasurementData data_C_angle_C1p_C2p_O2p;
extern const MeasurementData data_C_angle_C1p_N1_C2;
extern const MeasurementData data_C_angle_C1p_N1_C6;
extern const MeasurementData data_C_angle_C1p_O4p_C4p;
extern const MeasurementData data_C_angle_C2_N1_C6;
extern const MeasurementData data_C_angle_C2_N3_C4;
extern const MeasurementData data_C_angle_C2p_C1p_N1;
extern const MeasurementData data_C_angle_C2p_C1p_O4p;
extern const MeasurementData data_C_angle_C2p_C3p_C4p;
extern const MeasurementData data_C_angle_C2p_C3p_O3p;
extern const MeasurementData data_C_angle_C3p_C2p_O2p;
extern const MeasurementData data_C_angle_C3p_C4p_C5p;
extern const MeasurementData data_C_angle_C3p_C4p_O4p;
extern const MeasurementData data_C_angle_C3p_O3p_P;
extern const MeasurementData data_C_angle_C3p_O3p_Pr2;
extern const MeasurementData data_C_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_C_angle_C4_C5_C6;
extern const MeasurementData data_C_angle_C4p_C3p_O3p;
extern const MeasurementData data_C_angle_C4p_C5p_O5p;
extern const MeasurementData data_C_angle_C5_C4_N3;
extern const MeasurementData data_C_angle_C5_C4_N4;
extern const MeasurementData data_C_angle_C5_C6_N1;
extern const MeasurementData data_C_angle_C5p_C4p_O4p;
extern const MeasurementData data_C_angle_C5p_O5p_P;
extern const MeasurementData data_C_angle_N1_C1p_O4p;
extern const MeasurementData data_C_angle_N1_C2_N3;
extern const MeasurementData data_C_angle_N1_C2_O2;
extern const MeasurementData data_C_angle_N3_C2_O2;
extern const MeasurementData data_C_angle_N3_C4_N4;
extern const MeasurementData data_C_angle_O3p_P_O5p;
extern const MeasurementData data_C_angle_O3p_P_OP1;
extern const MeasurementData data_C_angle_O3p_P_OP2;
extern const MeasurementData data_C_angle_O3pr2_P_O5p;
extern const MeasurementData data_C_angle_O3pr2_P_OP1;
extern const MeasurementData data_C_angle_O3pr2_P_OP2;
extern const MeasurementData data_C_angle_O5p_P_OP1;
extern const MeasurementData data_C_angle_O5p_P_OP2;
extern const MeasurementData data_C_angle_OP1_P_OP2;
extern const MeasurementData data_C_length_C1p_C2p;
extern const MeasurementData data_C_length_C1p_N1;
extern const MeasurementData data_C_length_C1p_O4p;
extern const MeasurementData data_C_length_C2_N1;
extern const MeasurementData data_C_length_C2_N3;
extern const MeasurementData data_C_length_C2_O2;
extern const MeasurementData data_C_length_C2p_C3p;
extern const MeasurementData data_C_length_C2p_O2p;
extern const MeasurementData data_C_length_C3p_C4p;
extern const MeasurementData data_C_length_C3p_O3p;
extern const MeasurementData data_C_length_C4_C5;
extern const MeasurementData data_C_length_C4_N3;
extern const MeasurementData data_C_length_C4_N4;
extern const MeasurementData data_C_length_C4p_C5p;
extern const MeasurementData data_C_length_C4p_O4p;
extern const MeasurementData data_C_length_C5_C6;
extern const MeasurementData data_C_length_C5p_O5p;
extern const MeasurementData data_C_length_C6_N1;
extern const MeasurementData data_C_length_O3p_P;
extern const MeasurementData data_C_length_O3pr2_P;
extern const MeasurementData data_C_length_O5p_P;
extern const MeasurementData data_C_length_OP1_P;
extern const MeasurementData data_C_length_OP2_P;
extern const MeasurementData data_DA_angle_C1p_C2p_C3p;
extern const MeasurementData data_DA_angle_C1p_N9_C4;
extern const MeasurementData data_DA_angle_C1p_N9_C8;
extern const MeasurementData data_DA_angle_C1p_O4p_C4p;
extern const MeasurementData data_DA_angle_C2_N1_C6;
extern const MeasurementData data_DA_angle_C2_N3_C4;
extern const MeasurementData data_DA_angle_C2p_C1p_N9;
extern const MeasurementData data_DA_angle_C2p_C1p_O4p;
extern const MeasurementData data_DA_angle_C2p_C3p_C4p;
extern const MeasurementData data_DA_angle_C2p_C3p_O3p;
extern const MeasurementData data_DA_angle_C3p_C4p_C5p;
extern const MeasurementData data_DA_angle_C3p_C4p_O4p;
extern const MeasurementData data_DA_angle_C3p_O3p_P;
extern const MeasurementData data_DA_angle_C3p_O3p_Pr2;
extern const MeasurementData data_DA_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_DA_angle_C4_C5_C6;
extern const MeasurementData data_DA_angle_C4_C5_N7;
extern const MeasurementData data_DA_angle_C4_N9_C8;
extern const MeasurementData data_DA_angle_C4p_C3p_O3p;
extern const MeasurementData data_DA_angle_C4p_C5p_O5p;
extern const MeasurementData data_DA_angle_C5_C4_N3;
extern const MeasurementData data_DA_angle_C5_C4_N9;
extern const MeasurementData data_DA_angle_C5_C6_N1;
extern const MeasurementData data_DA_angle_C5_C6_N6;
extern const MeasurementData data_DA_angle_C5_N7_C8;
extern const MeasurementData data_DA_angle_C5p_C4p_O4p;
extern const MeasurementData data_DA_angle_C5p_O5p_P;
extern const MeasurementData data_DA_angle_C6_C5_N7;
extern const MeasurementData data_DA_angle_N1_C2_N3;
extern const MeasurementData data_DA_angle_N1_C6_N6;
extern const MeasurementData data_DA_angle_N3_C4_N9;
extern const MeasurementData data_DA_angle_N7_C8_N9;
extern const MeasurementData data_DA_angle_N9_C1p_O4p;
extern const MeasurementData data_DA_angle_O3p_P_O5p;
extern const MeasurementData data_DA_angle_O3p_P_OP1;
extern const MeasurementData data_DA_angle_O3p_P_OP2;
extern const MeasurementData data_DA_angle_O3pr2_P_O5p;
extern const MeasurementData data_DA_angle_O3pr2_P_OP1;
extern const MeasurementData data_DA_angle_O3pr2_P_OP2;
extern const MeasurementData data_DA_angle_O5p_P_OP1;
extern const MeasurementData data_DA_angle_O5p_P_OP2;
extern const MeasurementData data_DA_angle_OP1_P_OP2;
extern const MeasurementData data_DA_length_C1p_C2p;
extern const MeasurementData data_DA_length_C1p_N9;
extern const MeasurementData data_DA_length_C1p_O4p;
extern const MeasurementData data_DA_length_C2_N1;
extern const MeasurementData data_DA_length_C2_N3;
extern const MeasurementData data_DA_length_C2p_C3p;
extern const MeasurementData data_DA_length_C3p_C4p;
extern const MeasurementData data_DA_length_C3p_O3p;
extern const MeasurementData data_DA_length_C4_C5;
extern const MeasurementData data_DA_length_C4_N3;
extern const MeasurementData data_DA_length_C4_N9;
extern const MeasurementData data_DA_length_C4p_C5p;
extern const MeasurementData data_DA_length_C4p_O4p;
extern const MeasurementData data_DA_length_C5_C6;
extern const MeasurementData data_DA_length_C5_N7;
extern const MeasurementData data_DA_length_C5p_O5p;
extern const MeasurementData data_DA_length_C6_N1;
extern const MeasurementData data_DA_length_C6_N6;
extern const MeasurementData data_DA_length_C8_N7;
extern const MeasurementData data_DA_length_C8_N9;
extern const MeasurementData data_DA_length_O3p_P;
extern const MeasurementData data_DA_length_O3pr2_P;
extern const MeasurementData data_DA_length_O5p_P;
extern const MeasurementData data_DA_length_OP1_P;
extern const MeasurementData data_DA_length_OP2_P;
extern const MeasurementData data_DC_angle_C1p_C2p_C3p;
extern const MeasurementData data_DC_angle_C1p_N1_C2;
extern const MeasurementData data_DC_angle_C1p_N1_C6;
extern const MeasurementData data_DC_angle_C1p_O4p_C4p;
extern const MeasurementData data_DC_angle_C2_N1_C6;
extern const MeasurementData data_DC_angle_C2_N3_C4;
extern const MeasurementData data_DC_angle_C2p_C1p_N1;
extern const MeasurementData data_DC_angle_C2p_C1p_O4p;
extern const MeasurementData data_DC_angle_C2p_C3p_C4p;
extern const MeasurementData data_DC_angle_C2p_C3p_O3p;
extern const MeasurementData data_DC_angle_C3p_C4p_C5p;
extern const MeasurementData data_DC_angle_C3p_C4p_O4p;
extern const MeasurementData data_DC_angle_C3p_O3p_P;
extern const MeasurementData data_DC_angle_C3p_O3p_Pr2;
extern const MeasurementData data_DC_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_DC_angle_C4_C5_C6;
extern const MeasurementData data_DC_angle_C4p_C3p_O3p;
extern const MeasurementData data_DC_angle_C4p_C5p_O5p;
extern const MeasurementData data_DC_angle_C5_C4_N3;
extern const MeasurementData data_DC_angle_C5_C4_N4;
extern const MeasurementData data_DC_angle_C5_C6_N1;
extern const MeasurementData data_DC_angle_C5p_C4p_O4p;
extern const MeasurementData data_DC_angle_C5p_O5p_P;
extern const MeasurementData data_DC_angle_N1_C1p_O4p;
extern const MeasurementData data_DC_angle_N1_C2_N3;
extern const MeasurementData data_DC_angle_N1_C2_O2;
extern const MeasurementData data_DC_angle_N3_C2_O2;
extern const MeasurementData data_DC_angle_N3_C4_N4;
extern const MeasurementData data_DC_angle_O3p_P_O5p;
extern const MeasurementData data_DC_angle_O3p_P_OP1;
extern const MeasurementData data_DC_angle_O3p_P_OP2;
extern const MeasurementData data_DC_angle_O3pr2_P_O5p;
extern const MeasurementData data_DC_angle_O3pr2_P_OP1;
extern const MeasurementData data_DC_angle_O3pr2_P_OP2;
extern const MeasurementData data_DC_angle_O5p_P_OP1;
extern const MeasurementData data_DC_angle_O5p_P_OP2;
extern const MeasurementData data_DC_angle_OP1_P_OP2;
extern const MeasurementData data_DC_length_C1p_C2p;
extern const MeasurementData data_DC_length_C1p_N1;
extern const MeasurementData data_DC_length_C1p_O4p;
extern const MeasurementData data_DC_length_C2_N1;
extern const MeasurementData data_DC_length_C2_N3;
extern const MeasurementData data_DC_length_C2_O2;
extern const MeasurementData data_DC_length_C2p_C3p;
extern const MeasurementData data_DC_length_C3p_C4p;
extern const MeasurementData data_DC_length_C3p_O3p;
extern const MeasurementData data_DC_length_C4_C5;
extern const MeasurementData data_DC_length_C4_N3;
extern const MeasurementData data_DC_length_C4_N4;
extern const MeasurementData data_DC_length_C4p_C5p;
extern const MeasurementData data_DC_length_C4p_O4p;
extern const MeasurementData data_DC_length_C5_C6;
extern const MeasurementData data_DC_length_C5p_O5p;
extern const MeasurementData data_DC_length_C6_N1;
extern const MeasurementData data_DC_length_O3p_P;
extern const MeasurementData data_DC_length_O3pr2_P;
extern const MeasurementData data_DC_length_O5p_P;
extern const MeasurementData data_DC_length_OP1_P;
extern const MeasurementData data_DC_length_OP2_P;
extern const MeasurementData data_DG_angle_C1p_C2p_C3p;
extern const MeasurementData data_DG_angle_C1p_N9_C4;
extern const MeasurementData data_DG_angle_C1p_N9_C8;
extern const MeasurementData data_DG_angle_C1p_O4p_C4p;
extern const MeasurementData data_DG_angle_C2_N1_C6;
extern const MeasurementData data_DG_angle_C2_N3_C4;
extern const MeasurementData data_DG_angle_C2p_C1p_N9;
extern const MeasurementData data_DG_angle_C2p_C1p_O4p;
extern const MeasurementData data_DG_angle_C2p_C3p_C4p;
extern const MeasurementData data_DG_angle_C2p_C3p_O3p;
extern const MeasurementData data_DG_angle_C3p_C4p_C5p;
extern const MeasurementData data_DG_angle_C3p_C4p_O4p;
extern const MeasurementData data_DG_angle_C3p_O3p_P;
extern const MeasurementData data_DG_angle_C3p_O3p_Pr2;
extern const MeasurementData data_DG_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_DG_angle_C4_C5_C6;
extern const MeasurementData data_DG_angle_C4_C5_N7;
extern const MeasurementData data_DG_angle_C4_N9_C8;
extern const MeasurementData data_DG_angle_C4p_C3p_O3p;
extern const MeasurementData data_DG_angle_C4p_C5p_O5p;
extern const MeasurementData data_DG_angle_C5_C4_N3;
extern const MeasurementData data_DG_angle_C5_C4_N9;
extern const MeasurementData data_DG_angle_C5_C6_N1;
extern const MeasurementData data_DG_angle_C5_C6_O6;
extern const MeasurementData data_DG_angle_C5_N7_C8;
extern const MeasurementData data_DG_angle_C5p_C4p_O4p;
extern const MeasurementData data_DG_angle_C5p_O5p_P;
extern const MeasurementData data_DG_angle_C6_C5_N7;
extern const MeasurementData data_DG_angle_N1_C2_N2;
extern const MeasurementData data_DG_angle_N1_C2_N3;
extern const MeasurementData data_DG_angle_N1_C6_O6;
extern const MeasurementData data_DG_angle_N2_C2_N3;
extern const MeasurementData data_DG_angle_N3_C4_N9;
extern const MeasurementData data_DG_angle_N7_C8_N9;
extern const MeasurementData data_DG_angle_N9_C1p_O4p;
extern const MeasurementData data_DG_angle_O3p_P_O5p;
extern const MeasurementData data_DG_angle_O3p_P_OP1;
extern const MeasurementData data_DG_angle_O3p_P_OP2;
extern const MeasurementData data_DG_angle_O3pr2_P_O5p;
extern const MeasurementData data_DG_angle_O3pr2_P_OP1;
extern const MeasurementData data_DG_angle_O3pr2_P_OP2;
extern const MeasurementData data_DG_angle_O5p_P_OP1;
extern const MeasurementData data_DG_angle_O5p_P_OP2;
extern const MeasurementData data_DG_angle_OP1_P_OP2;
extern const MeasurementData data_DG_length_C1p_C2p;
extern const MeasurementData data_DG_length_C1p_N9;
extern const MeasurementData data_DG_length_C1p_O4p;
extern const MeasurementData data_DG_length_C2_N1;
extern const MeasurementData data_DG_length_C2_N2;
extern const MeasurementData data_DG_length_C2_N3;
extern const MeasurementData data_DG_length_C2p_C3p;
extern const MeasurementData data_DG_length_C3p_C4p;
extern const MeasurementData data_DG_length_C3p_O3p;
extern const MeasurementData data_DG_length_C4_C5;
extern const MeasurementData data_DG_length_C4_N3;
extern const MeasurementData data_DG_length_C4_N9;
extern const MeasurementData data_DG_length_C4p_C5p;
extern const MeasurementData data_DG_length_C4p_O4p;
extern const MeasurementData data_DG_length_C5_C6;
extern const MeasurementData data_DG_length_C5_N7;
extern const MeasurementData data_DG_length_C5p_O5p;
extern const MeasurementData data_DG_length_C6_N1;
extern const MeasurementData data_DG_length_C6_O6;
extern const MeasurementData data_DG_length_C8_N7;
extern const MeasurementData data_DG_length_C8_N9;
extern const MeasurementData data_DG_length_O3p_P;
extern const MeasurementData data_DG_length_O3pr2_P;
extern const MeasurementData data_DG_length_O5p_P;
extern const MeasurementData data_DG_length_OP1_P;
extern const MeasurementData data_DG_length_OP2_P;
extern const MeasurementData data_DT_angle_C1p_C2p_C3p;
extern const MeasurementData data_DT_angle_C1p_N1_C2;
extern const MeasurementData data_DT_angle_C1p_N1_C6;
extern const MeasurementData data_DT_angle_C1p_O4p_C4p;
extern const MeasurementData data_DT_angle_C2_N1_C6;
extern const MeasurementData data_DT_angle_C2_N3_C4;
extern const MeasurementData data_DT_angle_C2p_C1p_N1;
extern const MeasurementData data_DT_angle_C2p_C1p_O4p;
extern const MeasurementData data_DT_angle_C2p_C3p_C4p;
extern const MeasurementData data_DT_angle_C2p_C3p_O3p;
extern const MeasurementData data_DT_angle_C3p_C4p_C5p;
extern const MeasurementData data_DT_angle_C3p_C4p_O4p;
extern const MeasurementData data_DT_angle_C3p_O3p_P;
extern const MeasurementData data_DT_angle_C3p_O3p_Pr2;
extern const MeasurementData data_DT_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_DT_angle_C4_C5_C6;
extern const MeasurementData data_DT_angle_C4_C5_C7;
extern const MeasurementData data_DT_angle_C4p_C3p_O3p;
extern const MeasurementData data_DT_angle_C4p_C5p_O5p;
extern const MeasurementData data_DT_angle_C5_C4_N3;
extern const MeasurementData data_DT_angle_C5_C4_O4;
extern const MeasurementData data_DT_angle_C5_C6_N1;
extern const MeasurementData data_DT_angle_C5p_C4p_O4p;
extern const MeasurementData data_DT_angle_C5p_O5p_P;
extern const MeasurementData data_DT_angle_C6_C5_C7;
extern const MeasurementData data_DT_angle_N1_C1p_O4p;
extern const MeasurementData data_DT_angle_N1_C2_N3;
extern const MeasurementData data_DT_angle_N1_C2_O2;
extern const MeasurementData data_DT_angle_N3_C2_O2;
extern const MeasurementData data_DT_angle_N3_C4_O4;
extern const MeasurementData data_DT_angle_O3p_P_O5p;
extern const MeasurementData data_DT_angle_O3p_P_OP1;
extern const MeasurementData data_DT_angle_O3p_P_OP2;
extern const MeasurementData data_DT_angle_O3pr2_P_O5p;
extern const MeasurementData data_DT_angle_O3pr2_P_OP1;
extern const MeasurementData data_DT_angle_O3pr2_P_OP2;
extern const MeasurementData data_DT_angle_O5p_P_OP1;
extern const MeasurementData data_DT_angle_O5p_P_OP2;
extern const MeasurementData data_DT_angle_OP1_P_OP2;
extern const MeasurementData data_DT_length_C1p_C2p;
extern const MeasurementData data_DT_length_C1p_N1;
extern const MeasurementData data_DT_length_C1p_O4p;
extern const MeasurementData data_DT_length_C2_N1;
extern const MeasurementData data_DT_length_C2_N3;
extern const MeasurementData data_DT_length_C2_O2;
extern const MeasurementData data_DT_length_C2p_C3p;
extern const MeasurementData data_DT_length_C3p_C4p;
extern const MeasurementData data_DT_length_C3p_O3p;
extern const MeasurementData data_DT_length_C4_C5;
extern const MeasurementData data_DT_length_C4_N3;
extern const MeasurementData data_DT_length_C4_O4;
extern const MeasurementData data_DT_length_C4p_C5p;
extern const MeasurementData data_DT_length_C4p_O4p;
extern const MeasurementData data_DT_length_C5_C6;
extern const MeasurementData data_DT_length_C5_C7;
extern const MeasurementData data_DT_length_C5p_O5p;
extern const MeasurementData data_DT_length_C6_N1;
extern const MeasurementData data_DT_length_O3p_P;
extern const MeasurementData data_DT_length_O3pr2_P;
extern const MeasurementData data_DT_length_O5p_P;
extern const MeasurementData data_DT_length_OP1_P;
extern const MeasurementData data_DT_length_OP2_P;
extern const MeasurementData data_DU_angle_C1p_C2p_C3p;
extern const MeasurementData data_DU_angle_C1p_N1_C2;
extern const MeasurementData data_DU_angle_C1p_N1_C6;
extern const MeasurementData data_DU_angle_C1p_O4p_C4p;
extern const MeasurementData data_DU_angle_C2_N1_C6;
extern const MeasurementData data_DU_angle_C2_N3_C4;
extern const MeasurementData data_DU_angle_C2p_C1p_N1;
extern const MeasurementData data_DU_angle_C2p_C1p_O4p;
extern const MeasurementData data_DU_angle_C2p_C3p_C4p;
extern const MeasurementData data_DU_angle_C2p_C3p_O3p;
extern const MeasurementData data_DU_angle_C3p_C4p_C5p;
extern const MeasurementData data_DU_angle_C3p_C4p_O4p;
extern const MeasurementData data_DU_angle_C3p_O3p_P;
extern const MeasurementData data_DU_angle_C3p_O3p_Pr2;
extern const MeasurementData data_DU_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_DU_angle_C4_C5_C6;
extern const MeasurementData data_DU_angle_C4p_C3p_O3p;
extern const MeasurementData data_DU_angle_C4p_C5p_O5p;
extern const MeasurementData data_DU_angle_C5_C4_N3;
extern const MeasurementData data_DU_angle_C5_C4_O4;
extern const MeasurementData data_DU_angle_C5_C6_N1;
extern const MeasurementData data_DU_angle_C5p_C4p_O4p;
extern const MeasurementData data_DU_angle_C5p_O5p_P;
extern const MeasurementData data_DU_angle_N1_C1p_O4p;
extern const MeasurementData data_DU_angle_N1_C2_N3;
extern const MeasurementData data_DU_angle_N1_C2_O2;
extern const MeasurementData data_DU_angle_N3_C2_O2;
extern const MeasurementData data_DU_angle_N3_C4_O4;
extern const MeasurementData data_DU_angle_O3p_P_O5p;
extern const MeasurementData data_DU_angle_O3p_P_OP1;
extern const MeasurementData data_DU_angle_O3p_P_OP2;
extern const MeasurementData data_DU_angle_O3pr2_P_O5p;
extern const MeasurementData data_DU_angle_O3pr2_P_OP1;
extern const MeasurementData data_DU_angle_O3pr2_P_OP2;
extern const MeasurementData data_DU_angle_O5p_P_OP1;
extern const MeasurementData data_DU_angle_O5p_P_OP2;
extern const MeasurementData data_DU_angle_OP1_P_OP2;
extern const MeasurementData data_DU_length_C1p_C2p;
extern const MeasurementData data_DU_length_C1p_N1;
extern const MeasurementData data_DU_length_C1p_O4p;
extern const MeasurementData data_DU_length_C2_N1;
extern const MeasurementData data_DU_length_C2_N3;
extern const MeasurementData data_DU_length_C2_O2;
extern const MeasurementData data_DU_length_C2p_C3p;
extern const MeasurementData data_DU_length_C3p_C4p;
extern const MeasurementData data_DU_length_C3p_O3p;
extern const MeasurementData data_DU_length_C4_C5;
extern const MeasurementData data_DU_length_C4_N3;
extern const MeasurementData data_DU_length_C4_O4;
extern const MeasurementData data_DU_length_C4p_C5p;
extern const MeasurementData data_DU_length_C4p_O4p;
extern const MeasurementData data_DU_length_C5_C6;
extern const MeasurementData data_DU_length_C5p_O5p;
extern const MeasurementData data_DU_length_C6_N1;
extern const MeasurementData data_DU_length_O3p_P;
extern const MeasurementData data_DU_length_O3pr2_P;
extern const MeasurementData data_DU_length_O5p_P;
extern const MeasurementData data_DU_length_OP1_P;
extern const MeasurementData data_DU_length_OP2_P;
extern const MeasurementData data_G_angle_C1p_C2p_C3p;
extern const MeasurementData data_G_angle_C1p_C2p_O2p;
extern const MeasurementData data_G_angle_C1p_N9_C4;
extern const MeasurementData data_G_angle_C1p_N9_C8;
extern const MeasurementData data_G_angle_C1p_O4p_C4p;
extern const MeasurementData data_G_angle_C2_N1_C6;
extern const MeasurementData data_G_angle_C2_N3_C4;
extern const MeasurementData data_G_angle_C2p_C1p_N9;
extern const MeasurementData data_G_angle_C2p_C1p_O4p;
extern const MeasurementData data_G_angle_C2p_C3p_C4p;
extern const MeasurementData data_G_angle_C2p_C3p_O3p;
extern const MeasurementData data_G_angle_C3p_C2p_O2p;
extern const MeasurementData data_G_angle_C3p_C4p_C5p;
extern const MeasurementData data_G_angle_C3p_C4p_O4p;
extern const MeasurementData data_G_angle_C3p_O3p_P;
extern const MeasurementData data_G_angle_C3p_O3p_Pr2;
extern const MeasurementData data_G_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_G_angle_C4_C5_C6;
extern const MeasurementData data_G_angle_C4_C5_N7;
extern const MeasurementData data_G_angle_C4_N9_C8;
extern const MeasurementData data_G_angle_C4p_C3p_O3p;
extern const MeasurementData data_G_angle_C4p_C5p_O5p;
extern const MeasurementData data_G_angle_C5_C4_N3;
extern const MeasurementData data_G_angle_C5_C4_N9;
extern const MeasurementData data_G_angle_C5_C6_N1;
extern const MeasurementData data_G_angle_C5_C6_O6;
extern const MeasurementData data_G_angle_C5_N7_C8;
extern const MeasurementData data_G_angle_C5p_C4p_O4p;
extern const MeasurementData data_G_angle_C5p_O5p_P;
extern const MeasurementData data_G_angle_C6_C5_N7;
extern const MeasurementData data_G_angle_N1_C2_N2;
extern const MeasurementData data_G_angle_N1_C2_N3;
extern const MeasurementData data_G_angle_N1_C6_O6;
extern const MeasurementData data_G_angle_N2_C2_N3;
extern const MeasurementData data_G_angle_N3_C4_N9;
extern const MeasurementData data_G_angle_N7_C8_N9;
extern const MeasurementData data_G_angle_N9_C1p_O4p;
extern const MeasurementData data_G_angle_O3p_P_O5p;
extern const MeasurementData data_G_angle_O3p_P_OP1;
extern const MeasurementData data_G_angle_O3p_P_OP2;
extern const MeasurementData data_G_angle_O3pr2_P_O5p;
extern const MeasurementData data_G_angle_O3pr2_P_OP1;
extern const MeasurementData data_G_angle_O3pr2_P_OP2;
extern const MeasurementData data_G_angle_O5p_P_OP1;
extern const MeasurementData data_G_angle_O5p_P_OP2;
extern const MeasurementData data_G_angle_OP1_P_OP2;
extern const MeasurementData data_G_length_C1p_C2p;
extern const MeasurementData data_G_length_C1p_N9;
extern const MeasurementData data_G_length_C1p_O4p;
extern const MeasurementData data_G_length_C2_N1;
extern const MeasurementData data_G_length_C2_N2;
extern const MeasurementData data_G_length_C2_N3;
extern const MeasurementData data_G_length_C2p_C3p;
extern const MeasurementData data_G_length_C2p_O2p;
extern const MeasurementData data_G_length_C3p_C4p;
extern const MeasurementData data_G_length_C3p_O3p;
extern const MeasurementData data_G_length_C4_C5;
extern const MeasurementData data_G_length_C4_N3;
extern const MeasurementData data_G_length_C4_N9;
extern const MeasurementData data_G_length_C4p_C5p;
extern const MeasurementData data_G_length_C4p_O4p;
extern const MeasurementData data_G_length_C5_C6;
extern const MeasurementData data_G_length_C5_N7;
extern const MeasurementData data_G_length_C5p_O5p;
extern const MeasurementData data_G_length_C6_N1;
extern const MeasurementData data_G_length_C6_O6;
extern const MeasurementData data_G_length_C8_N7;
extern const MeasurementData data_G_length_C8_N9;
extern const MeasurementData data_G_length_O3p_P;
extern const MeasurementData data_G_length_O3pr2_P;
extern const MeasurementData data_G_length_O5p_P;
extern const MeasurementData data_G_length_OP1_P;
extern const MeasurementData data_G_length_OP2_P;
extern const MeasurementData data_U_angle_C1p_C2p_C3p;
extern const MeasurementData data_U_angle_C1p_C2p_O2p;
extern const MeasurementData data_U_angle_C1p_N1_C2;
extern const MeasurementData data_U_angle_C1p_N1_C6;
extern const MeasurementData data_U_angle_C1p_O4p_C4p;
extern const MeasurementData data_U_angle_C2_N1_C6;
extern const MeasurementData data_U_angle_C2_N3_C4;
extern const MeasurementData data_U_angle_C2p_C1p_N1;
extern const MeasurementData data_U_angle_C2p_C1p_O4p;
extern const MeasurementData data_U_angle_C2p_C3p_C4p;
extern const MeasurementData data_U_angle_C2p_C3p_O3p;
extern const MeasurementData data_U_angle_C3p_C2p_O2p;
extern const MeasurementData data_U_angle_C3p_C4p_C5p;
extern const MeasurementData data_U_angle_C3p_C4p_O4p;
extern const MeasurementData data_U_angle_C3p_O3p_P;
extern const MeasurementData data_U_angle_C3p_O3p_Pr2;
extern const MeasurementData data_U_angle_C3pr2_O3pr2_P;
extern const MeasurementData data_U_angle_C4_C5_C6;
extern const MeasurementData data_U_angle_C4p_C3p_O3p;
extern const MeasurementData data_U_angle_C4p_C5p_O5p;
extern const MeasurementData data_U_angle_C5_C4_N3;
extern const MeasurementData data_U_angle_C5_C4_O4;
extern const MeasurementData data_U_angle_C5_C6_N1;
extern const MeasurementData data_U_angle_C5p_C4p_O4p;
extern const MeasurementData data_U_angle_C5p_O5p_P;
extern const MeasurementData data_U_angle_N1_C1p_O4p;
extern const MeasurementData data_U_angle_N1_C2_N3;
extern const MeasurementData data_U_angle_N1_C2_O2;
extern const MeasurementData data_U_angle_N3_C2_O2;
extern const MeasurementData data_U_angle_N3_C4_O4;
extern const MeasurementData data_U_angle_O3p_P_O5p;
extern const MeasurementData data_U_angle_O3p_P_OP1;
extern const MeasurementData data_U_angle_O3p_P_OP2;
extern const MeasurementData data_U_angle_O3pr2_P_O5p;
extern const MeasurementData data_U_angle_O3pr2_P_OP1;
extern const MeasurementData data_U_angle_O3pr2_P_OP2;
extern const MeasurementData data_U_angle_O5p_P_OP1;
extern const MeasurementData data_U_angle_O5p_P_OP2;
extern const MeasurementData data_U_angle_OP1_P_OP2;
extern const MeasurementData data_U_length_C1p_C2p;
extern const MeasurementData data_U_length_C1p_N1;
extern const MeasurementData data_U_length_C1p_O4p;
extern const MeasurementData data_U_length_C2_N1;
extern const MeasurementData data_U_length_C2_N3;
extern const MeasurementData data_U_length_C2_O2;
extern const MeasurementData data_U_length_C2p_C3p;
extern const MeasurementData data_U_length_C2p_O2p;
extern const MeasurementData data_U_length_C3p_C4p;
extern const MeasurementData data_U_length_C3p_O3p;
extern const MeasurementData data_U_length_C4_C5;
extern const MeasurementData data_U_length_C4_N3;
extern const MeasurementData data_U_length_C4_O4;
extern const MeasurementData data_U_length_C4p_C5p;
extern const MeasurementData data_U_length_C4p_O4p;
extern const MeasurementData data_U_length_C5_C6;
extern const MeasurementData data_U_length_C5p_O5p;
extern const MeasurementData data_U_length_C6_N1;
extern const MeasurementData data_U_length_O3p_P;
extern const MeasurementData data_U_length_O3pr2_P;
extern const MeasurementData data_U_length_O5p_P;
extern const MeasurementData data_U_length_OP1_P;
extern const MeasurementData data_U_length_OP2_P;

static const std::map<std::tuple<std::string, std::string, std::vector<std::string>>, const MeasurementData*>& get_data_map() {
    static std::map<std::tuple<std::string, std::string, std::vector<std::string>>, const MeasurementData*> data_map = {
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_A_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_A_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "O2p"}), &data_A_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C1p"}), &data_A_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C4"}), &data_A_angle_C1p_N9_C4},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C1p"}), &data_A_angle_C1p_N9_C4},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C8"}), &data_A_angle_C1p_N9_C8},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C1p"}), &data_A_angle_C1p_N9_C8},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_A_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_A_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_A_angle_C2_N1_C6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_A_angle_C2_N1_C6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_A_angle_C2_N3_C4},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_A_angle_C2_N3_C4},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N9"}), &data_A_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "C2p"}), &data_A_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_A_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_A_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_A_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_A_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_A_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_A_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "O2p"}), &data_A_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C3p"}), &data_A_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_A_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_A_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_A_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_A_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_A_angle_C3p_O3p_P},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_A_angle_C3p_O3p_P},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_A_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_A_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_A_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_A_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_A_angle_C4_C5_C6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_A_angle_C4_C5_C6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4", "C5", "N7"}), &data_A_angle_C4_C5_N7},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C4"}), &data_A_angle_C4_C5_N7},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C8"}), &data_A_angle_C4_N9_C8},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C4"}), &data_A_angle_C4_N9_C8},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_A_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_A_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_A_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_A_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_A_angle_C5_C4_N3},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_A_angle_C5_C4_N3},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N9"}), &data_A_angle_C5_C4_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N9", "C4", "C5"}), &data_A_angle_C5_C4_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_A_angle_C5_C6_N1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_A_angle_C5_C6_N1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N6"}), &data_A_angle_C5_C6_N6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N6", "C6", "C5"}), &data_A_angle_C5_C6_N6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5", "N7", "C8"}), &data_A_angle_C5_N7_C8},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C8", "N7", "C5"}), &data_A_angle_C5_N7_C8},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_A_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_A_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_A_angle_C5p_O5p_P},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_A_angle_C5p_O5p_P},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"C6", "C5", "N7"}), &data_A_angle_C6_C5_N7},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C6"}), &data_A_angle_C6_C5_N7},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_A_angle_N1_C2_N3},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_A_angle_N1_C2_N3},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N1", "C6", "N6"}), &data_A_angle_N1_C6_N6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N6", "C6", "N1"}), &data_A_angle_N1_C6_N6},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N3", "C4", "N9"}), &data_A_angle_N3_C4_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N9", "C4", "N3"}), &data_A_angle_N3_C4_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N7", "C8", "N9"}), &data_A_angle_N7_C8_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N9", "C8", "N7"}), &data_A_angle_N7_C8_N9},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "O4p"}), &data_A_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N9"}), &data_A_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_A_angle_O3p_P_O5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_A_angle_O3p_P_O5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_A_angle_O3p_P_OP1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_A_angle_O3p_P_OP1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_A_angle_O3p_P_OP2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_A_angle_O3p_P_OP2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_A_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_A_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_A_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_A_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_A_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_A_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_A_angle_O5p_P_OP1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_A_angle_O5p_P_OP1},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_A_angle_O5p_P_OP2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_A_angle_O5p_P_OP2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_A_angle_OP1_P_OP2},
        {std::make_tuple(std::string("A"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_A_angle_OP1_P_OP2},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_A_length_C1p_C2p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_A_length_C1p_C2p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C1p", "N9"}), &data_A_length_C1p_N9},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N9", "C1p"}), &data_A_length_C1p_N9},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_A_length_C1p_O4p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_A_length_C1p_O4p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_A_length_C2_N1},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_A_length_C2_N1},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_A_length_C2_N3},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_A_length_C2_N3},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_A_length_C2p_C3p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_A_length_C2p_C3p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C2p", "O2p"}), &data_A_length_C2p_O2p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O2p", "C2p"}), &data_A_length_C2p_O2p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_A_length_C3p_C4p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_A_length_C3p_C4p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_A_length_C3p_O3p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_A_length_C3p_O3p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_A_length_C4_C5},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_A_length_C4_C5},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_A_length_C4_N3},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_A_length_C4_N3},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C4", "N9"}), &data_A_length_C4_N9},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N9", "C4"}), &data_A_length_C4_N9},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_A_length_C4p_C5p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_A_length_C4p_C5p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_A_length_C4p_O4p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_A_length_C4p_O4p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_A_length_C5_C6},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_A_length_C5_C6},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C5", "N7"}), &data_A_length_C5_N7},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N7", "C5"}), &data_A_length_C5_N7},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_A_length_C5p_O5p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_A_length_C5p_O5p},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_A_length_C6_N1},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_A_length_C6_N1},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C6", "N6"}), &data_A_length_C6_N6},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N6", "C6"}), &data_A_length_C6_N6},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C8", "N7"}), &data_A_length_C8_N7},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N7", "C8"}), &data_A_length_C8_N7},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"C8", "N9"}), &data_A_length_C8_N9},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"N9", "C8"}), &data_A_length_C8_N9},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_A_length_O3p_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_A_length_O3p_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_A_length_O3pr2_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_A_length_O3pr2_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_A_length_O5p_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_A_length_O5p_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_A_length_OP1_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_A_length_OP1_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_A_length_OP2_P},
        {std::make_tuple(std::string("A"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_A_length_OP2_P},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_C_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_C_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "O2p"}), &data_C_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C1p"}), &data_C_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C2"}), &data_C_angle_C1p_N1_C2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C1p"}), &data_C_angle_C1p_N1_C2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C6"}), &data_C_angle_C1p_N1_C6},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C1p"}), &data_C_angle_C1p_N1_C6},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_C_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_C_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_C_angle_C2_N1_C6},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_C_angle_C2_N1_C6},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_C_angle_C2_N3_C4},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_C_angle_C2_N3_C4},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N1"}), &data_C_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "C2p"}), &data_C_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_C_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_C_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_C_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_C_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_C_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_C_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "O2p"}), &data_C_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C3p"}), &data_C_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_C_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_C_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_C_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_C_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_C_angle_C3p_O3p_P},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_C_angle_C3p_O3p_P},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_C_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_C_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_C_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_C_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_C_angle_C4_C5_C6},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_C_angle_C4_C5_C6},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_C_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_C_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_C_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_C_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_C_angle_C5_C4_N3},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_C_angle_C5_C4_N3},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N4"}), &data_C_angle_C5_C4_N4},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N4", "C4", "C5"}), &data_C_angle_C5_C4_N4},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_C_angle_C5_C6_N1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_C_angle_C5_C6_N1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_C_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_C_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_C_angle_C5p_O5p_P},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_C_angle_C5p_O5p_P},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "O4p"}), &data_C_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N1"}), &data_C_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_C_angle_N1_C2_N3},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_C_angle_N1_C2_N3},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N1", "C2", "O2"}), &data_C_angle_N1_C2_O2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N1"}), &data_C_angle_N1_C2_O2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N3", "C2", "O2"}), &data_C_angle_N3_C2_O2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N3"}), &data_C_angle_N3_C2_O2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N3", "C4", "N4"}), &data_C_angle_N3_C4_N4},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"N4", "C4", "N3"}), &data_C_angle_N3_C4_N4},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_C_angle_O3p_P_O5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_C_angle_O3p_P_O5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_C_angle_O3p_P_OP1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_C_angle_O3p_P_OP1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_C_angle_O3p_P_OP2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_C_angle_O3p_P_OP2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_C_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_C_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_C_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_C_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_C_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_C_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_C_angle_O5p_P_OP1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_C_angle_O5p_P_OP1},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_C_angle_O5p_P_OP2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_C_angle_O5p_P_OP2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_C_angle_OP1_P_OP2},
        {std::make_tuple(std::string("C"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_C_angle_OP1_P_OP2},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_C_length_C1p_C2p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_C_length_C1p_C2p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C1p", "N1"}), &data_C_length_C1p_N1},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"N1", "C1p"}), &data_C_length_C1p_N1},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_C_length_C1p_O4p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_C_length_C1p_O4p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_C_length_C2_N1},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_C_length_C2_N1},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_C_length_C2_N3},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_C_length_C2_N3},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C2", "O2"}), &data_C_length_C2_O2},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O2", "C2"}), &data_C_length_C2_O2},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_C_length_C2p_C3p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_C_length_C2p_C3p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C2p", "O2p"}), &data_C_length_C2p_O2p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O2p", "C2p"}), &data_C_length_C2p_O2p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_C_length_C3p_C4p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_C_length_C3p_C4p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_C_length_C3p_O3p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_C_length_C3p_O3p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_C_length_C4_C5},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_C_length_C4_C5},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_C_length_C4_N3},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_C_length_C4_N3},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C4", "N4"}), &data_C_length_C4_N4},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"N4", "C4"}), &data_C_length_C4_N4},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_C_length_C4p_C5p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_C_length_C4p_C5p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_C_length_C4p_O4p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_C_length_C4p_O4p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_C_length_C5_C6},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_C_length_C5_C6},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_C_length_C5p_O5p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_C_length_C5p_O5p},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_C_length_C6_N1},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_C_length_C6_N1},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_C_length_O3p_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_C_length_O3p_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_C_length_O3pr2_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_C_length_O3pr2_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_C_length_O5p_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_C_length_O5p_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_C_length_OP1_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_C_length_OP1_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_C_length_OP2_P},
        {std::make_tuple(std::string("C"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_C_length_OP2_P},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_DA_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_DA_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C4"}), &data_DA_angle_C1p_N9_C4},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C1p"}), &data_DA_angle_C1p_N9_C4},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C8"}), &data_DA_angle_C1p_N9_C8},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C1p"}), &data_DA_angle_C1p_N9_C8},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_DA_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_DA_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_DA_angle_C2_N1_C6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_DA_angle_C2_N1_C6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_DA_angle_C2_N3_C4},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_DA_angle_C2_N3_C4},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N9"}), &data_DA_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "C2p"}), &data_DA_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_DA_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_DA_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_DA_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_DA_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_DA_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_DA_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_DA_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_DA_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_DA_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_DA_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_DA_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_DA_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_DA_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_DA_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_DA_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_DA_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_DA_angle_C4_C5_C6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_DA_angle_C4_C5_C6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4", "C5", "N7"}), &data_DA_angle_C4_C5_N7},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C4"}), &data_DA_angle_C4_C5_N7},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C8"}), &data_DA_angle_C4_N9_C8},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C4"}), &data_DA_angle_C4_N9_C8},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_DA_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_DA_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_DA_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_DA_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_DA_angle_C5_C4_N3},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_DA_angle_C5_C4_N3},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N9"}), &data_DA_angle_C5_C4_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N9", "C4", "C5"}), &data_DA_angle_C5_C4_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_DA_angle_C5_C6_N1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_DA_angle_C5_C6_N1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N6"}), &data_DA_angle_C5_C6_N6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N6", "C6", "C5"}), &data_DA_angle_C5_C6_N6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5", "N7", "C8"}), &data_DA_angle_C5_N7_C8},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C8", "N7", "C5"}), &data_DA_angle_C5_N7_C8},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_DA_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_DA_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_DA_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_DA_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"C6", "C5", "N7"}), &data_DA_angle_C6_C5_N7},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C6"}), &data_DA_angle_C6_C5_N7},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_DA_angle_N1_C2_N3},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_DA_angle_N1_C2_N3},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N1", "C6", "N6"}), &data_DA_angle_N1_C6_N6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N6", "C6", "N1"}), &data_DA_angle_N1_C6_N6},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N3", "C4", "N9"}), &data_DA_angle_N3_C4_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N9", "C4", "N3"}), &data_DA_angle_N3_C4_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N7", "C8", "N9"}), &data_DA_angle_N7_C8_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N9", "C8", "N7"}), &data_DA_angle_N7_C8_N9},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "O4p"}), &data_DA_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N9"}), &data_DA_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_DA_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_DA_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_DA_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_DA_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_DA_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_DA_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_DA_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_DA_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_DA_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_DA_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_DA_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_DA_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_DA_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_DA_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_DA_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_DA_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_DA_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_DA_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_DA_length_C1p_C2p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_DA_length_C1p_C2p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C1p", "N9"}), &data_DA_length_C1p_N9},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N9", "C1p"}), &data_DA_length_C1p_N9},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_DA_length_C1p_O4p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_DA_length_C1p_O4p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_DA_length_C2_N1},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_DA_length_C2_N1},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_DA_length_C2_N3},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_DA_length_C2_N3},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_DA_length_C2p_C3p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_DA_length_C2p_C3p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_DA_length_C3p_C4p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_DA_length_C3p_C4p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_DA_length_C3p_O3p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_DA_length_C3p_O3p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_DA_length_C4_C5},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_DA_length_C4_C5},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_DA_length_C4_N3},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_DA_length_C4_N3},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C4", "N9"}), &data_DA_length_C4_N9},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N9", "C4"}), &data_DA_length_C4_N9},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_DA_length_C4p_C5p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_DA_length_C4p_C5p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_DA_length_C4p_O4p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_DA_length_C4p_O4p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_DA_length_C5_C6},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_DA_length_C5_C6},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C5", "N7"}), &data_DA_length_C5_N7},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N7", "C5"}), &data_DA_length_C5_N7},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_DA_length_C5p_O5p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_DA_length_C5p_O5p},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_DA_length_C6_N1},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_DA_length_C6_N1},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C6", "N6"}), &data_DA_length_C6_N6},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N6", "C6"}), &data_DA_length_C6_N6},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C8", "N7"}), &data_DA_length_C8_N7},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N7", "C8"}), &data_DA_length_C8_N7},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"C8", "N9"}), &data_DA_length_C8_N9},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"N9", "C8"}), &data_DA_length_C8_N9},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_DA_length_O3p_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_DA_length_O3p_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_DA_length_O3pr2_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_DA_length_O3pr2_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_DA_length_O5p_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_DA_length_O5p_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_DA_length_OP1_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_DA_length_OP1_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_DA_length_OP2_P},
        {std::make_tuple(std::string("DA"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_DA_length_OP2_P},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_DC_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_DC_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C2"}), &data_DC_angle_C1p_N1_C2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C1p"}), &data_DC_angle_C1p_N1_C2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C6"}), &data_DC_angle_C1p_N1_C6},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C1p"}), &data_DC_angle_C1p_N1_C6},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_DC_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_DC_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_DC_angle_C2_N1_C6},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_DC_angle_C2_N1_C6},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_DC_angle_C2_N3_C4},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_DC_angle_C2_N3_C4},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N1"}), &data_DC_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "C2p"}), &data_DC_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_DC_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_DC_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_DC_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_DC_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_DC_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_DC_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_DC_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_DC_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_DC_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_DC_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_DC_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_DC_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_DC_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_DC_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_DC_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_DC_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_DC_angle_C4_C5_C6},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_DC_angle_C4_C5_C6},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_DC_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_DC_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_DC_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_DC_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_DC_angle_C5_C4_N3},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_DC_angle_C5_C4_N3},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N4"}), &data_DC_angle_C5_C4_N4},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N4", "C4", "C5"}), &data_DC_angle_C5_C4_N4},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_DC_angle_C5_C6_N1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_DC_angle_C5_C6_N1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_DC_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_DC_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_DC_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_DC_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "O4p"}), &data_DC_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N1"}), &data_DC_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_DC_angle_N1_C2_N3},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_DC_angle_N1_C2_N3},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N1", "C2", "O2"}), &data_DC_angle_N1_C2_O2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N1"}), &data_DC_angle_N1_C2_O2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N3", "C2", "O2"}), &data_DC_angle_N3_C2_O2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N3"}), &data_DC_angle_N3_C2_O2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N3", "C4", "N4"}), &data_DC_angle_N3_C4_N4},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"N4", "C4", "N3"}), &data_DC_angle_N3_C4_N4},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_DC_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_DC_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_DC_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_DC_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_DC_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_DC_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_DC_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_DC_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_DC_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_DC_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_DC_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_DC_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_DC_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_DC_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_DC_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_DC_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_DC_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_DC_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_DC_length_C1p_C2p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_DC_length_C1p_C2p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C1p", "N1"}), &data_DC_length_C1p_N1},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"N1", "C1p"}), &data_DC_length_C1p_N1},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_DC_length_C1p_O4p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_DC_length_C1p_O4p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_DC_length_C2_N1},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_DC_length_C2_N1},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_DC_length_C2_N3},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_DC_length_C2_N3},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C2", "O2"}), &data_DC_length_C2_O2},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O2", "C2"}), &data_DC_length_C2_O2},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_DC_length_C2p_C3p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_DC_length_C2p_C3p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_DC_length_C3p_C4p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_DC_length_C3p_C4p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_DC_length_C3p_O3p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_DC_length_C3p_O3p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_DC_length_C4_C5},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_DC_length_C4_C5},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_DC_length_C4_N3},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_DC_length_C4_N3},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C4", "N4"}), &data_DC_length_C4_N4},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"N4", "C4"}), &data_DC_length_C4_N4},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_DC_length_C4p_C5p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_DC_length_C4p_C5p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_DC_length_C4p_O4p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_DC_length_C4p_O4p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_DC_length_C5_C6},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_DC_length_C5_C6},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_DC_length_C5p_O5p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_DC_length_C5p_O5p},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_DC_length_C6_N1},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_DC_length_C6_N1},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_DC_length_O3p_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_DC_length_O3p_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_DC_length_O3pr2_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_DC_length_O3pr2_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_DC_length_O5p_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_DC_length_O5p_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_DC_length_OP1_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_DC_length_OP1_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_DC_length_OP2_P},
        {std::make_tuple(std::string("DC"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_DC_length_OP2_P},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_DG_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_DG_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C4"}), &data_DG_angle_C1p_N9_C4},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C1p"}), &data_DG_angle_C1p_N9_C4},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C8"}), &data_DG_angle_C1p_N9_C8},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C1p"}), &data_DG_angle_C1p_N9_C8},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_DG_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_DG_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_DG_angle_C2_N1_C6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_DG_angle_C2_N1_C6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_DG_angle_C2_N3_C4},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_DG_angle_C2_N3_C4},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N9"}), &data_DG_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "C2p"}), &data_DG_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_DG_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_DG_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_DG_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_DG_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_DG_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_DG_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_DG_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_DG_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_DG_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_DG_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_DG_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_DG_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_DG_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_DG_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_DG_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_DG_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_DG_angle_C4_C5_C6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_DG_angle_C4_C5_C6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4", "C5", "N7"}), &data_DG_angle_C4_C5_N7},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C4"}), &data_DG_angle_C4_C5_N7},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C8"}), &data_DG_angle_C4_N9_C8},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C4"}), &data_DG_angle_C4_N9_C8},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_DG_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_DG_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_DG_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_DG_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_DG_angle_C5_C4_N3},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_DG_angle_C5_C4_N3},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N9"}), &data_DG_angle_C5_C4_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N9", "C4", "C5"}), &data_DG_angle_C5_C4_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_DG_angle_C5_C6_N1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_DG_angle_C5_C6_N1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5", "C6", "O6"}), &data_DG_angle_C5_C6_O6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O6", "C6", "C5"}), &data_DG_angle_C5_C6_O6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5", "N7", "C8"}), &data_DG_angle_C5_N7_C8},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C8", "N7", "C5"}), &data_DG_angle_C5_N7_C8},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_DG_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_DG_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_DG_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_DG_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"C6", "C5", "N7"}), &data_DG_angle_C6_C5_N7},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C6"}), &data_DG_angle_C6_C5_N7},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N2"}), &data_DG_angle_N1_C2_N2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N2", "C2", "N1"}), &data_DG_angle_N1_C2_N2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_DG_angle_N1_C2_N3},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_DG_angle_N1_C2_N3},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N1", "C6", "O6"}), &data_DG_angle_N1_C6_O6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O6", "C6", "N1"}), &data_DG_angle_N1_C6_O6},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N2", "C2", "N3"}), &data_DG_angle_N2_C2_N3},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N2"}), &data_DG_angle_N2_C2_N3},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N3", "C4", "N9"}), &data_DG_angle_N3_C4_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N9", "C4", "N3"}), &data_DG_angle_N3_C4_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N7", "C8", "N9"}), &data_DG_angle_N7_C8_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N9", "C8", "N7"}), &data_DG_angle_N7_C8_N9},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "O4p"}), &data_DG_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N9"}), &data_DG_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_DG_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_DG_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_DG_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_DG_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_DG_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_DG_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_DG_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_DG_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_DG_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_DG_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_DG_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_DG_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_DG_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_DG_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_DG_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_DG_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_DG_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_DG_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_DG_length_C1p_C2p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_DG_length_C1p_C2p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C1p", "N9"}), &data_DG_length_C1p_N9},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N9", "C1p"}), &data_DG_length_C1p_N9},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_DG_length_C1p_O4p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_DG_length_C1p_O4p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_DG_length_C2_N1},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_DG_length_C2_N1},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C2", "N2"}), &data_DG_length_C2_N2},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N2", "C2"}), &data_DG_length_C2_N2},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_DG_length_C2_N3},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_DG_length_C2_N3},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_DG_length_C2p_C3p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_DG_length_C2p_C3p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_DG_length_C3p_C4p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_DG_length_C3p_C4p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_DG_length_C3p_O3p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_DG_length_C3p_O3p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_DG_length_C4_C5},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_DG_length_C4_C5},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_DG_length_C4_N3},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_DG_length_C4_N3},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C4", "N9"}), &data_DG_length_C4_N9},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N9", "C4"}), &data_DG_length_C4_N9},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_DG_length_C4p_C5p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_DG_length_C4p_C5p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_DG_length_C4p_O4p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_DG_length_C4p_O4p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_DG_length_C5_C6},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_DG_length_C5_C6},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C5", "N7"}), &data_DG_length_C5_N7},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N7", "C5"}), &data_DG_length_C5_N7},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_DG_length_C5p_O5p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_DG_length_C5p_O5p},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_DG_length_C6_N1},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_DG_length_C6_N1},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C6", "O6"}), &data_DG_length_C6_O6},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O6", "C6"}), &data_DG_length_C6_O6},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C8", "N7"}), &data_DG_length_C8_N7},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N7", "C8"}), &data_DG_length_C8_N7},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"C8", "N9"}), &data_DG_length_C8_N9},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"N9", "C8"}), &data_DG_length_C8_N9},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_DG_length_O3p_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_DG_length_O3p_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_DG_length_O3pr2_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_DG_length_O3pr2_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_DG_length_O5p_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_DG_length_O5p_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_DG_length_OP1_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_DG_length_OP1_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_DG_length_OP2_P},
        {std::make_tuple(std::string("DG"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_DG_length_OP2_P},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_DT_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_DT_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C2"}), &data_DT_angle_C1p_N1_C2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C1p"}), &data_DT_angle_C1p_N1_C2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C6"}), &data_DT_angle_C1p_N1_C6},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C1p"}), &data_DT_angle_C1p_N1_C6},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_DT_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_DT_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_DT_angle_C2_N1_C6},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_DT_angle_C2_N1_C6},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_DT_angle_C2_N3_C4},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_DT_angle_C2_N3_C4},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N1"}), &data_DT_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "C2p"}), &data_DT_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_DT_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_DT_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_DT_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_DT_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_DT_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_DT_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_DT_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_DT_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_DT_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_DT_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_DT_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_DT_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_DT_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_DT_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_DT_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_DT_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_DT_angle_C4_C5_C6},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_DT_angle_C4_C5_C6},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C7"}), &data_DT_angle_C4_C5_C7},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C7", "C5", "C4"}), &data_DT_angle_C4_C5_C7},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_DT_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_DT_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_DT_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_DT_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_DT_angle_C5_C4_N3},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_DT_angle_C5_C4_N3},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C5", "C4", "O4"}), &data_DT_angle_C5_C4_O4},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O4", "C4", "C5"}), &data_DT_angle_C5_C4_O4},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_DT_angle_C5_C6_N1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_DT_angle_C5_C6_N1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_DT_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_DT_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_DT_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_DT_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C7"}), &data_DT_angle_C6_C5_C7},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"C7", "C5", "C6"}), &data_DT_angle_C6_C5_C7},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "O4p"}), &data_DT_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N1"}), &data_DT_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_DT_angle_N1_C2_N3},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_DT_angle_N1_C2_N3},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N1", "C2", "O2"}), &data_DT_angle_N1_C2_O2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N1"}), &data_DT_angle_N1_C2_O2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N3", "C2", "O2"}), &data_DT_angle_N3_C2_O2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N3"}), &data_DT_angle_N3_C2_O2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"N3", "C4", "O4"}), &data_DT_angle_N3_C4_O4},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O4", "C4", "N3"}), &data_DT_angle_N3_C4_O4},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_DT_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_DT_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_DT_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_DT_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_DT_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_DT_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_DT_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_DT_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_DT_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_DT_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_DT_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_DT_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_DT_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_DT_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_DT_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_DT_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_DT_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_DT_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_DT_length_C1p_C2p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_DT_length_C1p_C2p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C1p", "N1"}), &data_DT_length_C1p_N1},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"N1", "C1p"}), &data_DT_length_C1p_N1},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_DT_length_C1p_O4p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_DT_length_C1p_O4p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_DT_length_C2_N1},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_DT_length_C2_N1},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_DT_length_C2_N3},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_DT_length_C2_N3},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C2", "O2"}), &data_DT_length_C2_O2},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O2", "C2"}), &data_DT_length_C2_O2},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_DT_length_C2p_C3p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_DT_length_C2p_C3p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_DT_length_C3p_C4p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_DT_length_C3p_C4p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_DT_length_C3p_O3p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_DT_length_C3p_O3p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_DT_length_C4_C5},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_DT_length_C4_C5},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_DT_length_C4_N3},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_DT_length_C4_N3},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C4", "O4"}), &data_DT_length_C4_O4},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O4", "C4"}), &data_DT_length_C4_O4},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_DT_length_C4p_C5p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_DT_length_C4p_C5p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_DT_length_C4p_O4p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_DT_length_C4p_O4p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_DT_length_C5_C6},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_DT_length_C5_C6},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C5", "C7"}), &data_DT_length_C5_C7},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C7", "C5"}), &data_DT_length_C5_C7},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_DT_length_C5p_O5p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_DT_length_C5p_O5p},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_DT_length_C6_N1},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_DT_length_C6_N1},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_DT_length_O3p_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_DT_length_O3p_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_DT_length_O3pr2_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_DT_length_O3pr2_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_DT_length_O5p_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_DT_length_O5p_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_DT_length_OP1_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_DT_length_OP1_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_DT_length_OP2_P},
        {std::make_tuple(std::string("DT"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_DT_length_OP2_P},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_DU_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_DU_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C2"}), &data_DU_angle_C1p_N1_C2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C1p"}), &data_DU_angle_C1p_N1_C2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C6"}), &data_DU_angle_C1p_N1_C6},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C1p"}), &data_DU_angle_C1p_N1_C6},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_DU_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_DU_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_DU_angle_C2_N1_C6},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_DU_angle_C2_N1_C6},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_DU_angle_C2_N3_C4},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_DU_angle_C2_N3_C4},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N1"}), &data_DU_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "C2p"}), &data_DU_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_DU_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_DU_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_DU_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_DU_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_DU_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_DU_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_DU_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_DU_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_DU_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_DU_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_DU_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_DU_angle_C3p_O3p_P},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_DU_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_DU_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_DU_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_DU_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_DU_angle_C4_C5_C6},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_DU_angle_C4_C5_C6},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_DU_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_DU_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_DU_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_DU_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_DU_angle_C5_C4_N3},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_DU_angle_C5_C4_N3},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C5", "C4", "O4"}), &data_DU_angle_C5_C4_O4},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O4", "C4", "C5"}), &data_DU_angle_C5_C4_O4},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_DU_angle_C5_C6_N1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_DU_angle_C5_C6_N1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_DU_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_DU_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_DU_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_DU_angle_C5p_O5p_P},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "O4p"}), &data_DU_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N1"}), &data_DU_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_DU_angle_N1_C2_N3},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_DU_angle_N1_C2_N3},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N1", "C2", "O2"}), &data_DU_angle_N1_C2_O2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N1"}), &data_DU_angle_N1_C2_O2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N3", "C2", "O2"}), &data_DU_angle_N3_C2_O2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N3"}), &data_DU_angle_N3_C2_O2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"N3", "C4", "O4"}), &data_DU_angle_N3_C4_O4},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O4", "C4", "N3"}), &data_DU_angle_N3_C4_O4},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_DU_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_DU_angle_O3p_P_O5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_DU_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_DU_angle_O3p_P_OP1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_DU_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_DU_angle_O3p_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_DU_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_DU_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_DU_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_DU_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_DU_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_DU_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_DU_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_DU_angle_O5p_P_OP1},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_DU_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_DU_angle_O5p_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_DU_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_DU_angle_OP1_P_OP2},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_DU_length_C1p_C2p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_DU_length_C1p_C2p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C1p", "N1"}), &data_DU_length_C1p_N1},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"N1", "C1p"}), &data_DU_length_C1p_N1},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_DU_length_C1p_O4p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_DU_length_C1p_O4p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_DU_length_C2_N1},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_DU_length_C2_N1},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_DU_length_C2_N3},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_DU_length_C2_N3},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C2", "O2"}), &data_DU_length_C2_O2},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O2", "C2"}), &data_DU_length_C2_O2},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_DU_length_C2p_C3p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_DU_length_C2p_C3p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_DU_length_C3p_C4p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_DU_length_C3p_C4p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_DU_length_C3p_O3p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_DU_length_C3p_O3p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_DU_length_C4_C5},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_DU_length_C4_C5},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_DU_length_C4_N3},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_DU_length_C4_N3},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C4", "O4"}), &data_DU_length_C4_O4},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O4", "C4"}), &data_DU_length_C4_O4},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_DU_length_C4p_C5p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_DU_length_C4p_C5p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_DU_length_C4p_O4p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_DU_length_C4p_O4p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_DU_length_C5_C6},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_DU_length_C5_C6},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_DU_length_C5p_O5p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_DU_length_C5p_O5p},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_DU_length_C6_N1},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_DU_length_C6_N1},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_DU_length_O3p_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_DU_length_O3p_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_DU_length_O3pr2_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_DU_length_O3pr2_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_DU_length_O5p_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_DU_length_O5p_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_DU_length_OP1_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_DU_length_OP1_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_DU_length_OP2_P},
        {std::make_tuple(std::string("DU"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_DU_length_OP2_P},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_G_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_G_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "O2p"}), &data_G_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C1p"}), &data_G_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C4"}), &data_G_angle_C1p_N9_C4},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C1p"}), &data_G_angle_C1p_N9_C4},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C1p", "N9", "C8"}), &data_G_angle_C1p_N9_C8},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C1p"}), &data_G_angle_C1p_N9_C8},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_G_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_G_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_G_angle_C2_N1_C6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_G_angle_C2_N1_C6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_G_angle_C2_N3_C4},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_G_angle_C2_N3_C4},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N9"}), &data_G_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "C2p"}), &data_G_angle_C2p_C1p_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_G_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_G_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_G_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_G_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_G_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_G_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "O2p"}), &data_G_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C3p"}), &data_G_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_G_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_G_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_G_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_G_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_G_angle_C3p_O3p_P},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_G_angle_C3p_O3p_P},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_G_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_G_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_G_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_G_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_G_angle_C4_C5_C6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_G_angle_C4_C5_C6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4", "C5", "N7"}), &data_G_angle_C4_C5_N7},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C4"}), &data_G_angle_C4_C5_N7},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4", "N9", "C8"}), &data_G_angle_C4_N9_C8},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C8", "N9", "C4"}), &data_G_angle_C4_N9_C8},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_G_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_G_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_G_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_G_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_G_angle_C5_C4_N3},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_G_angle_C5_C4_N3},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N9"}), &data_G_angle_C5_C4_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N9", "C4", "C5"}), &data_G_angle_C5_C4_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_G_angle_C5_C6_N1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_G_angle_C5_C6_N1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5", "C6", "O6"}), &data_G_angle_C5_C6_O6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O6", "C6", "C5"}), &data_G_angle_C5_C6_O6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5", "N7", "C8"}), &data_G_angle_C5_N7_C8},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C8", "N7", "C5"}), &data_G_angle_C5_N7_C8},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_G_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_G_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_G_angle_C5p_O5p_P},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_G_angle_C5p_O5p_P},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"C6", "C5", "N7"}), &data_G_angle_C6_C5_N7},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N7", "C5", "C6"}), &data_G_angle_C6_C5_N7},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N2"}), &data_G_angle_N1_C2_N2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N2", "C2", "N1"}), &data_G_angle_N1_C2_N2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_G_angle_N1_C2_N3},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_G_angle_N1_C2_N3},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N1", "C6", "O6"}), &data_G_angle_N1_C6_O6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O6", "C6", "N1"}), &data_G_angle_N1_C6_O6},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N2", "C2", "N3"}), &data_G_angle_N2_C2_N3},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N2"}), &data_G_angle_N2_C2_N3},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N3", "C4", "N9"}), &data_G_angle_N3_C4_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N9", "C4", "N3"}), &data_G_angle_N3_C4_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N7", "C8", "N9"}), &data_G_angle_N7_C8_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N9", "C8", "N7"}), &data_G_angle_N7_C8_N9},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"N9", "C1p", "O4p"}), &data_G_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N9"}), &data_G_angle_N9_C1p_O4p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_G_angle_O3p_P_O5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_G_angle_O3p_P_O5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_G_angle_O3p_P_OP1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_G_angle_O3p_P_OP1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_G_angle_O3p_P_OP2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_G_angle_O3p_P_OP2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_G_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_G_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_G_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_G_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_G_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_G_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_G_angle_O5p_P_OP1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_G_angle_O5p_P_OP1},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_G_angle_O5p_P_OP2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_G_angle_O5p_P_OP2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_G_angle_OP1_P_OP2},
        {std::make_tuple(std::string("G"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_G_angle_OP1_P_OP2},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_G_length_C1p_C2p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_G_length_C1p_C2p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C1p", "N9"}), &data_G_length_C1p_N9},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N9", "C1p"}), &data_G_length_C1p_N9},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_G_length_C1p_O4p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_G_length_C1p_O4p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_G_length_C2_N1},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_G_length_C2_N1},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C2", "N2"}), &data_G_length_C2_N2},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N2", "C2"}), &data_G_length_C2_N2},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_G_length_C2_N3},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_G_length_C2_N3},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_G_length_C2p_C3p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_G_length_C2p_C3p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C2p", "O2p"}), &data_G_length_C2p_O2p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O2p", "C2p"}), &data_G_length_C2p_O2p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_G_length_C3p_C4p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_G_length_C3p_C4p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_G_length_C3p_O3p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_G_length_C3p_O3p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_G_length_C4_C5},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_G_length_C4_C5},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_G_length_C4_N3},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_G_length_C4_N3},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C4", "N9"}), &data_G_length_C4_N9},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N9", "C4"}), &data_G_length_C4_N9},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_G_length_C4p_C5p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_G_length_C4p_C5p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_G_length_C4p_O4p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_G_length_C4p_O4p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_G_length_C5_C6},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_G_length_C5_C6},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C5", "N7"}), &data_G_length_C5_N7},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N7", "C5"}), &data_G_length_C5_N7},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_G_length_C5p_O5p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_G_length_C5p_O5p},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_G_length_C6_N1},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_G_length_C6_N1},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C6", "O6"}), &data_G_length_C6_O6},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O6", "C6"}), &data_G_length_C6_O6},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C8", "N7"}), &data_G_length_C8_N7},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N7", "C8"}), &data_G_length_C8_N7},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"C8", "N9"}), &data_G_length_C8_N9},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"N9", "C8"}), &data_G_length_C8_N9},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_G_length_O3p_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_G_length_O3p_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_G_length_O3pr2_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_G_length_O3pr2_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_G_length_O5p_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_G_length_O5p_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_G_length_OP1_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_G_length_OP1_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_G_length_OP2_P},
        {std::make_tuple(std::string("G"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_G_length_OP2_P},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "C3p"}), &data_U_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "C1p"}), &data_U_angle_C1p_C2p_C3p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C1p", "C2p", "O2p"}), &data_U_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C1p"}), &data_U_angle_C1p_C2p_O2p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C2"}), &data_U_angle_C1p_N1_C2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C1p"}), &data_U_angle_C1p_N1_C2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C1p", "N1", "C6"}), &data_U_angle_C1p_N1_C6},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C1p"}), &data_U_angle_C1p_N1_C6},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C1p", "O4p", "C4p"}), &data_U_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C4p", "O4p", "C1p"}), &data_U_angle_C1p_O4p_C4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C2", "N1", "C6"}), &data_U_angle_C2_N1_C6},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C6", "N1", "C2"}), &data_U_angle_C2_N1_C6},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C2", "N3", "C4"}), &data_U_angle_C2_N3_C4},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C4", "N3", "C2"}), &data_U_angle_C2_N3_C4},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "N1"}), &data_U_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "C2p"}), &data_U_angle_C2p_C1p_N1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C2p", "C1p", "O4p"}), &data_U_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "C2p"}), &data_U_angle_C2p_C1p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "C4p"}), &data_U_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "C2p"}), &data_U_angle_C2p_C3p_C4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C2p", "C3p", "O3p"}), &data_U_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C2p"}), &data_U_angle_C2p_C3p_O3p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C3p", "C2p", "O2p"}), &data_U_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O2p", "C2p", "C3p"}), &data_U_angle_C3p_C2p_O2p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "C5p"}), &data_U_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "C3p"}), &data_U_angle_C3p_C4p_C5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C3p", "C4p", "O4p"}), &data_U_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C3p"}), &data_U_angle_C3p_C4p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "P"}), &data_U_angle_C3p_O3p_P},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"P", "O3p", "C3p"}), &data_U_angle_C3p_O3p_P},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C3p", "O3p", "Pr2"}), &data_U_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"Pr2", "O3p", "C3p"}), &data_U_angle_C3p_O3p_Pr2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C3pr2", "O3pr2", "P"}), &data_U_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"P", "O3pr2", "C3pr2"}), &data_U_angle_C3pr2_O3pr2_P},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C4", "C5", "C6"}), &data_U_angle_C4_C5_C6},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C6", "C5", "C4"}), &data_U_angle_C4_C5_C6},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C4p", "C3p", "O3p"}), &data_U_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3p", "C3p", "C4p"}), &data_U_angle_C4p_C3p_O3p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C4p", "C5p", "O5p"}), &data_U_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O5p", "C5p", "C4p"}), &data_U_angle_C4p_C5p_O5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C5", "C4", "N3"}), &data_U_angle_C5_C4_N3},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N3", "C4", "C5"}), &data_U_angle_C5_C4_N3},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C5", "C4", "O4"}), &data_U_angle_C5_C4_O4},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O4", "C4", "C5"}), &data_U_angle_C5_C4_O4},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C5", "C6", "N1"}), &data_U_angle_C5_C6_N1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N1", "C6", "C5"}), &data_U_angle_C5_C6_N1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C5p", "C4p", "O4p"}), &data_U_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O4p", "C4p", "C5p"}), &data_U_angle_C5p_C4p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"C5p", "O5p", "P"}), &data_U_angle_C5p_O5p_P},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"P", "O5p", "C5p"}), &data_U_angle_C5p_O5p_P},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N1", "C1p", "O4p"}), &data_U_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O4p", "C1p", "N1"}), &data_U_angle_N1_C1p_O4p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N1", "C2", "N3"}), &data_U_angle_N1_C2_N3},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N3", "C2", "N1"}), &data_U_angle_N1_C2_N3},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N1", "C2", "O2"}), &data_U_angle_N1_C2_O2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N1"}), &data_U_angle_N1_C2_O2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N3", "C2", "O2"}), &data_U_angle_N3_C2_O2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O2", "C2", "N3"}), &data_U_angle_N3_C2_O2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"N3", "C4", "O4"}), &data_U_angle_N3_C4_O4},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O4", "C4", "N3"}), &data_U_angle_N3_C4_O4},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3p", "P", "O5p"}), &data_U_angle_O3p_P_O5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3p"}), &data_U_angle_O3p_P_O5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP1"}), &data_U_angle_O3p_P_OP1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3p"}), &data_U_angle_O3p_P_OP1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3p", "P", "OP2"}), &data_U_angle_O3p_P_OP2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3p"}), &data_U_angle_O3p_P_OP2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "O5p"}), &data_U_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O5p", "P", "O3pr2"}), &data_U_angle_O3pr2_P_O5p},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP1"}), &data_U_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O3pr2"}), &data_U_angle_O3pr2_P_OP1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O3pr2", "P", "OP2"}), &data_U_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O3pr2"}), &data_U_angle_O3pr2_P_OP2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP1"}), &data_U_angle_O5p_P_OP1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP1", "P", "O5p"}), &data_U_angle_O5p_P_OP1},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"O5p", "P", "OP2"}), &data_U_angle_O5p_P_OP2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP2", "P", "O5p"}), &data_U_angle_O5p_P_OP2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP1", "P", "OP2"}), &data_U_angle_OP1_P_OP2},
        {std::make_tuple(std::string("U"), std::string("angle"), std::vector<std::string>{"OP2", "P", "OP1"}), &data_U_angle_OP1_P_OP2},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C1p", "C2p"}), &data_U_length_C1p_C2p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C2p", "C1p"}), &data_U_length_C1p_C2p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C1p", "N1"}), &data_U_length_C1p_N1},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"N1", "C1p"}), &data_U_length_C1p_N1},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C1p", "O4p"}), &data_U_length_C1p_O4p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O4p", "C1p"}), &data_U_length_C1p_O4p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C2", "N1"}), &data_U_length_C2_N1},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"N1", "C2"}), &data_U_length_C2_N1},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C2", "N3"}), &data_U_length_C2_N3},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"N3", "C2"}), &data_U_length_C2_N3},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C2", "O2"}), &data_U_length_C2_O2},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O2", "C2"}), &data_U_length_C2_O2},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C2p", "C3p"}), &data_U_length_C2p_C3p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C3p", "C2p"}), &data_U_length_C2p_C3p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C2p", "O2p"}), &data_U_length_C2p_O2p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O2p", "C2p"}), &data_U_length_C2p_O2p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C3p", "C4p"}), &data_U_length_C3p_C4p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C4p", "C3p"}), &data_U_length_C3p_C4p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C3p", "O3p"}), &data_U_length_C3p_O3p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O3p", "C3p"}), &data_U_length_C3p_O3p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C4", "C5"}), &data_U_length_C4_C5},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C5", "C4"}), &data_U_length_C4_C5},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C4", "N3"}), &data_U_length_C4_N3},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"N3", "C4"}), &data_U_length_C4_N3},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C4", "O4"}), &data_U_length_C4_O4},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O4", "C4"}), &data_U_length_C4_O4},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C4p", "C5p"}), &data_U_length_C4p_C5p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C5p", "C4p"}), &data_U_length_C4p_C5p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C4p", "O4p"}), &data_U_length_C4p_O4p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O4p", "C4p"}), &data_U_length_C4p_O4p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C5", "C6"}), &data_U_length_C5_C6},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C6", "C5"}), &data_U_length_C5_C6},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C5p", "O5p"}), &data_U_length_C5p_O5p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O5p", "C5p"}), &data_U_length_C5p_O5p},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"C6", "N1"}), &data_U_length_C6_N1},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"N1", "C6"}), &data_U_length_C6_N1},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O3p", "P"}), &data_U_length_O3p_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"P", "O3p"}), &data_U_length_O3p_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O3pr2", "P"}), &data_U_length_O3pr2_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"P", "O3pr2"}), &data_U_length_O3pr2_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"O5p", "P"}), &data_U_length_O5p_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"P", "O5p"}), &data_U_length_O5p_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"OP1", "P"}), &data_U_length_OP1_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"P", "OP1"}), &data_U_length_OP1_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"OP2", "P"}), &data_U_length_OP2_P},
        {std::make_tuple(std::string("U"), std::string("length"), std::vector<std::string>{"P", "OP2"}), &data_U_length_OP2_P},
    };
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
