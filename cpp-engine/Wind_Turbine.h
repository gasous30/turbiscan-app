//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Wind_Turbine.h
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
#ifndef RTW_HEADER_Wind_Turbine_h_
#define RTW_HEADER_Wind_Turbine_h_
#include <cmath>
#include <stddef.h>
#include <cstring>
#include <emmintrin.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw.h"
#include "Wind_Turbine_31c4daf8_1_gateway.h"
#include "nesl_rtw_rtp.h"
#include "Wind_Turbine_31c4daf8_7_gateway.h"
#include "Wind_Turbine_31c4daf8_5_gateway.h"
#include "Wind_Turbine_31c4daf8_4_gateway.h"
#include "Wind_Turbine_31c4daf8_3_gateway.h"
#include "Wind_Turbine_31c4daf8_2_gateway.h"
#include "Wind_Turbine_31c4daf8_8_gateway.h"
#include "Wind_Turbine_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rt_look.h"
#include "rt_look1d.h"
#include "rt_matrixlib.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

// Block signals and states (default storage) for system '<Root>'
struct DW {
  creal_T ib[2];                       // '<S52>/ib'
  creal_T Product1[3];                 // '<S93>/Product1'
  creal_T Product1_d[3];               // '<S94>/Product1'
  creal_T Sum5[3];                     // '<S92>/Sum5'
  creal_T RealImagtoComplex[17];       // '<S308>/Real-Imag to Complex'
  creal_T u_Vb[2];                     // '<S52>/1_Vb'
  creal_T Kv[3];                       // '<S5>/Kv'
  creal_T putoA[3];                    // '<S51>/pu to A'
  creal_T Kv1[3];                      // '<S5>/Kv1'
  creal_T putoV[3];                    // '<S51>/pu to V'
  creal_T Product2[3];                 // '<S310>/Product2'
  creal_T I1;                          // '<S61>/Real-Imag to Complex'
  creal_T RealImagtoComplex1;          // '<S59>/Real-Imag to Complex1'
  creal_T Sum3;                        // '<S61>/Sum3'
  creal_T a2;                          // '<S61>/a^2'
  creal_T a;                           // '<S61>/a'
  creal_T Sum1;                        // '<S61>/Sum1'
  creal_T a23;                         // '<S56>/(a^2)//3'
  creal_T Gain;                        // '<S56>/Gain'
  creal_T V1;                          // '<S56>/Sum3'
  creal_T Sum2;                        // '<S70>/Sum2'
  creal_T ZrZm;                        // '<S69>/Product2'
  creal_T ZrZm_i;                      // '<S69>/Sum1'
  creal_T ZrZm_g;                      // '<S69>/Product3'
  creal_T Z2;                          // '<S69>/Sum2'
  creal_T Gain1;                       // '<S56>/Gain1'
  creal_T a3;                          // '<S56>/a//3'
  creal_T V2;                          // '<S56>/Sum4'
  creal_T Sum3_g;                      // '<S310>/Sum3'
  creal_T K;                           // '<S310>/K'
  creal_T RealImagtoComplex_f;         // '<S59>/Real-Imag to Complex'
  creal_T Gain2;                       // '<S59>/Gain2'
  creal_T Vm2;                         // '<S59>/Sum1'
  creal_T Phi2;                        // '<S59>/-pi//2  phase shift'
  real_T FromWs[2];                    // '<S45>/FromWs'
  real_T INPUT_1_1_1[4];               // '<S260>/INPUT_1_1_1'
  real_T INPUT_18_1_1[4];              // '<S260>/INPUT_18_1_1'
  real_T STATE_1[28];                  // '<S260>/STATE_1'
  real_T OUTPUT_1_0[9];                // '<S260>/OUTPUT_1_0'
  real_T INTERNAL_10_1_1[4];           // '<S260>/INTERNAL_10_1_1'
  real_T STATE_7[51];                  // '<S260>/STATE_7'
  real_T INPUT_2_1_1[4];               // '<S260>/INPUT_2_1_1'
  real_T INPUT_3_1_1[4];               // '<S260>/INPUT_3_1_1'
  real_T INPUT_4_1_1[4];               // '<S260>/INPUT_4_1_1'
  real_T INTERNAL_4_1_1[4];            // '<S260>/INTERNAL_4_1_1'
  real_T STATE_5[48];                  // '<S260>/STATE_5'
  real_T INPUT_5_1_1[4];               // '<S260>/INPUT_5_1_1'
  real_T INPUT_6_1_1[4];               // '<S260>/INPUT_6_1_1'
  real_T INPUT_7_1_1[4];               // '<S260>/INPUT_7_1_1'
  real_T INTERNAL_5_1_1[4];            // '<S260>/INTERNAL_5_1_1'
  real_T STATE_4[48];                  // '<S260>/STATE_4'
  real_T INPUT_8_1_1[4];               // '<S260>/INPUT_8_1_1'
  real_T INPUT_9_1_1[4];               // '<S260>/INPUT_9_1_1'
  real_T INPUT_10_1_1[4];              // '<S260>/INPUT_10_1_1'
  real_T INTERNAL_7_1_1[4];            // '<S260>/INTERNAL_7_1_1'
  real_T STATE_3[48];                  // '<S260>/STATE_3'
  real_T Integrator_a[4];              // '<S64>/Integrator'
  real_T Linv[16];                     // '<S58>/Switch'
  real_T Product3[4];                  // '<S58>/Product3'
  real_T Iqds2[2];                     // '<S59>/Integrator'
  real_T Switch5[3];                   // '<S92>/Switch5'
  real_T Sum2_a[3];                    // '<S92>/Sum2'
  real_T ComplextoRealImag_o1[11];     // '<S309>/Complex to Real-Imag'
  real_T ComplextoRealImag_o2[11];     // '<S309>/Complex to Real-Imag'
  real_T StateSpace[34];               // '<S304>/State-Space'
  real_T OUTPUT_5_0[7];                // '<S260>/OUTPUT_5_0'
  real_T INTERNAL_9_1_1[4];            // '<S260>/INTERNAL_9_1_1'
  real_T OUTPUT_4_0[7];                // '<S260>/OUTPUT_4_0'
  real_T INTERNAL_6_1_1[4];            // '<S260>/INTERNAL_6_1_1'
  real_T OUTPUT_3_0[7];                // '<S260>/OUTPUT_3_0'
  real_T INTERNAL_8_1_1[4];            // '<S260>/INTERNAL_8_1_1'
  real_T OUTPUT_7_0[4];                // '<S260>/OUTPUT_7_0'
  real_T INTERNAL_13_1_1[4];           // '<S260>/INTERNAL_13_1_1'
  real_T Integrator_c[4];              // '<S192>/Integrator'
  real_T Gain_l[4];                    // '<S192>/Gain'
  real_T INPUT_11_1_1[4];              // '<S260>/INPUT_11_1_1'
  real_T INPUT_12_1_1[4];              // '<S260>/INPUT_12_1_1'
  real_T INPUT_13_1_1[4];              // '<S260>/INPUT_13_1_1'
  real_T INPUT_14_1_1[4];              // '<S260>/INPUT_14_1_1'
  real_T INTERNAL_11_1_1[4];           // '<S260>/INTERNAL_11_1_1'
  real_T STATE_2[6];                   // '<S260>/STATE_2'
  real_T OUTPUT_2_0[5];                // '<S260>/OUTPUT_2_0'
  real_T INTERNAL_12_1_1[4];           // '<S260>/INTERNAL_12_1_1'
  real_T INPUT_16_1_1[4];              // '<S260>/INPUT_16_1_1'
  real_T INPUT_17_1_1[4];              // '<S260>/INPUT_17_1_1'
  real_T INPUT_15_1_1[4];              // '<S260>/INPUT_15_1_1'
  real_T STATE_8[3];                   // '<S260>/STATE_8'
  real_T OUTPUT_8_0[2];                // '<S260>/OUTPUT_8_0'
  real_T INTERNAL_2_1_1[4];            // '<S260>/INTERNAL_2_1_1'
  real_T INTERNAL_3_1_1[4];            // '<S260>/INTERNAL_3_1_1'
  real_T INTERNAL_1_1_1[4];            // '<S260>/INTERNAL_1_1_1'
  real_T INTERNAL_2_2_1[4];            // '<S260>/INTERNAL_2_2_1'
  real_T INTERNAL_3_2_1[4];            // '<S260>/INTERNAL_3_2_1'
  real_T INTERNAL_1_2_1[4];            // '<S260>/INTERNAL_1_2_1'
  real_T INTERNAL_2_3_1[4];            // '<S260>/INTERNAL_2_3_1'
  real_T INTERNAL_3_3_1[4];            // '<S260>/INTERNAL_3_3_1'
  real_T INTERNAL_1_3_1[4];            // '<S260>/INTERNAL_1_3_1'
  real_T RLinv[16];                    // '<S58>/Switch1'
  real_T A[16];                        // '<S58>/Sum1'
  real_T Product1_o[4];                // '<S64>/Product1'
  real_T sum1[4];                      // '<S64>/sum1'
  real_T wbase[4];                     // '<S64>/wbase'
  real_T OUTPUT_2_1[4];                // '<S260>/OUTPUT_2_1'
  real_T Sum3_i[4];                    // '<S46>/Sum3'
  real_T Sum[4];                       // '<S46>/Sum'
  real_T Integrator_i2[4];             // '<S293>/Integrator'
  real_T Sum_m[4];                     // '<S293>/Sum'
  real_T LimitNacelleYawRateCmd[4];    // '<S46>/Limit Nacelle Yaw Rate Cmd'
  real_T Sum1_e[4];                    // '<S46>/Sum1'
  real_T ProportionalGain[4];          // '<S294>/Proportional Gain'
  real_T Integrator_m[4];              // '<S294>/Integrator'
  real_T Sum_e[4];                     // '<S294>/Sum'
  real_T TorqueCommand[4];             // '<S46>/Limit Servomotor Torque Cmd'
  real_T Sum_f[4];                     // '<S192>/Sum'
  real_T IntegralGain[4];              // '<S294>/Integral Gain'
  real_T IntegralGain_o[4];            // '<S293>/Integral Gain'
  real_T Derivative_Gain[3];           // '<S229>/Derivative_Gain'
  real_T Sum1_p[3];                    // '<S229>/Sum1'
  real_T Sum_g[3];                     // '<S229>/Sum'
  real_T IntegralGain_oc[3];           // '<S231>/Integral Gain'
  real_T ProportionalGain_n[3];        // '<S231>/Proportional Gain'
  real_T Integrator_cn[3];             // '<S231>/Integrator'
  real_T Sum_d[3];                     // '<S231>/Sum'
  real_T ScalingFactor[3];             // '<S15>/Scaling Factor'
  real_T Iqd2R2L2[2];                  // '<S59>/Product1'
  real_T Gain3[2];                     // '<S59>/Gain3'
  real_T Vqd2L2[2];                    // '<S59>/Product2'
  real_T Sum_k[2];                     // '<S59>/Sum'
  real_T Gain4[2];                     // '<S59>/Gain4'
  real_T iqsids[2];                    // '<S62>/1-1'
  real_T Mult1[2];                     // '<S62>/Mult1'
  real_T topu[2];                      // '<S51>/to pu'
  real_T FixSign[2];                   // '<S51>/Fix Sign'
  real_T TmpSignalConversionAtMathFuncti[3];
  real_T Product2_l[2];                // '<S68>/Product2'
  real_T Product[2];                   // '<S68>/Product'
  real_T Product1_l[2];                // '<S68>/Product1'
  real_T Lminrows13col13[16];          // '<S66>/Lm in rows[1,3] & col[1,3]'
  real_T Lminrows24col24[16];          // '<S66>/Lm in rows[2,4] & col[2,4]'
  real_T Sum2_c[16];                   // '<S66>/Sum2'
  real_T Linv_f[16];                   // '<S63>/inversion'
  real_T RLinv_j[16];                  // '<S63>/Product1'
  real_T TmpHiddenBufferAtW341wrInport1[16];// '<S55>/u3'
  real_T W341wr[16];                   // '<S55>/W(3,4)=1-wr'
  real_T W43wr1[16];                   // '<S55>/W(4,3)=wr-1'
  real_T INPUT_1_1_1_Discrete[2];      // '<S260>/INPUT_1_1_1'
  real_T STATE_7_Discrete[59];         // '<S260>/STATE_7'
  real_T INPUT_2_1_1_Discrete[2];      // '<S260>/INPUT_2_1_1'
  real_T INPUT_3_1_1_Discrete[2];      // '<S260>/INPUT_3_1_1'
  real_T INPUT_4_1_1_Discrete[2];      // '<S260>/INPUT_4_1_1'
  real_T INTERNAL_4_1_1_Discrete[2];   // '<S260>/INTERNAL_4_1_1'
  real_T INPUT_5_1_1_Discrete[2];      // '<S260>/INPUT_5_1_1'
  real_T INPUT_6_1_1_Discrete[2];      // '<S260>/INPUT_6_1_1'
  real_T INPUT_7_1_1_Discrete[2];      // '<S260>/INPUT_7_1_1'
  real_T INTERNAL_5_1_1_Discrete[2];   // '<S260>/INTERNAL_5_1_1'
  real_T INPUT_8_1_1_Discrete[2];      // '<S260>/INPUT_8_1_1'
  real_T INPUT_9_1_1_Discrete[2];      // '<S260>/INPUT_9_1_1'
  real_T INPUT_10_1_1_Discrete[2];     // '<S260>/INPUT_10_1_1'
  real_T INTERNAL_7_1_1_Discrete[2];   // '<S260>/INTERNAL_7_1_1'
  real_T INTERNAL_9_1_1_Discrete[2];   // '<S260>/INTERNAL_9_1_1'
  real_T INTERNAL_6_1_1_Discrete[2];   // '<S260>/INTERNAL_6_1_1'
  real_T INTERNAL_8_1_1_Discrete[2];   // '<S260>/INTERNAL_8_1_1'
  real_T INTERNAL_13_1_1_Discrete[2];  // '<S260>/INTERNAL_13_1_1'
  real_T INTERNAL_12_1_1_Discrete[2];  // '<S260>/INTERNAL_12_1_1'
  real_T INPUT_16_1_1_Discrete[2];     // '<S260>/INPUT_16_1_1'
  real_T INPUT_17_1_1_Discrete[2];     // '<S260>/INPUT_17_1_1'
  real_T INPUT_15_1_1_Discrete[2];     // '<S260>/INPUT_15_1_1'
  real_T INTERNAL_2_1_1_Discrete[2];   // '<S260>/INTERNAL_2_1_1'
  real_T INTERNAL_3_1_1_Discrete[2];   // '<S260>/INTERNAL_3_1_1'
  real_T INTERNAL_1_1_1_Discrete[2];   // '<S260>/INTERNAL_1_1_1'
  real_T INTERNAL_2_2_1_Discrete[2];   // '<S260>/INTERNAL_2_2_1'
  real_T INTERNAL_3_2_1_Discrete[2];   // '<S260>/INTERNAL_3_2_1'
  real_T INTERNAL_1_2_1_Discrete[2];   // '<S260>/INTERNAL_1_2_1'
  real_T INTERNAL_2_3_1_Discrete[2];   // '<S260>/INTERNAL_2_3_1'
  real_T INTERNAL_3_3_1_Discrete[2];   // '<S260>/INTERNAL_3_3_1'
  real_T INTERNAL_1_3_1_Discrete[2];   // '<S260>/INTERNAL_1_3_1'
  real_T inversion_DWORK4[16];         // '<S63>/inversion'
  real_T StateSpace_RWORK[6];          // '<S304>/State-Space'
  real_T Integrator;                   // '<S2>/Integrator'
  real_T Gain_m;                       // '<S2>/Gain'
  real_T EngagementPressure;           // '<S86>/Engagement Pressure'
  real_T Integrator_i;                 // '<S1>/Integrator'
  real_T Gain_f;                       // '<S1>/Gain'
  real_T RTP_7;                        // '<S34>/RTP_7'
  real_T Integrator_k;                 // '<S112>/Integrator'
  real_T Gain_g;                       // '<S112>/Gain'
  real_T PitchPowerOn;                 // '<Root>/Pitch Power On'
  real_T RTP_5;                        // '<S34>/RTP_5'
  real_T Integrator_g;                 // '<S142>/Integrator'
  real_T Gain_n;                       // '<S142>/Gain'
  real_T RTP_4;                        // '<S34>/RTP_4'
  real_T Integrator_o;                 // '<S172>/Integrator'
  real_T Gain_h;                       // '<S172>/Gain'
  real_T RTP_3;                        // '<S34>/RTP_3'
  real_T LookUpTable;                  // '<S281>/Look-Up Table'
  real_T Switch3;                      // '<S42>/Switch3'
  real_T Switch;                       // '<S42>/Switch'
  real_T LookUpTable_n;                // '<S276>/Look-Up Table'
  real_T Switch3_l;                    // '<S275>/Switch3'
  real_T Switch1;                      // '<S42>/Switch1'
  real_T LookUpTable_a;                // '<S278>/Look-Up Table'
  real_T Switch3_j;                    // '<S277>/Switch3'
  real_T Switch2;                      // '<S42>/Switch2'
  real_T LookUpTable_nk;               // '<S280>/Look-Up Table'
  real_T Switch3_lp;                   // '<S279>/Switch3'
  real_T LookUpTable_h;                // '<S292>/Look-Up Table'
  real_T Switch3_p;                    // '<S43>/Switch3'
  real_T Switch_d;                     // '<S43>/Switch'
  real_T LookUpTable_aj;               // '<S287>/Look-Up Table'
  real_T Switch3_o;                    // '<S286>/Switch3'
  real_T Switch1_l;                    // '<S43>/Switch1'
  real_T LookUpTable_hy;               // '<S289>/Look-Up Table'
  real_T Switch3_d;                    // '<S288>/Switch3'
  real_T Switch2_b;                    // '<S43>/Switch2'
  real_T LookUpTable_g;                // '<S291>/Look-Up Table'
  real_T Switch3_dj;                   // '<S290>/Switch3'
  real_T Ramp;                         // '<S96>/Integrator'
  real_T Memory;                       // '<S96>/Memory'
  real_T Switch2_d;                    // '<S96>/Switch2'
  real_T Switch3_d1;                   // '<S96>/Switch3'
  real_T Switch2_l;                    // '<S92>/Switch2'
  real_T Sum3_a;                       // '<S92>/Sum3'
  real_T LookUpTable_l;                // '<S97>/Look-Up Table'
  real_T Switch1_p;                    // '<S92>/Switch1'
  real_T Switch3_c;                    // '<S92>/Switch3'
  real_T Sum4;                         // '<S92>/Sum4'
  real_T DataTypeConversion;           // '<S92>/Data Type  Conversion'
  real_T RTP_2;                        // '<S34>/RTP_2'
  real_T Integrator_d;                 // '<S19>/Integrator'
  real_T Gain_p;                       // '<S19>/Gain'
  real_T Integrator_gr;                // '<S18>/Integrator'
  real_T Gain_a;                       // '<S18>/Gain'
  real_T LTI_OUTPUT_6_1;               // '<S260>/LTI_OUTPUT_6_1'
  real_T radps2pu1;                    // '<Root>/radps2pu1'
  real_T ComplextoRealImag_o1_n;       // '<S56>/Complex to Real-Imag'
  real_T ComplextoRealImag_o2_g;       // '<S56>/Complex to Real-Imag'
  real_T GAIN;                         // '<S226>/GAIN'
  real_T ActuatorSpeedtoNacelleYawRate;
                                 // '<S196>/Actuator Speed to Nacelle Yaw Rate'
  real_T DerivativeControl;            // '<S46>/Derivative Control'
  real_T GAIN_o;                       // '<S201>/GAIN'
  real_T ActuatorPositiontoNacelleAngle;
                                 // '<S193>/Actuator Position to Nacelle Angle'
  real_T GAIN_h;                       // '<S209>/GAIN'
  real_T ActuatorPositiontoNacelleAngl_n;
                                 // '<S194>/Actuator Position to Nacelle Angle'
  real_T GAIN_k;                       // '<S217>/GAIN'
  real_T ActuatorPositiontoNacelleAngl_m;
                                 // '<S195>/Actuator Position to Nacelle Angle'
  real_T GAIN_f;                       // '<S225>/GAIN'
  real_T ActuatorPositiontoNacelleAng_nu;
                                 // '<S196>/Actuator Position to Nacelle Angle'
  real_T Gain_hg;                      // '<S30>/Gain'
  real_T radps2rpm;                    // '<S233>/radps2rpm'
  real_T Sum_o;                        // '<S233>/Sum'
  real_T Integrator_e;                 // '<S234>/Integrator'
  real_T CheckForParkCondition;        // '<S230>/Check For Park Condition'
  real_T LimitPitchCommand;            // '<S230>/Limit Pitch Command'
  real_T LookupFix;                    // '<S229>/Lookup Fix'
  real_T s2wswr;                       // '<S52>/Sum2'
  real_T Product2_e;                   // '<S70>/Product2'
  real_T ComplextoRealImag_o1_b;       // '<S69>/Complex to Real-Imag'
  real_T ComplextoRealImag_o2_e;       // '<S69>/Complex to Real-Imag'
  real_T Product1_i;                   // '<S69>/Product1'
  real_T ComplextoRealImag3_o1;        // '<S56>/Complex to Real-Imag3'
  real_T ComplextoRealImag3_o2;        // '<S56>/Complex to Real-Imag3'
  real_T ComplextoRealImag_o1_h;       // '<S310>/Complex to Real-Imag'
  real_T ComplextoRealImag_o2_j;       // '<S310>/Complex to Real-Imag'
  real_T putoMW;                       // '<S51>/pu to MW'
  real_T putoMvar;                     // '<S51>/pu to Mvar'
  real_T Sum2_f;                       // '<S62>/Sum2'
  real_T Phids2;                       // '<S59>/Complex to Real-Imag'
  real_T Phiqs2;                       // '<S59>/Complex to Real-Imag'
  real_T Product3_a;                   // '<S52>/Product3'
  real_T Product4;                     // '<S52>/Product4'
  real_T NegseqTorque;                 // '<S52>/Sum4'
  real_T Sum5_j;                       // '<S52>/Sum5'
  real_T torque_pu2Nm;                 // '<Root>/torque_pu2Nm'
  real_T Sum_n;                        // '<S1>/Sum'
  real_T Switch_e;                     // '<S102>/Switch'
  real_T Sum_dg;                       // '<S112>/Sum'
  real_T Switch_b;                     // '<S132>/Switch'
  real_T Sum_mo;                       // '<S142>/Sum'
  real_T Switch_m;                     // '<S162>/Switch'
  real_T Sum_mb;                       // '<S172>/Sum'
  real_T IntegralGain_o4;              // '<S234>/Integral Gain'
  real_T Sum_ga;                       // '<S19>/Sum'
  real_T pu2rpm;                       // '<Root>/pu2rpm'
  real_T Sum_es;                       // '<S2>/Sum'
  real_T web_psb;                      // '<S54>/web_psb'
  real_T Gain_gm;                      // '<S21>/Gain'
  real_T Sum_l;                        // '<S18>/Sum'
  real_T Derivative;                   // '<S97>/Derivative'
  real_T Switch_p;                     // '<S96>/Switch'
  real_T Derivative_d;                 // '<S291>/Derivative'
  real_T Derivative_p;                 // '<S289>/Derivative'
  real_T Derivative_px;                // '<S287>/Derivative'
  real_T Derivative_dw;                // '<S292>/Derivative'
  real_T Derivative_e;                 // '<S280>/Derivative'
  real_T Derivative_l;                 // '<S278>/Derivative'
  real_T Derivative_g;                 // '<S276>/Derivative'
  real_T Derivative_n;                 // '<S281>/Derivative'
  real_T pitch_brake;                  // '<Root>/Turbine State Machine'
  real_T parking_brake;                // '<Root>/Turbine State Machine'
  real_T generator_trip;               // '<Root>/Turbine State Machine'
  real_T CheckForPitchBrakeCondition;
                                    // '<S230>/Check For Pitch Brake Condition'
  real_T ProportionalGain_na;          // '<S234>/Proportional Gain'
  real_T Sum_kt;                       // '<S234>/Sum'
  real_T Saturation;                   // '<S233>/Saturation'
  real_T radps2mps;                    // '<S232>/radps2mps'
  real_T rad2deg;                      // '<S232>/rad2deg'
  real_T Sum_a;                        // '<S230>/Sum'
  real_T MultiportSwitch1;             // '<S96>/Multiport Switch1'
  real_T Integrator_dc;                // '<S67>/Integrator'
  real_T Sum2_l;                       // '<S65>/Sum2'
  real_T phimq;                        // '<S68>/Sum2'
  real_T phimd;                        // '<S68>/Sum1'
  real_T Lm;                           // '<S63>/Switch'
  real_T Add;                          // '<S67>/Add'
  real_T uTT1e6s;                      // '<S67>/1//T (T= 1e-6s)'
  real_T Lm_c;                         // '<S63>/Product'
  real_T wewr;                         // '<S55>/Sum'
  real_T Gain2_m;                      // '<S55>/Gain2'
  real_T INPUT_18_1_1_Discrete;        // '<S260>/INPUT_18_1_1'
  real_T INPUT_18_1_1_FirstOutput;     // '<S260>/INPUT_18_1_1'
  real_T INTERNAL_10_1_1_Discrete;     // '<S260>/INTERNAL_10_1_1'
  real_T INTERNAL_10_1_1_FirstOutput;  // '<S260>/INTERNAL_10_1_1'
  real_T INPUT_11_1_1_Discrete;        // '<S260>/INPUT_11_1_1'
  real_T INPUT_11_1_1_FirstOutput;     // '<S260>/INPUT_11_1_1'
  real_T INPUT_12_1_1_Discrete;        // '<S260>/INPUT_12_1_1'
  real_T INPUT_12_1_1_FirstOutput;     // '<S260>/INPUT_12_1_1'
  real_T INPUT_13_1_1_Discrete;        // '<S260>/INPUT_13_1_1'
  real_T INPUT_13_1_1_FirstOutput;     // '<S260>/INPUT_13_1_1'
  real_T INPUT_14_1_1_Discrete;        // '<S260>/INPUT_14_1_1'
  real_T INPUT_14_1_1_FirstOutput;     // '<S260>/INPUT_14_1_1'
  real_T INTERNAL_11_1_1_Discrete;     // '<S260>/INTERNAL_11_1_1'
  real_T INTERNAL_11_1_1_FirstOutput;  // '<S260>/INTERNAL_11_1_1'
  real_T LTI_STATE_6_FirstOutput;      // '<S260>/LTI_STATE_6'
  real_T STATE_1_Discrete;             // '<S260>/STATE_1'
  real_T OUTPUT_1_0_Discrete;          // '<S260>/OUTPUT_1_0'
  real_T STATE_5_Discrete;             // '<S260>/STATE_5'
  real_T STATE_4_Discrete;             // '<S260>/STATE_4'
  real_T STATE_3_Discrete;             // '<S260>/STATE_3'
  real_T Memory_PreviousInput;         // '<S96>/Memory'
  real_T OUTPUT_5_0_Discrete;          // '<S260>/OUTPUT_5_0'
  real_T OUTPUT_4_0_Discrete;          // '<S260>/OUTPUT_4_0'
  real_T OUTPUT_3_0_Discrete;          // '<S260>/OUTPUT_3_0'
  real_T OUTPUT_7_0_Discrete;          // '<S260>/OUTPUT_7_0'
  real_T STATE_2_Discrete;             // '<S260>/STATE_2'
  real_T OUTPUT_2_0_Discrete;          // '<S260>/OUTPUT_2_0'
  real_T STATE_8_Discrete;             // '<S260>/STATE_8'
  real_T OUTPUT_8_0_Discrete;          // '<S260>/OUTPUT_8_0'
  real_T OUTPUT_1_1_Discrete;          // '<S260>/OUTPUT_1_1'
  real_T OUTPUT_2_1_Discrete;          // '<S260>/OUTPUT_2_1'
  real_T TimeStampA;                   // '<S97>/Derivative'
  real_T LastUAtTimeA;                 // '<S97>/Derivative'
  real_T TimeStampB;                   // '<S97>/Derivative'
  real_T LastUAtTimeB;                 // '<S97>/Derivative'
  real_T TimeStampA_b;                 // '<S291>/Derivative'
  real_T LastUAtTimeA_k;               // '<S291>/Derivative'
  real_T TimeStampB_j;                 // '<S291>/Derivative'
  real_T LastUAtTimeB_k;               // '<S291>/Derivative'
  real_T TimeStampA_a;                 // '<S289>/Derivative'
  real_T LastUAtTimeA_j;               // '<S289>/Derivative'
  real_T TimeStampB_e;                 // '<S289>/Derivative'
  real_T LastUAtTimeB_h;               // '<S289>/Derivative'
  real_T TimeStampA_o;                 // '<S287>/Derivative'
  real_T LastUAtTimeA_jf;              // '<S287>/Derivative'
  real_T TimeStampB_jj;                // '<S287>/Derivative'
  real_T LastUAtTimeB_d;               // '<S287>/Derivative'
  real_T TimeStampA_m;                 // '<S292>/Derivative'
  real_T LastUAtTimeA_i;               // '<S292>/Derivative'
  real_T TimeStampB_p;                 // '<S292>/Derivative'
  real_T LastUAtTimeB_dg;              // '<S292>/Derivative'
  real_T TimeStampA_ov;                // '<S280>/Derivative'
  real_T LastUAtTimeA_l;               // '<S280>/Derivative'
  real_T TimeStampB_f;                 // '<S280>/Derivative'
  real_T LastUAtTimeB_dk;              // '<S280>/Derivative'
  real_T TimeStampA_bp;                // '<S278>/Derivative'
  real_T LastUAtTimeA_n;               // '<S278>/Derivative'
  real_T TimeStampB_n;                 // '<S278>/Derivative'
  real_T LastUAtTimeB_kp;              // '<S278>/Derivative'
  real_T TimeStampA_j;                 // '<S276>/Derivative'
  real_T LastUAtTimeA_p;               // '<S276>/Derivative'
  real_T TimeStampB_l;                 // '<S276>/Derivative'
  real_T LastUAtTimeB_b;               // '<S276>/Derivative'
  real_T TimeStampA_jj;                // '<S281>/Derivative'
  real_T LastUAtTimeA_m;               // '<S281>/Derivative'
  real_T TimeStampB_m;                 // '<S281>/Derivative'
  real_T LastUAtTimeB_g;               // '<S281>/Derivative'
  real_T wind_speed_cut_in_lower;      // '<Root>/Turbine State Machine'
  real_T turbine_speed_cut_in;         // '<Root>/Turbine State Machine'
  real_T wind_speed_cut_out;           // '<Root>/Turbine State Machine'
  real_T wind_speed_cut_in_upper;      // '<Root>/Turbine State Machine'
  real_T turbine_speed_cut_out;        // '<Root>/Turbine State Machine'
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      // '<S45>/FromWs'

