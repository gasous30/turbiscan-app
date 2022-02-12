/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_tduicr_p.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_tduicr_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 51ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 14;
  out.mJc[2] = 28;
  out.mJc[3] = 37;
  out.mJc[4] = 37;
  out.mJc[5] = 37;
  out.mIr[0] = 36;
  out.mIr[1] = 38;
  out.mIr[2] = 39;
  out.mIr[3] = 40;
  out.mIr[4] = 41;
  out.mIr[5] = 42;
  out.mIr[6] = 43;
  out.mIr[7] = 44;
  out.mIr[8] = 45;
  out.mIr[9] = 46;
  out.mIr[10] = 47;
  out.mIr[11] = 48;
  out.mIr[12] = 49;
  out.mIr[13] = 50;
  out.mIr[14] = 36;
  out.mIr[15] = 38;
  out.mIr[16] = 39;
  out.mIr[17] = 40;
  out.mIr[18] = 41;
  out.mIr[19] = 42;
  out.mIr[20] = 43;
  out.mIr[21] = 44;
  out.mIr[22] = 45;
  out.mIr[23] = 46;
  out.mIr[24] = 47;
  out.mIr[25] = 48;
  out.mIr[26] = 49;
  out.mIr[27] = 50;
  out.mIr[28] = 40;
  out.mIr[29] = 41;
  out.mIr[30] = 42;
  out.mIr[31] = 44;
  out.mIr[32] = 45;
  out.mIr[33] = 46;
  out.mIr[34] = 48;
  out.mIr[35] = 49;
  out.mIr[36] = 50;
  (void)sys;
  (void)t2;
  return 0;
}
