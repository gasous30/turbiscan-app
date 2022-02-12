/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_a_p.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 21ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 5;
  out.mJc[3] = 5;
  out.mJc[4] = 11;
  out.mJc[5] = 12;
  out.mJc[6] = 12;
  out.mJc[7] = 12;
  out.mJc[8] = 13;
  out.mJc[9] = 14;
  out.mJc[10] = 15;
  out.mJc[11] = 16;
  out.mJc[12] = 17;
  out.mJc[13] = 18;
  out.mJc[14] = 20;
  out.mJc[15] = 21;
  out.mJc[16] = 22;
  out.mJc[17] = 23;
  out.mJc[18] = 25;
  out.mJc[19] = 26;
  out.mJc[20] = 28;
  out.mJc[21] = 30;
  out.mIr[0] = 11;
  out.mIr[1] = 1;
  out.mIr[2] = 16;
  out.mIr[3] = 17;
  out.mIr[4] = 18;
  out.mIr[5] = 12;
  out.mIr[6] = 13;
  out.mIr[7] = 14;
  out.mIr[8] = 15;
  out.mIr[9] = 17;
  out.mIr[10] = 19;
  out.mIr[11] = 15;
  out.mIr[12] = 0;
  out.mIr[13] = 11;
  out.mIr[14] = 8;
  out.mIr[15] = 10;
  out.mIr[16] = 9;
  out.mIr[17] = 12;
  out.mIr[18] = 2;
  out.mIr[19] = 20;
  out.mIr[20] = 20;
  out.mIr[21] = 13;
  out.mIr[22] = 14;
  out.mIr[23] = 3;
  out.mIr[24] = 20;
  out.mIr[25] = 4;
  out.mIr[26] = 16;
  out.mIr[27] = 17;
  out.mIr[28] = 5;
  out.mIr[29] = 19;
  (void)sys;
  (void)t2;
  return 0;
}