  void *StateSpace_PWORK[15];          // '<S304>/State-Space'
  void* STATE_1_Simulator;             // '<S260>/STATE_1'
  void* STATE_1_SimData;               // '<S260>/STATE_1'
  void* STATE_1_DiagMgr;               // '<S260>/STATE_1'
  void* STATE_1_ZcLogger;              // '<S260>/STATE_1'
  void* STATE_1_TsIndex;               // '<S260>/STATE_1'
  void* OUTPUT_1_0_Simulator;          // '<S260>/OUTPUT_1_0'
  void* OUTPUT_1_0_SimData;            // '<S260>/OUTPUT_1_0'
  void* OUTPUT_1_0_DiagMgr;            // '<S260>/OUTPUT_1_0'
  void* OUTPUT_1_0_ZcLogger;           // '<S260>/OUTPUT_1_0'
  void* OUTPUT_1_0_TsIndex;            // '<S260>/OUTPUT_1_0'
  void* RTP_7_RtpManager;              // '<S34>/RTP_7'
  void* STATE_7_Simulator;             // '<S260>/STATE_7'
  void* STATE_7_SimData;               // '<S260>/STATE_7'
  void* STATE_7_DiagMgr;               // '<S260>/STATE_7'
  void* STATE_7_ZcLogger;              // '<S260>/STATE_7'
  void* STATE_7_TsIndex;               // '<S260>/STATE_7'
  void* SINK_7_RtwLogger;              // '<S260>/SINK_7'
  void* SINK_7_RtwLogBuffer;           // '<S260>/SINK_7'
  void* SINK_7_RtwLogFcnManager;       // '<S260>/SINK_7'
  void* RTP_5_RtpManager;              // '<S34>/RTP_5'
  void* STATE_5_Simulator;             // '<S260>/STATE_5'
  void* STATE_5_SimData;               // '<S260>/STATE_5'
  void* STATE_5_DiagMgr;               // '<S260>/STATE_5'
  void* STATE_5_ZcLogger;              // '<S260>/STATE_5'
  void* STATE_5_TsIndex;               // '<S260>/STATE_5'
  void* SINK_5_RtwLogger;              // '<S260>/SINK_5'
  void* SINK_5_RtwLogBuffer;           // '<S260>/SINK_5'
  void* SINK_5_RtwLogFcnManager;       // '<S260>/SINK_5'
  void* RTP_4_RtpManager;              // '<S34>/RTP_4'
  void* STATE_4_Simulator;             // '<S260>/STATE_4'
  void* STATE_4_SimData;               // '<S260>/STATE_4'
  void* STATE_4_DiagMgr;               // '<S260>/STATE_4'
  void* STATE_4_ZcLogger;              // '<S260>/STATE_4'
  void* STATE_4_TsIndex;               // '<S260>/STATE_4'
  void* SINK_4_RtwLogger;              // '<S260>/SINK_4'
  void* SINK_4_RtwLogBuffer;           // '<S260>/SINK_4'
  void* SINK_4_RtwLogFcnManager;       // '<S260>/SINK_4'
  void* RTP_3_RtpManager;              // '<S34>/RTP_3'
  void* STATE_3_Simulator;             // '<S260>/STATE_3'
  void* STATE_3_SimData;               // '<S260>/STATE_3'
  void* STATE_3_DiagMgr;               // '<S260>/STATE_3'
  void* STATE_3_ZcLogger;              // '<S260>/STATE_3'
  void* STATE_3_TsIndex;               // '<S260>/STATE_3'
  void* SINK_3_RtwLogger;              // '<S260>/SINK_3'
  void* SINK_3_RtwLogBuffer;           // '<S260>/SINK_3'
  void* SINK_3_RtwLogFcnManager;       // '<S260>/SINK_3'
  void* OUTPUT_5_0_Simulator;          // '<S260>/OUTPUT_5_0'
  void* OUTPUT_5_0_SimData;            // '<S260>/OUTPUT_5_0'
  void* OUTPUT_5_0_DiagMgr;            // '<S260>/OUTPUT_5_0'
  void* OUTPUT_5_0_ZcLogger;           // '<S260>/OUTPUT_5_0'
  void* OUTPUT_5_0_TsIndex;            // '<S260>/OUTPUT_5_0'
  void* OUTPUT_4_0_Simulator;          // '<S260>/OUTPUT_4_0'
  void* OUTPUT_4_0_SimData;            // '<S260>/OUTPUT_4_0'
  void* OUTPUT_4_0_DiagMgr;            // '<S260>/OUTPUT_4_0'
  void* OUTPUT_4_0_ZcLogger;           // '<S260>/OUTPUT_4_0'
  void* OUTPUT_4_0_TsIndex;            // '<S260>/OUTPUT_4_0'
  void* OUTPUT_3_0_Simulator;          // '<S260>/OUTPUT_3_0'
  void* OUTPUT_3_0_SimData;            // '<S260>/OUTPUT_3_0'
  void* OUTPUT_3_0_DiagMgr;            // '<S260>/OUTPUT_3_0'
  void* OUTPUT_3_0_ZcLogger;           // '<S260>/OUTPUT_3_0'
  void* OUTPUT_3_0_TsIndex;            // '<S260>/OUTPUT_3_0'
  void* OUTPUT_7_0_Simulator;          // '<S260>/OUTPUT_7_0'
  void* OUTPUT_7_0_SimData;            // '<S260>/OUTPUT_7_0'
  void* OUTPUT_7_0_DiagMgr;            // '<S260>/OUTPUT_7_0'
  void* OUTPUT_7_0_ZcLogger;           // '<S260>/OUTPUT_7_0'
  void* OUTPUT_7_0_TsIndex;            // '<S260>/OUTPUT_7_0'
  void* RTP_2_RtpManager;              // '<S34>/RTP_2'
  void* STATE_2_Simulator;             // '<S260>/STATE_2'
  void* STATE_2_SimData;               // '<S260>/STATE_2'
  void* STATE_2_DiagMgr;               // '<S260>/STATE_2'
  void* STATE_2_ZcLogger;              // '<S260>/STATE_2'
  void* STATE_2_TsIndex;               // '<S260>/STATE_2'
  void* OUTPUT_2_0_Simulator;          // '<S260>/OUTPUT_2_0'
  void* OUTPUT_2_0_SimData;            // '<S260>/OUTPUT_2_0'
  void* OUTPUT_2_0_DiagMgr;            // '<S260>/OUTPUT_2_0'
  void* OUTPUT_2_0_ZcLogger;           // '<S260>/OUTPUT_2_0'
  void* OUTPUT_2_0_TsIndex;            // '<S260>/OUTPUT_2_0'
  void* STATE_8_Simulator;             // '<S260>/STATE_8'
  void* STATE_8_SimData;               // '<S260>/STATE_8'
  void* STATE_8_DiagMgr;               // '<S260>/STATE_8'
  void* STATE_8_ZcLogger;              // '<S260>/STATE_8'
  void* STATE_8_TsIndex;               // '<S260>/STATE_8'
  void* OUTPUT_8_0_Simulator;          // '<S260>/OUTPUT_8_0'
  void* OUTPUT_8_0_SimData;            // '<S260>/OUTPUT_8_0'
  void* OUTPUT_8_0_DiagMgr;            // '<S260>/OUTPUT_8_0'
  void* OUTPUT_8_0_ZcLogger;           // '<S260>/OUTPUT_8_0'
  void* OUTPUT_8_0_TsIndex;            // '<S260>/OUTPUT_8_0'
  void* SINK_1_RtwLogger;              // '<S260>/SINK_1'
  void* SINK_1_RtwLogBuffer;           // '<S260>/SINK_1'
  void* SINK_1_RtwLogFcnManager;       // '<S260>/SINK_1'
  void* OUTPUT_1_1_Simulator;          // '<S260>/OUTPUT_1_1'
  void* OUTPUT_1_1_SimData;            // '<S260>/OUTPUT_1_1'
  void* OUTPUT_1_1_DiagMgr;            // '<S260>/OUTPUT_1_1'
  void* OUTPUT_1_1_ZcLogger;           // '<S260>/OUTPUT_1_1'
  void* OUTPUT_1_1_TsIndex;            // '<S260>/OUTPUT_1_1'
  void* SINK_2_RtwLogger;              // '<S260>/SINK_2'
  void* SINK_2_RtwLogBuffer;           // '<S260>/SINK_2'
  void* SINK_2_RtwLogFcnManager;       // '<S260>/SINK_2'
  void* SINK_8_RtwLogger;              // '<S260>/SINK_8'
  void* SINK_8_RtwLogBuffer;           // '<S260>/SINK_8'
  void* SINK_8_RtwLogFcnManager;       // '<S260>/SINK_8'
  void* OUTPUT_2_1_Simulator;          // '<S260>/OUTPUT_2_1'
  void* OUTPUT_2_1_SimData;            // '<S260>/OUTPUT_2_1'
  void* OUTPUT_2_1_DiagMgr;            // '<S260>/OUTPUT_2_1'
  void* OUTPUT_2_1_ZcLogger;           // '<S260>/OUTPUT_2_1'
  void* OUTPUT_2_1_TsIndex;            // '<S260>/OUTPUT_2_1'
  void* LTI_SINK_6_RtwLogger;          // '<S260>/LTI_SINK_6'
  void* LTI_SINK_6_RtwLogBuffer;       // '<S260>/LTI_SINK_6'
  void* LTI_SINK_6_RtwLogFcnManager;   // '<S260>/LTI_SINK_6'
  int_T STATE_7_Modes[16];             // '<S260>/STATE_7'
  int_T STATE_5_Modes[23];             // '<S260>/STATE_5'
  int_T STATE_4_Modes[23];             // '<S260>/STATE_4'
  int_T STATE_3_Modes[23];             // '<S260>/STATE_3'
  int_T StateSpace_IWORK[4];           // '<S304>/State-Space'
  int_T STATE_8_Modes[3];              // '<S260>/STATE_8'
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      // '<S45>/FromWs'

