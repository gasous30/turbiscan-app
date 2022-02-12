/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_update_i.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_update_i(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t16, NeDsMethodOutput *t17)
{
  PmIntVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  size_t t0;
  int32_T CI_idx_0;
  int32_T CI_idx_1;
  int32_T CI_idx_12;
  int32_T CI_idx_2;
  int32_T CI_idx_23;
  int32_T CI_idx_24;
  int32_T CI_idx_25;
  int32_T CI_idx_26;
  int32_T CI_idx_27;
  int32_T CI_idx_28;
  int32_T CI_idx_29;
  int32_T CI_idx_3;
  int32_T CI_idx_4;
  int32_T CI_idx_5;
  int32_T CI_idx_6;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  boolean_T t1;
  boolean_T t2;
  Q_idx_0 = t16->mQ.mX[0];
  Q_idx_1 = t16->mQ.mX[1];
  X_idx_0 = t16->mX.mX[0];
  X_idx_1 = t16->mX.mX[1];
  X_idx_7 = t16->mX.mX[7];
  X_idx_8 = t16->mX.mX[8];
  X_idx_9 = t16->mX.mX[9];
  X_idx_10 = t16->mX.mX[10];
  X_idx_11 = t16->mX.mX[11];
  CI_idx_0 = t16->mCI.mX[0];
  CI_idx_1 = t16->mCI.mX[1];
  CI_idx_2 = t16->mCI.mX[2];
  CI_idx_3 = t16->mCI.mX[3];
  CI_idx_4 = t16->mCI.mX[4];
  CI_idx_5 = t16->mCI.mX[5];
  CI_idx_6 = t16->mCI.mX[6];
  CI_idx_12 = t16->mCI.mX[12];
  CI_idx_23 = t16->mCI.mX[23];
  CI_idx_24 = t16->mCI.mX[24];
  CI_idx_25 = t16->mCI.mX[25];
  CI_idx_26 = t16->mCI.mX[26];
  CI_idx_27 = t16->mCI.mX[27];
  CI_idx_28 = t16->mCI.mX[28];
  CI_idx_29 = t16->mCI.mX[29];
  out = t17->mUPDATE_I;
  X_idx_1 = -X_idx_1 + X_idx_0;
  X_idx_0 = -X_idx_7 + -X_idx_8;
  if (((CI_idx_6 == 0) && (X_idx_0 > X_idx_11) && ((size_t)Q_idx_0 == 2ULL)) ||
      ((X_idx_0 > X_idx_11) && ((size_t)Q_idx_0 == 2ULL) && (Q_idx_1 != 0))) {
    t0 = 3ULL;
  } else if (((CI_idx_5 == 0) && (X_idx_0 < X_idx_10) && ((size_t)Q_idx_0 ==
               2ULL)) || ((X_idx_0 < X_idx_10) && ((size_t)Q_idx_0 == 2ULL) &&
                          (Q_idx_1 != 0))) {
    t0 = 5ULL;
  } else if (((CI_idx_4 == 0) && (X_idx_1 > 0.0) && ((size_t)Q_idx_0 == 1ULL)) ||
             ((X_idx_1 > 0.0) && ((size_t)Q_idx_0 == 1ULL) && (Q_idx_1 != 0))) {
    t0 = 4ULL;
  } else {
    if (X_idx_1 == 0.0) {
      t1 = (X_idx_9 > 0.0);
    } else {
      t1 = false;
    }

    if (X_idx_1 == 0.0) {
      t2 = (X_idx_9 > 0.0);
    } else {
      t2 = false;
    }

    if (((CI_idx_3 == 0) && ((size_t)Q_idx_0 == 1ULL) && t1) || (((size_t)
          Q_idx_0 == 1ULL) && t2 && (Q_idx_1 != 0))) {
      t0 = 2ULL;
    } else if (((CI_idx_2 == 0) && (X_idx_1 < 0.0) && ((size_t)Q_idx_0 == 1ULL))
               || ((X_idx_1 < 0.0) && ((size_t)Q_idx_0 == 1ULL) && (Q_idx_1 != 0)))
    {
      t0 = 6ULL;
    } else if (((CI_idx_29 == 0) && (X_idx_1 > 0.001) && ((size_t)Q_idx_0 ==
                 3ULL)) || ((X_idx_1 > 0.001) && ((size_t)Q_idx_0 == 3ULL) &&
                            (Q_idx_1 != 0))) {
      t0 = 4ULL;
    } else {
      if (X_idx_1 < -0.001) {
        t1 = (X_idx_9 == 0.0);
      } else {
        t1 = false;
      }

      if (X_idx_1 < -0.001) {
        t2 = (X_idx_9 == 0.0);
      } else {
        t2 = false;
      }

      if (((CI_idx_28 == 0) && ((size_t)Q_idx_0 == 3ULL) && t1) || (((size_t)
            Q_idx_0 == 3ULL) && t2 && (Q_idx_1 != 0))) {
        t0 = 6ULL;
      } else {
        if (X_idx_1 < -0.001) {
          t1 = (X_idx_9 > 0.0);
        } else {
          t1 = false;
        }

        if (X_idx_1 < -0.001) {
          t2 = (X_idx_9 > 0.0);
        } else {
          t2 = false;
        }

        if (((CI_idx_27 == 0) && ((size_t)Q_idx_0 == 3ULL) && t1) || (((size_t)
              Q_idx_0 == 3ULL) && t2 && (Q_idx_1 != 0))) {
          t0 = 2ULL;
        } else if (((CI_idx_26 == 0) && (X_idx_1 < -0.001) && ((size_t)Q_idx_0 ==
          5ULL)) || ((X_idx_1 < -0.001) && ((size_t)Q_idx_0 == 5ULL) && (Q_idx_1
          != 0))) {
          t0 = 6ULL;
        } else {
          if (X_idx_1 > 0.001) {
            t1 = (X_idx_9 == 0.0);
          } else {
            t1 = false;
          }

          if (X_idx_1 > 0.001) {
            t2 = (X_idx_9 == 0.0);
          } else {
            t2 = false;
          }

          if (((CI_idx_25 == 0) && ((size_t)Q_idx_0 == 5ULL) && t1) || (((size_t)
                Q_idx_0 == 5ULL) && t2 && (Q_idx_1 != 0))) {
            t0 = 4ULL;
          } else {
            if (X_idx_1 > 0.001) {
              t1 = (X_idx_9 > 0.0);
            } else {
              t1 = false;
            }

            if (X_idx_1 > 0.001) {
              t2 = (X_idx_9 > 0.0);
            } else {
              t2 = false;
            }

            if (((CI_idx_24 == 0) && ((size_t)Q_idx_0 == 5ULL) && t1) ||
                (((size_t)Q_idx_0 == 5ULL) && t2 && (Q_idx_1 != 0))) {
              t0 = 2ULL;
            } else {
              if (X_idx_9 > 0.0) {
                t1 = (X_idx_1 <= 0.0);
              } else {
                t1 = false;
              }

              if (X_idx_9 > 0.0) {
                t2 = (X_idx_1 <= 0.0);
              } else {
                t2 = false;
              }

              if (((CI_idx_23 == 0) && ((size_t)Q_idx_0 == 4ULL) && t1) ||
                  (((size_t)Q_idx_0 == 4ULL) && t2 && (Q_idx_1 != 0))) {
                t0 = 2ULL;
              } else if (((CI_idx_12 == 0) && (X_idx_1 < -0.001) && ((size_t)
                           Q_idx_0 == 4ULL)) || ((X_idx_1 < -0.001) && ((size_t)
                           Q_idx_0 == 4ULL) && (Q_idx_1 != 0))) {
                t0 = 6ULL;
              } else {
                if (X_idx_9 > 0.0) {
                  t1 = (X_idx_1 >= 0.0);
                } else {
                  t1 = false;
                }

                if (X_idx_9 > 0.0) {
                  t2 = (X_idx_1 >= 0.0);
                } else {
                  t2 = false;
                }

                if (((CI_idx_1 == 0) && ((size_t)Q_idx_0 == 6ULL) && t1) ||
                    (((size_t)Q_idx_0 == 6ULL) && t2 && (Q_idx_1 != 0))) {
                  t0 = 2ULL;
                } else if (((CI_idx_0 == 0) && (X_idx_1 > 0.001) && ((size_t)
                             Q_idx_0 == 6ULL)) || ((X_idx_1 > 0.001) && ((size_t)
                             Q_idx_0 == 6ULL) && (Q_idx_1 != 0))) {
                  t0 = 4ULL;
                } else {
                  t0 = (size_t)Q_idx_0;
                }
              }
            }
          }
        }
      }
    }
  }

  out.mX[0] = (int32_T)t0;
  out.mX[1] = 0;
  (void)sys;
  (void)t17;
  return 0;
}
