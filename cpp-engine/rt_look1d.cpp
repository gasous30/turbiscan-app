//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rt_look1d.cpp
//
// Code generated for Simulink model 'Wind_Turbine'.
//
// Model version                  : 3.4
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Fri Feb 11 17:40:12 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives:
//    1. RAM efficiency
//    2. Execution efficiency
// Validation result: Not run
//

#include "rt_look1d.h"
#ifdef __cplusplus

extern "C" {

#endif

  // 1D lookup routine for data type of real_T.
  real_T rt_Lookup(const real_T *x, int_T xlen, real_T u, const real_T *y)
  {
    int_T idx = rt_GetLookupIndex(x, xlen, u);
    real_T num = y[idx+1] - y[idx];
    real_T den = x[idx+1] - x[idx];

    // Due to the way the binary search is implemented
    // in rt_look.c (rt_GetLookupIndex), den cannot be
    // 0.  Equivalently, m cannot be inf or nan.
    real_T m = num/den;
    return (y[idx] + (m * (u - x[idx])));
  }

#ifdef __cplusplus

}                                      // extern "C"
#endif

//
// File trailer for generated code.
//
// [EOF]
//