  int_T STATE_1_Modes;                 // '<S260>/STATE_1'
  int_T OUTPUT_1_0_Modes;              // '<S260>/OUTPUT_1_0'
  int_T OUTPUT_5_0_Modes;              // '<S260>/OUTPUT_5_0'
  int_T OUTPUT_4_0_Modes;              // '<S260>/OUTPUT_4_0'
  int_T OUTPUT_3_0_Modes;              // '<S260>/OUTPUT_3_0'
  int_T OUTPUT_7_0_Modes;              // '<S260>/OUTPUT_7_0'
  int_T STATE_2_Modes;                 // '<S260>/STATE_2'
  int_T OUTPUT_2_0_Modes;              // '<S260>/OUTPUT_2_0'
  int_T OUTPUT_8_0_Modes;              // '<S260>/OUTPUT_8_0'
  int_T OUTPUT_1_1_Modes;              // '<S260>/OUTPUT_1_1'
  int_T OUTPUT_2_1_Modes;              // '<S260>/OUTPUT_2_1'
  int32_T STATE_5_MASS_MATRIX_PR;      // '<S260>/STATE_5'
  int32_T STATE_4_MASS_MATRIX_PR;      // '<S260>/STATE_4'
  int32_T STATE_3_MASS_MATRIX_PR;      // '<S260>/STATE_3'
  int32_T STATE_2_MASS_MATRIX_PR;      // '<S260>/STATE_2'
  uint32_T m_bpIndex;                  // '<S63>/1-D Lookup Table'
  struct {
    uint_T DataTypeConversion2:1;      // '<S96>/Data Type  Conversion2'
    uint_T DataTypeConversion1:1;      // '<S92>/Data Type  Conversion1'
    uint_T STATE_1_FirstOutput:1;      // '<S260>/STATE_1'
    uint_T OUTPUT_1_0_FirstOutput:1;   // '<S260>/OUTPUT_1_0'
    uint_T STATE_7_FirstOutput:1;      // '<S260>/STATE_7'
    uint_T STATE_5_FirstOutput:1;      // '<S260>/STATE_5'
    uint_T STATE_4_FirstOutput:1;      // '<S260>/STATE_4'
    uint_T STATE_3_FirstOutput:1;      // '<S260>/STATE_3'
    uint_T OUTPUT_5_0_FirstOutput:1;   // '<S260>/OUTPUT_5_0'
    uint_T OUTPUT_4_0_FirstOutput:1;   // '<S260>/OUTPUT_4_0'
    uint_T OUTPUT_3_0_FirstOutput:1;   // '<S260>/OUTPUT_3_0'
    uint_T OUTPUT_7_0_FirstOutput:1;   // '<S260>/OUTPUT_7_0'
    uint_T STATE_2_FirstOutput:1;      // '<S260>/STATE_2'
    uint_T OUTPUT_2_0_FirstOutput:1;   // '<S260>/OUTPUT_2_0'
    uint_T STATE_8_FirstOutput:1;      // '<S260>/STATE_8'
    uint_T OUTPUT_8_0_FirstOutput:1;   // '<S260>/OUTPUT_8_0'
    uint_T OUTPUT_1_1_FirstOutput:1;   // '<S260>/OUTPUT_1_1'
    uint_T OUTPUT_2_1_FirstOutput:1;   // '<S260>/OUTPUT_2_1'
  } bitsForTID0;

