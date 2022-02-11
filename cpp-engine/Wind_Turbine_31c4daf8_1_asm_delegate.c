/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"

void Wind_Turbine_31c4daf8_1_setTargets(const RuntimeDerivedValuesBundle *rtdv,
  CTarget *targets)
{
  (void) rtdv;
  (void) targets;
}

void Wind_Turbine_31c4daf8_1_resetAsmStateVector(const void *mech, double *state)
{
  double xx[1];
  (void) mech;
  xx[0] = 0.0;
  state[0] = xx[0];
  state[1] = xx[0];
  state[2] = xx[0];
  state[3] = xx[0];
  state[4] = xx[0];
  state[5] = xx[0];
  state[6] = xx[0];
  state[7] = xx[0];
  state[8] = xx[0];
  state[9] = xx[0];
  state[10] = xx[0];
  state[11] = xx[0];
  state[12] = xx[0];
  state[13] = xx[0];
  state[14] = xx[0];
  state[15] = xx[0];
  state[16] = xx[0];
  state[17] = xx[0];
  state[18] = xx[0];
  state[19] = xx[0];
  state[20] = xx[0];
  state[21] = xx[0];
  state[22] = xx[0];
  state[23] = xx[0];
  state[24] = xx[0];
  state[25] = xx[0];
  state[26] = xx[0];
  state[27] = xx[0];
}

void Wind_Turbine_31c4daf8_1_initializeTrackedAngleState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *modeVector, const double
  *motionData, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) motionData;
}

void Wind_Turbine_31c4daf8_1_computeDiscreteState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
}

void Wind_Turbine_31c4daf8_1_adjustPosition(const void *mech, const double
  *dofDeltas, double *state)
{
  (void) mech;
  state[0] = state[0] + dofDeltas[0];
  state[2] = state[2] + dofDeltas[1];
  state[4] = state[4] + dofDeltas[2];
  state[6] = state[6] + dofDeltas[3];
  state[7] = state[7] + dofDeltas[4];
  state[10] = state[10] + dofDeltas[5];
  state[12] = state[12] + dofDeltas[6];
  state[14] = state[14] + dofDeltas[7];
  state[15] = state[15] + dofDeltas[8];
  state[18] = state[18] + dofDeltas[9];
  state[20] = state[20] + dofDeltas[10];
  state[22] = state[22] + dofDeltas[11];
  state[23] = state[23] + dofDeltas[12];
  state[26] = state[26] + dofDeltas[13];
}

