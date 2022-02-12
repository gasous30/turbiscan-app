/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_5_ds_imin.h"
#include "Wind_Turbine_31c4daf8_5_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_externals.h"
#include "Wind_Turbine_31c4daf8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_5_ds_imin(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mIMIN;
  out.mX[0] = -pmf_get_inf();
  out.mX[1] = -pmf_get_inf();
  out.mX[2] = -pmf_get_inf();
  out.mX[3] = -pmf_get_inf();
  out.mX[4] = -pmf_get_inf();
  out.mX[5] = -pmf_get_inf();
  out.mX[6] = -pmf_get_inf();
  out.mX[7] = -pmf_get_inf();
  out.mX[8] = -pmf_get_inf();
  out.mX[9] = -pmf_get_inf();
  out.mX[10] = -pmf_get_inf();
  out.mX[11] = -pmf_get_inf();
  out.mX[12] = -pmf_get_inf();
  out.mX[13] = -pmf_get_inf();
  out.mX[14] = -pmf_get_inf();
  out.mX[15] = -pmf_get_inf();
  out.mX[16] = -pmf_get_inf();
  out.mX[17] = -pmf_get_inf();
  out.mX[18] = -pmf_get_inf();
  out.mX[19] = -pmf_get_inf();
  out.mX[20] = -pmf_get_inf();
  out.mX[21] = -pmf_get_inf();
  out.mX[22] = -pmf_get_inf();
  out.mX[23] = -pmf_get_inf();
  out.mX[24] = -pmf_get_inf();
  (void)sys;
  (void)t2;
  return 0;
}