  struct {
    uint_T is_c1_Turbine_State_Machine_Lib:3;// '<Root>/Turbine State Machine'
    uint_T is_active_c1_Turbine_State_Mach:1;// '<Root>/Turbine State Machine'
    uint_T RTP_7_SetParametersNeeded:1;// '<S34>/RTP_7'
    uint_T RTP_5_SetParametersNeeded:1;// '<S34>/RTP_5'
    uint_T RTP_4_SetParametersNeeded:1;// '<S34>/RTP_4'
    uint_T RTP_3_SetParametersNeeded:1;// '<S34>/RTP_3'
    uint_T RTP_2_SetParametersNeeded:1;// '<S34>/RTP_2'
  } bitsForTID1;

  boolean_T Saturation_MODE;           // '<S58>/Saturation'
};

// Continuous states (default storage)
struct X {
  real_T Integrator_CSTATE;            // '<S2>/Integrator'
  real_T Integrator_CSTATE_m;          // '<S1>/Integrator'
  real_T Wind_TurbineTorque_ActuatorSimu;// '<S260>/INPUT_18_1_1'
  real_T Wind_TurbineRevolute_Joint1Rzq[28];// '<S260>/STATE_1'
  real_T Wind_TurbineoutputFiltered_2541;// '<S260>/INTERNAL_10_1_1'
  real_T Wind_TurbineBrakesInertiaw[6];// '<S260>/STATE_7'
  real_T Integrator_CSTATE_e;          // '<S112>/Integrator'
  real_T Wind_TurbineHydraulicActuator_1[25];// '<S260>/STATE_5'
  real_T Integrator_CSTATE_n;          // '<S142>/Integrator'
  real_T Wind_TurbineHydraulicActuator_2[25];// '<S260>/STATE_4'
  real_T Integrator_CSTATE_a;          // '<S172>/Integrator'
  real_T Wind_TurbineHydraulicActuator_3[25];// '<S260>/STATE_3'
  real_T Integrator_CSTATE_g[4];       // '<S64>/Integrator'
  real_T Integrator_CSTATE_n2[2];      // '<S59>/Integrator'
  real_T Integrator_CSTATE_b;          // '<S96>/Integrator'
  real_T Integrator_CSTATE_mt[4];      // '<S192>/Integrator'
  real_T Wind_TurbineIdeal_MotorIdeal_Ya;// '<S260>/INPUT_11_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__e;// '<S260>/INPUT_12_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__g;// '<S260>/INPUT_13_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__a;// '<S260>/INPUT_14_1_1'
  real_T Wind_TurbineoutputFiltered_8434;// '<S260>/INTERNAL_11_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__n[6];// '<S260>/STATE_2'
  real_T Integrator_CSTATE_as;         // '<S19>/Integrator'
  real_T Integrator_CSTATE_gx;         // '<S18>/Integrator'
  real_T Integrator_CSTATE_l[4];       // '<S293>/Integrator'
  real_T Integrator_CSTATE_ga[4];      // '<S294>/Integrator'
  real_T Integrator_CSTATE_i;          // '<S234>/Integrator'
  real_T Integrator_CSTATE_h[3];       // '<S231>/Integrator'
  real_T Rotoranglethetam_CSTATE;      // '<S54>/Rotor angle thetam'
  real_T integrator_CSTATE;            // '<S311>/integrator'
  real_T integrator_CSTATE_f;          // '<S312>/integrator'
  real_T Integrator_CSTATE_o;          // '<S67>/Integrator'
};

