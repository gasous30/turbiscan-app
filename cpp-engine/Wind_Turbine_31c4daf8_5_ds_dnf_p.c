/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_5_ds_dnf_p.h"
#include "Wind_Turbine_31c4daf8_5_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_externals.h"
#include "Wind_Turbine_31c4daf8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_5_ds_dnf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 36ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 1;
  out.mJc[9] = 1;
  out.mJc[10] = 1;
  out.mJc[11] = 1;
  out.mJc[12] = 1;
  out.mJc[13] = 1;
  out.mJc[14] = 1;
  out.mJc[15] = 1;
  out.mJc[16] = 1;
  out.mJc[17] = 1;
  out.mJc[18] = 1;
  out.mJc[19] = 1;
  out.mJc[20] = 1;
  out.mJc[21] = 1;
  out.mJc[22] = 1;
  out.mJc[23] = 1;
  out.mJc[24] = 1;
  out.mJc[25] = 1;
  out.mJc[26] = 1;
  out.mJc[27] = 1;
  out.mJc[28] = 1;
  out.mJc[29] = 1;
  out.mJc[30] = 1;
  out.mJc[31] = 1;
  out.mJc[32] = 1;
  out.mJc[33] = 1;
  out.mJc[34] = 1;
  out.mJc[35] = 1;
  out.mJc[36] = 1;
  out.mIr[0] = 20;
  (void)sys;
  (void)t2;
  return 0;
}
