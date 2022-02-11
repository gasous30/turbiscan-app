/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_8_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_8_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_8_ds.h"
#include "Wind_Turbine_31c4daf8_8_ds_externals.h"
#include "Wind_Turbine_31c4daf8_8_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_8_ds_obs_act(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t25, NeDsMethodOutput *t26)
{
  ETTS0 efOut;
  ETTS0 t0;
  PmRealVector out;
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T t4[1];
  real_T Bending_and_Spinning_Moments_v_blade;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T t10;
  real_T t11;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t18;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  size_t _in1ivar;
  size_t b__in1ivar;
  size_t c__in1ivar;
  size_t d__in1ivar;
  size_t e__in1ivar;
  size_t f__in1ivar;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  M_idx_0 = t25->mM.mX[0];
  M_idx_1 = t25->mM.mX[1];
  M_idx_2 = t25->mM.mX[2];
  U_idx_0 = t25->mU.mX[0];
  U_idx_1 = t25->mU.mX[1];
  U_idx_2 = t25->mU.mX[2];
  out = t26->mOBS_ACT;
  Bending_and_Spinning_Moments_v_blade = U_idx_0 * 26.6668;
  t6 = -(atan2(U_idx_2, U_idx_0 * 26.6668) - U_idx_1);
  t7 = -(-t6 / 6.2831853071795862);
  t8 = -((atan2(fabs(U_idx_2), Bending_and_Spinning_Moments_v_blade) * (real_T)
          (M_idx_0 != 0) + -atan2(fabs(U_idx_2),
           Bending_and_Spinning_Moments_v_blade) * (real_T)(M_idx_0 == 0)) -
         U_idx_1);
  t6 = -t8;
  t9 = -(floor(-t7) * (real_T)(M_idx_2 != 0) + (real_T)(M_idx_2 == 0) * (real_T)
         M_idx_1);
  t5 = -t9;
  t7 = -t8 / 6.2831853071795862;
  t11 = -(-t9 * 6.2831853071795862);
  t8 = -t9 * 6.2831853071795862;
  t9 = t6 - t8;
  t4[0ULL] = t6 - (-t11);
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
  t13 = -t4[0ULL];
  t10 = -t13;
  t14 = -((U_idx_2 * U_idx_2 + Bending_and_Spinning_Moments_v_blade *
           Bending_and_Spinning_Moments_v_blade) * -t13 * 48.8);
  t11 = (U_idx_2 * U_idx_2 + Bending_and_Spinning_Moments_v_blade *
         Bending_and_Spinning_Moments_v_blade) * -t13 * 48.8;
  e__in1ivar = 116ULL;
  f__in1ivar = 1ULL;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t0.mField0[0ULL], &t0.mField1
    [0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &e__in1ivar,
    &f__in1ivar);
  t4[0] = c_efOut[0];
  t15 = -t4[0ULL];
  t13 = (U_idx_2 * U_idx_2 + Bending_and_Spinning_Moments_v_blade *
         Bending_and_Spinning_Moments_v_blade) * -t15 * 48.8;
  t18 = -((sin(t6) * -t14 - cos(t6) * ((U_idx_2 * U_idx_2 +
             Bending_and_Spinning_Moments_v_blade *
             Bending_and_Spinning_Moments_v_blade) * -t15 * 48.8)) * 26.6668);
  t14 = -t18;
  t18 = -(-(cos(t6) * t11 + sin(t6) * t13) * 26.6668);
  out.mX[0] = t14;
  out.mX[1] = -t14;
  out.mX[2] = -t14;
  out.mX[3] = t14;
  out.mX[4] = -t18;
  out.mX[5] = t6;
  out.mX[6] = -t15;
  out.mX[7] = t10;
  out.mX[8] = t13;
  out.mX[9] = t11;
  out.mX[10] = -t18;
  out.mX[11] = 26.6668;
  out.mX[12] = t14;
  out.mX[13] = U_idx_1;
  out.mX[14] = Bending_and_Spinning_Moments_v_blade;
  out.mX[15] = U_idx_2;
  out.mX[16] = U_idx_0;
  out.mX[17] = U_idx_0;
  out.mX[18] = U_idx_1;
  out.mX[19] = U_idx_2;
  out.mX[20] = t9;
  out.mX[21] = -t15;
  out.mX[22] = t9;
  out.mX[23] = t10;
  out.mX[24] = t6;
  out.mX[25] = t6;
  out.mX[26] = 6.2831853071795862;
  out.mX[27] = t7;
  out.mX[28] = t7;
  out.mX[29] = t5;
  out.mX[30] = t5;
  out.mX[31] = 6.2831853071795862;
  out.mX[32] = t8;
  out.mX[33] = t6;
  out.mX[34] = t8;
  out.mX[35] = t9;
  out.mX[36] = t9;
  out.mX[37] = 6.2831853071795862;
  (void)LC;
  (void)t26;
  return 0;
}
