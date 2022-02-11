/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_8_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_8_ds_duy.h"
#include "Wind_Turbine_31c4daf8_8_ds.h"
#include "Wind_Turbine_31c4daf8_8_ds_externals.h"
#include "Wind_Turbine_31c4daf8_8_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_8_ds_duy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t79, NeDsMethodOutput *t80)
{
  ETTS0 efOut;
  ETTS0 t3;
  PmRealVector out;
  real_T t18[2];
  real_T t19[2];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T d_efOut[1];
  real_T e_efOut[1];
  real_T t4[1];
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T intermediate_der24;
  real_T intermediate_der26;
  real_T intermediate_der28;
  real_T intermediate_der31;
  real_T t28;
  real_T t29;
  real_T t31;
  real_T t34;
  real_T t35;
  real_T t39;
  real_T t42;
  real_T t53;
  real_T t66;
  real_T t7_idx_0;
  size_t t20[1];
  size_t _in1ivar;
  size_t b__in1ivar;
  size_t c__in1ivar;
  size_t d__in1ivar;
  size_t e__in1ivar;
  size_t f__in1ivar;
  size_t g__in1ivar;
  size_t h__in1ivar;
  size_t i__in1ivar;
  size_t j__in1ivar;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  M_idx_0 = t79->mM.mX[0];
  M_idx_1 = t79->mM.mX[1];
  M_idx_2 = t79->mM.mX[2];
  U_idx_0 = t79->mU.mX[0];
  U_idx_1 = t79->mU.mX[1];
  U_idx_2 = t79->mU.mX[2];
  out = t80->mDUY;
  intermediate_der31 = U_idx_0 * 26.6668;
  t28 = -(atan2(U_idx_2, U_idx_0 * 26.6668) - U_idx_1);
  t29 = -(-t28 / 6.2831853071795862);
  intermediate_der26 = -((atan2(fabs(U_idx_2), intermediate_der31) * (real_T)
    (M_idx_0 != 0) + -atan2(fabs(U_idx_2), intermediate_der31) * (real_T)
    (M_idx_0 == 0)) - U_idx_1);
  t28 = -intermediate_der26;
  t31 = -(floor(-t29) * (real_T)(M_idx_2 != 0) + (real_T)(M_idx_2 == 0) *
          (real_T)M_idx_1);
  t4[0ULL] = -intermediate_der26 - -t31 * 6.2831853071795862;
  _in1ivar = 116ULL;
  b__in1ivar = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t4[0ULL],
    &_in1ivar, &b__in1ivar);
  t3 = efOut;
  t18[0ULL] = t3.mField0[0ULL];
  t18[1ULL] = t3.mField0[1ULL];
  t19[0ULL] = t3.mField1[0ULL];
  t19[1ULL] = t3.mField1[1ULL];
  t20[0ULL] = t3.mField2[0ULL];
  c__in1ivar = 116ULL;
  d__in1ivar = 1ULL;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t18[0ULL], &t19[0ULL], &t20[0ULL],
    ((_NeDynamicSystem*)(LC))->mField2, &c__in1ivar, &d__in1ivar);
  t7_idx_0 = b_efOut[0];
  U_idx_1 = t7_idx_0;
  t29 = (U_idx_2 * U_idx_2 + intermediate_der31 * intermediate_der31) * t7_idx_0
    * 48.8;
  e__in1ivar = 116ULL;
  f__in1ivar = 1ULL;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t18[0ULL], &t19[0ULL], &t20[0ULL],
    ((_NeDynamicSystem*)(LC))->mField1, &e__in1ivar, &f__in1ivar);
  t7_idx_0 = c_efOut[0];
  t31 = (U_idx_2 * U_idx_2 + intermediate_der31 * intermediate_der31) * t7_idx_0
    * 48.8;
  intermediate_der28 = -fabs(U_idx_2);
  t39 = fabs(U_idx_2) * fabs(U_idx_2) + intermediate_der31 * intermediate_der31;
  t34 = intermediate_der28 / (t39 == 0.0 ? 1.0E-16 : t39) * (real_T)(M_idx_0 !=
    0) * 26.6668 + -(intermediate_der28 / (t39 == 0.0 ? 1.0E-16 : t39) * 26.6668)
    * (real_T)(M_idx_0 == 0);
  if (U_idx_2 != U_idx_2) {
    t53 = U_idx_2;
  } else if (U_idx_2 > 0.0) {
    t53 = 1.0;
  } else {
    t53 = U_idx_2 < 0.0 ? -1.0 : 0.0;
  }

  if (U_idx_2 != U_idx_2) {
    U_idx_0 = U_idx_2;
  } else if (U_idx_2 > 0.0) {
    U_idx_0 = 1.0;
  } else {
    U_idx_0 = U_idx_2 < 0.0 ? -1.0 : 0.0;
  }

  t35 = intermediate_der31 / (t39 == 0.0 ? 1.0E-16 : t39) * t53 * (real_T)
    (M_idx_0 != 0) + -(intermediate_der31 / (t39 == 0.0 ? 1.0E-16 : t39) *
                       U_idx_0) * (real_T)(M_idx_0 == 0);
  g__in1ivar = 116ULL;
  h__in1ivar = 1ULL;
  tlu2_1d_linear_linear_derivatives(&d_efOut[0ULL], &t3.mField0[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2,
    &g__in1ivar, &h__in1ivar);
  t4[0] = d_efOut[0];
  t53 = t4[0ULL];
  t39 = -t53;
  t53 = -(t4[0ULL] * t35);
  t42 = -t53;
  t53 = -(t4[0ULL] * t34);
  t39 = (U_idx_2 * U_idx_2 + intermediate_der31 * intermediate_der31) * t39 *
    48.8;
  t42 = ((U_idx_2 * U_idx_2 + intermediate_der31 * intermediate_der31) * t42 *
         0.61 + U_idx_2 * U_idx_1 * 1.22) * 80.0;
  t53 = -(((U_idx_2 * U_idx_2 + intermediate_der31 * intermediate_der31) * -t53 *
           0.61 + intermediate_der31 * 26.6668 * U_idx_1 * 1.22) * 80.0);
  i__in1ivar = 116ULL;
  j__in1ivar = 1ULL;
  tlu2_1d_linear_linear_derivatives(&e_efOut[0ULL], &t3.mField0[0ULL],
    &t3.mField1[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1,
    &i__in1ivar, &j__in1ivar);
  t4[0] = e_efOut[0];
  U_idx_1 = t4[0ULL];
  t66 = -U_idx_1;
  U_idx_1 = -(t4[0ULL] * t35);
  intermediate_der24 = -U_idx_1;
  U_idx_1 = -(t4[0ULL] * t34);
  intermediate_der28 = -U_idx_1;
  t66 = (U_idx_2 * U_idx_2 + intermediate_der31 * intermediate_der31) * t66 *
    48.8;
  intermediate_der24 = ((U_idx_2 * U_idx_2 + intermediate_der31 *
    intermediate_der31) * intermediate_der24 * 0.61 + U_idx_2 * t7_idx_0 * 1.22)
    * 80.0;
  U_idx_1 = -(((U_idx_2 * U_idx_2 + intermediate_der31 * intermediate_der31) *
               -U_idx_1 * 0.61 + intermediate_der31 * 26.6668 * t7_idx_0 * 1.22)
              * 80.0);
  intermediate_der31 = ((U_idx_2 * U_idx_2 + intermediate_der31 *
    intermediate_der31) * intermediate_der28 * 0.61 + intermediate_der31 *
                        26.6668 * t7_idx_0 * 1.22) * 80.0;
  U_idx_1 = -(((sin(-intermediate_der26) * -t53 + cos(-intermediate_der26) * t34
                * t29) - (cos(-intermediate_der26) * -U_idx_1 + -sin
    (-intermediate_der26) * t34 * t31)) * 26.6668);
  intermediate_der26 = -U_idx_1;
  U_idx_1 = -(((sin(t28) * t42 + cos(t28) * t35 * t29) - (cos(t28) *
    intermediate_der24 + -sin(t28) * t35 * t31)) * 26.6668);
  U_idx_0 = -U_idx_1;
  U_idx_1 = -(((sin(t28) * t39 + -cos(t28) * t29) - (cos(t28) * t66 + sin(t28) *
    t31)) * 26.6668);
  intermediate_der28 = -U_idx_1;
  U_idx_1 = -(-(((cos(t28) * t39 + sin(t28) * t29) + sin(t28) * t66) + -cos(t28)
                * t31) * 26.6668);
  t66 = -(-(((cos(t28) * t42 + -sin(t28) * t35 * t29) + sin(t28) *
             intermediate_der24) + cos(t28) * t35 * t31) * 26.6668);
  t35 = -t66;
  t66 = -(-(((cos(t28) * -t53 + -sin(t28) * t34 * t29) + sin(t28) *
             intermediate_der31) + cos(t28) * t34 * t31) * 26.6668);
  out.mX[0] = -intermediate_der26;
  out.mX[1] = -t66;
  out.mX[2] = -intermediate_der28;
  out.mX[3] = -U_idx_1;
  out.mX[4] = -U_idx_0;
  out.mX[5] = t35;
  (void)LC;
  (void)t80;
  return 0;
}
