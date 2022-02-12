/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_mode.h"
#include "Wind_Turbine_31c4daf8_3_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_mode(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_24;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_6;
  real_T X_idx_8;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_25;
  real_T intrm_sf_mf_29;
  real_T intrm_sf_mf_9;
  U_idx_0 = t1->mU.mX[0];
  U_idx_1 = t1->mU.mX[1];
  U_idx_2 = t1->mU.mX[2];
  X_idx_0 = t1->mX.mX[0];
  X_idx_1 = t1->mX.mX[1];
  X_idx_2 = t1->mX.mX[2];
  X_idx_3 = t1->mX.mX[3];
  X_idx_4 = t1->mX.mX[4];
  X_idx_6 = t1->mX.mX[6];
  X_idx_8 = t1->mX.mX[8];
  X_idx_24 = t1->mX.mX[24];
  out = t2->mMODE;
  U_idx_0 += -X_idx_6;
  if (X_idx_6 > 0.003) {
    intrm_sf_mf_9 = 0.005;
  } else if (X_idx_6 < 6.0E-13) {
    intrm_sf_mf_9 = 1.0E-12;
  } else {
    intrm_sf_mf_9 = X_idx_6 * 1.6666666666666667;
  }

  if (-X_idx_6 > 0.003) {
    intrm_sf_mf_17 = 0.005;
  } else if (-X_idx_6 < 6.0E-13) {
    intrm_sf_mf_17 = 1.0E-12;
  } else {
    intrm_sf_mf_17 = -X_idx_6 * 1.6666666666666667;
  }

  if (-(U_idx_1 + -24.0) > 0.005) {
    intrm_sf_mf_25 = 5.0E-5;
  } else if (-(U_idx_1 + -24.0) < 9.9999999999999991E-11) {
    intrm_sf_mf_25 = 1.0E-12;
  } else {
    intrm_sf_mf_25 = -(U_idx_1 + -24.0) * 0.01;
  }

  if (-(U_idx_2 + -24.0) > 0.005) {
    intrm_sf_mf_29 = 5.0E-5;
  } else if (-(U_idx_2 + -24.0) < 9.9999999999999991E-11) {
    intrm_sf_mf_29 = 1.0E-12;
  } else {
    intrm_sf_mf_29 = -(U_idx_2 + -24.0) * 0.01;
  }

  out.mX[0] = (int32_T)(X_idx_2 * 0.005 + 0.0001 > 0.0001);
  out.mX[1] = (int32_T)(X_idx_3 * 0.005 + 0.0001 > 0.0001);
  out.mX[2] = (int32_T)(intrm_sf_mf_9 > 1.0E-12);
  out.mX[3] = (int32_T)(X_idx_6 > 0.003);
  out.mX[4] = (int32_T)(X_idx_6 < 6.0E-13);
  out.mX[5] = (int32_T)(intrm_sf_mf_17 > 1.0E-12);
  out.mX[6] = (int32_T)(-X_idx_6 > 0.003);
  out.mX[7] = (int32_T)(-X_idx_6 < 6.0E-13);
  out.mX[8] = (int32_T)(U_idx_0 >= 0.3);
  out.mX[9] = (int32_T)(U_idx_0 <= -0.3);
  out.mX[10] = (int32_T)(X_idx_8 >= 0.1);
  out.mX[11] = (int32_T)(X_idx_8 <= 0.0);
  out.mX[12] = (int32_T)(X_idx_4 >= 0.0);
  out.mX[13] = (int32_T)(intrm_sf_mf_25 > 1.0E-12);
  out.mX[14] = (int32_T)(-(U_idx_1 + -24.0) > 0.005);
  out.mX[15] = (int32_T)(-(U_idx_1 + -24.0) < 9.9999999999999991E-11);
  out.mX[16] = (int32_T)(intrm_sf_mf_29 > 1.0E-12);
  out.mX[17] = (int32_T)(-(U_idx_2 + -24.0) > 0.005);
  out.mX[18] = (int32_T)(-(U_idx_2 + -24.0) < 9.9999999999999991E-11);
  out.mX[19] = (int32_T)(X_idx_0 > -1.01325);
  out.mX[20] = (int32_T)(X_idx_1 > -1.01325);
  out.mX[21] = (int32_T)(X_idx_0 + X_idx_24 > -1.01325);
  out.mX[22] = (int32_T)(X_idx_4 > -1.4967);
  (void)sys;
  (void)t2;
  return 0;
}
