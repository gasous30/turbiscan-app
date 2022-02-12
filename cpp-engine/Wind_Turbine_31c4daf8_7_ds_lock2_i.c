/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_lock2_i.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_lock2_i(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t5, NeDsMethodOutput *t6)
{
  PmBoolVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_9;
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
  boolean_T t0;
  Q_idx_0 = t5->mQ.mX[0];
  X_idx_0 = t5->mX.mX[0];
  X_idx_1 = t5->mX.mX[1];
  X_idx_9 = t5->mX.mX[9];
  CI_idx_7 = t5->mCI.mX[7];
  CI_idx_8 = t5->mCI.mX[8];
  CI_idx_9 = t5->mCI.mX[9];
  CI_idx_10 = t5->mCI.mX[10];
  CI_idx_11 = t5->mCI.mX[11];
  CI_idx_14 = t5->mCI.mX[14];
  CI_idx_15 = t5->mCI.mX[15];
  CI_idx_17 = t5->mCI.mX[17];
  CI_idx_18 = t5->mCI.mX[18];
  CI_idx_20 = t5->mCI.mX[20];
  out = t6->mLOCK2_I;
  X_idx_0 += -X_idx_1;
  if ((CI_idx_20 == 0) && (X_idx_0 > 0.0) && ((size_t)Q_idx_0 == 1ULL)) {
    t0 = true;
  } else if ((CI_idx_18 == 0) && (X_idx_0 < 0.0) && ((size_t)Q_idx_0 == 1ULL)) {
    t0 = true;
  } else if ((CI_idx_17 == 0) && (X_idx_0 > 0.0) && ((size_t)Q_idx_0 == 3ULL)) {
    t0 = true;
  } else {
    if (X_idx_0 < 0.0) {
      t0 = (X_idx_9 > 0.0);
    } else {
      t0 = false;
    }

    if ((CI_idx_15 == 0) && ((size_t)Q_idx_0 == 3ULL) && t0) {
      t0 = true;
    } else if ((CI_idx_14 == 0) && (X_idx_0 < 0.0) && ((size_t)Q_idx_0 == 5ULL))
    {
      t0 = true;
    } else {
      if (X_idx_0 > 0.0) {
        t0 = (X_idx_9 > 0.0);
      } else {
        t0 = false;
      }

      if ((CI_idx_11 == 0) && ((size_t)Q_idx_0 == 5ULL) && t0) {
        t0 = true;
      } else {
        if (X_idx_9 > 0.0) {
          t0 = (X_idx_0 < 0.0);
        } else {
          t0 = false;
        }

        if ((CI_idx_10 == 0) && ((size_t)Q_idx_0 == 4ULL) && t0) {
          t0 = true;
        } else if ((CI_idx_9 == 0) && (X_idx_0 < 0.0) && ((size_t)Q_idx_0 ==
                    4ULL)) {
          t0 = true;
        } else {
          if (X_idx_9 > 0.0) {
            t0 = (X_idx_0 > 0.0);
          } else {
            t0 = false;
          }

          if ((CI_idx_8 == 0) && ((size_t)Q_idx_0 == 6ULL) && t0) {
            t0 = true;
          } else {
            t0 = ((CI_idx_7 == 0) && (X_idx_0 > 0.0) && ((size_t)Q_idx_0 == 6ULL));
          }
        }
      }
    }
  }

  out.mX[0] = t0;
  out.mX[1] = false;
  (void)sys;
  (void)t6;
  return 0;
}
