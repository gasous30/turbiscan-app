/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_f.h"
#include "Wind_Turbine_31c4daf8_3_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t32, NeDsMethodOutput *t33)
{
  PmRealVector out;
  real_T DP_R_idx_0;
  real_T DP_R_idx_1;
  real_T DP_R_idx_2;
  real_T DP_R_idx_3;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_11;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_18;
  real_T X_idx_2;
  real_T X_idx_21;
  real_T X_idx_24;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_6;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t1;
  real_T t14;
  real_T t16;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t7;
  real_T zc_int1;
  real_T zc_int14;
  real_T zc_int15;
  real_T zc_int17;
  real_T zc_int18;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_10;
  int32_T M_idx_11;
  int32_T M_idx_12;
  int32_T M_idx_13;
  int32_T M_idx_14;
  int32_T M_idx_15;
  int32_T M_idx_16;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_2;
  int32_T M_idx_22;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  M_idx_0 = t32->mM.mX[0];
  M_idx_1 = t32->mM.mX[1];
  M_idx_2 = t32->mM.mX[2];
  M_idx_3 = t32->mM.mX[3];
  M_idx_4 = t32->mM.mX[4];
  M_idx_5 = t32->mM.mX[5];
  M_idx_6 = t32->mM.mX[6];
  M_idx_7 = t32->mM.mX[7];
  M_idx_8 = t32->mM.mX[8];
  M_idx_9 = t32->mM.mX[9];
  M_idx_10 = t32->mM.mX[10];
  M_idx_11 = t32->mM.mX[11];
  M_idx_12 = t32->mM.mX[12];
  M_idx_13 = t32->mM.mX[13];
  M_idx_14 = t32->mM.mX[14];
  M_idx_15 = t32->mM.mX[15];
  M_idx_16 = t32->mM.mX[16];
  M_idx_17 = t32->mM.mX[17];
  M_idx_18 = t32->mM.mX[18];
  M_idx_22 = t32->mM.mX[22];
  U_idx_0 = t32->mU.mX[0];
  U_idx_1 = t32->mU.mX[1];
  U_idx_2 = t32->mU.mX[2];
  X_idx_0 = t32->mX.mX[0];
  X_idx_1 = t32->mX.mX[1];
  X_idx_2 = t32->mX.mX[2];
  X_idx_3 = t32->mX.mX[3];
  X_idx_4 = t32->mX.mX[4];
  X_idx_6 = t32->mX.mX[6];
  X_idx_8 = t32->mX.mX[8];
  X_idx_9 = t32->mX.mX[9];
  X_idx_11 = t32->mX.mX[11];
  X_idx_14 = t32->mX.mX[14];
  X_idx_15 = t32->mX.mX[15];
  X_idx_18 = t32->mX.mX[18];
  X_idx_21 = t32->mX.mX[21];
  X_idx_24 = t32->mX.mX[24];
  DP_R_idx_0 = t32->mDP_R.mX[0];
  DP_R_idx_1 = t32->mDP_R.mX[1];
  DP_R_idx_2 = t32->mDP_R.mX[2];
  DP_R_idx_3 = t32->mDP_R.mX[3];
  out = t33->mF;
  t29 = -X_idx_0 + X_idx_9;
  t30 = -X_idx_1 + X_idx_11;
  t31 = X_idx_14 * 0.002;
  X_idx_14 = pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
    1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_0 /
    12428.460456240617);
  t16 = t31 * (1.0000062909088354 / (X_idx_14 == 0.0 ? 1.0E-16 : X_idx_14)) *
    -0.005;
  X_idx_14 = pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
    1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_1 /
    12428.460456240617);
  t14 = t31 * (1.0000062909088354 / (X_idx_14 == 0.0 ? 1.0E-16 : X_idx_14)) *
    0.005;
  X_idx_14 = X_idx_4 * 1.0E+7 + t31 * 850.0;
  t1 = (X_idx_4 - -1.4967) * 1.0E+7 + t31 * 850.0;
  if (M_idx_6 != 0) {
    t31 = 0.005;
  } else if (M_idx_7 != 0) {
    t31 = 1.0E-12;
  } else {
    t31 = -X_idx_6 * 1.6666666666666667;
  }

  zc_int1 = M_idx_5 != 0 ? t31 : 1.0E-12;
  t31 = 1.1280975852233448E-5 / (zc_int1 == 0.0 ? 1.0E-16 : zc_int1) / 2.0 *
    1.0E-5;
  if (M_idx_10 != 0) {
    t7 = (X_idx_8 - 0.1) * (X_idx_15 > 0.0 ? X_idx_15 : 0.0) * 10000.0;
  } else if (M_idx_11 != 0) {
    t7 = -((X_idx_15 < 0.0 ? X_idx_15 : 0.0) * 1.0E+9) * X_idx_8 * 1.0E-5;
  } else {
    t7 = 0.0;
  }

  if (M_idx_14 != 0) {
    zc_int15 = 5.0E-5;
  } else if (M_idx_15 != 0) {
    zc_int15 = 1.0E-12;
  } else {
    zc_int15 = -(U_idx_1 + -24.0) * 0.01;
  }

  zc_int14 = M_idx_13 != 0 ? zc_int15 : 1.0E-12;
  zc_int15 = 1.1280975852233448E-5 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14) /
    2.0 * 1.0E-5;
  if (M_idx_17 != 0) {
    zc_int18 = 5.0E-5;
  } else if (M_idx_18 != 0) {
    zc_int18 = 1.0E-12;
  } else {
    zc_int18 = -(U_idx_2 + -24.0) * 0.01;
  }

  zc_int17 = M_idx_16 != 0 ? zc_int18 : 1.0E-12;
  zc_int18 = 1.1280975852233448E-5 / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) /
    2.0 * 1.0E-5;
  if (M_idx_3 != 0) {
    X_idx_0 = 0.005;
  } else if (M_idx_4 != 0) {
    X_idx_0 = 1.0E-12;
  } else {
    X_idx_0 = X_idx_6 * 1.6666666666666667;
  }

  X_idx_4 = M_idx_2 != 0 ? X_idx_0 : 1.0E-12;
  X_idx_0 = 1.1280975852233448E-5 / (X_idx_4 == 0.0 ? 1.0E-16 : X_idx_4) / 2.0 *
    1.0E-5;
  if (M_idx_12 != 0) {
    X_idx_18 -= X_idx_14;
  } else if (M_idx_22 != 0) {
  } else {
    X_idx_18 -= t1;
  }

  if (M_idx_8 != 0) {
    t1 = X_idx_21 * 0.05 - 0.3;
  } else if (M_idx_9 != 0) {
    t1 = X_idx_21 * 0.05 - -0.3;
  } else {
    t1 = X_idx_21 * 0.05 - (-X_idx_6 + U_idx_0);
  }

  U_idx_2 = -(t16 * 1.0E+6);
  U_idx_0 = -(-(t14 * 1.0E+6) / 4975.0312972714573);
  t14 = pmf_sqrt(pmf_sqrt(t29 * t29 + DP_R_idx_2 * DP_R_idx_2));
  t16 = pmf_sqrt(pmf_sqrt(t30 * t30 + DP_R_idx_3 * DP_R_idx_3));
  X_idx_8 = -(DP_R_idx_1 * t30 * 0.031919356375394323 / (t16 == 0.0 ? 1.0E-16 :
    t16) * 3.1622776601683795E+8);
  t30 = pmf_sqrt(pmf_sqrt(X_idx_9 * X_idx_9 + t31 * t31));
  X_idx_15 = -(X_idx_9 * zc_int1 * 0.031919356375394323 / (t30 == 0.0 ? 1.0E-16 :
    t30) * 3.1622776601683795E+8);
  t30 = pmf_sqrt(pmf_sqrt(X_idx_11 * X_idx_11 + X_idx_0 * X_idx_0));
  U_idx_1 = -(X_idx_11 * X_idx_4 * 0.031919356375394323 / (t30 == 0.0 ? 1.0E-16 :
    t30) * 3.1622776601683795E+8);
  t30 = pmf_sqrt(pmf_sqrt((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + X_idx_0 * X_idx_0));
  X_idx_4 = -((-X_idx_9 + 200.00000000000003) * X_idx_4 * 0.031919356375394323 /
              (t30 == 0.0 ? 1.0E-16 : t30) * 3.1622776601683795E+8);
  t30 = pmf_sqrt(pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + t31 * t31));
  X_idx_0 = -((-X_idx_11 + 200.00000000000003) * zc_int1 * 0.031919356375394323 /
              (t30 == 0.0 ? 1.0E-16 : t30) * 3.1622776601683795E+8);
  t30 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + zc_int15 * zc_int15));
  X_idx_14 = -(X_idx_24 * zc_int14 * 0.031919356375394323 / (t30 == 0.0 ?
    1.0E-16 : t30) * 3.1622776601683795E+8);
  t30 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + zc_int18 * zc_int18));
  out.mX[0] = -(U_idx_2 / 4975.0312972714573);
  out.mX[1] = 0.0;
  out.mX[2] = U_idx_0;
  out.mX[3] = 0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -(DP_R_idx_0 * t29 * 0.031919356375394323 / (t14 == 0.0 ? 1.0E-16 :
    t14) * 3.1622776601683795E+8);
  out.mX[10] = X_idx_8;
  out.mX[11] = -(M_idx_0 != 0 ? X_idx_2 * 0.005 + 0.0001 : 0.0001);
  out.mX[12] = -(M_idx_1 != 0 ? X_idx_3 * 0.005 + 0.0001 : 0.0001);
  out.mX[13] = X_idx_18;
  out.mX[14] = X_idx_15;
  out.mX[15] = U_idx_1;
  out.mX[16] = X_idx_4;
  out.mX[17] = X_idx_0;
  out.mX[18] = t1;
  out.mX[19] = 0.0;
  out.mX[20] = -0.15 + -t7 / 1000.0000000000001;
  out.mX[21] = X_idx_14;
  out.mX[22] = -(-X_idx_1 * zc_int17 * 0.031919356375394323 / (t30 == 0.0 ?
    1.0E-16 : t30) * 3.1622776601683795E+8) / 1039.6380728769657;
  out.mX[23] = -0.0;
  out.mX[24] = -0.0;
  (void)sys;
  (void)t33;
  return 0;
}
