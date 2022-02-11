//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Wind_Turbine_private.h
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
#ifndef RTW_HEADER_Wind_Turbine_private_h_
#define RTW_HEADER_Wind_Turbine_private_h_
#include "rtwtypes.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

// Used by FromWorkspace Block: '<S45>/FromWs'
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? std::floor((v) + 0.5) : std::ceil((v) - 0.5) )
#endif

extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern void rt_invd4x4_snf(const real_T u[16], real_T y[16]);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi);
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi);
extern real_T look1_pbinlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T prevIndex[], uint32_T maxIndex);
extern "C" void sfun_psbdqc(SimStruct *rts);

// private model entry point functions
extern void Wind_Turbine_derivatives(void);

#endif                                 // RTW_HEADER_Wind_Turbine_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
