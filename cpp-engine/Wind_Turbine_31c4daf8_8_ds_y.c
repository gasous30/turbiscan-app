/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_8_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_8_ds_y.h"
#include "Wind_Turbine_31c4daf8_8_ds.h"
#include "Wind_Turbine_31c4daf8_8_ds_externals.h"
#include "Wind_Turbine_31c4daf8_8_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_8_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t24, NeDsMethodOutput *t25)
{
  ETTS0 efOut;
  ETTS0 t0;
  PmRealVector out;
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T t4[1];
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T t6;
  real_T t7;
  real_T zc_int9;
  size_t _in1ivar;
  size_t b__in1ivar;
  size_t c__in1ivar;
  size_t d__in1ivar;
  size_t e__in1ivar;
  size_t f__in1ivar;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  M_idx_0 = t24->mM.mX[0];
  M_idx_1 = t24->mM.mX[1];
  M_idx_2 = t24->mM.mX[2];
  U_idx_0 = t24->mU.mX[0];
  U_idx_1 = t24->mU.mX[1];
  U_idx_2 = t24->mU.mX[2];
  out = t25->mY;
  zc_int9 = U_idx_0 * 26.6668;
  t6 = -(atan2(U_idx_2, U_idx_0 * 26.6668) - U_idx_1);
  t7 = -(-t6 / 6.2831853071795862);
  U_idx_0 = -((atan2(fabs(U_idx_2), zc_int9) * (real_T)(M_idx_0 != 0) + -atan2
               (fabs(U_idx_2), zc_int9) * (real_T)(M_idx_0 == 0)) - U_idx_1);
  t6 = -U_idx_0;
  U_idx_0 = -(floor(-t7) * (real_T)(M_idx_2 != 0) + (real_T)(M_idx_2 == 0) *
              (real_T)M_idx_1);
  U_idx_0 = -(-U_idx_0 * 6.2831853071795862);
  U_idx_0 = -(t6 - (-U_idx_0));
  t4[0ULL] = -U_idx_0;
  _in1ivar = 116ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t4[0ULL],
    &_in1ivar, &b__in1ivar);
  t0 = efOut;
  c__in1ivar = 116ULL;
  d__in1ivar = 1ULL;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t0.mField0[0ULL], &t0.mField1
    [0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &c__in1ivar,
    &d__in1ivar);
  t4[0] = b_efOut[0];
  U_idx_0 = -t4[0ULL];
  U_idx_1 = (U_idx_2 * U_idx_2 + zc_int9 * zc_int9) * -U_idx_0 * 48.8;
  e__in1ivar = 116ULL;
  f__in1ivar = 1ULL;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t0.mField0[0ULL], &t0.mField1
    [0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &e__in1ivar,
    &f__in1ivar);
  t4[0] = c_efOut[0];
  U_idx_0 = -t4[0ULL];
  t7 = -U_idx_0;
  U_idx_0 = -((U_idx_2 * U_idx_2 + zc_int9 * zc_int9) * -U_idx_0 * 48.8);
  zc_int9 = (U_idx_2 * U_idx_2 + zc_int9 * zc_int9) * t7 * 48.8;
  U_idx_0 = -((sin(t6) * U_idx_1 - cos(t6) * -U_idx_0) * 26.6668);
  t7 = -U_idx_0;
  U_idx_0 = -(-(cos(t6) * U_idx_1 + sin(t6) * zc_int9) * 26.6668);
  out.mX[0] = -t7;
  out.mX[1] = -U_idx_0;
  (void)LC;
  (void)t25;
  return 0;
}