// State derivatives (default storage)
struct XDot {
  real_T Integrator_CSTATE;            // '<S2>/Integrator'
  real_T Integrator_CSTATE_m;          // '<S1>/Integrator'
  real_T Wind_TurbineTorque_ActuatorSimu;// '<S260>/INPUT_18_1_1'
  real_T Wind_TurbineRevolute_Joint1Rzq[28];// '<S260>/STATE_1'
  real_T Wind_TurbineoutputFiltered_2541;// '<S260>/INTERNAL_10_1_1'
  real_T Wind_TurbineBrakesInertiaw[6];// '<S260>/STATE_7'
  real_T Integrator_CSTATE_e;          // '<S112>/Integrator'
  real_T Wind_TurbineHydraulicActuator_1[25];// '<S260>/STATE_5'
  real_T Integrator_CSTATE_n;          // '<S142>/Integrator'
  real_T Wind_TurbineHydraulicActuator_2[25];// '<S260>/STATE_4'
  real_T Integrator_CSTATE_a;          // '<S172>/Integrator'
  real_T Wind_TurbineHydraulicActuator_3[25];// '<S260>/STATE_3'
  real_T Integrator_CSTATE_g[4];       // '<S64>/Integrator'
  real_T Integrator_CSTATE_n2[2];      // '<S59>/Integrator'
  real_T Integrator_CSTATE_b;          // '<S96>/Integrator'
  real_T Integrator_CSTATE_mt[4];      // '<S192>/Integrator'
  real_T Wind_TurbineIdeal_MotorIdeal_Ya;// '<S260>/INPUT_11_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__e;// '<S260>/INPUT_12_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__g;// '<S260>/INPUT_13_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__a;// '<S260>/INPUT_14_1_1'
  real_T Wind_TurbineoutputFiltered_8434;// '<S260>/INTERNAL_11_1_1'
  real_T Wind_TurbineIdeal_MotorIdeal__n[6];// '<S260>/STATE_2'
  real_T Integrator_CSTATE_as;         // '<S19>/Integrator'
  real_T Integrator_CSTATE_gx;         // '<S18>/Integrator'
  real_T Integrator_CSTATE_l[4];       // '<S293>/Integrator'
  real_T Integrator_CSTATE_ga[4];      // '<S294>/Integrator'
  real_T Integrator_CSTATE_i;          // '<S234>/Integrator'
  real_T Integrator_CSTATE_h[3];       // '<S231>/Integrator'
  real_T Rotoranglethetam_CSTATE;      // '<S54>/Rotor angle thetam'
  real_T integrator_CSTATE;            // '<S311>/integrator'
  real_T integrator_CSTATE_f;          // '<S312>/integrator'
  real_T Integrator_CSTATE_o;          // '<S67>/Integrator'
};

// State disabled
struct XDis {
  boolean_T Integrator_CSTATE;         // '<S2>/Integrator'
  boolean_T Integrator_CSTATE_m;       // '<S1>/Integrator'
  boolean_T Wind_TurbineTorque_ActuatorSimu;// '<S260>/INPUT_18_1_1'
  boolean_T Wind_TurbineRevolute_Joint1Rzq[28];// '<S260>/STATE_1'
  boolean_T Wind_TurbineoutputFiltered_2541;// '<S260>/INTERNAL_10_1_1'
  boolean_T Wind_TurbineBrakesInertiaw[6];// '<S260>/STATE_7'
  boolean_T Integrator_CSTATE_e;       // '<S112>/Integrator'
  boolean_T Wind_TurbineHydraulicActuator_1[25];// '<S260>/STATE_5'
  boolean_T Integrator_CSTATE_n;       // '<S142>/Integrator'
  boolean_T Wind_TurbineHydraulicActuator_2[25];// '<S260>/STATE_4'
  boolean_T Integrator_CSTATE_a;       // '<S172>/Integrator'
  boolean_T Wind_TurbineHydraulicActuator_3[25];// '<S260>/STATE_3'
  boolean_T Integrator_CSTATE_g[4];    // '<S64>/Integrator'
  boolean_T Integrator_CSTATE_n2[2];   // '<S59>/Integrator'
  boolean_T Integrator_CSTATE_b;       // '<S96>/Integrator'
  boolean_T Integrator_CSTATE_mt[4];   // '<S192>/Integrator'
  boolean_T Wind_TurbineIdeal_MotorIdeal_Ya;// '<S260>/INPUT_11_1_1'
  boolean_T Wind_TurbineIdeal_MotorIdeal__e;// '<S260>/INPUT_12_1_1'
  boolean_T Wind_TurbineIdeal_MotorIdeal__g;// '<S260>/INPUT_13_1_1'
  boolean_T Wind_TurbineIdeal_MotorIdeal__a;// '<S260>/INPUT_14_1_1'
  boolean_T Wind_TurbineoutputFiltered_8434;// '<S260>/INTERNAL_11_1_1'
  boolean_T Wind_TurbineIdeal_MotorIdeal__n[6];// '<S260>/STATE_2'
  boolean_T Integrator_CSTATE_as;      // '<S19>/Integrator'
  boolean_T Integrator_CSTATE_gx;      // '<S18>/Integrator'
  boolean_T Integrator_CSTATE_l[4];    // '<S293>/Integrator'
  boolean_T Integrator_CSTATE_ga[4];   // '<S294>/Integrator'
  boolean_T Integrator_CSTATE_i;       // '<S234>/Integrator'
  boolean_T Integrator_CSTATE_h[3];    // '<S231>/Integrator'
  boolean_T Rotoranglethetam_CSTATE;   // '<S54>/Rotor angle thetam'
  boolean_T integrator_CSTATE;         // '<S311>/integrator'
  boolean_T integrator_CSTATE_f;       // '<S312>/integrator'
  boolean_T Integrator_CSTATE_o;       // '<S67>/Integrator'
};

// Mass Matrix (global)
struct MassMatrix {
  int_T ir[108];
  int_T jc[157];
  real_T pr[108];
};

// Invariant block signals (default storage)
struct ConstB {
  creal_T MagnitudeAngletoComplex[3];  // '<S93>/Magnitude-Angle to Complex'
  creal_T MagnitudeAngletoComplex_a[3];// '<S94>/Magnitude-Angle to Complex'
};

#ifndef ODE14X_INTG
#define ODE14X_INTG

// ODE14X Integration Data
struct ODE14X_IntgData {
  real_T *x0;
  real_T *f0;
  real_T *x1start;
  real_T *f1;
  real_T *Delta;
  real_T *E;
  real_T *fac;
  real_T *DFDX;
  real_T *W;
  int_T *pivots;
  real_T *xtmp;
  real_T *ztmp;
  real_T *M;
  real_T *M1;
  real_T *Edot;
  real_T *xdot;
  real_T *fminusMxdot;
  boolean_T isFirstStep;
};

#endif

// Constant parameters (default storage)
struct ConstP {
  // Expression: [ 0 1  0  0; -1  0  0  0;  0  0  0  0;  0  0  0  0]
  //  Referenced by: '<S55>/u3'

  real_T u3_Value[16];

  // Expression: SM.Ll
  //  Referenced by: '<S66>/u5'

  real_T u5_Value[16];

  // Expression: SM.R
  //  Referenced by: '<S63>/u1'

  real_T u1_Value_o[16];

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by: '<S63>/1-D Lookup Table'

  real_T pooled4[2];

  // Expression: SM.Linv
  //  Referenced by: '<S58>/Constant2'

  real_T Constant2_Value[16];

  // Expression: SM.RLinv
  //  Referenced by: '<S58>/Constant4'

  real_T Constant4_Value[16];

  // Pooled Parameter (Expression: sps.tv)
  //  Referenced by:
  //    '<S281>/Look-Up Table'
  //    '<S292>/Look-Up Table'

  real_T pooled17[4];

  // Expression: sps.opv
  //  Referenced by: '<S281>/Look-Up Table'

  real_T LookUpTable_YData[4];

  // Pooled Parameter (Expression: tv)
  //  Referenced by:
  //    '<S276>/Look-Up Table'
  //    '<S278>/Look-Up Table'
  //    '<S280>/Look-Up Table'
  //    '<S287>/Look-Up Table'
  //    '<S289>/Look-Up Table'
  //    '<S291>/Look-Up Table'

  real_T pooled19[5];

  // Pooled Parameter (Expression: opv)
  //  Referenced by:
  //    '<S276>/Look-Up Table'
  //    '<S278>/Look-Up Table'
  //    '<S280>/Look-Up Table'

  real_T pooled20[5];

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<S292>/Look-Up Table'
  //    '<S64>/Integrator'

  real_T pooled21[4];

  // Pooled Parameter (Expression: opv)
  //  Referenced by:
  //    '<S287>/Look-Up Table'
  //    '<S289>/Look-Up Table'
  //    '<S291>/Look-Up Table'

  real_T pooled22[5];

  // Expression: sps.tv
  //  Referenced by: '<S97>/Look-Up Table'

  real_T LookUpTable_XData[6];

  // Expression: sps.opv
  //  Referenced by: '<S97>/Look-Up Table'

  real_T LookUpTable_YData_n[6];

  // Computed Parameter: StateSpace_P1_Size
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P1_Size[2];

  // Expression: real(S.H)
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P1[187];

