/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_a_p.h"
#include "Wind_Turbine_31c4daf8_3_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 3;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mJc[5] = 3;
  out.mJc[6] = 4;
  out.mJc[7] = 5;
  out.mJc[8] = 5;
  out.mJc[9] = 6;
  out.mJc[10] = 6;
  out.mJc[11] = 9;
  out.mJc[12] = 9;
  out.mJc[13] = 12;
  out.mJc[14] = 14;
  out.mJc[15] = 19;
  out.mJc[16] = 22;
  out.mJc[17] = 23;
  out.mJc[18] = 24;
  out.mJc[19] = 25;
  out.mJc[20] = 27;
  out.mJc[21] = 29;
  out.mJc[22] = 30;
  out.mJc[23] = 32;
  out.mJc[24] = 33;
  out.mJc[25] = 34;
  out.mIr[0] = 20;
  out.mIr[1] = 23;
  out.mIr[2] = 23;
  out.mIr[3] = 19;
  out.mIr[4] = 19;
  out.mIr[5] = 20;
  out.mIr[6] = 0;
  out.mIr[7] = 9;
  out.mIr[8] = 14;
  out.mIr[9] = 10;
  out.mIr[10] = 15;
  out.mIr[11] = 22;
  out.mIr[12] = 2;
  out.mIr[13] = 22;
  out.mIr[14] = 1;
  out.mIr[15] = 3;
  out.mIr[16] = 4;
  out.mIr[17] = 7;
  out.mIr[18] = 24;
  out.mIr[19] = 0;
  out.mIr[20] = 8;
  out.mIr[21] = 21;
  out.mIr[22] = 11;
  out.mIr[23] = 12;
  out.mIr[24] = 23;
  out.mIr[25] = 14;
  out.mIr[26] = 16;
  out.mIr[27] = 15;
  out.mIr[28] = 17;
  out.mIr[29] = 5;
  out.mIr[30] = 6;
  out.mIr[31] = 19;
  out.mIr[32] = 23;
  out.mIr[33] = 20;
  (void)sys;
  (void)t2;
  return 0;
}
