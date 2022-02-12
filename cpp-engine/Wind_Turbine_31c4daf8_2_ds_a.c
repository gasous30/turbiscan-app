/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_a.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_a(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t7, NeDsMethodOutput *t8)
{
  PmRealVector out;
  real_T t0[12];
  real_T t1[6];
  real_T t2[6];
  real_T intermediate_der3;
  real_T intermediate_der4;
  size_t t4;
  (void)t7;
  out = t8->mA;
  intermediate_der3 = 0.0037037037037037047;
  intermediate_der4 = 7.0586078937858358E-23;
  t1[0ULL] = intermediate_der3;
  t1[1ULL] = 1.3163263962911205;
  t1[2ULL] = intermediate_der3;
  t1[3ULL] = intermediate_der3;
  t1[4ULL] = intermediate_der3;
  t1[5ULL] = intermediate_der3 * -0.16 / 0.16;
  t2[0ULL] = intermediate_der4;
  t2[1ULL] = 0.000142163250798907;
  t2[2ULL] = intermediate_der4;
  t2[3ULL] = intermediate_der4;
  t2[4ULL] = intermediate_der4;
  t2[5ULL] = intermediate_der4 * -0.16 / 0.16;
  for (t4 = 0ULL; t4 < 6ULL; t4++) {
    t0[t4] = t1[t4];
  }

  for (t4 = 0ULL; t4 < 6ULL; t4++) {
    t0[t4 + 6ULL] = t2[t4];
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
  (void)sys;
  (void)t8;
  return 0;
}
