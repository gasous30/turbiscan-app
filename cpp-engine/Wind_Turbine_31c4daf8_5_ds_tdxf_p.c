/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_5_ds_tdxf_p.h"
#include "Wind_Turbine_31c4daf8_5_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_externals.h"
#include "Wind_Turbine_31c4daf8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_5_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 8;
  out.mJc[3] = 9;
  out.mJc[4] = 10;
  out.mJc[5] = 11;
  out.mJc[6] = 12;
  out.mJc[7] = 18;
  out.mJc[8] = 18;
  out.mJc[9] = 19;
  out.mJc[10] = 22;
  out.mJc[11] = 25;
  out.mJc[12] = 28;
  out.mJc[13] = 31;
  out.mJc[14] = 33;
  out.mJc[15] = 41;
  out.mJc[16] = 45;
  out.mJc[17] = 47;
  out.mJc[18] = 49;
  out.mJc[19] = 51;
  out.mJc[20] = 53;
  out.mJc[21] = 55;
  out.mJc[22] = 57;
  out.mJc[23] = 59;
  out.mJc[24] = 60;
  out.mJc[25] = 62;
  out.mIr[0] = 0;
  out.mIr[1] = 9;
  out.mIr[2] = 20;
  out.mIr[3] = 23;
  out.mIr[4] = 2;
  out.mIr[5] = 10;
  out.mIr[6] = 22;
  out.mIr[7] = 23;
  out.mIr[8] = 11;
  out.mIr[9] = 12;
  out.mIr[10] = 13;
  out.mIr[11] = 19;
  out.mIr[12] = 14;
  out.mIr[13] = 15;
  out.mIr[14] = 16;
  out.mIr[15] = 17;
  out.mIr[16] = 18;
  out.mIr[17] = 19;
  out.mIr[18] = 20;
  out.mIr[19] = 9;
  out.mIr[20] = 14;
  out.mIr[21] = 16;
  out.mIr[22] = 0;
  out.mIr[23] = 9;
  out.mIr[24] = 14;
  out.mIr[25] = 10;
  out.mIr[26] = 15;
  out.mIr[27] = 17;
  out.mIr[28] = 10;
  out.mIr[29] = 15;
  out.mIr[30] = 22;
  out.mIr[31] = 2;
  out.mIr[32] = 22;
  out.mIr[33] = 0;
  out.mIr[34] = 1;
  out.mIr[35] = 2;
  out.mIr[36] = 3;
  out.mIr[37] = 4;
  out.mIr[38] = 7;
  out.mIr[39] = 13;
  out.mIr[40] = 24;
  out.mIr[41] = 0;
  out.mIr[42] = 8;
  out.mIr[43] = 20;
  out.mIr[44] = 21;
  out.mIr[45] = 0;
  out.mIr[46] = 11;
  out.mIr[47] = 2;
  out.mIr[48] = 12;
  out.mIr[49] = 13;
  out.mIr[50] = 23;
  out.mIr[51] = 14;
  out.mIr[52] = 16;
  out.mIr[53] = 15;
  out.mIr[54] = 17;
  out.mIr[55] = 5;
  out.mIr[56] = 18;
  out.mIr[57] = 6;
  out.mIr[58] = 19;
  out.mIr[59] = 23;
  out.mIr[60] = 20;
  out.mIr[61] = 21;
  (void)sys;
  (void)t2;
  return 0;
}
