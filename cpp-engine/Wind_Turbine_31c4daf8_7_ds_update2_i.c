/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_update2_i.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_update2_i(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t6, NeDsMethodOutput *t7)
{
  PmIntVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_9;
  size_t t0;
  int32_T CI_idx_10;
  int32_T CI_idx_11;
  int32_T CI_idx_14;
  int32_T CI_idx_15;
  int32_T CI_idx_17;
  int32_T CI_idx_18;
  int32_T CI_idx_20;
  int32_T CI_idx_7;
  int32_T CI_idx_8;
  int32_T CI_idx_9;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  boolean_T t1;
  Q_idx_0 = t6->mQ.mX[0];
  Q_idx_1 = t6->mQ.mX[1];
  X_idx_0 = t6->mX.mX[0];
  X_idx_1 = t6->mX.mX[1];
  X_idx_9 = t6->mX.mX[9];
  CI_idx_7 = t6->mCI.mX[7];
  CI_idx_8 = t6->mCI.mX[8];
  CI_idx_9 = t6->mCI.mX[9];
  CI_idx_10 = t6->mCI.mX[10];
  CI_idx_11 = t6->mCI.mX[11];
  CI_idx_14 = t6->mCI.mX[14];
  CI_idx_15 = t6->mCI.mX[15];
  CI_idx_17 = t6->mCI.mX[17];
  CI_idx_18 = t6->mCI.mX[18];
  CI_idx_20 = t6->mCI.mX[20];
  out = t7->mUPDATE2_I;
  X_idx_0 += -X_idx_1;
  if ((CI_idx_20 == 0) && (X_idx_0 > 0.0) && ((size_t)Q_idx_0 == 1ULL)) {
    t0 = 4ULL;
  } else if ((CI_idx_18 == 0) && (X_idx_0 < 0.0) && ((size_t)Q_idx_0 == 1ULL)) {
    t0 = 6ULL;
  } else if ((CI_idx_17 == 0) && (X_idx_0 > 0.0) && ((size_t)Q_idx_0 == 3ULL)) {
    t0 = 4ULL;
  } else {
    if (X_idx_0 < 0.0) {
      t1 = (X_idx_9 > 0.0);
    } else {
      t1 = false;
    }

    if ((CI_idx_15 == 0) && ((size_t)Q_idx_0 == 3ULL) && t1) {
      t0 = 2ULL;
    } else if ((CI_idx_14 == 0) && (X_idx_0 < 0.0) && ((size_t)Q_idx_0 == 5ULL))
    {
      t0 = 6ULL;
    } else {
      if (X_idx_0 > 0.0) {
        t1 = (X_idx_9 > 0.0);
      } else {
        t1 = false;
      }

      if ((CI_idx_11 == 0) && ((size_t)Q_idx_0 == 5ULL) && t1) {
        t0 = 2ULL;
      } else {
        if (X_idx_9 > 0.0) {
          t1 = (X_idx_0 < 0.0);
        } else {
          t1 = false;
        }

        if ((CI_idx_10 == 0) && ((size_t)Q_idx_0 == 4ULL) && t1) {
          t0 = 2ULL;
        } else if ((CI_idx_9 == 0) && (X_idx_0 < 0.0) && ((size_t)Q_idx_0 ==
                    4ULL)) {
          t0 = 6ULL;
        } else {
          if (X_idx_9 > 0.0) {
            t1 = (X_idx_0 > 0.0);
          } else {
            t1 = false;
          }

          if ((CI_idx_8 == 0) && ((size_t)Q_idx_0 == 6ULL) && t1) {
            t0 = 2ULL;
          } else if ((CI_idx_7 == 0) && (X_idx_0 > 0.0) && ((size_t)Q_idx_0 ==
                      6ULL)) {
            t0 = 4ULL;
          } else {
            t0 = (size_t)Q_idx_0;
          }
        }
      }
    }
  }

  out.mX[0] = (int32_T)t0;
  out.mX[1] = (int32_T)(Q_idx_1 != 0);
  (void)sys;
  (void)t7;
  return 0;
}
