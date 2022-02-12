/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_cache_i.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_cache_i(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t8, NeDsMethodOutput *t9)
{
  PmIntVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_10;
  int32_T M_idx_11;
  int32_T M_idx_12;
  int32_T M_idx_13;
  int32_T M_idx_14;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  int32_T Q_idx_0;
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  boolean_T t6;
  Q_idx_0 = t8->mQ.mX[0];
  M_idx_0 = t8->mM.mX[0];
  M_idx_1 = t8->mM.mX[1];
  M_idx_2 = t8->mM.mX[2];
  M_idx_3 = t8->mM.mX[3];
  M_idx_4 = t8->mM.mX[4];
  M_idx_5 = t8->mM.mX[5];
  M_idx_6 = t8->mM.mX[6];
  M_idx_7 = t8->mM.mX[7];
  M_idx_8 = t8->mM.mX[8];
  M_idx_9 = t8->mM.mX[9];
  M_idx_10 = t8->mM.mX[10];
  M_idx_11 = t8->mM.mX[11];
  M_idx_12 = t8->mM.mX[12];
  M_idx_13 = t8->mM.mX[13];
  M_idx_14 = t8->mM.mX[14];
  X_idx_0 = t8->mX.mX[0];
  X_idx_1 = t8->mX.mX[1];
  X_idx_7 = t8->mX.mX[7];
  X_idx_8 = t8->mX.mX[8];
  X_idx_9 = t8->mX.mX[9];
  X_idx_10 = t8->mX.mX[10];
  X_idx_11 = t8->mX.mX[11];
  out = t9->mCACHE_I;
  X_idx_1 = -X_idx_1 + X_idx_0;
  X_idx_0 = -X_idx_7 + -X_idx_8;
  if (X_idx_9 > 0.0) {
    t0 = (X_idx_1 >= 0.0);
  } else {
    t0 = false;
  }

  if (X_idx_9 > 0.0) {
    t1 = (X_idx_1 <= 0.0);
  } else {
    t1 = false;
  }

  if (X_idx_1 > 0.001) {
    t2 = (X_idx_9 > 0.0);
  } else {
    t2 = false;
  }

  if (X_idx_1 > 0.001) {
    t3 = (X_idx_9 == 0.0);
  } else {
    t3 = false;
  }

  if (X_idx_1 < -0.001) {
    t4 = (X_idx_9 > 0.0);
  } else {
    t4 = false;
  }

  if (X_idx_1 < -0.001) {
    t5 = (X_idx_9 == 0.0);
  } else {
    t5 = false;
  }

  if (X_idx_1 == 0.0) {
    t6 = (X_idx_9 > 0.0);
  } else {
    t6 = false;
  }

  out.mX[0] = (int32_T)(M_idx_0 != 0);
  out.mX[1] = (int32_T)(M_idx_1 != 0);
  out.mX[2] = (int32_T)(M_idx_2 != 0);
  out.mX[3] = (int32_T)(M_idx_3 != 0);
  out.mX[4] = (int32_T)(M_idx_4 != 0);
  out.mX[5] = (int32_T)(M_idx_5 != 0);
  out.mX[6] = (int32_T)(M_idx_6 != 0);
  out.mX[7] = (int32_T)((X_idx_1 > 0.001) && ((size_t)Q_idx_0 == 6ULL));
  out.mX[8] = (int32_T)(((size_t)Q_idx_0 == 6ULL) && t0);
  out.mX[9] = (int32_T)((X_idx_1 < -0.001) && ((size_t)Q_idx_0 == 4ULL));
  out.mX[10] = (int32_T)(((size_t)Q_idx_0 == 4ULL) && t1);
  out.mX[11] = (int32_T)(((size_t)Q_idx_0 == 5ULL) && t2);
  out.mX[12] = (int32_T)(M_idx_7 != 0);
  out.mX[13] = (int32_T)(((size_t)Q_idx_0 == 5ULL) && t3);
  out.mX[14] = (int32_T)((X_idx_1 < -0.001) && ((size_t)Q_idx_0 == 5ULL));
  out.mX[15] = (int32_T)(((size_t)Q_idx_0 == 3ULL) && t4);
  out.mX[16] = (int32_T)(((size_t)Q_idx_0 == 3ULL) && t5);
  out.mX[17] = (int32_T)((X_idx_1 > 0.001) && ((size_t)Q_idx_0 == 3ULL));
  out.mX[18] = (int32_T)((X_idx_1 < 0.0) && ((size_t)Q_idx_0 == 1ULL));
  out.mX[19] = (int32_T)(((size_t)Q_idx_0 == 1ULL) && t6);
  out.mX[20] = (int32_T)((X_idx_1 > 0.0) && ((size_t)Q_idx_0 == 1ULL));
  out.mX[21] = (int32_T)((X_idx_0 < X_idx_10) && ((size_t)Q_idx_0 == 2ULL));
  out.mX[22] = (int32_T)((X_idx_0 > X_idx_11) && ((size_t)Q_idx_0 == 2ULL));
  out.mX[23] = (int32_T)(M_idx_8 != 0);
  out.mX[24] = (int32_T)(M_idx_9 != 0);
  out.mX[25] = (int32_T)(M_idx_10 != 0);
  out.mX[26] = (int32_T)(M_idx_11 != 0);
  out.mX[27] = (int32_T)(M_idx_12 != 0);
  out.mX[28] = (int32_T)(M_idx_13 != 0);
  out.mX[29] = (int32_T)(M_idx_14 != 0);
  (void)sys;
  (void)t9;
  return 0;
}
