/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_dxf.h"
#include "Wind_Turbine_31c4daf8_3_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_dxf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t129, NeDsMethodOutput *t130)
{
  PmRealVector out;
  real_T t3[27];
  real_T t6[5];
  real_T DP_R_idx_0;
  real_T DP_R_idx_1;
  real_T DP_R_idx_2;
  real_T DP_R_idx_3;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_11;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_24;
  real_T X_idx_6;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T intermediate_der32;
  real_T intermediate_der55;
  real_T intermediate_der56;
  real_T t0;
  real_T t103;
  real_T t115;
  real_T t125;
  real_T t126;
  real_T t128;
  real_T t17;
  real_T t29;
  real_T t42;
  real_T t44;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t52;
  real_T t57;
  real_T t61;
  real_T t62;
  real_T t64;
  real_T t67;
  real_T t68;
  real_T t70;
  real_T t71;
  real_T t73;
  real_T t75;
  real_T t82;
  real_T t84;
  real_T t93;
  real_T t96;
  real_T zc_int1;
  real_T zc_int14;
  real_T zc_int4;
  size_t t12;
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
  M_idx_0 = t129->mM.mX[0];
  M_idx_1 = t129->mM.mX[1];
  M_idx_2 = t129->mM.mX[2];
  M_idx_3 = t129->mM.mX[3];
  M_idx_4 = t129->mM.mX[4];
  M_idx_5 = t129->mM.mX[5];
  M_idx_6 = t129->mM.mX[6];
  M_idx_7 = t129->mM.mX[7];
  M_idx_8 = t129->mM.mX[8];
  M_idx_9 = t129->mM.mX[9];
  M_idx_10 = t129->mM.mX[10];
  M_idx_11 = t129->mM.mX[11];
  M_idx_12 = t129->mM.mX[12];
  M_idx_13 = t129->mM.mX[13];
  M_idx_14 = t129->mM.mX[14];
  M_idx_15 = t129->mM.mX[15];
  M_idx_16 = t129->mM.mX[16];
  M_idx_17 = t129->mM.mX[17];
  M_idx_18 = t129->mM.mX[18];
  M_idx_22 = t129->mM.mX[22];
  U_idx_1 = t129->mU.mX[1];
  U_idx_2 = t129->mU.mX[2];
  X_idx_0 = t129->mX.mX[0];
  X_idx_1 = t129->mX.mX[1];
  X_idx_6 = t129->mX.mX[6];
  X_idx_8 = t129->mX.mX[8];
  X_idx_9 = t129->mX.mX[9];
  X_idx_11 = t129->mX.mX[11];
  X_idx_14 = t129->mX.mX[14];
  X_idx_15 = t129->mX.mX[15];
  X_idx_24 = t129->mX.mX[24];
  DP_R_idx_0 = t129->mDP_R.mX[0];
  DP_R_idx_1 = t129->mDP_R.mX[1];
  DP_R_idx_2 = t129->mDP_R.mX[2];
  DP_R_idx_3 = t129->mDP_R.mX[3];
  out = t130->mDXF;
  t29 = -X_idx_0 + X_idx_9;
  t125 = -X_idx_1 + X_idx_11;
  t126 = X_idx_14 * 0.002;
  t42 = pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
    1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_0 /
    12428.460456240617);
  t47 = pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
    1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_1 /
    12428.460456240617);
  if (M_idx_6 != 0) {
    t103 = 0.005;
  } else if (M_idx_7 != 0) {
    t103 = 1.0E-12;
  } else {
    t103 = -X_idx_6 * 1.6666666666666667;
  }

  zc_int1 = M_idx_5 != 0 ? t103 : 1.0E-12;
  t103 = 1.1280975852233448E-5 / (zc_int1 == 0.0 ? 1.0E-16 : zc_int1) / 2.0 *
    1.0E-5;
  if (M_idx_14 != 0) {
    t48 = 5.0E-5;
  } else if (M_idx_15 != 0) {
    t48 = 1.0E-12;
  } else {
    t48 = -(U_idx_1 + -24.0) * 0.01;
  }

  zc_int14 = M_idx_13 != 0 ? t48 : 1.0E-12;
  t48 = 1.1280975852233448E-5 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14) / 2.0 *
    1.0E-5;
  if (M_idx_17 != 0) {
    t49 = 5.0E-5;
  } else if (M_idx_18 != 0) {
    t49 = 1.0E-12;
  } else {
    t49 = -(U_idx_2 + -24.0) * 0.01;
  }

  t115 = M_idx_16 != 0 ? t49 : 1.0E-12;
  t49 = 1.1280975852233448E-5 / (t115 == 0.0 ? 1.0E-16 : t115) / 2.0 * 1.0E-5;
  if (M_idx_3 != 0) {
    t93 = 0.005;
  } else if (M_idx_4 != 0) {
    t93 = 1.0E-12;
  } else {
    t93 = X_idx_6 * 1.6666666666666667;
  }

  zc_int4 = M_idx_2 != 0 ? t93 : 1.0E-12;
  t93 = 1.1280975852233448E-5 / (zc_int4 == 0.0 ? 1.0E-16 : zc_int4) / 2.0 *
    1.0E-5;
  t52 = (X_idx_0 + 1.01325) * (X_idx_0 + 1.01325);
  t96 = (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
           1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_0 /
          12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_0 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_0 / 12428.460456240617));
  X_idx_14 = (-1.01325 / (t52 == 0.0 ? 1.0E-16 : t52) * pmf_pow(1.01325 /
    (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 + 1.01325),
    -0.2857142857142857) * 0.0035893754486719313 + exp(-X_idx_0 /
    12428.460456240617) * -8.0460488531214409E-5) * (-1.0000062909088354 / (t96 ==
    0.0 ? 1.0E-16 : t96));
  t128 = t126 * X_idx_14 * -0.005;
  t57 = (X_idx_1 + 1.01325) * (X_idx_1 + 1.01325);
  t61 = (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
           1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_1 /
          12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_1 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_1 / 12428.460456240617));
  t44 = (-1.01325 / (t57 == 0.0 ? 1.0E-16 : t57) * pmf_pow(1.01325 / (X_idx_1 +
           1.01325 == 0.0 ? 1.0E-16 : X_idx_1 + 1.01325), -0.2857142857142857) *
         0.0035893754486719313 + exp(-X_idx_1 / 12428.460456240617) *
         -8.0460488531214409E-5) * (-1.0000062909088354 / (t61 == 0.0 ? 1.0E-16 :
    t61));
  t17 = t126 * t44 * 0.005;
  t44 = 1.7;
  if (M_idx_6 != 0) {
    t52 = 0.0;
  } else if (M_idx_7 != 0) {
    t52 = 0.0;
  } else {
    t52 = -1.6666666666666667;
  }

  t96 = M_idx_5 != 0 ? t52 : 0.0;
  t62 = zc_int1 * zc_int1;
  t52 = -1.1280975852233448E-5 / (t62 == 0.0 ? 1.0E-16 : t62) * t96 / 2.0 *
    1.0E-5;
  if (M_idx_10 != 0) {
    t57 = (X_idx_8 - 0.1) * (real_T)(X_idx_15 > 0.0) * 10000.0;
  } else if (M_idx_11 != 0) {
    t57 = -((real_T)(X_idx_15 < 0.0) * 1.0E+9) * X_idx_8 * 1.0E-5;
  } else {
    t57 = 0.0;
  }

  if (M_idx_10 != 0) {
    intermediate_der32 = (X_idx_15 > 0.0 ? X_idx_15 : 0.0) * 10000.0;
  } else if (M_idx_11 != 0) {
    intermediate_der32 = -((X_idx_15 < 0.0 ? X_idx_15 : 0.0) * 1.0E+9) * 1.0E-5;
  } else {
    intermediate_der32 = 0.0;
  }

  if (M_idx_3 != 0) {
    intermediate_der55 = 0.0;
  } else if (M_idx_4 != 0) {
    intermediate_der55 = 0.0;
  } else {
    intermediate_der55 = 1.6666666666666667;
  }

  intermediate_der56 = M_idx_2 != 0 ? intermediate_der55 : 0.0;
  t64 = zc_int4 * zc_int4;
  intermediate_der55 = -1.1280975852233448E-5 / (t64 == 0.0 ? 1.0E-16 : t64) *
    intermediate_der56 / 2.0 * 1.0E-5;
  if (M_idx_12 != 0) {
    t0 = -1.0E+7;
  } else {
    t0 = M_idx_22 != 0 ? 0.0 : -1.0E+7;
  }

  if (M_idx_8 != 0) {
    t126 = 0.0;
  } else {
    t126 = (real_T)(M_idx_9 == 0);
  }

  if (M_idx_12 != 0) {
    t61 = -t44;
  } else {
    t61 = M_idx_22 != 0 ? 0.0 : -t44;
  }

  t62 = -(-(t128 * 1.0E+6) / 4975.0312972714573);
  t128 = pmf_sqrt(t29 * t29 + DP_R_idx_2 * DP_R_idx_2) * pmf_sqrt(pmf_sqrt(t29 *
    t29 + DP_R_idx_2 * DP_R_idx_2));
  t67 = -(DP_R_idx_0 * t29 * 0.031919356375394323);
  t68 = pmf_sqrt(pmf_sqrt(t29 * t29 + DP_R_idx_2 * DP_R_idx_2)) * pmf_sqrt
    (pmf_sqrt(t29 * t29 + DP_R_idx_2 * DP_R_idx_2));
  t70 = pmf_sqrt(pmf_sqrt(t29 * t29 + DP_R_idx_2 * DP_R_idx_2));
  t64 = -(-(t17 * 1.0E+6) / 4975.0312972714573);
  t17 = pmf_sqrt(t125 * t125 + DP_R_idx_3 * DP_R_idx_3) * pmf_sqrt(pmf_sqrt(t125
    * t125 + DP_R_idx_3 * DP_R_idx_3));
  t71 = -(DP_R_idx_1 * t125 * 0.031919356375394323);
  t73 = pmf_sqrt(pmf_sqrt(t125 * t125 + DP_R_idx_3 * DP_R_idx_3)) * pmf_sqrt
    (pmf_sqrt(t125 * t125 + DP_R_idx_3 * DP_R_idx_3));
  t75 = pmf_sqrt(pmf_sqrt(t125 * t125 + DP_R_idx_3 * DP_R_idx_3));
  t44 = pmf_sqrt(-X_idx_1 * -X_idx_1 + t49 * t49) * pmf_sqrt(pmf_sqrt(-X_idx_1 *
    -X_idx_1 + t49 * t49));
  t82 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t49 * t49)) * pmf_sqrt(pmf_sqrt(
    -X_idx_1 * -X_idx_1 + t49 * t49));
  t84 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t49 * t49));
  t44 = -((-(-(-X_idx_1 * t115 * 0.031919356375394323) / (t82 == 0.0 ? 1.0E-16 :
             t82) * (1.0 / (t44 == 0.0 ? 1.0E-16 : t44)) * -X_idx_1) * 0.5 +
           -t115 * 0.031919356375394323 / (t84 == 0.0 ? 1.0E-16 : t84)) *
          3.1622776601683795E+8) / 1039.6380728769657;
  t115 = pmf_sqrt(X_idx_9 * X_idx_9 + t103 * t103) * pmf_sqrt(pmf_sqrt(X_idx_9 *
    X_idx_9 + t103 * t103));
  X_idx_14 = -(X_idx_9 * zc_int1 * 0.031919356375394323);
  t82 = pmf_sqrt(pmf_sqrt(X_idx_9 * X_idx_9 + t103 * t103)) * pmf_sqrt(pmf_sqrt
    (X_idx_9 * X_idx_9 + t103 * t103));
  t84 = pmf_sqrt(pmf_sqrt(X_idx_9 * X_idx_9 + t103 * t103));
  t6[0ULL] = -((X_idx_14 / (t82 == 0.0 ? 1.0E-16 : t82) * (1.0 / (t115 == 0.0 ?
    1.0E-16 : t115)) * t52 * t103 * 0.5 + X_idx_9 * t96 * 0.031919356375394323 /
                (t84 == 0.0 ? 1.0E-16 : t84)) * 3.1622776601683795E+8);
  U_idx_1 = pmf_sqrt(X_idx_11 * X_idx_11 + t93 * t93) * pmf_sqrt(pmf_sqrt
    (X_idx_11 * X_idx_11 + t93 * t93));
  U_idx_2 = -(X_idx_11 * zc_int4 * 0.031919356375394323);
  X_idx_6 = pmf_sqrt(pmf_sqrt(X_idx_11 * X_idx_11 + t93 * t93)) * pmf_sqrt
    (pmf_sqrt(X_idx_11 * X_idx_11 + t93 * t93));
  X_idx_0 = pmf_sqrt(pmf_sqrt(X_idx_11 * X_idx_11 + t93 * t93));
  t6[1ULL] = -((U_idx_2 / (X_idx_6 == 0.0 ? 1.0E-16 : X_idx_6) * (1.0 / (U_idx_1
    == 0.0 ? 1.0E-16 : U_idx_1)) * intermediate_der55 * t93 * 0.5 + X_idx_11 *
                intermediate_der56 * 0.031919356375394323 / (X_idx_0 == 0.0 ?
    1.0E-16 : X_idx_0)) * 3.1622776601683795E+8);
  t49 = pmf_sqrt((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + t93 * t93) * pmf_sqrt(pmf_sqrt((-X_idx_9 +
    200.00000000000003) * (-X_idx_9 + 200.00000000000003) + t93 * t93));
  X_idx_8 = -((-X_idx_9 + 200.00000000000003) * zc_int4 * 0.031919356375394323);
  X_idx_15 = pmf_sqrt(pmf_sqrt((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + t93 * t93)) * pmf_sqrt(pmf_sqrt((-X_idx_9 +
    200.00000000000003) * (-X_idx_9 + 200.00000000000003) + t93 * t93));
  DP_R_idx_2 = (-X_idx_9 + 200.00000000000003) * intermediate_der56 *
    0.031919356375394323;
  intermediate_der56 = pmf_sqrt(pmf_sqrt((-X_idx_9 + 200.00000000000003) *
    (-X_idx_9 + 200.00000000000003) + t93 * t93));
  t6[2ULL] = -((X_idx_8 / (X_idx_15 == 0.0 ? 1.0E-16 : X_idx_15) * (1.0 / (t49 ==
    0.0 ? 1.0E-16 : t49)) * intermediate_der55 * t93 * 0.5 + DP_R_idx_2 /
                (intermediate_der56 == 0.0 ? 1.0E-16 : intermediate_der56)) *
               3.1622776601683795E+8);
  intermediate_der55 = pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + t103 * t103) * pmf_sqrt(pmf_sqrt((-X_idx_11 +
    200.00000000000003) * (-X_idx_11 + 200.00000000000003) + t103 * t103));
  t93 = -((-X_idx_11 + 200.00000000000003) * zc_int1 * 0.031919356375394323);
  DP_R_idx_2 = pmf_sqrt(pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + t103 * t103)) * pmf_sqrt(pmf_sqrt((-X_idx_11 +
    200.00000000000003) * (-X_idx_11 + 200.00000000000003) + t103 * t103));
  DP_R_idx_3 = (-X_idx_11 + 200.00000000000003) * t96 * 0.031919356375394323;
  t96 = pmf_sqrt(pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + t103 * t103));
  t6[3ULL] = -((t93 / (DP_R_idx_2 == 0.0 ? 1.0E-16 : DP_R_idx_2) * (1.0 /
    (intermediate_der55 == 0.0 ? 1.0E-16 : intermediate_der55)) * t52 * t103 *
                0.5 + DP_R_idx_3 / (t96 == 0.0 ? 1.0E-16 : t96)) *
               3.1622776601683795E+8);
  t6[4ULL] = t126;
  t3[0ULL] = t62;
  t3[1ULL] = -((-(t67 / (t68 == 0.0 ? 1.0E-16 : t68) * (1.0 / (t128 == 0.0 ?
    1.0E-16 : t128)) * t29) * 0.5 + -DP_R_idx_0 * 0.031919356375394323 / (t70 ==
    0.0 ? 1.0E-16 : t70)) * 3.1622776601683795E+8);
  t3[2ULL] = t64;
  t3[3ULL] = -((-(t71 / (t73 == 0.0 ? 1.0E-16 : t73) * (1.0 / (t17 == 0.0 ?
    1.0E-16 : t17)) * t125) * 0.5 + -DP_R_idx_1 * 0.031919356375394323 / (t75 ==
    0.0 ? 1.0E-16 : t75)) * 3.1622776601683795E+8);
  t3[4ULL] = t44;
  t3[5ULL] = -(M_idx_0 != 0 ? 0.005 : 0.0);
  t3[6ULL] = -(M_idx_1 != 0 ? 0.005 : 0.0);
  t3[7ULL] = t0;
  for (t12 = 0ULL; t12 < 5ULL; t12++) {
    t3[t12 + 8ULL] = t6[t12];
  }

  t3[14ULL] = -((t67 / (t68 == 0.0 ? 1.0E-16 : t68) * (1.0 / (t128 == 0.0 ?
    1.0E-16 : t128)) * t29 * 0.5 + DP_R_idx_0 * 0.031919356375394323 / (t70 ==
    0.0 ? 1.0E-16 : t70)) * 3.1622776601683795E+8);
  t29 = pmf_sqrt(X_idx_24 * X_idx_24 + t48 * t48) * pmf_sqrt(pmf_sqrt(X_idx_24 *
    X_idx_24 + t48 * t48));
  t126 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + t48 * t48)) * pmf_sqrt(pmf_sqrt
    (X_idx_24 * X_idx_24 + t48 * t48));
  t128 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + t48 * t48));
  out.mX[0] = t3[0];
  out.mX[1] = t3[1];
  out.mX[2] = t3[2];
  out.mX[3] = t3[3];
  out.mX[4] = t3[4];
  out.mX[5] = t3[5];
  out.mX[6] = t3[6];
  out.mX[7] = t3[7];
  out.mX[8] = t3[8];
  out.mX[9] = t3[9];
  out.mX[10] = t3[10];
  out.mX[11] = t3[11];
  out.mX[12] = t3[12];
  out.mX[13] = -intermediate_der32 / 1000.0000000000001;
  out.mX[14] = t3[14];
  out.mX[15] = -((X_idx_14 / (t82 == 0.0 ? 1.0E-16 : t82) * (1.0 / (t115 == 0.0 ?
    1.0E-16 : t115)) * X_idx_9 * 0.5 + zc_int1 * 0.031919356375394323 / (t84 ==
    0.0 ? 1.0E-16 : t84)) * 3.1622776601683795E+8);
  out.mX[16] = -((-(X_idx_8 / (X_idx_15 == 0.0 ? 1.0E-16 : X_idx_15) * (1.0 /
    (t49 == 0.0 ? 1.0E-16 : t49)) * (-X_idx_9 + 200.00000000000003)) * 0.5 +
                  -zc_int4 * 0.031919356375394323 / (intermediate_der56 == 0.0 ?
    1.0E-16 : intermediate_der56)) * 3.1622776601683795E+8);
  out.mX[17] = -((t71 / (t73 == 0.0 ? 1.0E-16 : t73) * (1.0 / (t17 == 0.0 ?
    1.0E-16 : t17)) * t125 * 0.5 + DP_R_idx_1 * 0.031919356375394323 / (t75 ==
    0.0 ? 1.0E-16 : t75)) * 3.1622776601683795E+8);
  out.mX[18] = -((U_idx_2 / (X_idx_6 == 0.0 ? 1.0E-16 : X_idx_6) * (1.0 /
    (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1)) * X_idx_11 * 0.5 + zc_int4 *
                  0.031919356375394323 / (X_idx_0 == 0.0 ? 1.0E-16 : X_idx_0)) *
                 3.1622776601683795E+8);
  out.mX[19] = -((-(t93 / (DP_R_idx_2 == 0.0 ? 1.0E-16 : DP_R_idx_2) * (1.0 /
    (intermediate_der55 == 0.0 ? 1.0E-16 : intermediate_der55)) * (-X_idx_11 +
    200.00000000000003)) * 0.5 + -zc_int1 * 0.031919356375394323 / (t96 == 0.0 ?
    1.0E-16 : t96)) * 3.1622776601683795E+8);
  out.mX[20] = -(-(1.0000062909088354 / (t42 == 0.0 ? 1.0E-16 : t42) * 0.002 *
                   -0.005 * 1.0E+6) / 4975.0312972714573);
  out.mX[21] = -(-(1.0000062909088354 / (t47 == 0.0 ? 1.0E-16 : t47) * 0.002 *
                   0.005 * 1.0E+6) / 4975.0312972714573);
  out.mX[22] = t61;
  out.mX[23] = -t57 / 1000.0000000000001;
  out.mX[24] = 1.0;
  out.mX[25] = 0.05;
  out.mX[26] = -((-(X_idx_24 * zc_int14 * 0.031919356375394323) / (t126 == 0.0 ?
    1.0E-16 : t126) * (1.0 / (t29 == 0.0 ? 1.0E-16 : t29)) * X_idx_24 * 0.5 +
                  zc_int14 * 0.031919356375394323 / (t128 == 0.0 ? 1.0E-16 :
    t128)) * 3.1622776601683795E+8);
  (void)sys;
  (void)t130;
  return 0;
}
