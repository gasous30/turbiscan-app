/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_duf.h"
#include "Wind_Turbine_31c4daf8_3_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_duf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t19, NeDsMethodOutput *t20)
{
  PmRealVector out;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_1;
  real_T X_idx_24;
  real_T intermediate_der51;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t17;
  real_T t1_idx_0;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t9;
  int32_T M_idx_13;
  int32_T M_idx_14;
  int32_T M_idx_15;
  int32_T M_idx_16;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_8;
  int32_T M_idx_9;
  M_idx_8 = t19->mM.mX[8];
  M_idx_9 = t19->mM.mX[9];
  M_idx_13 = t19->mM.mX[13];
  M_idx_14 = t19->mM.mX[14];
  M_idx_15 = t19->mM.mX[15];
  M_idx_16 = t19->mM.mX[16];
  M_idx_17 = t19->mM.mX[17];
  M_idx_18 = t19->mM.mX[18];
  U_idx_1 = t19->mU.mX[1];
  U_idx_2 = t19->mU.mX[2];
  X_idx_1 = t19->mX.mX[1];
  X_idx_24 = t19->mX.mX[24];
  out = t20->mDUF;
  if (M_idx_14 != 0) {
    t3 = 5.0E-5;
  } else if (M_idx_15 != 0) {
    t3 = 1.0E-12;
  } else {
    t3 = -(U_idx_1 + -24.0) * 0.01;
  }

  t14 = M_idx_13 != 0 ? t3 : 1.0E-12;
  t3 = 1.1280975852233448E-5 / (t14 == 0.0 ? 1.0E-16 : t14) / 2.0 * 1.0E-5;
  if (M_idx_17 != 0) {
    t4 = 5.0E-5;
  } else if (M_idx_18 != 0) {
    t4 = 1.0E-12;
  } else {
    t4 = -(U_idx_2 + -24.0) * 0.01;
  }

  t15 = M_idx_16 != 0 ? t4 : 1.0E-12;
  t4 = 1.1280975852233448E-5 / (t15 == 0.0 ? 1.0E-16 : t15) / 2.0 * 1.0E-5;
  if (M_idx_14 != 0) {
    intermediate_der51 = 0.0;
  } else if (M_idx_15 != 0) {
    intermediate_der51 = 0.0;
  } else {
    intermediate_der51 = -0.01;
  }

  t13 = M_idx_13 != 0 ? intermediate_der51 : 0.0;
  U_idx_1 = t14 * t14;
  intermediate_der51 = -1.1280975852233448E-5 / (U_idx_1 == 0.0 ? 1.0E-16 :
    U_idx_1) * t13 / 2.0 * 1.0E-5;
  if (M_idx_17 != 0) {
    U_idx_1 = 0.0;
  } else if (M_idx_18 != 0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = -0.01;
  }

  t17 = M_idx_16 != 0 ? U_idx_1 : 0.0;
  U_idx_1 = t15 * t15;
  t9 = -1.1280975852233448E-5 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1) * t17;
  if (M_idx_8 != 0) {
    U_idx_2 = 0.0;
  } else {
    U_idx_2 = M_idx_9 != 0 ? 0.0 : -1.0;
  }

  t1_idx_0 = U_idx_2;
  t2 = pmf_sqrt(X_idx_24 * X_idx_24 + t3 * t3) * pmf_sqrt(pmf_sqrt(X_idx_24 *
    X_idx_24 + t3 * t3));
  U_idx_2 = -(X_idx_24 * t14 * 0.031919356375394323);
  t14 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + t3 * t3)) * pmf_sqrt(pmf_sqrt
    (X_idx_24 * X_idx_24 + t3 * t3));
  U_idx_1 = X_idx_24 * t13 * 0.031919356375394323;
  t13 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + t3 * t3));
  U_idx_1 = -((U_idx_2 / (t14 == 0.0 ? 1.0E-16 : t14) * (1.0 / (t2 == 0.0 ?
    1.0E-16 : t2)) * intermediate_der51 * t3 * 0.5 + U_idx_1 / (t13 == 0.0 ?
    1.0E-16 : t13)) * 3.1622776601683795E+8);
  t3 = pmf_sqrt(-X_idx_1 * -X_idx_1 + t4 * t4) * pmf_sqrt(pmf_sqrt(-X_idx_1 *
    -X_idx_1 + t4 * t4));
  t14 = -(-X_idx_1 * t15 * 0.031919356375394323);
  t15 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t4 * t4)) * pmf_sqrt(pmf_sqrt
    (-X_idx_1 * -X_idx_1 + t4 * t4));
  t2 = -X_idx_1 * t17 * 0.031919356375394323;
  t17 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t4 * t4));
  out.mX[0] = t1_idx_0;
  out.mX[1] = U_idx_1;
  out.mX[2] = -((t14 / (t15 == 0.0 ? 1.0E-16 : t15) * (1.0 / (t3 == 0.0 ?
    1.0E-16 : t3)) * (t9 / 2.0 * 1.0E-5) * t4 * 0.5 + t2 / (t17 == 0.0 ? 1.0E-16
    : t17)) * 3.1622776601683795E+8) / 1039.6380728769657;
  (void)sys;
  (void)t20;
  return 0;
}
