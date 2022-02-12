/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_qx_p.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_qx_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 21ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 4;
  out.mJc[9] = 8;
  out.mJc[10] = 8;
  out.mJc[11] = 8;
  out.mJc[12] = 8;
  out.mJc[13] = 8;
  out.mJc[14] = 10;
  out.mJc[15] = 15;
  out.mJc[16] = 15;
  out.mJc[17] = 15;
  out.mJc[18] = 16;
  out.mJc[19] = 20;
  out.mJc[20] = 20;
  out.mJc[21] = 20;
  out.mIr[0] = 7;
  out.mIr[1] = 8;
  out.mIr[2] = 14;
  out.mIr[3] = 18;
  out.mIr[4] = 7;
  out.mIr[5] = 8;
  out.mIr[6] = 14;
  out.mIr[7] = 18;
  out.mIr[8] = 13;
  out.mIr[9] = 14;
  out.mIr[10] = 7;
  out.mIr[11] = 8;
  out.mIr[12] = 13;
  out.mIr[13] = 14;
  out.mIr[14] = 18;
  out.mIr[15] = 17;
  out.mIr[16] = 7;
  out.mIr[17] = 8;
  out.mIr[18] = 14;
  out.mIr[19] = 18;
  (void)sys;
  (void)t2;
  return 0;
}