static void perturbAsmJointPrimitiveState_0_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbAsmJointPrimitiveState_0_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[1] = state[1] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_0(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbAsmJointPrimitiveState_1_0v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[3] = state[3] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_2_0(double mag, double *state)
{
  state[4] = state[4] + mag;
}

static void perturbAsmJointPrimitiveState_2_0v(double mag, double *state)
{
  state[4] = state[4] + mag;
  state[5] = state[5] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_0(double mag, double *state)
{
  state[6] = state[6] + mag;
}

static void perturbAsmJointPrimitiveState_3_0v(double mag, double *state)
{
  state[6] = state[6] + mag;
  state[8] = state[8] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_1(double mag, double *state)
{
  state[7] = state[7] + mag;
}

static void perturbAsmJointPrimitiveState_3_1v(double mag, double *state)
{
  state[7] = state[7] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_4_0(double mag, double *state)
{
  state[10] = state[10] + mag;
}

static void perturbAsmJointPrimitiveState_4_0v(double mag, double *state)
{
  state[10] = state[10] + mag;
  state[11] = state[11] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_0(double mag, double *state)
{
  state[12] = state[12] + mag;
}

static void perturbAsmJointPrimitiveState_5_0v(double mag, double *state)
{
  state[12] = state[12] + mag;
  state[13] = state[13] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_6_0(double mag, double *state)
{
  state[14] = state[14] + mag;
}

static void perturbAsmJointPrimitiveState_6_0v(double mag, double *state)
{
  state[14] = state[14] + mag;
  state[16] = state[16] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_6_1(double mag, double *state)
{
  state[15] = state[15] + mag;
}

static void perturbAsmJointPrimitiveState_6_1v(double mag, double *state)
{
  state[15] = state[15] + mag;
  state[17] = state[17] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_0(double mag, double *state)
{
  state[18] = state[18] + mag;
}

static void perturbAsmJointPrimitiveState_7_0v(double mag, double *state)
{
  state[18] = state[18] + mag;
  state[19] = state[19] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_8_0(double mag, double *state)
{
  state[20] = state[20] + mag;
}

static void perturbAsmJointPrimitiveState_8_0v(double mag, double *state)
{
  state[20] = state[20] + mag;
  state[21] = state[21] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_9_0(double mag, double *state)
{
  state[22] = state[22] + mag;
}

static void perturbAsmJointPrimitiveState_9_0v(double mag, double *state)
{
  state[22] = state[22] + mag;
  state[24] = state[24] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_9_1(double mag, double *state)
{
  state[23] = state[23] + mag;
}

static void perturbAsmJointPrimitiveState_9_1v(double mag, double *state)
{
  state[23] = state[23] + mag;
  state[25] = state[25] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_10_0(double mag, double *state)
{
  state[26] = state[26] + mag;
}

static void perturbAsmJointPrimitiveState_10_0v(double mag, double *state)
{
  state[26] = state[26] + mag;
  state[27] = state[27] - 0.875 * mag;
}

void Wind_Turbine_31c4daf8_1_perturbAsmJointPrimitiveState(const void *mech,
  size_t stageIdx, size_t primIdx, double mag, boolean_T doPerturbVelocity,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch ((stageIdx * 6 + primIdx) * 2 + (doPerturbVelocity ? 1 : 0))
  {
   case 0:
    perturbAsmJointPrimitiveState_0_0(mag, state);
    break;

   case 1:
    perturbAsmJointPrimitiveState_0_0v(mag, state);
    break;

   case 12:
    perturbAsmJointPrimitiveState_1_0(mag, state);
    break;

   case 13:
    perturbAsmJointPrimitiveState_1_0v(mag, state);
    break;

   case 24:
    perturbAsmJointPrimitiveState_2_0(mag, state);
    break;

   case 25:
    perturbAsmJointPrimitiveState_2_0v(mag, state);
    break;

   case 36:
    perturbAsmJointPrimitiveState_3_0(mag, state);
    break;

   case 37:
    perturbAsmJointPrimitiveState_3_0v(mag, state);
    break;

   case 38:
    perturbAsmJointPrimitiveState_3_1(mag, state);
    break;

   case 39:
    perturbAsmJointPrimitiveState_3_1v(mag, state);
    break;

   case 48:
    perturbAsmJointPrimitiveState_4_0(mag, state);
    break;

   case 49:
    perturbAsmJointPrimitiveState_4_0v(mag, state);
    break;

   case 60:
    perturbAsmJointPrimitiveState_5_0(mag, state);
    break;

   case 61:
    perturbAsmJointPrimitiveState_5_0v(mag, state);
    break;

   case 72:
    perturbAsmJointPrimitiveState_6_0(mag, state);
    break;

   case 73:
    perturbAsmJointPrimitiveState_6_0v(mag, state);
    break;

   case 74:
    perturbAsmJointPrimitiveState_6_1(mag, state);
    break;

   case 75:
    perturbAsmJointPrimitiveState_6_1v(mag, state);
    break;

   case 84:
    perturbAsmJointPrimitiveState_7_0(mag, state);
    break;

   case 85:
    perturbAsmJointPrimitiveState_7_0v(mag, state);
    break;

   case 96:
    perturbAsmJointPrimitiveState_8_0(mag, state);
    break;

   case 97:
    perturbAsmJointPrimitiveState_8_0v(mag, state);
    break;

   case 108:
    perturbAsmJointPrimitiveState_9_0(mag, state);
    break;

   case 109:
    perturbAsmJointPrimitiveState_9_0v(mag, state);
    break;

   case 110:
    perturbAsmJointPrimitiveState_9_1(mag, state);
    break;

   case 111:
    perturbAsmJointPrimitiveState_9_1v(mag, state);
    break;

   case 120:
    perturbAsmJointPrimitiveState_10_0(mag, state);
    break;

   case 121:
    perturbAsmJointPrimitiveState_10_0v(mag, state);
    break;
  }
}

void Wind_Turbine_31c4daf8_1_computePosDofBlendMatrix(const void *mech, size_t
  stageIdx, size_t primIdx, const double *state, int partialType, double *matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void Wind_Turbine_31c4daf8_1_computeVelDofBlendMatrix(const void *mech, size_t
  stageIdx, size_t primIdx, const double *state, int partialType, double *matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void Wind_Turbine_31c4daf8_1_projectPartiallyTargetedPos(const void *mech,
  size_t stageIdx, size_t primIdx, const double *origState, int partialType,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) origState;
  (void) partialType;
  (void) state;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void Wind_Turbine_31c4daf8_1_propagateMotion(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[192];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  xx[0] = 0.5;
  xx[1] = xx[0] * state[0];
  xx[2] = cos(xx[1]);
  xx[3] = 0.0;
  xx[4] = sin(xx[1]);
  xx[1] = 2.000001657456732;
  xx[5] = 2.0;
  xx[6] = xx[1] * xx[4];
  xx[7] = xx[1] - xx[5] * xx[6] * xx[4];
  xx[8] = xx[5] * xx[2] * xx[6];
  xx[6] = 103.1;
  xx[9] = 0.7071067811865476;
  xx[10] = xx[0] * state[2];
  xx[11] = xx[9] * cos(xx[10]);
  xx[12] = - xx[11];
  xx[13] = xx[9] * sin(xx[10]);
  xx[9] = - xx[13];
  xx[10] = 5.000001657456732;
  xx[14] = - 0.7071070077275268;
  xx[15] = - 1.367372157708226e-7;
  xx[16] = 0.7071065546454696;
  xx[17] = - 1.367299775908286e-7;
  xx[18] = xx[0] * state[4];
  xx[19] = 6.407547900609781e-7;
  xx[20] = sin(xx[18]);
  xx[21] = 3.867410137128462e-7;
  xx[22] = cos(xx[18]);
  xx[23] = - (xx[19] * xx[20]);
  xx[24] = xx[21] * xx[20];
  xx[25] = xx[20];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 22, xx + 26);
  xx[14] = 1.252758002333907e-5;
  xx[15] = - 7.810573945025114e-6;
  xx[16] = - 19.99999014025506;
  pm_math_Quaternion_xform_ra(xx + 26, xx + 14, xx + 22);
  xx[17] = xx[5] + xx[22];
  xx[18] = - xx[17];
  xx[20] = - xx[23];
  xx[25] = 0.8;
  xx[22] = xx[25] - xx[24];
  xx[24] = xx[0] * state[6];
  xx[30] = cos(xx[24]);
  xx[31] = xx[0] * state[7];
  xx[32] = 1.011242923582525e-11;
  xx[33] = sin(xx[31]);
  xx[34] = 3.867410137194052e-7;
  xx[35] = cos(xx[31]);
  xx[36] = xx[32] * xx[33];
  xx[37] = - xx[33];
  xx[38] = xx[34] * xx[33];
  xx[39] = - 0.9999999999999301;
  xx[40] = 1.933705068580629e-7;
  xx[41] = 3.203773950294993e-7;
  xx[42] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 35, xx + 39, xx + 43);
  xx[31] = sin(xx[24]);
  xx[24] = xx[30] * xx[43] + xx[44] * xx[31];
  xx[33] = xx[30] * xx[44] - xx[43] * xx[31];
  xx[35] = xx[30] * xx[45] - xx[46] * xx[31];
  xx[36] = xx[30] * xx[46] + xx[45] * xx[31];
  xx[37] = 1.259165044613055e-5;
  xx[38] = xx[25] * xx[35];
  xx[43] = xx[25] * xx[33];
  xx[44] = (xx[24] * xx[38] + xx[36] * xx[43]) * xx[5];
  xx[45] = xx[37] - xx[44];
  xx[46] = 0.4999921507519162;
  xx[47] = xx[5] * (xx[24] * xx[43] - xx[36] * xx[38]);
  xx[48] = xx[46] + xx[47];
  xx[49] = (xx[43] * xx[33] + xx[38] * xx[35]) * xx[5] - xx[25];
  xx[38] = 20.09999033362554;
  xx[43] = xx[49] - xx[38];
  xx[50] = 1.0;
  xx[51] = 1.6;
  xx[52] = xx[51] + state[10];
  xx[53] = - 0.3535533854521294;
  xx[54] = - 0.6123723078740739;
  xx[55] = 0.3535531589048324;
  xx[56] = - 0.6123727002510262;
  xx[57] = xx[0] * state[12];
  xx[58] = sin(xx[57]);
  xx[59] = cos(xx[57]);
  xx[60] = - (xx[19] * xx[58]);
  xx[61] = xx[21] * xx[58];
  xx[62] = xx[58];
  pm_math_Quaternion_compose_ra(xx + 53, xx + 59, xx + 63);
  pm_math_Quaternion_xform_ra(xx + 63, xx + 14, xx + 53);
  xx[56] = xx[50] - xx[53];
  xx[57] = 1.732050807568877 + xx[54];
  xx[58] = - xx[57];
  xx[53] = xx[25] - xx[55];
  xx[54] = xx[0] * state[14];
  xx[55] = cos(xx[54]);
  xx[59] = xx[0] * state[15];
  xx[60] = sin(xx[59]);
  xx[67] = cos(xx[59]);
  xx[68] = xx[32] * xx[60];
  xx[69] = - xx[60];
  xx[70] = xx[34] * xx[60];
  pm_math_Quaternion_compose_ra(xx + 67, xx + 39, xx + 59);
  xx[67] = sin(xx[54]);
  xx[54] = xx[55] * xx[59] + xx[60] * xx[67];
  xx[68] = xx[55] * xx[60] - xx[59] * xx[67];
  xx[59] = xx[55] * xx[61] - xx[62] * xx[67];
  xx[60] = xx[55] * xx[62] + xx[61] * xx[67];
  xx[61] = xx[25] * xx[59];
  xx[62] = xx[25] * xx[68];
  xx[69] = (xx[54] * xx[61] + xx[60] * xx[62]) * xx[5];
  xx[70] = xx[37] - xx[69];
  xx[71] = xx[5] * (xx[54] * xx[62] - xx[60] * xx[61]);
  xx[72] = xx[46] + xx[71];
  xx[73] = (xx[62] * xx[68] + xx[61] * xx[59]) * xx[5] - xx[25];
  xx[61] = xx[73] - xx[38];
  xx[62] = xx[51] + state[18];
  xx[74] = 0.3535536222753973;
  xx[75] = - 0.6123721711368582;
  xx[76] = - 0.3535533957406371;
  xx[77] = - 0.6123725635210486;
  xx[78] = xx[0] * state[20];
  xx[79] = sin(xx[78]);
  xx[80] = cos(xx[78]);
  xx[81] = - (xx[19] * xx[79]);
  xx[82] = xx[21] * xx[79];
  xx[83] = xx[79];
  pm_math_Quaternion_compose_ra(xx + 74, xx + 80, xx + 84);
  pm_math_Quaternion_xform_ra(xx + 84, xx + 14, xx + 74);
  xx[14] = xx[50] - xx[74];
  xx[15] = 1.732050807568878 - xx[75];
  xx[16] = xx[25] - xx[76];
  xx[74] = xx[0] * state[22];
  xx[75] = cos(xx[74]);
  xx[76] = xx[0] * state[23];
  xx[0] = sin(xx[76]);
  xx[77] = cos(xx[76]);
  xx[78] = xx[32] * xx[0];
  xx[79] = - xx[0];
  xx[80] = xx[34] * xx[0];
  pm_math_Quaternion_compose_ra(xx + 77, xx + 39, xx + 88);
  xx[0] = sin(xx[74]);
  xx[32] = xx[75] * xx[88] + xx[89] * xx[0];
  xx[34] = xx[75] * xx[89] - xx[88] * xx[0];
  xx[39] = xx[75] * xx[90] - xx[91] * xx[0];
  xx[40] = xx[75] * xx[91] + xx[90] * xx[0];
  xx[41] = xx[25] * xx[39];
  xx[42] = xx[25] * xx[34];
  xx[74] = (xx[32] * xx[41] + xx[40] * xx[42]) * xx[5];
  xx[76] = xx[37] - xx[74];
  xx[77] = xx[5] * (xx[32] * xx[42] - xx[40] * xx[41]);
  xx[78] = xx[46] + xx[77];
  xx[79] = (xx[42] * xx[34] + xx[41] * xx[39]) * xx[5] - xx[25];
  xx[41] = xx[79] - xx[38];
  xx[42] = xx[51] + state[26];
  xx[80] = xx[54];
  xx[81] = xx[68];
  xx[82] = xx[59];
  xx[83] = xx[60];
  pm_math_Quaternion_compose_ra(xx + 63, xx + 80, xx + 88);
  xx[92] = xx[70];
  xx[93] = xx[72];
  xx[94] = xx[61];
  pm_math_Quaternion_xform_ra(xx + 63, xx + 92, xx + 95);
  xx[51] = xx[95] + xx[56];
  xx[98] = xx[96] - xx[57];
  xx[57] = xx[97] + xx[53];
  xx[95] = xx[90] * xx[62];
  xx[96] = xx[89] * xx[62];
  xx[97] = xx[59] * xx[62];
  xx[99] = xx[68] * xx[62];
  xx[100] = xx[32];
  xx[101] = xx[34];
  xx[102] = xx[39];
  xx[103] = xx[40];
  pm_math_Quaternion_compose_ra(xx + 84, xx + 100, xx + 104);
  xx[108] = xx[76];
  xx[109] = xx[78];
  xx[110] = xx[41];
  pm_math_Quaternion_xform_ra(xx + 84, xx + 108, xx + 111);
  xx[114] = xx[111] + xx[14];
  xx[115] = xx[112] + xx[15];
  xx[111] = xx[113] + xx[16];
  xx[112] = xx[106] * xx[42];
  xx[113] = xx[105] * xx[42];
  xx[116] = xx[39] * xx[42];
  xx[117] = xx[34] * xx[42];
  xx[118] = xx[24];
  xx[119] = xx[33];
  xx[120] = xx[35];
  xx[121] = xx[36];
  pm_math_Quaternion_compose_ra(xx + 26, xx + 118, xx + 122);
  xx[126] = xx[45];
  xx[127] = xx[48];
  xx[128] = xx[43];
  pm_math_Quaternion_xform_ra(xx + 26, xx + 126, xx + 129);
  xx[132] = xx[129] - xx[17];
  xx[17] = xx[130] - xx[23];
  xx[23] = xx[131] + xx[22];
  xx[129] = xx[124] * xx[52];
  xx[130] = xx[123] * xx[52];
  xx[131] = xx[35] * xx[52];
  xx[133] = xx[33] * xx[52];
  xx[134] = xx[13] * xx[4];
  xx[135] = xx[2] * xx[11];
  xx[136] = xx[134] - xx[135];
  xx[137] = xx[11] * xx[4];
  xx[138] = xx[2] * xx[13];
  xx[139] = xx[137] - xx[138];
  xx[140] = - (xx[135] + xx[134]);
  xx[134] = - (xx[138] + xx[137]);
  xx[135] = xx[10] * xx[4];
  xx[137] = xx[10] - xx[5] * xx[135] * xx[4] - xx[7];
  xx[138] = xx[5] * xx[2] * xx[135] - xx[8];
  xx[141] = xx[136];
  xx[142] = xx[139];
  xx[143] = xx[140];
  xx[144] = xx[134];
  pm_math_Quaternion_compose_ra(xx + 141, xx + 26, xx + 145);
  xx[149] = xx[18];
  xx[150] = xx[20];
  xx[151] = xx[22];
  pm_math_Quaternion_xform_ra(xx + 141, xx + 149, xx + 152);
  pm_math_Quaternion_compose_ra(xx + 141, xx + 63, xx + 155);
  xx[159] = xx[56];
  xx[160] = xx[58];
  xx[161] = xx[53];
  pm_math_Quaternion_xform_ra(xx + 141, xx + 159, xx + 162);
  pm_math_Quaternion_compose_ra(xx + 141, xx + 84, xx + 165);
  pm_math_Quaternion_xform_ra(xx + 141, xx + 14, xx + 169);
  xx[135] = xx[1] * state[1];
  xx[1] = xx[13] * state[1];
  xx[141] = xx[13] * xx[1];
  xx[142] = xx[11] * state[1];
  xx[143] = xx[11] * xx[142];
  xx[144] = xx[5] * (xx[141] - xx[143]);
  xx[172] = (xx[11] * xx[1] + xx[13] * xx[142]) * xx[5];
  xx[1] = state[1] - (xx[141] + xx[143]) * xx[5] + state[3];
  xx[141] = xx[10] * state[1] - xx[135];
  xx[142] = xx[141] * xx[13];
  xx[143] = xx[142] * xx[11];
  xx[11] = (xx[143] + xx[143]) * xx[5];
  xx[173] = xx[142] * xx[13];
  xx[13] = xx[141] - (xx[173] + xx[173]) * xx[5];
  xx[141] = xx[5] * (xx[143] - xx[143]);
  xx[173] = xx[144];
  xx[174] = xx[172];
  xx[175] = xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 26, xx + 173, xx + 176);
  xx[142] = xx[176] - xx[19] * state[5];
  xx[143] = xx[177] + xx[21] * state[5];
  xx[176] = xx[178] + state[5];
  pm_math_Vector3_cross_ra(xx + 173, xx + 149, xx + 177);
  xx[149] = xx[177] + xx[11];
  xx[150] = xx[178] + xx[13];
  xx[151] = xx[179] + xx[141];
  pm_math_Quaternion_inverseXform_ra(xx + 26, xx + 149, xx + 177);
  xx[149] = 7.57574839337541e-8;
  xx[150] = xx[177] - xx[149] * state[5];
  xx[151] = 2.875094602052041e-7;
  xx[180] = xx[178] + xx[151] * state[5];
  xx[177] = 1.597336708053589e-13;
  xx[178] = xx[179] - xx[177] * state[5];
  xx[181] = xx[142];
  xx[182] = xx[143];
  xx[183] = xx[176];
  pm_math_Quaternion_inverseXform_ra(xx + 118, xx + 181, xx + 184);
  xx[179] = xx[184] - state[8];
  xx[187] = (xx[5] * xx[31] * xx[31] - xx[50]) * state[9];
  xx[188] = xx[185] + xx[187];
  xx[184] = xx[186] - xx[5] * xx[30] * xx[31] * state[9];
  pm_math_Vector3_cross_ra(xx + 181, xx + 126, xx + 189);
  xx[126] = xx[189] + xx[150];
  xx[127] = xx[190] + xx[180];
  xx[128] = xx[191] + xx[178];
  pm_math_Quaternion_inverseXform_ra(xx + 118, xx + 126, xx + 181);
  xx[30] = xx[181] - xx[25] * xx[187];
  xx[31] = xx[182] - xx[25] * state[8];
  pm_math_Quaternion_inverseXform_ra(xx + 63, xx + 173, xx + 118);
  xx[121] = xx[118] - xx[19] * state[13];
  xx[126] = xx[119] + xx[21] * state[13];
  xx[118] = xx[120] + state[13];
  pm_math_Vector3_cross_ra(xx + 173, xx + 159, xx + 185);
  xx[159] = xx[185] + xx[11];
  xx[160] = xx[186] + xx[13];
  xx[161] = xx[187] + xx[141];
  pm_math_Quaternion_inverseXform_ra(xx + 63, xx + 159, xx + 185);
  xx[119] = xx[185] - xx[149] * state[13];
  xx[120] = xx[186] + xx[151] * state[13];
  xx[127] = xx[187] - xx[177] * state[13];
  xx[159] = xx[121];
  xx[160] = xx[126];
  xx[161] = xx[118];
  pm_math_Quaternion_inverseXform_ra(xx + 80, xx + 159, xx + 185);
  xx[128] = xx[185] - state[16];
  xx[181] = (xx[5] * xx[67] * xx[67] - xx[50]) * state[17];
  xx[182] = xx[186] + xx[181];
  xx[185] = xx[187] - xx[5] * xx[55] * xx[67] * state[17];
  pm_math_Vector3_cross_ra(xx + 159, xx + 92, xx + 189);
  xx[92] = xx[189] + xx[119];
  xx[93] = xx[190] + xx[120];
  xx[94] = xx[191] + xx[127];
  pm_math_Quaternion_inverseXform_ra(xx + 80, xx + 92, xx + 159);
  xx[55] = xx[159] - xx[25] * xx[181];
  xx[67] = xx[160] - xx[25] * state[16];
  pm_math_Quaternion_inverseXform_ra(xx + 84, xx + 173, xx + 80);
  xx[83] = xx[80] - xx[19] * state[21];
  xx[19] = xx[81] + xx[21] * state[21];
  xx[21] = xx[82] + state[21];
  pm_math_Vector3_cross_ra(xx + 173, xx + 14, xx + 80);
  xx[92] = xx[80] + xx[11];
  xx[93] = xx[81] + xx[13];
  xx[94] = xx[82] + xx[141];
  pm_math_Quaternion_inverseXform_ra(xx + 84, xx + 92, xx + 80);
  xx[92] = xx[80] - xx[149] * state[21];
  xx[93] = xx[81] + xx[151] * state[21];
  xx[80] = xx[82] - xx[177] * state[21];
  xx[173] = xx[83];
  xx[174] = xx[19];
  xx[175] = xx[21];
  pm_math_Quaternion_inverseXform_ra(xx + 100, xx + 173, xx + 189);
  xx[81] = xx[189] - state[24];
  xx[82] = (xx[5] * xx[0] * xx[0] - xx[50]) * state[25];
  xx[94] = xx[190] + xx[82];
  xx[149] = xx[191] - xx[5] * xx[75] * xx[0] * state[25];
  pm_math_Vector3_cross_ra(xx + 173, xx + 108, xx + 189);
  xx[108] = xx[189] + xx[92];
  xx[109] = xx[190] + xx[93];
  xx[110] = xx[191] + xx[80];
  pm_math_Quaternion_inverseXform_ra(xx + 100, xx + 108, xx + 173);
  xx[0] = xx[173] - xx[25] * xx[82];
  xx[75] = xx[174] - xx[25] * state[24];
  motionData[0] = xx[2];
  motionData[1] = xx[3];
  motionData[2] = xx[3];
  motionData[3] = xx[4];
  motionData[4] = - xx[7];
  motionData[5] = - xx[8];
  motionData[6] = xx[6];
  motionData[7] = xx[12];
  motionData[8] = xx[9];
  motionData[9] = xx[12];
  motionData[10] = xx[9];
  motionData[11] = xx[10];
  motionData[12] = xx[3];
  motionData[13] = xx[3];
  motionData[14] = xx[26];
  motionData[15] = xx[27];
  motionData[16] = xx[28];
  motionData[17] = xx[29];
  motionData[18] = xx[18];
  motionData[19] = xx[20];
  motionData[20] = xx[22];
  motionData[21] = xx[24];
  motionData[22] = xx[33];
  motionData[23] = xx[35];
  motionData[24] = xx[36];
  motionData[25] = xx[45];
  motionData[26] = xx[48];
  motionData[27] = xx[43];
  motionData[28] = xx[50];
  motionData[29] = xx[3];
  motionData[30] = xx[3];
  motionData[31] = xx[3];
  motionData[32] = xx[3];
  motionData[33] = xx[3];
  motionData[34] = - xx[52];
  motionData[35] = xx[63];
  motionData[36] = xx[64];
  motionData[37] = xx[65];
  motionData[38] = xx[66];
  motionData[39] = xx[56];
  motionData[40] = xx[58];
  motionData[41] = xx[53];
  motionData[42] = xx[54];
  motionData[43] = xx[68];
  motionData[44] = xx[59];
  motionData[45] = xx[60];
  motionData[46] = xx[70];
  motionData[47] = xx[72];
  motionData[48] = xx[61];
  motionData[49] = xx[50];
  motionData[50] = xx[3];
  motionData[51] = xx[3];
  motionData[52] = xx[3];
  motionData[53] = xx[3];
  motionData[54] = xx[3];
  motionData[55] = - xx[62];
  motionData[56] = xx[84];
  motionData[57] = xx[85];
  motionData[58] = xx[86];
  motionData[59] = xx[87];
  motionData[60] = xx[14];
  motionData[61] = xx[15];
  motionData[62] = xx[16];
  motionData[63] = xx[32];
  motionData[64] = xx[34];
  motionData[65] = xx[39];
  motionData[66] = xx[40];
  motionData[67] = xx[76];
  motionData[68] = xx[78];
  motionData[69] = xx[41];
  motionData[70] = xx[50];
  motionData[71] = xx[3];
  motionData[72] = xx[3];
  motionData[73] = xx[3];
  motionData[74] = xx[3];
  motionData[75] = xx[3];
  motionData[76] = - xx[42];
  motionData[77] = xx[88];
  motionData[78] = xx[89];
  motionData[79] = xx[90];
  motionData[80] = xx[91];
  motionData[81] = xx[51];
  motionData[82] = xx[98];
  motionData[83] = xx[57];
  motionData[84] = xx[88];
  motionData[85] = xx[89];
  motionData[86] = xx[90];
  motionData[87] = xx[91];
  motionData[88] = xx[51] - (xx[88] * xx[95] + xx[91] * xx[96]) * xx[5];
  motionData[89] = xx[5] * (xx[88] * xx[96] - xx[91] * xx[95]) + xx[98];
  motionData[90] = (xx[89] * xx[96] + xx[90] * xx[95]) * xx[5] - xx[62] + xx[57];
  motionData[91] = xx[54];
  motionData[92] = xx[68];
  motionData[93] = xx[59];
  motionData[94] = xx[60];
  motionData[95] = xx[37] - ((xx[54] * xx[97] + xx[60] * xx[99]) * xx[5] + xx[69]);
  motionData[96] = xx[5] * (xx[54] * xx[99] - xx[60] * xx[97]) + xx[71] + xx[46];
  motionData[97] = xx[73] - xx[62] + (xx[99] * xx[68] + xx[97] * xx[59]) * xx[5]
    - xx[38];
  motionData[98] = xx[104];
  motionData[99] = xx[105];
  motionData[100] = xx[106];
  motionData[101] = xx[107];
  motionData[102] = xx[114];
  motionData[103] = xx[115];
  motionData[104] = xx[111];
  motionData[105] = xx[104];
  motionData[106] = xx[105];
  motionData[107] = xx[106];
  motionData[108] = xx[107];
  motionData[109] = xx[114] - (xx[104] * xx[112] + xx[107] * xx[113]) * xx[5];
  motionData[110] = xx[5] * (xx[104] * xx[113] - xx[107] * xx[112]) + xx[115];
  motionData[111] = (xx[105] * xx[113] + xx[106] * xx[112]) * xx[5] - xx[42] +
    xx[111];
  motionData[112] = xx[32];
  motionData[113] = xx[34];
  motionData[114] = xx[39];
  motionData[115] = xx[40];
  motionData[116] = xx[37] - ((xx[32] * xx[116] + xx[40] * xx[117]) * xx[5] +
    xx[74]);
  motionData[117] = xx[5] * (xx[32] * xx[117] - xx[40] * xx[116]) + xx[77] + xx
    [46];
  motionData[118] = xx[79] - xx[42] + (xx[117] * xx[34] + xx[116] * xx[39]) *
    xx[5] - xx[38];
  motionData[119] = xx[122];
  motionData[120] = xx[123];
  motionData[121] = xx[124];
  motionData[122] = xx[125];
  motionData[123] = xx[132];
  motionData[124] = xx[17];
  motionData[125] = xx[23];
  motionData[126] = xx[122];
  motionData[127] = xx[123];
  motionData[128] = xx[124];
  motionData[129] = xx[125];
  motionData[130] = xx[132] - (xx[122] * xx[129] + xx[125] * xx[130]) * xx[5];
  motionData[131] = xx[5] * (xx[122] * xx[130] - xx[125] * xx[129]) + xx[17];
  motionData[132] = (xx[123] * xx[130] + xx[124] * xx[129]) * xx[5] - xx[52] +
    xx[23];
  motionData[133] = xx[24];
  motionData[134] = xx[33];
  motionData[135] = xx[35];
  motionData[136] = xx[36];
  motionData[137] = xx[37] - ((xx[24] * xx[131] + xx[36] * xx[133]) * xx[5] +
    xx[44]);
  motionData[138] = xx[5] * (xx[24] * xx[133] - xx[36] * xx[131]) + xx[47] + xx
    [46];
  motionData[139] = xx[49] - xx[52] + (xx[133] * xx[33] + xx[131] * xx[35]) *
    xx[5] - xx[38];
  motionData[140] = xx[136];
  motionData[141] = xx[139];
  motionData[142] = xx[140];
  motionData[143] = xx[134];
  motionData[144] = xx[137];
  motionData[145] = xx[138];
  motionData[146] = xx[6];
  motionData[147] = xx[145];
  motionData[148] = xx[146];
  motionData[149] = xx[147];
  motionData[150] = xx[148];
  motionData[151] = xx[152] + xx[137];
  motionData[152] = xx[153] + xx[138];
  motionData[153] = xx[154] + xx[6];
  motionData[154] = xx[155];
  motionData[155] = xx[156];
  motionData[156] = xx[157];
  motionData[157] = xx[158];
  motionData[158] = xx[162] + xx[137];
  motionData[159] = xx[163] + xx[138];
  motionData[160] = xx[164] + xx[6];
  motionData[161] = xx[165];
  motionData[162] = xx[166];
  motionData[163] = xx[167];
  motionData[164] = xx[168];
  motionData[165] = xx[169] + xx[137];
  motionData[166] = xx[170] + xx[138];
  motionData[167] = xx[171] + xx[6];
  motionData[168] = xx[3];
  motionData[169] = xx[3];
  motionData[170] = state[1];
  motionData[171] = xx[3];
  motionData[172] = - xx[135];
  motionData[173] = xx[3];
  motionData[174] = xx[144];
  motionData[175] = xx[172];
  motionData[176] = xx[1];
  motionData[177] = xx[11];
  motionData[178] = xx[13];
  motionData[179] = xx[141];
  motionData[180] = xx[142];
  motionData[181] = xx[143];
  motionData[182] = xx[176];
  motionData[183] = xx[150];
  motionData[184] = xx[180];
  motionData[185] = xx[178];
  motionData[186] = xx[179];
  motionData[187] = xx[188];
  motionData[188] = xx[184];
  motionData[189] = xx[30];
  motionData[190] = xx[31];
  motionData[191] = xx[183];
  motionData[192] = xx[179];
  motionData[193] = xx[188];
  motionData[194] = xx[184];
  motionData[195] = xx[30] - xx[188] * xx[52];
  motionData[196] = xx[31] + xx[179] * xx[52];
  motionData[197] = xx[183] - state[11];
  motionData[198] = xx[121];
  motionData[199] = xx[126];
  motionData[200] = xx[118];
  motionData[201] = xx[119];
  motionData[202] = xx[120];
  motionData[203] = xx[127];
  motionData[204] = xx[128];
  motionData[205] = xx[182];
  motionData[206] = xx[185];
  motionData[207] = xx[55];
  motionData[208] = xx[67];
  motionData[209] = xx[161];
  motionData[210] = xx[128];
  motionData[211] = xx[182];
  motionData[212] = xx[185];
  motionData[213] = xx[55] - xx[182] * xx[62];
  motionData[214] = xx[67] + xx[128] * xx[62];
  motionData[215] = xx[161] - state[19];
  motionData[216] = xx[83];
  motionData[217] = xx[19];
  motionData[218] = xx[21];
  motionData[219] = xx[92];
  motionData[220] = xx[93];
  motionData[221] = xx[80];
  motionData[222] = xx[81];
  motionData[223] = xx[94];
  motionData[224] = xx[149];
  motionData[225] = xx[0];
  motionData[226] = xx[75];
  motionData[227] = xx[175];
  motionData[228] = xx[81];
  motionData[229] = xx[94];
  motionData[230] = xx[149];
  motionData[231] = xx[0] - xx[94] * xx[42];
  motionData[232] = xx[75] + xx[81] * xx[42];
  motionData[233] = xx[175] - state[27];
}

static size_t computeAssemblyError_0(const RuntimeDerivedValuesBundle *rtdv,
  const int *modeVector, const double *motionData, double *error)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[3];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = 0.8;
  xx[1] = xx[0] * motionData[86];
  xx[2] = xx[0] * motionData[85];
  xx[0] = 2.0;
  error[0] = 0.5169872981077801 - (motionData[88] - (xx[1] * motionData[84] +
    xx[2] * motionData[87]) * xx[0]);
  error[1] = - (1.895448267190434 + xx[0] * (xx[2] * motionData[84] - xx[1] *
    motionData[87]) + motionData[89]);
  error[2] = 4.0 - (motionData[90] + (xx[2] * motionData[85] + xx[1] *
    motionData[86]) * xx[0]);
  return 3;
}

static size_t computeAssemblyError_1(const RuntimeDerivedValuesBundle *rtdv,
  const int *modeVector, const double *motionData, double *error)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[3];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = 0.8;
  xx[1] = xx[0] * motionData[107];
  xx[2] = xx[0] * motionData[106];
  xx[0] = 2.0;
  error[0] = 1.38301270189222 - (motionData[109] - (xx[1] * motionData[105] +
    xx[2] * motionData[108]) * xx[0]);
  error[1] = 1.395448267190433 - (xx[0] * (xx[2] * motionData[105] - xx[1] *
    motionData[108]) + motionData[110]);
  error[2] = 4.0 - (motionData[111] + (xx[2] * motionData[106] + xx[1] *
    motionData[107]) * xx[0]);
  return 3;
}

static size_t computeAssemblyError_2(const RuntimeDerivedValuesBundle *rtdv,
  const int *modeVector, const double *motionData, double *error)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[3];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = 0.8;
  xx[1] = xx[0] * motionData[128];
  xx[2] = xx[0] * motionData[127];
  xx[0] = 2.0;
  error[0] = - (1.9 + motionData[130] - (xx[1] * motionData[126] + xx[2] *
    motionData[129]) * xx[0]);
  error[1] = 0.5 - (xx[0] * (xx[2] * motionData[126] - xx[1] * motionData[129])
                    + motionData[131]);
  error[2] = 4.0 - (motionData[132] + (xx[2] * motionData[127] + xx[1] *
    motionData[128]) * xx[0]);
  return 3;
}

size_t Wind_Turbine_31c4daf8_1_computeAssemblyError(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const int *modeVector,
  const double *motionData, double *error)
{
  (void) mech;
  (void)rtdv;
  (void) modeVector;
  (void) motionData;
  (void) error;
  switch (constraintIdx)
  {
   case 0:
    return computeAssemblyError_0(rtdv, modeVector, motionData, error);

   case 1:
    return computeAssemblyError_1(rtdv, modeVector, motionData, error);

   case 2:
    return computeAssemblyError_2(rtdv, modeVector, motionData, error);
  }

  return 0;
}

static size_t computeAssemblyJacobian_0(const RuntimeDerivedValuesBundle *rtdv,
  const double *state, const int *modeVector, const double *motionData, double
  *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[65];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = 0.0;
  xx[1] = - 0.3535533854521294;
  xx[2] = - 0.6123723078740739;
  xx[3] = 0.3535531589048324;
  xx[4] = - 0.6123727002510262;
  xx[5] = 0.5;
  xx[6] = xx[5] * state[12];
  xx[7] = 6.407547900609781e-7;
  xx[8] = sin(xx[6]);
  xx[9] = 3.867410137128462e-7;
  xx[10] = cos(xx[6]);
  xx[11] = - (xx[7] * xx[8]);
  xx[12] = xx[9] * xx[8];
  xx[13] = xx[8];
  pm_math_Quaternion_compose_ra(xx + 1, xx + 10, xx + 14);
  xx[1] = motionData[91];
  xx[2] = motionData[92];
  xx[3] = motionData[93];
  xx[4] = motionData[94];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 1, xx + 10);
  xx[1] = 2.0;
  xx[2] = motionData[92];
  xx[3] = motionData[93];
  xx[4] = motionData[94];
  xx[6] = motionData[93] - xx[9] * motionData[94];
  xx[8] = xx[7] * motionData[94] + motionData[92];
  xx[18] = xx[6];
  xx[19] = - xx[8];
  xx[20] = xx[9] * motionData[92] + xx[7] * motionData[93];
  pm_math_Vector3_cross_ra(xx + 2, xx + 18, xx + 21);
  xx[2] = 0.8;
  xx[3] = (xx[1] * (xx[21] - xx[6] * motionData[91]) - xx[7]) * xx[2];
  xx[4] = xx[13] * xx[3];
  xx[6] = (xx[9] + xx[1] * (xx[22] + xx[8] * motionData[91])) * xx[2];
  xx[8] = xx[13] * xx[6];
  xx[18] = xx[11] * xx[3] + xx[12] * xx[6];
  xx[19] = - xx[4];
  xx[20] = - xx[8];
  xx[21] = xx[18];
  pm_math_Vector3_cross_ra(xx + 11, xx + 19, xx + 22);
  xx[11] = xx[9] * motionData[97] - motionData[96];
  xx[12] = motionData[95] + xx[7] * motionData[97];
  xx[13] = - (xx[7] * motionData[96] + xx[9] * motionData[95]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 19);
  xx[11] = - 7.57574839337541e-8;
  xx[12] = 2.875094602052041e-7;
  xx[13] = - 1.597336708053589e-13;
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 25);
  xx[11] = motionData[35];
  xx[12] = motionData[36];
  xx[13] = motionData[37];
  xx[14] = motionData[38];
  xx[7] = xx[5] * state[14];
  xx[9] = cos(xx[7]);
  xx[15] = xx[5] * state[15];
  xx[5] = 1.011242923582525e-11;
  xx[16] = sin(xx[15]);
  xx[17] = 3.867410137194052e-7;
  xx[28] = cos(xx[15]);
  xx[29] = xx[5] * xx[16];
  xx[30] = - xx[16];
  xx[31] = xx[17] * xx[16];
  xx[32] = - 0.9999999999999301;
  xx[33] = 1.933705068580629e-7;
  xx[34] = 3.203773950294993e-7;
  xx[35] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 28, xx + 32, xx + 36);
  xx[15] = sin(xx[7]);
  xx[7] = xx[9] * xx[36] + xx[37] * xx[15];
  xx[16] = xx[9] * xx[37] - xx[36] * xx[15];
  xx[28] = xx[9] * xx[38] - xx[39] * xx[15];
  xx[29] = xx[9] * xx[39] + xx[38] * xx[15];
  xx[30] = xx[7];
  xx[31] = xx[16];
  xx[32] = xx[28];
  xx[33] = xx[29];
  pm_math_Quaternion_compose_ra(xx + 11, xx + 30, xx + 34);
  xx[38] = motionData[49];
  xx[39] = motionData[50];
  xx[40] = motionData[51];
  xx[41] = motionData[52];
  pm_math_Quaternion_compose_ra(xx + 34, xx + 38, xx + 42);
  xx[9] = 1.0;
  xx[15] = ((motionData[51] * motionData[51] + motionData[52] * motionData[52]) *
            xx[1] - xx[9]) * xx[2];
  xx[34] = xx[45] * xx[15];
  xx[35] = 1.6 * (motionData[49] * motionData[52] - motionData[50] * motionData
                  [51]);
  xx[36] = xx[45] * xx[35];
  xx[37] = xx[43] * xx[15] + xx[44] * xx[35];
  xx[46] = - xx[34];
  xx[47] = - xx[36];
  xx[48] = xx[37];
  pm_math_Vector3_cross_ra(xx + 43, xx + 46, xx + 49);
  xx[46] = xx[16];
  xx[47] = xx[28];
  xx[48] = xx[29];
  xx[52] = xx[28] * motionData[54] + xx[29] * motionData[55];
  xx[53] = xx[16] * motionData[54];
  xx[54] = xx[16] * motionData[55];
  xx[55] = - xx[52];
  xx[56] = xx[53];
  xx[57] = xx[54];
  pm_math_Vector3_cross_ra(xx + 46, xx + 55, xx + 58);
  xx[55] = xx[29] * xx[2];
  xx[56] = xx[2] * xx[16];
  xx[61] = xx[1] * (xx[58] - xx[7] * xx[52]) + xx[1] * (xx[7] * xx[55] - xx[56] *
    xx[28]);
  xx[62] = motionData[55] + (xx[7] * xx[53] + xx[59]) * xx[1] + (xx[29] * xx[55]
    + xx[56] * xx[16]) * xx[1] - xx[2];
  xx[63] = (xx[7] * xx[54] + xx[60]) * xx[1] - motionData[54] - (xx[7] * xx[56]
    + xx[55] * xx[28]) * xx[1];
  pm_math_Quaternion_xform_ra(xx + 11, xx + 61, xx + 52);
  xx[55] = xx[17] * xx[28] + xx[29];
  xx[56] = xx[29] * xx[5] - xx[17] * xx[16];
  xx[57] = xx[16] + xx[5] * xx[28];
  xx[58] = xx[55];
  xx[59] = xx[56];
  xx[60] = - xx[57];
  pm_math_Vector3_cross_ra(xx + 46, xx + 58, xx + 61);
  xx[58] = xx[5] + xx[1] * (xx[61] - xx[55] * xx[7]);
  xx[5] = xx[1] * (xx[62] - xx[7] * xx[56]) - xx[9];
  xx[59] = xx[58];
  xx[60] = xx[5];
  xx[61] = xx[17] + (xx[7] * xx[57] + xx[63]) * xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 38, xx + 59, xx + 55);
  xx[17] = xx[2] * xx[55];
  xx[38] = xx[45] * xx[17];
  xx[39] = xx[2] * xx[56];
  xx[40] = xx[45] * xx[39];
  xx[41] = xx[43] * xx[17] + xx[44] * xx[39];
  xx[55] = - xx[38];
  xx[56] = - xx[40];
  xx[57] = xx[41];
  pm_math_Vector3_cross_ra(xx + 43, xx + 55, xx + 62);
  xx[43] = motionData[53];
  xx[44] = motionData[54];
  xx[45] = motionData[55];
  pm_math_Vector3_cross_ra(xx + 59, xx + 43, xx + 55);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 55, xx + 43);
  xx[30] = xx[58] * xx[2];
  xx[31] = xx[29] * xx[30];
  xx[32] = xx[5] * xx[2];
  xx[2] = xx[29] * xx[32];
  xx[5] = xx[30] * xx[16] + xx[32] * xx[28];
  xx[55] = - xx[31];
  xx[56] = - xx[2];
  xx[57] = xx[5];
  pm_math_Vector3_cross_ra(xx + 46, xx + 55, xx + 58);
  xx[46] = xx[43] + (xx[58] - xx[7] * xx[31]) * xx[1] - xx[32];
  xx[47] = xx[44] + (xx[59] - xx[7] * xx[2]) * xx[1] + xx[30];
  xx[48] = xx[45] + xx[1] * (xx[60] + xx[7] * xx[5]);
  pm_math_Quaternion_xform_ra(xx + 11, xx + 46, xx + 28);
  J[6] = - ((xx[22] - xx[10] * xx[4]) * xx[1] - xx[6] + xx[19] + xx[25]);
  J[7] = - ((xx[49] - xx[42] * xx[34]) * xx[1] - xx[35] + xx[52]);
  J[8] = - ((xx[62] - xx[42] * xx[38]) * xx[1] - xx[39] + xx[28]);
  J[9] = (motionData[77] * motionData[79] + motionData[78] * motionData[80]) *
    xx[1];
  J[20] = - ((xx[23] - xx[10] * xx[8]) * xx[1] + xx[3] + xx[20] + xx[26]);
  J[21] = - ((xx[50] - xx[42] * xx[36]) * xx[1] + xx[15] + xx[53]);
  J[22] = - ((xx[63] - xx[42] * xx[40]) * xx[1] + xx[17] + xx[29]);
  J[23] = - (xx[1] * (motionData[77] * motionData[78] - motionData[79] *
                      motionData[80]));
  J[34] = - (xx[1] * (xx[24] + xx[18] * xx[10]) + xx[21] + xx[27]);
  J[35] = - (xx[1] * (xx[51] + xx[37] * xx[42]) + xx[54]);
  J[36] = - (xx[1] * (xx[64] + xx[41] * xx[42]) + xx[30]);
  J[37] = - ((motionData[78] * motionData[78] + motionData[79] * motionData[79])
             * xx[1] - xx[9]);
  return 3;
}

static size_t computeAssemblyJacobian_1(const RuntimeDerivedValuesBundle *rtdv,
  const double *state, const int *modeVector, const double *motionData, double
  *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[65];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = 0.0;
  xx[1] = 0.3535536222753973;
  xx[2] = - 0.6123721711368582;
  xx[3] = - 0.3535533957406371;
  xx[4] = - 0.6123725635210486;
  xx[5] = 0.5;
  xx[6] = xx[5] * state[20];
  xx[7] = 6.407547900609781e-7;
  xx[8] = sin(xx[6]);
  xx[9] = 3.867410137128462e-7;
  xx[10] = cos(xx[6]);
  xx[11] = - (xx[7] * xx[8]);
  xx[12] = xx[9] * xx[8];
  xx[13] = xx[8];
  pm_math_Quaternion_compose_ra(xx + 1, xx + 10, xx + 14);
  xx[1] = motionData[112];
  xx[2] = motionData[113];
  xx[3] = motionData[114];
  xx[4] = motionData[115];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 1, xx + 10);
  xx[1] = 2.0;
  xx[2] = motionData[113];
  xx[3] = motionData[114];
  xx[4] = motionData[115];
  xx[6] = motionData[114] - xx[9] * motionData[115];
  xx[8] = xx[7] * motionData[115] + motionData[113];
  xx[18] = xx[6];
  xx[19] = - xx[8];
  xx[20] = xx[9] * motionData[113] + xx[7] * motionData[114];
  pm_math_Vector3_cross_ra(xx + 2, xx + 18, xx + 21);
  xx[2] = 0.8;
  xx[3] = (xx[1] * (xx[21] - xx[6] * motionData[112]) - xx[7]) * xx[2];
  xx[4] = xx[13] * xx[3];
  xx[6] = (xx[9] + xx[1] * (xx[22] + xx[8] * motionData[112])) * xx[2];
  xx[8] = xx[13] * xx[6];
  xx[18] = xx[11] * xx[3] + xx[12] * xx[6];
  xx[19] = - xx[4];
  xx[20] = - xx[8];
  xx[21] = xx[18];
  pm_math_Vector3_cross_ra(xx + 11, xx + 19, xx + 22);
  xx[11] = xx[9] * motionData[118] - motionData[117];
  xx[12] = motionData[116] + xx[7] * motionData[118];
  xx[13] = - (xx[7] * motionData[117] + xx[9] * motionData[116]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 19);
  xx[11] = - 7.57574839337541e-8;
  xx[12] = 2.875094602052041e-7;
  xx[13] = - 1.597336708053589e-13;
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 25);
  xx[11] = motionData[56];
  xx[12] = motionData[57];
  xx[13] = motionData[58];
  xx[14] = motionData[59];
  xx[7] = xx[5] * state[22];
  xx[9] = cos(xx[7]);
  xx[15] = xx[5] * state[23];
  xx[5] = 1.011242923582525e-11;
  xx[16] = sin(xx[15]);
  xx[17] = 3.867410137194052e-7;
  xx[28] = cos(xx[15]);
  xx[29] = xx[5] * xx[16];
  xx[30] = - xx[16];
  xx[31] = xx[17] * xx[16];
  xx[32] = - 0.9999999999999301;
  xx[33] = 1.933705068580629e-7;
  xx[34] = 3.203773950294993e-7;
  xx[35] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 28, xx + 32, xx + 36);
  xx[15] = sin(xx[7]);
  xx[7] = xx[9] * xx[36] + xx[37] * xx[15];
  xx[16] = xx[9] * xx[37] - xx[36] * xx[15];
  xx[28] = xx[9] * xx[38] - xx[39] * xx[15];
  xx[29] = xx[9] * xx[39] + xx[38] * xx[15];
  xx[30] = xx[7];
  xx[31] = xx[16];
  xx[32] = xx[28];
  xx[33] = xx[29];
  pm_math_Quaternion_compose_ra(xx + 11, xx + 30, xx + 34);
  xx[38] = motionData[70];
  xx[39] = motionData[71];
  xx[40] = motionData[72];
  xx[41] = motionData[73];
  pm_math_Quaternion_compose_ra(xx + 34, xx + 38, xx + 42);
  xx[9] = 1.0;
  xx[15] = ((motionData[72] * motionData[72] + motionData[73] * motionData[73]) *
            xx[1] - xx[9]) * xx[2];
  xx[34] = xx[45] * xx[15];
  xx[35] = 1.6 * (motionData[70] * motionData[73] - motionData[71] * motionData
                  [72]);
  xx[36] = xx[45] * xx[35];
  xx[37] = xx[43] * xx[15] + xx[44] * xx[35];
  xx[46] = - xx[34];
  xx[47] = - xx[36];
  xx[48] = xx[37];
  pm_math_Vector3_cross_ra(xx + 43, xx + 46, xx + 49);
  xx[46] = xx[16];
  xx[47] = xx[28];
  xx[48] = xx[29];
  xx[52] = xx[28] * motionData[75] + xx[29] * motionData[76];
  xx[53] = xx[16] * motionData[75];
  xx[54] = xx[16] * motionData[76];
  xx[55] = - xx[52];
  xx[56] = xx[53];
  xx[57] = xx[54];
  pm_math_Vector3_cross_ra(xx + 46, xx + 55, xx + 58);
  xx[55] = xx[29] * xx[2];
  xx[56] = xx[2] * xx[16];
  xx[61] = xx[1] * (xx[58] - xx[7] * xx[52]) + xx[1] * (xx[7] * xx[55] - xx[56] *
    xx[28]);
  xx[62] = motionData[76] + (xx[7] * xx[53] + xx[59]) * xx[1] + (xx[29] * xx[55]
    + xx[56] * xx[16]) * xx[1] - xx[2];
  xx[63] = (xx[7] * xx[54] + xx[60]) * xx[1] - motionData[75] - (xx[7] * xx[56]
    + xx[55] * xx[28]) * xx[1];
  pm_math_Quaternion_xform_ra(xx + 11, xx + 61, xx + 52);
  xx[55] = xx[17] * xx[28] + xx[29];
  xx[56] = xx[29] * xx[5] - xx[17] * xx[16];
  xx[57] = xx[16] + xx[5] * xx[28];
  xx[58] = xx[55];
  xx[59] = xx[56];
  xx[60] = - xx[57];
  pm_math_Vector3_cross_ra(xx + 46, xx + 58, xx + 61);
  xx[58] = xx[5] + xx[1] * (xx[61] - xx[55] * xx[7]);
  xx[5] = xx[1] * (xx[62] - xx[7] * xx[56]) - xx[9];
  xx[59] = xx[58];
  xx[60] = xx[5];
  xx[61] = xx[17] + (xx[7] * xx[57] + xx[63]) * xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 38, xx + 59, xx + 55);
  xx[17] = xx[2] * xx[55];
  xx[38] = xx[45] * xx[17];
  xx[39] = xx[2] * xx[56];
  xx[40] = xx[45] * xx[39];
  xx[41] = xx[43] * xx[17] + xx[44] * xx[39];
  xx[55] = - xx[38];
  xx[56] = - xx[40];
  xx[57] = xx[41];
  pm_math_Vector3_cross_ra(xx + 43, xx + 55, xx + 62);
  xx[43] = motionData[74];
  xx[44] = motionData[75];
  xx[45] = motionData[76];
  pm_math_Vector3_cross_ra(xx + 59, xx + 43, xx + 55);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 55, xx + 43);
  xx[30] = xx[58] * xx[2];
  xx[31] = xx[29] * xx[30];
  xx[32] = xx[5] * xx[2];
  xx[2] = xx[29] * xx[32];
  xx[5] = xx[30] * xx[16] + xx[32] * xx[28];
  xx[55] = - xx[31];
  xx[56] = - xx[2];
  xx[57] = xx[5];
  pm_math_Vector3_cross_ra(xx + 46, xx + 55, xx + 58);
  xx[46] = xx[43] + (xx[58] - xx[7] * xx[31]) * xx[1] - xx[32];
  xx[47] = xx[44] + (xx[59] - xx[7] * xx[2]) * xx[1] + xx[30];
  xx[48] = xx[45] + xx[1] * (xx[60] + xx[7] * xx[5]);
  pm_math_Quaternion_xform_ra(xx + 11, xx + 46, xx + 28);
  J[10] = - ((xx[22] - xx[10] * xx[4]) * xx[1] - xx[6] + xx[19] + xx[25]);
  J[11] = - ((xx[49] - xx[42] * xx[34]) * xx[1] - xx[35] + xx[52]);
  J[12] = - ((xx[62] - xx[42] * xx[38]) * xx[1] - xx[39] + xx[28]);
  J[13] = (motionData[98] * motionData[100] + motionData[99] * motionData[101]) *
    xx[1];
  J[24] = - ((xx[23] - xx[10] * xx[8]) * xx[1] + xx[3] + xx[20] + xx[26]);
  J[25] = - ((xx[50] - xx[42] * xx[36]) * xx[1] + xx[15] + xx[53]);
  J[26] = - ((xx[63] - xx[42] * xx[40]) * xx[1] + xx[17] + xx[29]);
  J[27] = - (xx[1] * (motionData[98] * motionData[99] - motionData[100] *
                      motionData[101]));
  J[38] = - (xx[1] * (xx[24] + xx[18] * xx[10]) + xx[21] + xx[27]);
  J[39] = - (xx[1] * (xx[51] + xx[37] * xx[42]) + xx[54]);
  J[40] = - (xx[1] * (xx[64] + xx[41] * xx[42]) + xx[30]);
  J[41] = - ((motionData[99] * motionData[99] + motionData[100] * motionData[100])
             * xx[1] - xx[9]);
  return 3;
}

