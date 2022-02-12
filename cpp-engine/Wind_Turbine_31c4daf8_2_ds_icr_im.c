/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_icr_im.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_icr_im(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  out.mX[2] = 3;
  out.mX[3] = 3;
  out.mX[4] = 3;
  out.mX[5] = 3;
  out.mX[6] = 3;
  out.mX[7] = 3;
  out.mX[8] = 3;
  out.mX[9] = 3;
  out.mX[10] = 3;
  out.mX[11] = 3;
  out.mX[12] = 3;
  out.mX[13] = 3;
  out.mX[14] = 3;
  out.mX[15] = 3;
  out.mX[16] = 3;
  out.mX[17] = 3;
  out.mX[18] = 3;
  out.mX[19] = 3;
  out.mX[20] = 3;
  out.mX[21] = 3;
  out.mX[22] = 3;
  out.mX[23] = 3;
  out.mX[24] = 3;
  out.mX[25] = 3;
  out.mX[26] = 3;
  out.mX[27] = 3;
  out.mX[28] = 3;
  out.mX[29] = 3;
  out.mX[30] = 3;
  out.mX[31] = 3;
  out.mX[32] = 3;
  out.mX[33] = 3;
  out.mX[34] = 3;
  out.mX[35] = 3;
  out.mX[36] = 3;
  out.mX[37] = 3;
  out.mX[38] = 3;
  out.mX[39] = 3;
  out.mX[40] = 3;
  out.mX[41] = 3;
  out.mX[42] = 3;
  out.mX[43] = 3;
  out.mX[44] = 3;
  out.mX[45] = 3;
  out.mX[46] = 3;
  out.mX[47] = 3;
  out.mX[48] = 3;
  out.mX[49] = 3;
  out.mX[50] = 3;
  (void)sys;
  (void)t2;
  return 0;
}
