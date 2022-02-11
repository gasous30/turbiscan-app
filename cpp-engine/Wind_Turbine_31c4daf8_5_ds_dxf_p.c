/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_5_ds_dxf_p.h"
#include "Wind_Turbine_31c4daf8_5_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_externals.h"
#include "Wind_Turbine_31c4daf8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_5_ds_dxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 5;
  out.mJc[3] = 6;
  out.mJc[4] = 7;
  out.mJc[5] = 8;
  out.mJc[6] = 8;
  out.mJc[7] = 13;
  out.mJc[8] = 13;
  out.mJc[9] = 14;
  out.mJc[10] = 17;
  out.mJc[11] = 17;
  out.mJc[12] = 20;
  out.mJc[13] = 20;
  out.mJc[14] = 20;
  out.mJc[15] = 23;
  out.mJc[16] = 24;
  out.mJc[17] = 24;
  out.mJc[18] = 24;
  out.mJc[19] = 25;
  out.mJc[20] = 25;
  out.mJc[21] = 25;
  out.mJc[22] = 26;
  out.mJc[23] = 26;
  out.mJc[24] = 26;
  out.mJc[25] = 27;
  out.mIr[0] = 0;
  out.mIr[1] = 9;
  out.mIr[2] = 2;
  out.mIr[3] = 10;
  out.mIr[4] = 22;
  out.mIr[5] = 11;
  out.mIr[6] = 12;
  out.mIr[7] = 13;
  out.mIr[8] = 14;
  out.mIr[9] = 15;
  out.mIr[10] = 16;
  out.mIr[11] = 17;
  out.mIr[12] = 18;
  out.mIr[13] = 20;
  out.mIr[14] = 9;
  out.mIr[15] = 14;
  out.mIr[16] = 16;
  out.mIr[17] = 10;
  out.mIr[18] = 15;
  out.mIr[19] = 17;
  out.mIr[20] = 0;
  out.mIr[21] = 2;
  out.mIr[22] = 13;
  out.mIr[23] = 20;
  out.mIr[24] = 13;
  out.mIr[25] = 18;
  out.mIr[26] = 21;
  (void)sys;
  (void)t2;
  return 0;
}