  // Computed Parameter: StateSpace_P2_Size
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P2_Size[2];

  // Expression: imag(S.H)
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P2[187];

  // Computed Parameter: StateSpace_P3_Size
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P3_Size[2];

  // Expression: S.Rswitch
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P3[6];

  // Computed Parameter: StateSpace_P4_Size
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P4_Size[2];

  // Expression: S.InputsNonZero
  //  Referenced by: '<S304>/State-Space'

  real_T StateSpace_P4[5];

  // Expression: -Actuator_Lookup.angle
  //  Referenced by: '<S229>/Angle to Extension'

  real_T AngletoExtension_XData[88];

  // Expression: Actuator_Lookup.extension
  //  Referenced by: '<S229>/Angle to Extension'

  real_T AngletoExtension_YData[88];
};

// Real-time Model Data Structure
struct tag_RTM {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  //
  //  NonInlinedSFcns:
  //  The following substructure contains information regarding
  //  non-inlined s-functions used in the model.

  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[28];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;
  } NonInlinedSFcns;

  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  int_T massMatrixType;
  int_T massMatrixNzMax;
  int_T *massMatrixIr;
  int_T *massMatrixJc;
  real_T *massMatrixPr;
  real_T odeX0[156];
  real_T odeF0[156];
  real_T odeX1START[156];
  real_T odeF1[156];
  real_T odeDELTA[156];
  real_T odeE[4*156];
  real_T odeFAC[156];
  real_T odeDFDX[156*156];
  real_T odeW[156*156];
  int_T odePIVOTS[156];
  real_T odeXTMP[156];
  real_T odeZTMP[156];
  real_T odeMASSMATRIX_M[108];
  real_T odeMASSMATRIX_M1[108];
  real_T odeEDOT[4*156];
  real_T odeXDOT[156];
  real_T odeFMXDOT[156];
  ODE14X_IntgData intgData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T stepSize;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

// Continuous states (default storage)
extern X rtX;

// Block signals and states (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct DW rtDW;

#ifdef __cplusplus

}
#endif

// global MassMatrix
extern MassMatrix rtMassMatrix;
extern const ConstB rtConstB;          // constant block i/o

