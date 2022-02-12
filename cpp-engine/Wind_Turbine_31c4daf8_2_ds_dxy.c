/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_dxy.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_dxy(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t5, NeDsMethodOutput *t6)
{
  PmRealVector out;
  real_T t0[13];
  real_T t2[5];
  real_T t1[4];
  real_T intermediate_der3;
  real_T intermediate_der4;
  size_t t4;
  (void)t5;
  out = t6->mDXY;
  intermediate_der3 = 0.0037037037037037047;
  intermediate_der4 = 7.0586078937858358E-23;
  t1[0ULL] = intermediate_der3;
  t1[1ULL] = intermediate_der3;
  t1[2ULL] = intermediate_der3;
  t1[3ULL] = intermediate_der3;
  t2[0ULL] = intermediate_der4;
  t2[1ULL] = intermediate_der4;
  t2[2ULL] = intermediate_der4;
  t2[3ULL] = intermediate_der4;
  t2[4ULL] = 1.0;
  for (t4 = 0ULL; t4 < 4ULL; t4++) {
    t0[t4] = t1[t4];
  }

  t0[4ULL] = 1.0;
  t0[5ULL] = 1.0;
  t0[6ULL] = 1.0;
  t0[7ULL] = 1.0;
  for (t4 = 0ULL; t4 < 5ULL; t4++) {
    t0[t4 + 8ULL] = t2[t4];
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
  (void)sys;
  (void)t6;
  return 0;
}
