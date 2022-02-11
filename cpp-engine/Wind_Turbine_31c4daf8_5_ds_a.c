/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_5_ds_a.h"
#include "Wind_Turbine_31c4daf8_5_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_externals.h"
#include "Wind_Turbine_31c4daf8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_5_ds_a(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t41, NeDsMethodOutput *t42)
{
  PmRealVector out;
  real_T t0[34];
  real_T t5[5];
  size_t t14;
  (void)t41;
  out = t42->mA;
  t5[0ULL] = -0.002;
  t5[1ULL] = 0.002;
  t5[2ULL] = 0.002;
  t5[3ULL] = -0.002;
  t5[4ULL] = 0.002;
  t0[0ULL] = 0.0009999999999999998;
  t0[1ULL] = 1.0;
  t0[2ULL] = -1.0;
  t0[3ULL] = 1.0;
  t0[4ULL] = -1.0;
  t0[5ULL] = -1.0;
  t0[6ULL] = -0.00020100376062929441;
  t0[7ULL] = 1.0;
  t0[8ULL] = -1.0;
  t0[9ULL] = 1.0;
  t0[10ULL] = -1.0;
  t0[11ULL] = -0.00096187319999999988;
  t0[12ULL] = -0.00020100376062929441;
  t0[13ULL] = 0.00096187319999999988;
  for (t14 = 0ULL; t14 < 5ULL; t14++) {
    t0[t14 + 14ULL] = t5[t14];
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
  out.mX[11] = t0[11];
  out.mX[12] = t0[12];
  out.mX[13] = t0[13];
  out.mX[14] = t0[14];
  out.mX[15] = t0[15];
  out.mX[16] = t0[16];
  out.mX[17] = t0[17];
  out.mX[18] = t0[18];
  out.mX[19] = 0.00020100376062929441;
  out.mX[20] = -1.0E-6;
  out.mX[21] = -1.0;
  out.mX[22] = 1.0;
  out.mX[23] = 1.0;
  out.mX[24] = 0.002;
  out.mX[25] = 1.0;
  out.mX[26] = 1.0;
  out.mX[27] = 1.0;
  out.mX[28] = 1.0;
  out.mX[29] = 1.0;
  out.mX[30] = 1.0;
  out.mX[31] = -0.002;
  out.mX[32] = -0.002;
  out.mX[33] = 0.0009999999999999998;
  (void)sys;
  (void)t42;
  return 0;
}