// Constant parameters (default storage)
extern const ConstP rtConstP;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void Wind_Turbine_initialize(void);
  extern void Wind_Turbine_step(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL *const rtM;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S52>/Complex to Magnitude-Angle' : Unused code path elimination
//  Block '<S52>/Complex to Magnitude-Angle1' : Unused code path elimination
//  Block '<S52>/Gain' : Unused code path elimination
//  Block '<S52>/Vqdr1' : Unused code path elimination
//  Block '<S60>/Real-Imag to Complex' : Unused code path elimination
//  Block '<S60>/Sum' : Unused code path elimination
//  Block '<S60>/Sum1' : Unused code path elimination
//  Block '<S60>/Sum3' : Unused code path elimination
//  Block '<S60>/a' : Unused code path elimination
//  Block '<S60>/a^2' : Unused code path elimination
//  Block '<S60>/inv' : Unused code path elimination
//  Block '<S61>/Sum' : Unused code path elimination
//  Block '<S61>/inv' : Unused code path elimination
//  Block '<S58>/Constant5' : Unused code path elimination
//  Block '<S58>/Lm_nosat' : Unused code path elimination
//  Block '<S58>/Switch2' : Unused code path elimination
//  Block '<S69>/Product4' : Unused code path elimination
//  Block '<S59>/Gain1' : Unused code path elimination
//  Block '<S59>/Product3' : Unused code path elimination
//  Block '<Root>/Blade Bearing Loads' : Unused code path elimination
//  Block '<Root>/Brake Signal Clutch Mode' : Unused code path elimination
//  Block '<Root>/Divide' : Unused code path elimination
//  Block '<Root>/Extension to Angle' : Unused code path elimination
//  Block '<Root>/Geartrain Ratio' : Unused code path elimination
//  Block '<Root>/Gen Torque' : Unused code path elimination
//  Block '<Root>/Generator Trip' : Unused code path elimination
//  Block '<S193>/Actuator Speed to Nacelle Yaw Rate' : Unused code path elimination
//  Block '<S202>/GAIN' : Unused code path elimination
//  Block '<S194>/Actuator Speed to Nacelle Yaw Rate' : Unused code path elimination
//  Block '<S210>/GAIN' : Unused code path elimination
//  Block '<S195>/Actuator Speed to Nacelle Yaw Rate' : Unused code path elimination
//  Block '<S218>/GAIN' : Unused code path elimination
//  Block '<Root>/Parking Brake, Turbine State' : Unused code path elimination
//  Block '<Root>/Power' : Unused code path elimination
//  Block '<S22>/Gain' : Unused code path elimination
//  Block '<S23>/Gain' : Unused code path elimination
//  Block '<Root>/Rotor Speed (RPM)' : Unused code path elimination
//  Block '<Root>/Rotor, Turbine Speed  (rpm, pu)' : Unused code path elimination
//  Block '<Root>/Saturation' : Unused code path elimination
//  Block '<S30>/Gain1' : Unused code path elimination
//  Block '<S255>/GAIN' : Unused code path elimination
//  Block '<Root>/Wind' : Unused code path elimination
//  Block '<S48>/Kv' : Unused code path elimination
//  Block '<S48>/Kv1' : Unused code path elimination
//  Block '<S296>/Magnitude' : Unused code path elimination
//  Block '<S298>/do not delete this gain' : Unused code path elimination
//  Block '<S299>/do not delete this gain' : Unused code path elimination
//  Block '<S300>/do not delete this gain' : Unused code path elimination
//  Block '<S51>/Constant1' : Unused code path elimination
//  Block '<S311>/Gain' : Unused code path elimination
//  Block '<S311>/Step' : Unused code path elimination
//  Block '<S311>/Sum' : Unused code path elimination
//  Block '<S311>/Switch' : Unused code path elimination
//  Block '<S311>/Transport Delay' : Unused code path elimination
//  Block '<S312>/Gain' : Unused code path elimination
//  Block '<S312>/Step' : Unused code path elimination
//  Block '<S312>/Sum' : Unused code path elimination
//  Block '<S312>/Switch' : Unused code path elimination
//  Block '<S312>/Transport Delay' : Unused code path elimination
//  Block '<Root>/radps to rpm' : Unused code path elimination
//  Block '<Root>/radps2pu' : Unused code path elimination
//  Block '<Root>/radps2rpm' : Unused code path elimination
//  Block '<Root>/radps2rpm1' : Unused code path elimination
//  Block '<Root>/rpm2radps' : Unused code path elimination
//  Block '<Root>/Floating Scope' : Unused code path elimination
//  Block '<S54>/Gain' : Eliminated nontunable gain of 1
//  Block '<S54>/web_psb1' : Eliminated nontunable gain of 1
//  Block '<S74>/do not delete this gain' : Eliminated nontunable gain of 1
//  Block '<S75>/do not delete this gain' : Eliminated nontunable gain of 1
//  Block '<S76>/do not delete this gain' : Eliminated nontunable gain of 1
//  Block '<S77>/do not delete this gain' : Eliminated nontunable gain of 1
//  Block '<S78>/do not delete this gain' : Eliminated nontunable gain of 1
//  Block '<S79>/do not delete this gain' : Eliminated nontunable gain of 1
//  Block '<S96>/Data Type  Conversion1' : Eliminate redundant data type conversion
//  Block '<S275>/Data Type  Conversion' : Eliminate redundant data type conversion
//  Block '<S277>/Data Type  Conversion' : Eliminate redundant data type conversion
//  Block '<S279>/Data Type  Conversion' : Eliminate redundant data type conversion
//  Block '<S286>/Data Type  Conversion' : Eliminate redundant data type conversion
//  Block '<S288>/Data Type  Conversion' : Eliminate redundant data type conversion
//  Block '<S290>/Data Type  Conversion' : Eliminate redundant data type conversion
//  Block '<S293>/Proportional Gain' : Eliminated nontunable gain of 1
//  Block '<S54>/1\p' : Unused code path elimination
//  Block '<S92>/SinglePhase' : Unused code path elimination
//  Block '<S275>/C4' : Unused code path elimination
//  Block '<S277>/C4' : Unused code path elimination
//  Block '<S279>/C4' : Unused code path elimination
//  Block '<S42>/C4' : Unused code path elimination
//  Block '<S42>/Constant1' : Unused code path elimination
//  Block '<S42>/Constant2' : Unused code path elimination
//  Block '<S42>/Constant3' : Unused code path elimination
//  Block '<S42>/Constant5' : Unused code path elimination
//  Block '<S286>/C4' : Unused code path elimination
//  Block '<S288>/C4' : Unused code path elimination
//  Block '<S290>/C4' : Unused code path elimination
//  Block '<S43>/C4' : Unused code path elimination
//  Block '<S43>/Constant1' : Unused code path elimination
//  Block '<S43>/Constant2' : Unused code path elimination
//  Block '<S43>/Constant3' : Unused code path elimination
//  Block '<S43>/Constant5' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Wind_Turbine'
//  '<S1>'   : 'Wind_Turbine/Actuator Dynamics'
//  '<S2>'   : 'Wind_Turbine/Actuator Dynamics1'
//  '<S3>'   : 'Wind_Turbine/Apply Moments'
//  '<S4>'   : 'Wind_Turbine/Asynchronous Machine pu Units'
//  '<S5>'   : 'Wind_Turbine/B_Gen'
//  '<S6>'   : 'Wind_Turbine/Blade Pitch Sensing'
//  '<S7>'   : 'Wind_Turbine/Brakes'
//  '<S8>'   : 'Wind_Turbine/Cylinder'
//  '<S9>'   : 'Wind_Turbine/Cylinder1'
//  '<S10>'  : 'Wind_Turbine/Cylinder2'
//  '<S11>'  : 'Wind_Turbine/Geometry'
//  '<S12>'  : 'Wind_Turbine/Geometry1'
//  '<S13>'  : 'Wind_Turbine/Geometry2'
//  '<S14>'  : 'Wind_Turbine/Grid1'
//  '<S15>'  : 'Wind_Turbine/Hydraulic'
//  '<S16>'  : 'Wind_Turbine/Ideal Motor'
//  '<S17>'  : 'Wind_Turbine/Inputs1'
//  '<S18>'  : 'Wind_Turbine/Lag Pitch'
//  '<S19>'  : 'Wind_Turbine/Lag Rotor Spd'
//  '<S20>'  : 'Wind_Turbine/Pitch Controller1'
//  '<S21>'  : 'Wind_Turbine/Rev RB1'
//  '<S22>'  : 'Wind_Turbine/Rev RB2'
//  '<S23>'  : 'Wind_Turbine/Rev RB3'
//  '<S24>'  : 'Wind_Turbine/Rod'
//  '<S25>'  : 'Wind_Turbine/Rod1'
//  '<S26>'  : 'Wind_Turbine/Rod2'
//  '<S27>'  : 'Wind_Turbine/Rotational Simscape Intf'
//  '<S28>'  : 'Wind_Turbine/Rotational Simscape Intf1'
//  '<S29>'  : 'Wind_Turbine/Rotor'
//  '<S30>'  : 'Wind_Turbine/Sensing'
//  '<S31>'  : 'Wind_Turbine/Simulink-PS Converter'
//  '<S32>'  : 'Wind_Turbine/Simulink-PS Converter1'
//  '<S33>'  : 'Wind_Turbine/Simulink-PS Converter2'
//  '<S34>'  : 'Wind_Turbine/Solver Configuration'
//  '<S35>'  : 'Wind_Turbine/Speed Sensor'
//  '<S36>'  : 'Wind_Turbine/Torque Sensor'
//  '<S37>'  : 'Wind_Turbine/Torque Actuator'
//  '<S38>'  : 'Wind_Turbine/Transformer'
//  '<S39>'  : 'Wind_Turbine/Translational Simscape Intf'
//  '<S40>'  : 'Wind_Turbine/Translational Simscape Intf1'
//  '<S41>'  : 'Wind_Turbine/Translational Simscape Intf2'
//  '<S42>'  : 'Wind_Turbine/Trip Breaker1'
//  '<S43>'  : 'Wind_Turbine/Trip Breaker2'
//  '<S44>'  : 'Wind_Turbine/Turbine State Machine'
//  '<S45>'  : 'Wind_Turbine/Wind Input'
//  '<S46>'  : 'Wind_Turbine/Yaw Controller1'
//  '<S47>'  : 'Wind_Turbine/Yaw Ring'
//  '<S48>'  : 'Wind_Turbine/mGrid'
//  '<S49>'  : 'Wind_Turbine/modulus 2*pi'
//  '<S50>'  : 'Wind_Turbine/powergui'
//  '<S51>'  : 'Wind_Turbine/pu to MW//MVar'
//  '<S52>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model'
//  '<S53>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Measurements'
//  '<S54>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Mechanical model'
//  '<S55>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame '
//  '<S56>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/abc2dq'
//  '<S57>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/dq2abc'
//  '<S58>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)'
//  '<S59>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)'
//  '<S60>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor'
//  '<S61>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator'
//  '<S62>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque'
//  '<S63>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation'
//  '<S64>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi'
//  '<S65>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad'
//  '<S66>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L'
//  '<S67>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant'
//  '<S68>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd'
//  '<S69>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2'
//  '<S70>'  : 'Wind_Turbine/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr'
//  '<S71>'  : 'Wind_Turbine/B_Gen/Mode I'
//  '<S72>'  : 'Wind_Turbine/B_Gen/Mode V'
//  '<S73>'  : 'Wind_Turbine/B_Gen/Model'
//  '<S74>'  : 'Wind_Turbine/B_Gen/Model/I A:'
//  '<S75>'  : 'Wind_Turbine/B_Gen/Model/I B:'
//  '<S76>'  : 'Wind_Turbine/B_Gen/Model/I C:'
//  '<S77>'  : 'Wind_Turbine/B_Gen/Model/U A:'
//  '<S78>'  : 'Wind_Turbine/B_Gen/Model/U B:'
//  '<S79>'  : 'Wind_Turbine/B_Gen/Model/U C:'
//  '<S80>'  : 'Wind_Turbine/B_Gen/Model/I A:/Model'
//  '<S81>'  : 'Wind_Turbine/B_Gen/Model/I B:/Model'
//  '<S82>'  : 'Wind_Turbine/B_Gen/Model/I C:/Model'
//  '<S83>'  : 'Wind_Turbine/B_Gen/Model/U A:/Model'
//  '<S84>'  : 'Wind_Turbine/B_Gen/Model/U B:/Model'
//  '<S85>'  : 'Wind_Turbine/B_Gen/Model/U C:/Model'
//  '<S86>'  : 'Wind_Turbine/Brakes/Signal to Pressure'
//  '<S87>'  : 'Wind_Turbine/Brakes/Simulink-PS Converter'
//  '<S88>'  : 'Wind_Turbine/Brakes/Speed Sensor'
//  '<S89>'  : 'Wind_Turbine/Brakes/Simulink-PS Converter/EVAL_KEY'
//  '<S90>'  : 'Wind_Turbine/Brakes/Speed Sensor/PS-Simulink Converter'
//  '<S91>'  : 'Wind_Turbine/Brakes/Speed Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S92>'  : 'Wind_Turbine/Grid1/Model'
//  '<S93>'  : 'Wind_Turbine/Grid1/Model/Seq A Generation'
//  '<S94>'  : 'Wind_Turbine/Grid1/Model/Seq B Generation'
//  '<S95>'  : 'Wind_Turbine/Grid1/Model/Stair Generator'
//  '<S96>'  : 'Wind_Turbine/Grid1/Model/Variation SubSystem'
//  '<S97>'  : 'Wind_Turbine/Grid1/Model/Stair Generator/Model'
//  '<S98>'  : 'Wind_Turbine/Hydraulic/Actuator_1'
//  '<S99>'  : 'Wind_Turbine/Hydraulic/Actuator_2'
//  '<S100>' : 'Wind_Turbine/Hydraulic/Actuator_3'
//  '<S101>' : 'Wind_Turbine/Hydraulic/Restructure Signal'
//  '<S102>' : 'Wind_Turbine/Hydraulic/Actuator_1/EM Logic'
//  '<S103>' : 'Wind_Turbine/Hydraulic/Actuator_1/Flow Rate Sensor'
//  '<S104>' : 'Wind_Turbine/Hydraulic/Actuator_1/Ideal Proportional'
//  '<S105>' : 'Wind_Turbine/Hydraulic/Actuator_1/Position Sensor'
//  '<S106>' : 'Wind_Turbine/Hydraulic/Actuator_1/Sense Force'
//  '<S107>' : 'Wind_Turbine/Hydraulic/Actuator_1/Simulink-PS Converter'
//  '<S108>' : 'Wind_Turbine/Hydraulic/Actuator_1/Subsystem'
//  '<S109>' : 'Wind_Turbine/Hydraulic/Actuator_1/Subsystem1'
//  '<S110>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Accumulator'
//  '<S111>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Return'
//  '<S112>' : 'Wind_Turbine/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics'
//  '<S113>' : 'Wind_Turbine/Hydraulic/Actuator_1/Flow Rate Sensor/PS-Simulink Converter'
//  '<S114>' : 'Wind_Turbine/Hydraulic/Actuator_1/Flow Rate Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S115>' : 'Wind_Turbine/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter'
//  '<S116>' : 'Wind_Turbine/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter1'
//  '<S117>' : 'Wind_Turbine/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S118>' : 'Wind_Turbine/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter1/EVAL_KEY'
//  '<S119>' : 'Wind_Turbine/Hydraulic/Actuator_1/Sense Force/PS-Simulink Converter'
//  '<S120>' : 'Wind_Turbine/Hydraulic/Actuator_1/Sense Force/PS-Simulink Converter/EVAL_KEY'
//  '<S121>' : 'Wind_Turbine/Hydraulic/Actuator_1/Simulink-PS Converter/EVAL_KEY'
//  '<S122>' : 'Wind_Turbine/Hydraulic/Actuator_1/Subsystem/PS-Simulink Converter1'
//  '<S123>' : 'Wind_Turbine/Hydraulic/Actuator_1/Subsystem/PS-Simulink Converter1/EVAL_KEY'
//  '<S124>' : 'Wind_Turbine/Hydraulic/Actuator_1/Subsystem1/PS-Simulink Converter1'
//  '<S125>' : 'Wind_Turbine/Hydraulic/Actuator_1/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
//  '<S126>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Accumulator/Logic For Nominally Open'
//  '<S127>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Accumulator/Simulink-PS Converter'
//  '<S128>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Accumulator/Simulink-PS Converter/EVAL_KEY'
//  '<S129>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Return/Logic For Nominally Open'
//  '<S130>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Return/Simulink-PS Converter'
//  '<S131>' : 'Wind_Turbine/Hydraulic/Actuator_1/Valve Return/Simulink-PS Converter/EVAL_KEY'
//  '<S132>' : 'Wind_Turbine/Hydraulic/Actuator_2/EM Logic'
//  '<S133>' : 'Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor'
//  '<S134>' : 'Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional'
//  '<S135>' : 'Wind_Turbine/Hydraulic/Actuator_2/Position Sensor'
//  '<S136>' : 'Wind_Turbine/Hydraulic/Actuator_2/Sense Force'
//  '<S137>' : 'Wind_Turbine/Hydraulic/Actuator_2/Simulink-PS Converter'
//  '<S138>' : 'Wind_Turbine/Hydraulic/Actuator_2/Subsystem'
//  '<S139>' : 'Wind_Turbine/Hydraulic/Actuator_2/Subsystem1'
//  '<S140>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator'
//  '<S141>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Return'
//  '<S142>' : 'Wind_Turbine/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics'
//  '<S143>' : 'Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor/PS-Simulink Converter'
//  '<S144>' : 'Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S145>' : 'Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter'
//  '<S146>' : 'Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter1'
//  '<S147>' : 'Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S148>' : 'Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter1/EVAL_KEY'
//  '<S149>' : 'Wind_Turbine/Hydraulic/Actuator_2/Sense Force/PS-Simulink Converter'
//  '<S150>' : 'Wind_Turbine/Hydraulic/Actuator_2/Sense Force/PS-Simulink Converter/EVAL_KEY'
//  '<S151>' : 'Wind_Turbine/Hydraulic/Actuator_2/Simulink-PS Converter/EVAL_KEY'
//  '<S152>' : 'Wind_Turbine/Hydraulic/Actuator_2/Subsystem/PS-Simulink Converter1'
//  '<S153>' : 'Wind_Turbine/Hydraulic/Actuator_2/Subsystem/PS-Simulink Converter1/EVAL_KEY'
//  '<S154>' : 'Wind_Turbine/Hydraulic/Actuator_2/Subsystem1/PS-Simulink Converter1'
//  '<S155>' : 'Wind_Turbine/Hydraulic/Actuator_2/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
//  '<S156>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open'
//  '<S157>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Simulink-PS Converter'
//  '<S158>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Simulink-PS Converter/EVAL_KEY'
//  '<S159>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open'
//  '<S160>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Simulink-PS Converter'
//  '<S161>' : 'Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Simulink-PS Converter/EVAL_KEY'
//  '<S162>' : 'Wind_Turbine/Hydraulic/Actuator_3/EM Logic'
//  '<S163>' : 'Wind_Turbine/Hydraulic/Actuator_3/Flow Rate Sensor'
//  '<S164>' : 'Wind_Turbine/Hydraulic/Actuator_3/Ideal Proportional'
//  '<S165>' : 'Wind_Turbine/Hydraulic/Actuator_3/Position Sensor'
//  '<S166>' : 'Wind_Turbine/Hydraulic/Actuator_3/Sense Force'
//  '<S167>' : 'Wind_Turbine/Hydraulic/Actuator_3/Simulink-PS Converter'
//  '<S168>' : 'Wind_Turbine/Hydraulic/Actuator_3/Subsystem'
//  '<S169>' : 'Wind_Turbine/Hydraulic/Actuator_3/Subsystem1'
//  '<S170>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Accumulator'
//  '<S171>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Return'
//  '<S172>' : 'Wind_Turbine/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics'
//  '<S173>' : 'Wind_Turbine/Hydraulic/Actuator_3/Flow Rate Sensor/PS-Simulink Converter'
//  '<S174>' : 'Wind_Turbine/Hydraulic/Actuator_3/Flow Rate Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S175>' : 'Wind_Turbine/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter'
//  '<S176>' : 'Wind_Turbine/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter1'
//  '<S177>' : 'Wind_Turbine/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S178>' : 'Wind_Turbine/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter1/EVAL_KEY'
//  '<S179>' : 'Wind_Turbine/Hydraulic/Actuator_3/Sense Force/PS-Simulink Converter'
//  '<S180>' : 'Wind_Turbine/Hydraulic/Actuator_3/Sense Force/PS-Simulink Converter/EVAL_KEY'
//  '<S181>' : 'Wind_Turbine/Hydraulic/Actuator_3/Simulink-PS Converter/EVAL_KEY'
//  '<S182>' : 'Wind_Turbine/Hydraulic/Actuator_3/Subsystem/PS-Simulink Converter1'
//  '<S183>' : 'Wind_Turbine/Hydraulic/Actuator_3/Subsystem/PS-Simulink Converter1/EVAL_KEY'
//  '<S184>' : 'Wind_Turbine/Hydraulic/Actuator_3/Subsystem1/PS-Simulink Converter1'
//  '<S185>' : 'Wind_Turbine/Hydraulic/Actuator_3/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
//  '<S186>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Accumulator/Logic For Nominally Open'
//  '<S187>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Accumulator/Simulink-PS Converter'
//  '<S188>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Accumulator/Simulink-PS Converter/EVAL_KEY'
//  '<S189>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Return/Logic For Nominally Open'
//  '<S190>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Return/Simulink-PS Converter'
//  '<S191>' : 'Wind_Turbine/Hydraulic/Actuator_3/Valve Return/Simulink-PS Converter/EVAL_KEY'
//  '<S192>' : 'Wind_Turbine/Ideal Motor/Actuator Dynamics'
//  '<S193>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1'
//  '<S194>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2'
//  '<S195>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3'
//  '<S196>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4'
//  '<S197>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/PS-Simulink Converter'
//  '<S198>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/PS-Simulink Converter1'
//  '<S199>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator'
//  '<S200>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox'
//  '<S201>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/PS-Simulink Converter/EVAL_KEY'
//  '<S202>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/PS-Simulink Converter1/EVAL_KEY'
//  '<S203>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Simulink-PS Converter'
//  '<S204>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Simulink-PS Converter/EVAL_KEY'
//  '<S205>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/PS-Simulink Converter'
//  '<S206>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/PS-Simulink Converter1'
//  '<S207>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator'
//  '<S208>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox'
//  '<S209>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/PS-Simulink Converter/EVAL_KEY'
//  '<S210>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/PS-Simulink Converter1/EVAL_KEY'
//  '<S211>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Simulink-PS Converter'
//  '<S212>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Simulink-PS Converter/EVAL_KEY'
//  '<S213>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/PS-Simulink Converter'
//  '<S214>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/PS-Simulink Converter1'
//  '<S215>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator'
//  '<S216>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox'
//  '<S217>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/PS-Simulink Converter/EVAL_KEY'
//  '<S218>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/PS-Simulink Converter1/EVAL_KEY'
//  '<S219>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Simulink-PS Converter'
//  '<S220>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Simulink-PS Converter/EVAL_KEY'
//  '<S221>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/PS-Simulink Converter'
//  '<S222>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/PS-Simulink Converter1'
//  '<S223>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator'
//  '<S224>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox'
//  '<S225>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/PS-Simulink Converter/EVAL_KEY'
//  '<S226>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/PS-Simulink Converter1/EVAL_KEY'
//  '<S227>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Simulink-PS Converter'
//  '<S228>' : 'Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Simulink-PS Converter/EVAL_KEY'
//  '<S229>' : 'Wind_Turbine/Pitch Controller1/Actuator Controller'
//  '<S230>' : 'Wind_Turbine/Pitch Controller1/Determine Pitch Command'
//  '<S231>' : 'Wind_Turbine/Pitch Controller1/Actuator Controller/PI Controller'
//  '<S232>' : 'Wind_Turbine/Pitch Controller1/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0'
//  '<S233>' : 'Wind_Turbine/Pitch Controller1/Determine Pitch Command/Determine Desired Angle of Attack'
//  '<S234>' : 'Wind_Turbine/Pitch Controller1/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed'
//  '<S235>' : 'Wind_Turbine/Rev RB1/PS-Simulink Converter'
//  '<S236>' : 'Wind_Turbine/Rev RB1/PS-Simulink Converter1'
//  '<S237>' : 'Wind_Turbine/Rev RB1/PS-Simulink Converter2'
//  '<S238>' : 'Wind_Turbine/Rev RB1/PS-Simulink Converter/EVAL_KEY'
//  '<S239>' : 'Wind_Turbine/Rev RB1/PS-Simulink Converter1/EVAL_KEY'
//  '<S240>' : 'Wind_Turbine/Rev RB1/PS-Simulink Converter2/EVAL_KEY'
//  '<S241>' : 'Wind_Turbine/Rev RB2/PS-Simulink Converter'
//  '<S242>' : 'Wind_Turbine/Rev RB2/PS-Simulink Converter1'
//  '<S243>' : 'Wind_Turbine/Rev RB2/PS-Simulink Converter2'
//  '<S244>' : 'Wind_Turbine/Rev RB2/PS-Simulink Converter/EVAL_KEY'
//  '<S245>' : 'Wind_Turbine/Rev RB2/PS-Simulink Converter1/EVAL_KEY'
//  '<S246>' : 'Wind_Turbine/Rev RB2/PS-Simulink Converter2/EVAL_KEY'
//  '<S247>' : 'Wind_Turbine/Rev RB3/PS-Simulink Converter'
//  '<S248>' : 'Wind_Turbine/Rev RB3/PS-Simulink Converter1'
//  '<S249>' : 'Wind_Turbine/Rev RB3/PS-Simulink Converter2'
//  '<S250>' : 'Wind_Turbine/Rev RB3/PS-Simulink Converter/EVAL_KEY'
//  '<S251>' : 'Wind_Turbine/Rev RB3/PS-Simulink Converter1/EVAL_KEY'
//  '<S252>' : 'Wind_Turbine/Rev RB3/PS-Simulink Converter2/EVAL_KEY'
//  '<S253>' : 'Wind_Turbine/Sensing/PS-Simulink Converter'
//  '<S254>' : 'Wind_Turbine/Sensing/PS-Simulink Converter1'
//  '<S255>' : 'Wind_Turbine/Sensing/PS-Simulink Converter/EVAL_KEY'
//  '<S256>' : 'Wind_Turbine/Sensing/PS-Simulink Converter1/EVAL_KEY'
//  '<S257>' : 'Wind_Turbine/Simulink-PS Converter/EVAL_KEY'
//  '<S258>' : 'Wind_Turbine/Simulink-PS Converter1/EVAL_KEY'
//  '<S259>' : 'Wind_Turbine/Simulink-PS Converter2/EVAL_KEY'
//  '<S260>' : 'Wind_Turbine/Solver Configuration/EVAL_KEY'
//  '<S261>' : 'Wind_Turbine/Speed Sensor/PS-Simulink Converter'
//  '<S262>' : 'Wind_Turbine/Speed Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S263>' : 'Wind_Turbine/Torque Sensor/PS-Simulink Converter'
//  '<S264>' : 'Wind_Turbine/Torque Sensor/PS-Simulink Converter/EVAL_KEY'
//  '<S265>' : 'Wind_Turbine/Torque Actuator/Simulink-PS Converter'
//  '<S266>' : 'Wind_Turbine/Torque Actuator/Simulink-PS Converter/EVAL_KEY'
//  '<S267>' : 'Wind_Turbine/Transformer/Model'
//  '<S268>' : 'Wind_Turbine/Transformer/Model/Linear'
//  '<S269>' : 'Wind_Turbine/Transformer/Model/Linear1'
//  '<S270>' : 'Wind_Turbine/Transformer/Model/Linear2'
//  '<S271>' : 'Wind_Turbine/Trip Breaker1/Breaker A'
//  '<S272>' : 'Wind_Turbine/Trip Breaker1/Breaker B'
//  '<S273>' : 'Wind_Turbine/Trip Breaker1/Breaker C'
//  '<S274>' : 'Wind_Turbine/Trip Breaker1/Stair Generator'
//  '<S275>' : 'Wind_Turbine/Trip Breaker1/Breaker A/Model'
//  '<S276>' : 'Wind_Turbine/Trip Breaker1/Breaker A/Model/Timer'
//  '<S277>' : 'Wind_Turbine/Trip Breaker1/Breaker B/Model'
//  '<S278>' : 'Wind_Turbine/Trip Breaker1/Breaker B/Model/Timer'
//  '<S279>' : 'Wind_Turbine/Trip Breaker1/Breaker C/Model'
//  '<S280>' : 'Wind_Turbine/Trip Breaker1/Breaker C/Model/Timer'
//  '<S281>' : 'Wind_Turbine/Trip Breaker1/Stair Generator/Model'
//  '<S282>' : 'Wind_Turbine/Trip Breaker2/Breaker A'
//  '<S283>' : 'Wind_Turbine/Trip Breaker2/Breaker B'
//  '<S284>' : 'Wind_Turbine/Trip Breaker2/Breaker C'
//  '<S285>' : 'Wind_Turbine/Trip Breaker2/Stair Generator'
//  '<S286>' : 'Wind_Turbine/Trip Breaker2/Breaker A/Model'
//  '<S287>' : 'Wind_Turbine/Trip Breaker2/Breaker A/Model/Timer'
//  '<S288>' : 'Wind_Turbine/Trip Breaker2/Breaker B/Model'
//  '<S289>' : 'Wind_Turbine/Trip Breaker2/Breaker B/Model/Timer'
//  '<S290>' : 'Wind_Turbine/Trip Breaker2/Breaker C/Model'
//  '<S291>' : 'Wind_Turbine/Trip Breaker2/Breaker C/Model/Timer'
//  '<S292>' : 'Wind_Turbine/Trip Breaker2/Stair Generator/Model'
//  '<S293>' : 'Wind_Turbine/Yaw Controller1/PI Controller Nacelle Yaw'
//  '<S294>' : 'Wind_Turbine/Yaw Controller1/PI Controller Nacelle Yaw Rate'
//  '<S295>' : 'Wind_Turbine/mGrid/Mode I'
//  '<S296>' : 'Wind_Turbine/mGrid/Mode V'
//  '<S297>' : 'Wind_Turbine/mGrid/Model'
//  '<S298>' : 'Wind_Turbine/mGrid/Model/U A:'
//  '<S299>' : 'Wind_Turbine/mGrid/Model/U B:'
//  '<S300>' : 'Wind_Turbine/mGrid/Model/U C:'
//  '<S301>' : 'Wind_Turbine/mGrid/Model/U A:/Model'
//  '<S302>' : 'Wind_Turbine/mGrid/Model/U B:/Model'
//  '<S303>' : 'Wind_Turbine/mGrid/Model/U C:/Model'
//  '<S304>' : 'Wind_Turbine/powergui/EquivalentModel1'
//  '<S305>' : 'Wind_Turbine/powergui/EquivalentModel1/Gates'
//  '<S306>' : 'Wind_Turbine/powergui/EquivalentModel1/Sources'
//  '<S307>' : 'Wind_Turbine/powergui/EquivalentModel1/Yout'
//  '<S308>' : 'Wind_Turbine/powergui/EquivalentModel1/conversion'
//  '<S309>' : 'Wind_Turbine/powergui/EquivalentModel1/conversion '
//  '<S310>' : 'Wind_Turbine/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)'
//  '<S311>' : 'Wind_Turbine/pu to MW//MVar/Mean Value P'
//  '<S312>' : 'Wind_Turbine/pu to MW//MVar/Mean Value Q'

#endif                                 // RTW_HEADER_Wind_Turbine_h_

//
// File trailer for generated code.
//
// [EOF]
//
