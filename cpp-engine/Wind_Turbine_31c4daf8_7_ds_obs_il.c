/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_obs_il.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_obs_il(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static boolean_T _cg_const_1[170] = { true, true, true, false, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, true, true, true, true, true, true, true, true, true,
    true, true, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, true, true, true, false, true, false, true, true, true, true,
    true, true, false, true, true, true, true, true, true, true, true, true,
    true, false, false, true, true, true, false, true, true, true, true, true,
    true, true };

  PmBoolVector out;
  int32_T b;
  boolean_T t0[170];
  (void)t1;
  out = t2->mOBS_IL;
  for (b = 0; b < 170; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 170; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