static size_t computeAssemblyJacobian_2(const RuntimeDerivedValuesBundle *rtdv,
  const double *state, const int *modeVector, const double *motionData, double
  *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[65];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = 0.0;
  xx[1] = - 0.7071070077275268;
  xx[2] = - 1.367372157708226e-7;
  xx[3] = 0.7071065546454696;
  xx[4] = - 1.367299775908286e-7;
  xx[5] = 0.5;
  xx[6] = xx[5] * state[4];
  xx[7] = 6.407547900609781e-7;
  xx[8] = sin(xx[6]);
  xx[9] = 3.867410137128462e-7;
  xx[10] = cos(xx[6]);
  xx[11] = - (xx[7] * xx[8]);
  xx[12] = xx[9] * xx[8];
  xx[13] = xx[8];
  pm_math_Quaternion_compose_ra(xx + 1, xx + 10, xx + 14);
  xx[1] = motionData[133];
  xx[2] = motionData[134];
  xx[3] = motionData[135];
  xx[4] = motionData[136];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 1, xx + 10);
  xx[1] = 2.0;
  xx[2] = motionData[134];
  xx[3] = motionData[135];
  xx[4] = motionData[136];
  xx[6] = motionData[135] - xx[9] * motionData[136];
  xx[8] = xx[7] * motionData[136] + motionData[134];
  xx[18] = xx[6];
  xx[19] = - xx[8];
  xx[20] = xx[9] * motionData[134] + xx[7] * motionData[135];
  pm_math_Vector3_cross_ra(xx + 2, xx + 18, xx + 21);
  xx[2] = 0.8;
  xx[3] = (xx[1] * (xx[21] - xx[6] * motionData[133]) - xx[7]) * xx[2];
  xx[4] = xx[13] * xx[3];
  xx[6] = (xx[9] + xx[1] * (xx[22] + xx[8] * motionData[133])) * xx[2];
  xx[8] = xx[13] * xx[6];
  xx[18] = xx[11] * xx[3] + xx[12] * xx[6];
  xx[19] = - xx[4];
  xx[20] = - xx[8];
  xx[21] = xx[18];
  pm_math_Vector3_cross_ra(xx + 11, xx + 19, xx + 22);
  xx[11] = xx[9] * motionData[139] - motionData[138];
  xx[12] = motionData[137] + xx[7] * motionData[139];
  xx[13] = - (xx[7] * motionData[138] + xx[9] * motionData[137]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 19);
  xx[11] = - 7.57574839337541e-8;
  xx[12] = 2.875094602052041e-7;
  xx[13] = - 1.597336708053589e-13;
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 25);
  xx[11] = motionData[14];
  xx[12] = motionData[15];
  xx[13] = motionData[16];
  xx[14] = motionData[17];
  xx[7] = xx[5] * state[6];
  xx[9] = cos(xx[7]);
  xx[15] = xx[5] * state[7];
  xx[5] = 1.011242923582525e-11;
  xx[16] = sin(xx[15]);
  xx[17] = 3.867410137194052e-7;
  xx[28] = cos(xx[15]);
  xx[29] = xx[5] * xx[16];
  xx[30] = - xx[16];
  xx[31] = xx[17] * xx[16];
  xx[32] = - 0.9999999999999301;
  xx[33] = 1.933705068580629e-7;
  xx[34] = 3.203773950294993e-7;
  xx[35] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 28, xx + 32, xx + 36);
  xx[15] = sin(xx[7]);
  xx[7] = xx[9] * xx[36] + xx[37] * xx[15];
  xx[16] = xx[9] * xx[37] - xx[36] * xx[15];
  xx[28] = xx[9] * xx[38] - xx[39] * xx[15];
  xx[29] = xx[9] * xx[39] + xx[38] * xx[15];
  xx[30] = xx[7];
  xx[31] = xx[16];
  xx[32] = xx[28];
  xx[33] = xx[29];
  pm_math_Quaternion_compose_ra(xx + 11, xx + 30, xx + 34);
  xx[38] = motionData[28];
  xx[39] = motionData[29];
  xx[40] = motionData[30];
  xx[41] = motionData[31];
  pm_math_Quaternion_compose_ra(xx + 34, xx + 38, xx + 42);
  xx[9] = 1.0;
  xx[15] = ((motionData[30] * motionData[30] + motionData[31] * motionData[31]) *
            xx[1] - xx[9]) * xx[2];
  xx[34] = xx[45] * xx[15];
  xx[35] = 1.6 * (motionData[28] * motionData[31] - motionData[29] * motionData
                  [30]);
  xx[36] = xx[45] * xx[35];
  xx[37] = xx[43] * xx[15] + xx[44] * xx[35];
  xx[46] = - xx[34];
  xx[47] = - xx[36];
  xx[48] = xx[37];
  pm_math_Vector3_cross_ra(xx + 43, xx + 46, xx + 49);
  xx[46] = xx[16];
  xx[47] = xx[28];
  xx[48] = xx[29];
  xx[52] = xx[28] * motionData[33] + xx[29] * motionData[34];
  xx[53] = xx[16] * motionData[33];
  xx[54] = xx[16] * motionData[34];
  xx[55] = - xx[52];
  xx[56] = xx[53];
  xx[57] = xx[54];
  pm_math_Vector3_cross_ra(xx + 46, xx + 55, xx + 58);
  xx[55] = xx[29] * xx[2];
  xx[56] = xx[2] * xx[16];
  xx[61] = xx[1] * (xx[58] - xx[7] * xx[52]) + xx[1] * (xx[7] * xx[55] - xx[56] *
    xx[28]);
  xx[62] = motionData[34] + (xx[7] * xx[53] + xx[59]) * xx[1] + (xx[29] * xx[55]
    + xx[56] * xx[16]) * xx[1] - xx[2];
  xx[63] = (xx[7] * xx[54] + xx[60]) * xx[1] - motionData[33] - (xx[7] * xx[56]
    + xx[55] * xx[28]) * xx[1];
  pm_math_Quaternion_xform_ra(xx + 11, xx + 61, xx + 52);
  xx[55] = xx[17] * xx[28] + xx[29];
  xx[56] = xx[29] * xx[5] - xx[17] * xx[16];
  xx[57] = xx[16] + xx[5] * xx[28];
  xx[58] = xx[55];
  xx[59] = xx[56];
  xx[60] = - xx[57];
  pm_math_Vector3_cross_ra(xx + 46, xx + 58, xx + 61);
  xx[58] = xx[5] + xx[1] * (xx[61] - xx[55] * xx[7]);
  xx[5] = xx[1] * (xx[62] - xx[7] * xx[56]) - xx[9];
  xx[59] = xx[58];
  xx[60] = xx[5];
  xx[61] = xx[17] + (xx[7] * xx[57] + xx[63]) * xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 38, xx + 59, xx + 55);
  xx[17] = xx[2] * xx[55];
  xx[38] = xx[45] * xx[17];
  xx[39] = xx[2] * xx[56];
  xx[40] = xx[45] * xx[39];
  xx[41] = xx[43] * xx[17] + xx[44] * xx[39];
  xx[55] = - xx[38];
  xx[56] = - xx[40];
  xx[57] = xx[41];
  pm_math_Vector3_cross_ra(xx + 43, xx + 55, xx + 62);
  xx[43] = motionData[32];
  xx[44] = motionData[33];
  xx[45] = motionData[34];
  pm_math_Vector3_cross_ra(xx + 59, xx + 43, xx + 55);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 55, xx + 43);
  xx[30] = xx[58] * xx[2];
  xx[31] = xx[29] * xx[30];
  xx[32] = xx[5] * xx[2];
  xx[2] = xx[29] * xx[32];
  xx[5] = xx[30] * xx[16] + xx[32] * xx[28];
  xx[55] = - xx[31];
  xx[56] = - xx[2];
  xx[57] = xx[5];
  pm_math_Vector3_cross_ra(xx + 46, xx + 55, xx + 58);
  xx[46] = xx[43] + (xx[58] - xx[7] * xx[31]) * xx[1] - xx[32];
  xx[47] = xx[44] + (xx[59] - xx[7] * xx[2]) * xx[1] + xx[30];
  xx[48] = xx[45] + xx[1] * (xx[60] + xx[7] * xx[5]);
  pm_math_Quaternion_xform_ra(xx + 11, xx + 46, xx + 28);
  J[2] = - ((xx[22] - xx[10] * xx[4]) * xx[1] - xx[6] + xx[19] + xx[25]);
  J[3] = - ((xx[49] - xx[42] * xx[34]) * xx[1] - xx[35] + xx[52]);
  J[4] = - ((xx[62] - xx[42] * xx[38]) * xx[1] - xx[39] + xx[28]);
  J[5] = (motionData[119] * motionData[121] + motionData[120] * motionData[122])
    * xx[1];
  J[16] = - ((xx[23] - xx[10] * xx[8]) * xx[1] + xx[3] + xx[20] + xx[26]);
  J[17] = - ((xx[50] - xx[42] * xx[36]) * xx[1] + xx[15] + xx[53]);
  J[18] = - ((xx[63] - xx[42] * xx[40]) * xx[1] + xx[17] + xx[29]);
  J[19] = - (xx[1] * (motionData[119] * motionData[120] - motionData[121] *
                      motionData[122]));
  J[30] = - (xx[1] * (xx[24] + xx[18] * xx[10]) + xx[21] + xx[27]);
  J[31] = - (xx[1] * (xx[51] + xx[37] * xx[42]) + xx[54]);
  J[32] = - (xx[1] * (xx[64] + xx[41] * xx[42]) + xx[30]);
  J[33] = - ((motionData[120] * motionData[120] + motionData[121] * motionData
              [121]) * xx[1] - xx[9]);
  return 3;
}

