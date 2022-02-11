/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_zc.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_zc(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t8, NeDsMethodOutput *t9)
{
  PmRealVector out;
  real_T U_idx_0;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  int32_T Q_idx_0;
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  boolean_T t6;
  Q_idx_0 = t8->mQ.mX[0];
  U_idx_0 = t8->mU.mX[0];
  X_idx_0 = t8->mX.mX[0];
  X_idx_1 = t8->mX.mX[1];
  X_idx_7 = t8->mX.mX[7];
  X_idx_8 = t8->mX.mX[8];
  X_idx_9 = t8->mX.mX[9];
  X_idx_10 = t8->mX.mX[10];
  X_idx_11 = t8->mX.mX[11];
  out = t9->mZC;
  X_idx_1 = -X_idx_1 + X_idx_0;
  X_idx_0 = -X_idx_7 + -X_idx_8;
  if (X_idx_1 == 0.0) {
    t0 = (X_idx_9 > 0.0);
  } else {
    t0 = false;
  }

  if (X_idx_1 < -0.001) {
    t1 = (X_idx_9 == 0.0);
  } else {
    t1 = false;
  }

  if (X_idx_1 < -0.001) {
    t2 = (X_idx_9 > 0.0);
  } else {
    t2 = false;
  }

  if (X_idx_1 > 0.001) {
    t3 = (X_idx_9 == 0.0);
  } else {
    t3 = false;
  }

  if (X_idx_1 > 0.001) {
    t4 = (X_idx_9 > 0.0);
  } else {
    t4 = false;
  }

  if (X_idx_9 > 0.0) {
    t5 = (X_idx_1 <= 0.0);
  } else {
    t5 = false;
  }

  if (X_idx_9 > 0.0) {
    t6 = (X_idx_1 >= 0.0);
  } else {
    t6 = false;
  }

  out.mX[0] = U_idx_0 * 1.0E-5 - 0.001;
  out.mX[1] = (real_T)((X_idx_0 > X_idx_11) && ((size_t)Q_idx_0 == 2ULL));
  out.mX[2] = (real_T)((X_idx_0 < X_idx_10) && ((size_t)Q_idx_0 == 2ULL));
  out.mX[3] = (real_T)((X_idx_1 > 0.0) && ((size_t)Q_idx_0 == 1ULL));
  out.mX[4] = (real_T)(((size_t)Q_idx_0 == 1ULL) && t0);
  out.mX[5] = (real_T)((X_idx_1 < 0.0) && ((size_t)Q_idx_0 == 1ULL));
  out.mX[6] = (real_T)((X_idx_1 > 0.001) && ((size_t)Q_idx_0 == 3ULL));
  out.mX[7] = (real_T)(((size_t)Q_idx_0 == 3ULL) && t1);
  out.mX[8] = (real_T)(((size_t)Q_idx_0 == 3ULL) && t2);
  out.mX[9] = (real_T)((X_idx_1 < -0.001) && ((size_t)Q_idx_0 == 5ULL));
  out.mX[10] = (real_T)(((size_t)Q_idx_0 == 5ULL) && t3);
  out.mX[11] = (real_T)(((size_t)Q_idx_0 == 5ULL) && t4);
  out.mX[12] = (real_T)(((size_t)Q_idx_0 == 4ULL) && t5);
  out.mX[13] = (real_T)((X_idx_1 < -0.001) && ((size_t)Q_idx_0 == 4ULL));
  out.mX[14] = (real_T)(((size_t)Q_idx_0 == 6ULL) && t6);
  out.mX[15] = (real_T)((X_idx_1 > 0.001) && ((size_t)Q_idx_0 == 6ULL));
  (void)sys;
  (void)t9;
  return 0;
}
