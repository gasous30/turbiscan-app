/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_assert.h"
#include "Wind_Turbine_31c4daf8_4_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_externals.h"
#include "Wind_Turbine_31c4daf8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_4_ds_assert(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t9, NeDsMethodOutput *t10)
{
  PmIntVector out;
  real_T DP_R_idx_2;
  real_T DP_R_idx_3;
  real_T Hydraulic_Actuator_2_Fixed_Orifice_A_p;
  real_T Hydraulic_Actuator_2_Fixed_Orifice_B_p;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_11;
  real_T X_idx_24;
  real_T X_idx_6;
  real_T X_idx_9;
  real_T intrm_sf_mf_10;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_19;
  real_T intrm_sf_mf_25;
  real_T intrm_sf_mf_26;
  real_T t1;
  int32_T t0[108];
  int32_T M_idx_19;
  int32_T M_idx_20;
  int32_T M_idx_21;
  M_idx_19 = t9->mM.mX[19];
  M_idx_20 = t9->mM.mX[20];
  M_idx_21 = t9->mM.mX[21];
  U_idx_1 = t9->mU.mX[1];
  U_idx_2 = t9->mU.mX[2];
  X_idx_0 = t9->mX.mX[0];
  X_idx_1 = t9->mX.mX[1];
  X_idx_6 = t9->mX.mX[6];
  X_idx_9 = t9->mX.mX[9];
  X_idx_11 = t9->mX.mX[11];
  X_idx_24 = t9->mX.mX[24];
  DP_R_idx_2 = t9->mDP_R.mX[2];
  DP_R_idx_3 = t9->mDP_R.mX[3];
  out = t10->mASSERT;
  Hydraulic_Actuator_2_Fixed_Orifice_A_p = -X_idx_0 + X_idx_9;
  Hydraulic_Actuator_2_Fixed_Orifice_B_p = -X_idx_1 + X_idx_11;
  if (X_idx_6 > 0.003) {
    intrm_sf_mf_11 = 0.005;
  } else if (X_idx_6 < 6.0E-13) {
    intrm_sf_mf_11 = 1.0E-12;
  } else {
    intrm_sf_mf_11 = X_idx_6 * 1.6666666666666667;
  }

  intrm_sf_mf_10 = intrm_sf_mf_11 > 1.0E-12 ? intrm_sf_mf_11 : 1.0E-12;
  intrm_sf_mf_11 = 1.1280975852233448E-5 / (intrm_sf_mf_10 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_10) / 2.0 * 1.0E-5;
  if (-X_idx_6 > 0.003) {
    intrm_sf_mf_19 = 0.005;
  } else if (-X_idx_6 < 6.0E-13) {
    intrm_sf_mf_19 = 1.0E-12;
  } else {
    intrm_sf_mf_19 = -X_idx_6 * 1.6666666666666667;
  }

  t1 = intrm_sf_mf_19 > 1.0E-12 ? intrm_sf_mf_19 : 1.0E-12;
  intrm_sf_mf_19 = 1.1280975852233448E-5 / (t1 == 0.0 ? 1.0E-16 : t1) / 2.0 *
    1.0E-5;
  if (-(U_idx_1 + -24.0) > 0.005) {
    intrm_sf_mf_25 = 5.0E-5;
  } else if (-(U_idx_1 + -24.0) < 9.9999999999999991E-11) {
    intrm_sf_mf_25 = 1.0E-12;
  } else {
    intrm_sf_mf_25 = -(U_idx_1 + -24.0) * 0.01;
  }

  intrm_sf_mf_26 = intrm_sf_mf_25 > 1.0E-12 ? intrm_sf_mf_25 : 1.0E-12;
  intrm_sf_mf_25 = 1.1280975852233448E-5 / (intrm_sf_mf_26 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_26) / 2.0 * 1.0E-5;
  if (-(U_idx_2 + -24.0) > 0.005) {
    X_idx_6 = 5.0E-5;
  } else if (-(U_idx_2 + -24.0) < 9.9999999999999991E-11) {
    X_idx_6 = 1.0E-12;
  } else {
    X_idx_6 = -(U_idx_2 + -24.0) * 0.01;
  }

  U_idx_1 = X_idx_6 > 1.0E-12 ? X_idx_6 : 1.0E-12;
  X_idx_6 = 1.1280975852233448E-5 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1) / 2.0 *
    1.0E-5;
  t0[0ULL] = (int32_T)(M_idx_19 != 0);
  t0[1ULL] = (int32_T)(M_idx_20 != 0);
  t0[2ULL] = (int32_T)(M_idx_21 != 0);
  t0[3ULL] = 1;
  t0[4ULL] = (int32_T)(X_idx_0 + 1.01325 != 0.0);
  t0[5ULL] = 1;
  t0[6ULL] = (int32_T)((!(X_idx_0 + 1.01325 != 0.0)) || (1.01325 / (X_idx_0 +
    1.01325 == 0.0 ? 1.0E-16 : X_idx_0 + 1.01325) >= 0.0));
  t0[7ULL] = (int32_T)(X_idx_0 + 1.01325 != 0.0);
  t0[8ULL] = 1;
  t0[9ULL] = (int32_T)((!(X_idx_0 + 1.01325 != 0.0)) || (1.01325 / (X_idx_0 +
    1.01325 == 0.0 ? 1.0E-16 : X_idx_0 + 1.01325) >= 0.0));
  t0[10ULL] = 1;
  t0[11ULL] = 1;
  t0[12ULL] = (int32_T)((!(X_idx_0 + 1.01325 != 0.0)) || ((X_idx_0 + 1.01325 !=
    0.0) && (!(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 + 1.01325)
               >= 0.0))) || (!(X_idx_0 + 1.01325 != 0.0)) || ((X_idx_0 + 1.01325
    != 0.0) && (!(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
    1.01325) >= 0.0))) || ((pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_0 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_0 / 12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_0 + 1.01325 ==
    0.0 ? 1.0E-16 : X_idx_0 + 1.01325), 0.7142857142857143) *
    0.0050251256281407036 + exp(-X_idx_0 / 12428.460456240617)) != 0.0));
  t0[13ULL] = (int32_T)(X_idx_0 + 1.01325 != 0.0);
  t0[14ULL] = 1;
  t0[15ULL] = (int32_T)((!(X_idx_0 + 1.01325 != 0.0)) || (1.01325 / (X_idx_0 +
    1.01325 == 0.0 ? 1.0E-16 : X_idx_0 + 1.01325) >= 0.0));
  t0[16ULL] = (int32_T)((!(X_idx_0 + 1.01325 != 0.0)) || ((X_idx_0 + 1.01325 !=
    0.0) && (!(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 + 1.01325)
               >= 0.0))) || (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_0 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_0 / 12428.460456240617) != 0.0));
  t0[17ULL] = (int32_T)(X_idx_1 + 1.01325 != 0.0);
  t0[18ULL] = 1;
  t0[19ULL] = (int32_T)((!(X_idx_1 + 1.01325 != 0.0)) || (1.01325 / (X_idx_1 +
    1.01325 == 0.0 ? 1.0E-16 : X_idx_1 + 1.01325) >= 0.0));
  t0[20ULL] = (int32_T)(X_idx_1 + 1.01325 != 0.0);
  t0[21ULL] = 1;
  t0[22ULL] = (int32_T)((!(X_idx_1 + 1.01325 != 0.0)) || (1.01325 / (X_idx_1 +
    1.01325 == 0.0 ? 1.0E-16 : X_idx_1 + 1.01325) >= 0.0));
  t0[23ULL] = 1;
  t0[24ULL] = 1;
  t0[25ULL] = (int32_T)((!(X_idx_1 + 1.01325 != 0.0)) || ((X_idx_1 + 1.01325 !=
    0.0) && (!(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 + 1.01325)
               >= 0.0))) || (!(X_idx_1 + 1.01325 != 0.0)) || ((X_idx_1 + 1.01325
    != 0.0) && (!(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
    1.01325) >= 0.0))) || ((pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_1 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_1 / 12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_1 + 1.01325 ==
    0.0 ? 1.0E-16 : X_idx_1 + 1.01325), 0.7142857142857143) *
    0.0050251256281407036 + exp(-X_idx_1 / 12428.460456240617)) != 0.0));
  t0[26ULL] = (int32_T)(X_idx_1 + 1.01325 != 0.0);
  t0[27ULL] = 1;
  t0[28ULL] = (int32_T)((!(X_idx_1 + 1.01325 != 0.0)) || (1.01325 / (X_idx_1 +
    1.01325 == 0.0 ? 1.0E-16 : X_idx_1 + 1.01325) >= 0.0));
  t0[29ULL] = (int32_T)((!(X_idx_1 + 1.01325 != 0.0)) || ((X_idx_1 + 1.01325 !=
    0.0) && (!(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 + 1.01325)
               >= 0.0))) || (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_1 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_1 / 12428.460456240617) != 0.0));
  t0[30ULL] = 1;
  t0[31ULL] = 1;
  t0[32ULL] = 1;
  t0[33ULL] = 1;
  t0[34ULL] = (int32_T)(intrm_sf_mf_10 != 0.0);
  t0[35ULL] = 1;
  t0[36ULL] = 1;
  t0[37ULL] = 1;
  t0[38ULL] = (int32_T)(intrm_sf_mf_10 != 0.0);
  t0[39ULL] = 1;
  t0[40ULL] = 1;
  t0[41ULL] = 1;
  t0[42ULL] = (int32_T)(t1 != 0.0);
  t0[43ULL] = 1;
  t0[44ULL] = 1;
  t0[45ULL] = 1;
  t0[46ULL] = (int32_T)(intrm_sf_mf_26 != 0.0);
  t0[47ULL] = 1;
  t0[48ULL] = 1;
  t0[49ULL] = 1;
  t0[50ULL] = (int32_T)(U_idx_1 != 0.0);
  t0[51ULL] = 1;
  t0[52ULL] = 1;
  t0[53ULL] = 1;
  t0[54ULL] = (int32_T)(t1 != 0.0);
  t0[55ULL] = 1;
  t0[56ULL] = 1;
  t0[57ULL] = 1;
  t0[58ULL] = 1;
  t0[59ULL] = (int32_T)(Hydraulic_Actuator_2_Fixed_Orifice_A_p *
                        Hydraulic_Actuator_2_Fixed_Orifice_A_p + DP_R_idx_2 *
                        DP_R_idx_2 >= 0.0);
  t0[60ULL] = (int32_T)((!(Hydraulic_Actuator_2_Fixed_Orifice_A_p *
    Hydraulic_Actuator_2_Fixed_Orifice_A_p + DP_R_idx_2 * DP_R_idx_2 >= 0.0)) ||
                        (pmf_sqrt(pmf_sqrt
    (Hydraulic_Actuator_2_Fixed_Orifice_A_p *
     Hydraulic_Actuator_2_Fixed_Orifice_A_p + DP_R_idx_2 * DP_R_idx_2)) != 0.0));
  t0[61ULL] = 1;
  t0[62ULL] = 1;
  t0[63ULL] = 1;
  t0[64ULL] = (int32_T)(Hydraulic_Actuator_2_Fixed_Orifice_B_p *
                        Hydraulic_Actuator_2_Fixed_Orifice_B_p + DP_R_idx_3 *
                        DP_R_idx_3 >= 0.0);
  t0[65ULL] = (int32_T)((!(Hydraulic_Actuator_2_Fixed_Orifice_B_p *
    Hydraulic_Actuator_2_Fixed_Orifice_B_p + DP_R_idx_3 * DP_R_idx_3 >= 0.0)) ||
                        (pmf_sqrt(pmf_sqrt
    (Hydraulic_Actuator_2_Fixed_Orifice_B_p *
     Hydraulic_Actuator_2_Fixed_Orifice_B_p + DP_R_idx_3 * DP_R_idx_3)) != 0.0));
  t0[66ULL] = 1;
  t0[67ULL] = 1;
  t0[68ULL] = 1;
  t0[69ULL] = 1;
  t0[70ULL] = 1;
  t0[71ULL] = (int32_T)(X_idx_9 * X_idx_9 + intrm_sf_mf_19 * intrm_sf_mf_19 >=
                        0.0);
  t0[72ULL] = (int32_T)((!(X_idx_9 * X_idx_9 + intrm_sf_mf_19 * intrm_sf_mf_19 >=
    0.0)) || (pmf_sqrt(pmf_sqrt(X_idx_9 * X_idx_9 + intrm_sf_mf_19 *
    intrm_sf_mf_19)) != 0.0));
  t0[73ULL] = 1;
  t0[74ULL] = 1;
  t0[75ULL] = 1;
  t0[76ULL] = 1;
  t0[77ULL] = 1;
  t0[78ULL] = (int32_T)(X_idx_11 * X_idx_11 + intrm_sf_mf_11 * intrm_sf_mf_11 >=
                        0.0);
  t0[79ULL] = (int32_T)((!(X_idx_11 * X_idx_11 + intrm_sf_mf_11 * intrm_sf_mf_11
    >= 0.0)) || (pmf_sqrt(pmf_sqrt(X_idx_11 * X_idx_11 + intrm_sf_mf_11 *
    intrm_sf_mf_11)) != 0.0));
  t0[80ULL] = 1;
  t0[81ULL] = 1;
  t0[82ULL] = 1;
  t0[83ULL] = 1;
  t0[84ULL] = 1;
  t0[85ULL] = (int32_T)((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + intrm_sf_mf_11 * intrm_sf_mf_11 >= 0.0);
  t0[86ULL] = (int32_T)((!((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + intrm_sf_mf_11 * intrm_sf_mf_11 >= 0.0)) || (pmf_sqrt
    (pmf_sqrt((-X_idx_9 + 200.00000000000003) * (-X_idx_9 + 200.00000000000003)
              + intrm_sf_mf_11 * intrm_sf_mf_11)) != 0.0));
  t0[87ULL] = 1;
  t0[88ULL] = 1;
  t0[89ULL] = 1;
  t0[90ULL] = 1;
  t0[91ULL] = 1;
  t0[92ULL] = (int32_T)((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + intrm_sf_mf_19 * intrm_sf_mf_19 >= 0.0);
  t0[93ULL] = (int32_T)((!((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + intrm_sf_mf_19 * intrm_sf_mf_19 >= 0.0)) || (pmf_sqrt
    (pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 + 200.00000000000003)
              + intrm_sf_mf_19 * intrm_sf_mf_19)) != 0.0));
  t0[94ULL] = 1;
  t0[95ULL] = 1;
  t0[96ULL] = 1;
  t0[97ULL] = 1;
  t0[98ULL] = 1;
  t0[99ULL] = (int32_T)(X_idx_24 * X_idx_24 + intrm_sf_mf_25 * intrm_sf_mf_25 >=
                        0.0);
  t0[100ULL] = (int32_T)((!(X_idx_24 * X_idx_24 + intrm_sf_mf_25 *
    intrm_sf_mf_25 >= 0.0)) || (pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 +
    intrm_sf_mf_25 * intrm_sf_mf_25)) != 0.0));
  t0[101ULL] = 1;
  t0[102ULL] = 1;
  t0[103ULL] = 1;
  t0[104ULL] = 1;
  t0[105ULL] = 1;
  t0[106ULL] = (int32_T)(-X_idx_1 * -X_idx_1 + X_idx_6 * X_idx_6 >= 0.0);
  t0[107ULL] = (int32_T)((!(-X_idx_1 * -X_idx_1 + X_idx_6 * X_idx_6 >= 0.0)) ||
    (pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + X_idx_6 * X_idx_6)) != 0.0));
  for (M_idx_19 = 0; M_idx_19 < 108; M_idx_19++) {
    out.mX[M_idx_19] = t0[M_idx_19];
  }

  (void)sys;
  (void)t10;
  return 0;
}
