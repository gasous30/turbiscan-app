/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_f.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T U_idx_0;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  int32_T M_idx_15;
  int32_T Q_idx_0;
  boolean_T intrm_sf_mf_1;
  boolean_T intrm_sf_mf_2;
  boolean_T intrm_sf_mf_3;
  boolean_T intrm_sf_mf_4;
  Q_idx_0 = t3->mQ.mX[0];
  M_idx_15 = t3->mM.mX[15];
  U_idx_0 = t3->mU.mX[0];
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_6 = t3->mX.mX[6];
  X_idx_7 = t3->mX.mX[7];
  X_idx_8 = t3->mX.mX[8];
  X_idx_9 = t3->mX.mX[9];
  out = t4->mF;
  X_idx_8 = -X_idx_7 + -X_idx_8;
  intrm_sf_mf_1 = ((size_t)Q_idx_0 == 4ULL);
  intrm_sf_mf_2 = ((size_t)Q_idx_0 == 3ULL);
  intrm_sf_mf_3 = ((size_t)Q_idx_0 == 2ULL);
  intrm_sf_mf_4 = ((size_t)Q_idx_0 == 1ULL);
  X_idx_7 = (U_idx_0 * 1.0E-5 - 0.001) * (real_T)(M_idx_15 != 0) * 400.0;
  if (intrm_sf_mf_4) {
  } else if (intrm_sf_mf_3) {
    X_idx_8 = -X_idx_1 + X_idx_0;
  } else if (intrm_sf_mf_2) {
    X_idx_8 -= X_idx_9;
  } else if (intrm_sf_mf_1) {
    X_idx_8 -= X_idx_9;
  } else {
    X_idx_8 -= -X_idx_9;
  }

  if (intrm_sf_mf_4 || intrm_sf_mf_3) {
  } else if (intrm_sf_mf_2) {
    X_idx_6--;
  } else if (intrm_sf_mf_1) {
    X_idx_6--;
  } else {
    X_idx_6++;
  }

  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = X_idx_8;
  out.mX[7] = X_idx_6;
  out.mX[8] = -(X_idx_7 * 70000.0);
  out.mX[9] = -(X_idx_7 * 80000.0);
  out.mX[10] = -(-X_idx_7 * 80000.0);
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = -0.0;
  out.mX[19] = 0.0;
  out.mX[20] = -0.0;
  (void)sys;
  (void)t4;
  return 0;
}
