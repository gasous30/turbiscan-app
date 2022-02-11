/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_a.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_a(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t21, NeDsMethodOutput *t22)
{
  PmRealVector out;
  real_T t0[30];
  real_T t2[6];
  real_T t1[4];
  size_t t8;
  (void)t21;
  out = t22->mA;
  t1[0ULL] = 1.0;
  t1[1ULL] = -1.0;
  t1[2ULL] = -1.0;
  t1[3ULL] = 1.0;
  t2[0] = 1.0;
  t2[1] = -1.0;
  t2[2] = 1.0;
  t2[3] = 1.0;
  t2[4] = 0.33333333333333331;
  t2[5] = -1.0;
  t0[0ULL] = -1.0;
  for (t8 = 0ULL; t8 < 4ULL; t8++) {
    t0[t8 + 1ULL] = t1[t8];
  }

  for (t8 = 0ULL; t8 < 6ULL; t8++) {
    t0[t8 + 5ULL] = t2[t8];
  }

  out.mX[0] = t0[0];
  out.mX[1] = t0[1];
  out.mX[2] = t0[2];
  out.mX[3] = t0[3];
  out.mX[4] = t0[4];
  out.mX[5] = t0[5];
  out.mX[6] = t0[6];
  out.mX[7] = t0[7];
  out.mX[8] = t0[8];
  out.mX[9] = t0[9];
  out.mX[10] = t0[10];
  out.mX[11] = 0.25;
  out.mX[12] = -1.0E-6;
  out.mX[13] = 1.0E-5;
  out.mX[14] = 1.0;
  out.mX[15] = 1.0;
  out.mX[16] = 1.0;
  out.mX[17] = 0.25;
  out.mX[18] = -0.1;
  out.mX[19] = -0.071174377224199281;
  out.mX[20] = 0.023724792408066426;
  out.mX[21] = 0.071174377224199281;
  out.mX[22] = 0.25;
  out.mX[23] = -0.1;
  out.mX[24] = 0.28469750889679712;
  out.mX[25] = -0.1;
  out.mX[26] = -0.66666666666666674;
  out.mX[27] = 0.66666666666666663;
  out.mX[28] = 1.0;
  out.mX[29] = 0.071174377224199281;
  (void)sys;
  (void)t22;
  return 0;
}