size_t Wind_Turbine_31c4daf8_1_computeAssemblyJacobian(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, boolean_T
  forVelocitySatisfaction, const double *state, const int *modeVector, const
  double *motionData, double *J)
{
  (void) mech;
  (void) rtdv;
  (void) state;
  (void) modeVector;
  (void) forVelocitySatisfaction;
  (void) motionData;
  (void) J;
  switch (constraintIdx)
  {
   case 0:
    return computeAssemblyJacobian_0(rtdv, state, modeVector, motionData, J);

   case 1:
    return computeAssemblyJacobian_1(rtdv, state, modeVector, motionData, J);

   case 2:
    return computeAssemblyJacobian_2(rtdv, state, modeVector, motionData, J);
  }

  return 0;
}

size_t Wind_Turbine_31c4daf8_1_computeFullAssemblyJacobian(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const double *state, const int
  *modeVector, const double *motionData, double *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[141];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = 0.0;
  xx[1] = - 0.3535533854521294;
  xx[2] = - 0.6123723078740739;
  xx[3] = 0.3535531589048324;
  xx[4] = - 0.6123727002510262;
  xx[5] = 0.5;
  xx[6] = xx[5] * state[12];
  xx[7] = 6.407547900609781e-7;
  xx[8] = sin(xx[6]);
  xx[9] = 3.867410137128462e-7;
  xx[10] = cos(xx[6]);
  xx[11] = - (xx[7] * xx[8]);
  xx[12] = xx[9] * xx[8];
  xx[13] = xx[8];
  pm_math_Quaternion_compose_ra(xx + 1, xx + 10, xx + 14);
  xx[1] = motionData[91];
  xx[2] = motionData[92];
  xx[3] = motionData[93];
  xx[4] = motionData[94];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 1, xx + 10);
  xx[1] = 2.0;
  xx[2] = motionData[92];
  xx[3] = motionData[93];
  xx[4] = motionData[94];
  xx[6] = motionData[93] - xx[9] * motionData[94];
  xx[8] = xx[7] * motionData[94] + motionData[92];
  xx[18] = xx[6];
  xx[19] = - xx[8];
  xx[20] = xx[9] * motionData[92] + xx[7] * motionData[93];
  pm_math_Vector3_cross_ra(xx + 2, xx + 18, xx + 21);
  xx[2] = 0.8;
  xx[3] = (xx[1] * (xx[21] - xx[6] * motionData[91]) - xx[7]) * xx[2];
  xx[4] = xx[13] * xx[3];
  xx[6] = (xx[9] + xx[1] * (xx[22] + xx[8] * motionData[91])) * xx[2];
  xx[8] = xx[13] * xx[6];
  xx[18] = xx[11] * xx[3] + xx[12] * xx[6];
  xx[19] = - xx[4];
  xx[20] = - xx[8];
  xx[21] = xx[18];
  pm_math_Vector3_cross_ra(xx + 11, xx + 19, xx + 22);
  xx[11] = xx[9] * motionData[97] - motionData[96];
  xx[12] = motionData[95] + xx[7] * motionData[97];
  xx[13] = - (xx[7] * motionData[96] + xx[9] * motionData[95]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 19);
  xx[11] = - 7.57574839337541e-8;
  xx[12] = 2.875094602052041e-7;
  xx[13] = - 1.597336708053589e-13;
  pm_math_Quaternion_xform_ra(xx + 14, xx + 11, xx + 25);
  xx[14] = motionData[35];
  xx[15] = motionData[36];
  xx[16] = motionData[37];
  xx[17] = motionData[38];
  xx[28] = xx[5] * state[14];
  xx[29] = cos(xx[28]);
  xx[30] = xx[5] * state[15];
  xx[31] = 1.011242923582525e-11;
  xx[32] = sin(xx[30]);
  xx[33] = 3.867410137194052e-7;
  xx[34] = cos(xx[30]);
  xx[35] = xx[31] * xx[32];
  xx[36] = - xx[32];
  xx[37] = xx[33] * xx[32];
  xx[38] = - 0.9999999999999301;
  xx[39] = 1.933705068580629e-7;
  xx[40] = 3.203773950294993e-7;
  xx[41] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 34, xx + 38, xx + 42);
  xx[30] = sin(xx[28]);
  xx[28] = xx[29] * xx[42] + xx[43] * xx[30];
  xx[32] = xx[29] * xx[43] - xx[42] * xx[30];
  xx[34] = xx[29] * xx[44] - xx[45] * xx[30];
  xx[35] = xx[29] * xx[45] + xx[44] * xx[30];
  xx[42] = xx[28];
  xx[43] = xx[32];
  xx[44] = xx[34];
  xx[45] = xx[35];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 42, xx + 46);
  xx[50] = motionData[49];
  xx[51] = motionData[50];
  xx[52] = motionData[51];
  xx[53] = motionData[52];
  pm_math_Quaternion_compose_ra(xx + 46, xx + 50, xx + 54);
  xx[29] = 1.0;
  xx[30] = ((motionData[51] * motionData[51] + motionData[52] * motionData[52]) *
            xx[1] - xx[29]) * xx[2];
  xx[36] = xx[57] * xx[30];
  xx[37] = 1.6;
  xx[46] = xx[37] * (motionData[49] * motionData[52] - motionData[50] *
                     motionData[51]);
  xx[47] = xx[57] * xx[46];
  xx[48] = xx[55] * xx[30] + xx[56] * xx[46];
  xx[58] = - xx[36];
  xx[59] = - xx[47];
  xx[60] = xx[48];
  pm_math_Vector3_cross_ra(xx + 55, xx + 58, xx + 61);
  xx[58] = xx[32];
  xx[59] = xx[34];
  xx[60] = xx[35];
  xx[49] = xx[34] * motionData[54] + xx[35] * motionData[55];
  xx[64] = xx[32] * motionData[54];
  xx[65] = xx[32] * motionData[55];
  xx[66] = - xx[49];
  xx[67] = xx[64];
  xx[68] = xx[65];
  pm_math_Vector3_cross_ra(xx + 58, xx + 66, xx + 69);
  xx[66] = xx[35] * xx[2];
  xx[67] = xx[2] * xx[32];
  xx[72] = xx[1] * (xx[69] - xx[28] * xx[49]) + xx[1] * (xx[28] * xx[66] - xx[67]
    * xx[34]);
  xx[73] = motionData[55] + (xx[28] * xx[64] + xx[70]) * xx[1] + (xx[35] * xx[66]
    + xx[67] * xx[32]) * xx[1] - xx[2];
  xx[74] = (xx[28] * xx[65] + xx[71]) * xx[1] - motionData[54] - (xx[28] * xx[67]
    + xx[66] * xx[34]) * xx[1];
  pm_math_Quaternion_xform_ra(xx + 14, xx + 72, xx + 64);
  xx[49] = xx[33] * xx[34] + xx[35];
  xx[67] = xx[35] * xx[31] - xx[33] * xx[32];
  xx[68] = xx[32] + xx[31] * xx[34];
  xx[69] = xx[49];
  xx[70] = xx[67];
  xx[71] = - xx[68];
  pm_math_Vector3_cross_ra(xx + 58, xx + 69, xx + 72);
  xx[69] = xx[31] + xx[1] * (xx[72] - xx[49] * xx[28]);
  xx[49] = xx[1] * (xx[73] - xx[28] * xx[67]) - xx[29];
  xx[70] = xx[69];
  xx[71] = xx[49];
  xx[72] = xx[33] + (xx[28] * xx[68] + xx[74]) * xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 50, xx + 70, xx + 73);
  xx[50] = xx[2] * xx[73];
  xx[51] = xx[57] * xx[50];
  xx[52] = xx[2] * xx[74];
  xx[53] = xx[57] * xx[52];
  xx[67] = xx[55] * xx[50] + xx[56] * xx[52];
  xx[73] = - xx[51];
  xx[74] = - xx[53];
  xx[75] = xx[67];
  pm_math_Vector3_cross_ra(xx + 55, xx + 73, xx + 76);
  xx[55] = motionData[53];
  xx[56] = motionData[54];
  xx[57] = motionData[55];
  pm_math_Vector3_cross_ra(xx + 70, xx + 55, xx + 73);
  pm_math_Quaternion_xform_ra(xx + 42, xx + 73, xx + 55);
  xx[42] = xx[69] * xx[2];
  xx[43] = xx[35] * xx[42];
  xx[44] = xx[49] * xx[2];
  xx[45] = xx[35] * xx[44];
  xx[35] = xx[42] * xx[32] + xx[44] * xx[34];
  xx[68] = - xx[43];
  xx[69] = - xx[45];
  xx[70] = xx[35];
  pm_math_Vector3_cross_ra(xx + 58, xx + 68, xx + 71);
  xx[58] = xx[55] + (xx[71] - xx[28] * xx[43]) * xx[1] - xx[44];
  xx[59] = xx[56] + (xx[72] - xx[28] * xx[45]) * xx[1] + xx[42];
  xx[60] = xx[57] + xx[1] * (xx[73] + xx[28] * xx[35]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 58, xx + 42);
  xx[14] = 0.3535536222753973;
  xx[15] = - 0.6123721711368582;
  xx[16] = - 0.3535533957406371;
  xx[17] = - 0.6123725635210486;
  xx[28] = xx[5] * state[20];
  xx[32] = sin(xx[28]);
  xx[55] = cos(xx[28]);
  xx[56] = - (xx[7] * xx[32]);
  xx[57] = xx[9] * xx[32];
  xx[58] = xx[32];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 55, xx + 68);
  xx[14] = motionData[112];
  xx[15] = motionData[113];
  xx[16] = motionData[114];
  xx[17] = motionData[115];
  pm_math_Quaternion_compose_ra(xx + 68, xx + 14, xx + 55);
  xx[14] = motionData[113];
  xx[15] = motionData[114];
  xx[16] = motionData[115];
  xx[17] = motionData[114] - xx[9] * motionData[115];
  xx[28] = xx[7] * motionData[115] + motionData[113];
  xx[72] = xx[17];
  xx[73] = - xx[28];
  xx[74] = xx[9] * motionData[113] + xx[7] * motionData[114];
  pm_math_Vector3_cross_ra(xx + 14, xx + 72, xx + 79);
  xx[14] = (xx[1] * (xx[79] - xx[17] * motionData[112]) - xx[7]) * xx[2];
  xx[15] = xx[58] * xx[14];
  xx[16] = (xx[9] + xx[1] * (xx[80] + xx[28] * motionData[112])) * xx[2];
  xx[17] = xx[58] * xx[16];
  xx[28] = xx[56] * xx[14] + xx[57] * xx[16];
  xx[72] = - xx[15];
  xx[73] = - xx[17];
  xx[74] = xx[28];
  pm_math_Vector3_cross_ra(xx + 56, xx + 72, xx + 79);
  xx[56] = xx[9] * motionData[118] - motionData[117];
  xx[57] = motionData[116] + xx[7] * motionData[118];
  xx[58] = - (xx[7] * motionData[117] + xx[9] * motionData[116]);
  pm_math_Quaternion_xform_ra(xx + 68, xx + 56, xx + 72);
  pm_math_Quaternion_xform_ra(xx + 68, xx + 11, xx + 56);
  xx[68] = motionData[56];
  xx[69] = motionData[57];
  xx[70] = motionData[58];
  xx[71] = motionData[59];
  xx[32] = xx[5] * state[22];
  xx[34] = cos(xx[32]);
  xx[35] = xx[5] * state[23];
  xx[45] = sin(xx[35]);
  xx[82] = cos(xx[35]);
  xx[83] = xx[31] * xx[45];
  xx[84] = - xx[45];
  xx[85] = xx[33] * xx[45];
  pm_math_Quaternion_compose_ra(xx + 82, xx + 38, xx + 86);
  xx[35] = sin(xx[32]);
  xx[32] = xx[34] * xx[86] + xx[87] * xx[35];
  xx[45] = xx[34] * xx[87] - xx[86] * xx[35];
  xx[49] = xx[34] * xx[88] - xx[89] * xx[35];
  xx[59] = xx[34] * xx[89] + xx[88] * xx[35];
  xx[82] = xx[32];
  xx[83] = xx[45];
  xx[84] = xx[49];
  xx[85] = xx[59];
  pm_math_Quaternion_compose_ra(xx + 68, xx + 82, xx + 86);
  xx[90] = motionData[70];
  xx[91] = motionData[71];
  xx[92] = motionData[72];
  xx[93] = motionData[73];
  pm_math_Quaternion_compose_ra(xx + 86, xx + 90, xx + 94);
  xx[34] = ((motionData[72] * motionData[72] + motionData[73] * motionData[73]) *
            xx[1] - xx[29]) * xx[2];
  xx[35] = xx[97] * xx[34];
  xx[60] = xx[37] * (motionData[70] * motionData[73] - motionData[71] *
                     motionData[72]);
  xx[75] = xx[97] * xx[60];
  xx[86] = xx[95] * xx[34] + xx[96] * xx[60];
  xx[87] = - xx[35];
  xx[88] = - xx[75];
  xx[89] = xx[86];
  pm_math_Vector3_cross_ra(xx + 95, xx + 87, xx + 98);
  xx[87] = xx[45];
  xx[88] = xx[49];
  xx[89] = xx[59];
  xx[101] = xx[49] * motionData[75] + xx[59] * motionData[76];
  xx[102] = xx[45] * motionData[75];
  xx[103] = xx[45] * motionData[76];
  xx[104] = - xx[101];
  xx[105] = xx[102];
  xx[106] = xx[103];
  pm_math_Vector3_cross_ra(xx + 87, xx + 104, xx + 107);
  xx[104] = xx[59] * xx[2];
  xx[105] = xx[2] * xx[45];
  xx[110] = xx[1] * (xx[107] - xx[32] * xx[101]) + xx[1] * (xx[32] * xx[104] -
    xx[105] * xx[49]);
  xx[111] = motionData[76] + (xx[32] * xx[102] + xx[108]) * xx[1] + (xx[59] *
    xx[104] + xx[105] * xx[45]) * xx[1] - xx[2];
  xx[112] = (xx[32] * xx[103] + xx[109]) * xx[1] - motionData[75] - (xx[32] *
    xx[105] + xx[104] * xx[49]) * xx[1];
  pm_math_Quaternion_xform_ra(xx + 68, xx + 110, xx + 101);
  xx[104] = xx[33] * xx[49] + xx[59];
  xx[105] = xx[59] * xx[31] - xx[33] * xx[45];
  xx[106] = xx[45] + xx[31] * xx[49];
  xx[107] = xx[104];
  xx[108] = xx[105];
  xx[109] = - xx[106];
  pm_math_Vector3_cross_ra(xx + 87, xx + 107, xx + 110);
  xx[107] = xx[31] + xx[1] * (xx[110] - xx[104] * xx[32]);
  xx[104] = xx[1] * (xx[111] - xx[32] * xx[105]) - xx[29];
  xx[108] = xx[107];
  xx[109] = xx[104];
  xx[110] = xx[33] + (xx[32] * xx[106] + xx[112]) * xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 90, xx + 108, xx + 111);
  xx[90] = xx[2] * xx[111];
  xx[91] = xx[97] * xx[90];
  xx[92] = xx[2] * xx[112];
  xx[93] = xx[97] * xx[92];
  xx[105] = xx[95] * xx[90] + xx[96] * xx[92];
  xx[111] = - xx[91];
  xx[112] = - xx[93];
  xx[113] = xx[105];
  pm_math_Vector3_cross_ra(xx + 95, xx + 111, xx + 114);
  xx[95] = motionData[74];
  xx[96] = motionData[75];
  xx[97] = motionData[76];
  pm_math_Vector3_cross_ra(xx + 108, xx + 95, xx + 111);
  pm_math_Quaternion_xform_ra(xx + 82, xx + 111, xx + 95);
  xx[82] = xx[107] * xx[2];
  xx[83] = xx[59] * xx[82];
  xx[84] = xx[104] * xx[2];
  xx[85] = xx[59] * xx[84];
  xx[59] = xx[82] * xx[45] + xx[84] * xx[49];
  xx[106] = - xx[83];
  xx[107] = - xx[85];
  xx[108] = xx[59];
  pm_math_Vector3_cross_ra(xx + 87, xx + 106, xx + 109);
  xx[87] = xx[95] + (xx[109] - xx[32] * xx[83]) * xx[1] - xx[84];
  xx[88] = xx[96] + (xx[110] - xx[32] * xx[85]) * xx[1] + xx[82];
  xx[89] = xx[97] + xx[1] * (xx[111] + xx[32] * xx[59]);
  pm_math_Quaternion_xform_ra(xx + 68, xx + 87, xx + 82);
  xx[68] = - 0.7071070077275268;
  xx[69] = - 1.367372157708226e-7;
  xx[70] = 0.7071065546454696;
  xx[71] = - 1.367299775908286e-7;
  xx[32] = xx[5] * state[4];
  xx[45] = sin(xx[32]);
  xx[106] = cos(xx[32]);
  xx[107] = - (xx[7] * xx[45]);
  xx[108] = xx[9] * xx[45];
  xx[109] = xx[45];
  pm_math_Quaternion_compose_ra(xx + 68, xx + 106, xx + 110);
  xx[68] = motionData[133];
  xx[69] = motionData[134];
  xx[70] = motionData[135];
  xx[71] = motionData[136];
  pm_math_Quaternion_compose_ra(xx + 110, xx + 68, xx + 106);
  xx[68] = motionData[134];
  xx[69] = motionData[135];
  xx[70] = motionData[136];
  xx[32] = motionData[135] - xx[9] * motionData[136];
  xx[45] = xx[7] * motionData[136] + motionData[134];
  xx[87] = xx[32];
  xx[88] = - xx[45];
  xx[89] = xx[9] * motionData[134] + xx[7] * motionData[135];
  pm_math_Vector3_cross_ra(xx + 68, xx + 87, xx + 95);
  xx[49] = (xx[1] * (xx[95] - xx[32] * motionData[133]) - xx[7]) * xx[2];
  xx[32] = xx[109] * xx[49];
  xx[59] = (xx[9] + xx[1] * (xx[96] + xx[45] * motionData[133])) * xx[2];
  xx[45] = xx[109] * xx[59];
  xx[68] = xx[107] * xx[49] + xx[108] * xx[59];
  xx[69] = - xx[32];
  xx[70] = - xx[45];
  xx[71] = xx[68];
  pm_math_Vector3_cross_ra(xx + 107, xx + 69, xx + 87);
  xx[69] = xx[9] * motionData[139] - motionData[138];
  xx[70] = motionData[137] + xx[7] * motionData[139];
  xx[71] = - (xx[7] * motionData[138] + xx[9] * motionData[137]);
  pm_math_Quaternion_xform_ra(xx + 110, xx + 69, xx + 95);
  pm_math_Quaternion_xform_ra(xx + 110, xx + 11, xx + 69);
  xx[107] = motionData[14];
  xx[108] = motionData[15];
  xx[109] = motionData[16];
  xx[110] = motionData[17];
  xx[7] = xx[5] * state[6];
  xx[9] = cos(xx[7]);
  xx[11] = xx[5] * state[7];
  xx[5] = sin(xx[11]);
  xx[117] = cos(xx[11]);
  xx[118] = xx[31] * xx[5];
  xx[119] = - xx[5];
  xx[120] = xx[33] * xx[5];
  pm_math_Quaternion_compose_ra(xx + 117, xx + 38, xx + 121);
  xx[5] = sin(xx[7]);
  xx[7] = xx[9] * xx[121] + xx[122] * xx[5];
  xx[11] = xx[9] * xx[122] - xx[121] * xx[5];
  xx[12] = xx[9] * xx[123] - xx[124] * xx[5];
  xx[13] = xx[9] * xx[124] + xx[123] * xx[5];
  xx[38] = xx[7];
  xx[39] = xx[11];
  xx[40] = xx[12];
  xx[41] = xx[13];
  pm_math_Quaternion_compose_ra(xx + 107, xx + 38, xx + 117);
  xx[121] = motionData[28];
  xx[122] = motionData[29];
  xx[123] = motionData[30];
  xx[124] = motionData[31];
  pm_math_Quaternion_compose_ra(xx + 117, xx + 121, xx + 125);
  xx[5] = ((motionData[30] * motionData[30] + motionData[31] * motionData[31]) *
           xx[1] - xx[29]) * xx[2];
  xx[9] = xx[128] * xx[5];
  xx[85] = xx[37] * (motionData[28] * motionData[31] - motionData[29] *
                     motionData[30]);
  xx[37] = xx[128] * xx[85];
  xx[104] = xx[126] * xx[5] + xx[127] * xx[85];
  xx[111] = - xx[9];
  xx[112] = - xx[37];
  xx[113] = xx[104];
  pm_math_Vector3_cross_ra(xx + 126, xx + 111, xx + 117);
  xx[111] = xx[12] * motionData[33] + xx[13] * motionData[34];
  xx[112] = xx[11] * motionData[33];
  xx[113] = xx[11] * motionData[34];
  xx[129] = - xx[111];
  xx[130] = xx[112];
  xx[131] = xx[113];
  pm_math_Vector3_cross_ra(xx + 11, xx + 129, xx + 132);
  xx[120] = xx[13] * xx[2];
  xx[129] = xx[2] * xx[11];
  xx[135] = xx[1] * (xx[132] - xx[7] * xx[111]) + xx[1] * (xx[7] * xx[120] - xx
    [129] * xx[12]);
  xx[136] = motionData[34] + (xx[7] * xx[112] + xx[133]) * xx[1] + (xx[13] * xx
    [120] + xx[129] * xx[11]) * xx[1] - xx[2];
  xx[137] = (xx[7] * xx[113] + xx[134]) * xx[1] - motionData[33] - (xx[7] * xx
    [129] + xx[120] * xx[12]) * xx[1];
  pm_math_Quaternion_xform_ra(xx + 107, xx + 135, xx + 111);
  xx[120] = xx[33] * xx[12] + xx[13];
  xx[129] = xx[13] * xx[31] - xx[33] * xx[11];
  xx[130] = xx[11] + xx[31] * xx[12];
  xx[131] = xx[120];
  xx[132] = xx[129];
  xx[133] = - xx[130];
  pm_math_Vector3_cross_ra(xx + 11, xx + 131, xx + 134);
  xx[131] = xx[31] + xx[1] * (xx[134] - xx[120] * xx[7]);
  xx[31] = xx[1] * (xx[135] - xx[7] * xx[129]) - xx[29];
  xx[132] = xx[131];
  xx[133] = xx[31];
  xx[134] = xx[33] + (xx[7] * xx[130] + xx[136]) * xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 121, xx + 132, xx + 135);
  xx[33] = xx[2] * xx[135];
  xx[120] = xx[128] * xx[33];
  xx[121] = xx[2] * xx[136];
  xx[122] = xx[128] * xx[121];
  xx[123] = xx[126] * xx[33] + xx[127] * xx[121];
  xx[135] = - xx[120];
  xx[136] = - xx[122];
  xx[137] = xx[123];
  pm_math_Vector3_cross_ra(xx + 126, xx + 135, xx + 138);
  xx[126] = motionData[32];
  xx[127] = motionData[33];
  xx[128] = motionData[34];
  pm_math_Vector3_cross_ra(xx + 132, xx + 126, xx + 135);
  pm_math_Quaternion_xform_ra(xx + 38, xx + 135, xx + 126);
  xx[38] = xx[131] * xx[2];
  xx[39] = xx[13] * xx[38];
  xx[40] = xx[31] * xx[2];
  xx[2] = xx[13] * xx[40];
  xx[31] = xx[38] * xx[11] + xx[40] * xx[12];
  xx[129] = - xx[39];
  xx[130] = - xx[2];
  xx[131] = xx[31];
  pm_math_Vector3_cross_ra(xx + 11, xx + 129, xx + 132);
  xx[11] = xx[126] + (xx[132] - xx[7] * xx[39]) * xx[1] - xx[40];
  xx[12] = xx[127] + (xx[133] - xx[7] * xx[2]) * xx[1] + xx[38];
  xx[13] = xx[128] + xx[1] * (xx[134] + xx[7] * xx[31]);
  pm_math_Quaternion_xform_ra(xx + 107, xx + 11, xx + 38);
  J[6] = - ((xx[22] - xx[10] * xx[4]) * xx[1] - xx[6] + xx[19] + xx[25]);
  J[7] = - ((xx[61] - xx[54] * xx[36]) * xx[1] - xx[46] + xx[64]);
  J[8] = - ((xx[76] - xx[54] * xx[51]) * xx[1] - xx[52] + xx[42]);
  J[9] = (motionData[77] * motionData[79] + motionData[78] * motionData[80]) *
    xx[1];
  J[20] = - ((xx[23] - xx[10] * xx[8]) * xx[1] + xx[3] + xx[20] + xx[26]);
  J[21] = - ((xx[62] - xx[54] * xx[47]) * xx[1] + xx[30] + xx[65]);
  J[22] = - ((xx[77] - xx[54] * xx[53]) * xx[1] + xx[50] + xx[43]);
  J[23] = - (xx[1] * (motionData[77] * motionData[78] - motionData[79] *
                      motionData[80]));
  J[34] = - (xx[1] * (xx[24] + xx[18] * xx[10]) + xx[21] + xx[27]);
  J[35] = - (xx[1] * (xx[63] + xx[48] * xx[54]) + xx[66]);
  J[36] = - (xx[1] * (xx[78] + xx[67] * xx[54]) + xx[44]);
  J[37] = - ((motionData[78] * motionData[78] + motionData[79] * motionData[79])
             * xx[1] - xx[29]);
  J[52] = - ((xx[79] - xx[55] * xx[15]) * xx[1] - xx[16] + xx[72] + xx[56]);
  J[53] = - ((xx[98] - xx[94] * xx[35]) * xx[1] - xx[60] + xx[101]);
  J[54] = - ((xx[114] - xx[94] * xx[91]) * xx[1] - xx[92] + xx[82]);
  J[55] = (motionData[98] * motionData[100] + motionData[99] * motionData[101]) *
    xx[1];
  J[66] = - ((xx[80] - xx[55] * xx[17]) * xx[1] + xx[14] + xx[73] + xx[57]);
  J[67] = - ((xx[99] - xx[94] * xx[75]) * xx[1] + xx[34] + xx[102]);
  J[68] = - ((xx[115] - xx[94] * xx[93]) * xx[1] + xx[90] + xx[83]);
  J[69] = - (xx[1] * (motionData[98] * motionData[99] - motionData[100] *
                      motionData[101]));
  J[80] = - (xx[1] * (xx[81] + xx[28] * xx[55]) + xx[74] + xx[58]);
  J[81] = - (xx[1] * (xx[100] + xx[86] * xx[94]) + xx[103]);
  J[82] = - (xx[1] * (xx[116] + xx[105] * xx[94]) + xx[84]);
  J[83] = - ((motionData[99] * motionData[99] + motionData[100] * motionData[100])
             * xx[1] - xx[29]);
  J[86] = - ((xx[87] - xx[106] * xx[32]) * xx[1] - xx[59] + xx[95] + xx[69]);
  J[87] = - ((xx[117] - xx[125] * xx[9]) * xx[1] - xx[85] + xx[111]);
  J[88] = - ((xx[138] - xx[125] * xx[120]) * xx[1] - xx[121] + xx[38]);
  J[89] = (motionData[119] * motionData[121] + motionData[120] * motionData[122])
    * xx[1];
  J[100] = - ((xx[88] - xx[106] * xx[45]) * xx[1] + xx[49] + xx[96] + xx[70]);
  J[101] = - ((xx[118] - xx[125] * xx[37]) * xx[1] + xx[5] + xx[112]);
  J[102] = - ((xx[139] - xx[125] * xx[122]) * xx[1] + xx[33] + xx[39]);
  J[103] = - (xx[1] * (motionData[119] * motionData[120] - motionData[121] *
                       motionData[122]));
  J[114] = - (xx[1] * (xx[89] + xx[68] * xx[106]) + xx[97] + xx[71]);
  J[115] = - (xx[1] * (xx[119] + xx[104] * xx[125]) + xx[113]);
  J[116] = - (xx[1] * (xx[140] + xx[123] * xx[125]) + xx[40]);
  J[117] = - ((motionData[120] * motionData[120] + motionData[121] * motionData
               [121]) * xx[1] - xx[29]);
  return 9;
}

