//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rt_look1d.h
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
#ifndef RTW_HEADER_rt_look1d_h_
#define RTW_HEADER_rt_look1d_h_
#include "rtwtypes.h"
#include "rt_look.h"
#ifdef __cplusplus

extern "C" {

#endif

  extern real_T rt_Lookup(const real_T *x, int_T xlen, real_T u, const real_T *y);

#ifdef __cplusplus

}                                      // extern "C"
#endif
#endif                                 // RTW_HEADER_rt_look1d_h_

//
// File trailer for generated code.
//
// [EOF]
//
