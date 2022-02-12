/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_tdxf_p.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 21ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 7;
  out.mJc[3] = 7;
  out.mJc[4] = 13;
  out.mJc[5] = 14;
  out.mJc[6] = 14;
  out.mJc[7] = 15;
  out.mJc[8] = 17;
  out.mJc[9] = 19;
  out.mJc[10] = 21;
  out.mJc[11] = 22;
  out.mJc[12] = 23;
  out.mJc[13] = 24;
  out.mJc[14] = 26;
  out.mJc[15] = 27;
  out.mJc[16] = 28;
  out.mJc[17] = 29;
  out.mJc[18] = 31;
  out.mJc[19] = 32;
  out.mJc[20] = 34;
  out.mJc[21] = 36;
  out.mIr[0] = 6;
  out.mIr[1] = 11;
  out.mIr[2] = 1;
  out.mIr[3] = 6;
  out.mIr[4] = 16;
  out.mIr[5] = 17;
  out.mIr[6] = 18;
  out.mIr[7] = 12;
  out.mIr[8] = 13;
  out.mIr[9] = 14;
  out.mIr[10] = 15;
  out.mIr[11] = 17;
  out.mIr[12] = 19;
  out.mIr[13] = 15;
  out.mIr[14] = 7;
  out.mIr[15] = 0;
  out.mIr[16] = 6;
  out.mIr[17] = 6;
  out.mIr[18] = 11;
  out.mIr[19] = 6;
  out.mIr[20] = 8;
  out.mIr[21] = 10;
  out.mIr[22] = 9;
  out.mIr[23] = 12;
  out.mIr[24] = 2;
  out.mIr[25] = 20;
  out.mIr[26] = 20;
  out.mIr[27] = 13;
  out.mIr[28] = 14;
  out.mIr[29] = 3;
  out.mIr[30] = 20;
  out.mIr[31] = 4;
  out.mIr[32] = 16;
  out.mIr[33] = 17;
  out.mIr[34] = 5;
  out.mIr[35] = 19;
  (void)sys;
  (void)t2;
  return 0;
}