static boolean_T isInKinematicSingularity_0(const RuntimeDerivedValuesBundle
  *rtdv, const int *modeVector, const double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  (void) motionData;
  return 0;
}

static boolean_T isInKinematicSingularity_1(const RuntimeDerivedValuesBundle
  *rtdv, const int *modeVector, const double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  (void) motionData;
  return 0;
}

static boolean_T isInKinematicSingularity_2(const RuntimeDerivedValuesBundle
  *rtdv, const int *modeVector, const double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  (void) motionData;
  return 0;
}

boolean_T Wind_Turbine_31c4daf8_1_isInKinematicSingularity(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const int
  *modeVector, const double *motionData)
{
  (void) mech;
  (void) rtdv;
  (void) modeVector;
  (void) motionData;
  switch (constraintIdx)
  {
   case 0:
    return isInKinematicSingularity_0(rtdv, modeVector, motionData);

   case 1:
    return isInKinematicSingularity_1(rtdv, modeVector, motionData);

   case 2:
    return isInKinematicSingularity_2(rtdv, modeVector, motionData);
  }

  return 0;
}

void Wind_Turbine_31c4daf8_1_convertStateVector(const void *asmMech, const
  RuntimeDerivedValuesBundle *rtdv, const void *simMech, const double *asmState,
  const int *asmModeVector, const int *simModeVector, double *simState)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) asmMech;
  (void) rtdvd;
  (void) rtdvi;
  (void) simMech;
  (void) asmModeVector;
  (void) simModeVector;
  simState[0] = asmState[0];
  simState[1] = asmState[1];
  simState[2] = asmState[2];
  simState[3] = asmState[3];
  simState[4] = asmState[4];
  simState[5] = asmState[5];
  simState[6] = asmState[6];
  simState[7] = asmState[7];
  simState[8] = asmState[8];
  simState[9] = asmState[9];
  simState[10] = asmState[10];
  simState[11] = asmState[11];
  simState[12] = asmState[12];
  simState[13] = asmState[13];
  simState[14] = asmState[14];
  simState[15] = asmState[15];
  simState[16] = asmState[16];
  simState[17] = asmState[17];
  simState[18] = asmState[18];
  simState[19] = asmState[19];
  simState[20] = asmState[20];
  simState[21] = asmState[21];
  simState[22] = asmState[22];
  simState[23] = asmState[23];
  simState[24] = asmState[24];
  simState[25] = asmState[25];
  simState[26] = asmState[26];
  simState[27] = asmState[27];
}
