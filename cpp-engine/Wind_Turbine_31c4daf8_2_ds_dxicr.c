/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_dxicr.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_dxicr(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t5, NeDsMethodOutput *t6)
{
  PmRealVector out;
  real_T t0[26];
  real_T t1[15];
  real_T t2[11];
  size_t t4;
  (void)t5;
  out = t6->mDXICR;
  t1[0ULL] = 0.011111111111111115;
  t1[1ULL] = 0.19999999999999998;
  t1[2ULL] = 0.04444444444444446;
  t1[3ULL] = 1.0000000000000002;
  t1[4ULL] = 0.19999999999999998;
  t1[5ULL] = 0.04444444444444446;
  t1[6ULL] = 0.011111111111111115;
  t1[7ULL] = 1.0000000000000002;
  t1[8ULL] = 0.19999999999999998;
  t1[9ULL] = 0.04444444444444446;
  t1[10ULL] = 0.011111111111111115;
  t1[11ULL] = 1.0000000000000002;
  t1[12ULL] = 0.19999999999999998;
  t1[13ULL] = 0.04444444444444446;
  t1[14ULL] = 0.011111111111111115;
  t2[0ULL] = 2.1175823681357508E-22;
  t2[1ULL] = 8.4703294725430034E-22;
  t2[2ULL] = 1.3552527156068805E-20;
  t2[3ULL] = 8.4703294725430034E-22;
  t2[4ULL] = 2.1175823681357508E-22;
  t2[5ULL] = 1.3552527156068805E-20;
  t2[6ULL] = 8.4703294725430034E-22;
  t2[7ULL] = 2.1175823681357508E-22;
  t2[8ULL] = 1.3552527156068805E-20;
  t2[9ULL] = 8.4703294725430034E-22;
  t2[10ULL] = 2.1175823681357508E-22;
  for (t4 = 0ULL; t4 < 15ULL; t4++) {
    t0[t4] = t1[t4];
  }

  for (t4 = 0ULL; t4 < 11ULL; t4++) {
    t0[t4 + 15ULL] = t2[t4];
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
  out.mX[19] = t0[19];
  out.mX[20] = t0[20];
  out.mX[21] = t0[21];
  out.mX[22] = t0[22];
  out.mX[23] = t0[23];
  out.mX[24] = t0[24];
  out.mX[25] = t0[25];
  (void)sys;
  (void)t6;
  return 0;
}
