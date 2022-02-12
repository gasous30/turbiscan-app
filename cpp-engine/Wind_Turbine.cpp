//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Wind_Turbine.cpp
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
#include "Wind_Turbine.h"
#include "Wind_Turbine_private.h"

// Named constants for Chart: '<Root>/Turbine State Machine'
const uint8_T IN_Brake = 1U;
const uint8_T IN_Generating = 2U;
const uint8_T IN_Park = 3U;
const uint8_T IN_Startup = 4U;
const real_T park_speed = 5.0;

// Continuous states
X rtX;

// Block signals and states (default storage)
DW rtDW;

// Mass Matrices
MassMatrix rtMassMatrix;

// Real-time model
RT_MODEL rtM_ = RT_MODEL();
RT_MODEL *const rtM = &rtM_;

// Lookup Binary Search Utility BINARYSEARCH_real_T
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  // Find the location of current input value in the data table.
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    // Less than or equal to the smallest point in the table.
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    // Greater than or equal to the largest point in the table.
    *piLeft = iHi;
  } else {
    uint32_T i;

    // Do a binary search.
    while (( *piRght - *piLeft ) > 1U ) {
      // Get the average of the left and right indices using to Floor rounding.
      i = (*piLeft + *piRght) >> 1;

      // Move either the right index or the left index so that
      //  LeftDataPoint <= CurrentValue < RightDataPoint
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

// Lookup Utility LookUp_real_T_real_T
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_pbinlx(real_T u0, const real_T bp0[], const real_T table[],
                    uint32_T prevIndex[], uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T bpIdx;

  // Column-major Lookup 1-D
  // Search method: 'binary'
  // Use previous index: 'on'
  // Interpolation method: 'Linear point-slope'
  // Extrapolation method: 'Linear'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Linear'
  // Use previous index: 'on'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T found;
    uint32_T iLeft;
    uint32_T iRght;

    // Binary Search using Previous Index
    bpIdx = prevIndex[0U];
    iLeft = 0U;
    iRght = maxIndex;
    found = 0U;
    while (found == 0U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx - 1U;
        bpIdx = ((bpIdx + iLeft) - 1U) >> 1U;
      } else if (u0 < bp0[bpIdx + 1U]) {
        found = 1U;
      } else {
        iLeft = bpIdx + 1U;
        bpIdx = ((bpIdx + iRght) + 1U) >> 1U;
      }
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  prevIndex[0U] = bpIdx;

  // Column-major Interpolation 1-D
  // Interpolation method: 'Linear point-slope'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Overflow mode: 'wrapping'

  yL_0d0 = table[bpIdx];
  return (table[bpIdx + 1U] - yL_0d0) * frac + yL_0d0;
}

// Projection for root system: '<Root>'
void Wind_Turbine_projection(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  real_T tmp_1[56];
  real_T tmp_6[20];
  real_T tmp_4[12];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_tmp;
  int32_T tmp_3;
  int_T tmp_2[15];
  int_T tmp_7[6];
  int_T tmp_5[4];
  boolean_T tmp;
  boolean_T tmp_0;

  // Projection for SimscapeExecutionBlock: '<S260>/STATE_1' incorporates:
  //   SimscapeExecutionBlock: '<S260>/STATE_2'
  //   SimscapeExecutionBlock: '<S260>/STATE_7'

  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time_tmp = rtM->Timing.t[0];
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 28;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineRevolute_Joint1Rzq[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  tmp = rtmIsMajorTimeStep(rtM);
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_2[0] = 0;
  tmp_1[0] = rtDW.INTERNAL_9_1_1[0];
  tmp_1[1] = rtDW.INTERNAL_9_1_1[1];
  tmp_1[2] = rtDW.INTERNAL_9_1_1[2];
  tmp_1[3] = rtDW.INTERNAL_9_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = rtDW.INTERNAL_6_1_1[0];
  tmp_1[5] = rtDW.INTERNAL_6_1_1[1];
  tmp_1[6] = rtDW.INTERNAL_6_1_1[2];
  tmp_1[7] = rtDW.INTERNAL_6_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = rtDW.INTERNAL_8_1_1[0];
  tmp_1[9] = rtDW.INTERNAL_8_1_1[1];
  tmp_1[10] = rtDW.INTERNAL_8_1_1[2];
  tmp_1[11] = rtDW.INTERNAL_8_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = rtDW.INTERNAL_13_1_1[0];
  tmp_1[13] = rtDW.INTERNAL_13_1_1[1];
  tmp_1[14] = rtDW.INTERNAL_13_1_1[2];
  tmp_1[15] = rtDW.INTERNAL_13_1_1[3];
  tmp_2[4] = 16;
  tmp_1[16] = rtDW.INTERNAL_12_1_1[0];
  tmp_1[17] = rtDW.INTERNAL_12_1_1[1];
  tmp_1[18] = rtDW.INTERNAL_12_1_1[2];
  tmp_1[19] = rtDW.INTERNAL_12_1_1[3];
  tmp_2[5] = 20;
  tmp_1[20] = rtDW.INTERNAL_2_1_1[0];
  tmp_1[21] = rtDW.INTERNAL_2_1_1[1];
  tmp_1[22] = rtDW.INTERNAL_2_1_1[2];
  tmp_1[23] = rtDW.INTERNAL_2_1_1[3];
  tmp_2[6] = 24;
  tmp_1[24] = rtDW.INTERNAL_3_1_1[0];
  tmp_1[25] = rtDW.INTERNAL_3_1_1[1];
  tmp_1[26] = rtDW.INTERNAL_3_1_1[2];
  tmp_1[27] = rtDW.INTERNAL_3_1_1[3];
  tmp_2[7] = 28;
  tmp_1[28] = rtDW.INTERNAL_1_1_1[0];
  tmp_1[29] = rtDW.INTERNAL_1_1_1[1];
  tmp_1[30] = rtDW.INTERNAL_1_1_1[2];
  tmp_1[31] = rtDW.INTERNAL_1_1_1[3];
  tmp_2[8] = 32;
  tmp_1[32] = rtDW.INTERNAL_2_2_1[0];
  tmp_1[33] = rtDW.INTERNAL_2_2_1[1];
  tmp_1[34] = rtDW.INTERNAL_2_2_1[2];
  tmp_1[35] = rtDW.INTERNAL_2_2_1[3];
  tmp_2[9] = 36;
  tmp_1[36] = rtDW.INTERNAL_3_2_1[0];
  tmp_1[37] = rtDW.INTERNAL_3_2_1[1];
  tmp_1[38] = rtDW.INTERNAL_3_2_1[2];
  tmp_1[39] = rtDW.INTERNAL_3_2_1[3];
  tmp_2[10] = 40;
  tmp_1[40] = rtDW.INTERNAL_1_2_1[0];
  tmp_1[41] = rtDW.INTERNAL_1_2_1[1];
  tmp_1[42] = rtDW.INTERNAL_1_2_1[2];
  tmp_1[43] = rtDW.INTERNAL_1_2_1[3];
  tmp_2[11] = 44;
  tmp_1[44] = rtDW.INTERNAL_2_3_1[0];
  tmp_1[45] = rtDW.INTERNAL_2_3_1[1];
  tmp_1[46] = rtDW.INTERNAL_2_3_1[2];
  tmp_1[47] = rtDW.INTERNAL_2_3_1[3];
  tmp_2[12] = 48;
  tmp_1[48] = rtDW.INTERNAL_3_3_1[0];
  tmp_1[49] = rtDW.INTERNAL_3_3_1[1];
  tmp_1[50] = rtDW.INTERNAL_3_3_1[2];
  tmp_1[51] = rtDW.INTERNAL_3_3_1[3];
  tmp_2[13] = 52;
  tmp_1[52] = rtDW.INTERNAL_1_3_1[0];
  tmp_1[53] = rtDW.INTERNAL_1_3_1[1];
  tmp_1[54] = rtDW.INTERNAL_1_3_1[2];
  tmp_1[55] = rtDW.INTERNAL_1_3_1[3];
  tmp_2[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_3 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_0) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  // End of Projection for SimscapeExecutionBlock: '<S260>/STATE_1'

  // Projection for SimscapeExecutionBlock: '<S260>/STATE_7'
  simulationData = (NeslSimulationData *)rtDW.STATE_7_SimData;
  time_0 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineBrakesInertiaw[0];
  simulationData->mData->mDiscStates.mN = 59;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_7_Discrete[0];
  simulationData->mData->mModeVector.mN = 16;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_7_Modes[0];
  tmp_0 = false;
  simulationData->mData->mFoundZcEvents = tmp_0;
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_5[0] = 0;
  tmp_4[0] = rtDW.INPUT_1_1_1[0];
  tmp_4[1] = rtDW.INPUT_1_1_1[1];
  tmp_4[2] = rtDW.INPUT_1_1_1[2];
  tmp_4[3] = rtDW.INPUT_1_1_1[3];
  tmp_5[1] = 4;
  tmp_4[4] = rtDW.INPUT_18_1_1[0];
  tmp_4[5] = rtDW.INPUT_18_1_1[1];
  tmp_4[6] = rtDW.INPUT_18_1_1[2];
  tmp_4[7] = rtDW.INPUT_18_1_1[3];
  tmp_5[2] = 8;
  tmp_4[8] = rtDW.INTERNAL_10_1_1[0];
  tmp_4[9] = rtDW.INTERNAL_10_1_1[1];
  tmp_4[10] = rtDW.INTERNAL_10_1_1[2];
  tmp_4[11] = rtDW.INTERNAL_10_1_1[3];
  tmp_5[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_4[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_5[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_7_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_7_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_3 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_0) {
      char *msg_0;
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(rtM, msg_0);
    }
  }

  // Projection for SimscapeExecutionBlock: '<S260>/STATE_2'
  simulationData = (NeslSimulationData *)rtDW.STATE_2_SimData;
  time_1 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineIdeal_MotorIdeal__n[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_2_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_2_Modes;
  tmp_0 = false;
  simulationData->mData->mFoundZcEvents = tmp_0;
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_7[0] = 0;
  tmp_6[0] = rtDW.INPUT_11_1_1[0];
  tmp_6[1] = rtDW.INPUT_11_1_1[1];
  tmp_6[2] = rtDW.INPUT_11_1_1[2];
  tmp_6[3] = rtDW.INPUT_11_1_1[3];
  tmp_7[1] = 4;
  tmp_6[4] = rtDW.INPUT_12_1_1[0];
  tmp_6[5] = rtDW.INPUT_12_1_1[1];
  tmp_6[6] = rtDW.INPUT_12_1_1[2];
  tmp_6[7] = rtDW.INPUT_12_1_1[3];
  tmp_7[2] = 8;
  tmp_6[8] = rtDW.INPUT_13_1_1[0];
  tmp_6[9] = rtDW.INPUT_13_1_1[1];
  tmp_6[10] = rtDW.INPUT_13_1_1[2];
  tmp_6[11] = rtDW.INPUT_13_1_1[3];
  tmp_7[3] = 12;
  tmp_6[12] = rtDW.INPUT_14_1_1[0];
  tmp_6[13] = rtDW.INPUT_14_1_1[1];
  tmp_6[14] = rtDW.INPUT_14_1_1[2];
  tmp_6[15] = rtDW.INPUT_14_1_1[3];
  tmp_7[4] = 16;
  tmp_6[16] = rtDW.INTERNAL_11_1_1[0];
  tmp_6[17] = rtDW.INTERNAL_11_1_1[1];
  tmp_6[18] = rtDW.INTERNAL_11_1_1[2];
  tmp_6[19] = rtDW.INTERNAL_11_1_1[3];
  tmp_7[5] = 20;
  simulationData->mData->mInputValues.mN = 20;
  simulationData->mData->mInputValues.mX = &tmp_6[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_7[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_2_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_2_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_3 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      char *msg_1;
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(rtM, msg_1);
    }
  }
}

// ForcingFunction for root system: '<Root>'
void Wind_Turbine_forcingfunction(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  NeuDiagnosticTree *diagnosticTree_3;
  NeuDiagnosticTree *diagnosticTree_4;
  XDot *_rtXdot;
  real_T tmp[56];
  real_T tmp_a[20];
  real_T tmp_4[16];
  real_T tmp_6[16];
  real_T tmp_8[16];
  real_T tmp_2[12];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_4;
  real_T time_tmp;
  int32_T tmp_1;
  int_T tmp_0[15];
  int_T tmp_b[6];
  int_T tmp_5[5];
  int_T tmp_7[5];
  int_T tmp_9[5];
  int_T tmp_3[4];
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot *) rtM->derivs);

  // ForcingFunction for Integrator: '<S2>/Integrator'
  _rtXdot->Integrator_CSTATE = rtDW.Sum_es;

  // ForcingFunction for Integrator: '<S1>/Integrator'
  _rtXdot->Integrator_CSTATE_m = rtDW.Sum_n;

  // ForcingFunction for SimscapeInputBlock: '<S260>/INPUT_18_1_1'
  _rtXdot->Wind_TurbineTorque_ActuatorSimu = (rtDW.Gain_f -
    rtX.Wind_TurbineTorque_ActuatorSimu) * 200.0;

  // ForcingFunction for SimscapeExecutionBlock: '<S260>/STATE_1' incorporates:
  //   SimscapeExecutionBlock: '<S260>/STATE_2'
  //   SimscapeExecutionBlock: '<S260>/STATE_3'
  //   SimscapeExecutionBlock: '<S260>/STATE_4'
  //   SimscapeExecutionBlock: '<S260>/STATE_5'
  //   SimscapeExecutionBlock: '<S260>/STATE_7'

  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time_tmp = rtM->Timing.t[0];
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 28;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineRevolute_Joint1Rzq[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes;
  lsat = false;
  simulationData->mData->mFoundZcEvents = lsat;
  lsat = rtmIsMajorTimeStep(rtM);
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_0[0] = 0;
  tmp[0] = rtDW.INTERNAL_9_1_1[0];
  tmp[1] = rtDW.INTERNAL_9_1_1[1];
  tmp[2] = rtDW.INTERNAL_9_1_1[2];
  tmp[3] = rtDW.INTERNAL_9_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = rtDW.INTERNAL_6_1_1[0];
  tmp[5] = rtDW.INTERNAL_6_1_1[1];
  tmp[6] = rtDW.INTERNAL_6_1_1[2];
  tmp[7] = rtDW.INTERNAL_6_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = rtDW.INTERNAL_8_1_1[0];
  tmp[9] = rtDW.INTERNAL_8_1_1[1];
  tmp[10] = rtDW.INTERNAL_8_1_1[2];
  tmp[11] = rtDW.INTERNAL_8_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = rtDW.INTERNAL_13_1_1[0];
  tmp[13] = rtDW.INTERNAL_13_1_1[1];
  tmp[14] = rtDW.INTERNAL_13_1_1[2];
  tmp[15] = rtDW.INTERNAL_13_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = rtDW.INTERNAL_12_1_1[0];
  tmp[17] = rtDW.INTERNAL_12_1_1[1];
  tmp[18] = rtDW.INTERNAL_12_1_1[2];
  tmp[19] = rtDW.INTERNAL_12_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = rtDW.INTERNAL_2_1_1[0];
  tmp[21] = rtDW.INTERNAL_2_1_1[1];
  tmp[22] = rtDW.INTERNAL_2_1_1[2];
  tmp[23] = rtDW.INTERNAL_2_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = rtDW.INTERNAL_3_1_1[0];
  tmp[25] = rtDW.INTERNAL_3_1_1[1];
  tmp[26] = rtDW.INTERNAL_3_1_1[2];
  tmp[27] = rtDW.INTERNAL_3_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = rtDW.INTERNAL_1_1_1[0];
  tmp[29] = rtDW.INTERNAL_1_1_1[1];
  tmp[30] = rtDW.INTERNAL_1_1_1[2];
  tmp[31] = rtDW.INTERNAL_1_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = rtDW.INTERNAL_2_2_1[0];
  tmp[33] = rtDW.INTERNAL_2_2_1[1];
  tmp[34] = rtDW.INTERNAL_2_2_1[2];
  tmp[35] = rtDW.INTERNAL_2_2_1[3];
  tmp_0[9] = 36;
  tmp[36] = rtDW.INTERNAL_3_2_1[0];
  tmp[37] = rtDW.INTERNAL_3_2_1[1];
  tmp[38] = rtDW.INTERNAL_3_2_1[2];
  tmp[39] = rtDW.INTERNAL_3_2_1[3];
  tmp_0[10] = 40;
  tmp[40] = rtDW.INTERNAL_1_2_1[0];
  tmp[41] = rtDW.INTERNAL_1_2_1[1];
  tmp[42] = rtDW.INTERNAL_1_2_1[2];
  tmp[43] = rtDW.INTERNAL_1_2_1[3];
  tmp_0[11] = 44;
  tmp[44] = rtDW.INTERNAL_2_3_1[0];
  tmp[45] = rtDW.INTERNAL_2_3_1[1];
  tmp[46] = rtDW.INTERNAL_2_3_1[2];
  tmp[47] = rtDW.INTERNAL_2_3_1[3];
  tmp_0[12] = 48;
  tmp[48] = rtDW.INTERNAL_3_3_1[0];
  tmp[49] = rtDW.INTERNAL_3_3_1[1];
  tmp[50] = rtDW.INTERNAL_3_3_1[2];
  tmp[51] = rtDW.INTERNAL_3_3_1[3];
  tmp_0[13] = 52;
  tmp[52] = rtDW.INTERNAL_1_3_1[0];
  tmp[53] = rtDW.INTERNAL_1_3_1[1];
  tmp[54] = rtDW.INTERNAL_1_3_1[2];
  tmp[55] = rtDW.INTERNAL_1_3_1[3];
  tmp_0[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mDx.mN = 28;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineRevolute_Joint1Rzq[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  // End of ForcingFunction for SimscapeExecutionBlock: '<S260>/STATE_1'

  // ForcingFunction for SimscapeInputBlock: '<S260>/INTERNAL_10_1_1'
  _rtXdot->Wind_TurbineoutputFiltered_2541 = (rtDW.OUTPUT_1_0[7] -
    rtX.Wind_TurbineoutputFiltered_2541) * 1000.0;

  // ForcingFunction for SimscapeExecutionBlock: '<S260>/STATE_7'
  simulationData = (NeslSimulationData *)rtDW.STATE_7_SimData;
  time_0 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineBrakesInertiaw[0];
  simulationData->mData->mDiscStates.mN = 59;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_7_Discrete[0];
  simulationData->mData->mModeVector.mN = 16;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_7_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_3[0] = 0;
  tmp_2[0] = rtDW.INPUT_1_1_1[0];
  tmp_2[1] = rtDW.INPUT_1_1_1[1];
  tmp_2[2] = rtDW.INPUT_1_1_1[2];
  tmp_2[3] = rtDW.INPUT_1_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = rtDW.INPUT_18_1_1[0];
  tmp_2[5] = rtDW.INPUT_18_1_1[1];
  tmp_2[6] = rtDW.INPUT_18_1_1[2];
  tmp_2[7] = rtDW.INPUT_18_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = rtDW.INTERNAL_10_1_1[0];
  tmp_2[9] = rtDW.INTERNAL_10_1_1[1];
  tmp_2[10] = rtDW.INTERNAL_10_1_1[2];
  tmp_2[11] = rtDW.INTERNAL_10_1_1[3];
  tmp_3[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mDx.mN = 6;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineBrakesInertiaw[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_7_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_7_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_0;
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(rtM, msg_0);
    }
  }

  // ForcingFunction for Integrator: '<S112>/Integrator'
  _rtXdot->Integrator_CSTATE_e = rtDW.Sum_dg;

  // ForcingFunction for SimscapeExecutionBlock: '<S260>/STATE_5'
  simulationData = (NeslSimulationData *)rtDW.STATE_5_SimData;
  time_1 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_1[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_5_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_5_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_5[0] = 0;
  tmp_4[0] = rtDW.INPUT_2_1_1[0];
  tmp_4[1] = rtDW.INPUT_2_1_1[1];
  tmp_4[2] = rtDW.INPUT_2_1_1[2];
  tmp_4[3] = rtDW.INPUT_2_1_1[3];
  tmp_5[1] = 4;
  tmp_4[4] = rtDW.INPUT_3_1_1[0];
  tmp_4[5] = rtDW.INPUT_3_1_1[1];
  tmp_4[6] = rtDW.INPUT_3_1_1[2];
  tmp_4[7] = rtDW.INPUT_3_1_1[3];
  tmp_5[2] = 8;
  tmp_4[8] = rtDW.INPUT_4_1_1[0];
  tmp_4[9] = rtDW.INPUT_4_1_1[1];
  tmp_4[10] = rtDW.INPUT_4_1_1[2];
  tmp_4[11] = rtDW.INPUT_4_1_1[3];
  tmp_5[3] = 12;
  tmp_4[12] = rtDW.INTERNAL_4_1_1[0];
  tmp_4[13] = rtDW.INTERNAL_4_1_1[1];
  tmp_4[14] = rtDW.INTERNAL_4_1_1[2];
  tmp_4[15] = rtDW.INTERNAL_4_1_1[3];
  tmp_5[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_4[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_5[0];
  simulationData->mData->mDx.mN = 25;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineHydraulicActuator_1[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_5_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_5_Simulator,
    NESL_SIM_FORCINGFUNCTION, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_1;
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(rtM, msg_1);
    }
  }

  // ForcingFunction for Integrator: '<S142>/Integrator'
  _rtXdot->Integrator_CSTATE_n = rtDW.Sum_mo;

  // ForcingFunction for SimscapeExecutionBlock: '<S260>/STATE_4'
  simulationData = (NeslSimulationData *)rtDW.STATE_4_SimData;
  time_2 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_2[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_4_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_4_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_7[0] = 0;
  tmp_6[0] = rtDW.INPUT_5_1_1[0];
  tmp_6[1] = rtDW.INPUT_5_1_1[1];
  tmp_6[2] = rtDW.INPUT_5_1_1[2];
  tmp_6[3] = rtDW.INPUT_5_1_1[3];
  tmp_7[1] = 4;
  tmp_6[4] = rtDW.INPUT_6_1_1[0];
  tmp_6[5] = rtDW.INPUT_6_1_1[1];
  tmp_6[6] = rtDW.INPUT_6_1_1[2];
  tmp_6[7] = rtDW.INPUT_6_1_1[3];
  tmp_7[2] = 8;
  tmp_6[8] = rtDW.INPUT_7_1_1[0];
  tmp_6[9] = rtDW.INPUT_7_1_1[1];
  tmp_6[10] = rtDW.INPUT_7_1_1[2];
  tmp_6[11] = rtDW.INPUT_7_1_1[3];
  tmp_7[3] = 12;
  tmp_6[12] = rtDW.INTERNAL_5_1_1[0];
  tmp_6[13] = rtDW.INTERNAL_5_1_1[1];
  tmp_6[14] = rtDW.INTERNAL_5_1_1[2];
  tmp_6[15] = rtDW.INTERNAL_5_1_1[3];
  tmp_7[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_6[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_7[0];
  simulationData->mData->mDx.mN = 25;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineHydraulicActuator_2[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_4_DiagMgr;
  diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_4_Simulator,
    NESL_SIM_FORCINGFUNCTION, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_2;
      msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
      rtmSetErrorStatus(rtM, msg_2);
    }
  }

  // ForcingFunction for Integrator: '<S172>/Integrator'
  _rtXdot->Integrator_CSTATE_a = rtDW.Sum_mb;

  // ForcingFunction for SimscapeExecutionBlock: '<S260>/STATE_3'
  simulationData = (NeslSimulationData *)rtDW.STATE_3_SimData;
  time_3 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_3[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_3_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_3_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_9[0] = 0;
  tmp_8[0] = rtDW.INPUT_8_1_1[0];
  tmp_8[1] = rtDW.INPUT_8_1_1[1];
  tmp_8[2] = rtDW.INPUT_8_1_1[2];
  tmp_8[3] = rtDW.INPUT_8_1_1[3];
  tmp_9[1] = 4;
  tmp_8[4] = rtDW.INPUT_9_1_1[0];
  tmp_8[5] = rtDW.INPUT_9_1_1[1];
  tmp_8[6] = rtDW.INPUT_9_1_1[2];
  tmp_8[7] = rtDW.INPUT_9_1_1[3];
  tmp_9[2] = 8;
  tmp_8[8] = rtDW.INPUT_10_1_1[0];
  tmp_8[9] = rtDW.INPUT_10_1_1[1];
  tmp_8[10] = rtDW.INPUT_10_1_1[2];
  tmp_8[11] = rtDW.INPUT_10_1_1[3];
  tmp_9[3] = 12;
  tmp_8[12] = rtDW.INTERNAL_7_1_1[0];
  tmp_8[13] = rtDW.INTERNAL_7_1_1[1];
  tmp_8[14] = rtDW.INTERNAL_7_1_1[2];
  tmp_8[15] = rtDW.INTERNAL_7_1_1[3];
  tmp_9[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_8[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_9[0];
  simulationData->mData->mDx.mN = 25;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineHydraulicActuator_3[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_3_DiagMgr;
  diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_3_Simulator,
    NESL_SIM_FORCINGFUNCTION, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_3;
      msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
      rtmSetErrorStatus(rtM, msg_3);
    }
  }

  // ForcingFunction for Integrator: '<S64>/Integrator'
  _rtXdot->Integrator_CSTATE_g[0] = rtDW.wbase[0];
  _rtXdot->Integrator_CSTATE_g[1] = rtDW.wbase[1];
  _rtXdot->Integrator_CSTATE_g[2] = rtDW.wbase[2];
  _rtXdot->Integrator_CSTATE_g[3] = rtDW.wbase[3];

  // ForcingFunction for Enabled SubSystem: '<S58>/Saturation'
  if (rtDW.Saturation_MODE) {
    // ForcingFunction for Integrator: '<S67>/Integrator'
    _rtXdot->Integrator_CSTATE_o = rtDW.uTT1e6s;
  } else {
    ((XDot *) rtM->derivs)->Integrator_CSTATE_o = 0.0;
  }

  // End of ForcingFunction for SubSystem: '<S58>/Saturation'

  // ForcingFunction for Integrator: '<S59>/Integrator'
  _rtXdot->Integrator_CSTATE_n2[0] = rtDW.Gain4[0];
  _rtXdot->Integrator_CSTATE_n2[1] = rtDW.Gain4[1];

  // ForcingFunction for Integrator: '<S96>/Integrator'
  _rtXdot->Integrator_CSTATE_b = rtDW.Switch_p;

  // ForcingFunction for Integrator: '<S192>/Integrator'
  _rtXdot->Integrator_CSTATE_mt[0] = rtDW.Sum_f[0];
  _rtXdot->Integrator_CSTATE_mt[1] = rtDW.Sum_f[1];
  _rtXdot->Integrator_CSTATE_mt[2] = rtDW.Sum_f[2];
  _rtXdot->Integrator_CSTATE_mt[3] = rtDW.Sum_f[3];

  // ForcingFunction for SimscapeInputBlock: '<S260>/INPUT_11_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal_Ya = (rtDW.Gain_l[0] -
    rtX.Wind_TurbineIdeal_MotorIdeal_Ya) * 200.0;

  // ForcingFunction for SimscapeInputBlock: '<S260>/INPUT_12_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal__e = (rtDW.Gain_l[1] -
    rtX.Wind_TurbineIdeal_MotorIdeal__e) * 200.0;

  // ForcingFunction for SimscapeInputBlock: '<S260>/INPUT_13_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal__g = (rtDW.Gain_l[2] -
    rtX.Wind_TurbineIdeal_MotorIdeal__g) * 200.0;

  // ForcingFunction for SimscapeInputBlock: '<S260>/INPUT_14_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal__a = (rtDW.Gain_l[3] -
    rtX.Wind_TurbineIdeal_MotorIdeal__a) * 200.0;

  // ForcingFunction for SimscapeInputBlock: '<S260>/INTERNAL_11_1_1'
  _rtXdot->Wind_TurbineoutputFiltered_8434 = (rtDW.OUTPUT_1_0[8] -
    rtX.Wind_TurbineoutputFiltered_8434) * 1000.0;

  // ForcingFunction for SimscapeExecutionBlock: '<S260>/STATE_2'
  simulationData = (NeslSimulationData *)rtDW.STATE_2_SimData;
  time_4 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_4;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineIdeal_MotorIdeal__n[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_2_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_2_Modes;
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_b[0] = 0;
  tmp_a[0] = rtDW.INPUT_11_1_1[0];
  tmp_a[1] = rtDW.INPUT_11_1_1[1];
  tmp_a[2] = rtDW.INPUT_11_1_1[2];
  tmp_a[3] = rtDW.INPUT_11_1_1[3];
  tmp_b[1] = 4;
  tmp_a[4] = rtDW.INPUT_12_1_1[0];
  tmp_a[5] = rtDW.INPUT_12_1_1[1];
  tmp_a[6] = rtDW.INPUT_12_1_1[2];
  tmp_a[7] = rtDW.INPUT_12_1_1[3];
  tmp_b[2] = 8;
  tmp_a[8] = rtDW.INPUT_13_1_1[0];
  tmp_a[9] = rtDW.INPUT_13_1_1[1];
  tmp_a[10] = rtDW.INPUT_13_1_1[2];
  tmp_a[11] = rtDW.INPUT_13_1_1[3];
  tmp_b[3] = 12;
  tmp_a[12] = rtDW.INPUT_14_1_1[0];
  tmp_a[13] = rtDW.INPUT_14_1_1[1];
  tmp_a[14] = rtDW.INPUT_14_1_1[2];
  tmp_a[15] = rtDW.INPUT_14_1_1[3];
  tmp_b[4] = 16;
  tmp_a[16] = rtDW.INTERNAL_11_1_1[0];
  tmp_a[17] = rtDW.INTERNAL_11_1_1[1];
  tmp_a[18] = rtDW.INTERNAL_11_1_1[2];
  tmp_a[19] = rtDW.INTERNAL_11_1_1[3];
  tmp_b[5] = 20;
  simulationData->mData->mInputValues.mN = 20;
  simulationData->mData->mInputValues.mX = &tmp_a[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_b[0];
  simulationData->mData->mDx.mN = 6;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineIdeal_MotorIdeal__n[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_2_DiagMgr;
  diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_2_Simulator,
    NESL_SIM_FORCINGFUNCTION, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    lsat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (lsat) {
      char *msg_4;
      msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
      rtmSetErrorStatus(rtM, msg_4);
    }
  }

  // ForcingFunction for Integrator: '<S19>/Integrator'
  _rtXdot->Integrator_CSTATE_as = rtDW.Sum_ga;

  // ForcingFunction for Integrator: '<S18>/Integrator'
  _rtXdot->Integrator_CSTATE_gx = rtDW.Sum_l;

  // ForcingFunction for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[0] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[0] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[0] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[0] = rtDW.IntegralGain_o[0];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[0] = 0.0;
  }

  // ForcingFunction for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[0] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[0] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[0] > 0.0)) || (usat &&
       (rtDW.IntegralGain[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[0] = rtDW.IntegralGain[0];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[0] = 0.0;
  }

  // ForcingFunction for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[1] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[1] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[1] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[1] = rtDW.IntegralGain_o[1];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[1] = 0.0;
  }

  // ForcingFunction for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[1] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[1] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[1] > 0.0)) || (usat &&
       (rtDW.IntegralGain[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[1] = rtDW.IntegralGain[1];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[1] = 0.0;
  }

  // ForcingFunction for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[2] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[2] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[2] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[2] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[2] = rtDW.IntegralGain_o[2];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[2] = 0.0;
  }

  // ForcingFunction for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[2] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[2] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[2] > 0.0)) || (usat &&
       (rtDW.IntegralGain[2] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[2] = rtDW.IntegralGain[2];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[2] = 0.0;
  }

  // ForcingFunction for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[3] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[3] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[3] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[3] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[3] = rtDW.IntegralGain_o[3];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[3] = 0.0;
  }

  // ForcingFunction for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[3] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[3] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[3] > 0.0)) || (usat &&
       (rtDW.IntegralGain[3] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[3] = rtDW.IntegralGain[3];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[3] = 0.0;
  }

  // ForcingFunction for Integrator: '<S234>/Integrator'
  lsat = (rtX.Integrator_CSTATE_i <= -10.26);
  usat = (rtX.Integrator_CSTATE_i >= 10.26);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o4 > 0.0)) || (usat &&
       (rtDW.IntegralGain_o4 < 0.0))) {
    _rtXdot->Integrator_CSTATE_i = rtDW.IntegralGain_o4;
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_i = 0.0;
  }

  // End of ForcingFunction for Integrator: '<S234>/Integrator'

  // ForcingFunction for Integrator: '<S231>/Integrator'
  _rtXdot->Integrator_CSTATE_h[0] = rtDW.IntegralGain_oc[0];
  _rtXdot->Integrator_CSTATE_h[1] = rtDW.IntegralGain_oc[1];
  _rtXdot->Integrator_CSTATE_h[2] = rtDW.IntegralGain_oc[2];

  // ForcingFunction for Integrator: '<S54>/Rotor angle thetam'
  _rtXdot->Rotoranglethetam_CSTATE = rtDW.web_psb;

  // ForcingFunction for Integrator: '<S311>/integrator'
  _rtXdot->integrator_CSTATE = rtDW.putoMW;

  // ForcingFunction for Integrator: '<S312>/integrator'
  _rtXdot->integrator_CSTATE_f = rtDW.putoMvar;
}

// MassMatrix for root system: '<Root>'
void Wind_Turbine_massmatrix(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  real_T tmp_c[20];
  real_T tmp_1[16];
  real_T tmp_6[16];
  real_T tmp_9[16];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_tmp;
  real_T *tmp_3;
  real_T *tmp_4;
  real_T *tmp_8;
  real_T *tmp_b;
  real_T *tmp_e;
  int32_T tmp_5;
  int_T tmp_d[6];
  int_T tmp_2[5];
  int_T tmp_7[5];
  int_T tmp_a[5];
  boolean_T tmp;
  boolean_T tmp_0;

  // MassMatrix for SimscapeExecutionBlock: '<S260>/STATE_5' incorporates:
  //   SimscapeExecutionBlock: '<S260>/STATE_2'
  //   SimscapeExecutionBlock: '<S260>/STATE_3'
  //   SimscapeExecutionBlock: '<S260>/STATE_4'

  simulationData = (NeslSimulationData *)rtDW.STATE_5_SimData;
  time_tmp = rtM->Timing.t[0];
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_1[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_5_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_5_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  tmp = rtmIsMajorTimeStep(rtM);
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_2[0] = 0;
  tmp_1[0] = rtDW.INPUT_2_1_1[0];
  tmp_1[1] = rtDW.INPUT_2_1_1[1];
  tmp_1[2] = rtDW.INPUT_2_1_1[2];
  tmp_1[3] = rtDW.INPUT_2_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = rtDW.INPUT_3_1_1[0];
  tmp_1[5] = rtDW.INPUT_3_1_1[1];
  tmp_1[6] = rtDW.INPUT_3_1_1[2];
  tmp_1[7] = rtDW.INPUT_3_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = rtDW.INPUT_4_1_1[0];
  tmp_1[9] = rtDW.INPUT_4_1_1[1];
  tmp_1[10] = rtDW.INPUT_4_1_1[2];
  tmp_1[11] = rtDW.INPUT_4_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = rtDW.INTERNAL_4_1_1[0];
  tmp_1[13] = rtDW.INTERNAL_4_1_1[1];
  tmp_1[14] = rtDW.INTERNAL_4_1_1[2];
  tmp_1[15] = rtDW.INTERNAL_4_1_1[3];
  tmp_2[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  tmp_3 = rtMassMatrix.pr;
  tmp_4 = double_pointer_shift(tmp_3, rtDW.STATE_5_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 9;
  simulationData->mData->mMassMatrixPr.mX = tmp_4;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_5_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_5 = ne_simulator_method((NeslSimulator *)rtDW.STATE_5_Simulator,
    NESL_SIM_MASSMATRIX, simulationData, diagnosticManager);
  if (tmp_5 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_0) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  // End of MassMatrix for SimscapeExecutionBlock: '<S260>/STATE_5'

  // MassMatrix for SimscapeExecutionBlock: '<S260>/STATE_4'
  simulationData = (NeslSimulationData *)rtDW.STATE_4_SimData;
  time_0 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_2[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_4_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_4_Modes[0];
  tmp_0 = false;
  simulationData->mData->mFoundZcEvents = tmp_0;
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_7[0] = 0;
  tmp_6[0] = rtDW.INPUT_5_1_1[0];
  tmp_6[1] = rtDW.INPUT_5_1_1[1];
  tmp_6[2] = rtDW.INPUT_5_1_1[2];
  tmp_6[3] = rtDW.INPUT_5_1_1[3];
  tmp_7[1] = 4;
  tmp_6[4] = rtDW.INPUT_6_1_1[0];
  tmp_6[5] = rtDW.INPUT_6_1_1[1];
  tmp_6[6] = rtDW.INPUT_6_1_1[2];
  tmp_6[7] = rtDW.INPUT_6_1_1[3];
  tmp_7[2] = 8;
  tmp_6[8] = rtDW.INPUT_7_1_1[0];
  tmp_6[9] = rtDW.INPUT_7_1_1[1];
  tmp_6[10] = rtDW.INPUT_7_1_1[2];
  tmp_6[11] = rtDW.INPUT_7_1_1[3];
  tmp_7[3] = 12;
  tmp_6[12] = rtDW.INTERNAL_5_1_1[0];
  tmp_6[13] = rtDW.INTERNAL_5_1_1[1];
  tmp_6[14] = rtDW.INTERNAL_5_1_1[2];
  tmp_6[15] = rtDW.INTERNAL_5_1_1[3];
  tmp_7[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_6[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_7[0];
  tmp_8 = rtMassMatrix.pr;
  tmp_4 = double_pointer_shift(tmp_8, rtDW.STATE_4_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 9;
  simulationData->mData->mMassMatrixPr.mX = tmp_4;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_4_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_5 = ne_simulator_method((NeslSimulator *)rtDW.STATE_4_Simulator,
    NESL_SIM_MASSMATRIX, simulationData, diagnosticManager);
  if (tmp_5 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_0) {
      char *msg_0;
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(rtM, msg_0);
    }
  }

  // MassMatrix for SimscapeExecutionBlock: '<S260>/STATE_3'
  simulationData = (NeslSimulationData *)rtDW.STATE_3_SimData;
  time_1 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_3[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_3_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_3_Modes[0];
  tmp_0 = false;
  simulationData->mData->mFoundZcEvents = tmp_0;
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_a[0] = 0;
  tmp_9[0] = rtDW.INPUT_8_1_1[0];
  tmp_9[1] = rtDW.INPUT_8_1_1[1];
  tmp_9[2] = rtDW.INPUT_8_1_1[2];
  tmp_9[3] = rtDW.INPUT_8_1_1[3];
  tmp_a[1] = 4;
  tmp_9[4] = rtDW.INPUT_9_1_1[0];
  tmp_9[5] = rtDW.INPUT_9_1_1[1];
  tmp_9[6] = rtDW.INPUT_9_1_1[2];
  tmp_9[7] = rtDW.INPUT_9_1_1[3];
  tmp_a[2] = 8;
  tmp_9[8] = rtDW.INPUT_10_1_1[0];
  tmp_9[9] = rtDW.INPUT_10_1_1[1];
  tmp_9[10] = rtDW.INPUT_10_1_1[2];
  tmp_9[11] = rtDW.INPUT_10_1_1[3];
  tmp_a[3] = 12;
  tmp_9[12] = rtDW.INTERNAL_7_1_1[0];
  tmp_9[13] = rtDW.INTERNAL_7_1_1[1];
  tmp_9[14] = rtDW.INTERNAL_7_1_1[2];
  tmp_9[15] = rtDW.INTERNAL_7_1_1[3];
  tmp_a[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_9[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_a[0];
  tmp_b = rtMassMatrix.pr;
  tmp_4 = double_pointer_shift(tmp_b, rtDW.STATE_3_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 9;
  simulationData->mData->mMassMatrixPr.mX = tmp_4;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_3_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_5 = ne_simulator_method((NeslSimulator *)rtDW.STATE_3_Simulator,
    NESL_SIM_MASSMATRIX, simulationData, diagnosticManager);
  if (tmp_5 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_0) {
      char *msg_1;
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(rtM, msg_1);
    }
  }

  // MassMatrix for SimscapeExecutionBlock: '<S260>/STATE_2'
  simulationData = (NeslSimulationData *)rtDW.STATE_2_SimData;
  time_2 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineIdeal_MotorIdeal__n[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_2_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_2_Modes;
  tmp_0 = false;
  simulationData->mData->mFoundZcEvents = tmp_0;
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_d[0] = 0;
  tmp_c[0] = rtDW.INPUT_11_1_1[0];
  tmp_c[1] = rtDW.INPUT_11_1_1[1];
  tmp_c[2] = rtDW.INPUT_11_1_1[2];
  tmp_c[3] = rtDW.INPUT_11_1_1[3];
  tmp_d[1] = 4;
  tmp_c[4] = rtDW.INPUT_12_1_1[0];
  tmp_c[5] = rtDW.INPUT_12_1_1[1];
  tmp_c[6] = rtDW.INPUT_12_1_1[2];
  tmp_c[7] = rtDW.INPUT_12_1_1[3];
  tmp_d[2] = 8;
  tmp_c[8] = rtDW.INPUT_13_1_1[0];
  tmp_c[9] = rtDW.INPUT_13_1_1[1];
  tmp_c[10] = rtDW.INPUT_13_1_1[2];
  tmp_c[11] = rtDW.INPUT_13_1_1[3];
  tmp_d[3] = 12;
  tmp_c[12] = rtDW.INPUT_14_1_1[0];
  tmp_c[13] = rtDW.INPUT_14_1_1[1];
  tmp_c[14] = rtDW.INPUT_14_1_1[2];
  tmp_c[15] = rtDW.INPUT_14_1_1[3];
  tmp_d[4] = 16;
  tmp_c[16] = rtDW.INTERNAL_11_1_1[0];
  tmp_c[17] = rtDW.INTERNAL_11_1_1[1];
  tmp_c[18] = rtDW.INTERNAL_11_1_1[2];
  tmp_c[19] = rtDW.INTERNAL_11_1_1[3];
  tmp_d[5] = 20;
  simulationData->mData->mInputValues.mN = 20;
  simulationData->mData->mInputValues.mX = &tmp_c[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_d[0];
  tmp_e = rtMassMatrix.pr;
  tmp_4 = double_pointer_shift(tmp_e, rtDW.STATE_2_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 6;
  simulationData->mData->mMassMatrixPr.mX = tmp_4;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_2_DiagMgr;
  diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_5 = ne_simulator_method((NeslSimulator *)rtDW.STATE_2_Simulator,
    NESL_SIM_MASSMATRIX, simulationData, diagnosticManager);
  if (tmp_5 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      char *msg_2;
      msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
      rtmSetErrorStatus(rtM, msg_2);
    }
  }
}

void local_evaluateMassMatrix(RTWSolverInfo *si, real_T *Mdest )
{
  // Refresh global mass matrix
  Wind_Turbine_massmatrix();

  // Copy the mass matrix from system to the destination, if needed.
  if (Mdest != rtsiGetSolverMassMatrixPr(si)) {
    real_T *Msrc = rtsiGetSolverMassMatrixPr(si);
    int_T nzmax = rtsiGetSolverMassMatrixNzMax(si);
    (void) std::memcpy(Mdest, Msrc,
                       static_cast<uint_T>(nzmax)*sizeof(real_T));
  }
}

void local_evaluateFminusMv(RTWSolverInfo *si, const real_T *v, real_T *fminusMv
  )
{
  // Refresh forcing function
  rtsiSetdX(si,fminusMv);
  Wind_Turbine_forcingfunction();

  // Refresh global mass matrix
  Wind_Turbine_massmatrix();

  // Form f - M*v
  {
    real_T *elptr = rtsiGetSolverMassMatrixPr(si);
    int_T *iptr = rtsiGetSolverMassMatrixIr(si);
    int_T *jc = rtsiGetSolverMassMatrixJc(si);
    int_T nx = 156;
    int_T col,row;
    for (col = 0; col < nx; col++) {
      for (row = jc[col]; row < jc[col+1]; row++) {
        fminusMv[*iptr++] -= (*v) * (*elptr++);
      }

      v++;
    }
  }
}

// Simplified version of numjac.cpp, for use with RTW.
void local_numjac( RTWSolverInfo *si, real_T *y, const real_T *v, const real_T
                  *Fty, real_T *fac, real_T *dFdy )
{
  // constants
  real_T THRESH = 1e-6;
  real_T EPS = 2.2e-16;                // utGetEps();
  real_T BL = std::pow(EPS, 0.75);
  real_T BU = std::pow(EPS, 0.25);
  real_T FACMIN = std::pow(EPS, 0.78);
  real_T FACMAX = 0.1;
  int_T nx = 156;
  real_T *x = rtsiGetContStates(si);
  real_T del;
  real_T difmax;
  real_T FdelRowmax;
  real_T temp;
  real_T Fdiff;
  real_T maybe;
  real_T xscale;
  real_T fscale;
  real_T *p;
  int_T rowmax;
  int_T i,j;
  if (x != y)
    (void) std::memcpy(x, y,
                       static_cast<uint_T>(nx)*sizeof(real_T));
  rtsiSetSolverComputingJacobian(si,true);
  for (p = dFdy, j = 0; j < nx; j++, p += nx) {
    // Select an increment del for a difference approximation to
    // column j of dFdy.  The vector fac accounts for experience
    // gained in previous calls to numjac.
    xscale = std::abs(x[j]);
    if (xscale < THRESH)
      xscale = THRESH;
    temp = (x[j] + fac[j]*xscale);
    del = temp - y[j];
    while (del == 0.0) {
      if (fac[j] < FACMAX) {
        fac[j] *= 100.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
        temp = (x[j] + fac[j]*xscale);
        del = temp - x[j];
      } else {
        del = THRESH;                  // thresh is nonzero
        break;
      }
    }

    // Keep del pointing into region.
    if (Fty[j] >= 0.0)
      del = std::abs(del);
    else
      del = -std::abs(del);

    // Form a difference approximation to column j of dFdy.
    temp = x[j];
    x[j] += del;
    Wind_Turbine_step();
    local_evaluateFminusMv(si,v,p );
    x[j] = temp;
    difmax = 0.0;
    rowmax = 0;
    FdelRowmax = p[0];
    temp = 1.0 / del;
    for (i = 0; i < nx; i++) {
      Fdiff = p[i] - Fty[i];
      maybe = std::abs(Fdiff);
      if (maybe > difmax) {
        difmax = maybe;
        rowmax = i;
        FdelRowmax = p[i];
      }

      p[i] = temp * Fdiff;
    }

    // Adjust fac for next call to numjac.
    if (((FdelRowmax != 0.0) && (Fty[rowmax] != 0.0)) || (difmax == 0.0)) {
      fscale = std::abs(FdelRowmax);
      if (fscale < std::abs(Fty[rowmax]))
        fscale = std::abs(Fty[rowmax]);
      if (difmax <= BL*fscale) {
        // The difference is small, so increase the increment.
        fac[j] *= 10.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
      } else if (difmax > BU*fscale) {
        // The difference is large, so reduce the increment.
        fac[j] *= 0.1;
        if (fac[j] < FACMIN)
          fac[j] = FACMIN;
      }
    }
  }

  rtsiSetSolverComputingJacobian(si,false);
}                                      // end local_numjac

//
// This function updates continuous states using the ODE14X fixed-step
// solver algorithm
//
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
  static int_T rt_ODE14x_N[4] = { 12, 8, 6, 4 };

  time_T t0 = rtsiGetT(si);
  time_T t1 = t0;
  time_T h = rtsiGetStepSize(si);
  real_T *x1 = rtsiGetContStates(si);
  int_T order = rtsiGetSolverExtrapolationOrder(si);
  int_T numIter = rtsiGetSolverNumberNewtonIterations(si);
  ODE14X_IntgData *id = static_cast<ODE14X_IntgData *>(rtsiGetSolverData(si));
  real_T *x0 = id->x0;
  real_T *f0 = id->f0;
  real_T *x1start = id->x1start;
  real_T *f1 = id->f1;
  real_T *Delta = id->Delta;
  real_T *E = id->E;
  real_T *fac = id->fac;
  real_T *dfdx = id->DFDX;
  real_T *W = id->W;
  int_T *pivots = id->pivots;
  real_T *xtmp = id->xtmp;
  real_T *ztmp = id->ztmp;
  int_T *Mpattern_ir = rtsiGetSolverMassMatrixIr(si);
  int_T *Mpattern_jc = rtsiGetSolverMassMatrixJc(si);
  real_T *M = id->M;
  real_T *M1 = id->M1;
  real_T *xdot = id->xdot;
  real_T *Edot = id->Edot;
  real_T *fminusMxdot = id->fminusMxdot;
  int_T col,row,rowidx;
  int_T *N = &(rt_ODE14x_N[0]);
  int_T i,j,k,iter;
  int_T nx = 156;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) std::memcpy(x0, x1,
                     static_cast<uint_T>(nx)*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  local_evaluateMassMatrix(si,M );
  rtsiSetdX(si, xdot);
  Wind_Turbine_derivatives();

  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  Wind_Turbine_forcingfunction();

  // Form fminusMxdot = f(x) - M(x)*xdot, d(fminusMxdot)/dx = df/dx - d(Mv)/dx
  (void) std::memcpy(fminusMxdot, f0,
                     static_cast<uint_T>(nx)*sizeof(real_T));
  for (col = 0; col < nx; col++) {
    for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
      real_T m_row_col = M[rowidx];
      row = Mpattern_ir[rowidx];
      fminusMxdot[row] -= m_row_col*xdot[col];
    }
  }

  local_numjac(si,x0,xdot,fminusMxdot,fac,dfdx );
  for (j = 0; j < order; j++) {
    real_T *p;
    real_T hN = h/N[j];

    // Get the iteration matrix and solution at t0

    // [L,U] = lu(M - hN*J)
    (void) std::memcpy(W, dfdx,
                       static_cast<uint_T>(nx)*nx*sizeof(real_T));
    for (p = W, i = 0; i < nx*nx; i++, p++) {
      *p *= (-hN);
    }

    for (col = 0, p = W; col < nx; col++, p += nx) {
      for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
        real_T m_row_col = M[rowidx];
        row = Mpattern_ir[rowidx];
        p[row] += m_row_col;
      }
    }

    rt_lu_real(W, nx,
               pivots);

    // First Newton's iteration at t0.
    // rhs = hN*f0
    for (i = 0; i < nx; i++) {
      Delta[i] = hN*f0[i];
    }

    // Delta = (U \ (L \ rhs))
    rt_ForwardSubstitutionRR_Dbl(W, Delta,
      f1, nx,
      1, pivots,
      1);
    rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
      Delta, nx,
      1, 0);

    // ytmp = y0 + Delta
    // ztmp = (ytmp-y0)/h

    (void) std::memcpy(x1, x0,
                       static_cast<uint_T>(nx)*sizeof(real_T));
    for (i = 0; i < nx; i++) {
      x1[i] += Delta[i];
      ztmp[i] = Delta[i]/hN;
    }

    // Additional Newton's iterations, if desired.
    // for iter = 2:NewtIter
    // rhs = hN*feval(odefun,tn,ytmp,extraArgs{:}) - M*(ytmp - yn);
    // if statedepM   % only for state dep. Mdel ~= 0
    // Mdel = M - feval(massfun,tn,ytmp);
    // rhs = rhs + Mdel*ztmp*h;
    // end
    // Delta = ( U \ ( L \ rhs ) );
    // ytmp = ytmp + Delta;
    // ztmp = (ytmp - yn)/h
    // end

    rtsiSetT(si, t0);
    rtsiSetdX(si, f1);
    for (iter = 1; iter < numIter; iter++) {
      Wind_Turbine_step();
      Wind_Turbine_forcingfunction();
      for (i = 0; i < nx; i++) {
        Delta[i] = hN*f1[i];
        xtmp[i] = x1[i] - x0[i];
      }

      // rhs = hN*f(tn,ytmp) - M*(ytmp-yn)
      for (col = 0; col < nx; col++) {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M[rowidx];
          row = Mpattern_ir[rowidx];
          Delta[row] -= m_row_col*xtmp[col];
        }
      }

      // rhs = rhs - (Mtmp - M)*ztmp*h
      local_evaluateMassMatrix(si,M1 );
      for (i = 0; i < rtsiGetSolverMassMatrixNzMax(si); i++) {
        M1[i] -= M[i];
      }

      for (col = 0; col < nx; col++) {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M1[rowidx];
          row = Mpattern_ir[rowidx];
          Delta[row] -= hN*m_row_col*ztmp[col];
        }
      }

      rt_ForwardSubstitutionRR_Dbl(W, Delta,
        f1, nx,
        1, pivots,
        1);
      rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
        Delta, nx,
        1, 0);

      // ytmp = ytmp + delta
      // ztmp = (ytmp - yn)/h

      for (i = 0; i < nx; i++) {
        x1[i] += Delta[i];
        ztmp[i] = (x1[i] - x0[i])/hN;
      }
    }

    // Steps from t0+hN to t1 -- subintegration of N(j) steps for extrapolation
    // ttmp = t0;
    // for i = 2:N(j)
    // ttmp = ttmp + hN
    // ytmp0 = ytmp;
    // for iter = 1:NewtIter
    // rhs = (ytmp0 - ytmp) + hN*feval(odefun,ttmp,ytmp,extraArgs{:});
    // Delta = ( U \ ( L \ rhs ) );
    // ytmp = ytmp + Delta;
    // end
    // end

    for (k = 1; k < N[j]; k++) {
      t1 = t0 + k*hN;
      (void) std::memcpy(x1start, x1,
                         static_cast<uint_T>(nx)*sizeof(real_T));
      rtsiSetT(si, t1);
      rtsiSetdX(si, f1);
      for (iter = 0; iter < numIter; iter++) {
        Wind_Turbine_step();
        Wind_Turbine_forcingfunction();
        if (iter == 0) {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
          }
        } else {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
            xtmp[i] = (x1[i]-x1start[i]);
          }

          // rhs = hN*f(tn,ytmp) - M*(ytmp-yn)
          for (col = 0; col < nx; col++) {
            for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx
                 ++) {
              real_T m_row_col = M[rowidx];
              row = Mpattern_ir[rowidx];
              Delta[row] -= m_row_col*xtmp[col];
            }
          }
        }

        // For state-dep.,  Mdel = M(ttmp,ytmp) - M
        Wind_Turbine_step();
        local_evaluateMassMatrix(si,M1 );
        for (i = 0; i < rtsiGetSolverMassMatrixNzMax(si); i++) {
          M1[i] -= M[i];
        }

        // rhs = rhs - Mdel*ztmp*h
        for (col = 0; col < nx; col++) {
          for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++)
          {
            real_T m_row_col = M1[rowidx];
            row = Mpattern_ir[rowidx];
            Delta[row] -= hN*m_row_col*ztmp[col];
          }
        }

        rt_ForwardSubstitutionRR_Dbl(W, Delta,
          f1, nx,
          1, pivots,
          1);
        rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
          Delta, nx,
          1, 0);

        // ytmp = ytmp + Delta
        // ztmp = (ytmp - ytmp0)/h

        for (i = 0; i < nx; i++) {
          x1[i] += Delta[i];
          ztmp[i] = (x1[i] - x1start[i])/hN;
        }
      }
    }

    // Extrapolate to order j
    // E(:,j) = ytmp
    // for k = j:-1:2
    // coef = N(k-1)/(N(j) - N(k-1))
    // E(:,k-1) = E(:,k) + coef*( E(:,k) - E(:,k-1) )
    // end

    (void) std::memcpy(&(E[nx*j]), x1,
                       static_cast<uint_T>(nx)*sizeof(real_T));
    for (k = j; k > 0; k--) {
      real_T coef = static_cast<real_T>(N[k-1]) / (N[j]-N[k-1]);
      for (i = 0; i < nx; i++) {
        x1[i] = E[nx*k+i] + coef*(E[nx*k+i] - E[nx*(k-1)+i]);
      }

      (void) std::memcpy(&(E[nx*(k-1)]), x1,
                         static_cast<uint_T>(nx)*sizeof(real_T));
    }

    // Extrapolate the derivative
    for (i = 0; i < nx; i++) {
      xdot[i] = (x1[i] - x1start[i])/hN;
    }

    (void) std::memcpy(&(Edot[nx*j]), xdot,
                       static_cast<uint_T>(nx)*sizeof(real_T));
    for (k = j; k > 0; k--) {
      real_T coef = static_cast<real_T>(N[k-1]) / (N[j]-N[k-1]);
      for (i = 0; i < nx; i++) {
        xdot[i] = Edot[nx*k+i] + coef*(Edot[nx*k+i] - Edot[nx*(k-1)+i]);
      }

      (void) std::memcpy(&(Edot[nx*(k-1)]), xdot,
                         nx*sizeof(real_T));
    }
  }

  // x1 = E(:,1);
  (void) std::memcpy(x1, E,
                     static_cast<uint_T>(nx)*sizeof(real_T));

  // Extrapolated xdot
  (void) std::memcpy(xdot, Edot,
                     nx*sizeof(real_T));

  // t1 = t0 + h;
  rtsiSetT(si,rtsiGetSolverStopTime(si));
  Wind_Turbine_step();
  Wind_Turbine_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T y;
  a = std::abs(u0);
  y = std::abs(u1);
  if (a < y) {
    a /= y;
    y *= std::sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = std::sqrt(y * y + 1.0) * a;
  } else if (!rtIsNaN(y)) {
    y = a * 1.4142135623730951;
  }

  return y;
}

void rt_invd4x4_snf(const real_T u[16], real_T y[16])
{
  real_T A[16];
  real_T smax;
  int32_T c;
  int32_T c_0;
  int32_T idxmax;
  int32_T jA;
  int32_T jj;
  int32_T kAcol;
  int32_T pipk;
  int32_T y_tmp;
  int8_T ipiv[4];
  int8_T p[4];
  for (idxmax = 0; idxmax < 16; idxmax++) {
    y[idxmax] = 0.0;
    A[idxmax] = u[idxmax];
  }

  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  for (pipk = 0; pipk < 3; pipk++) {
    c = pipk * 5 + 2;
    jj = pipk * 5;
    c_0 = 4 - pipk;
    idxmax = 1;
    smax = std::abs(A[jj]);
    for (jA = 2; jA <= c_0; jA++) {
      real_T s;
      s = std::abs(A[(c + jA) - 3]);
      if (s > smax) {
        idxmax = jA;
        smax = s;
      }
    }

    if (A[(c + idxmax) - 3] != 0.0) {
      if (idxmax - 1 != 0) {
        idxmax += pipk;
        ipiv[pipk] = static_cast<int8_T>(idxmax);
        smax = A[pipk];
        A[pipk] = A[idxmax - 1];
        A[idxmax - 1] = smax;
        smax = A[pipk + 4];
        A[pipk + 4] = A[idxmax + 3];
        A[idxmax + 3] = smax;
        smax = A[pipk + 8];
        A[pipk + 8] = A[idxmax + 7];
        A[idxmax + 7] = smax;
        smax = A[pipk + 12];
        A[pipk + 12] = A[idxmax + 11];
        A[idxmax + 11] = smax;
      }

      idxmax = c - pipk;
      for (c_0 = c; c_0 <= idxmax + 2; c_0++) {
        A[c_0 - 1] /= A[jj];
      }
    }

    c_0 = 3 - pipk;
    jA = jj;
    for (kAcol = 0; kAcol < c_0; kAcol++) {
      smax = A[((kAcol << 2) + jj) + 4];
      if (smax != 0.0) {
        idxmax = jA + 6;
        y_tmp = jA - pipk;
        for (int32_T ijA = idxmax; ijA <= y_tmp + 8; ijA++) {
          A[ijA - 1] += A[((c + ijA) - jA) - 7] * -smax;
        }
      }

      jA += 4;
    }
  }

  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  if (ipiv[0] > 1) {
    pipk = p[ipiv[0] - 1];
    p[ipiv[0] - 1] = 1;
    p[0] = static_cast<int8_T>(pipk);
  }

  if (ipiv[1] > 2) {
    pipk = p[ipiv[1] - 1];
    p[ipiv[1] - 1] = p[1];
    p[1] = static_cast<int8_T>(pipk);
  }

  if (ipiv[2] > 3) {
    pipk = p[ipiv[2] - 1];
    p[ipiv[2] - 1] = p[2];
    p[2] = static_cast<int8_T>(pipk);
  }

  for (jA = 0; jA < 4; jA++) {
    c = (p[jA] - 1) << 2;
    y[jA + c] = 1.0;
    for (pipk = jA + 1; pipk < 5; pipk++) {
      idxmax = (c + pipk) - 1;
      if (y[idxmax] != 0.0) {
        for (c_0 = pipk + 1; c_0 < 5; c_0++) {
          y_tmp = (c + c_0) - 1;
          y[y_tmp] -= A[(((pipk - 1) << 2) + c_0) - 1] * y[idxmax];
        }
      }
    }
  }

  for (pipk = 0; pipk < 4; pipk++) {
    jj = pipk << 2;
    for (jA = 3; jA >= 0; jA--) {
      kAcol = jA << 2;
      idxmax = jA + jj;
      smax = y[idxmax];
      if (smax != 0.0) {
        y[idxmax] = smax / A[jA + kAcol];
        y_tmp = jA - 1;
        for (c_0 = 0; c_0 <= y_tmp; c_0++) {
          c = c_0 + jj;
          y[c] -= A[c_0 + kAcol] * y[idxmax];
        }
      }
    }
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T u0_0;
    int32_T u1_0;
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = std::atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = std::atan2(u0, u1);
  }

  return y;
}

// Model step function
void Wind_Turbine_step(void)
{
  // local block i/o variables
  real_T rtb_AngletoExtension;
  if (rtmIsMajorTimeStep(rtM)) {
    // set solver stop time
    rtsiSetSolverStopTime(&rtM->solverInfo,((rtM->Timing.clockTick0+1)*
      rtM->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  {
    __m128d tmp_11;
    __m128d tmp_12;
    NeParameterBundle expl_temp;
    NeParameterBundle expl_temp_0;
    NeParameterBundle expl_temp_1;
    NeParameterBundle expl_temp_2;
    NeParameterBundle expl_temp_3;
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    NeuDiagnosticTree *diagnosticTree_1;
    NeuDiagnosticTree *diagnosticTree_2;
    NeuDiagnosticTree *diagnosticTree_3;
    NeuDiagnosticTree *diagnosticTree_4;
    NeuDiagnosticTree *diagnosticTree_5;
    NeuDiagnosticTree *diagnosticTree_6;
    NeuDiagnosticTree *diagnosticTree_7;
    NeuDiagnosticTree *diagnosticTree_8;
    NeuDiagnosticTree *diagnosticTree_9;
    NeuDiagnosticTree *diagnosticTree_a;
    NeuDiagnosticTree *diagnosticTree_b;
    NeuDiagnosticTree *diagnosticTree_c;
    NeuDiagnosticTree *diagnosticTree_d;
    NeuDiagnosticTree *diagnosticTree_e;
    real_T tmp_2[84];
    real_T tmp_x[84];
    real_T tmp_g[64];
    real_T tmp_i[64];
    real_T tmp_k[64];
    real_T tmp_m[63];
    real_T tmp_0[56];
    real_T tmp_r[26];
    real_T tmp_z[26];
    real_T tmp_p[20];
    real_T rtb_OUTPUT_1_1[18];
    real_T tmp_8[16];
    real_T tmp_b[16];
    real_T tmp_e[16];
    real_T tmp_o[16];
    real_T tmp_v[15];
    real_T tmp_5[12];
    real_T tmp_t[12];
    real_T tmp_4[4];
    real_T tmp_7[3];
    real_T tmp_a[3];
    real_T tmp_d[3];
    real_T rtb_Isat;
    real_T rtb_MathFunction1;
    real_T time;
    real_T time_0;
    real_T time_1;
    real_T time_2;
    real_T time_3;
    real_T time_4;
    real_T time_5;
    real_T time_6;
    real_T time_7;
    real_T time_8;
    real_T time_9;
    real_T time_a;
    real_T time_b;
    real_T time_c;
    real_T time_d;
    real_T time_e;
    real_T tmp_13;
    real_T u0;
    real_T *parameterBundle_mRealParameters;
    int32_T i;
    int_T tmp_3[16];
    int_T tmp_y[16];
    int_T tmp_1[15];
    int_T tmp_10[7];
    int_T tmp_s[7];
    int_T tmp_h[6];
    int_T tmp_j[6];
    int_T tmp_l[6];
    int_T tmp_q[6];
    int_T tmp_9[5];
    int_T tmp_c[5];
    int_T tmp_f[5];
    int_T tmp_n[5];
    int_T tmp_w[5];
    int_T tmp_6[4];
    int_T tmp_u[4];
    boolean_T ok;
    boolean_T tmp;

    // FromWorkspace: '<S45>/FromWs'
    {
      real_T *pDataValues = (real_T *) rtDW.FromWs_PWORK.DataPtr;
      real_T *pTimeValues = (real_T *) rtDW.FromWs_PWORK.TimePtr;
      int_T currTimeIndex = rtDW.FromWs_IWORK.PrevIndex;
      real_T t = rtM->Timing.t[0];

      // Get index
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[29]) {
        currTimeIndex = 28;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      rtDW.FromWs_IWORK.PrevIndex = currTimeIndex;

      // Post output
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            {
              int_T elIdx;
              for (elIdx = 0; elIdx < 2; ++elIdx) {
                (&rtDW.FromWs[0])[elIdx] = pDataValues[currTimeIndex];
                pDataValues += 30;
              }
            }
          } else {
            {
              int_T elIdx;
              for (elIdx = 0; elIdx < 2; ++elIdx) {
                (&rtDW.FromWs[0])[elIdx] = pDataValues[currTimeIndex + 1];
                pDataValues += 30;
              }
            }
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex = currTimeIndex;

          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 2; ++elIdx) {
              d1 = pDataValues[TimeIndex];
              d2 = pDataValues[TimeIndex + 1];
              (&rtDW.FromWs[0])[elIdx] = (real_T) rtInterpolate(d1, d2, f1, f2);
              pDataValues += 30;
            }
          }
        }
      }
    }

    // Integrator: '<S2>/Integrator'
    rtDW.Integrator = rtX.Integrator_CSTATE;

    // Gain: '<S2>/Gain'
    rtDW.Gain_m = 100.0 * rtDW.Integrator;
    if (rtmIsMajorTimeStep(rtM)) {
      // Chart: '<Root>/Turbine State Machine'
      if (rtDW.bitsForTID1.is_active_c1_Turbine_State_Mach == 0U) {
        rtDW.bitsForTID1.is_active_c1_Turbine_State_Mach = 1U;
        rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib = IN_Park;
        rtDW.parking_brake = 1.0;
        rtDW.generator_trip = 1.0;
        rtDW.pitch_brake = 1.0;
      } else {
        switch (rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib) {
         case IN_Brake:
          rtDW.parking_brake = 0.0;
          rtDW.generator_trip = 1.0;
          rtDW.pitch_brake = 1.0;
          if (rtDW.Gain_m <= park_speed) {
            rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib = IN_Park;
            rtDW.parking_brake = 1.0;
            rtDW.generator_trip = 1.0;
            rtDW.pitch_brake = 1.0;
          } else if ((rtDW.FromWs[0] < rtDW.wind_speed_cut_in_upper) &&
                     (rtDW.FromWs[0] > rtDW.wind_speed_cut_in_lower)) {
            rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib = IN_Startup;
            rtDW.parking_brake = 0.0;
            rtDW.generator_trip = 1.0;
            rtDW.pitch_brake = 0.0;
          }
          break;

         case IN_Generating:
          rtDW.parking_brake = 0.0;
          rtDW.generator_trip = 0.0;
          rtDW.pitch_brake = 0.0;
          if ((rtDW.FromWs[0] < rtDW.wind_speed_cut_in_lower) || (rtDW.FromWs[0]
               > rtDW.wind_speed_cut_out) || (rtDW.Gain_m >
               rtDW.turbine_speed_cut_out) || (rtDW.Gain_m <
               rtDW.turbine_speed_cut_in * 0.9)) {
            rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib = IN_Brake;
            rtDW.parking_brake = 0.0;
            rtDW.generator_trip = 1.0;
            rtDW.pitch_brake = 1.0;
          }
          break;

         case IN_Park:
          rtDW.parking_brake = 1.0;
          rtDW.generator_trip = 1.0;
          rtDW.pitch_brake = 1.0;
          if ((rtDW.FromWs[0] > rtDW.wind_speed_cut_in_lower) && (rtDW.FromWs[0]
               < rtDW.wind_speed_cut_out)) {
            rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib = IN_Startup;
            rtDW.parking_brake = 0.0;
            rtDW.generator_trip = 1.0;
            rtDW.pitch_brake = 0.0;
          }
          break;

         default:
          // case IN_Startup:
          rtDW.parking_brake = 0.0;
          rtDW.generator_trip = 1.0;
          rtDW.pitch_brake = 0.0;
          if (rtDW.Gain_m > rtDW.turbine_speed_cut_in) {
            rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib = IN_Generating;
            rtDW.parking_brake = 0.0;
            rtDW.generator_trip = 0.0;
            rtDW.pitch_brake = 0.0;
          } else if (rtDW.FromWs[0] < rtDW.wind_speed_cut_in_lower) {
            rtDW.bitsForTID1.is_c1_Turbine_State_Machine_Lib = IN_Brake;
            rtDW.parking_brake = 0.0;
            rtDW.generator_trip = 1.0;
            rtDW.pitch_brake = 1.0;
          }
          break;
        }
      }

      // End of Chart: '<Root>/Turbine State Machine'

      // Sum: '<S86>/Sum'
      u0 = rtDW.parking_brake + rtDW.pitch_brake;

      // Saturate: '<S86>/Saturation'
      if (u0 > 1.0) {
        u0 = 1.0;
      } else if (u0 < 0.0) {
        u0 = 0.0;
      }

      // End of Saturate: '<S86>/Saturation'

      // Gain: '<S86>/Engagement Pressure'
      rtDW.EngagementPressure = 400.0 * u0;
    }

    // SimscapeInputBlock: '<S260>/INPUT_1_1_1'
    rtDW.INPUT_1_1_1[0] = rtDW.EngagementPressure;
    rtDW.INPUT_1_1_1[1] = 0.0;
    rtDW.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_1_1_1_Discrete[0] = !(rtDW.INPUT_1_1_1[0] ==
        rtDW.INPUT_1_1_1_Discrete[1]);
      rtDW.INPUT_1_1_1_Discrete[1] = rtDW.INPUT_1_1_1[0];
    }

    rtDW.INPUT_1_1_1[0] = rtDW.INPUT_1_1_1_Discrete[1];
    rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S260>/INPUT_1_1_1'

    // Integrator: '<S1>/Integrator'
    rtDW.Integrator_i = rtX.Integrator_CSTATE_m;

    // Gain: '<S1>/Gain'
    rtDW.Gain_f = 100.0 * rtDW.Integrator_i;

    // SimscapeInputBlock: '<S260>/INPUT_18_1_1'
    if (rtDW.INPUT_18_1_1_FirstOutput == 0.0) {
      rtDW.INPUT_18_1_1_FirstOutput = 1.0;
      rtX.Wind_TurbineTorque_ActuatorSimu = rtDW.Gain_f;
    }

    rtDW.INPUT_18_1_1[0] = rtX.Wind_TurbineTorque_ActuatorSimu;
    rtDW.INPUT_18_1_1[1] = (rtDW.Gain_f - rtX.Wind_TurbineTorque_ActuatorSimu) *
      200.0;
    rtDW.INPUT_18_1_1[2] = 0.0;
    rtDW.INPUT_18_1_1[3] = 0.0;

    // End of SimscapeInputBlock: '<S260>/INPUT_18_1_1'

    // SimscapeExecutionBlock: '<S260>/STATE_1' incorporates:
    //   Clock: '<S276>/Clock'
    //   Clock: '<S281>/Clock'
    //   Clock: '<S287>/Clock'
    //   Clock: '<S292>/Clock'
    //   Clock: '<S97>/Clock'
    //   Derivative: '<S276>/Derivative'
    //   Derivative: '<S278>/Derivative'
    //   Derivative: '<S280>/Derivative'
    //   Derivative: '<S281>/Derivative'
    //   Derivative: '<S287>/Derivative'
    //   Derivative: '<S289>/Derivative'
    //   Derivative: '<S291>/Derivative'
    //   Derivative: '<S292>/Derivative'
    //   Derivative: '<S97>/Derivative'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_1_0'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_1_1'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_2_0'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_2_1'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_3_0'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_4_0'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_5_0'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_7_0'
    //   SimscapeExecutionBlock: '<S260>/OUTPUT_8_0'
    //   SimscapeExecutionBlock: '<S260>/STATE_2'
    //   SimscapeExecutionBlock: '<S260>/STATE_3'
    //   SimscapeExecutionBlock: '<S260>/STATE_4'
    //   SimscapeExecutionBlock: '<S260>/STATE_5'
    //   SimscapeExecutionBlock: '<S260>/STATE_7'
    //   SimscapeExecutionBlock: '<S260>/STATE_8'

    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    u0 = rtM->Timing.t[0];
    time = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 28;
    simulationData->mData->mContStates.mX = &rtX.Wind_TurbineRevolute_Joint1Rzq
      [0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;

    // Outputs for Enabled SubSystem: '<S58>/Saturation' incorporates:
    //   EnablePort: '<S63>/Enable'

    tmp = rtmIsMajorTimeStep(rtM);

    // End of Outputs for SubSystem: '<S58>/Saturation'
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    ok = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = ok;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_1[0] = 0;
    tmp_0[0] = rtDW.INTERNAL_9_1_1[0];
    tmp_0[1] = rtDW.INTERNAL_9_1_1[1];
    tmp_0[2] = rtDW.INTERNAL_9_1_1[2];
    tmp_0[3] = rtDW.INTERNAL_9_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = rtDW.INTERNAL_6_1_1[0];
    tmp_0[5] = rtDW.INTERNAL_6_1_1[1];
    tmp_0[6] = rtDW.INTERNAL_6_1_1[2];
    tmp_0[7] = rtDW.INTERNAL_6_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = rtDW.INTERNAL_8_1_1[0];
    tmp_0[9] = rtDW.INTERNAL_8_1_1[1];
    tmp_0[10] = rtDW.INTERNAL_8_1_1[2];
    tmp_0[11] = rtDW.INTERNAL_8_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = rtDW.INTERNAL_13_1_1[0];
    tmp_0[13] = rtDW.INTERNAL_13_1_1[1];
    tmp_0[14] = rtDW.INTERNAL_13_1_1[2];
    tmp_0[15] = rtDW.INTERNAL_13_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = rtDW.INTERNAL_12_1_1[0];
    tmp_0[17] = rtDW.INTERNAL_12_1_1[1];
    tmp_0[18] = rtDW.INTERNAL_12_1_1[2];
    tmp_0[19] = rtDW.INTERNAL_12_1_1[3];
    tmp_1[5] = 20;
    tmp_0[20] = rtDW.INTERNAL_2_1_1[0];
    tmp_0[21] = rtDW.INTERNAL_2_1_1[1];
    tmp_0[22] = rtDW.INTERNAL_2_1_1[2];
    tmp_0[23] = rtDW.INTERNAL_2_1_1[3];
    tmp_1[6] = 24;
    tmp_0[24] = rtDW.INTERNAL_3_1_1[0];
    tmp_0[25] = rtDW.INTERNAL_3_1_1[1];
    tmp_0[26] = rtDW.INTERNAL_3_1_1[2];
    tmp_0[27] = rtDW.INTERNAL_3_1_1[3];
    tmp_1[7] = 28;
    tmp_0[28] = rtDW.INTERNAL_1_1_1[0];
    tmp_0[29] = rtDW.INTERNAL_1_1_1[1];
    tmp_0[30] = rtDW.INTERNAL_1_1_1[2];
    tmp_0[31] = rtDW.INTERNAL_1_1_1[3];
    tmp_1[8] = 32;
    tmp_0[32] = rtDW.INTERNAL_2_2_1[0];
    tmp_0[33] = rtDW.INTERNAL_2_2_1[1];
    tmp_0[34] = rtDW.INTERNAL_2_2_1[2];
    tmp_0[35] = rtDW.INTERNAL_2_2_1[3];
    tmp_1[9] = 36;
    tmp_0[36] = rtDW.INTERNAL_3_2_1[0];
    tmp_0[37] = rtDW.INTERNAL_3_2_1[1];
    tmp_0[38] = rtDW.INTERNAL_3_2_1[2];
    tmp_0[39] = rtDW.INTERNAL_3_2_1[3];
    tmp_1[10] = 40;
    tmp_0[40] = rtDW.INTERNAL_1_2_1[0];
    tmp_0[41] = rtDW.INTERNAL_1_2_1[1];
    tmp_0[42] = rtDW.INTERNAL_1_2_1[2];
    tmp_0[43] = rtDW.INTERNAL_1_2_1[3];
    tmp_1[11] = 44;
    tmp_0[44] = rtDW.INTERNAL_2_3_1[0];
    tmp_0[45] = rtDW.INTERNAL_2_3_1[1];
    tmp_0[46] = rtDW.INTERNAL_2_3_1[2];
    tmp_0[47] = rtDW.INTERNAL_2_3_1[3];
    tmp_1[12] = 48;
    tmp_0[48] = rtDW.INTERNAL_3_3_1[0];
    tmp_0[49] = rtDW.INTERNAL_3_3_1[1];
    tmp_0[50] = rtDW.INTERNAL_3_3_1[2];
    tmp_0[51] = rtDW.INTERNAL_3_3_1[3];
    tmp_1[13] = 52;
    tmp_0[52] = rtDW.INTERNAL_1_3_1[0];
    tmp_0[53] = rtDW.INTERNAL_1_3_1[1];
    tmp_0[54] = rtDW.INTERNAL_1_3_1[2];
    tmp_0[55] = rtDW.INTERNAL_1_3_1[3];
    tmp_1[14] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 15;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 28;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    // SimscapeExecutionBlock: '<S260>/OUTPUT_1_0' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
    time_0 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_3[0] = 0;
    tmp_2[0] = rtDW.INTERNAL_9_1_1[0];
    tmp_2[1] = rtDW.INTERNAL_9_1_1[1];
    tmp_2[2] = rtDW.INTERNAL_9_1_1[2];
    tmp_2[3] = rtDW.INTERNAL_9_1_1[3];
    tmp_3[1] = 4;
    tmp_2[4] = rtDW.INTERNAL_6_1_1[0];
    tmp_2[5] = rtDW.INTERNAL_6_1_1[1];
    tmp_2[6] = rtDW.INTERNAL_6_1_1[2];
    tmp_2[7] = rtDW.INTERNAL_6_1_1[3];
    tmp_3[2] = 8;
    tmp_2[8] = rtDW.INTERNAL_8_1_1[0];
    tmp_2[9] = rtDW.INTERNAL_8_1_1[1];
    tmp_2[10] = rtDW.INTERNAL_8_1_1[2];
    tmp_2[11] = rtDW.INTERNAL_8_1_1[3];
    tmp_3[3] = 12;
    tmp_2[12] = rtDW.INTERNAL_13_1_1[0];
    tmp_2[13] = rtDW.INTERNAL_13_1_1[1];
    tmp_2[14] = rtDW.INTERNAL_13_1_1[2];
    tmp_2[15] = rtDW.INTERNAL_13_1_1[3];
    tmp_3[4] = 16;
    tmp_2[16] = rtDW.INTERNAL_12_1_1[0];
    tmp_2[17] = rtDW.INTERNAL_12_1_1[1];
    tmp_2[18] = rtDW.INTERNAL_12_1_1[2];
    tmp_2[19] = rtDW.INTERNAL_12_1_1[3];
    tmp_3[5] = 20;
    tmp_2[20] = rtDW.INTERNAL_2_1_1[0];
    tmp_2[21] = rtDW.INTERNAL_2_1_1[1];
    tmp_2[22] = rtDW.INTERNAL_2_1_1[2];
    tmp_2[23] = rtDW.INTERNAL_2_1_1[3];
    tmp_3[6] = 24;
    tmp_2[24] = rtDW.INTERNAL_3_1_1[0];
    tmp_2[25] = rtDW.INTERNAL_3_1_1[1];
    tmp_2[26] = rtDW.INTERNAL_3_1_1[2];
    tmp_2[27] = rtDW.INTERNAL_3_1_1[3];
    tmp_3[7] = 28;
    tmp_2[28] = rtDW.INTERNAL_1_1_1[0];
    tmp_2[29] = rtDW.INTERNAL_1_1_1[1];
    tmp_2[30] = rtDW.INTERNAL_1_1_1[2];
    tmp_2[31] = rtDW.INTERNAL_1_1_1[3];
    tmp_3[8] = 32;
    tmp_2[32] = rtDW.INTERNAL_2_2_1[0];
    tmp_2[33] = rtDW.INTERNAL_2_2_1[1];
    tmp_2[34] = rtDW.INTERNAL_2_2_1[2];
    tmp_2[35] = rtDW.INTERNAL_2_2_1[3];
    tmp_3[9] = 36;
    tmp_2[36] = rtDW.INTERNAL_3_2_1[0];
    tmp_2[37] = rtDW.INTERNAL_3_2_1[1];
    tmp_2[38] = rtDW.INTERNAL_3_2_1[2];
    tmp_2[39] = rtDW.INTERNAL_3_2_1[3];
    tmp_3[10] = 40;
    tmp_2[40] = rtDW.INTERNAL_1_2_1[0];
    tmp_2[41] = rtDW.INTERNAL_1_2_1[1];
    tmp_2[42] = rtDW.INTERNAL_1_2_1[2];
    tmp_2[43] = rtDW.INTERNAL_1_2_1[3];
    tmp_3[11] = 44;
    tmp_2[44] = rtDW.INTERNAL_2_3_1[0];
    tmp_2[45] = rtDW.INTERNAL_2_3_1[1];
    tmp_2[46] = rtDW.INTERNAL_2_3_1[2];
    tmp_2[47] = rtDW.INTERNAL_2_3_1[3];
    tmp_3[12] = 48;
    tmp_2[48] = rtDW.INTERNAL_3_3_1[0];
    tmp_2[49] = rtDW.INTERNAL_3_3_1[1];
    tmp_2[50] = rtDW.INTERNAL_3_3_1[2];
    tmp_2[51] = rtDW.INTERNAL_3_3_1[3];
    tmp_3[13] = 52;
    tmp_2[52] = rtDW.INTERNAL_1_3_1[0];
    tmp_2[53] = rtDW.INTERNAL_1_3_1[1];
    tmp_2[54] = rtDW.INTERNAL_1_3_1[2];
    tmp_2[55] = rtDW.INTERNAL_1_3_1[3];
    tmp_3[14] = 56;
    std::memcpy(&tmp_2[56], &rtDW.STATE_1[0], 28U * sizeof(real_T));
    tmp_3[15] = 84;
    simulationData->mData->mInputValues.mN = 84;
    simulationData->mData->mInputValues.mX = &tmp_2[0];
    simulationData->mData->mInputOffsets.mN = 16;
    simulationData->mData->mInputOffsets.mX = &tmp_3[0];
    simulationData->mData->mOutputs.mN = 9;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(rtM, msg_0);
      }
    }

    // SimscapeInputBlock: '<S260>/INTERNAL_10_1_1'
    if (rtDW.INTERNAL_10_1_1_FirstOutput == 0.0) {
      rtDW.INTERNAL_10_1_1_FirstOutput = 1.0;
      rtX.Wind_TurbineoutputFiltered_2541 = rtDW.OUTPUT_1_0[7];
    }

    rtDW.INTERNAL_10_1_1[0] = rtX.Wind_TurbineoutputFiltered_2541;
    rtDW.INTERNAL_10_1_1[1] = (rtDW.OUTPUT_1_0[7] -
      rtX.Wind_TurbineoutputFiltered_2541) * 1000.0;
    rtDW.INTERNAL_10_1_1[2] = 0.0;
    rtDW.INTERNAL_10_1_1[3] = 0.0;

    // End of SimscapeInputBlock: '<S260>/INTERNAL_10_1_1'
    if (rtmIsMajorTimeStep(rtM)) {
      // SimscapeRtp: '<S34>/RTP_7' incorporates:
      //   Constant: '<Root>/Subsystem_around_RTP_3F33A835_w'
      //   Constant: '<Root>/Subsystem_around_RTP_483498A3_w'
      //   Constant: '<Root>/Subsystem_around_RTP_A1573D96_w'
      //   Constant: '<S7>/Subsystem_around_RTP_C10E9CE3_w'

      if (rtDW.bitsForTID1.RTP_7_SetParametersNeeded) {
        NeuDiagnosticTree *diagTree;
        tmp_4[0] = 0.0;
        tmp_4[1] = 0.0;
        tmp_4[2] = 0.0;
        tmp_4[3] = 0.0;
        parameterBundle_mRealParameters = &tmp_4[0];
        diagnosticManager = rtw_create_diagnostics();
        diagTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
        expl_temp.mRealParameters.mN = 4;
        expl_temp.mRealParameters.mX = parameterBundle_mRealParameters;
        expl_temp.mLogicalParameters.mN = 0;
        expl_temp.mLogicalParameters.mX = NULL;
        expl_temp.mIntegerParameters.mN = 0;
        expl_temp.mIntegerParameters.mX = NULL;
        expl_temp.mIndexParameters.mN = 0;
        expl_temp.mIndexParameters.mX = NULL;
        ok = nesl_rtp_manager_set_rtps((NeslRtpManager *)rtDW.RTP_7_RtpManager,
          rtM->Timing.t[0], expl_temp, diagnosticManager);
        if (!ok) {
          ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
          if (ok) {
            char *msg_1;
            msg_1 = rtw_diagnostics_msg(diagTree);
            rtmSetErrorStatus(rtM, msg_1);
          }
        }
      }

      rtDW.bitsForTID1.RTP_7_SetParametersNeeded = false;

      // End of SimscapeRtp: '<S34>/RTP_7'
    }

    // SimscapeExecutionBlock: '<S260>/STATE_7' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_7_SimData;
    time_1 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 6;
    simulationData->mData->mContStates.mX = &rtX.Wind_TurbineBrakesInertiaw[0];
    simulationData->mData->mDiscStates.mN = 59;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_7_Discrete[0];
    simulationData->mData->mModeVector.mN = 16;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_7_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    ok = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = ok;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_6[0] = 0;
    tmp_5[0] = rtDW.INPUT_1_1_1[0];
    tmp_5[1] = rtDW.INPUT_1_1_1[1];
    tmp_5[2] = rtDW.INPUT_1_1_1[2];
    tmp_5[3] = rtDW.INPUT_1_1_1[3];
    tmp_6[1] = 4;
    tmp_5[4] = rtDW.INPUT_18_1_1[0];
    tmp_5[5] = rtDW.INPUT_18_1_1[1];
    tmp_5[6] = rtDW.INPUT_18_1_1[2];
    tmp_5[7] = rtDW.INPUT_18_1_1[3];
    tmp_6[2] = 8;
    tmp_5[8] = rtDW.INTERNAL_10_1_1[0];
    tmp_5[9] = rtDW.INTERNAL_10_1_1[1];
    tmp_5[10] = rtDW.INTERNAL_10_1_1[2];
    tmp_5[11] = rtDW.INTERNAL_10_1_1[3];
    tmp_6[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_5[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_6[0];
    simulationData->mData->mOutputs.mN = 51;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_7[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_7_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_7_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_2;
        msg_2 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(rtM, msg_2);
      }
    }

    // Integrator: '<S112>/Integrator'
    rtDW.Integrator_k = rtX.Integrator_CSTATE_e;

    // Gain: '<S112>/Gain'
    rtDW.Gain_g = 10.0 * rtDW.Integrator_k;

    // SimscapeInputBlock: '<S260>/INPUT_2_1_1'
    rtDW.INPUT_2_1_1[0] = rtDW.Gain_g;
    rtDW.INPUT_2_1_1[1] = 0.0;
    rtDW.INPUT_2_1_1[2] = 0.0;
    rtDW.INPUT_2_1_1[3] = 0.0;

    // Step: '<Root>/Pitch Power On' incorporates:
    //   Step: '<S92>/Step'
    //   Step: '<S92>/Step1'
    //   Step: '<S96>/Step'
    //   Step: '<S96>/Step1'

    tmp_13 = rtM->Timing.t[0];
    rtDW.PitchPowerOn = 24.0;

    // SimscapeInputBlock: '<S260>/INPUT_3_1_1'
    rtDW.INPUT_3_1_1[0] = rtDW.PitchPowerOn;
    rtDW.INPUT_3_1_1[1] = 0.0;
    rtDW.INPUT_3_1_1[2] = 0.0;
    rtDW.INPUT_3_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INPUT_4_1_1'
    rtDW.INPUT_4_1_1[0] = rtDW.PitchPowerOn;
    rtDW.INPUT_4_1_1[1] = 0.0;
    rtDW.INPUT_4_1_1[2] = 0.0;
    rtDW.INPUT_4_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_4_1_1'
    rtDW.INTERNAL_4_1_1[0] = rtDW.OUTPUT_1_0[0];
    rtDW.INTERNAL_4_1_1[1] = 0.0;
    rtDW.INTERNAL_4_1_1[2] = 0.0;
    rtDW.INTERNAL_4_1_1[3] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      // SimscapeRtp: '<S34>/RTP_5' incorporates:
      //   Constant: '<S98>/Subsystem_around_RTP_2D820D23_area'

      if (rtDW.bitsForTID1.RTP_5_SetParametersNeeded) {
        NeuDiagnosticTree *diagTree_0;
        tmp_7[0] = 0.001;
        tmp_7[1] = 0.001;
        tmp_7[2] = 0.1;
        parameterBundle_mRealParameters = &tmp_7[0];
        diagnosticManager = rtw_create_diagnostics();
        diagTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
        expl_temp_0.mRealParameters.mN = 3;
        expl_temp_0.mRealParameters.mX = parameterBundle_mRealParameters;
        expl_temp_0.mLogicalParameters.mN = 0;
        expl_temp_0.mLogicalParameters.mX = NULL;
        expl_temp_0.mIntegerParameters.mN = 0;
        expl_temp_0.mIntegerParameters.mX = NULL;
        expl_temp_0.mIndexParameters.mN = 0;
        expl_temp_0.mIndexParameters.mX = NULL;
        ok = nesl_rtp_manager_set_rtps((NeslRtpManager *)rtDW.RTP_5_RtpManager,
          rtM->Timing.t[0], expl_temp_0, diagnosticManager);
        if (!ok) {
          ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
          if (ok) {
            char *msg_3;
            msg_3 = rtw_diagnostics_msg(diagTree_0);
            rtmSetErrorStatus(rtM, msg_3);
          }
        }
      }

      rtDW.bitsForTID1.RTP_5_SetParametersNeeded = false;

      // End of SimscapeRtp: '<S34>/RTP_5'
    }

    // SimscapeExecutionBlock: '<S260>/STATE_5' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_5_SimData;
    time_2 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mContStates.mN = 25;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineHydraulicActuator_1[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_5_Discrete;
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_5_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    ok = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = ok;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_9[0] = 0;
    tmp_8[0] = rtDW.INPUT_2_1_1[0];
    tmp_8[1] = rtDW.INPUT_2_1_1[1];
    tmp_8[2] = rtDW.INPUT_2_1_1[2];
    tmp_8[3] = rtDW.INPUT_2_1_1[3];
    tmp_9[1] = 4;
    tmp_8[4] = rtDW.INPUT_3_1_1[0];
    tmp_8[5] = rtDW.INPUT_3_1_1[1];
    tmp_8[6] = rtDW.INPUT_3_1_1[2];
    tmp_8[7] = rtDW.INPUT_3_1_1[3];
    tmp_9[2] = 8;
    tmp_8[8] = rtDW.INPUT_4_1_1[0];
    tmp_8[9] = rtDW.INPUT_4_1_1[1];
    tmp_8[10] = rtDW.INPUT_4_1_1[2];
    tmp_8[11] = rtDW.INPUT_4_1_1[3];
    tmp_9[3] = 12;
    tmp_8[12] = rtDW.INTERNAL_4_1_1[0];
    tmp_8[13] = rtDW.INTERNAL_4_1_1[1];
    tmp_8[14] = rtDW.INTERNAL_4_1_1[2];
    tmp_8[15] = rtDW.INTERNAL_4_1_1[3];
    tmp_9[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_8[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_9[0];
    simulationData->mData->mOutputs.mN = 48;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_5[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_5_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_5_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_4;
        msg_4 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(rtM, msg_4);
      }
    }

    // Integrator: '<S142>/Integrator'
    rtDW.Integrator_g = rtX.Integrator_CSTATE_n;

    // Gain: '<S142>/Gain'
    rtDW.Gain_n = 10.0 * rtDW.Integrator_g;

    // SimscapeInputBlock: '<S260>/INPUT_5_1_1'
    rtDW.INPUT_5_1_1[0] = rtDW.Gain_n;
    rtDW.INPUT_5_1_1[1] = 0.0;
    rtDW.INPUT_5_1_1[2] = 0.0;
    rtDW.INPUT_5_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INPUT_6_1_1'
    rtDW.INPUT_6_1_1[0] = rtDW.PitchPowerOn;
    rtDW.INPUT_6_1_1[1] = 0.0;
    rtDW.INPUT_6_1_1[2] = 0.0;
    rtDW.INPUT_6_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INPUT_7_1_1'
    rtDW.INPUT_7_1_1[0] = rtDW.PitchPowerOn;
    rtDW.INPUT_7_1_1[1] = 0.0;
    rtDW.INPUT_7_1_1[2] = 0.0;
    rtDW.INPUT_7_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_5_1_1'
    rtDW.INTERNAL_5_1_1[0] = rtDW.OUTPUT_1_0[1];
    rtDW.INTERNAL_5_1_1[1] = 0.0;
    rtDW.INTERNAL_5_1_1[2] = 0.0;
    rtDW.INTERNAL_5_1_1[3] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      // SimscapeRtp: '<S34>/RTP_4' incorporates:
      //   Constant: '<S99>/Subsystem_around_RTP_8BF50697_area'

      if (rtDW.bitsForTID1.RTP_4_SetParametersNeeded) {
        NeuDiagnosticTree *diagTree_1;
        tmp_a[0] = 0.001;
        tmp_a[1] = 0.001;
        tmp_a[2] = 0.1;
        parameterBundle_mRealParameters = &tmp_a[0];
        diagnosticManager = rtw_create_diagnostics();
        diagTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
        expl_temp_1.mRealParameters.mN = 3;
        expl_temp_1.mRealParameters.mX = parameterBundle_mRealParameters;
        expl_temp_1.mLogicalParameters.mN = 0;
        expl_temp_1.mLogicalParameters.mX = NULL;
        expl_temp_1.mIntegerParameters.mN = 0;
        expl_temp_1.mIntegerParameters.mX = NULL;
        expl_temp_1.mIndexParameters.mN = 0;
        expl_temp_1.mIndexParameters.mX = NULL;
        ok = nesl_rtp_manager_set_rtps((NeslRtpManager *)rtDW.RTP_4_RtpManager,
          rtM->Timing.t[0], expl_temp_1, diagnosticManager);
        if (!ok) {
          ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
          if (ok) {
            char *msg_5;
            msg_5 = rtw_diagnostics_msg(diagTree_1);
            rtmSetErrorStatus(rtM, msg_5);
          }
        }
      }

      rtDW.bitsForTID1.RTP_4_SetParametersNeeded = false;

      // End of SimscapeRtp: '<S34>/RTP_4'
    }

    // SimscapeExecutionBlock: '<S260>/STATE_4' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_4_SimData;
    time_3 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 25;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineHydraulicActuator_2[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_4_Discrete;
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_4_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    ok = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = ok;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_c[0] = 0;
    tmp_b[0] = rtDW.INPUT_5_1_1[0];
    tmp_b[1] = rtDW.INPUT_5_1_1[1];
    tmp_b[2] = rtDW.INPUT_5_1_1[2];
    tmp_b[3] = rtDW.INPUT_5_1_1[3];
    tmp_c[1] = 4;
    tmp_b[4] = rtDW.INPUT_6_1_1[0];
    tmp_b[5] = rtDW.INPUT_6_1_1[1];
    tmp_b[6] = rtDW.INPUT_6_1_1[2];
    tmp_b[7] = rtDW.INPUT_6_1_1[3];
    tmp_c[2] = 8;
    tmp_b[8] = rtDW.INPUT_7_1_1[0];
    tmp_b[9] = rtDW.INPUT_7_1_1[1];
    tmp_b[10] = rtDW.INPUT_7_1_1[2];
    tmp_b[11] = rtDW.INPUT_7_1_1[3];
    tmp_c[3] = 12;
    tmp_b[12] = rtDW.INTERNAL_5_1_1[0];
    tmp_b[13] = rtDW.INTERNAL_5_1_1[1];
    tmp_b[14] = rtDW.INTERNAL_5_1_1[2];
    tmp_b[15] = rtDW.INTERNAL_5_1_1[3];
    tmp_c[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_b[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_c[0];
    simulationData->mData->mOutputs.mN = 48;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_4[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_4_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_4_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_6;
        msg_6 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(rtM, msg_6);
      }
    }

    // Integrator: '<S172>/Integrator'
    rtDW.Integrator_o = rtX.Integrator_CSTATE_a;

    // Gain: '<S172>/Gain'
    rtDW.Gain_h = 10.0 * rtDW.Integrator_o;

    // SimscapeInputBlock: '<S260>/INPUT_8_1_1'
    rtDW.INPUT_8_1_1[0] = rtDW.Gain_h;
    rtDW.INPUT_8_1_1[1] = 0.0;
    rtDW.INPUT_8_1_1[2] = 0.0;
    rtDW.INPUT_8_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INPUT_9_1_1'
    rtDW.INPUT_9_1_1[0] = rtDW.PitchPowerOn;
    rtDW.INPUT_9_1_1[1] = 0.0;
    rtDW.INPUT_9_1_1[2] = 0.0;
    rtDW.INPUT_9_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INPUT_10_1_1'
    rtDW.INPUT_10_1_1[0] = rtDW.PitchPowerOn;
    rtDW.INPUT_10_1_1[1] = 0.0;
    rtDW.INPUT_10_1_1[2] = 0.0;
    rtDW.INPUT_10_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_7_1_1'
    rtDW.INTERNAL_7_1_1[0] = rtDW.OUTPUT_1_0[2];
    rtDW.INTERNAL_7_1_1[1] = 0.0;
    rtDW.INTERNAL_7_1_1[2] = 0.0;
    rtDW.INTERNAL_7_1_1[3] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      // SimscapeRtp: '<S34>/RTP_3' incorporates:
      //   Constant: '<S100>/Subsystem_around_RTP_4E523819_area'

      if (rtDW.bitsForTID1.RTP_3_SetParametersNeeded) {
        NeuDiagnosticTree *diagTree_2;
        tmp_d[0] = 0.001;
        tmp_d[1] = 0.001;
        tmp_d[2] = 0.1;
        parameterBundle_mRealParameters = &tmp_d[0];
        diagnosticManager = rtw_create_diagnostics();
        diagTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
        expl_temp_2.mRealParameters.mN = 3;
        expl_temp_2.mRealParameters.mX = parameterBundle_mRealParameters;
        expl_temp_2.mLogicalParameters.mN = 0;
        expl_temp_2.mLogicalParameters.mX = NULL;
        expl_temp_2.mIntegerParameters.mN = 0;
        expl_temp_2.mIntegerParameters.mX = NULL;
        expl_temp_2.mIndexParameters.mN = 0;
        expl_temp_2.mIndexParameters.mX = NULL;
        ok = nesl_rtp_manager_set_rtps((NeslRtpManager *)rtDW.RTP_3_RtpManager,
          rtM->Timing.t[0], expl_temp_2, diagnosticManager);
        if (!ok) {
          ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
          if (ok) {
            char *msg_7;
            msg_7 = rtw_diagnostics_msg(diagTree_2);
            rtmSetErrorStatus(rtM, msg_7);
          }
        }
      }

      rtDW.bitsForTID1.RTP_3_SetParametersNeeded = false;

      // End of SimscapeRtp: '<S34>/RTP_3'
    }

    // SimscapeExecutionBlock: '<S260>/STATE_3' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_3_SimData;
    time_4 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    simulationData->mData->mContStates.mN = 25;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineHydraulicActuator_3[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_3_Discrete;
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_3_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    ok = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = ok;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_f[0] = 0;
    tmp_e[0] = rtDW.INPUT_8_1_1[0];
    tmp_e[1] = rtDW.INPUT_8_1_1[1];
    tmp_e[2] = rtDW.INPUT_8_1_1[2];
    tmp_e[3] = rtDW.INPUT_8_1_1[3];
    tmp_f[1] = 4;
    tmp_e[4] = rtDW.INPUT_9_1_1[0];
    tmp_e[5] = rtDW.INPUT_9_1_1[1];
    tmp_e[6] = rtDW.INPUT_9_1_1[2];
    tmp_e[7] = rtDW.INPUT_9_1_1[3];
    tmp_f[2] = 8;
    tmp_e[8] = rtDW.INPUT_10_1_1[0];
    tmp_e[9] = rtDW.INPUT_10_1_1[1];
    tmp_e[10] = rtDW.INPUT_10_1_1[2];
    tmp_e[11] = rtDW.INPUT_10_1_1[3];
    tmp_f[3] = 12;
    tmp_e[12] = rtDW.INTERNAL_7_1_1[0];
    tmp_e[13] = rtDW.INTERNAL_7_1_1[1];
    tmp_e[14] = rtDW.INTERNAL_7_1_1[2];
    tmp_e[15] = rtDW.INTERNAL_7_1_1[3];
    tmp_f[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_e[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_f[0];
    simulationData->mData->mOutputs.mN = 48;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_3[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_3_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_3_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_8;
        msg_8 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(rtM, msg_8);
      }
    }

    // Lookup: '<S281>/Look-Up Table'
    rtDW.LookUpTable = rt_Lookup(&rtConstP.pooled17[0], 4, u0,
      &rtConstP.LookUpTable_YData[0]);

    // Switch: '<S42>/Switch3' incorporates:
    //   Logic: '<Root>/Logical Operator1'

    rtDW.Switch3 = !(rtDW.generator_trip != 0.0);

    // Switch: '<S42>/Switch'
    rtDW.Switch = rtDW.Switch3;

    // Lookup: '<S276>/Look-Up Table'
    rtDW.LookUpTable_n = rt_Lookup(&rtConstP.pooled19[0], 5, u0,
      &rtConstP.pooled20[0]);

    // Switch: '<S275>/Switch3'
    rtDW.Switch3_l = rtDW.Switch;

    // Switch: '<S42>/Switch1'
    rtDW.Switch1 = rtDW.Switch3;

    // Lookup: '<S278>/Look-Up Table' incorporates:
    //   Clock: '<S278>/Clock'
    //   Lookup: '<S280>/Look-Up Table'

    rtDW.LookUpTable_a = rt_Lookup(&rtConstP.pooled19[0], 5, rtM->Timing.t[0],
      &rtConstP.pooled20[0]);

    // Switch: '<S277>/Switch3'
    rtDW.Switch3_j = rtDW.Switch1;

    // Switch: '<S42>/Switch2'
    rtDW.Switch2 = rtDW.Switch3;

    // Lookup: '<S280>/Look-Up Table'
    rtDW.LookUpTable_nk = rtDW.LookUpTable_a;

    // Switch: '<S279>/Switch3'
    rtDW.Switch3_lp = rtDW.Switch2;

    // Lookup: '<S292>/Look-Up Table'
    rtDW.LookUpTable_h = rt_Lookup(&rtConstP.pooled17[0], 4, u0,
      &rtConstP.pooled21[0]);

    // Switch: '<S43>/Switch3'
    rtDW.Switch3_p = rtDW.generator_trip;

    // Switch: '<S43>/Switch'
    rtDW.Switch_d = rtDW.Switch3_p;

    // Lookup: '<S287>/Look-Up Table'
    rtDW.LookUpTable_aj = rt_Lookup(&rtConstP.pooled19[0], 5, u0,
      &rtConstP.pooled22[0]);

    // Switch: '<S286>/Switch3'
    rtDW.Switch3_o = rtDW.Switch_d;

    // Switch: '<S43>/Switch1'
    rtDW.Switch1_l = rtDW.Switch3_p;

    // Lookup: '<S289>/Look-Up Table' incorporates:
    //   Clock: '<S289>/Clock'
    //   Lookup: '<S291>/Look-Up Table'

    rtDW.LookUpTable_hy = rt_Lookup(&rtConstP.pooled19[0], 5, rtM->Timing.t[0],
      &rtConstP.pooled22[0]);

    // Switch: '<S288>/Switch3'
    rtDW.Switch3_d = rtDW.Switch1_l;

    // Switch: '<S43>/Switch2'
    rtDW.Switch2_b = rtDW.Switch3_p;

    // Lookup: '<S291>/Look-Up Table'
    rtDW.LookUpTable_g = rtDW.LookUpTable_hy;

    // Switch: '<S290>/Switch3'
    rtDW.Switch3_dj = rtDW.Switch2_b;

    // Integrator: '<S64>/Integrator'
    rtDW.Integrator_a[0] = rtX.Integrator_CSTATE_g[0];
    rtDW.Integrator_a[1] = rtX.Integrator_CSTATE_g[1];
    rtDW.Integrator_a[2] = rtX.Integrator_CSTATE_g[2];
    rtDW.Integrator_a[3] = rtX.Integrator_CSTATE_g[3];

    // Outputs for Enabled SubSystem: '<S58>/Saturation' incorporates:
    //   EnablePort: '<S63>/Enable'

    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.Saturation_MODE = ((!tmp) && rtDW.Saturation_MODE);
    }

    if (rtDW.Saturation_MODE) {
      // Integrator: '<S67>/Integrator'
      rtDW.Integrator_dc = rtX.Integrator_CSTATE_o;

      // SignalConversion generated from: '<S65>/Math Function' incorporates:
      //   Constant: '<S65>/u2'
      //
      //  About SignalConversion generated from '<S65>/Math Function':
      //   Operator: reciprocal

      rtDW.TmpSignalConversionAtMathFuncti[0] = 0.1248;
      rtDW.TmpSignalConversionAtMathFuncti[1] = 0.1791;
      rtDW.TmpSignalConversionAtMathFuncti[2] = rtDW.Integrator_dc;

      // Sum: '<S65>/Sum2' incorporates:
      //   Math: '<S65>/Math Function'
      //
      //  About '<S65>/Math Function':
      //   Operator: reciprocal

      rtDW.Sum2_l = (1.0 / rtDW.TmpSignalConversionAtMathFuncti[0] + 1.0 /
                     rtDW.TmpSignalConversionAtMathFuncti[1]) + 1.0 /
        rtDW.TmpSignalConversionAtMathFuncti[2];

      // Math: '<S65>/Math Function1'
      //
      //  About '<S65>/Math Function1':
      //   Operator: reciprocal

      rtb_MathFunction1 = 1.0 / rtDW.Sum2_l;

      // Product: '<S68>/Product2' incorporates:
      //   Constant: '<S68>/u1'

      rtDW.Product2_l[0] = 8.0128205128205128 * rtb_MathFunction1;
      rtDW.Product2_l[1] = 5.5834729201563373 * rtb_MathFunction1;

      // Product: '<S68>/Product'
      rtDW.Product[0] = rtDW.Integrator_a[0] * rtDW.Product2_l[0];
      rtDW.Product[1] = rtDW.Product2_l[1] * rtDW.Integrator_a[2];

      // Product: '<S68>/Product1'
      rtDW.Product1_l[0] = rtDW.Product2_l[0] * rtDW.Integrator_a[1];
      rtDW.Product1_l[1] = rtDW.Product2_l[1] * rtDW.Integrator_a[3];

      // Sum: '<S68>/Sum2'
      rtDW.phimq = rtDW.Product[0] + rtDW.Product[1];

      // Sum: '<S68>/Sum1'
      rtDW.phimd = rtDW.Product1_l[0] + rtDW.Product1_l[1];

      // Math: '<S63>/Math Function'
      rtb_MathFunction1 = rt_hypotd_snf(rtDW.phimq, rtDW.phimd);

      // Lookup_n-D: '<S63>/1-D Lookup Table' incorporates:
      //   Math: '<S63>/Math Function'

      rtb_Isat = look1_pbinlx(rtb_MathFunction1, rtConstP.pooled4,
        rtConstP.pooled4, &rtDW.m_bpIndex, 1U);

      // Switch: '<S63>/Switch'
      if (rtb_Isat != 0.0) {
        // Product: '<S63>/Product'
        rtDW.Lm_c = rtb_MathFunction1 / rtb_Isat;

        // Switch: '<S63>/Switch'
        rtDW.Lm = rtDW.Lm_c;
      } else {
        // Switch: '<S63>/Switch' incorporates:
        //   Constant: '<S63>/Constant1'

        rtDW.Lm = 0.0;
      }

      // End of Switch: '<S63>/Switch'

      // Assignment: '<S66>/Lm in rows[1,3] & col[1,3]'
      std::memset(&rtDW.Lminrows13col13[0], 0, sizeof(real_T) << 4U);

      // Assignment: '<S66>/Lm in rows[1,3] & col[1,3]'
      rtDW.Lminrows13col13[0] = rtDW.Lm;
      rtDW.Lminrows13col13[2] = rtDW.Lm;
      rtDW.Lminrows13col13[8] = rtDW.Lm;
      rtDW.Lminrows13col13[10] = rtDW.Lm;

      // Assignment: '<S66>/Lm in rows[2,4] & col[2,4]' incorporates:
      //   Assignment: '<S66>/Lm in rows[1,3] & col[1,3]'

      std::memcpy(&rtDW.Lminrows24col24[0], &rtDW.Lminrows13col13[0], sizeof
                  (real_T) << 4U);

      // Assignment: '<S66>/Lm in rows[2,4] & col[2,4]'
      rtDW.Lminrows24col24[5] = rtDW.Lm;
      rtDW.Lminrows24col24[7] = rtDW.Lm;
      rtDW.Lminrows24col24[13] = rtDW.Lm;
      rtDW.Lminrows24col24[15] = rtDW.Lm;
      for (i = 0; i <= 14; i += 2) {
        // Sum: '<S66>/Sum2' incorporates:
        //   Assignment: '<S66>/Lm in rows[2,4] & col[2,4]'

        tmp_12 = _mm_loadu_pd(&rtDW.Lminrows24col24[i]);

        // Sum: '<S66>/Sum2' incorporates:
        //   Constant: '<S66>/u5'

        _mm_storeu_pd(&rtDW.Sum2_c[i], _mm_add_pd(tmp_12, _mm_loadu_pd
          (&rtConstP.u5_Value[i])));
      }

      // Product: '<S63>/inversion' incorporates:
      //   Sum: '<S66>/Sum2'

      rt_invd4x4_snf(rtDW.Sum2_c, rtDW.Linv_f);
      for (i = 0; i < 4; i++) {
        for (int32_T i_0 = 0; i_0 <= 2; i_0 += 2) {
          int32_T tmp_14;
          int32_T tmp_15;

          // Product: '<S63>/Product1' incorporates:
          //   Constant: '<S63>/u1'

          tmp_14 = i << 2;
          tmp_15 = i_0 + tmp_14;
          _mm_storeu_pd(&rtDW.RLinv_j[tmp_15], _mm_set1_pd(0.0));

          // Product: '<S63>/Product1' incorporates:
          //   Constant: '<S63>/u1'
          //   Product: '<S63>/inversion'

          tmp_12 = _mm_loadu_pd(&rtDW.RLinv_j[tmp_15]);
          _mm_storeu_pd(&rtDW.RLinv_j[tmp_15], _mm_add_pd(tmp_12, _mm_mul_pd
            (_mm_set1_pd(rtDW.Linv_f[tmp_14]), _mm_loadu_pd
             (&rtConstP.u1_Value_o[i_0]))));
          tmp_12 = _mm_loadu_pd(&rtDW.RLinv_j[tmp_15]);
          _mm_storeu_pd(&rtDW.RLinv_j[tmp_15], _mm_add_pd(_mm_mul_pd(_mm_set1_pd
            (rtDW.Linv_f[tmp_14 + 1]), _mm_loadu_pd(&rtConstP.u1_Value_o[i_0 + 4])),
            tmp_12));
          tmp_12 = _mm_loadu_pd(&rtDW.RLinv_j[tmp_15]);
          _mm_storeu_pd(&rtDW.RLinv_j[tmp_15], _mm_add_pd(_mm_mul_pd(_mm_set1_pd
            (rtDW.Linv_f[tmp_14 + 2]), _mm_loadu_pd(&rtConstP.u1_Value_o[i_0 + 8])),
            tmp_12));
          tmp_12 = _mm_loadu_pd(&rtDW.RLinv_j[tmp_15]);
          _mm_storeu_pd(&rtDW.RLinv_j[tmp_15], _mm_add_pd(_mm_mul_pd(_mm_set1_pd
            (rtDW.Linv_f[tmp_14 + 3]), _mm_loadu_pd(&rtConstP.u1_Value_o[i_0 +
            12])), tmp_12));
        }
      }

      // Sum: '<S67>/Add'
      rtDW.Add = rtDW.Lm - rtDW.Integrator_dc;

      // Gain: '<S67>/1//T (T= 1e-6s)'
      rtDW.uTT1e6s = 1.0E+6 * rtDW.Add;
    }

    // End of Outputs for SubSystem: '<S58>/Saturation'

    // Switch: '<S58>/Switch' incorporates:
    //   Constant: '<S58>/Constant2'

    std::memcpy(&rtDW.Linv[0], &rtConstP.Constant2_Value[0], sizeof(real_T) <<
                4U);
    for (i = 0; i <= 2; i += 2) {
      // Product: '<S58>/Product3'
      _mm_storeu_pd(&rtDW.Product3[i], _mm_set1_pd(0.0));

      // Product: '<S58>/Product3' incorporates:
      //   Switch: '<S58>/Switch'

      tmp_12 = _mm_loadu_pd(&rtDW.Linv[i]);

      // Product: '<S58>/Product3'
      tmp_11 = _mm_loadu_pd(&rtDW.Product3[i]);
      _mm_storeu_pd(&rtDW.Product3[i], _mm_add_pd(_mm_mul_pd(tmp_12, _mm_set1_pd
        (rtDW.Integrator_a[0])), tmp_11));

      // Product: '<S58>/Product3' incorporates:
      //   Switch: '<S58>/Switch'

      tmp_12 = _mm_loadu_pd(&rtDW.Linv[i + 4]);

      // Product: '<S58>/Product3'
      tmp_11 = _mm_loadu_pd(&rtDW.Product3[i]);
      _mm_storeu_pd(&rtDW.Product3[i], _mm_add_pd(_mm_mul_pd(tmp_12, _mm_set1_pd
        (rtDW.Integrator_a[1])), tmp_11));

      // Product: '<S58>/Product3' incorporates:
      //   Switch: '<S58>/Switch'

      tmp_12 = _mm_loadu_pd(&rtDW.Linv[i + 8]);

      // Product: '<S58>/Product3'
      tmp_11 = _mm_loadu_pd(&rtDW.Product3[i]);
      _mm_storeu_pd(&rtDW.Product3[i], _mm_add_pd(_mm_mul_pd(tmp_12, _mm_set1_pd
        (rtDW.Integrator_a[2])), tmp_11));

      // Product: '<S58>/Product3' incorporates:
      //   Switch: '<S58>/Switch'

      tmp_12 = _mm_loadu_pd(&rtDW.Linv[i + 12]);

      // Product: '<S58>/Product3'
      tmp_11 = _mm_loadu_pd(&rtDW.Product3[i]);
      _mm_storeu_pd(&rtDW.Product3[i], _mm_add_pd(_mm_mul_pd(tmp_12, _mm_set1_pd
        (rtDW.Integrator_a[3])), tmp_11));
    }

    // RealImagToComplex: '<S61>/Real-Imag to Complex'
    rtDW.I1.re = rtDW.Product3[1];
    rtDW.I1.im = rtDW.Product3[0];

    // Integrator: '<S59>/Integrator'
    rtDW.Iqds2[0] = rtX.Integrator_CSTATE_n2[0];
    rtDW.Iqds2[1] = rtX.Integrator_CSTATE_n2[1];

    // RealImagToComplex: '<S59>/Real-Imag to Complex1'
    rtDW.RealImagtoComplex1.re = rtDW.Iqds2[1];
    rtDW.RealImagtoComplex1.im = rtDW.Iqds2[0];

    // Sum: '<S61>/Sum3' incorporates:
    //   RealImagToComplex: '<S59>/Real-Imag to Complex1'
    //   RealImagToComplex: '<S61>/Real-Imag to Complex'

    rtDW.Sum3.re = rtDW.I1.re + rtDW.RealImagtoComplex1.re;
    rtDW.Sum3.im = rtDW.I1.im + rtDW.RealImagtoComplex1.im;

    // Gain: '<S61>/a^2' incorporates:
    //   RealImagToComplex: '<S61>/Real-Imag to Complex'

    rtDW.a2.re = -0.49999999999999978 * rtDW.I1.re - -0.86602540378443871 *
      rtDW.I1.im;
    rtDW.a2.im = -0.49999999999999978 * rtDW.I1.im + -0.86602540378443871 *
      rtDW.I1.re;

    // Gain: '<S61>/a' incorporates:
    //   RealImagToComplex: '<S59>/Real-Imag to Complex1'

    rtDW.a.re = -0.49999999999999978 * rtDW.RealImagtoComplex1.re -
      0.86602540378443871 * rtDW.RealImagtoComplex1.im;
    rtDW.a.im = -0.49999999999999978 * rtDW.RealImagtoComplex1.im +
      0.86602540378443871 * rtDW.RealImagtoComplex1.re;

    // Sum: '<S61>/Sum1' incorporates:
    //   Gain: '<S61>/a'
    //   Gain: '<S61>/a^2'

    rtDW.Sum1.re = rtDW.a2.re + rtDW.a.re;
    rtDW.Sum1.im = rtDW.a2.im + rtDW.a.im;

    // Gain: '<S52>/ib'
    rtDW.ib[0].re = 2494.8506639458292 * rtDW.Sum3.re;
    rtDW.ib[0].im = 2494.8506639458292 * rtDW.Sum3.im;
    rtDW.ib[1].re = 2494.8506639458292 * rtDW.Sum1.re;
    rtDW.ib[1].im = 2494.8506639458292 * rtDW.Sum1.im;

    // Step: '<S96>/Step1'
    i = (tmp_13 < 5.5);

    // DataTypeConversion: '<S96>/Data Type  Conversion2'
    rtDW.bitsForTID0.DataTypeConversion2 = (i != 0);

    // Integrator: '<S96>/Integrator'
    rtDW.Ramp = rtX.Integrator_CSTATE_b;
    if (rtmIsMajorTimeStep(rtM)) {
      // Memory: '<S96>/Memory'
      rtDW.Memory = rtDW.Memory_PreviousInput;
    }

    // Switch: '<S96>/Switch2'
    if (i >= 0.5) {
      // MultiPortSwitch: '<S96>/Multiport Switch1' incorporates:
      //   Constant: '<S96>/Constant5'

      rtDW.MultiportSwitch1 = 0.0;

      // Switch: '<S96>/Switch2'
      rtDW.Switch2_d = rtDW.MultiportSwitch1;
    } else {
      // Switch: '<S96>/Switch2'
      rtDW.Switch2_d = rtDW.Memory;
    }

    // End of Switch: '<S96>/Switch2'

    // Switch: '<S96>/Switch3'
    rtDW.Switch3_d1 = rtDW.Switch2_d;

    // Switch: '<S92>/Switch2' incorporates:
    //   Constant: '<S92>/Constant1'

    rtDW.Switch2_l = 0.0;

    // Sum: '<S92>/Sum3' incorporates:
    //   Constant: '<S92>/valp_nom2'

    rtDW.Sum3_a = rtDW.Switch2_l + 20412.414523193151;

    // Lookup: '<S97>/Look-Up Table'
    rtDW.LookUpTable_l = rt_Lookup(&rtConstP.LookUpTable_XData[0], 6, u0,
      &rtConstP.LookUpTable_YData_n[0]);

    // Switch: '<S92>/Switch1'
    rtDW.Switch1_p = rtDW.Sum3_a;

    // Switch: '<S92>/Switch5'
    rtDW.Switch5[0] = rtDW.Switch1_p;
    rtDW.Switch5[1] = rtDW.Switch1_p;
    rtDW.Switch5[2] = rtDW.Switch1_p;

    // Switch: '<S92>/Switch3' incorporates:
    //   Constant: '<S92>/Constant4'

    rtDW.Switch3_c = 0.0;

    // Step: '<S92>/Step1'
    if (tmp_13 < 5.5) {
      i = 0;
    } else {
      i = -1;
    }

    // Sum: '<S92>/Sum4' incorporates:
    //   Step: '<S92>/Step'

    rtDW.Sum4 = static_cast<real_T>(!(tmp_13 < 5.0)) + static_cast<real_T>(i);

    // DataTypeConversion: '<S92>/Data Type  Conversion1'
    rtDW.bitsForTID0.DataTypeConversion1 = (rtDW.Sum4 != 0.0);

    // DataTypeConversion: '<S92>/Data Type  Conversion' incorporates:
    //   Logic: '<S92>/Logical Operator'

    rtDW.DataTypeConversion = 0.0;

    // Sum: '<S92>/Sum2'
    rtDW.Sum2_a[0] = rtDW.Switch3_c;

    // Product: '<S93>/Product1' incorporates:
    //   MagnitudeAngleToComplex: '<S93>/Magnitude-Angle to Complex'

    rtDW.Product1[0].re = rtDW.DataTypeConversion * -2041.2414523193152;
    rtDW.Product1[0].im = rtDW.DataTypeConversion * -0.0;

    // Product: '<S94>/Product1' incorporates:
    //   MagnitudeAngleToComplex: '<S94>/Magnitude-Angle to Complex'

    rtDW.Product1_d[0].re = rtDW.DataTypeConversion * 0.0;
    rtDW.Product1_d[0].im = rtDW.DataTypeConversion * 0.0;

    // Sum: '<S92>/Sum5' incorporates:
    //   MagnitudeAngleToComplex: '<S92>/Magnitude-Angle to Complex'
    //   Product: '<S93>/Product1'
    //   Product: '<S94>/Product1'

    rtDW.Sum5[0].re = (rtDW.Switch5[0] * std::cos(rtDW.Sum2_a[0]) +
                       rtDW.Product1[0].re) + rtDW.Product1_d[0].re;
    rtDW.Sum5[0].im = (rtDW.Switch5[0] * std::sin(rtDW.Sum2_a[0]) +
                       rtDW.Product1[0].im) + rtDW.Product1_d[0].im;

    // Sum: '<S92>/Sum2' incorporates:
    //   Constant: '<S92>/P1'

    rtDW.Sum2_a[1] = rtDW.Switch3_c + -2.0943951023931953;

    // Product: '<S93>/Product1' incorporates:
    //   MagnitudeAngleToComplex: '<S93>/Magnitude-Angle to Complex'

    rtDW.Product1[1].re = rtDW.DataTypeConversion * 1020.6207261596571;
    rtDW.Product1[1].im = rtDW.DataTypeConversion * 1767.766952966369;

    // Product: '<S94>/Product1' incorporates:
    //   MagnitudeAngleToComplex: '<S94>/Magnitude-Angle to Complex'

    rtDW.Product1_d[1].re = rtDW.DataTypeConversion * -0.0;
    rtDW.Product1_d[1].im = rtDW.DataTypeConversion * 0.0;

    // Sum: '<S92>/Sum5' incorporates:
    //   MagnitudeAngleToComplex: '<S92>/Magnitude-Angle to Complex'
    //   Product: '<S93>/Product1'
    //   Product: '<S94>/Product1'

    rtDW.Sum5[1].re = (rtDW.Switch5[1] * std::cos(rtDW.Sum2_a[1]) +
                       rtDW.Product1[1].re) + rtDW.Product1_d[1].re;
    rtDW.Sum5[1].im = (rtDW.Switch5[1] * std::sin(rtDW.Sum2_a[1]) +
                       rtDW.Product1[1].im) + rtDW.Product1_d[1].im;

    // Sum: '<S92>/Sum2' incorporates:
    //   Constant: '<S92>/P1'

    rtDW.Sum2_a[2] = rtDW.Switch3_c + 2.0943951023931953;

    // Product: '<S93>/Product1' incorporates:
    //   MagnitudeAngleToComplex: '<S93>/Magnitude-Angle to Complex'

    rtDW.Product1[2].re = rtDW.DataTypeConversion * 1020.6207261596571;
    rtDW.Product1[2].im = rtDW.DataTypeConversion * -1767.766952966369;

    // Product: '<S94>/Product1' incorporates:
    //   MagnitudeAngleToComplex: '<S94>/Magnitude-Angle to Complex'

    rtDW.Product1_d[2].re = rtDW.DataTypeConversion * 0.0;
    rtDW.Product1_d[2].im = rtDW.DataTypeConversion * -0.0;

    // Sum: '<S92>/Sum5' incorporates:
    //   MagnitudeAngleToComplex: '<S92>/Magnitude-Angle to Complex'
    //   Product: '<S93>/Product1'
    //   Product: '<S94>/Product1'

    rtDW.Sum5[2].re = (rtDW.Switch5[2] * std::cos(rtDW.Sum2_a[2]) +
                       rtDW.Product1[2].re) + rtDW.Product1_d[2].re;
    rtDW.Sum5[2].im = (rtDW.Switch5[2] * std::sin(rtDW.Sum2_a[2]) +
                       rtDW.Product1[2].im) + rtDW.Product1_d[2].im;

    // ComplexToRealImag: '<S309>/Complex to Real-Imag' incorporates:
    //   Constant: '<S306>/SwitchCurrents'

    rtDW.ComplextoRealImag_o1[6] = rtDW.ib[0].re;
    rtDW.ComplextoRealImag_o1[7] = rtDW.ib[1].re;
    rtDW.ComplextoRealImag_o1[8] = rtDW.Sum5[0].re;
    rtDW.ComplextoRealImag_o1[9] = rtDW.Sum5[1].re;
    rtDW.ComplextoRealImag_o1[10] = rtDW.Sum5[2].re;
    for (i = 0; i < 6; i++) {
      rtDW.ComplextoRealImag_o1[i] = 0.0;

      // ComplexToRealImag: '<S309>/Complex to Real-Imag' incorporates:
      //   Constant: '<S306>/SwitchCurrents'

      rtDW.ComplextoRealImag_o2[i] = 0.0;
    }

    // End of ComplexToRealImag: '<S309>/Complex to Real-Imag'

    // ComplexToRealImag: '<S309>/Complex to Real-Imag'
    rtDW.ComplextoRealImag_o2[6] = rtDW.ib[0].im;
    rtDW.ComplextoRealImag_o2[7] = rtDW.ib[1].im;
    rtDW.ComplextoRealImag_o2[8] = rtDW.Sum5[0].im;
    rtDW.ComplextoRealImag_o2[9] = rtDW.Sum5[1].im;
    rtDW.ComplextoRealImag_o2[10] = rtDW.Sum5[2].im;

    // S-Function (sfun_psbdqc): '<S304>/State-Space'

    // Level2 S-Function Block: '<S304>/State-Space' (sfun_psbdqc)
    {
      SimStruct *rts = rtM->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    // SimscapeExecutionBlock: '<S260>/OUTPUT_5_0' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_5_0_SimData;
    time_5 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_5;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_5_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_5_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_h[0] = 0;
    tmp_g[0] = rtDW.INPUT_2_1_1[0];
    tmp_g[1] = rtDW.INPUT_2_1_1[1];
    tmp_g[2] = rtDW.INPUT_2_1_1[2];
    tmp_g[3] = rtDW.INPUT_2_1_1[3];
    tmp_h[1] = 4;
    tmp_g[4] = rtDW.INPUT_3_1_1[0];
    tmp_g[5] = rtDW.INPUT_3_1_1[1];
    tmp_g[6] = rtDW.INPUT_3_1_1[2];
    tmp_g[7] = rtDW.INPUT_3_1_1[3];
    tmp_h[2] = 8;
    tmp_g[8] = rtDW.INPUT_4_1_1[0];
    tmp_g[9] = rtDW.INPUT_4_1_1[1];
    tmp_g[10] = rtDW.INPUT_4_1_1[2];
    tmp_g[11] = rtDW.INPUT_4_1_1[3];
    tmp_h[3] = 12;
    tmp_g[12] = rtDW.INTERNAL_4_1_1[0];
    tmp_g[13] = rtDW.INTERNAL_4_1_1[1];
    tmp_g[14] = rtDW.INTERNAL_4_1_1[2];
    tmp_g[15] = rtDW.INTERNAL_4_1_1[3];
    tmp_h[4] = 16;
    std::memcpy(&tmp_g[16], &rtDW.STATE_5[0], 48U * sizeof(real_T));
    tmp_h[5] = 64;
    simulationData->mData->mInputValues.mN = 64;
    simulationData->mData->mInputValues.mX = &tmp_g[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_h[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_5_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_5_0_DiagMgr;
    diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_5_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_9;
        msg_9 = rtw_diagnostics_msg(diagnosticTree_5);
        rtmSetErrorStatus(rtM, msg_9);
      }
    }

    // SimscapeInputBlock: '<S260>/INTERNAL_9_1_1'
    rtDW.INTERNAL_9_1_1[0] = rtDW.OUTPUT_5_0[6];
    rtDW.INTERNAL_9_1_1[1] = 0.0;
    rtDW.INTERNAL_9_1_1[2] = 0.0;
    rtDW.INTERNAL_9_1_1[3] = 0.0;

    // SimscapeExecutionBlock: '<S260>/OUTPUT_4_0' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_4_0_SimData;
    time_6 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_6;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_4_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_4_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_j[0] = 0;
    tmp_i[0] = rtDW.INPUT_5_1_1[0];
    tmp_i[1] = rtDW.INPUT_5_1_1[1];
    tmp_i[2] = rtDW.INPUT_5_1_1[2];
    tmp_i[3] = rtDW.INPUT_5_1_1[3];
    tmp_j[1] = 4;
    tmp_i[4] = rtDW.INPUT_6_1_1[0];
    tmp_i[5] = rtDW.INPUT_6_1_1[1];
    tmp_i[6] = rtDW.INPUT_6_1_1[2];
    tmp_i[7] = rtDW.INPUT_6_1_1[3];
    tmp_j[2] = 8;
    tmp_i[8] = rtDW.INPUT_7_1_1[0];
    tmp_i[9] = rtDW.INPUT_7_1_1[1];
    tmp_i[10] = rtDW.INPUT_7_1_1[2];
    tmp_i[11] = rtDW.INPUT_7_1_1[3];
    tmp_j[3] = 12;
    tmp_i[12] = rtDW.INTERNAL_5_1_1[0];
    tmp_i[13] = rtDW.INTERNAL_5_1_1[1];
    tmp_i[14] = rtDW.INTERNAL_5_1_1[2];
    tmp_i[15] = rtDW.INTERNAL_5_1_1[3];
    tmp_j[4] = 16;
    std::memcpy(&tmp_i[16], &rtDW.STATE_4[0], 48U * sizeof(real_T));
    tmp_j[5] = 64;
    simulationData->mData->mInputValues.mN = 64;
    simulationData->mData->mInputValues.mX = &tmp_i[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_j[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_4_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_4_0_DiagMgr;
    diagnosticTree_6 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_4_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_a;
        msg_a = rtw_diagnostics_msg(diagnosticTree_6);
        rtmSetErrorStatus(rtM, msg_a);
      }
    }

    // SimscapeInputBlock: '<S260>/INTERNAL_6_1_1'
    rtDW.INTERNAL_6_1_1[0] = rtDW.OUTPUT_4_0[6];
    rtDW.INTERNAL_6_1_1[1] = 0.0;
    rtDW.INTERNAL_6_1_1[2] = 0.0;
    rtDW.INTERNAL_6_1_1[3] = 0.0;

    // SimscapeExecutionBlock: '<S260>/OUTPUT_3_0' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_3_0_SimData;
    time_7 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_7;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_3_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_3_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_l[0] = 0;
    tmp_k[0] = rtDW.INPUT_8_1_1[0];
    tmp_k[1] = rtDW.INPUT_8_1_1[1];
    tmp_k[2] = rtDW.INPUT_8_1_1[2];
    tmp_k[3] = rtDW.INPUT_8_1_1[3];
    tmp_l[1] = 4;
    tmp_k[4] = rtDW.INPUT_9_1_1[0];
    tmp_k[5] = rtDW.INPUT_9_1_1[1];
    tmp_k[6] = rtDW.INPUT_9_1_1[2];
    tmp_k[7] = rtDW.INPUT_9_1_1[3];
    tmp_l[2] = 8;
    tmp_k[8] = rtDW.INPUT_10_1_1[0];
    tmp_k[9] = rtDW.INPUT_10_1_1[1];
    tmp_k[10] = rtDW.INPUT_10_1_1[2];
    tmp_k[11] = rtDW.INPUT_10_1_1[3];
    tmp_l[3] = 12;
    tmp_k[12] = rtDW.INTERNAL_7_1_1[0];
    tmp_k[13] = rtDW.INTERNAL_7_1_1[1];
    tmp_k[14] = rtDW.INTERNAL_7_1_1[2];
    tmp_k[15] = rtDW.INTERNAL_7_1_1[3];
    tmp_l[4] = 16;
    std::memcpy(&tmp_k[16], &rtDW.STATE_3[0], 48U * sizeof(real_T));
    tmp_l[5] = 64;
    simulationData->mData->mInputValues.mN = 64;
    simulationData->mData->mInputValues.mX = &tmp_k[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_l[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_3_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_3_0_DiagMgr;
    diagnosticTree_7 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_3_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_b;
        msg_b = rtw_diagnostics_msg(diagnosticTree_7);
        rtmSetErrorStatus(rtM, msg_b);
      }
    }

    // SimscapeInputBlock: '<S260>/INTERNAL_8_1_1'
    rtDW.INTERNAL_8_1_1[0] = rtDW.OUTPUT_3_0[6];
    rtDW.INTERNAL_8_1_1[1] = 0.0;
    rtDW.INTERNAL_8_1_1[2] = 0.0;
    rtDW.INTERNAL_8_1_1[3] = 0.0;

    // SimscapeExecutionBlock: '<S260>/OUTPUT_7_0' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_7_0_SimData;
    time_8 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_8;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_7_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_7_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_n[0] = 0;
    tmp_m[0] = rtDW.INPUT_1_1_1[0];
    tmp_m[1] = rtDW.INPUT_1_1_1[1];
    tmp_m[2] = rtDW.INPUT_1_1_1[2];
    tmp_m[3] = rtDW.INPUT_1_1_1[3];
    tmp_n[1] = 4;
    tmp_m[4] = rtDW.INPUT_18_1_1[0];
    tmp_m[5] = rtDW.INPUT_18_1_1[1];
    tmp_m[6] = rtDW.INPUT_18_1_1[2];
    tmp_m[7] = rtDW.INPUT_18_1_1[3];
    tmp_n[2] = 8;
    tmp_m[8] = rtDW.INTERNAL_10_1_1[0];
    tmp_m[9] = rtDW.INTERNAL_10_1_1[1];
    tmp_m[10] = rtDW.INTERNAL_10_1_1[2];
    tmp_m[11] = rtDW.INTERNAL_10_1_1[3];
    tmp_n[3] = 12;
    std::memcpy(&tmp_m[12], &rtDW.STATE_7[0], 51U * sizeof(real_T));
    tmp_n[4] = 63;
    simulationData->mData->mInputValues.mN = 63;
    simulationData->mData->mInputValues.mX = &tmp_m[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_n[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_7_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_7_0_DiagMgr;
    diagnosticTree_8 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_7_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_c;
        msg_c = rtw_diagnostics_msg(diagnosticTree_8);
        rtmSetErrorStatus(rtM, msg_c);
      }
    }

    // SimscapeInputBlock: '<S260>/INTERNAL_13_1_1'
    rtDW.INTERNAL_13_1_1[0] = rtDW.OUTPUT_7_0[1];
    rtDW.INTERNAL_13_1_1[1] = 0.0;
    rtDW.INTERNAL_13_1_1[2] = 0.0;
    rtDW.INTERNAL_13_1_1[3] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      // SimscapeRtp: '<S34>/RTP_2' incorporates:
      //   Constant: '<S200>/Subsystem_around_RTP_5248C8E1_w'
      //   Constant: '<S208>/Subsystem_around_RTP_29946097_w'
      //   Constant: '<S216>/Subsystem_around_RTP_1A0CD83E_w'
      //   Constant: '<S224>/Subsystem_around_RTP_49C8D5DC_w'

      if (rtDW.bitsForTID1.RTP_2_SetParametersNeeded) {
        NeuDiagnosticTree *diagTree_3;
        std::memset(&tmp_o[0], 0, sizeof(real_T) << 4U);
        parameterBundle_mRealParameters = &tmp_o[0];
        diagnosticManager = rtw_create_diagnostics();
        diagTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
        expl_temp_3.mRealParameters.mN = 16;
        expl_temp_3.mRealParameters.mX = parameterBundle_mRealParameters;
        expl_temp_3.mLogicalParameters.mN = 0;
        expl_temp_3.mLogicalParameters.mX = NULL;
        expl_temp_3.mIntegerParameters.mN = 0;
        expl_temp_3.mIntegerParameters.mX = NULL;
        expl_temp_3.mIndexParameters.mN = 0;
        expl_temp_3.mIndexParameters.mX = NULL;
        ok = nesl_rtp_manager_set_rtps((NeslRtpManager *)rtDW.RTP_2_RtpManager,
          rtM->Timing.t[0], expl_temp_3, diagnosticManager);
        if (!ok) {
          ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
          if (ok) {
            char *msg_d;
            msg_d = rtw_diagnostics_msg(diagTree_3);
            rtmSetErrorStatus(rtM, msg_d);
          }
        }
      }

      rtDW.bitsForTID1.RTP_2_SetParametersNeeded = false;

      // End of SimscapeRtp: '<S34>/RTP_2'
    }

    // Integrator: '<S192>/Integrator'
    rtDW.Integrator_c[0] = rtX.Integrator_CSTATE_mt[0];

    // Gain: '<S192>/Gain'
    rtDW.Gain_l[0] = 10.0 * rtDW.Integrator_c[0];

    // Integrator: '<S192>/Integrator'
    rtDW.Integrator_c[1] = rtX.Integrator_CSTATE_mt[1];

    // Gain: '<S192>/Gain'
    rtDW.Gain_l[1] = 10.0 * rtDW.Integrator_c[1];

    // Integrator: '<S192>/Integrator'
    rtDW.Integrator_c[2] = rtX.Integrator_CSTATE_mt[2];

    // Gain: '<S192>/Gain'
    rtDW.Gain_l[2] = 10.0 * rtDW.Integrator_c[2];

    // Integrator: '<S192>/Integrator'
    rtDW.Integrator_c[3] = rtX.Integrator_CSTATE_mt[3];

    // Gain: '<S192>/Gain'
    rtDW.Gain_l[3] = 10.0 * rtDW.Integrator_c[3];

    // SimscapeInputBlock: '<S260>/INPUT_11_1_1'
    if (rtDW.INPUT_11_1_1_FirstOutput == 0.0) {
      rtDW.INPUT_11_1_1_FirstOutput = 1.0;
      rtX.Wind_TurbineIdeal_MotorIdeal_Ya = rtDW.Gain_l[0];
    }

    rtDW.INPUT_11_1_1[0] = rtX.Wind_TurbineIdeal_MotorIdeal_Ya;
    rtDW.INPUT_11_1_1[1] = (rtDW.Gain_l[0] - rtX.Wind_TurbineIdeal_MotorIdeal_Ya)
      * 200.0;
    rtDW.INPUT_11_1_1[2] = 0.0;
    rtDW.INPUT_11_1_1[3] = 0.0;

    // End of SimscapeInputBlock: '<S260>/INPUT_11_1_1'

    // SimscapeInputBlock: '<S260>/INPUT_12_1_1'
    if (rtDW.INPUT_12_1_1_FirstOutput == 0.0) {
      rtDW.INPUT_12_1_1_FirstOutput = 1.0;
      rtX.Wind_TurbineIdeal_MotorIdeal__e = rtDW.Gain_l[1];
    }

    rtDW.INPUT_12_1_1[0] = rtX.Wind_TurbineIdeal_MotorIdeal__e;
    rtDW.INPUT_12_1_1[1] = (rtDW.Gain_l[1] - rtX.Wind_TurbineIdeal_MotorIdeal__e)
      * 200.0;
    rtDW.INPUT_12_1_1[2] = 0.0;
    rtDW.INPUT_12_1_1[3] = 0.0;

    // End of SimscapeInputBlock: '<S260>/INPUT_12_1_1'

    // SimscapeInputBlock: '<S260>/INPUT_13_1_1'
    if (rtDW.INPUT_13_1_1_FirstOutput == 0.0) {
      rtDW.INPUT_13_1_1_FirstOutput = 1.0;
      rtX.Wind_TurbineIdeal_MotorIdeal__g = rtDW.Gain_l[2];
    }

    rtDW.INPUT_13_1_1[0] = rtX.Wind_TurbineIdeal_MotorIdeal__g;
    rtDW.INPUT_13_1_1[1] = (rtDW.Gain_l[2] - rtX.Wind_TurbineIdeal_MotorIdeal__g)
      * 200.0;
    rtDW.INPUT_13_1_1[2] = 0.0;
    rtDW.INPUT_13_1_1[3] = 0.0;

    // End of SimscapeInputBlock: '<S260>/INPUT_13_1_1'

    // SimscapeInputBlock: '<S260>/INPUT_14_1_1'
    if (rtDW.INPUT_14_1_1_FirstOutput == 0.0) {
      rtDW.INPUT_14_1_1_FirstOutput = 1.0;
      rtX.Wind_TurbineIdeal_MotorIdeal__a = rtDW.Gain_l[3];
    }

    rtDW.INPUT_14_1_1[0] = rtX.Wind_TurbineIdeal_MotorIdeal__a;
    rtDW.INPUT_14_1_1[1] = (rtDW.Gain_l[3] - rtX.Wind_TurbineIdeal_MotorIdeal__a)
      * 200.0;
    rtDW.INPUT_14_1_1[2] = 0.0;
    rtDW.INPUT_14_1_1[3] = 0.0;

    // End of SimscapeInputBlock: '<S260>/INPUT_14_1_1'

    // SimscapeInputBlock: '<S260>/INTERNAL_11_1_1'
    if (rtDW.INTERNAL_11_1_1_FirstOutput == 0.0) {
      rtDW.INTERNAL_11_1_1_FirstOutput = 1.0;
      rtX.Wind_TurbineoutputFiltered_8434 = rtDW.OUTPUT_1_0[8];
    }

    rtDW.INTERNAL_11_1_1[0] = rtX.Wind_TurbineoutputFiltered_8434;
    rtDW.INTERNAL_11_1_1[1] = (rtDW.OUTPUT_1_0[8] -
      rtX.Wind_TurbineoutputFiltered_8434) * 1000.0;
    rtDW.INTERNAL_11_1_1[2] = 0.0;
    rtDW.INTERNAL_11_1_1[3] = 0.0;

    // End of SimscapeInputBlock: '<S260>/INTERNAL_11_1_1'

    // SimscapeExecutionBlock: '<S260>/STATE_2' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_2_SimData;
    time_9 = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_9;
    simulationData->mData->mContStates.mN = 6;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineIdeal_MotorIdeal__n[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_2_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    ok = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = ok;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_q[0] = 0;
    tmp_p[0] = rtDW.INPUT_11_1_1[0];
    tmp_p[1] = rtDW.INPUT_11_1_1[1];
    tmp_p[2] = rtDW.INPUT_11_1_1[2];
    tmp_p[3] = rtDW.INPUT_11_1_1[3];
    tmp_q[1] = 4;
    tmp_p[4] = rtDW.INPUT_12_1_1[0];
    tmp_p[5] = rtDW.INPUT_12_1_1[1];
    tmp_p[6] = rtDW.INPUT_12_1_1[2];
    tmp_p[7] = rtDW.INPUT_12_1_1[3];
    tmp_q[2] = 8;
    tmp_p[8] = rtDW.INPUT_13_1_1[0];
    tmp_p[9] = rtDW.INPUT_13_1_1[1];
    tmp_p[10] = rtDW.INPUT_13_1_1[2];
    tmp_p[11] = rtDW.INPUT_13_1_1[3];
    tmp_q[3] = 12;
    tmp_p[12] = rtDW.INPUT_14_1_1[0];
    tmp_p[13] = rtDW.INPUT_14_1_1[1];
    tmp_p[14] = rtDW.INPUT_14_1_1[2];
    tmp_p[15] = rtDW.INPUT_14_1_1[3];
    tmp_q[4] = 16;
    tmp_p[16] = rtDW.INTERNAL_11_1_1[0];
    tmp_p[17] = rtDW.INTERNAL_11_1_1[1];
    tmp_p[18] = rtDW.INTERNAL_11_1_1[2];
    tmp_p[19] = rtDW.INTERNAL_11_1_1[3];
    tmp_q[5] = 20;
    simulationData->mData->mInputValues.mN = 20;
    simulationData->mData->mInputValues.mX = &tmp_p[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_q[0];
    simulationData->mData->mOutputs.mN = 6;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_2[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_2_DiagMgr;
    diagnosticTree_9 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_2_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_e;
        msg_e = rtw_diagnostics_msg(diagnosticTree_9);
        rtmSetErrorStatus(rtM, msg_e);
      }
    }

    // SimscapeExecutionBlock: '<S260>/OUTPUT_2_0' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_2_0_SimData;
    time_a = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_a;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_2_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_2_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_s[0] = 0;
    tmp_r[0] = rtDW.INPUT_11_1_1[0];
    tmp_r[1] = rtDW.INPUT_11_1_1[1];
    tmp_r[2] = rtDW.INPUT_11_1_1[2];
    tmp_r[3] = rtDW.INPUT_11_1_1[3];
    tmp_s[1] = 4;
    tmp_r[4] = rtDW.INPUT_12_1_1[0];
    tmp_r[5] = rtDW.INPUT_12_1_1[1];
    tmp_r[6] = rtDW.INPUT_12_1_1[2];
    tmp_r[7] = rtDW.INPUT_12_1_1[3];
    tmp_s[2] = 8;
    tmp_r[8] = rtDW.INPUT_13_1_1[0];
    tmp_r[9] = rtDW.INPUT_13_1_1[1];
    tmp_r[10] = rtDW.INPUT_13_1_1[2];
    tmp_r[11] = rtDW.INPUT_13_1_1[3];
    tmp_s[3] = 12;
    tmp_r[12] = rtDW.INPUT_14_1_1[0];
    tmp_r[13] = rtDW.INPUT_14_1_1[1];
    tmp_r[14] = rtDW.INPUT_14_1_1[2];
    tmp_r[15] = rtDW.INPUT_14_1_1[3];
    tmp_s[4] = 16;
    tmp_r[16] = rtDW.INTERNAL_11_1_1[0];
    tmp_r[17] = rtDW.INTERNAL_11_1_1[1];
    tmp_r[18] = rtDW.INTERNAL_11_1_1[2];
    tmp_r[19] = rtDW.INTERNAL_11_1_1[3];
    tmp_s[5] = 20;
    tmp_r[20] = rtDW.STATE_2[0];
    tmp_r[21] = rtDW.STATE_2[1];
    tmp_r[22] = rtDW.STATE_2[2];
    tmp_r[23] = rtDW.STATE_2[3];
    tmp_r[24] = rtDW.STATE_2[4];
    tmp_r[25] = rtDW.STATE_2[5];
    tmp_s[6] = 26;
    simulationData->mData->mInputValues.mN = 26;
    simulationData->mData->mInputValues.mX = &tmp_r[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_s[0];
    simulationData->mData->mOutputs.mN = 5;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_2_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_2_0_DiagMgr;
    diagnosticTree_a = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_2_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_f;
        msg_f = rtw_diagnostics_msg(diagnosticTree_a);
        rtmSetErrorStatus(rtM, msg_f);
      }
    }

    // SimscapeInputBlock: '<S260>/INTERNAL_12_1_1'
    rtDW.INTERNAL_12_1_1[0] = rtDW.OUTPUT_2_0[4];
    rtDW.INTERNAL_12_1_1[1] = 0.0;
    rtDW.INTERNAL_12_1_1[2] = 0.0;
    rtDW.INTERNAL_12_1_1[3] = 0.0;

    // Integrator: '<S19>/Integrator'
    rtDW.Integrator_d = rtX.Integrator_CSTATE_as;

    // Gain: '<S19>/Gain'
    rtDW.Gain_p = 100.0 * rtDW.Integrator_d;

    // SimscapeInputBlock: '<S260>/INPUT_16_1_1'
    rtDW.INPUT_16_1_1[0] = rtDW.Gain_p;
    rtDW.INPUT_16_1_1[1] = 0.0;
    rtDW.INPUT_16_1_1[2] = 0.0;
    rtDW.INPUT_16_1_1[3] = 0.0;

    // Integrator: '<S18>/Integrator'
    rtDW.Integrator_gr = rtX.Integrator_CSTATE_gx;

    // Gain: '<S18>/Gain'
    rtDW.Gain_a = 100.0 * rtDW.Integrator_gr;

    // SimscapeInputBlock: '<S260>/INPUT_17_1_1'
    rtDW.INPUT_17_1_1[0] = rtDW.Gain_a;
    rtDW.INPUT_17_1_1[1] = 0.0;
    rtDW.INPUT_17_1_1[2] = 0.0;
    rtDW.INPUT_17_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INPUT_15_1_1'
    rtDW.INPUT_15_1_1[0] = rtDW.FromWs[0];
    rtDW.INPUT_15_1_1[1] = 0.0;
    rtDW.INPUT_15_1_1[2] = 0.0;
    rtDW.INPUT_15_1_1[3] = 0.0;

    // SimscapeExecutionBlock: '<S260>/STATE_8' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_8_SimData;
    time_b = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_b;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_8_Discrete;
    simulationData->mData->mModeVector.mN = 3;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_8_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_u[0] = 0;
    tmp_t[0] = rtDW.INPUT_16_1_1[0];
    tmp_t[1] = rtDW.INPUT_16_1_1[1];
    tmp_t[2] = rtDW.INPUT_16_1_1[2];
    tmp_t[3] = rtDW.INPUT_16_1_1[3];
    tmp_u[1] = 4;
    tmp_t[4] = rtDW.INPUT_17_1_1[0];
    tmp_t[5] = rtDW.INPUT_17_1_1[1];
    tmp_t[6] = rtDW.INPUT_17_1_1[2];
    tmp_t[7] = rtDW.INPUT_17_1_1[3];
    tmp_u[2] = 8;
    tmp_t[8] = rtDW.INPUT_15_1_1[0];
    tmp_t[9] = rtDW.INPUT_15_1_1[1];
    tmp_t[10] = rtDW.INPUT_15_1_1[2];
    tmp_t[11] = rtDW.INPUT_15_1_1[3];
    tmp_u[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_t[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_u[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_8[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_8_DiagMgr;
    diagnosticTree_b = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_8_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_g;
        msg_g = rtw_diagnostics_msg(diagnosticTree_b);
        rtmSetErrorStatus(rtM, msg_g);
      }
    }

    // SimscapeExecutionBlock: '<S260>/OUTPUT_8_0' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_8_0_SimData;
    time_c = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_c;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_8_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_8_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_w[0] = 0;
    tmp_v[0] = rtDW.INPUT_16_1_1[0];
    tmp_v[1] = rtDW.INPUT_16_1_1[1];
    tmp_v[2] = rtDW.INPUT_16_1_1[2];
    tmp_v[3] = rtDW.INPUT_16_1_1[3];
    tmp_w[1] = 4;
    tmp_v[4] = rtDW.INPUT_17_1_1[0];
    tmp_v[5] = rtDW.INPUT_17_1_1[1];
    tmp_v[6] = rtDW.INPUT_17_1_1[2];
    tmp_v[7] = rtDW.INPUT_17_1_1[3];
    tmp_w[2] = 8;
    tmp_v[8] = rtDW.INPUT_15_1_1[0];
    tmp_v[9] = rtDW.INPUT_15_1_1[1];
    tmp_v[10] = rtDW.INPUT_15_1_1[2];
    tmp_v[11] = rtDW.INPUT_15_1_1[3];
    tmp_w[3] = 12;
    tmp_v[12] = rtDW.STATE_8[0];
    tmp_v[13] = rtDW.STATE_8[1];
    tmp_v[14] = rtDW.STATE_8[2];
    tmp_w[4] = 15;
    simulationData->mData->mInputValues.mN = 15;
    simulationData->mData->mInputValues.mX = &tmp_v[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_w[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_8_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_8_0_DiagMgr;
    diagnosticTree_c = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_8_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_h;
        msg_h = rtw_diagnostics_msg(diagnosticTree_c);
        rtmSetErrorStatus(rtM, msg_h);
      }
    }

    // SimscapeInputBlock: '<S260>/INTERNAL_2_1_1'
    rtDW.INTERNAL_2_1_1[0] = rtDW.OUTPUT_8_0[0];
    rtDW.INTERNAL_2_1_1[1] = 0.0;
    rtDW.INTERNAL_2_1_1[2] = 0.0;
    rtDW.INTERNAL_2_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_3_1_1'
    rtDW.INTERNAL_3_1_1[0] = rtDW.OUTPUT_8_0[1];
    rtDW.INTERNAL_3_1_1[1] = 0.0;
    rtDW.INTERNAL_3_1_1[2] = 0.0;
    rtDW.INTERNAL_3_1_1[3] = 0.0;

    // SimscapeLtiOutput: '<S260>/LTI_OUTPUT_6_1'
    rtDW.LTI_OUTPUT_6_1 = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_1_1_1'
    rtDW.INTERNAL_1_1_1[0] = rtDW.LTI_OUTPUT_6_1;
    rtDW.INTERNAL_1_1_1[1] = 0.0;
    rtDW.INTERNAL_1_1_1[2] = 0.0;
    rtDW.INTERNAL_1_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_2_2_1'
    rtDW.INTERNAL_2_2_1[0] = rtDW.OUTPUT_8_0[0];
    rtDW.INTERNAL_2_2_1[1] = 0.0;
    rtDW.INTERNAL_2_2_1[2] = 0.0;
    rtDW.INTERNAL_2_2_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_3_2_1'
    rtDW.INTERNAL_3_2_1[0] = rtDW.OUTPUT_8_0[1];
    rtDW.INTERNAL_3_2_1[1] = 0.0;
    rtDW.INTERNAL_3_2_1[2] = 0.0;
    rtDW.INTERNAL_3_2_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_1_2_1'
    rtDW.INTERNAL_1_2_1[0] = rtDW.LTI_OUTPUT_6_1;
    rtDW.INTERNAL_1_2_1[1] = 0.0;
    rtDW.INTERNAL_1_2_1[2] = 0.0;
    rtDW.INTERNAL_1_2_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_2_3_1'
    rtDW.INTERNAL_2_3_1[0] = rtDW.OUTPUT_8_0[0];
    rtDW.INTERNAL_2_3_1[1] = 0.0;
    rtDW.INTERNAL_2_3_1[2] = 0.0;
    rtDW.INTERNAL_2_3_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_3_3_1'
    rtDW.INTERNAL_3_3_1[0] = rtDW.OUTPUT_8_0[1];
    rtDW.INTERNAL_3_3_1[1] = 0.0;
    rtDW.INTERNAL_3_3_1[2] = 0.0;
    rtDW.INTERNAL_3_3_1[3] = 0.0;

    // SimscapeInputBlock: '<S260>/INTERNAL_1_3_1'
    rtDW.INTERNAL_1_3_1[0] = rtDW.LTI_OUTPUT_6_1;
    rtDW.INTERNAL_1_3_1[1] = 0.0;
    rtDW.INTERNAL_1_3_1[2] = 0.0;
    rtDW.INTERNAL_1_3_1[3] = 0.0;

    // SimscapeExecutionBlock: '<S260>/OUTPUT_1_1' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_1_SimData;
    time_d = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_d;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_1_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_y[0] = 0;
    tmp_x[0] = rtDW.INTERNAL_9_1_1[0];
    tmp_x[1] = rtDW.INTERNAL_9_1_1[1];
    tmp_x[2] = rtDW.INTERNAL_9_1_1[2];
    tmp_x[3] = rtDW.INTERNAL_9_1_1[3];
    tmp_y[1] = 4;
    tmp_x[4] = rtDW.INTERNAL_6_1_1[0];
    tmp_x[5] = rtDW.INTERNAL_6_1_1[1];
    tmp_x[6] = rtDW.INTERNAL_6_1_1[2];
    tmp_x[7] = rtDW.INTERNAL_6_1_1[3];
    tmp_y[2] = 8;
    tmp_x[8] = rtDW.INTERNAL_8_1_1[0];
    tmp_x[9] = rtDW.INTERNAL_8_1_1[1];
    tmp_x[10] = rtDW.INTERNAL_8_1_1[2];
    tmp_x[11] = rtDW.INTERNAL_8_1_1[3];
    tmp_y[3] = 12;
    tmp_x[12] = rtDW.INTERNAL_13_1_1[0];
    tmp_x[13] = rtDW.INTERNAL_13_1_1[1];
    tmp_x[14] = rtDW.INTERNAL_13_1_1[2];
    tmp_x[15] = rtDW.INTERNAL_13_1_1[3];
    tmp_y[4] = 16;
    tmp_x[16] = rtDW.INTERNAL_12_1_1[0];
    tmp_x[17] = rtDW.INTERNAL_12_1_1[1];
    tmp_x[18] = rtDW.INTERNAL_12_1_1[2];
    tmp_x[19] = rtDW.INTERNAL_12_1_1[3];
    tmp_y[5] = 20;
    tmp_x[20] = rtDW.INTERNAL_2_1_1[0];
    tmp_x[21] = rtDW.INTERNAL_2_1_1[1];
    tmp_x[22] = rtDW.INTERNAL_2_1_1[2];
    tmp_x[23] = rtDW.INTERNAL_2_1_1[3];
    tmp_y[6] = 24;
    tmp_x[24] = rtDW.INTERNAL_3_1_1[0];
    tmp_x[25] = rtDW.INTERNAL_3_1_1[1];
    tmp_x[26] = rtDW.INTERNAL_3_1_1[2];
    tmp_x[27] = rtDW.INTERNAL_3_1_1[3];
    tmp_y[7] = 28;
    tmp_x[28] = rtDW.INTERNAL_1_1_1[0];
    tmp_x[29] = rtDW.INTERNAL_1_1_1[1];
    tmp_x[30] = rtDW.INTERNAL_1_1_1[2];
    tmp_x[31] = rtDW.INTERNAL_1_1_1[3];
    tmp_y[8] = 32;
    tmp_x[32] = rtDW.INTERNAL_2_2_1[0];
    tmp_x[33] = rtDW.INTERNAL_2_2_1[1];
    tmp_x[34] = rtDW.INTERNAL_2_2_1[2];
    tmp_x[35] = rtDW.INTERNAL_2_2_1[3];
    tmp_y[9] = 36;
    tmp_x[36] = rtDW.INTERNAL_3_2_1[0];
    tmp_x[37] = rtDW.INTERNAL_3_2_1[1];
    tmp_x[38] = rtDW.INTERNAL_3_2_1[2];
    tmp_x[39] = rtDW.INTERNAL_3_2_1[3];
    tmp_y[10] = 40;
    tmp_x[40] = rtDW.INTERNAL_1_2_1[0];
    tmp_x[41] = rtDW.INTERNAL_1_2_1[1];
    tmp_x[42] = rtDW.INTERNAL_1_2_1[2];
    tmp_x[43] = rtDW.INTERNAL_1_2_1[3];
    tmp_y[11] = 44;
    tmp_x[44] = rtDW.INTERNAL_2_3_1[0];
    tmp_x[45] = rtDW.INTERNAL_2_3_1[1];
    tmp_x[46] = rtDW.INTERNAL_2_3_1[2];
    tmp_x[47] = rtDW.INTERNAL_2_3_1[3];
    tmp_y[12] = 48;
    tmp_x[48] = rtDW.INTERNAL_3_3_1[0];
    tmp_x[49] = rtDW.INTERNAL_3_3_1[1];
    tmp_x[50] = rtDW.INTERNAL_3_3_1[2];
    tmp_x[51] = rtDW.INTERNAL_3_3_1[3];
    tmp_y[13] = 52;
    tmp_x[52] = rtDW.INTERNAL_1_3_1[0];
    tmp_x[53] = rtDW.INTERNAL_1_3_1[1];
    tmp_x[54] = rtDW.INTERNAL_1_3_1[2];
    tmp_x[55] = rtDW.INTERNAL_1_3_1[3];
    tmp_y[14] = 56;
    std::memcpy(&tmp_x[56], &rtDW.STATE_1[0], 28U * sizeof(real_T));
    tmp_y[15] = 84;
    simulationData->mData->mInputValues.mN = 84;
    simulationData->mData->mInputValues.mX = &tmp_x[0];
    simulationData->mData->mInputOffsets.mN = 16;
    simulationData->mData->mInputOffsets.mX = &tmp_y[0];
    simulationData->mData->mOutputs.mN = 18;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_1_DiagMgr;
    diagnosticTree_d = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        char *msg_i;
        msg_i = rtw_diagnostics_msg(diagnosticTree_d);
        rtmSetErrorStatus(rtM, msg_i);
      }
    }

    for (i = 0; i < 17; i++) {
      // RealImagToComplex: '<S308>/Real-Imag to Complex'
      rtDW.RealImagtoComplex[i].re = rtDW.StateSpace[i];
      rtDW.RealImagtoComplex[i].im = rtDW.StateSpace[i + 17];
    }

    // Switch: '<S58>/Switch1' incorporates:
    //   Constant: '<S58>/Constant4'

    std::memcpy(&rtDW.RLinv[0], &rtConstP.Constant4_Value[0], sizeof(real_T) <<
                4U);

    // Gain: '<Root>/radps2pu1'
    rtDW.radps2pu1 = 0.0079577471545947687 * rtDW.OUTPUT_7_0[2];

    // Outputs for Atomic SubSystem: '<S52>/Matrix W Synchronous Ref. Frame '
    // Sum: '<S55>/Sum' incorporates:
    //   Constant: '<S55>/we'

    rtDW.wewr = 1.0 - rtDW.radps2pu1;
    for (i = 0; i < 16; i++) {
      // SignalConversion generated from: '<S55>/W(3,4)=1-wr' incorporates:
      //   Constant: '<S55>/u3'

      rtDW.TmpHiddenBufferAtW341wrInport1[i] = rtConstP.u3_Value[i];

      // Assignment: '<S55>/W(3,4)=1-wr' incorporates:
      //   SignalConversion generated from: '<S55>/W(3,4)=1-wr'

      rtDW.W341wr[i] = rtDW.TmpHiddenBufferAtW341wrInport1[i];
    }

    // Assignment: '<S55>/W(3,4)=1-wr'
    rtDW.W341wr[14] = rtDW.wewr;

    // Gain: '<S55>/Gain2'
    rtDW.Gain2_m = -rtDW.wewr;

    // Assignment: '<S55>/W(4,3)=wr-1' incorporates:
    //   Assignment: '<S55>/W(3,4)=1-wr'

    std::memcpy(&rtDW.W43wr1[0], &rtDW.W341wr[0], sizeof(real_T) << 4U);

    // Assignment: '<S55>/W(4,3)=wr-1'
    rtDW.W43wr1[11] = rtDW.Gain2_m;

    // End of Outputs for SubSystem: '<S52>/Matrix W Synchronous Ref. Frame '
    for (i = 0; i <= 14; i += 2) {
      // Sum: '<S58>/Sum1' incorporates:
      //   Assignment: '<S55>/W(4,3)=wr-1'
      //   Switch: '<S58>/Switch1'

      tmp_12 = _mm_loadu_pd(&rtDW.W43wr1[i]);
      tmp_11 = _mm_loadu_pd(&rtDW.RLinv[i]);

      // Sum: '<S58>/Sum1'
      _mm_storeu_pd(&rtDW.A[i], _mm_sub_pd(_mm_sub_pd(_mm_set1_pd(0.0), tmp_12),
        tmp_11));
    }

    for (i = 0; i <= 2; i += 2) {
      // Product: '<S64>/Product1'
      _mm_storeu_pd(&rtDW.Product1_o[i], _mm_set1_pd(0.0));

      // Product: '<S64>/Product1' incorporates:
      //   Sum: '<S58>/Sum1'

      tmp_12 = _mm_loadu_pd(&rtDW.A[i]);

      // Product: '<S64>/Product1'
      tmp_11 = _mm_loadu_pd(&rtDW.Product1_o[i]);
      _mm_storeu_pd(&rtDW.Product1_o[i], _mm_add_pd(_mm_mul_pd(tmp_12,
        _mm_set1_pd(rtDW.Integrator_a[0])), tmp_11));

      // Product: '<S64>/Product1' incorporates:
      //   Sum: '<S58>/Sum1'

      tmp_12 = _mm_loadu_pd(&rtDW.A[i + 4]);

      // Product: '<S64>/Product1'
      tmp_11 = _mm_loadu_pd(&rtDW.Product1_o[i]);
      _mm_storeu_pd(&rtDW.Product1_o[i], _mm_add_pd(_mm_mul_pd(tmp_12,
        _mm_set1_pd(rtDW.Integrator_a[1])), tmp_11));

      // Product: '<S64>/Product1' incorporates:
      //   Sum: '<S58>/Sum1'

      tmp_12 = _mm_loadu_pd(&rtDW.A[i + 8]);

      // Product: '<S64>/Product1'
      tmp_11 = _mm_loadu_pd(&rtDW.Product1_o[i]);
      _mm_storeu_pd(&rtDW.Product1_o[i], _mm_add_pd(_mm_mul_pd(tmp_12,
        _mm_set1_pd(rtDW.Integrator_a[2])), tmp_11));

      // Product: '<S64>/Product1' incorporates:
      //   Sum: '<S58>/Sum1'

      tmp_12 = _mm_loadu_pd(&rtDW.A[i + 12]);

      // Product: '<S64>/Product1'
      tmp_11 = _mm_loadu_pd(&rtDW.Product1_o[i]);
      _mm_storeu_pd(&rtDW.Product1_o[i], _mm_add_pd(_mm_mul_pd(tmp_12,
        _mm_set1_pd(rtDW.Integrator_a[3])), tmp_11));
    }

    // Gain: '<S52>/1_Vb'
    rtDW.u_Vb[0].re = 0.0020412414523193149 * rtDW.RealImagtoComplex[6].re;
    rtDW.u_Vb[0].im = 0.0020412414523193149 * rtDW.RealImagtoComplex[6].im;

    // Sum: '<S64>/sum1'
    rtDW.sum1[2] = rtDW.Product1_o[2];

    // Gain: '<S52>/1_Vb'
    rtDW.u_Vb[1].re = 0.0020412414523193149 * rtDW.RealImagtoComplex[7].re;
    rtDW.u_Vb[1].im = 0.0020412414523193149 * rtDW.RealImagtoComplex[7].im;

    // Sum: '<S64>/sum1'
    rtDW.sum1[3] = rtDW.Product1_o[3];

    // Gain: '<S56>/(a^2)//3'
    rtDW.a23.re = -0.16666666666666657 * rtDW.u_Vb[1].re - -0.28867513459481287 *
      rtDW.u_Vb[1].im;
    rtDW.a23.im = -0.16666666666666657 * rtDW.u_Vb[1].im + -0.28867513459481287 *
      rtDW.u_Vb[1].re;

    // Gain: '<S56>/Gain'
    rtDW.Gain.re = 0.33333333333333331 * rtDW.u_Vb[0].re;
    rtDW.Gain.im = 0.33333333333333331 * rtDW.u_Vb[0].im;

    // Sum: '<S56>/Sum3' incorporates:
    //   Gain: '<S56>/(a^2)//3'
    //   Gain: '<S56>/Gain'

    rtDW.V1.re = rtDW.Gain.re - rtDW.a23.re;
    rtDW.V1.im = rtDW.Gain.im - rtDW.a23.im;

    // ComplexToRealImag: '<S56>/Complex to Real-Imag' incorporates:
    //   Sum: '<S56>/Sum3'

    rtDW.ComplextoRealImag_o1_n = rtDW.V1.re;

    // ComplexToRealImag: '<S56>/Complex to Real-Imag' incorporates:
    //   Sum: '<S56>/Sum3'

    rtDW.ComplextoRealImag_o2_g = rtDW.V1.im;

    // Sum: '<S64>/sum1'
    rtDW.sum1[0] = rtDW.ComplextoRealImag_o2_g + rtDW.Product1_o[0];
    rtDW.sum1[1] = rtDW.ComplextoRealImag_o1_n + rtDW.Product1_o[1];

    // Gain: '<S64>/wbase'
    rtDW.wbase[0] = 376.99111843077515 * rtDW.sum1[0];
    rtDW.wbase[1] = 376.99111843077515 * rtDW.sum1[1];
    rtDW.wbase[2] = 376.99111843077515 * rtDW.sum1[2];
    rtDW.wbase[3] = 376.99111843077515 * rtDW.sum1[3];

    // SimscapeExecutionBlock: '<S260>/OUTPUT_2_1' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_2_1_SimData;
    time_e = u0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_e;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_2_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_2_1_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = tmp;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_10[0] = 0;
    tmp_z[0] = rtDW.INPUT_11_1_1[0];
    tmp_z[1] = rtDW.INPUT_11_1_1[1];
    tmp_z[2] = rtDW.INPUT_11_1_1[2];
    tmp_z[3] = rtDW.INPUT_11_1_1[3];
    tmp_10[1] = 4;
    tmp_z[4] = rtDW.INPUT_12_1_1[0];
    tmp_z[5] = rtDW.INPUT_12_1_1[1];
    tmp_z[6] = rtDW.INPUT_12_1_1[2];
    tmp_z[7] = rtDW.INPUT_12_1_1[3];
    tmp_10[2] = 8;
    tmp_z[8] = rtDW.INPUT_13_1_1[0];
    tmp_z[9] = rtDW.INPUT_13_1_1[1];
    tmp_z[10] = rtDW.INPUT_13_1_1[2];
    tmp_z[11] = rtDW.INPUT_13_1_1[3];
    tmp_10[3] = 12;
    tmp_z[12] = rtDW.INPUT_14_1_1[0];
    tmp_z[13] = rtDW.INPUT_14_1_1[1];
    tmp_z[14] = rtDW.INPUT_14_1_1[2];
    tmp_z[15] = rtDW.INPUT_14_1_1[3];
    tmp_10[4] = 16;
    tmp_z[16] = rtDW.INTERNAL_11_1_1[0];
    tmp_z[17] = rtDW.INTERNAL_11_1_1[1];
    tmp_z[18] = rtDW.INTERNAL_11_1_1[2];
    tmp_z[19] = rtDW.INTERNAL_11_1_1[3];
    tmp_10[5] = 20;
    tmp_z[20] = rtDW.STATE_2[0];
    tmp_z[21] = rtDW.STATE_2[1];
    tmp_z[22] = rtDW.STATE_2[2];
    tmp_z[23] = rtDW.STATE_2[3];
    tmp_z[24] = rtDW.STATE_2[4];
    tmp_z[25] = rtDW.STATE_2[5];
    tmp_10[6] = 26;
    simulationData->mData->mInputValues.mN = 26;
    simulationData->mData->mInputValues.mX = &tmp_z[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_10[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_2_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_2_1_DiagMgr;
    diagnosticTree_e = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_2_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        char *msg_j;
        msg_j = rtw_diagnostics_msg(diagnosticTree_e);
        rtmSetErrorStatus(rtM, msg_j);
      }
    }

    // Gain: '<S226>/GAIN'
    rtDW.GAIN = 57.295779513082316 * rtDW.OUTPUT_2_1[3];

    // Gain: '<S196>/Actuator Speed to Nacelle Yaw Rate'
    rtDW.ActuatorSpeedtoNacelleYawRate = 0.16 * rtDW.GAIN;

    // Gain: '<S46>/Derivative Control'
    rtDW.DerivativeControl = 0.0 * rtDW.ActuatorSpeedtoNacelleYawRate;

    // Gain: '<S201>/GAIN'
    rtDW.GAIN_o = 57.295779513082316 * rtDW.OUTPUT_2_0[0];

    // Gain: '<S193>/Actuator Position to Nacelle Angle'
    rtDW.ActuatorPositiontoNacelleAngle = 0.16 * rtDW.GAIN_o;

    // Gain: '<S209>/GAIN'
    rtDW.GAIN_h = 57.295779513082316 * rtDW.OUTPUT_2_0[1];

    // Gain: '<S194>/Actuator Position to Nacelle Angle'
    rtDW.ActuatorPositiontoNacelleAngl_n = 0.16 * rtDW.GAIN_h;

    // Gain: '<S217>/GAIN'
    rtDW.GAIN_k = 57.295779513082316 * rtDW.OUTPUT_2_0[2];

    // Gain: '<S195>/Actuator Position to Nacelle Angle'
    rtDW.ActuatorPositiontoNacelleAngl_m = 0.16 * rtDW.GAIN_k;

    // Gain: '<S225>/GAIN'
    rtDW.GAIN_f = 57.295779513082316 * rtDW.OUTPUT_2_0[3];

    // Gain: '<S196>/Actuator Position to Nacelle Angle'
    rtDW.ActuatorPositiontoNacelleAng_nu = 0.16 * rtDW.GAIN_f;

    // Sum: '<S46>/Sum3'
    rtDW.Sum3_i[0] = rtDW.ActuatorPositiontoNacelleAngle +
      rtDW.DerivativeControl;
    rtDW.Sum3_i[1] = rtDW.ActuatorPositiontoNacelleAngl_n +
      rtDW.DerivativeControl;
    rtDW.Sum3_i[2] = rtDW.ActuatorPositiontoNacelleAngl_m +
      rtDW.DerivativeControl;
    rtDW.Sum3_i[3] = rtDW.ActuatorPositiontoNacelleAng_nu +
      rtDW.DerivativeControl;

    // Sum: '<S46>/Sum'
    // Limited  Integrator
    rtDW.Sum[0] = rtDW.FromWs[1] - rtDW.Sum3_i[0];

    // Integrator: '<S293>/Integrator'
    if (rtX.Integrator_CSTATE_l[0] >= 0.5) {
      rtX.Integrator_CSTATE_l[0] = 0.5;
    } else if (rtX.Integrator_CSTATE_l[0] <= -0.5) {
      rtX.Integrator_CSTATE_l[0] = -0.5;
    }

    // Integrator: '<S293>/Integrator'
    rtDW.Integrator_i2[0] = rtX.Integrator_CSTATE_l[0];

    // Sum: '<S293>/Sum'
    rtDW.Sum_m[0] = rtDW.Sum[0] + rtDW.Integrator_i2[0];

    // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
    if (rtDW.Sum_m[0] > 0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[0] = 0.5;
    } else if (rtDW.Sum_m[0] < -0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[0] = -0.5;
    } else {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[0] = rtDW.Sum_m[0];
    }

    // Sum: '<S46>/Sum1'
    rtDW.Sum1_e[0] = rtDW.LimitNacelleYawRateCmd[0] -
      rtDW.ActuatorSpeedtoNacelleYawRate;

    // Gain: '<S294>/Proportional Gain'
    rtDW.ProportionalGain[0] = 3000.0 * rtDW.Sum1_e[0];

    // Integrator: '<S294>/Integrator'
    if (rtX.Integrator_CSTATE_ga[0] >= 900.0) {
      rtX.Integrator_CSTATE_ga[0] = 900.0;
    } else if (rtX.Integrator_CSTATE_ga[0] <= -900.0) {
      rtX.Integrator_CSTATE_ga[0] = -900.0;
    }

    // Integrator: '<S294>/Integrator'
    rtDW.Integrator_m[0] = rtX.Integrator_CSTATE_ga[0];

    // Sum: '<S294>/Sum'
    rtDW.Sum_e[0] = rtDW.ProportionalGain[0] + rtDW.Integrator_m[0];

    // Saturate: '<S46>/Limit Servomotor Torque Cmd'
    if (rtDW.Sum_e[0] > 900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[0] = 900.0;
    } else if (rtDW.Sum_e[0] < -900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[0] = -900.0;
    } else {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[0] = rtDW.Sum_e[0];
    }

    // Sum: '<S192>/Sum'
    rtDW.Sum_f[0] = rtDW.TorqueCommand[0] - rtDW.Gain_l[0];

    // Gain: '<S294>/Integral Gain'
    rtDW.IntegralGain[0] = 10.0 * rtDW.Sum1_e[0];

    // Gain: '<S293>/Integral Gain'
    rtDW.IntegralGain_o[0] = 0.01 * rtDW.Sum[0];

    // Sum: '<S46>/Sum'
    rtDW.Sum[1] = rtDW.FromWs[1] - rtDW.Sum3_i[1];

    // Integrator: '<S293>/Integrator'
    if (rtX.Integrator_CSTATE_l[1] >= 0.5) {
      rtX.Integrator_CSTATE_l[1] = 0.5;
    } else if (rtX.Integrator_CSTATE_l[1] <= -0.5) {
      rtX.Integrator_CSTATE_l[1] = -0.5;
    }

    // Integrator: '<S293>/Integrator'
    rtDW.Integrator_i2[1] = rtX.Integrator_CSTATE_l[1];

    // Sum: '<S293>/Sum'
    rtDW.Sum_m[1] = rtDW.Sum[1] + rtDW.Integrator_i2[1];

    // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
    if (rtDW.Sum_m[1] > 0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[1] = 0.5;
    } else if (rtDW.Sum_m[1] < -0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[1] = -0.5;
    } else {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[1] = rtDW.Sum_m[1];
    }

    // Sum: '<S46>/Sum1'
    rtDW.Sum1_e[1] = rtDW.LimitNacelleYawRateCmd[1] -
      rtDW.ActuatorSpeedtoNacelleYawRate;

    // Gain: '<S294>/Proportional Gain'
    rtDW.ProportionalGain[1] = 3000.0 * rtDW.Sum1_e[1];

    // Integrator: '<S294>/Integrator'
    if (rtX.Integrator_CSTATE_ga[1] >= 900.0) {
      rtX.Integrator_CSTATE_ga[1] = 900.0;
    } else if (rtX.Integrator_CSTATE_ga[1] <= -900.0) {
      rtX.Integrator_CSTATE_ga[1] = -900.0;
    }

    // Integrator: '<S294>/Integrator'
    rtDW.Integrator_m[1] = rtX.Integrator_CSTATE_ga[1];

    // Sum: '<S294>/Sum'
    rtDW.Sum_e[1] = rtDW.ProportionalGain[1] + rtDW.Integrator_m[1];

    // Saturate: '<S46>/Limit Servomotor Torque Cmd'
    if (rtDW.Sum_e[1] > 900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[1] = 900.0;
    } else if (rtDW.Sum_e[1] < -900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[1] = -900.0;
    } else {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[1] = rtDW.Sum_e[1];
    }

    // Sum: '<S192>/Sum'
    rtDW.Sum_f[1] = rtDW.TorqueCommand[1] - rtDW.Gain_l[1];

    // Gain: '<S294>/Integral Gain'
    rtDW.IntegralGain[1] = 10.0 * rtDW.Sum1_e[1];

    // Gain: '<S293>/Integral Gain'
    rtDW.IntegralGain_o[1] = 0.01 * rtDW.Sum[1];

    // Sum: '<S46>/Sum'
    rtDW.Sum[2] = rtDW.FromWs[1] - rtDW.Sum3_i[2];

    // Integrator: '<S293>/Integrator'
    if (rtX.Integrator_CSTATE_l[2] >= 0.5) {
      rtX.Integrator_CSTATE_l[2] = 0.5;
    } else if (rtX.Integrator_CSTATE_l[2] <= -0.5) {
      rtX.Integrator_CSTATE_l[2] = -0.5;
    }

    // Integrator: '<S293>/Integrator'
    rtDW.Integrator_i2[2] = rtX.Integrator_CSTATE_l[2];

    // Sum: '<S293>/Sum'
    rtDW.Sum_m[2] = rtDW.Sum[2] + rtDW.Integrator_i2[2];

    // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
    if (rtDW.Sum_m[2] > 0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[2] = 0.5;
    } else if (rtDW.Sum_m[2] < -0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[2] = -0.5;
    } else {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[2] = rtDW.Sum_m[2];
    }

    // Sum: '<S46>/Sum1'
    rtDW.Sum1_e[2] = rtDW.LimitNacelleYawRateCmd[2] -
      rtDW.ActuatorSpeedtoNacelleYawRate;

    // Gain: '<S294>/Proportional Gain'
    rtDW.ProportionalGain[2] = 3000.0 * rtDW.Sum1_e[2];

    // Integrator: '<S294>/Integrator'
    if (rtX.Integrator_CSTATE_ga[2] >= 900.0) {
      rtX.Integrator_CSTATE_ga[2] = 900.0;
    } else if (rtX.Integrator_CSTATE_ga[2] <= -900.0) {
      rtX.Integrator_CSTATE_ga[2] = -900.0;
    }

    // Integrator: '<S294>/Integrator'
    rtDW.Integrator_m[2] = rtX.Integrator_CSTATE_ga[2];

    // Sum: '<S294>/Sum'
    rtDW.Sum_e[2] = rtDW.ProportionalGain[2] + rtDW.Integrator_m[2];

    // Saturate: '<S46>/Limit Servomotor Torque Cmd'
    if (rtDW.Sum_e[2] > 900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[2] = 900.0;
    } else if (rtDW.Sum_e[2] < -900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[2] = -900.0;
    } else {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[2] = rtDW.Sum_e[2];
    }

    // Sum: '<S192>/Sum'
    rtDW.Sum_f[2] = rtDW.TorqueCommand[2] - rtDW.Gain_l[2];

    // Gain: '<S294>/Integral Gain'
    rtDW.IntegralGain[2] = 10.0 * rtDW.Sum1_e[2];

    // Gain: '<S293>/Integral Gain'
    rtDW.IntegralGain_o[2] = 0.01 * rtDW.Sum[2];

    // Sum: '<S46>/Sum'
    rtDW.Sum[3] = rtDW.FromWs[1] - rtDW.Sum3_i[3];

    // Integrator: '<S293>/Integrator'
    if (rtX.Integrator_CSTATE_l[3] >= 0.5) {
      rtX.Integrator_CSTATE_l[3] = 0.5;
    } else if (rtX.Integrator_CSTATE_l[3] <= -0.5) {
      rtX.Integrator_CSTATE_l[3] = -0.5;
    }

    // Integrator: '<S293>/Integrator'
    rtDW.Integrator_i2[3] = rtX.Integrator_CSTATE_l[3];

    // Sum: '<S293>/Sum'
    rtDW.Sum_m[3] = rtDW.Sum[3] + rtDW.Integrator_i2[3];

    // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
    if (rtDW.Sum_m[3] > 0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[3] = 0.5;
    } else if (rtDW.Sum_m[3] < -0.5) {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[3] = -0.5;
    } else {
      // Saturate: '<S46>/Limit Nacelle Yaw Rate Cmd'
      rtDW.LimitNacelleYawRateCmd[3] = rtDW.Sum_m[3];
    }

    // Sum: '<S46>/Sum1'
    rtDW.Sum1_e[3] = rtDW.LimitNacelleYawRateCmd[3] -
      rtDW.ActuatorSpeedtoNacelleYawRate;

    // Gain: '<S294>/Proportional Gain'
    rtDW.ProportionalGain[3] = 3000.0 * rtDW.Sum1_e[3];

    // Integrator: '<S294>/Integrator'
    if (rtX.Integrator_CSTATE_ga[3] >= 900.0) {
      rtX.Integrator_CSTATE_ga[3] = 900.0;
    } else if (rtX.Integrator_CSTATE_ga[3] <= -900.0) {
      rtX.Integrator_CSTATE_ga[3] = -900.0;
    }

    // Integrator: '<S294>/Integrator'
    rtDW.Integrator_m[3] = rtX.Integrator_CSTATE_ga[3];

    // Sum: '<S294>/Sum'
    rtDW.Sum_e[3] = rtDW.ProportionalGain[3] + rtDW.Integrator_m[3];

    // Saturate: '<S46>/Limit Servomotor Torque Cmd'
    if (rtDW.Sum_e[3] > 900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[3] = 900.0;
    } else if (rtDW.Sum_e[3] < -900.0) {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[3] = -900.0;
    } else {
      // Saturate: '<S46>/Limit Servomotor Torque Cmd'
      rtDW.TorqueCommand[3] = rtDW.Sum_e[3];
    }

    // Sum: '<S192>/Sum'
    rtDW.Sum_f[3] = rtDW.TorqueCommand[3] - rtDW.Gain_l[3];

    // Gain: '<S294>/Integral Gain'
    rtDW.IntegralGain[3] = 10.0 * rtDW.Sum1_e[3];

    // Gain: '<S293>/Integral Gain'
    rtDW.IntegralGain_o[3] = 0.01 * rtDW.Sum[3];

    // Gain: '<S5>/Kv'
    rtDW.Kv[0].re = 0.00040082559427361095 * rtDW.RealImagtoComplex[14].re;
    rtDW.Kv[0].im = 0.00040082559427361095 * rtDW.RealImagtoComplex[14].im;

    // Gain: '<S51>/pu to A' incorporates:
    //   Gain: '<S5>/Kv'

    rtDW.putoA[0].re = 2494.8506639458296 * rtDW.Kv[0].re;
    rtDW.putoA[0].im = 2494.8506639458296 * rtDW.Kv[0].im;

    // Gain: '<S5>/Kv1'
    rtDW.Kv1[0].re = 0.0020412414523193149 * rtDW.RealImagtoComplex[8].re;
    rtDW.Kv1[0].im = 0.0020412414523193149 * rtDW.RealImagtoComplex[8].im;

    // Gain: '<S51>/pu to V' incorporates:
    //   Gain: '<S5>/Kv1'

    rtDW.putoV[0].re = 489.89794855663564 * rtDW.Kv1[0].re;
    rtDW.putoV[0].im = 489.89794855663564 * rtDW.Kv1[0].im;

    // Product: '<S310>/Product2' incorporates:
    //   Gain: '<S51>/pu to A'
    //   Gain: '<S51>/pu to V'
    //   Math: '<S310>/Math Function'

    rtDW.Product2[0].re = rtDW.putoV[0].re * rtDW.putoA[0].re - rtDW.putoV[0].im
      * -rtDW.putoA[0].im;
    rtDW.Product2[0].im = rtDW.putoV[0].re * -rtDW.putoA[0].im + rtDW.putoV[0].
      im * rtDW.putoA[0].re;

    // Gain: '<S5>/Kv'
    rtDW.Kv[1].re = 0.00040082559427361095 * rtDW.RealImagtoComplex[15].re;
    rtDW.Kv[1].im = 0.00040082559427361095 * rtDW.RealImagtoComplex[15].im;

    // Gain: '<S51>/pu to A' incorporates:
    //   Gain: '<S5>/Kv'

    rtDW.putoA[1].re = 2494.8506639458296 * rtDW.Kv[1].re;
    rtDW.putoA[1].im = 2494.8506639458296 * rtDW.Kv[1].im;

    // Gain: '<S5>/Kv1'
    rtDW.Kv1[1].re = 0.0020412414523193149 * rtDW.RealImagtoComplex[9].re;
    rtDW.Kv1[1].im = 0.0020412414523193149 * rtDW.RealImagtoComplex[9].im;

    // Gain: '<S51>/pu to V' incorporates:
    //   Gain: '<S5>/Kv1'

    rtDW.putoV[1].re = 489.89794855663564 * rtDW.Kv1[1].re;
    rtDW.putoV[1].im = 489.89794855663564 * rtDW.Kv1[1].im;

    // Product: '<S310>/Product2' incorporates:
    //   Gain: '<S51>/pu to A'
    //   Gain: '<S51>/pu to V'
    //   Math: '<S310>/Math Function'

    rtDW.Product2[1].re = rtDW.putoV[1].re * rtDW.putoA[1].re - rtDW.putoV[1].im
      * -rtDW.putoA[1].im;
    rtDW.Product2[1].im = rtDW.putoV[1].re * -rtDW.putoA[1].im + rtDW.putoV[1].
      im * rtDW.putoA[1].re;

    // Gain: '<S5>/Kv'
    rtDW.Kv[2].re = 0.00040082559427361095 * rtDW.RealImagtoComplex[16].re;
    rtDW.Kv[2].im = 0.00040082559427361095 * rtDW.RealImagtoComplex[16].im;

    // Gain: '<S51>/pu to A' incorporates:
    //   Gain: '<S5>/Kv'

    rtDW.putoA[2].re = 2494.8506639458296 * rtDW.Kv[2].re;
    rtDW.putoA[2].im = 2494.8506639458296 * rtDW.Kv[2].im;

    // Gain: '<S5>/Kv1'
    rtDW.Kv1[2].re = 0.0020412414523193149 * rtDW.RealImagtoComplex[10].re;
    rtDW.Kv1[2].im = 0.0020412414523193149 * rtDW.RealImagtoComplex[10].im;

    // Gain: '<S51>/pu to V' incorporates:
    //   Gain: '<S5>/Kv1'

    rtDW.putoV[2].re = 489.89794855663564 * rtDW.Kv1[2].re;
    rtDW.putoV[2].im = 489.89794855663564 * rtDW.Kv1[2].im;

    // Product: '<S310>/Product2' incorporates:
    //   Gain: '<S51>/pu to A'
    //   Gain: '<S51>/pu to V'
    //   Math: '<S310>/Math Function'

    rtDW.Product2[2].re = rtDW.putoV[2].re * rtDW.putoA[2].re - rtDW.putoV[2].im
      * -rtDW.putoA[2].im;
    rtDW.Product2[2].im = rtDW.putoV[2].re * -rtDW.putoA[2].im + rtDW.putoV[2].
      im * rtDW.putoA[2].re;

    // Gain: '<S229>/Derivative_Gain'
    rtDW.Derivative_Gain[0] = 0.1 * rtDW.OUTPUT_5_0[2];
    rtDW.Derivative_Gain[1] = 0.1 * rtDW.OUTPUT_4_0[2];
    rtDW.Derivative_Gain[2] = 0.1 * rtDW.OUTPUT_3_0[2];

    // Sum: '<S229>/Sum1'
    rtDW.Sum1_p[0] = rtDW.Derivative_Gain[0] + rtDW.OUTPUT_5_0[1];
    rtDW.Sum1_p[1] = rtDW.OUTPUT_4_0[1] + rtDW.Derivative_Gain[1];
    rtDW.Sum1_p[2] = rtDW.OUTPUT_3_0[1] + rtDW.Derivative_Gain[2];

    // Gain: '<S30>/Gain'
    rtDW.Gain_hg = -rtDW.OUTPUT_1_0[7];

    // Gain: '<S233>/radps2rpm'
    rtDW.radps2rpm = 9.5492965855137211 * rtDW.Gain_hg;

    // Sum: '<S233>/Sum' incorporates:
    //   Constant: '<S233>/Nominal RPM'

    rtDW.Sum_o = 14.3004 - rtDW.radps2rpm;

    // Integrator: '<S234>/Integrator'
    // Limited  Integrator
    if (rtX.Integrator_CSTATE_i >= 10.26) {
      rtX.Integrator_CSTATE_i = 10.26;
    } else if (rtX.Integrator_CSTATE_i <= -10.26) {
      rtX.Integrator_CSTATE_i = -10.26;
    }

    // Integrator: '<S234>/Integrator'
    rtDW.Integrator_e = rtX.Integrator_CSTATE_i;

    // Switch: '<S230>/Check For Park Condition' incorporates:
    //   Switch: '<S230>/Check For Pitch Brake Condition'

    if (rtDW.parking_brake != 0.0) {
      // Switch: '<S230>/Check For Park Condition' incorporates:
      //   Constant: '<S230>/Pitch For Park'

      rtDW.CheckForParkCondition = 0.0;
    } else {
      if (rtDW.pitch_brake != 0.0) {
        // Switch: '<S230>/Check For Pitch Brake Condition' incorporates:
        //   Constant: '<S230>/Pitch For Braking'

        rtDW.CheckForPitchBrakeCondition = -95.0;
      } else {
        // Gain: '<S234>/Proportional Gain' incorporates:
        //   Switch: '<S230>/Check For Pitch Brake Condition'

        rtDW.ProportionalGain_na = 20.0 * rtDW.Sum_o;

        // Sum: '<S234>/Sum' incorporates:
        //   Switch: '<S230>/Check For Pitch Brake Condition'

        rtDW.Sum_kt = rtDW.ProportionalGain_na + rtDW.Integrator_e;

        // Saturate: '<S233>/Saturation' incorporates:
        //   Switch: '<S230>/Check For Pitch Brake Condition'

        if (rtDW.Sum_kt >= 10.26) {
          // Saturate: '<S233>/Saturation'
          rtDW.Saturation = 10.26;
        } else {
          // Saturate: '<S233>/Saturation'
          rtDW.Saturation = rtDW.Sum_kt;
        }

        // End of Saturate: '<S233>/Saturation'

        // Gain: '<S232>/radps2mps' incorporates:
        //   Switch: '<S230>/Check For Pitch Brake Condition'

        rtDW.radps2mps = 40.0 * rtDW.Gain_hg;

        // Gain: '<S232>/rad2deg' incorporates:
        //   Switch: '<S230>/Check For Pitch Brake Condition'
        //   Trigonometry: '<S232>/Trigonometric Function'

        rtDW.rad2deg = 57.295779513082323 * rt_atan2d_snf(rtDW.FromWs[0],
          rtDW.radps2mps);

        // Sum: '<S230>/Sum' incorporates:
        //   Switch: '<S230>/Check For Pitch Brake Condition'

        rtDW.Sum_a = rtDW.rad2deg - rtDW.Saturation;

        // Switch: '<S230>/Check For Pitch Brake Condition'
        rtDW.CheckForPitchBrakeCondition = rtDW.Sum_a;
      }

      // Switch: '<S230>/Check For Park Condition'
      rtDW.CheckForParkCondition = rtDW.CheckForPitchBrakeCondition;
    }

    // End of Switch: '<S230>/Check For Park Condition'

    // Saturate: '<S230>/Limit Pitch Command'
    if (rtDW.CheckForParkCondition > 72.203738875408817) {
      // Saturate: '<S230>/Limit Pitch Command'
      rtDW.LimitPitchCommand = 72.203738875408817;
    } else if (rtDW.CheckForParkCondition < -95.0) {
      // Saturate: '<S230>/Limit Pitch Command'
      rtDW.LimitPitchCommand = -95.0;
    } else {
      // Saturate: '<S230>/Limit Pitch Command'
      rtDW.LimitPitchCommand = rtDW.CheckForParkCondition;
    }

    // End of Saturate: '<S230>/Limit Pitch Command'

    // Gain: '<S229>/Lookup Fix'
    rtDW.LookupFix = -rtDW.LimitPitchCommand;

    // Lookup: '<S229>/Angle to Extension' incorporates:
    //   Gain: '<S229>/Lookup Fix'

    //
    //  About '<S229>/Angle to Extension':
    //  Input0  Data Type:  Floating Point real_T
    //  Output0 Data Type:  Floating Point real_T
    //  Lookup Method: Linear_Endpoint
    //
    //  XData parameter uses the same data type and scaling as Input0
    //  YData parameter uses the same data type and scaling as Output0

    LookUp_real_T_real_T( &(rtb_AngletoExtension),
                         rtConstP.AngletoExtension_YData, rtDW.LookupFix,
                         rtConstP.AngletoExtension_XData, 87U);
    rtb_MathFunction1 = rtb_AngletoExtension;

    // Sum: '<S229>/Sum'
    rtDW.Sum_g[0] = rtb_MathFunction1 - rtDW.Sum1_p[0];

    // Gain: '<S231>/Integral Gain'
    rtDW.IntegralGain_oc[0] = 10.0 * rtDW.Sum_g[0];

    // Gain: '<S231>/Proportional Gain'
    rtDW.ProportionalGain_n[0] = 100000.0 * rtDW.Sum_g[0];

    // Integrator: '<S231>/Integrator'
    rtDW.Integrator_cn[0] = rtX.Integrator_CSTATE_h[0];

    // Sum: '<S231>/Sum'
    rtDW.Sum_d[0] = rtDW.ProportionalGain_n[0] + rtDW.Integrator_cn[0];

    // Gain: '<S15>/Scaling Factor'
    rtDW.ScalingFactor[0] = 6.25E-10 * rtDW.Sum_d[0];

    // Sum: '<S229>/Sum'
    rtDW.Sum_g[1] = rtb_MathFunction1 - rtDW.Sum1_p[1];

    // Gain: '<S231>/Integral Gain'
    rtDW.IntegralGain_oc[1] = 10.0 * rtDW.Sum_g[1];

    // Gain: '<S231>/Proportional Gain'
    rtDW.ProportionalGain_n[1] = 100000.0 * rtDW.Sum_g[1];

    // Integrator: '<S231>/Integrator'
    rtDW.Integrator_cn[1] = rtX.Integrator_CSTATE_h[1];

    // Sum: '<S231>/Sum'
    rtDW.Sum_d[1] = rtDW.ProportionalGain_n[1] + rtDW.Integrator_cn[1];

    // Gain: '<S15>/Scaling Factor'
    rtDW.ScalingFactor[1] = 6.25E-10 * rtDW.Sum_d[1];

    // Sum: '<S229>/Sum'
    rtDW.Sum_g[2] = rtb_MathFunction1 - rtDW.Sum1_p[2];

    // Gain: '<S231>/Integral Gain'
    rtDW.IntegralGain_oc[2] = 10.0 * rtDW.Sum_g[2];

    // Gain: '<S231>/Proportional Gain'
    rtDW.ProportionalGain_n[2] = 100000.0 * rtDW.Sum_g[2];

    // Integrator: '<S231>/Integrator'
    rtDW.Integrator_cn[2] = rtX.Integrator_CSTATE_h[2];

    // Sum: '<S231>/Sum'
    rtDW.Sum_d[2] = rtDW.ProportionalGain_n[2] + rtDW.Integrator_cn[2];

    // Gain: '<S15>/Scaling Factor'
    rtDW.ScalingFactor[2] = 6.25E-10 * rtDW.Sum_d[2];

    // Sum: '<S52>/Sum2' incorporates:
    //   Constant: '<S52>/ws2'

    rtDW.s2wswr = rtDW.radps2pu1 + 1.0;

    // Product: '<S70>/Product2' incorporates:
    //   Constant: '<S70>/Constant2'

    rtDW.Product2_e = 0.004377 / rtDW.s2wswr;

    // Sum: '<S70>/Sum2' incorporates:
    //   Constant: '<S70>/Constant4'

    rtDW.Sum2.re = rtDW.Product2_e;
    rtDW.Sum2.im = 0.1791;

    // Product: '<S69>/Product2' incorporates:
    //   Constant: '<S69>/Constant4'
    //   Sum: '<S70>/Sum2'

    rtDW.ZrZm.re = rtDW.Sum2.re * 0.0 - rtDW.Sum2.im * 6.77;
    rtDW.ZrZm.im = rtDW.Sum2.re * 6.77 + rtDW.Sum2.im * 0.0;

    // Sum: '<S69>/Sum1' incorporates:
    //   Constant: '<S69>/Constant4'
    //   Sum: '<S70>/Sum2'

    rtDW.ZrZm_i.re = rtDW.Sum2.re;
    rtDW.ZrZm_i.im = rtDW.Sum2.im + 6.77;

    // Product: '<S69>/Product3' incorporates:
    //   Product: '<S69>/Product2'
    //   Sum: '<S69>/Sum1'

    if (rtDW.ZrZm_i.im == 0.0) {
      if (rtDW.ZrZm.im == 0.0) {
        // Product: '<S69>/Product3'
        rtDW.ZrZm_g.re = rtDW.ZrZm.re / rtDW.ZrZm_i.re;
        rtDW.ZrZm_g.im = 0.0;
      } else if (rtDW.ZrZm.re == 0.0) {
        // Product: '<S69>/Product3'
        rtDW.ZrZm_g.re = 0.0;
        rtDW.ZrZm_g.im = rtDW.ZrZm.im / rtDW.ZrZm_i.re;
      } else {
        // Product: '<S69>/Product3'
        rtDW.ZrZm_g.re = rtDW.ZrZm.re / rtDW.ZrZm_i.re;
        rtDW.ZrZm_g.im = rtDW.ZrZm.im / rtDW.ZrZm_i.re;
      }
    } else if (rtDW.ZrZm_i.re == 0.0) {
      if (rtDW.ZrZm.re == 0.0) {
        // Product: '<S69>/Product3'
        rtDW.ZrZm_g.re = rtDW.ZrZm.im / rtDW.ZrZm_i.im;
        rtDW.ZrZm_g.im = 0.0;
      } else if (rtDW.ZrZm.im == 0.0) {
        // Product: '<S69>/Product3'
        rtDW.ZrZm_g.re = 0.0;
        rtDW.ZrZm_g.im = -(rtDW.ZrZm.re / rtDW.ZrZm_i.im);
      } else {
        // Product: '<S69>/Product3'
        rtDW.ZrZm_g.re = rtDW.ZrZm.im / rtDW.ZrZm_i.im;
        rtDW.ZrZm_g.im = -(rtDW.ZrZm.re / rtDW.ZrZm_i.im);
      }
    } else {
      rtb_MathFunction1 = std::abs(rtDW.ZrZm_i.re);
      rtb_Isat = std::abs(rtDW.ZrZm_i.im);
      if (rtb_MathFunction1 > rtb_Isat) {
        rtb_MathFunction1 = rtDW.ZrZm_i.im / rtDW.ZrZm_i.re;
        rtb_Isat = rtb_MathFunction1 * rtDW.ZrZm_i.im + rtDW.ZrZm_i.re;

        // Product: '<S69>/Product3' incorporates:
        //   Product: '<S69>/Product2'

        rtDW.ZrZm_g.re = (rtb_MathFunction1 * rtDW.ZrZm.im + rtDW.ZrZm.re) /
          rtb_Isat;
        rtDW.ZrZm_g.im = (rtDW.ZrZm.im - rtb_MathFunction1 * rtDW.ZrZm.re) /
          rtb_Isat;
      } else if (rtb_Isat == rtb_MathFunction1) {
        real_T sgnbi;
        rtb_Isat = rtDW.ZrZm_i.re > 0.0 ? 0.5 : -0.5;
        sgnbi = rtDW.ZrZm_i.im > 0.0 ? 0.5 : -0.5;

        // Product: '<S69>/Product3' incorporates:
        //   Product: '<S69>/Product2'

        rtDW.ZrZm_g.re = (rtDW.ZrZm.re * rtb_Isat + rtDW.ZrZm.im * sgnbi) /
          rtb_MathFunction1;
        rtDW.ZrZm_g.im = (rtDW.ZrZm.im * rtb_Isat - rtDW.ZrZm.re * sgnbi) /
          rtb_MathFunction1;
      } else {
        rtb_MathFunction1 = rtDW.ZrZm_i.re / rtDW.ZrZm_i.im;
        rtb_Isat = rtb_MathFunction1 * rtDW.ZrZm_i.re + rtDW.ZrZm_i.im;

        // Product: '<S69>/Product3' incorporates:
        //   Product: '<S69>/Product2'

        rtDW.ZrZm_g.re = (rtb_MathFunction1 * rtDW.ZrZm.re + rtDW.ZrZm.im) /
          rtb_Isat;
        rtDW.ZrZm_g.im = (rtb_MathFunction1 * rtDW.ZrZm.im - rtDW.ZrZm.re) /
          rtb_Isat;
      }
    }

    // End of Product: '<S69>/Product3'

    // Sum: '<S69>/Sum2' incorporates:
    //   Constant: '<S69>/Constant5'
    //   Product: '<S69>/Product3'

    rtDW.Z2.re = rtDW.ZrZm_g.re + 0.004843;
    rtDW.Z2.im = rtDW.ZrZm_g.im + 0.1248;

    // ComplexToRealImag: '<S69>/Complex to Real-Imag' incorporates:
    //   Sum: '<S69>/Sum2'

    rtDW.ComplextoRealImag_o1_b = rtDW.Z2.re;

    // ComplexToRealImag: '<S69>/Complex to Real-Imag' incorporates:
    //   Sum: '<S69>/Sum2'

    rtDW.ComplextoRealImag_o2_e = rtDW.Z2.im;

    // Product: '<S69>/Product1'
    rtDW.Product1_i = rtDW.ComplextoRealImag_o1_b / rtDW.ComplextoRealImag_o2_e;

    // Product: '<S59>/Product1'
    rtDW.Iqd2R2L2[0] = rtDW.Iqds2[0] * rtDW.Product1_i;

    // Gain: '<S59>/Gain3'
    rtDW.Gain3[0] = rtDW.Iqds2[0];

    // Product: '<S59>/Product1'
    rtDW.Iqd2R2L2[1] = rtDW.Iqds2[1] * rtDW.Product1_i;

    // Gain: '<S59>/Gain3'
    rtDW.Gain3[1] = -rtDW.Iqds2[1];

    // Gain: '<S56>/Gain1'
    rtDW.Gain1.re = 0.33333333333333331 * rtDW.u_Vb[0].re;
    rtDW.Gain1.im = 0.33333333333333331 * rtDW.u_Vb[0].im;

    // Gain: '<S56>/a//3'
    rtDW.a3.re = -0.16666666666666657 * rtDW.u_Vb[1].re - 0.28867513459481287 *
      rtDW.u_Vb[1].im;
    rtDW.a3.im = -0.16666666666666657 * rtDW.u_Vb[1].im + 0.28867513459481287 *
      rtDW.u_Vb[1].re;

    // Sum: '<S56>/Sum4' incorporates:
    //   Gain: '<S56>/Gain1'
    //   Gain: '<S56>/a//3'

    rtDW.V2.re = rtDW.Gain1.re - rtDW.a3.re;
    rtDW.V2.im = rtDW.Gain1.im - rtDW.a3.im;

    // ComplexToRealImag: '<S56>/Complex to Real-Imag3' incorporates:
    //   Sum: '<S56>/Sum4'

    rtDW.ComplextoRealImag3_o1 = rtDW.V2.re;

    // ComplexToRealImag: '<S56>/Complex to Real-Imag3' incorporates:
    //   Sum: '<S56>/Sum4'

    rtDW.ComplextoRealImag3_o2 = rtDW.V2.im;

    // Product: '<S59>/Product2'
    rtDW.Vqd2L2[0] = rtDW.ComplextoRealImag3_o2 / rtDW.ComplextoRealImag_o2_e;
    rtDW.Vqd2L2[1] = rtDW.ComplextoRealImag3_o1 / rtDW.ComplextoRealImag_o2_e;

    // Sum: '<S59>/Sum'
    rtDW.Sum_k[0] = (rtDW.Vqd2L2[0] - rtDW.Iqd2R2L2[0]) + rtDW.Gain3[1];
    rtDW.Sum_k[1] = (rtDW.Vqd2L2[1] - rtDW.Iqd2R2L2[1]) + rtDW.Gain3[0];

    // Gain: '<S59>/Gain4'
    rtDW.Gain4[0] = 376.99111843077515 * rtDW.Sum_k[0];

    // Gain: '<S62>/1-1'
    rtDW.iqsids[0] = rtDW.Product3[0];

    // Gain: '<S59>/Gain4'
    rtDW.Gain4[1] = 376.99111843077515 * rtDW.Sum_k[1];

    // Gain: '<S62>/1-1'
    rtDW.iqsids[1] = -rtDW.Product3[1];

    // Product: '<S62>/Mult1'
    rtDW.Mult1[0] = rtDW.iqsids[0] * rtDW.Integrator_a[1];
    rtDW.Mult1[1] = rtDW.Integrator_a[0] * rtDW.iqsids[1];

    // Sum: '<S310>/Sum3' incorporates:
    //   Product: '<S310>/Product2'

    rtDW.Sum3_g.re = (rtDW.Product2[0].re + rtDW.Product2[1].re) +
      rtDW.Product2[2].re;
    rtDW.Sum3_g.im = (rtDW.Product2[0].im + rtDW.Product2[1].im) +
      rtDW.Product2[2].im;

    // Gain: '<S310>/K' incorporates:
    //   Sum: '<S310>/Sum3'

    rtDW.K.re = 0.5 * rtDW.Sum3_g.re;
    rtDW.K.im = 0.5 * rtDW.Sum3_g.im;

    // ComplexToRealImag: '<S310>/Complex to Real-Imag' incorporates:
    //   Gain: '<S310>/K'

    rtDW.ComplextoRealImag_o1_h = rtDW.K.re;

    // ComplexToRealImag: '<S310>/Complex to Real-Imag' incorporates:
    //   Gain: '<S310>/K'

    rtDW.ComplextoRealImag_o2_j = rtDW.K.im;

    // Gain: '<S51>/to pu'
    rtDW.topu[0] = 5.4545454545454549E-7 * rtDW.ComplextoRealImag_o1_h;
    rtDW.topu[1] = 5.4545454545454549E-7 * rtDW.ComplextoRealImag_o2_j;

    // Gain: '<S51>/Fix Sign'
    rtDW.FixSign[0] = -rtDW.topu[0];
    rtDW.FixSign[1] = -rtDW.topu[1];

    // Gain: '<S51>/pu to MW'
    rtDW.putoMW = 1.8333333333333333E+6 * rtDW.FixSign[0];

    // Gain: '<S51>/pu to Mvar'
    rtDW.putoMvar = 1.8333333333333333E+6 * rtDW.FixSign[1];

    // Sum: '<S62>/Sum2'
    rtDW.Sum2_f = rtDW.Mult1[0] + rtDW.Mult1[1];

    // RealImagToComplex: '<S59>/Real-Imag to Complex'
    rtDW.RealImagtoComplex_f.re = rtDW.ComplextoRealImag3_o1;
    rtDW.RealImagtoComplex_f.im = rtDW.ComplextoRealImag3_o2;

    // Gain: '<S59>/Gain2' incorporates:
    //   RealImagToComplex: '<S59>/Real-Imag to Complex1'

    rtDW.Gain2.re = 0.004843 * rtDW.RealImagtoComplex1.re;
    rtDW.Gain2.im = 0.004843 * rtDW.RealImagtoComplex1.im;

    // Sum: '<S59>/Sum1' incorporates:
    //   Gain: '<S59>/Gain2'
    //   RealImagToComplex: '<S59>/Real-Imag to Complex'

    rtDW.Vm2.re = rtDW.RealImagtoComplex_f.re - rtDW.Gain2.re;
    rtDW.Vm2.im = rtDW.RealImagtoComplex_f.im - rtDW.Gain2.im;

    // Gain: '<S59>/-pi//2  phase shift' incorporates:
    //   Sum: '<S59>/Sum1'

    rtDW.Phi2.re = 6.123233995736766E-17 * rtDW.Vm2.re - (-rtDW.Vm2.im);
    rtDW.Phi2.im = 6.123233995736766E-17 * rtDW.Vm2.im + -rtDW.Vm2.re;

    // ComplexToRealImag: '<S59>/Complex to Real-Imag' incorporates:
    //   Gain: '<S59>/-pi//2  phase shift'

    rtDW.Phids2 = rtDW.Phi2.re;

    // ComplexToRealImag: '<S59>/Complex to Real-Imag' incorporates:
    //   Gain: '<S59>/-pi//2  phase shift'

    rtDW.Phiqs2 = rtDW.Phi2.im;

    // Product: '<S52>/Product3'
    rtDW.Product3_a = rtDW.Phiqs2 * rtDW.Iqds2[1];

    // Product: '<S52>/Product4'
    rtDW.Product4 = rtDW.Phids2 * rtDW.Iqds2[0];

    // Sum: '<S52>/Sum4'
    rtDW.NegseqTorque = rtDW.Product4 - rtDW.Product3_a;

    // Sum: '<S52>/Sum5'
    rtDW.Sum5_j = rtDW.Sum2_f - rtDW.NegseqTorque;

    // Gain: '<Root>/torque_pu2Nm'
    rtDW.torque_pu2Nm = 14589.203116757075 * rtDW.Sum5_j;

    // Sum: '<S1>/Sum'
    rtDW.Sum_n = rtDW.torque_pu2Nm - rtDW.Gain_f;

    // Switch: '<S102>/Switch' incorporates:
    //   Switch: '<S132>/Switch'

    if (rtDW.PitchPowerOn > 0.0) {
      // Switch: '<S102>/Switch'
      rtDW.Switch_e = rtDW.ScalingFactor[0];

      // Switch: '<S132>/Switch'
      rtDW.Switch_b = rtDW.ScalingFactor[1];
    } else {
      // Switch: '<S102>/Switch' incorporates:
      //   Constant: '<S102>/Emergeny Brake Pitch  Close Valve'

      rtDW.Switch_e = 0.0;

      // Switch: '<S132>/Switch' incorporates:
      //   Constant: '<S132>/Emergeny Brake Pitch  Close Valve'

      rtDW.Switch_b = 0.0;
    }

    // End of Switch: '<S102>/Switch'

    // Sum: '<S112>/Sum'
    rtDW.Sum_dg = rtDW.Switch_e - rtDW.Gain_g;

    // Sum: '<S142>/Sum'
    rtDW.Sum_mo = rtDW.Switch_b - rtDW.Gain_n;

    // Switch: '<S162>/Switch'
    if (rtDW.PitchPowerOn > 0.0) {
      // Switch: '<S162>/Switch'
      rtDW.Switch_m = rtDW.ScalingFactor[2];
    } else {
      // Switch: '<S162>/Switch' incorporates:
      //   Constant: '<S162>/Emergeny Brake Pitch  Close Valve'

      rtDW.Switch_m = 0.0;
    }

    // End of Switch: '<S162>/Switch'

    // Sum: '<S172>/Sum'
    rtDW.Sum_mb = rtDW.Switch_m - rtDW.Gain_h;

    // Gain: '<S234>/Integral Gain'
    rtDW.IntegralGain_o4 = 5.0 * rtDW.Sum_o;

    // Sum: '<S19>/Sum'
    rtDW.Sum_ga = rtDW.Gain_hg - rtDW.Gain_p;

    // Gain: '<Root>/pu2rpm'
    rtDW.pu2rpm = 1199.9999999999998 * rtDW.radps2pu1;

    // Sum: '<S2>/Sum'
    rtDW.Sum_es = rtDW.pu2rpm - rtDW.Gain_m;

    // Gain: '<S54>/web_psb'
    rtDW.web_psb = 376.99111843077515 * rtDW.radps2pu1;

    // Gain: '<S21>/Gain'
    rtDW.Gain_gm = -rtDW.OUTPUT_1_0[3];

    // Sum: '<S18>/Sum'
    rtDW.Sum_l = rtDW.Gain_gm - rtDW.Gain_a;

    // Derivative: '<S97>/Derivative'
    if ((rtDW.TimeStampA >= u0) && (rtDW.TimeStampB >= u0)) {
      // Derivative: '<S97>/Derivative'
      rtDW.Derivative = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA;
      if (rtDW.TimeStampA < rtDW.TimeStampB) {
        if (rtDW.TimeStampB < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB;
        }
      } else if (rtDW.TimeStampA >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB;
      }

      // Derivative: '<S97>/Derivative'
      rtDW.Derivative = (rtDW.LookUpTable_l - *parameterBundle_mRealParameters) /
        (u0 - rtb_MathFunction1);
    }

    // Switch: '<S96>/Switch' incorporates:
    //   Step: '<S96>/Step'

    rtDW.Switch_p = ((!(tmp_13 < 5.0)) >= 0.5);

    // Derivative: '<S291>/Derivative'
    if ((rtDW.TimeStampA_b >= u0) && (rtDW.TimeStampB_j >= u0)) {
      // Derivative: '<S291>/Derivative'
      rtDW.Derivative_d = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_b;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_k;
      if (rtDW.TimeStampA_b < rtDW.TimeStampB_j) {
        if (rtDW.TimeStampB_j < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_j;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_k;
        }
      } else if (rtDW.TimeStampA_b >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_j;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_k;
      }

      // Derivative: '<S291>/Derivative'
      rtDW.Derivative_d = (rtDW.LookUpTable_g - *parameterBundle_mRealParameters)
        / (u0 - rtb_MathFunction1);
    }

    // Derivative: '<S289>/Derivative'
    if ((rtDW.TimeStampA_a >= u0) && (rtDW.TimeStampB_e >= u0)) {
      // Derivative: '<S289>/Derivative'
      rtDW.Derivative_p = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_a;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_j;
      if (rtDW.TimeStampA_a < rtDW.TimeStampB_e) {
        if (rtDW.TimeStampB_e < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_e;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_h;
        }
      } else if (rtDW.TimeStampA_a >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_e;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_h;
      }

      // Derivative: '<S289>/Derivative'
      rtDW.Derivative_p = (rtDW.LookUpTable_hy -
                           *parameterBundle_mRealParameters) / (u0 -
        rtb_MathFunction1);
    }

    // Derivative: '<S287>/Derivative'
    if ((rtDW.TimeStampA_o >= u0) && (rtDW.TimeStampB_jj >= u0)) {
      // Derivative: '<S287>/Derivative'
      rtDW.Derivative_px = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_o;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_jf;
      if (rtDW.TimeStampA_o < rtDW.TimeStampB_jj) {
        if (rtDW.TimeStampB_jj < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_jj;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_d;
        }
      } else if (rtDW.TimeStampA_o >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_jj;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_d;
      }

      // Derivative: '<S287>/Derivative'
      rtDW.Derivative_px = (rtDW.LookUpTable_aj -
                            *parameterBundle_mRealParameters) / (u0 -
        rtb_MathFunction1);
    }

    // Derivative: '<S292>/Derivative'
    if ((rtDW.TimeStampA_m >= u0) && (rtDW.TimeStampB_p >= u0)) {
      // Derivative: '<S292>/Derivative'
      rtDW.Derivative_dw = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_m;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_i;
      if (rtDW.TimeStampA_m < rtDW.TimeStampB_p) {
        if (rtDW.TimeStampB_p < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_p;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_dg;
        }
      } else if (rtDW.TimeStampA_m >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_p;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_dg;
      }

      // Derivative: '<S292>/Derivative'
      rtDW.Derivative_dw = (rtDW.LookUpTable_h -
                            *parameterBundle_mRealParameters) / (u0 -
        rtb_MathFunction1);
    }

    // Derivative: '<S280>/Derivative'
    if ((rtDW.TimeStampA_ov >= u0) && (rtDW.TimeStampB_f >= u0)) {
      // Derivative: '<S280>/Derivative'
      rtDW.Derivative_e = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_ov;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_l;
      if (rtDW.TimeStampA_ov < rtDW.TimeStampB_f) {
        if (rtDW.TimeStampB_f < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_f;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_dk;
        }
      } else if (rtDW.TimeStampA_ov >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_f;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_dk;
      }

      // Derivative: '<S280>/Derivative'
      rtDW.Derivative_e = (rtDW.LookUpTable_nk -
                           *parameterBundle_mRealParameters) / (u0 -
        rtb_MathFunction1);
    }

    // Derivative: '<S278>/Derivative'
    if ((rtDW.TimeStampA_bp >= u0) && (rtDW.TimeStampB_n >= u0)) {
      // Derivative: '<S278>/Derivative'
      rtDW.Derivative_l = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_bp;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_n;
      if (rtDW.TimeStampA_bp < rtDW.TimeStampB_n) {
        if (rtDW.TimeStampB_n < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_n;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_kp;
        }
      } else if (rtDW.TimeStampA_bp >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_n;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_kp;
      }

      // Derivative: '<S278>/Derivative'
      rtDW.Derivative_l = (rtDW.LookUpTable_a - *parameterBundle_mRealParameters)
        / (u0 - rtb_MathFunction1);
    }

    // Derivative: '<S276>/Derivative'
    if ((rtDW.TimeStampA_j >= u0) && (rtDW.TimeStampB_l >= u0)) {
      // Derivative: '<S276>/Derivative'
      rtDW.Derivative_g = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_j;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_p;
      if (rtDW.TimeStampA_j < rtDW.TimeStampB_l) {
        if (rtDW.TimeStampB_l < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_l;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_b;
        }
      } else if (rtDW.TimeStampA_j >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_l;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_b;
      }

      // Derivative: '<S276>/Derivative'
      rtDW.Derivative_g = (rtDW.LookUpTable_n - *parameterBundle_mRealParameters)
        / (u0 - rtb_MathFunction1);
    }

    // Derivative: '<S281>/Derivative'
    if ((rtDW.TimeStampA_jj >= u0) && (rtDW.TimeStampB_m >= u0)) {
      // Derivative: '<S281>/Derivative'
      rtDW.Derivative_n = 0.0;
    } else {
      rtb_MathFunction1 = rtDW.TimeStampA_jj;
      parameterBundle_mRealParameters = &rtDW.LastUAtTimeA_m;
      if (rtDW.TimeStampA_jj < rtDW.TimeStampB_m) {
        if (rtDW.TimeStampB_m < u0) {
          rtb_MathFunction1 = rtDW.TimeStampB_m;
          parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_g;
        }
      } else if (rtDW.TimeStampA_jj >= u0) {
        rtb_MathFunction1 = rtDW.TimeStampB_m;
        parameterBundle_mRealParameters = &rtDW.LastUAtTimeB_g;
      }

      // Derivative: '<S281>/Derivative'
      rtDW.Derivative_n = (rtDW.LookUpTable - *parameterBundle_mRealParameters) /
        (u0 - rtb_MathFunction1);
    }
  }

  if (rtmIsMajorTimeStep(rtM)) {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    NeuDiagnosticTree *diagnosticTree_1;
    NeuDiagnosticTree *diagnosticTree_2;
    NeuDiagnosticTree *diagnosticTree_3;
    NeuDiagnosticTree *diagnosticTree_4;
    NeuDiagnosticTree *diagnosticTree_5;
    real_T tmp_1[56];
    real_T tmp_c[20];
    real_T tmp_6[16];
    real_T tmp_8[16];
    real_T tmp_a[16];
    real_T tmp_4[12];
    real_T tmp_e[12];
    real_T time;
    real_T time_0;
    real_T time_1;
    real_T time_2;
    real_T time_3;
    real_T time_4;
    real_T time_5;
    real_T time_tmp_tmp;
    real_T *lastU;
    int32_T tmp_3;
    int_T tmp_2[15];
    int_T tmp_d[6];
    int_T tmp_7[5];
    int_T tmp_9[5];
    int_T tmp_b[5];
    int_T tmp_5[4];
    int_T tmp_f[4];
    boolean_T tmp;
    boolean_T tmp_0;

    // Update for SimscapeExecutionBlock: '<S260>/STATE_1' incorporates:
    //   Derivative: '<S276>/Derivative'
    //   Derivative: '<S278>/Derivative'
    //   Derivative: '<S280>/Derivative'
    //   Derivative: '<S281>/Derivative'
    //   Derivative: '<S287>/Derivative'
    //   Derivative: '<S289>/Derivative'
    //   Derivative: '<S291>/Derivative'
    //   Derivative: '<S292>/Derivative'
    //   Derivative: '<S97>/Derivative'
    //   SimscapeExecutionBlock: '<S260>/STATE_2'
    //   SimscapeExecutionBlock: '<S260>/STATE_3'
    //   SimscapeExecutionBlock: '<S260>/STATE_4'
    //   SimscapeExecutionBlock: '<S260>/STATE_5'
    //   SimscapeExecutionBlock: '<S260>/STATE_7'
    //   SimscapeExecutionBlock: '<S260>/STATE_8'

    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time_tmp_tmp = rtM->Timing.t[0];
    time = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 28;
    simulationData->mData->mContStates.mX = &rtX.Wind_TurbineRevolute_Joint1Rzq
      [0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    tmp = rtmIsMajorTimeStep(rtM);
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_2[0] = 0;
    tmp_1[0] = rtDW.INTERNAL_9_1_1[0];
    tmp_1[1] = rtDW.INTERNAL_9_1_1[1];
    tmp_1[2] = rtDW.INTERNAL_9_1_1[2];
    tmp_1[3] = rtDW.INTERNAL_9_1_1[3];
    tmp_2[1] = 4;
    tmp_1[4] = rtDW.INTERNAL_6_1_1[0];
    tmp_1[5] = rtDW.INTERNAL_6_1_1[1];
    tmp_1[6] = rtDW.INTERNAL_6_1_1[2];
    tmp_1[7] = rtDW.INTERNAL_6_1_1[3];
    tmp_2[2] = 8;
    tmp_1[8] = rtDW.INTERNAL_8_1_1[0];
    tmp_1[9] = rtDW.INTERNAL_8_1_1[1];
    tmp_1[10] = rtDW.INTERNAL_8_1_1[2];
    tmp_1[11] = rtDW.INTERNAL_8_1_1[3];
    tmp_2[3] = 12;
    tmp_1[12] = rtDW.INTERNAL_13_1_1[0];
    tmp_1[13] = rtDW.INTERNAL_13_1_1[1];
    tmp_1[14] = rtDW.INTERNAL_13_1_1[2];
    tmp_1[15] = rtDW.INTERNAL_13_1_1[3];
    tmp_2[4] = 16;
    tmp_1[16] = rtDW.INTERNAL_12_1_1[0];
    tmp_1[17] = rtDW.INTERNAL_12_1_1[1];
    tmp_1[18] = rtDW.INTERNAL_12_1_1[2];
    tmp_1[19] = rtDW.INTERNAL_12_1_1[3];
    tmp_2[5] = 20;
    tmp_1[20] = rtDW.INTERNAL_2_1_1[0];
    tmp_1[21] = rtDW.INTERNAL_2_1_1[1];
    tmp_1[22] = rtDW.INTERNAL_2_1_1[2];
    tmp_1[23] = rtDW.INTERNAL_2_1_1[3];
    tmp_2[6] = 24;
    tmp_1[24] = rtDW.INTERNAL_3_1_1[0];
    tmp_1[25] = rtDW.INTERNAL_3_1_1[1];
    tmp_1[26] = rtDW.INTERNAL_3_1_1[2];
    tmp_1[27] = rtDW.INTERNAL_3_1_1[3];
    tmp_2[7] = 28;
    tmp_1[28] = rtDW.INTERNAL_1_1_1[0];
    tmp_1[29] = rtDW.INTERNAL_1_1_1[1];
    tmp_1[30] = rtDW.INTERNAL_1_1_1[2];
    tmp_1[31] = rtDW.INTERNAL_1_1_1[3];
    tmp_2[8] = 32;
    tmp_1[32] = rtDW.INTERNAL_2_2_1[0];
    tmp_1[33] = rtDW.INTERNAL_2_2_1[1];
    tmp_1[34] = rtDW.INTERNAL_2_2_1[2];
    tmp_1[35] = rtDW.INTERNAL_2_2_1[3];
    tmp_2[9] = 36;
    tmp_1[36] = rtDW.INTERNAL_3_2_1[0];
    tmp_1[37] = rtDW.INTERNAL_3_2_1[1];
    tmp_1[38] = rtDW.INTERNAL_3_2_1[2];
    tmp_1[39] = rtDW.INTERNAL_3_2_1[3];
    tmp_2[10] = 40;
    tmp_1[40] = rtDW.INTERNAL_1_2_1[0];
    tmp_1[41] = rtDW.INTERNAL_1_2_1[1];
    tmp_1[42] = rtDW.INTERNAL_1_2_1[2];
    tmp_1[43] = rtDW.INTERNAL_1_2_1[3];
    tmp_2[11] = 44;
    tmp_1[44] = rtDW.INTERNAL_2_3_1[0];
    tmp_1[45] = rtDW.INTERNAL_2_3_1[1];
    tmp_1[46] = rtDW.INTERNAL_2_3_1[2];
    tmp_1[47] = rtDW.INTERNAL_2_3_1[3];
    tmp_2[12] = 48;
    tmp_1[48] = rtDW.INTERNAL_3_3_1[0];
    tmp_1[49] = rtDW.INTERNAL_3_3_1[1];
    tmp_1[50] = rtDW.INTERNAL_3_3_1[2];
    tmp_1[51] = rtDW.INTERNAL_3_3_1[3];
    tmp_2[13] = 52;
    tmp_1[52] = rtDW.INTERNAL_1_3_1[0];
    tmp_1[53] = rtDW.INTERNAL_1_3_1[1];
    tmp_1[54] = rtDW.INTERNAL_1_3_1[2];
    tmp_1[55] = rtDW.INTERNAL_1_3_1[3];
    tmp_2[14] = 56;
    simulationData->mData->mInputValues.mN = 56;
    simulationData->mData->mInputValues.mX = &tmp_1[0];
    simulationData->mData->mInputOffsets.mN = 15;
    simulationData->mData->mInputOffsets.mX = &tmp_2[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    // Update for SimscapeExecutionBlock: '<S260>/STATE_7' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_7_SimData;
    time_0 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 6;
    simulationData->mData->mContStates.mX = &rtX.Wind_TurbineBrakesInertiaw[0];
    simulationData->mData->mDiscStates.mN = 59;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_7_Discrete[0];
    simulationData->mData->mModeVector.mN = 16;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_7_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_5[0] = 0;
    tmp_4[0] = rtDW.INPUT_1_1_1[0];
    tmp_4[1] = rtDW.INPUT_1_1_1[1];
    tmp_4[2] = rtDW.INPUT_1_1_1[2];
    tmp_4[3] = rtDW.INPUT_1_1_1[3];
    tmp_5[1] = 4;
    tmp_4[4] = rtDW.INPUT_18_1_1[0];
    tmp_4[5] = rtDW.INPUT_18_1_1[1];
    tmp_4[6] = rtDW.INPUT_18_1_1[2];
    tmp_4[7] = rtDW.INPUT_18_1_1[3];
    tmp_5[2] = 8;
    tmp_4[8] = rtDW.INTERNAL_10_1_1[0];
    tmp_4[9] = rtDW.INTERNAL_10_1_1[1];
    tmp_4[10] = rtDW.INTERNAL_10_1_1[2];
    tmp_4[11] = rtDW.INTERNAL_10_1_1[3];
    tmp_5[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_4[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_5[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_7_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_7_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(rtM, msg_0);
      }
    }

    // Update for SimscapeExecutionBlock: '<S260>/STATE_5' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_5_SimData;
    time_1 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 25;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineHydraulicActuator_1[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_5_Discrete;
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_5_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_7[0] = 0;
    tmp_6[0] = rtDW.INPUT_2_1_1[0];
    tmp_6[1] = rtDW.INPUT_2_1_1[1];
    tmp_6[2] = rtDW.INPUT_2_1_1[2];
    tmp_6[3] = rtDW.INPUT_2_1_1[3];
    tmp_7[1] = 4;
    tmp_6[4] = rtDW.INPUT_3_1_1[0];
    tmp_6[5] = rtDW.INPUT_3_1_1[1];
    tmp_6[6] = rtDW.INPUT_3_1_1[2];
    tmp_6[7] = rtDW.INPUT_3_1_1[3];
    tmp_7[2] = 8;
    tmp_6[8] = rtDW.INPUT_4_1_1[0];
    tmp_6[9] = rtDW.INPUT_4_1_1[1];
    tmp_6[10] = rtDW.INPUT_4_1_1[2];
    tmp_6[11] = rtDW.INPUT_4_1_1[3];
    tmp_7[3] = 12;
    tmp_6[12] = rtDW.INTERNAL_4_1_1[0];
    tmp_6[13] = rtDW.INTERNAL_4_1_1[1];
    tmp_6[14] = rtDW.INTERNAL_4_1_1[2];
    tmp_6[15] = rtDW.INTERNAL_4_1_1[3];
    tmp_7[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_6[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_7[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_5_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_5_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_1;
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(rtM, msg_1);
      }
    }

    // Update for SimscapeExecutionBlock: '<S260>/STATE_4' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_4_SimData;
    time_2 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mContStates.mN = 25;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineHydraulicActuator_2[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_4_Discrete;
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_4_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_9[0] = 0;
    tmp_8[0] = rtDW.INPUT_5_1_1[0];
    tmp_8[1] = rtDW.INPUT_5_1_1[1];
    tmp_8[2] = rtDW.INPUT_5_1_1[2];
    tmp_8[3] = rtDW.INPUT_5_1_1[3];
    tmp_9[1] = 4;
    tmp_8[4] = rtDW.INPUT_6_1_1[0];
    tmp_8[5] = rtDW.INPUT_6_1_1[1];
    tmp_8[6] = rtDW.INPUT_6_1_1[2];
    tmp_8[7] = rtDW.INPUT_6_1_1[3];
    tmp_9[2] = 8;
    tmp_8[8] = rtDW.INPUT_7_1_1[0];
    tmp_8[9] = rtDW.INPUT_7_1_1[1];
    tmp_8[10] = rtDW.INPUT_7_1_1[2];
    tmp_8[11] = rtDW.INPUT_7_1_1[3];
    tmp_9[3] = 12;
    tmp_8[12] = rtDW.INTERNAL_5_1_1[0];
    tmp_8[13] = rtDW.INTERNAL_5_1_1[1];
    tmp_8[14] = rtDW.INTERNAL_5_1_1[2];
    tmp_8[15] = rtDW.INTERNAL_5_1_1[3];
    tmp_9[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_8[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_9[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_4_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_4_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_2;
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(rtM, msg_2);
      }
    }

    // Update for SimscapeExecutionBlock: '<S260>/STATE_3' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_3_SimData;
    time_3 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 25;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineHydraulicActuator_3[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_3_Discrete;
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_3_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_b[0] = 0;
    tmp_a[0] = rtDW.INPUT_8_1_1[0];
    tmp_a[1] = rtDW.INPUT_8_1_1[1];
    tmp_a[2] = rtDW.INPUT_8_1_1[2];
    tmp_a[3] = rtDW.INPUT_8_1_1[3];
    tmp_b[1] = 4;
    tmp_a[4] = rtDW.INPUT_9_1_1[0];
    tmp_a[5] = rtDW.INPUT_9_1_1[1];
    tmp_a[6] = rtDW.INPUT_9_1_1[2];
    tmp_a[7] = rtDW.INPUT_9_1_1[3];
    tmp_b[2] = 8;
    tmp_a[8] = rtDW.INPUT_10_1_1[0];
    tmp_a[9] = rtDW.INPUT_10_1_1[1];
    tmp_a[10] = rtDW.INPUT_10_1_1[2];
    tmp_a[11] = rtDW.INPUT_10_1_1[3];
    tmp_b[3] = 12;
    tmp_a[12] = rtDW.INTERNAL_7_1_1[0];
    tmp_a[13] = rtDW.INTERNAL_7_1_1[1];
    tmp_a[14] = rtDW.INTERNAL_7_1_1[2];
    tmp_a[15] = rtDW.INTERNAL_7_1_1[3];
    tmp_b[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_a[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_b[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_3_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_3_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_3;
        msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(rtM, msg_3);
      }
    }

    if (rtmIsMajorTimeStep(rtM)) {
      // Update for Memory: '<S96>/Memory'
      rtDW.Memory_PreviousInput = rtDW.Switch2_d;
    }

    // Update for SimscapeExecutionBlock: '<S260>/STATE_2' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_2_SimData;
    time_4 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    simulationData->mData->mContStates.mN = 6;
    simulationData->mData->mContStates.mX =
      &rtX.Wind_TurbineIdeal_MotorIdeal__n[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_2_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_d[0] = 0;
    tmp_c[0] = rtDW.INPUT_11_1_1[0];
    tmp_c[1] = rtDW.INPUT_11_1_1[1];
    tmp_c[2] = rtDW.INPUT_11_1_1[2];
    tmp_c[3] = rtDW.INPUT_11_1_1[3];
    tmp_d[1] = 4;
    tmp_c[4] = rtDW.INPUT_12_1_1[0];
    tmp_c[5] = rtDW.INPUT_12_1_1[1];
    tmp_c[6] = rtDW.INPUT_12_1_1[2];
    tmp_c[7] = rtDW.INPUT_12_1_1[3];
    tmp_d[2] = 8;
    tmp_c[8] = rtDW.INPUT_13_1_1[0];
    tmp_c[9] = rtDW.INPUT_13_1_1[1];
    tmp_c[10] = rtDW.INPUT_13_1_1[2];
    tmp_c[11] = rtDW.INPUT_13_1_1[3];
    tmp_d[3] = 12;
    tmp_c[12] = rtDW.INPUT_14_1_1[0];
    tmp_c[13] = rtDW.INPUT_14_1_1[1];
    tmp_c[14] = rtDW.INPUT_14_1_1[2];
    tmp_c[15] = rtDW.INPUT_14_1_1[3];
    tmp_d[4] = 16;
    tmp_c[16] = rtDW.INTERNAL_11_1_1[0];
    tmp_c[17] = rtDW.INTERNAL_11_1_1[1];
    tmp_c[18] = rtDW.INTERNAL_11_1_1[2];
    tmp_c[19] = rtDW.INTERNAL_11_1_1[3];
    tmp_d[5] = 20;
    simulationData->mData->mInputValues.mN = 20;
    simulationData->mData->mInputValues.mX = &tmp_c[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_d[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_2_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_2_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_4;
        msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(rtM, msg_4);
      }
    }

    // Update for SimscapeExecutionBlock: '<S260>/STATE_8' incorporates:
    //   SimscapeExecutionBlock: '<S260>/STATE_1'

    simulationData = (NeslSimulationData *)rtDW.STATE_8_SimData;
    time_5 = time_tmp_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_5;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_8_Discrete;
    simulationData->mData->mModeVector.mN = 3;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_8_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_f[0] = 0;
    tmp_e[0] = rtDW.INPUT_16_1_1[0];
    tmp_e[1] = rtDW.INPUT_16_1_1[1];
    tmp_e[2] = rtDW.INPUT_16_1_1[2];
    tmp_e[3] = rtDW.INPUT_16_1_1[3];
    tmp_f[1] = 4;
    tmp_e[4] = rtDW.INPUT_17_1_1[0];
    tmp_e[5] = rtDW.INPUT_17_1_1[1];
    tmp_e[6] = rtDW.INPUT_17_1_1[2];
    tmp_e[7] = rtDW.INPUT_17_1_1[3];
    tmp_f[2] = 8;
    tmp_e[8] = rtDW.INPUT_15_1_1[0];
    tmp_e[9] = rtDW.INPUT_15_1_1[1];
    tmp_e[10] = rtDW.INPUT_15_1_1[2];
    tmp_e[11] = rtDW.INPUT_15_1_1[3];
    tmp_f[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_e[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_f[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_8_DiagMgr;
    diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)rtDW.STATE_8_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        char *msg_5;
        msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
        rtmSetErrorStatus(rtM, msg_5);
      }
    }

    // Update for Derivative: '<S97>/Derivative'
    if (rtDW.TimeStampA == (rtInf)) {
      rtDW.TimeStampA = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA;
    } else if (rtDW.TimeStampB == (rtInf)) {
      rtDW.TimeStampB = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB;
    } else if (rtDW.TimeStampA < rtDW.TimeStampB) {
      rtDW.TimeStampA = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA;
    } else {
      rtDW.TimeStampB = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB;
    }

    *lastU = rtDW.LookUpTable_l;

    // Update for Derivative: '<S291>/Derivative'
    if (rtDW.TimeStampA_b == (rtInf)) {
      rtDW.TimeStampA_b = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_k;
    } else if (rtDW.TimeStampB_j == (rtInf)) {
      rtDW.TimeStampB_j = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_k;
    } else if (rtDW.TimeStampA_b < rtDW.TimeStampB_j) {
      rtDW.TimeStampA_b = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_k;
    } else {
      rtDW.TimeStampB_j = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_k;
    }

    *lastU = rtDW.LookUpTable_g;

    // Update for Derivative: '<S289>/Derivative'
    if (rtDW.TimeStampA_a == (rtInf)) {
      rtDW.TimeStampA_a = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_j;
    } else if (rtDW.TimeStampB_e == (rtInf)) {
      rtDW.TimeStampB_e = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_h;
    } else if (rtDW.TimeStampA_a < rtDW.TimeStampB_e) {
      rtDW.TimeStampA_a = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_j;
    } else {
      rtDW.TimeStampB_e = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_h;
    }

    *lastU = rtDW.LookUpTable_hy;

    // Update for Derivative: '<S287>/Derivative'
    if (rtDW.TimeStampA_o == (rtInf)) {
      rtDW.TimeStampA_o = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_jf;
    } else if (rtDW.TimeStampB_jj == (rtInf)) {
      rtDW.TimeStampB_jj = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_d;
    } else if (rtDW.TimeStampA_o < rtDW.TimeStampB_jj) {
      rtDW.TimeStampA_o = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_jf;
    } else {
      rtDW.TimeStampB_jj = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_d;
    }

    *lastU = rtDW.LookUpTable_aj;

    // Update for Derivative: '<S292>/Derivative'
    if (rtDW.TimeStampA_m == (rtInf)) {
      rtDW.TimeStampA_m = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_i;
    } else if (rtDW.TimeStampB_p == (rtInf)) {
      rtDW.TimeStampB_p = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_dg;
    } else if (rtDW.TimeStampA_m < rtDW.TimeStampB_p) {
      rtDW.TimeStampA_m = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_i;
    } else {
      rtDW.TimeStampB_p = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_dg;
    }

    *lastU = rtDW.LookUpTable_h;

    // Update for Derivative: '<S280>/Derivative'
    if (rtDW.TimeStampA_ov == (rtInf)) {
      rtDW.TimeStampA_ov = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_l;
    } else if (rtDW.TimeStampB_f == (rtInf)) {
      rtDW.TimeStampB_f = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_dk;
    } else if (rtDW.TimeStampA_ov < rtDW.TimeStampB_f) {
      rtDW.TimeStampA_ov = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_l;
    } else {
      rtDW.TimeStampB_f = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_dk;
    }

    *lastU = rtDW.LookUpTable_nk;

    // Update for Derivative: '<S278>/Derivative'
    if (rtDW.TimeStampA_bp == (rtInf)) {
      rtDW.TimeStampA_bp = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_n;
    } else if (rtDW.TimeStampB_n == (rtInf)) {
      rtDW.TimeStampB_n = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_kp;
    } else if (rtDW.TimeStampA_bp < rtDW.TimeStampB_n) {
      rtDW.TimeStampA_bp = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_n;
    } else {
      rtDW.TimeStampB_n = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_kp;
    }

    *lastU = rtDW.LookUpTable_a;

    // Update for Derivative: '<S276>/Derivative'
    if (rtDW.TimeStampA_j == (rtInf)) {
      rtDW.TimeStampA_j = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_p;
    } else if (rtDW.TimeStampB_l == (rtInf)) {
      rtDW.TimeStampB_l = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_b;
    } else if (rtDW.TimeStampA_j < rtDW.TimeStampB_l) {
      rtDW.TimeStampA_j = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_p;
    } else {
      rtDW.TimeStampB_l = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_b;
    }

    *lastU = rtDW.LookUpTable_n;

    // Update for Derivative: '<S281>/Derivative'
    if (rtDW.TimeStampA_jj == (rtInf)) {
      rtDW.TimeStampA_jj = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_m;
    } else if (rtDW.TimeStampB_m == (rtInf)) {
      rtDW.TimeStampB_m = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_g;
    } else if (rtDW.TimeStampA_jj < rtDW.TimeStampB_m) {
      rtDW.TimeStampA_jj = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeA_m;
    } else {
      rtDW.TimeStampB_m = time_tmp_tmp;
      lastU = &rtDW.LastUAtTimeB_g;
    }

    *lastU = rtDW.LookUpTable;
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++rtM->Timing.clockTick0;
    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      // Update absolute timer for sample time: [0.6s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.6, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      rtM->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void Wind_Turbine_derivatives(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  NeuDiagnosticTree *diagnosticTree_3;
  NeuDiagnosticTree *diagnosticTree_4;
  XDot *_rtXdot;
  real_T tmp[56];
  real_T tmp_a[20];
  real_T tmp_4[16];
  real_T tmp_6[16];
  real_T tmp_8[16];
  real_T tmp_2[12];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_4;
  real_T time_tmp;
  int32_T tmp_1;
  int_T tmp_0[15];
  int_T tmp_b[6];
  int_T tmp_5[5];
  int_T tmp_7[5];
  int_T tmp_9[5];
  int_T tmp_3[4];
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot *) rtM->derivs);

  // Derivatives for Integrator: '<S2>/Integrator'
  _rtXdot->Integrator_CSTATE = rtDW.Sum_es;

  // Derivatives for Integrator: '<S1>/Integrator'
  _rtXdot->Integrator_CSTATE_m = rtDW.Sum_n;

  // Derivatives for SimscapeInputBlock: '<S260>/INPUT_18_1_1'
  _rtXdot->Wind_TurbineTorque_ActuatorSimu = (rtDW.Gain_f -
    rtX.Wind_TurbineTorque_ActuatorSimu) * 200.0;

  // Derivatives for SimscapeExecutionBlock: '<S260>/STATE_1' incorporates:
  //   SimscapeExecutionBlock: '<S260>/STATE_2'
  //   SimscapeExecutionBlock: '<S260>/STATE_3'
  //   SimscapeExecutionBlock: '<S260>/STATE_4'
  //   SimscapeExecutionBlock: '<S260>/STATE_5'
  //   SimscapeExecutionBlock: '<S260>/STATE_7'

  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time_tmp = rtM->Timing.t[0];
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 28;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineRevolute_Joint1Rzq[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes;
  lsat = false;
  simulationData->mData->mFoundZcEvents = lsat;
  lsat = rtmIsMajorTimeStep(rtM);
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_0[0] = 0;
  tmp[0] = rtDW.INTERNAL_9_1_1[0];
  tmp[1] = rtDW.INTERNAL_9_1_1[1];
  tmp[2] = rtDW.INTERNAL_9_1_1[2];
  tmp[3] = rtDW.INTERNAL_9_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = rtDW.INTERNAL_6_1_1[0];
  tmp[5] = rtDW.INTERNAL_6_1_1[1];
  tmp[6] = rtDW.INTERNAL_6_1_1[2];
  tmp[7] = rtDW.INTERNAL_6_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = rtDW.INTERNAL_8_1_1[0];
  tmp[9] = rtDW.INTERNAL_8_1_1[1];
  tmp[10] = rtDW.INTERNAL_8_1_1[2];
  tmp[11] = rtDW.INTERNAL_8_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = rtDW.INTERNAL_13_1_1[0];
  tmp[13] = rtDW.INTERNAL_13_1_1[1];
  tmp[14] = rtDW.INTERNAL_13_1_1[2];
  tmp[15] = rtDW.INTERNAL_13_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = rtDW.INTERNAL_12_1_1[0];
  tmp[17] = rtDW.INTERNAL_12_1_1[1];
  tmp[18] = rtDW.INTERNAL_12_1_1[2];
  tmp[19] = rtDW.INTERNAL_12_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = rtDW.INTERNAL_2_1_1[0];
  tmp[21] = rtDW.INTERNAL_2_1_1[1];
  tmp[22] = rtDW.INTERNAL_2_1_1[2];
  tmp[23] = rtDW.INTERNAL_2_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = rtDW.INTERNAL_3_1_1[0];
  tmp[25] = rtDW.INTERNAL_3_1_1[1];
  tmp[26] = rtDW.INTERNAL_3_1_1[2];
  tmp[27] = rtDW.INTERNAL_3_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = rtDW.INTERNAL_1_1_1[0];
  tmp[29] = rtDW.INTERNAL_1_1_1[1];
  tmp[30] = rtDW.INTERNAL_1_1_1[2];
  tmp[31] = rtDW.INTERNAL_1_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = rtDW.INTERNAL_2_2_1[0];
  tmp[33] = rtDW.INTERNAL_2_2_1[1];
  tmp[34] = rtDW.INTERNAL_2_2_1[2];
  tmp[35] = rtDW.INTERNAL_2_2_1[3];
  tmp_0[9] = 36;
  tmp[36] = rtDW.INTERNAL_3_2_1[0];
  tmp[37] = rtDW.INTERNAL_3_2_1[1];
  tmp[38] = rtDW.INTERNAL_3_2_1[2];
  tmp[39] = rtDW.INTERNAL_3_2_1[3];
  tmp_0[10] = 40;
  tmp[40] = rtDW.INTERNAL_1_2_1[0];
  tmp[41] = rtDW.INTERNAL_1_2_1[1];
  tmp[42] = rtDW.INTERNAL_1_2_1[2];
  tmp[43] = rtDW.INTERNAL_1_2_1[3];
  tmp_0[11] = 44;
  tmp[44] = rtDW.INTERNAL_2_3_1[0];
  tmp[45] = rtDW.INTERNAL_2_3_1[1];
  tmp[46] = rtDW.INTERNAL_2_3_1[2];
  tmp[47] = rtDW.INTERNAL_2_3_1[3];
  tmp_0[12] = 48;
  tmp[48] = rtDW.INTERNAL_3_3_1[0];
  tmp[49] = rtDW.INTERNAL_3_3_1[1];
  tmp[50] = rtDW.INTERNAL_3_3_1[2];
  tmp[51] = rtDW.INTERNAL_3_3_1[3];
  tmp_0[13] = 52;
  tmp[52] = rtDW.INTERNAL_1_3_1[0];
  tmp[53] = rtDW.INTERNAL_1_3_1[1];
  tmp[54] = rtDW.INTERNAL_1_3_1[2];
  tmp[55] = rtDW.INTERNAL_1_3_1[3];
  tmp_0[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mDx.mN = 28;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineRevolute_Joint1Rzq[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  // End of Derivatives for SimscapeExecutionBlock: '<S260>/STATE_1'

  // Derivatives for SimscapeInputBlock: '<S260>/INTERNAL_10_1_1'
  _rtXdot->Wind_TurbineoutputFiltered_2541 = (rtDW.OUTPUT_1_0[7] -
    rtX.Wind_TurbineoutputFiltered_2541) * 1000.0;

  // Derivatives for SimscapeExecutionBlock: '<S260>/STATE_7'
  simulationData = (NeslSimulationData *)rtDW.STATE_7_SimData;
  time_0 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineBrakesInertiaw[0];
  simulationData->mData->mDiscStates.mN = 59;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_7_Discrete[0];
  simulationData->mData->mModeVector.mN = 16;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_7_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_3[0] = 0;
  tmp_2[0] = rtDW.INPUT_1_1_1[0];
  tmp_2[1] = rtDW.INPUT_1_1_1[1];
  tmp_2[2] = rtDW.INPUT_1_1_1[2];
  tmp_2[3] = rtDW.INPUT_1_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = rtDW.INPUT_18_1_1[0];
  tmp_2[5] = rtDW.INPUT_18_1_1[1];
  tmp_2[6] = rtDW.INPUT_18_1_1[2];
  tmp_2[7] = rtDW.INPUT_18_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = rtDW.INTERNAL_10_1_1[0];
  tmp_2[9] = rtDW.INTERNAL_10_1_1[1];
  tmp_2[10] = rtDW.INTERNAL_10_1_1[2];
  tmp_2[11] = rtDW.INTERNAL_10_1_1[3];
  tmp_3[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mDx.mN = 6;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineBrakesInertiaw[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_7_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_7_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_0;
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(rtM, msg_0);
    }
  }

  // Derivatives for Integrator: '<S112>/Integrator'
  _rtXdot->Integrator_CSTATE_e = rtDW.Sum_dg;

  // Derivatives for SimscapeExecutionBlock: '<S260>/STATE_5'
  simulationData = (NeslSimulationData *)rtDW.STATE_5_SimData;
  time_1 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_1[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_5_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_5_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_5[0] = 0;
  tmp_4[0] = rtDW.INPUT_2_1_1[0];
  tmp_4[1] = rtDW.INPUT_2_1_1[1];
  tmp_4[2] = rtDW.INPUT_2_1_1[2];
  tmp_4[3] = rtDW.INPUT_2_1_1[3];
  tmp_5[1] = 4;
  tmp_4[4] = rtDW.INPUT_3_1_1[0];
  tmp_4[5] = rtDW.INPUT_3_1_1[1];
  tmp_4[6] = rtDW.INPUT_3_1_1[2];
  tmp_4[7] = rtDW.INPUT_3_1_1[3];
  tmp_5[2] = 8;
  tmp_4[8] = rtDW.INPUT_4_1_1[0];
  tmp_4[9] = rtDW.INPUT_4_1_1[1];
  tmp_4[10] = rtDW.INPUT_4_1_1[2];
  tmp_4[11] = rtDW.INPUT_4_1_1[3];
  tmp_5[3] = 12;
  tmp_4[12] = rtDW.INTERNAL_4_1_1[0];
  tmp_4[13] = rtDW.INTERNAL_4_1_1[1];
  tmp_4[14] = rtDW.INTERNAL_4_1_1[2];
  tmp_4[15] = rtDW.INTERNAL_4_1_1[3];
  tmp_5[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_4[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_5[0];
  simulationData->mData->mDx.mN = 25;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineHydraulicActuator_1[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_5_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_5_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_1;
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(rtM, msg_1);
    }
  }

  // Derivatives for Integrator: '<S142>/Integrator'
  _rtXdot->Integrator_CSTATE_n = rtDW.Sum_mo;

  // Derivatives for SimscapeExecutionBlock: '<S260>/STATE_4'
  simulationData = (NeslSimulationData *)rtDW.STATE_4_SimData;
  time_2 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_2[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_4_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_4_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_7[0] = 0;
  tmp_6[0] = rtDW.INPUT_5_1_1[0];
  tmp_6[1] = rtDW.INPUT_5_1_1[1];
  tmp_6[2] = rtDW.INPUT_5_1_1[2];
  tmp_6[3] = rtDW.INPUT_5_1_1[3];
  tmp_7[1] = 4;
  tmp_6[4] = rtDW.INPUT_6_1_1[0];
  tmp_6[5] = rtDW.INPUT_6_1_1[1];
  tmp_6[6] = rtDW.INPUT_6_1_1[2];
  tmp_6[7] = rtDW.INPUT_6_1_1[3];
  tmp_7[2] = 8;
  tmp_6[8] = rtDW.INPUT_7_1_1[0];
  tmp_6[9] = rtDW.INPUT_7_1_1[1];
  tmp_6[10] = rtDW.INPUT_7_1_1[2];
  tmp_6[11] = rtDW.INPUT_7_1_1[3];
  tmp_7[3] = 12;
  tmp_6[12] = rtDW.INTERNAL_5_1_1[0];
  tmp_6[13] = rtDW.INTERNAL_5_1_1[1];
  tmp_6[14] = rtDW.INTERNAL_5_1_1[2];
  tmp_6[15] = rtDW.INTERNAL_5_1_1[3];
  tmp_7[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_6[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_7[0];
  simulationData->mData->mDx.mN = 25;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineHydraulicActuator_2[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_4_DiagMgr;
  diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_4_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_2;
      msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
      rtmSetErrorStatus(rtM, msg_2);
    }
  }

  // Derivatives for Integrator: '<S172>/Integrator'
  _rtXdot->Integrator_CSTATE_a = rtDW.Sum_mb;

  // Derivatives for SimscapeExecutionBlock: '<S260>/STATE_3'
  simulationData = (NeslSimulationData *)rtDW.STATE_3_SimData;
  time_3 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 25;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineHydraulicActuator_3[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_3_Discrete;
  simulationData->mData->mModeVector.mN = 23;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_3_Modes[0];
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_9[0] = 0;
  tmp_8[0] = rtDW.INPUT_8_1_1[0];
  tmp_8[1] = rtDW.INPUT_8_1_1[1];
  tmp_8[2] = rtDW.INPUT_8_1_1[2];
  tmp_8[3] = rtDW.INPUT_8_1_1[3];
  tmp_9[1] = 4;
  tmp_8[4] = rtDW.INPUT_9_1_1[0];
  tmp_8[5] = rtDW.INPUT_9_1_1[1];
  tmp_8[6] = rtDW.INPUT_9_1_1[2];
  tmp_8[7] = rtDW.INPUT_9_1_1[3];
  tmp_9[2] = 8;
  tmp_8[8] = rtDW.INPUT_10_1_1[0];
  tmp_8[9] = rtDW.INPUT_10_1_1[1];
  tmp_8[10] = rtDW.INPUT_10_1_1[2];
  tmp_8[11] = rtDW.INPUT_10_1_1[3];
  tmp_9[3] = 12;
  tmp_8[12] = rtDW.INTERNAL_7_1_1[0];
  tmp_8[13] = rtDW.INTERNAL_7_1_1[1];
  tmp_8[14] = rtDW.INTERNAL_7_1_1[2];
  tmp_8[15] = rtDW.INTERNAL_7_1_1[3];
  tmp_9[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_8[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_9[0];
  simulationData->mData->mDx.mN = 25;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineHydraulicActuator_3[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_3_DiagMgr;
  diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_3_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    usat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (usat) {
      char *msg_3;
      msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
      rtmSetErrorStatus(rtM, msg_3);
    }
  }

  // Derivatives for Integrator: '<S64>/Integrator'
  _rtXdot->Integrator_CSTATE_g[0] = rtDW.wbase[0];
  _rtXdot->Integrator_CSTATE_g[1] = rtDW.wbase[1];
  _rtXdot->Integrator_CSTATE_g[2] = rtDW.wbase[2];
  _rtXdot->Integrator_CSTATE_g[3] = rtDW.wbase[3];

  // Derivatives for Enabled SubSystem: '<S58>/Saturation'
  if (rtDW.Saturation_MODE) {
    // Derivatives for Integrator: '<S67>/Integrator'
    _rtXdot->Integrator_CSTATE_o = rtDW.uTT1e6s;
  } else {
    ((XDot *) rtM->derivs)->Integrator_CSTATE_o = 0.0;
  }

  // End of Derivatives for SubSystem: '<S58>/Saturation'

  // Derivatives for Integrator: '<S59>/Integrator'
  _rtXdot->Integrator_CSTATE_n2[0] = rtDW.Gain4[0];
  _rtXdot->Integrator_CSTATE_n2[1] = rtDW.Gain4[1];

  // Derivatives for Integrator: '<S96>/Integrator'
  _rtXdot->Integrator_CSTATE_b = rtDW.Switch_p;

  // Derivatives for Integrator: '<S192>/Integrator'
  _rtXdot->Integrator_CSTATE_mt[0] = rtDW.Sum_f[0];
  _rtXdot->Integrator_CSTATE_mt[1] = rtDW.Sum_f[1];
  _rtXdot->Integrator_CSTATE_mt[2] = rtDW.Sum_f[2];
  _rtXdot->Integrator_CSTATE_mt[3] = rtDW.Sum_f[3];

  // Derivatives for SimscapeInputBlock: '<S260>/INPUT_11_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal_Ya = (rtDW.Gain_l[0] -
    rtX.Wind_TurbineIdeal_MotorIdeal_Ya) * 200.0;

  // Derivatives for SimscapeInputBlock: '<S260>/INPUT_12_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal__e = (rtDW.Gain_l[1] -
    rtX.Wind_TurbineIdeal_MotorIdeal__e) * 200.0;

  // Derivatives for SimscapeInputBlock: '<S260>/INPUT_13_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal__g = (rtDW.Gain_l[2] -
    rtX.Wind_TurbineIdeal_MotorIdeal__g) * 200.0;

  // Derivatives for SimscapeInputBlock: '<S260>/INPUT_14_1_1'
  _rtXdot->Wind_TurbineIdeal_MotorIdeal__a = (rtDW.Gain_l[3] -
    rtX.Wind_TurbineIdeal_MotorIdeal__a) * 200.0;

  // Derivatives for SimscapeInputBlock: '<S260>/INTERNAL_11_1_1'
  _rtXdot->Wind_TurbineoutputFiltered_8434 = (rtDW.OUTPUT_1_0[8] -
    rtX.Wind_TurbineoutputFiltered_8434) * 1000.0;

  // Derivatives for SimscapeExecutionBlock: '<S260>/STATE_2'
  simulationData = (NeslSimulationData *)rtDW.STATE_2_SimData;
  time_4 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_4;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX = &rtX.Wind_TurbineIdeal_MotorIdeal__n[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_2_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_2_Modes;
  usat = false;
  simulationData->mData->mFoundZcEvents = usat;
  simulationData->mData->mIsMajorTimeStep = lsat;
  usat = false;
  simulationData->mData->mIsSolverAssertCheck = usat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  usat = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = usat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = lsat;
  tmp_b[0] = 0;
  tmp_a[0] = rtDW.INPUT_11_1_1[0];
  tmp_a[1] = rtDW.INPUT_11_1_1[1];
  tmp_a[2] = rtDW.INPUT_11_1_1[2];
  tmp_a[3] = rtDW.INPUT_11_1_1[3];
  tmp_b[1] = 4;
  tmp_a[4] = rtDW.INPUT_12_1_1[0];
  tmp_a[5] = rtDW.INPUT_12_1_1[1];
  tmp_a[6] = rtDW.INPUT_12_1_1[2];
  tmp_a[7] = rtDW.INPUT_12_1_1[3];
  tmp_b[2] = 8;
  tmp_a[8] = rtDW.INPUT_13_1_1[0];
  tmp_a[9] = rtDW.INPUT_13_1_1[1];
  tmp_a[10] = rtDW.INPUT_13_1_1[2];
  tmp_a[11] = rtDW.INPUT_13_1_1[3];
  tmp_b[3] = 12;
  tmp_a[12] = rtDW.INPUT_14_1_1[0];
  tmp_a[13] = rtDW.INPUT_14_1_1[1];
  tmp_a[14] = rtDW.INPUT_14_1_1[2];
  tmp_a[15] = rtDW.INPUT_14_1_1[3];
  tmp_b[4] = 16;
  tmp_a[16] = rtDW.INTERNAL_11_1_1[0];
  tmp_a[17] = rtDW.INTERNAL_11_1_1[1];
  tmp_a[18] = rtDW.INTERNAL_11_1_1[2];
  tmp_a[19] = rtDW.INTERNAL_11_1_1[3];
  tmp_b[5] = 20;
  simulationData->mData->mInputValues.mN = 20;
  simulationData->mData->mInputValues.mX = &tmp_a[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_b[0];
  simulationData->mData->mDx.mN = 6;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineIdeal_MotorIdeal__n[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_2_DiagMgr;
  diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_2_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    lsat = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (lsat) {
      char *msg_4;
      msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
      rtmSetErrorStatus(rtM, msg_4);
    }
  }

  // Derivatives for Integrator: '<S19>/Integrator'
  _rtXdot->Integrator_CSTATE_as = rtDW.Sum_ga;

  // Derivatives for Integrator: '<S18>/Integrator'
  _rtXdot->Integrator_CSTATE_gx = rtDW.Sum_l;

  // Derivatives for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[0] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[0] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[0] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[0] = rtDW.IntegralGain_o[0];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[0] = 0.0;
  }

  // Derivatives for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[0] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[0] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[0] > 0.0)) || (usat &&
       (rtDW.IntegralGain[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[0] = rtDW.IntegralGain[0];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[0] = 0.0;
  }

  // Derivatives for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[1] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[1] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[1] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[1] = rtDW.IntegralGain_o[1];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[1] = 0.0;
  }

  // Derivatives for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[1] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[1] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[1] > 0.0)) || (usat &&
       (rtDW.IntegralGain[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[1] = rtDW.IntegralGain[1];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[1] = 0.0;
  }

  // Derivatives for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[2] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[2] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[2] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[2] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[2] = rtDW.IntegralGain_o[2];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[2] = 0.0;
  }

  // Derivatives for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[2] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[2] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[2] > 0.0)) || (usat &&
       (rtDW.IntegralGain[2] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[2] = rtDW.IntegralGain[2];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[2] = 0.0;
  }

  // Derivatives for Integrator: '<S293>/Integrator'
  lsat = (rtX.Integrator_CSTATE_l[3] <= -0.5);
  usat = (rtX.Integrator_CSTATE_l[3] >= 0.5);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o[3] > 0.0)) || (usat &&
       (rtDW.IntegralGain_o[3] < 0.0))) {
    _rtXdot->Integrator_CSTATE_l[3] = rtDW.IntegralGain_o[3];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_l[3] = 0.0;
  }

  // Derivatives for Integrator: '<S294>/Integrator'
  lsat = (rtX.Integrator_CSTATE_ga[3] <= -900.0);
  usat = (rtX.Integrator_CSTATE_ga[3] >= 900.0);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain[3] > 0.0)) || (usat &&
       (rtDW.IntegralGain[3] < 0.0))) {
    _rtXdot->Integrator_CSTATE_ga[3] = rtDW.IntegralGain[3];
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_ga[3] = 0.0;
  }

  // Derivatives for Integrator: '<S234>/Integrator'
  lsat = (rtX.Integrator_CSTATE_i <= -10.26);
  usat = (rtX.Integrator_CSTATE_i >= 10.26);
  if (((!lsat) && (!usat)) || (lsat && (rtDW.IntegralGain_o4 > 0.0)) || (usat &&
       (rtDW.IntegralGain_o4 < 0.0))) {
    _rtXdot->Integrator_CSTATE_i = rtDW.IntegralGain_o4;
  } else {
    // in saturation
    _rtXdot->Integrator_CSTATE_i = 0.0;
  }

  // End of Derivatives for Integrator: '<S234>/Integrator'

  // Derivatives for Integrator: '<S231>/Integrator'
  _rtXdot->Integrator_CSTATE_h[0] = rtDW.IntegralGain_oc[0];
  _rtXdot->Integrator_CSTATE_h[1] = rtDW.IntegralGain_oc[1];
  _rtXdot->Integrator_CSTATE_h[2] = rtDW.IntegralGain_oc[2];

  // Derivatives for Integrator: '<S54>/Rotor angle thetam'
  _rtXdot->Rotoranglethetam_CSTATE = rtDW.web_psb;

  // Derivatives for Integrator: '<S311>/integrator'
  _rtXdot->integrator_CSTATE = rtDW.putoMW;

  // Derivatives for Integrator: '<S312>/integrator'
  _rtXdot->integrator_CSTATE_f = rtDW.putoMvar;
}

// Model initialize function
void Wind_Turbine_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **) &rtM->contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo,
      &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo,
      &rtM->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo,
      &rtM->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetSolverMassMatrixIr(&rtM->solverInfo, rtMassMatrix.ir);
    rtsiSetSolverMassMatrixJc(&rtM->solverInfo, rtMassMatrix.jc);
    rtsiSetSolverMassMatrixPr(&rtM->solverInfo, rtMassMatrix.pr);
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtM->intgData.x0 = rtM->odeX0;
  rtM->intgData.f0 = rtM->odeF0;
  rtM->intgData.x1start = rtM->odeX1START;
  rtM->intgData.f1 = rtM->odeF1;
  rtM->intgData.Delta = rtM->odeDELTA;
  rtM->intgData.E = rtM->odeE;
  rtM->intgData.fac = rtM->odeFAC;

  // initialize
  {
    int_T i;
    real_T *f = rtM->intgData.fac;
    for (i = 0; i < static_cast<int_T>(sizeof(rtM->odeFAC)/sizeof(real_T)); i++)
    {
      f[i] = 1.5e-8;
    }
  }

  rtM->intgData.DFDX = rtM->odeDFDX;
  rtM->intgData.W = rtM->odeW;
  rtM->intgData.pivots = rtM->odePIVOTS;
  rtM->intgData.xtmp = rtM->odeXTMP;
  rtM->intgData.ztmp = rtM->odeZTMP;
  rtM->intgData.M = rtM->odeMASSMATRIX_M;
  rtM->intgData.M1 = rtM->odeMASSMATRIX_M1;
  rtM->intgData.xdot = rtM->odeXDOT;
  rtM->intgData.Edot = rtM->odeEDOT;
  rtM->intgData.fminusMxdot = rtM->odeFMXDOT;
  rtM->intgData.isFirstStep = true;
  rtsiSetSolverExtrapolationOrder(&rtM->solverInfo, 4);
  rtsiSetSolverNumberNewtonIterations(&rtM->solverInfo, 1);
  rtM->contStates = ((X *) &rtX);
  rtM->massMatrixType = ((ssMatrixType)3);
  rtM->massMatrixNzMax = (108);
  rtM->massMatrixIr = (rtMassMatrix.ir);
  rtM->massMatrixJc = (rtMassMatrix.jc);
  rtM->massMatrixPr = (rtMassMatrix.pr);
  rtsiSetSolverMassMatrixType(&rtM->solverInfo, (ssMatrixType)3);
  rtsiSetSolverMassMatrixNzMax(&rtM->solverInfo, 108);
  rtsiSetSolverData(&rtM->solverInfo, static_cast<void *>(&rtM->intgData));
  rtsiSetSolverName(&rtM->solverInfo,"ode14x");
  rtM->solverInfoPtr = (&rtM->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap = rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    // polyspace +2 MISRA2012:D4.1 [Justified:Low] "rtM points to
    // static memory which is guaranteed to be non-NULL"
    rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    rtM->Timing.sampleTimes = (&rtM->Timing.sampleTimesArray[0]);
    rtM->Timing.offsetTimes = (&rtM->Timing.offsetTimesArray[0]);

    // task periods
    rtM->Timing.sampleTimes[0] = (0.0);
    rtM->Timing.sampleTimes[1] = (0.6);

    // task offsets
    rtM->Timing.offsetTimes[0] = (0.0);
    rtM->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(rtM, -1);
  rtM->Timing.stepSize0 = 0.6;
  rtM->solverInfoPtr = (&rtM->solverInfo);
  rtM->Timing.stepSize = (0.6);
  rtsiSetFixedStepSize(&rtM->solverInfo, 0.6);
  rtsiSetSolverMode(&rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  // Root-level init GlobalMassMatrixPr offset
  {
    rtDW.STATE_5_MASS_MATRIX_PR = 39;  // '<S260>/STATE_5'
    rtDW.STATE_4_MASS_MATRIX_PR = 49;  // '<S260>/STATE_4'
    rtDW.STATE_3_MASS_MATRIX_PR = 59;  // '<S260>/STATE_3'
    rtDW.STATE_2_MASS_MATRIX_PR = 84;  // '<S260>/STATE_2'
  }

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo = &rtM->NonInlinedSFcns.sfcnInfo;
    rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(rtM)));
    rtM->Sizes.numSampTimes = (2);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &rtM->Sizes.numSampTimes);
    rtM->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(rtM)[0]);
    rtM->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(rtM)[1]);
    rtssSetTPtrPtr(sfcnInfo,rtM->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(rtM));
    rtssSetStepSizePtr(sfcnInfo, &rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &rtM->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &rtM->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &rtM->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &rtM->solverInfoPtr);
  }

  rtM->Sizes.numSFcns = (1);

  // register each child
  {
    (void) std::memset(static_cast<void *>(&rtM->
      NonInlinedSFcns.childSFunctions[0]), 0,
                       1*sizeof(SimStruct));
    rtM->childSfunctions = (&rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    rtM->childSfunctions[0] = (&rtM->NonInlinedSFcns.childSFunctions[0]);

    // Level2 S-Function Block: Wind_Turbine/<S304>/State-Space (sfun_psbdqc)
    {
      SimStruct *rts = rtM->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod = rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &rtM->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts, &rtM->
        NonInlinedSFcns.inputOutputPortInfo2[0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, rtM->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts, &rtM->NonInlinedSFcns.methods2[0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts, &rtM->NonInlinedSFcns.methods3[0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts, &rtM->NonInlinedSFcns.methods4[0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts, &rtM->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &rtM->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &rtM->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &rtM->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &rtM->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &rtM->NonInlinedSFcns.Sfcn0.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = &rtDW.ComplextoRealImag_o1[0];
            for (i1=0; i1 < 11; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }

            u0 = &rtDW.ComplextoRealImag_o2[0];
            for (i1=0; i1 < 11; i1++) {
              sfcnUPtrs[i1+ 11] = &u0[i1];
            }

            sfcnUPtrs[22] = &rtDW.Switch3_l;
            sfcnUPtrs[23] = &rtDW.Switch3_j;
            sfcnUPtrs[24] = &rtDW.Switch3_lp;
            sfcnUPtrs[25] = &rtDW.Switch3_o;
            sfcnUPtrs[26] = &rtDW.Switch3_d;
            sfcnUPtrs[27] = &rtDW.Switch3_dj;
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 28);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts, &rtM->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &rtM->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &rtM->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 34);
          ssSetOutputPortSignal(rts, 0, ((real_T *) rtDW.StateSpace));
        }
      }

      // path info
      ssSetModelName(rts, "State-Space");
      ssSetPath(rts, "Wind_Turbine/powergui/EquivalentModel1/State-Space");
      ssSetRTModel(rts,rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **) &rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)rtConstP.StateSpace_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)rtConstP.StateSpace_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)rtConstP.StateSpace_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)rtConstP.StateSpace_P4_Size);
      }

      // work vectors
      ssSetRWork(rts, (real_T *) &rtDW.StateSpace_RWORK[0]);
      ssSetIWork(rts, (int_T *) &rtDW.StateSpace_IWORK[0]);
      ssSetPWork(rts, (void **) &rtDW.StateSpace_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &rtM->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &rtM->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        // RWORK
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &rtDW.StateSpace_RWORK[0]);

        // IWORK
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &rtDW.StateSpace_IWORK[0]);

        // PWORK
        ssSetDWorkWidth(rts, 2, 15);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &rtDW.StateSpace_PWORK[0]);
      }

      // registration
      sfun_psbdqc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeModelParameters modelParameters_1;
    NeModelParameters modelParameters_2;
    NeModelParameters modelParameters_3;
    NeModelParameters modelParameters_4;
    NeModelParameters modelParameters_5;
    NeModelParameters modelParameters_6;
    NeModelParameters modelParameters_7;
    NeModelParameters modelParameters_8;
    NeModelParameters modelParameters_9;
    NeModelParameters modelParameters_a;
    NeModelParameters modelParameters_b;
    NeModelParameters modelParameters_c;
    NeModelParameters modelParameters_d;
    NeModelParameters modelParameters_e;
    NeslRtpManager *manager;
    NeslRtpManager *manager_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    NeuDiagnosticTree *diagnosticTree_1;
    NeuDiagnosticTree *diagnosticTree_2;
    NeuDiagnosticTree *diagnosticTree_3;
    NeuDiagnosticTree *diagnosticTree_4;
    NeuDiagnosticTree *diagnosticTree_5;
    NeuDiagnosticTree *diagnosticTree_6;
    NeuDiagnosticTree *diagnosticTree_7;
    NeuDiagnosticTree *diagnosticTree_8;
    NeuDiagnosticTree *diagnosticTree_9;
    NeuDiagnosticTree *diagnosticTree_a;
    NeuDiagnosticTree *diagnosticTree_b;
    NeuDiagnosticTree *diagnosticTree_c;
    NeuDiagnosticTree *diagnosticTree_d;
    NeuDiagnosticTree *diagnosticTree_e;
    real_T tmp_2;
    int32_T tmp_3;
    int_T tmp_5;
    int_T tmp_6;
    int_T tmp_7;
    int_T tmp_8;
    int_T tmp_9;
    boolean_T tmp_0;
    boolean_T tmp_4;

    // Start for FromWorkspace: '<S45>/FromWs'
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 5.0, 5.0, 11.0, 11.0, 21.0,
        21.0, 25.0, 25.0, 28.0, 28.0, 31.0, 31.0, 36.6, 36.6, 45.0, 45.0,
        54.800000000000004, 54.800000000000004, 60.2, 60.2, 75.0, 75.0, 78.2,
        78.2, 80.0, 80.0, 130.0 } ;

      static real_T pDataValues0[] = { 31.0, 25.2, 25.2, 2.0, 11.200000000000001,
        8.4400000000000013, 8.4400000000000013, 3.84, 3.84, 2.0, 27.0, 3.0, 3.0,
        10.14705882352942, 10.14705882352942, 23.488235294117658,
        23.488235294117658, 43.5, 43.5, 33.893421052631581, 33.893421052631581,
        28.6, 28.6, 13.9, 13.9, 33.0, 33.0, 1.0, 1.0, 35.0, 0.0, -4.2, -4.2,
        0.36000000000000121, 0.36000000000000121, 7.2, 7.2, 0.5,
        9.6000000000000014, 8.0000000000000018, 8.0000000000000018,
        6.8000000000000007, 6.8000000000000007, 5.6000000000000005, -3.6,
        1.5717171717171718, 1.5717171717171718, 1.2155400155400153,
        1.2155400155400153, 0.8, 0.8, 1.4950495049504955, 1.4950495049504955,
        3.4000000000000004, 7.8000000000000007, 7.765090909090909,
        7.765090909090909, 7.745454545454546, 7.745454545454546, 7.2 } ;

      rtDW.FromWs_PWORK.TimePtr = static_cast<void *>(pTimeValues0);
      rtDW.FromWs_PWORK.DataPtr = static_cast<void *>(pDataValues0);
      rtDW.FromWs_IWORK.PrevIndex = 0;
    }

    // Start for SimscapeExecutionBlock: '<S260>/STATE_1'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_1_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 0, 0);
      rtDW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters.mRTWModifiedTimeStamp = 5.66501908E+8;
    modelParameters.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator,
      &modelParameters, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/STATE_1'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_1_0'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_1_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 1, 0);
      rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_0.mRTWModifiedTimeStamp = 5.66501908E+8;
    modelParameters_0.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      &modelParameters_0, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(rtM, msg_0);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_1_0'

    // Start for SimscapeRtp: '<S34>/RTP_7'
    manager_0 = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_7", 0);
    manager = manager_0;
    tmp_0 = pointer_is_null(manager_0);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_7_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_7", 0);
    }

    rtDW.RTP_7_RtpManager = (void *)manager;
    rtDW.bitsForTID1.RTP_7_SetParametersNeeded = true;

    // End of Start for SimscapeRtp: '<S34>/RTP_7'

    // Start for SimscapeExecutionBlock: '<S260>/STATE_7'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_7", 0, 0);
    rtDW.STATE_7_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_7_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_7_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_7", 0, 0);
      rtDW.STATE_7_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_7_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_7_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_1.mSolverTolerance = 0.001;
    modelParameters_1.mVariableStepSolver = false;
    modelParameters_1.mIsUsingODEN = false;
    modelParameters_1.mFixedStepSize = 0.001;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_1.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_1.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_1.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_1.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_1.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_1.mIsUsingODEN = tmp_0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_7_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_7_Simulator,
      &modelParameters_1, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_1;
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(rtM, msg_1);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/STATE_7'

    // Start for SimscapeRtp: '<S34>/RTP_5'
    manager_0 = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_5", 0);
    manager = manager_0;
    tmp_0 = pointer_is_null(manager_0);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_5_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_5", 0);
    }

    rtDW.RTP_5_RtpManager = (void *)manager;
    rtDW.bitsForTID1.RTP_5_SetParametersNeeded = true;

    // End of Start for SimscapeRtp: '<S34>/RTP_5'

    // Start for SimscapeExecutionBlock: '<S260>/STATE_5'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 0, 0);
    rtDW.STATE_5_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_5_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_5_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 0, 0);
      rtDW.STATE_5_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_5_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_5_DiagMgr = (void *)diagnosticManager;
    modelParameters_2.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_2.mSolverTolerance = 0.001;
    modelParameters_2.mVariableStepSolver = false;
    modelParameters_2.mIsUsingODEN = false;
    modelParameters_2.mFixedStepSize = 0.001;
    modelParameters_2.mStartTime = 0.0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mUseSimState = false;
    modelParameters_2.mLinTrimCompile = false;
    modelParameters_2.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_2.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_2.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_2.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_2.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_2.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_2.mIsUsingODEN = tmp_0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_5_DiagMgr;
    diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_5_Simulator,
      &modelParameters_2, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_2;
        msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
        rtmSetErrorStatus(rtM, msg_2);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/STATE_5'

    // Start for SimscapeRtp: '<S34>/RTP_4'
    manager_0 = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_4", 0);
    manager = manager_0;
    tmp_0 = pointer_is_null(manager_0);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_4_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_4", 0);
    }

    rtDW.RTP_4_RtpManager = (void *)manager;
    rtDW.bitsForTID1.RTP_4_SetParametersNeeded = true;

    // End of Start for SimscapeRtp: '<S34>/RTP_4'

    // Start for SimscapeExecutionBlock: '<S260>/STATE_4'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 0, 0);
    rtDW.STATE_4_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_4_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_4_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 0, 0);
      rtDW.STATE_4_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_4_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_4_DiagMgr = (void *)diagnosticManager;
    modelParameters_3.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_3.mSolverTolerance = 0.001;
    modelParameters_3.mVariableStepSolver = false;
    modelParameters_3.mIsUsingODEN = false;
    modelParameters_3.mFixedStepSize = 0.001;
    modelParameters_3.mStartTime = 0.0;
    modelParameters_3.mLoadInitialState = false;
    modelParameters_3.mUseSimState = false;
    modelParameters_3.mLinTrimCompile = false;
    modelParameters_3.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_3.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_3.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_3.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_3.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_3.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_3.mIsUsingODEN = tmp_0;
    modelParameters_3.mLoadInitialState = false;
    modelParameters_3.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_4_DiagMgr;
    diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_4_Simulator,
      &modelParameters_3, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_3;
        msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
        rtmSetErrorStatus(rtM, msg_3);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/STATE_4'

    // Start for SimscapeRtp: '<S34>/RTP_3'
    manager_0 = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_3", 0);
    manager = manager_0;
    tmp_0 = pointer_is_null(manager_0);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_3_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_3", 0);
    }

    rtDW.RTP_3_RtpManager = (void *)manager;
    rtDW.bitsForTID1.RTP_3_SetParametersNeeded = true;

    // End of Start for SimscapeRtp: '<S34>/RTP_3'

    // Start for SimscapeExecutionBlock: '<S260>/STATE_3'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 0, 0);
    rtDW.STATE_3_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_3_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_3_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 0, 0);
      rtDW.STATE_3_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_3_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_3_DiagMgr = (void *)diagnosticManager;
    modelParameters_4.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_4.mSolverTolerance = 0.001;
    modelParameters_4.mVariableStepSolver = false;
    modelParameters_4.mIsUsingODEN = false;
    modelParameters_4.mFixedStepSize = 0.001;
    modelParameters_4.mStartTime = 0.0;
    modelParameters_4.mLoadInitialState = false;
    modelParameters_4.mUseSimState = false;
    modelParameters_4.mLinTrimCompile = false;
    modelParameters_4.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_4.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_4.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_4.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_4.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_4.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_4.mIsUsingODEN = tmp_0;
    modelParameters_4.mLoadInitialState = false;
    modelParameters_4.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_3_DiagMgr;
    diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_3_Simulator,
      &modelParameters_4, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_4;
        msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
        rtmSetErrorStatus(rtM, msg_4);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/STATE_3'

    // Start for S-Function (sfun_psbdqc): '<S304>/State-Space'
    // Level2 S-Function Block: '<S304>/State-Space' (sfun_psbdqc)
    {
      SimStruct *rts = rtM->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_5_0'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 1, 0);
    rtDW.OUTPUT_5_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_5_0_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_5_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 1, 0);
      rtDW.OUTPUT_5_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_5_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_5_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_5.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_5.mSolverTolerance = 0.001;
    modelParameters_5.mVariableStepSolver = false;
    modelParameters_5.mIsUsingODEN = false;
    modelParameters_5.mFixedStepSize = 0.001;
    modelParameters_5.mStartTime = 0.0;
    modelParameters_5.mLoadInitialState = false;
    modelParameters_5.mUseSimState = false;
    modelParameters_5.mLinTrimCompile = false;
    modelParameters_5.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_5.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_5.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_5.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_5.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_5.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_5.mIsUsingODEN = tmp_0;
    modelParameters_5.mLoadInitialState = false;
    modelParameters_5.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_5_0_DiagMgr;
    diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_5_0_Simulator,
      &modelParameters_5, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_5;
        msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
        rtmSetErrorStatus(rtM, msg_5);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_5_0'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_4_0'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 1, 0);
    rtDW.OUTPUT_4_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_4_0_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_4_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 1, 0);
      rtDW.OUTPUT_4_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_4_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_4_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_6.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_6.mSolverTolerance = 0.001;
    modelParameters_6.mVariableStepSolver = false;
    modelParameters_6.mIsUsingODEN = false;
    modelParameters_6.mFixedStepSize = 0.001;
    modelParameters_6.mStartTime = 0.0;
    modelParameters_6.mLoadInitialState = false;
    modelParameters_6.mUseSimState = false;
    modelParameters_6.mLinTrimCompile = false;
    modelParameters_6.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_6.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_6.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_6.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_6.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_6.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_6.mIsUsingODEN = tmp_0;
    modelParameters_6.mLoadInitialState = false;
    modelParameters_6.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_4_0_DiagMgr;
    diagnosticTree_6 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_4_0_Simulator,
      &modelParameters_6, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_6;
        msg_6 = rtw_diagnostics_msg(diagnosticTree_6);
        rtmSetErrorStatus(rtM, msg_6);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_4_0'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_3_0'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 1, 0);
    rtDW.OUTPUT_3_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_3_0_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_3_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 1, 0);
      rtDW.OUTPUT_3_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_3_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_3_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_7.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_7.mSolverTolerance = 0.001;
    modelParameters_7.mVariableStepSolver = false;
    modelParameters_7.mIsUsingODEN = false;
    modelParameters_7.mFixedStepSize = 0.001;
    modelParameters_7.mStartTime = 0.0;
    modelParameters_7.mLoadInitialState = false;
    modelParameters_7.mUseSimState = false;
    modelParameters_7.mLinTrimCompile = false;
    modelParameters_7.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_7.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_7.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_7.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_7.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_7.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_7.mIsUsingODEN = tmp_0;
    modelParameters_7.mLoadInitialState = false;
    modelParameters_7.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_3_0_DiagMgr;
    diagnosticTree_7 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_3_0_Simulator,
      &modelParameters_7, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_7;
        msg_7 = rtw_diagnostics_msg(diagnosticTree_7);
        rtmSetErrorStatus(rtM, msg_7);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_3_0'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_7_0'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_7", 1, 0);
    rtDW.OUTPUT_7_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_7_0_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_7_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_7", 1, 0);
      rtDW.OUTPUT_7_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_7_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_7_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_8.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_8.mSolverTolerance = 0.001;
    modelParameters_8.mVariableStepSolver = false;
    modelParameters_8.mIsUsingODEN = false;
    modelParameters_8.mFixedStepSize = 0.001;
    modelParameters_8.mStartTime = 0.0;
    modelParameters_8.mLoadInitialState = false;
    modelParameters_8.mUseSimState = false;
    modelParameters_8.mLinTrimCompile = false;
    modelParameters_8.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_8.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_8.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_8.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_8.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_8.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_8.mIsUsingODEN = tmp_0;
    modelParameters_8.mLoadInitialState = false;
    modelParameters_8.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_7_0_DiagMgr;
    diagnosticTree_8 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_7_0_Simulator,
      &modelParameters_8, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_8;
        msg_8 = rtw_diagnostics_msg(diagnosticTree_8);
        rtmSetErrorStatus(rtM, msg_8);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_7_0'

    // Start for SimscapeRtp: '<S34>/RTP_2'
    manager_0 = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_2", 0);
    manager = manager_0;
    tmp_0 = pointer_is_null(manager_0);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_2_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_2", 0);
    }

    rtDW.RTP_2_RtpManager = (void *)manager;
    rtDW.bitsForTID1.RTP_2_SetParametersNeeded = true;

    // End of Start for SimscapeRtp: '<S34>/RTP_2'

    // Start for SimscapeExecutionBlock: '<S260>/STATE_2'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 0, 0);
    rtDW.STATE_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_2_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_2_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 0, 0);
      rtDW.STATE_2_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_2_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_9.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_9.mSolverTolerance = 0.001;
    modelParameters_9.mVariableStepSolver = false;
    modelParameters_9.mIsUsingODEN = false;
    modelParameters_9.mFixedStepSize = 0.001;
    modelParameters_9.mStartTime = 0.0;
    modelParameters_9.mLoadInitialState = false;
    modelParameters_9.mUseSimState = false;
    modelParameters_9.mLinTrimCompile = false;
    modelParameters_9.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_9.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_9.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_9.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_9.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_9.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_9.mIsUsingODEN = tmp_0;
    modelParameters_9.mLoadInitialState = false;
    modelParameters_9.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_2_DiagMgr;
    diagnosticTree_9 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_2_Simulator,
      &modelParameters_9, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_9;
        msg_9 = rtw_diagnostics_msg(diagnosticTree_9);
        rtmSetErrorStatus(rtM, msg_9);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/STATE_2'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_2_0'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 1, 0);
    rtDW.OUTPUT_2_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_2_0_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_2_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 1, 0);
      rtDW.OUTPUT_2_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_2_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_2_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_a.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_a.mSolverTolerance = 0.001;
    modelParameters_a.mVariableStepSolver = false;
    modelParameters_a.mIsUsingODEN = false;
    modelParameters_a.mFixedStepSize = 0.001;
    modelParameters_a.mStartTime = 0.0;
    modelParameters_a.mLoadInitialState = false;
    modelParameters_a.mUseSimState = false;
    modelParameters_a.mLinTrimCompile = false;
    modelParameters_a.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_a.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_a.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_a.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_a.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_a.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_a.mIsUsingODEN = tmp_0;
    modelParameters_a.mLoadInitialState = false;
    modelParameters_a.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_2_0_DiagMgr;
    diagnosticTree_a = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_2_0_Simulator,
      &modelParameters_a, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_a;
        msg_a = rtw_diagnostics_msg(diagnosticTree_a);
        rtmSetErrorStatus(rtM, msg_a);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_2_0'

    // Start for SimscapeExecutionBlock: '<S260>/STATE_8'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_8", 0, 0);
    rtDW.STATE_8_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_8_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_8_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_8", 0, 0);
      rtDW.STATE_8_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_8_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_8_DiagMgr = (void *)diagnosticManager;
    modelParameters_b.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_b.mSolverTolerance = 0.001;
    modelParameters_b.mVariableStepSolver = false;
    modelParameters_b.mIsUsingODEN = false;
    modelParameters_b.mFixedStepSize = 0.001;
    modelParameters_b.mStartTime = 0.0;
    modelParameters_b.mLoadInitialState = false;
    modelParameters_b.mUseSimState = false;
    modelParameters_b.mLinTrimCompile = false;
    modelParameters_b.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_b.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_b.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_b.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_b.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_b.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_b.mIsUsingODEN = tmp_0;
    modelParameters_b.mLoadInitialState = false;
    modelParameters_b.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_8_DiagMgr;
    diagnosticTree_b = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_8_Simulator,
      &modelParameters_b, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_b;
        msg_b = rtw_diagnostics_msg(diagnosticTree_b);
        rtmSetErrorStatus(rtM, msg_b);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/STATE_8'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_8_0'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_8", 1, 0);
    rtDW.OUTPUT_8_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_8_0_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_8_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_8", 1, 0);
      rtDW.OUTPUT_8_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_8_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_8_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_c.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_c.mSolverTolerance = 0.001;
    modelParameters_c.mVariableStepSolver = false;
    modelParameters_c.mIsUsingODEN = false;
    modelParameters_c.mFixedStepSize = 0.001;
    modelParameters_c.mStartTime = 0.0;
    modelParameters_c.mLoadInitialState = false;
    modelParameters_c.mUseSimState = false;
    modelParameters_c.mLinTrimCompile = false;
    modelParameters_c.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_c.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_c.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_c.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_c.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_c.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_c.mIsUsingODEN = tmp_0;
    modelParameters_c.mLoadInitialState = false;
    modelParameters_c.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_8_0_DiagMgr;
    diagnosticTree_c = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_8_0_Simulator,
      &modelParameters_c, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_c;
        msg_c = rtw_diagnostics_msg(diagnosticTree_c);
        rtmSetErrorStatus(rtM, msg_c);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_8_0'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_1_1'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 1, 1);
    rtDW.OUTPUT_1_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_1_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_1_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 1, 1);
      rtDW.OUTPUT_1_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_1_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_d.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_d.mSolverTolerance = 0.001;
    modelParameters_d.mVariableStepSolver = false;
    modelParameters_d.mIsUsingODEN = false;
    modelParameters_d.mFixedStepSize = 0.001;
    modelParameters_d.mStartTime = 0.0;
    modelParameters_d.mLoadInitialState = false;
    modelParameters_d.mUseSimState = false;
    modelParameters_d.mLinTrimCompile = false;
    modelParameters_d.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_d.mRTWModifiedTimeStamp = 5.66501908E+8;
    modelParameters_d.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_d.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_d.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_d.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_d.mIsUsingODEN = tmp_0;
    modelParameters_d.mLoadInitialState = false;
    modelParameters_d.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_1_DiagMgr;
    diagnosticTree_d = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_1_1_Simulator,
      &modelParameters_d, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_d;
        msg_d = rtw_diagnostics_msg(diagnosticTree_d);
        rtmSetErrorStatus(rtM, msg_d);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_1_1'

    // Start for SimscapeExecutionBlock: '<S260>/OUTPUT_2_1'
    tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 1, 1);
    rtDW.OUTPUT_2_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_2_1_Simulator);
    if (tmp_0) {
      Wind_Turbine_31c4daf8_2_gateway();
      tmp = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 1, 1);
      rtDW.OUTPUT_2_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_2_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_2_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_e.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_e.mSolverTolerance = 0.001;
    modelParameters_e.mVariableStepSolver = false;
    modelParameters_e.mIsUsingODEN = false;
    modelParameters_e.mFixedStepSize = 0.001;
    modelParameters_e.mStartTime = 0.0;
    modelParameters_e.mLoadInitialState = false;
    modelParameters_e.mUseSimState = false;
    modelParameters_e.mLinTrimCompile = false;
    modelParameters_e.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_e.mRTWModifiedTimeStamp = 5.6650119E+8;
    modelParameters_e.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_e.mSolverTolerance = tmp_2;
    tmp_2 = 0.6;
    modelParameters_e.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_e.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_e.mIsUsingODEN = tmp_0;
    modelParameters_e.mLoadInitialState = false;
    modelParameters_e.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_2_1_DiagMgr;
    diagnosticTree_e = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_2_1_Simulator,
      &modelParameters_e, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        char *msg_e;
        msg_e = rtw_diagnostics_msg(diagnosticTree_e);
        rtmSetErrorStatus(rtM, msg_e);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S260>/OUTPUT_2_1'

    // InitializeConditions for Integrator: '<S2>/Integrator'
    rtX.Integrator_CSTATE = 0.0;

    // InitializeConditions for Integrator: '<S1>/Integrator'
    rtX.Integrator_CSTATE_m = 0.0;

    // InitializeConditions for Integrator: '<S112>/Integrator'
    rtX.Integrator_CSTATE_e = 0.0;

    // InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_5'
    tmp_0 = false;
    tmp_4 = false;
    if (tmp_4 || tmp_0) {
      tmp_3 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "daessc");
      tmp_5 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode14x");
      tmp_6 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode15s");
      tmp_7 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode1be");
      tmp_8 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode23t");
      tmp_9 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "odeN");
      if (static_cast<boolean_T>(static_cast<boolean_T>(static_cast<boolean_T>(
             static_cast<boolean_T>(static_cast<boolean_T>((tmp_3 != 0) & (tmp_5
                != 0)) & (tmp_6 != 0)) & (tmp_7 != 0)) & (tmp_8 != 0)) & (tmp_9
            != 0))) {
        rtmSetErrorStatus(rtM,
                          "Detected inconsistent solvers in the model reference hierarchy. Model built with ode14x requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_5'

    // InitializeConditions for Integrator: '<S142>/Integrator'
    rtX.Integrator_CSTATE_n = 0.0;

    // InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_4'
    tmp_0 = false;
    tmp_4 = false;
    if (tmp_4 || tmp_0) {
      tmp_3 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "daessc");
      tmp_5 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode14x");
      tmp_6 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode15s");
      tmp_7 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode1be");
      tmp_8 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode23t");
      tmp_9 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "odeN");
      if (static_cast<boolean_T>(static_cast<boolean_T>(static_cast<boolean_T>(
             static_cast<boolean_T>(static_cast<boolean_T>((tmp_3 != 0) & (tmp_5
                != 0)) & (tmp_6 != 0)) & (tmp_7 != 0)) & (tmp_8 != 0)) & (tmp_9
            != 0))) {
        rtmSetErrorStatus(rtM,
                          "Detected inconsistent solvers in the model reference hierarchy. Model built with ode14x requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_4'

    // InitializeConditions for Integrator: '<S172>/Integrator'
    rtX.Integrator_CSTATE_a = 0.0;

    // InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_3'
    tmp_0 = false;
    tmp_4 = false;
    if (tmp_4 || tmp_0) {
      tmp_3 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "daessc");
      tmp_5 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode14x");
      tmp_6 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode15s");
      tmp_7 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode1be");
      tmp_8 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode23t");
      tmp_9 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "odeN");
      if (static_cast<boolean_T>(static_cast<boolean_T>(static_cast<boolean_T>(
             static_cast<boolean_T>(static_cast<boolean_T>((tmp_3 != 0) & (tmp_5
                != 0)) & (tmp_6 != 0)) & (tmp_7 != 0)) & (tmp_8 != 0)) & (tmp_9
            != 0))) {
        rtmSetErrorStatus(rtM,
                          "Detected inconsistent solvers in the model reference hierarchy. Model built with ode14x requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_3'

    // InitializeConditions for Integrator: '<S64>/Integrator'
    rtX.Integrator_CSTATE_g[0] = 0.0;
    rtX.Integrator_CSTATE_g[1] = 0.0;
    rtX.Integrator_CSTATE_g[2] = 0.0;
    rtX.Integrator_CSTATE_g[3] = 0.0;

    // InitializeConditions for Integrator: '<S59>/Integrator'
    rtX.Integrator_CSTATE_n2[0] = 0.0;
    rtX.Integrator_CSTATE_n2[1] = 0.0;

    // InitializeConditions for Integrator: '<S96>/Integrator'
    rtX.Integrator_CSTATE_b = 0.0;

    // InitializeConditions for Integrator: '<S192>/Integrator'
    rtX.Integrator_CSTATE_mt[0] = 0.0;
    rtX.Integrator_CSTATE_mt[1] = 0.0;
    rtX.Integrator_CSTATE_mt[2] = 0.0;
    rtX.Integrator_CSTATE_mt[3] = 0.0;

    // InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_2'
    tmp_0 = false;
    tmp_4 = false;
    if (tmp_4 || tmp_0) {
      tmp_3 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "daessc");
      tmp_5 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode14x");
      tmp_6 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode15s");
      tmp_7 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode1be");
      tmp_8 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode23t");
      tmp_9 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "odeN");
      if (static_cast<boolean_T>(static_cast<boolean_T>(static_cast<boolean_T>(
             static_cast<boolean_T>(static_cast<boolean_T>((tmp_3 != 0) & (tmp_5
                != 0)) & (tmp_6 != 0)) & (tmp_7 != 0)) & (tmp_8 != 0)) & (tmp_9
            != 0))) {
        rtmSetErrorStatus(rtM,
                          "Detected inconsistent solvers in the model reference hierarchy. Model built with ode14x requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S260>/STATE_2'

    // InitializeConditions for Integrator: '<S19>/Integrator'
    rtX.Integrator_CSTATE_as = 0.0;

    // InitializeConditions for Integrator: '<S18>/Integrator'
    rtX.Integrator_CSTATE_gx = 0.0;

    // InitializeConditions for Integrator: '<S293>/Integrator'
    rtX.Integrator_CSTATE_l[0] = 0.0;

    // InitializeConditions for Integrator: '<S294>/Integrator'
    rtX.Integrator_CSTATE_ga[0] = 0.0;

    // InitializeConditions for Integrator: '<S293>/Integrator'
    rtX.Integrator_CSTATE_l[1] = 0.0;

    // InitializeConditions for Integrator: '<S294>/Integrator'
    rtX.Integrator_CSTATE_ga[1] = 0.0;

    // InitializeConditions for Integrator: '<S293>/Integrator'
    rtX.Integrator_CSTATE_l[2] = 0.0;

    // InitializeConditions for Integrator: '<S294>/Integrator'
    rtX.Integrator_CSTATE_ga[2] = 0.0;

    // InitializeConditions for Integrator: '<S293>/Integrator'
    rtX.Integrator_CSTATE_l[3] = 0.0;

    // InitializeConditions for Integrator: '<S294>/Integrator'
    rtX.Integrator_CSTATE_ga[3] = 0.0;

    // InitializeConditions for Integrator: '<S234>/Integrator'
    rtX.Integrator_CSTATE_i = 0.0;

    // InitializeConditions for Integrator: '<S231>/Integrator'
    rtX.Integrator_CSTATE_h[0] = 0.0;
    rtX.Integrator_CSTATE_h[1] = 0.0;
    rtX.Integrator_CSTATE_h[2] = 0.0;

    // InitializeConditions for Derivative: '<S97>/Derivative'
    rtDW.TimeStampA = (rtInf);
    rtDW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<S291>/Derivative'
    rtDW.TimeStampA_b = (rtInf);
    rtDW.TimeStampB_j = (rtInf);

    // InitializeConditions for Derivative: '<S289>/Derivative'
    rtDW.TimeStampA_a = (rtInf);
    rtDW.TimeStampB_e = (rtInf);

    // InitializeConditions for Derivative: '<S287>/Derivative'
    rtDW.TimeStampA_o = (rtInf);
    rtDW.TimeStampB_jj = (rtInf);

    // InitializeConditions for Derivative: '<S292>/Derivative'
    rtDW.TimeStampA_m = (rtInf);
    rtDW.TimeStampB_p = (rtInf);

    // InitializeConditions for Derivative: '<S280>/Derivative'
    rtDW.TimeStampA_ov = (rtInf);
    rtDW.TimeStampB_f = (rtInf);

    // InitializeConditions for Derivative: '<S278>/Derivative'
    rtDW.TimeStampA_bp = (rtInf);
    rtDW.TimeStampB_n = (rtInf);

    // InitializeConditions for Derivative: '<S276>/Derivative'
    rtDW.TimeStampA_j = (rtInf);
    rtDW.TimeStampB_l = (rtInf);

    // InitializeConditions for Derivative: '<S281>/Derivative'
    rtDW.TimeStampA_jj = (rtInf);
    rtDW.TimeStampB_m = (rtInf);

    // InitializeConditions for Integrator: '<S54>/Rotor angle thetam'
    rtX.Rotoranglethetam_CSTATE = 0.0;

    // InitializeConditions for Integrator: '<S311>/integrator'
    rtX.integrator_CSTATE = 0.0;

    // InitializeConditions for Integrator: '<S312>/integrator'
    rtX.integrator_CSTATE_f = 0.0;

    // SystemInitialize for Chart: '<Root>/Turbine State Machine'
    rtDW.wind_speed_cut_in_lower = 4.0;
    rtDW.turbine_speed_cut_in = 1200.0;
    rtDW.wind_speed_cut_out = 20.0;
    rtDW.wind_speed_cut_in_upper = 18.0;
    rtDW.turbine_speed_cut_out = 2200.0;

    // SystemInitialize for Enabled SubSystem: '<S58>/Saturation'
    // InitializeConditions for Integrator: '<S67>/Integrator'
    rtX.Integrator_CSTATE_o = 0.0;

    // End of SystemInitialize for SubSystem: '<S58>/Saturation'

    // Root-level InitSystemMatrices
    {
      static int_T modelMassMatrixIr[108] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
        29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 41, 40, 42, 43, 44, 45, 46,
        47, 64, 65, 67, 66, 68, 69, 70, 71, 72, 73, 90, 91, 93, 92, 94, 95, 96,
        97, 98, 99, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
        128, 129, 130, 131, 133, 137, 132, 134, 135, 136, 138, 139, 140, 141,
        142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155 };

      static int_T modelMassMatrixJc[157] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
        29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
        47, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 58, 58, 58, 58, 58, 58, 58, 58,
        58, 58, 58, 58, 58, 58, 58, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68,
        68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 86, 87, 88, 89,
        90, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
        106, 107, 108 };

      static real_T modelMassMatrixPr[108] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0 };

      (void) std::memcpy(rtMassMatrix.ir, modelMassMatrixIr,
                         108*sizeof(int_T));
      (void) std::memcpy(rtMassMatrix.jc, modelMassMatrixJc,
                         157*sizeof(int_T));
      (void) std::memcpy(rtMassMatrix.pr, modelMassMatrixPr,
                         108*sizeof(real_T));
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
