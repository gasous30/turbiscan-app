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

void Wind_Turbine_31c4daf8_1_resetSimStateVector(const void *mech, double *state)
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

static void perturbSimJointPrimitiveState_0_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbSimJointPrimitiveState_0_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[1] = state[1] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_1_0(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbSimJointPrimitiveState_1_0v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[3] = state[3] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_2_0(double mag, double *state)
{
  state[4] = state[4] + mag;
}

static void perturbSimJointPrimitiveState_2_0v(double mag, double *state)
{
  state[4] = state[4] + mag;
  state[5] = state[5] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_0(double mag, double *state)
{
  state[6] = state[6] + mag;
}

static void perturbSimJointPrimitiveState_3_0v(double mag, double *state)
{
  state[6] = state[6] + mag;
  state[8] = state[8] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_3_1(double mag, double *state)
{
  state[7] = state[7] + mag;
}

static void perturbSimJointPrimitiveState_3_1v(double mag, double *state)
{
  state[7] = state[7] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_4_0(double mag, double *state)
{
  state[10] = state[10] + mag;
}

static void perturbSimJointPrimitiveState_4_0v(double mag, double *state)
{
  state[10] = state[10] + mag;
  state[11] = state[11] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_5_0(double mag, double *state)
{
  state[12] = state[12] + mag;
}

static void perturbSimJointPrimitiveState_5_0v(double mag, double *state)
{
  state[12] = state[12] + mag;
  state[13] = state[13] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_6_0(double mag, double *state)
{
  state[14] = state[14] + mag;
}

static void perturbSimJointPrimitiveState_6_0v(double mag, double *state)
{
  state[14] = state[14] + mag;
  state[16] = state[16] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_6_1(double mag, double *state)
{
  state[15] = state[15] + mag;
}

static void perturbSimJointPrimitiveState_6_1v(double mag, double *state)
{
  state[15] = state[15] + mag;
  state[17] = state[17] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_7_0(double mag, double *state)
{
  state[18] = state[18] + mag;
}

static void perturbSimJointPrimitiveState_7_0v(double mag, double *state)
{
  state[18] = state[18] + mag;
  state[19] = state[19] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_8_0(double mag, double *state)
{
  state[20] = state[20] + mag;
}

static void perturbSimJointPrimitiveState_8_0v(double mag, double *state)
{
  state[20] = state[20] + mag;
  state[21] = state[21] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_9_0(double mag, double *state)
{
  state[22] = state[22] + mag;
}

static void perturbSimJointPrimitiveState_9_0v(double mag, double *state)
{
  state[22] = state[22] + mag;
  state[24] = state[24] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_9_1(double mag, double *state)
{
  state[23] = state[23] + mag;
}

static void perturbSimJointPrimitiveState_9_1v(double mag, double *state)
{
  state[23] = state[23] + mag;
  state[25] = state[25] - 0.875 * mag;
}

static void perturbSimJointPrimitiveState_10_0(double mag, double *state)
{
  state[26] = state[26] + mag;
}

static void perturbSimJointPrimitiveState_10_0v(double mag, double *state)
{
  state[26] = state[26] + mag;
  state[27] = state[27] - 0.875 * mag;
}

void Wind_Turbine_31c4daf8_1_perturbSimJointPrimitiveState(const void *mech,
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
    perturbSimJointPrimitiveState_0_0(mag, state);
    break;

   case 1:
    perturbSimJointPrimitiveState_0_0v(mag, state);
    break;

   case 12:
    perturbSimJointPrimitiveState_1_0(mag, state);
    break;

   case 13:
    perturbSimJointPrimitiveState_1_0v(mag, state);
    break;

   case 24:
    perturbSimJointPrimitiveState_2_0(mag, state);
    break;

   case 25:
    perturbSimJointPrimitiveState_2_0v(mag, state);
    break;

   case 36:
    perturbSimJointPrimitiveState_3_0(mag, state);
    break;

   case 37:
    perturbSimJointPrimitiveState_3_0v(mag, state);
    break;

   case 38:
    perturbSimJointPrimitiveState_3_1(mag, state);
    break;

   case 39:
    perturbSimJointPrimitiveState_3_1v(mag, state);
    break;

   case 48:
    perturbSimJointPrimitiveState_4_0(mag, state);
    break;

   case 49:
    perturbSimJointPrimitiveState_4_0v(mag, state);
    break;

   case 60:
    perturbSimJointPrimitiveState_5_0(mag, state);
    break;

   case 61:
    perturbSimJointPrimitiveState_5_0v(mag, state);
    break;

   case 72:
    perturbSimJointPrimitiveState_6_0(mag, state);
    break;

   case 73:
    perturbSimJointPrimitiveState_6_0v(mag, state);
    break;

   case 74:
    perturbSimJointPrimitiveState_6_1(mag, state);
    break;

   case 75:
    perturbSimJointPrimitiveState_6_1v(mag, state);
    break;

   case 84:
    perturbSimJointPrimitiveState_7_0(mag, state);
    break;

   case 85:
    perturbSimJointPrimitiveState_7_0v(mag, state);
    break;

   case 96:
    perturbSimJointPrimitiveState_8_0(mag, state);
    break;

   case 97:
    perturbSimJointPrimitiveState_8_0v(mag, state);
    break;

   case 108:
    perturbSimJointPrimitiveState_9_0(mag, state);
    break;

   case 109:
    perturbSimJointPrimitiveState_9_0v(mag, state);
    break;

   case 110:
    perturbSimJointPrimitiveState_9_1(mag, state);
    break;

   case 111:
    perturbSimJointPrimitiveState_9_1v(mag, state);
    break;

   case 120:
    perturbSimJointPrimitiveState_10_0(mag, state);
    break;

   case 121:
    perturbSimJointPrimitiveState_10_0v(mag, state);
    break;
  }
}

void Wind_Turbine_31c4daf8_1_perturbFlexibleBodyState(const void *mech, size_t
  stageIdx, double mag, boolean_T doPerturbVelocity, double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch (stageIdx * 2 + (doPerturbVelocity ? 1 : 0))
  {
  }
}

void Wind_Turbine_31c4daf8_1_constructStateVector(const void *mech, const double
  *solverState, const double *u, const double *uDot, double *discreteState,
  double *fullState)
{
  (void) mech;
  (void) u;
  (void) uDot;
  (void) discreteState;
  fullState[0] = solverState[0];
  fullState[1] = solverState[1];
  fullState[2] = solverState[2];
  fullState[3] = solverState[3];
  fullState[4] = solverState[4];
  fullState[5] = solverState[5];
  fullState[6] = solverState[6];
  fullState[7] = solverState[7];
  fullState[8] = solverState[8];
  fullState[9] = solverState[9];
  fullState[10] = solverState[10];
  fullState[11] = solverState[11];
  fullState[12] = solverState[12];
  fullState[13] = solverState[13];
  fullState[14] = solverState[14];
  fullState[15] = solverState[15];
  fullState[16] = solverState[16];
  fullState[17] = solverState[17];
  fullState[18] = solverState[18];
  fullState[19] = solverState[19];
  fullState[20] = solverState[20];
  fullState[21] = solverState[21];
  fullState[22] = solverState[22];
  fullState[23] = solverState[23];
  fullState[24] = solverState[24];
  fullState[25] = solverState[25];
  fullState[26] = solverState[26];
  fullState[27] = solverState[27];
}

void Wind_Turbine_31c4daf8_1_extractSolverStateVector(const void *mech, const
  double *fullState, double *solverState)
{
  (void) mech;
  solverState[0] = fullState[0];
  solverState[1] = fullState[1];
  solverState[2] = fullState[2];
  solverState[3] = fullState[3];
  solverState[4] = fullState[4];
  solverState[5] = fullState[5];
  solverState[6] = fullState[6];
  solverState[7] = fullState[7];
  solverState[8] = fullState[8];
  solverState[9] = fullState[9];
  solverState[10] = fullState[10];
  solverState[11] = fullState[11];
  solverState[12] = fullState[12];
  solverState[13] = fullState[13];
  solverState[14] = fullState[14];
  solverState[15] = fullState[15];
  solverState[16] = fullState[16];
  solverState[17] = fullState[17];
  solverState[18] = fullState[18];
  solverState[19] = fullState[19];
  solverState[20] = fullState[20];
  solverState[21] = fullState[21];
  solverState[22] = fullState[22];
  solverState[23] = fullState[23];
  solverState[24] = fullState[24];
  solverState[25] = fullState[25];
  solverState[26] = fullState[26];
  solverState[27] = fullState[27];
}

boolean_T Wind_Turbine_31c4daf8_1_isPositionViolation(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  int ii[1];
  double xx[76];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  xx[0] = - 0.3535533854521294;
  xx[1] = - 0.6123723078740739;
  xx[2] = 0.3535531589048324;
  xx[3] = - 0.6123727002510262;
  xx[4] = 0.5;
  xx[5] = xx[4] * state[12];
  xx[6] = 6.407547900609781e-7;
  xx[7] = sin(xx[5]);
  xx[8] = 3.867410137128462e-7;
  xx[9] = cos(xx[5]);
  xx[10] = - (xx[6] * xx[7]);
  xx[11] = xx[8] * xx[7];
  xx[12] = xx[7];
  pm_math_Quaternion_compose_ra(xx + 0, xx + 9, xx + 13);
  xx[0] = 1.259165044613055e-5;
  xx[1] = xx[4] * state[14];
  xx[2] = cos(xx[1]);
  xx[3] = xx[4] * state[15];
  xx[5] = 1.011242923582525e-11;
  xx[7] = sin(xx[3]);
  xx[9] = 3.867410137194052e-7;
  xx[17] = cos(xx[3]);
  xx[18] = xx[5] * xx[7];
  xx[19] = - xx[7];
  xx[20] = xx[9] * xx[7];
  xx[21] = - 0.9999999999999301;
  xx[22] = 1.933705068580629e-7;
  xx[23] = 3.203773950294993e-7;
  xx[24] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 17, xx + 21, xx + 25);
  xx[3] = sin(xx[1]);
  xx[1] = xx[2] * xx[25] + xx[26] * xx[3];
  xx[7] = 0.8;
  xx[10] = xx[2] * xx[27] - xx[28] * xx[3];
  xx[11] = xx[7] * xx[10];
  xx[12] = xx[2] * xx[28] + xx[27] * xx[3];
  xx[17] = xx[2] * xx[26] - xx[25] * xx[3];
  xx[2] = xx[7] * xx[17];
  xx[3] = 2.0;
  xx[18] = 0.4999921507519162;
  xx[19] = 20.89999033362555;
  xx[25] = xx[0] - (xx[1] * xx[11] + xx[12] * xx[2]) * xx[3];
  xx[26] = xx[18] + xx[3] * (xx[1] * xx[2] - xx[12] * xx[11]);
  xx[27] = (xx[2] * xx[17] + xx[11] * xx[10]) * xx[3] - xx[19];
  pm_math_Quaternion_xform_ra(xx + 13, xx + 25, xx + 28);
  xx[25] = 1.252758002333907e-5;
  xx[26] = - 7.810573945025114e-6;
  xx[27] = - 19.99999014025506;
  pm_math_Quaternion_xform_ra(xx + 13, xx + 25, xx + 31);
  xx[34] = xx[1];
  xx[35] = xx[17];
  xx[36] = xx[10];
  xx[37] = xx[12];
  pm_math_Quaternion_compose_ra(xx + 13, xx + 34, xx + 38);
  xx[1] = 1.6;
  xx[2] = xx[1] + state[18];
  xx[10] = xx[40] * xx[2];
  xx[11] = xx[39] * xx[2];
  xx[12] = xx[7] * xx[40];
  xx[13] = xx[7] * xx[39];
  xx[14] = 3.2;
  xx[34] = 0.3535536222753973;
  xx[35] = - 0.6123721711368582;
  xx[36] = - 0.3535533957406371;
  xx[37] = - 0.6123725635210486;
  xx[15] = xx[4] * state[20];
  xx[16] = sin(xx[15]);
  xx[42] = cos(xx[15]);
  xx[43] = - (xx[6] * xx[16]);
  xx[44] = xx[8] * xx[16];
  xx[45] = xx[16];
  pm_math_Quaternion_compose_ra(xx + 34, xx + 42, xx + 46);
  xx[15] = xx[4] * state[22];
  xx[16] = cos(xx[15]);
  xx[17] = xx[4] * state[23];
  xx[20] = sin(xx[17]);
  xx[34] = cos(xx[17]);
  xx[35] = xx[5] * xx[20];
  xx[36] = - xx[20];
  xx[37] = xx[9] * xx[20];
  pm_math_Quaternion_compose_ra(xx + 34, xx + 21, xx + 42);
  xx[17] = sin(xx[15]);
  xx[15] = xx[16] * xx[42] + xx[43] * xx[17];
  xx[20] = xx[16] * xx[44] - xx[45] * xx[17];
  xx[34] = xx[7] * xx[20];
  xx[35] = xx[16] * xx[45] + xx[44] * xx[17];
  xx[36] = xx[16] * xx[43] - xx[42] * xx[17];
  xx[16] = xx[7] * xx[36];
  xx[42] = xx[0] - (xx[15] * xx[34] + xx[35] * xx[16]) * xx[3];
  xx[43] = xx[18] + xx[3] * (xx[15] * xx[16] - xx[35] * xx[34]);
  xx[44] = (xx[16] * xx[36] + xx[34] * xx[20]) * xx[3] - xx[19];
  pm_math_Quaternion_xform_ra(xx + 46, xx + 42, xx + 50);
  pm_math_Quaternion_xform_ra(xx + 46, xx + 25, xx + 42);
  xx[53] = xx[15];
  xx[54] = xx[36];
  xx[55] = xx[20];
  xx[56] = xx[35];
  pm_math_Quaternion_compose_ra(xx + 46, xx + 53, xx + 34);
  xx[15] = xx[1] + state[26];
  xx[16] = xx[36] * xx[15];
  xx[17] = xx[35] * xx[15];
  xx[20] = xx[7] * xx[36];
  xx[45] = xx[7] * xx[35];
  xx[46] = - 0.7071070077275268;
  xx[47] = - 1.367372157708226e-7;
  xx[48] = 0.7071065546454696;
  xx[49] = - 1.367299775908286e-7;
  xx[53] = xx[4] * state[4];
  xx[54] = sin(xx[53]);
  xx[55] = cos(xx[53]);
  xx[56] = - (xx[6] * xx[54]);
  xx[57] = xx[8] * xx[54];
  xx[58] = xx[54];
  pm_math_Quaternion_compose_ra(xx + 46, xx + 55, xx + 59);
  xx[6] = xx[4] * state[6];
  xx[8] = cos(xx[6]);
  xx[46] = xx[4] * state[7];
  xx[47] = sin(xx[46]);
  xx[53] = cos(xx[46]);
  xx[54] = xx[5] * xx[47];
  xx[55] = - xx[47];
  xx[56] = xx[9] * xx[47];
  pm_math_Quaternion_compose_ra(xx + 53, xx + 21, xx + 46);
  xx[5] = sin(xx[6]);
  xx[6] = xx[8] * xx[46] + xx[47] * xx[5];
  xx[9] = xx[8] * xx[48] - xx[49] * xx[5];
  xx[21] = xx[7] * xx[9];
  xx[22] = xx[8] * xx[49] + xx[48] * xx[5];
  xx[23] = xx[8] * xx[47] - xx[46] * xx[5];
  xx[5] = xx[7] * xx[23];
  xx[46] = xx[0] - (xx[6] * xx[21] + xx[22] * xx[5]) * xx[3];
  xx[47] = xx[18] + xx[3] * (xx[6] * xx[5] - xx[22] * xx[21]);
  xx[48] = (xx[5] * xx[23] + xx[21] * xx[9]) * xx[3] - xx[19];
  pm_math_Quaternion_xform_ra(xx + 59, xx + 46, xx + 53);
  pm_math_Quaternion_xform_ra(xx + 59, xx + 25, xx + 46);
  xx[24] = xx[6];
  xx[25] = xx[23];
  xx[26] = xx[9];
  xx[27] = xx[22];
  pm_math_Quaternion_compose_ra(xx + 59, xx + 24, xx + 63);
  xx[0] = xx[1] + state[10];
  xx[1] = xx[65] * xx[0];
  xx[5] = xx[64] * xx[0];
  xx[6] = xx[7] * xx[65];
  xx[8] = xx[7] * xx[64];
  xx[67] = fabs(- (0.4830127018922199 + xx[28] - xx[31] - (xx[38] * xx[10] + xx
    [41] * xx[11]) * xx[3] - (xx[38] * xx[12] + xx[41] * xx[13]) * xx[3]));
  xx[68] = fabs(- (0.1633974596215566 + xx[3] * (xx[38] * xx[13] - xx[41] * xx
    [12]) + xx[3] * (xx[38] * xx[11] - xx[41] * xx[10]) + xx[29] - xx[32]));
  xx[69] = fabs(xx[14] - (xx[30] - xx[33] - xx[2] + (xx[39] * xx[11] + xx[40] *
    xx[10]) * xx[3] + (xx[39] * xx[13] + xx[40] * xx[12]) * xx[3]));
  xx[70] = fabs(0.3830127018922198 - (xx[50] - xx[42] - (xx[34] * xx[16] + xx[37]
    * xx[17]) * xx[3] - (xx[34] * xx[20] + xx[37] * xx[45]) * xx[3]));
  xx[71] = fabs(- (0.3366025403784447 + xx[3] * (xx[34] * xx[45] - xx[37] * xx
    [20]) + xx[3] * (xx[34] * xx[17] - xx[37] * xx[16]) + xx[51] - xx[43]));
  xx[72] = fabs(xx[14] - (xx[52] - xx[44] - xx[15] + (xx[35] * xx[17] + xx[36] *
    xx[16]) * xx[3] + (xx[35] * xx[45] + xx[36] * xx[20]) * xx[3]));
  xx[73] = fabs(0.1000000000000001 - (xx[53] - xx[46] - (xx[63] * xx[1] + xx[66]
    * xx[5]) * xx[3] - (xx[63] * xx[6] + xx[66] * xx[8]) * xx[3]));
  xx[74] = fabs(xx[4] - (xx[3] * (xx[63] * xx[8] - xx[66] * xx[6]) + xx[3] *
    (xx[63] * xx[5] - xx[66] * xx[1]) + xx[54] - xx[47]));
  xx[75] = fabs(xx[14] - (xx[55] - xx[48] - xx[0] + (xx[64] * xx[5] + xx[65] *
    xx[1]) * xx[3] + (xx[64] * xx[8] + xx[65] * xx[6]) * xx[3]));
  ii[0] = 67;

  {
    int ll;
    for (ll = 68; ll < 76; ++ll)
      if (xx[ll] > xx[ii[0]])
        ii[0] = ll;
  }

  ii[0] -= 67;
  xx[0] = xx[67 + (ii[0])];
  return xx[0] > 1.0e-9;
}

boolean_T Wind_Turbine_31c4daf8_1_isVelocityViolation(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  int ii[1];
  double xx[90];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  xx[0] = - 0.3535533854521294;
  xx[1] = - 0.6123723078740739;
  xx[2] = 0.3535531589048324;
  xx[3] = - 0.6123727002510262;
  xx[4] = 0.5;
  xx[5] = xx[4] * state[12];
  xx[6] = 6.407547900609781e-7;
  xx[7] = sin(xx[5]);
  xx[8] = 3.867410137128462e-7;
  xx[9] = cos(xx[5]);
  xx[10] = - (xx[6] * xx[7]);
  xx[11] = xx[8] * xx[7];
  xx[12] = xx[7];
  pm_math_Quaternion_compose_ra(xx + 0, xx + 9, xx + 13);
  xx[0] = xx[4] * state[14];
  xx[1] = cos(xx[0]);
  xx[2] = xx[4] * state[15];
  xx[3] = 1.011242923582525e-11;
  xx[5] = sin(xx[2]);
  xx[7] = 3.867410137194052e-7;
  xx[9] = cos(xx[2]);
  xx[10] = xx[3] * xx[5];
  xx[11] = - xx[5];
  xx[12] = xx[7] * xx[5];
  xx[17] = - 0.9999999999999301;
  xx[18] = 1.933705068580629e-7;
  xx[19] = 3.203773950294993e-7;
  xx[20] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 9, xx + 17, xx + 21);
  xx[2] = sin(xx[0]);
  xx[0] = xx[1] * xx[21] + xx[22] * xx[2];
  xx[5] = xx[1] * xx[22] - xx[21] * xx[2];
  xx[9] = xx[1] * xx[23] - xx[24] * xx[2];
  xx[10] = xx[1] * xx[24] + xx[23] * xx[2];
  xx[21] = xx[0];
  xx[22] = xx[5];
  xx[23] = xx[9];
  xx[24] = xx[10];
  pm_math_Quaternion_compose_ra(xx + 13, xx + 21, xx + 25);
  xx[29] = - (xx[6] * state[13]);
  xx[30] = xx[8] * state[13];
  xx[31] = state[13];
  pm_math_Quaternion_inverseXform_ra(xx + 21, xx + 29, xx + 32);
  xx[1] = 2.0;
  xx[21] = xx[5];
  xx[22] = xx[9];
  xx[23] = xx[10];
  xx[2] = xx[7] * xx[9] + xx[10];
  xx[11] = xx[10] * xx[3] - xx[7] * xx[5];
  xx[35] = xx[2];
  xx[36] = xx[11];
  xx[37] = - (xx[5] + xx[3] * xx[9]);
  pm_math_Vector3_cross_ra(xx + 21, xx + 35, xx + 38);
  xx[12] = (xx[3] + xx[1] * (xx[38] - xx[2] * xx[0])) * state[17] - state[16];
  xx[2] = xx[32] + xx[12];
  xx[24] = 0.8;
  xx[35] = xx[2] * xx[24];
  xx[36] = xx[28] * xx[35];
  xx[32] = 1.0;
  xx[34] = (xx[1] * (xx[39] - xx[0] * xx[11]) - xx[32]) * state[17];
  xx[11] = xx[33] + xx[34];
  xx[33] = xx[11] * xx[24];
  xx[37] = xx[28] * xx[33];
  xx[38] = xx[26] * xx[35] + xx[27] * xx[33];
  xx[39] = - xx[36];
  xx[40] = - xx[37];
  xx[41] = xx[38];
  pm_math_Vector3_cross_ra(xx + 26, xx + 39, xx + 42);
  xx[39] = - 7.57574839337541e-8;
  xx[40] = 2.875094602052041e-7;
  xx[41] = - 1.597336708053589e-13;
  pm_math_Quaternion_xform_ra(xx + 13, xx + 39, xx + 45);
  xx[48] = xx[24] * xx[12];
  xx[12] = xx[10] * xx[48];
  xx[49] = xx[24] * xx[34];
  xx[34] = xx[10] * xx[49];
  xx[50] = xx[48] * xx[5] + xx[49] * xx[9];
  xx[51] = - xx[12];
  xx[52] = - xx[34];
  xx[53] = xx[50];
  pm_math_Vector3_cross_ra(xx + 21, xx + 51, xx + 54);
  xx[21] = 1.259165044613055e-5;
  xx[22] = xx[24] * xx[9];
  xx[23] = xx[24] * xx[5];
  xx[51] = 0.4999921507519162;
  xx[52] = 20.89999033362555;
  xx[57] = xx[21] - (xx[0] * xx[22] + xx[10] * xx[23]) * xx[1];
  xx[58] = xx[51] + xx[1] * (xx[0] * xx[23] - xx[10] * xx[22]);
  xx[59] = (xx[23] * xx[5] + xx[22] * xx[9]) * xx[1] - xx[52];
  pm_math_Vector3_cross_ra(xx + 29, xx + 57, xx + 60);
  xx[29] = (xx[54] - xx[0] * xx[12]) * xx[1] - xx[49] + xx[60];
  xx[30] = (xx[55] - xx[0] * xx[34]) * xx[1] + xx[48] + xx[61];
  xx[31] = xx[1] * (xx[56] + xx[0] * xx[50]) + xx[62];
  pm_math_Quaternion_xform_ra(xx + 13, xx + 29, xx + 48);
  xx[0] = 1.6;
  xx[5] = xx[0] + state[18];
  xx[12] = - (xx[11] * xx[5]);
  xx[13] = xx[2] * xx[5];
  xx[14] = - state[19];
  pm_math_Quaternion_xform_ra(xx + 25, xx + 12, xx + 9);
  xx[12] = 0.3535536222753973;
  xx[13] = - 0.6123721711368582;
  xx[14] = - 0.3535533957406371;
  xx[15] = - 0.6123725635210486;
  xx[2] = xx[4] * state[20];
  xx[5] = sin(xx[2]);
  xx[26] = cos(xx[2]);
  xx[27] = - (xx[6] * xx[5]);
  xx[28] = xx[8] * xx[5];
  xx[29] = xx[5];
  pm_math_Quaternion_compose_ra(xx + 12, xx + 26, xx + 53);
  xx[2] = xx[4] * state[22];
  xx[5] = cos(xx[2]);
  xx[12] = xx[4] * state[23];
  xx[13] = sin(xx[12]);
  xx[26] = cos(xx[12]);
  xx[27] = xx[3] * xx[13];
  xx[28] = - xx[13];
  xx[29] = xx[7] * xx[13];
  pm_math_Quaternion_compose_ra(xx + 26, xx + 17, xx + 12);
  xx[16] = sin(xx[2]);
  xx[2] = xx[5] * xx[12] + xx[13] * xx[16];
  xx[22] = xx[5] * xx[13] - xx[12] * xx[16];
  xx[12] = xx[5] * xx[14] - xx[15] * xx[16];
  xx[13] = xx[5] * xx[15] + xx[14] * xx[16];
  xx[26] = xx[2];
  xx[27] = xx[22];
  xx[28] = xx[12];
  xx[29] = xx[13];
  pm_math_Quaternion_compose_ra(xx + 53, xx + 26, xx + 57);
  xx[14] = - (xx[6] * state[21]);
  xx[15] = xx[8] * state[21];
  xx[16] = state[21];
  pm_math_Quaternion_inverseXform_ra(xx + 26, xx + 14, xx + 61);
  xx[26] = xx[22];
  xx[27] = xx[12];
  xx[28] = xx[13];
  xx[5] = xx[7] * xx[12] + xx[13];
  xx[23] = xx[13] * xx[3] - xx[7] * xx[22];
  xx[29] = xx[5];
  xx[30] = xx[23];
  xx[31] = - (xx[22] + xx[3] * xx[12]);
  pm_math_Vector3_cross_ra(xx + 26, xx + 29, xx + 64);
  xx[29] = (xx[3] + xx[1] * (xx[64] - xx[5] * xx[2])) * state[25] - state[24];
  xx[5] = xx[61] + xx[29];
  xx[30] = xx[5] * xx[24];
  xx[31] = xx[60] * xx[30];
  xx[34] = (xx[1] * (xx[65] - xx[2] * xx[23]) - xx[32]) * state[25];
  xx[23] = xx[62] + xx[34];
  xx[61] = xx[23] * xx[24];
  xx[62] = xx[60] * xx[61];
  xx[63] = xx[58] * xx[30] + xx[59] * xx[61];
  xx[64] = - xx[31];
  xx[65] = - xx[62];
  xx[66] = xx[63];
  pm_math_Vector3_cross_ra(xx + 58, xx + 64, xx + 67);
  pm_math_Quaternion_xform_ra(xx + 53, xx + 39, xx + 64);
  xx[70] = xx[24] * xx[29];
  xx[29] = xx[13] * xx[70];
  xx[71] = xx[24] * xx[34];
  xx[34] = xx[13] * xx[71];
  xx[72] = xx[70] * xx[22] + xx[71] * xx[12];
  xx[73] = - xx[29];
  xx[74] = - xx[34];
  xx[75] = xx[72];
  pm_math_Vector3_cross_ra(xx + 26, xx + 73, xx + 76);
  xx[26] = xx[24] * xx[12];
  xx[27] = xx[24] * xx[22];
  xx[73] = xx[21] - (xx[2] * xx[26] + xx[13] * xx[27]) * xx[1];
  xx[74] = xx[51] + xx[1] * (xx[2] * xx[27] - xx[13] * xx[26]);
  xx[75] = (xx[27] * xx[22] + xx[26] * xx[12]) * xx[1] - xx[52];
  pm_math_Vector3_cross_ra(xx + 14, xx + 73, xx + 26);
  xx[12] = (xx[76] - xx[2] * xx[29]) * xx[1] - xx[71] + xx[26];
  xx[13] = (xx[77] - xx[2] * xx[34]) * xx[1] + xx[70] + xx[27];
  xx[14] = xx[1] * (xx[78] + xx[2] * xx[72]) + xx[28];
  pm_math_Quaternion_xform_ra(xx + 53, xx + 12, xx + 26);
  xx[2] = xx[0] + state[26];
  xx[12] = - (xx[23] * xx[2]);
  xx[13] = xx[5] * xx[2];
  xx[14] = - state[27];
  pm_math_Quaternion_xform_ra(xx + 57, xx + 12, xx + 53);
  xx[12] = - 0.7071070077275268;
  xx[13] = - 1.367372157708226e-7;
  xx[14] = 0.7071065546454696;
  xx[15] = - 1.367299775908286e-7;
  xx[2] = xx[4] * state[4];
  xx[5] = sin(xx[2]);
  xx[70] = cos(xx[2]);
  xx[71] = - (xx[6] * xx[5]);
  xx[72] = xx[8] * xx[5];
  xx[73] = xx[5];
  pm_math_Quaternion_compose_ra(xx + 12, xx + 70, xx + 74);
  xx[2] = xx[4] * state[6];
  xx[5] = cos(xx[2]);
  xx[12] = xx[4] * state[7];
  xx[4] = sin(xx[12]);
  xx[13] = cos(xx[12]);
  xx[14] = xx[3] * xx[4];
  xx[15] = - xx[4];
  xx[16] = xx[7] * xx[4];
  pm_math_Quaternion_compose_ra(xx + 13, xx + 17, xx + 70);
  xx[4] = sin(xx[2]);
  xx[2] = xx[5] * xx[70] + xx[71] * xx[4];
  xx[12] = xx[5] * xx[71] - xx[70] * xx[4];
  xx[13] = xx[5] * xx[72] - xx[73] * xx[4];
  xx[14] = xx[5] * xx[73] + xx[72] * xx[4];
  xx[15] = xx[2];
  xx[16] = xx[12];
  xx[17] = xx[13];
  xx[18] = xx[14];
  pm_math_Quaternion_compose_ra(xx + 74, xx + 15, xx + 70);
  xx[58] = - (xx[6] * state[5]);
  xx[59] = xx[8] * state[5];
  xx[60] = state[5];
  pm_math_Quaternion_inverseXform_ra(xx + 15, xx + 58, xx + 4);
  xx[8] = xx[7] * xx[13] + xx[14];
  xx[15] = xx[14] * xx[3] - xx[7] * xx[12];
  xx[16] = xx[8];
  xx[17] = xx[15];
  xx[18] = - (xx[12] + xx[3] * xx[13]);
  pm_math_Vector3_cross_ra(xx + 12, xx + 16, xx + 78);
  xx[7] = (xx[3] + xx[1] * (xx[78] - xx[8] * xx[2])) * state[9] - state[8];
  xx[3] = xx[4] + xx[7];
  xx[8] = xx[3] * xx[24];
  xx[16] = xx[73] * xx[8];
  xx[4] = (xx[1] * (xx[79] - xx[2] * xx[15]) - xx[32]) * state[9];
  xx[6] = xx[5] + xx[4];
  xx[5] = xx[6] * xx[24];
  xx[15] = xx[73] * xx[5];
  xx[17] = xx[71] * xx[8] + xx[72] * xx[5];
  xx[18] = - xx[16];
  xx[19] = - xx[15];
  xx[20] = xx[17];
  pm_math_Vector3_cross_ra(xx + 71, xx + 18, xx + 78);
  pm_math_Quaternion_xform_ra(xx + 74, xx + 39, xx + 18);
  xx[22] = xx[24] * xx[7];
  xx[7] = xx[14] * xx[22];
  xx[23] = xx[24] * xx[4];
  xx[4] = xx[14] * xx[23];
  xx[29] = xx[22] * xx[12] + xx[23] * xx[13];
  xx[39] = - xx[7];
  xx[40] = - xx[4];
  xx[41] = xx[29];
  pm_math_Vector3_cross_ra(xx + 12, xx + 39, xx + 81);
  xx[32] = xx[24] * xx[13];
  xx[34] = xx[24] * xx[12];
  xx[39] = xx[21] - (xx[2] * xx[32] + xx[14] * xx[34]) * xx[1];
  xx[40] = xx[51] + xx[1] * (xx[2] * xx[34] - xx[14] * xx[32]);
  xx[41] = (xx[34] * xx[12] + xx[32] * xx[13]) * xx[1] - xx[52];
  pm_math_Vector3_cross_ra(xx + 58, xx + 39, xx + 12);
  xx[39] = (xx[81] - xx[2] * xx[7]) * xx[1] - xx[23] + xx[12];
  xx[40] = (xx[82] - xx[2] * xx[4]) * xx[1] + xx[22] + xx[13];
  xx[41] = xx[1] * (xx[83] + xx[2] * xx[29]) + xx[14];
  pm_math_Quaternion_xform_ra(xx + 74, xx + 39, xx + 12);
  xx[2] = xx[0] + state[10];
  xx[21] = - (xx[6] * xx[2]);
  xx[22] = xx[3] * xx[2];
  xx[23] = - state[11];
  pm_math_Quaternion_xform_ra(xx + 70, xx + 21, xx + 2);
  xx[81] = fabs(- ((xx[42] - xx[25] * xx[36]) * xx[1] - xx[33] + xx[45] * state
                   [13] + xx[48] + xx[9]));
  xx[82] = fabs(- ((xx[43] - xx[25] * xx[37]) * xx[1] + xx[35] + xx[46] * state
                   [13] + xx[49] + xx[10]));
  xx[83] = fabs(- (xx[1] * (xx[44] + xx[38] * xx[25]) + xx[47] * state[13] + xx
                   [50] + xx[11]));
  xx[84] = fabs(- ((xx[67] - xx[57] * xx[31]) * xx[1] - xx[61] + xx[64] * state
                   [21] + xx[26] + xx[53]));
  xx[85] = fabs(- ((xx[68] - xx[57] * xx[62]) * xx[1] + xx[30] + xx[65] * state
                   [21] + xx[27] + xx[54]));
  xx[86] = fabs(- (xx[1] * (xx[69] + xx[63] * xx[57]) + xx[66] * state[21] + xx
                   [28] + xx[55]));
  xx[87] = fabs(- ((xx[78] - xx[70] * xx[16]) * xx[1] - xx[5] + xx[18] * state[5]
                   + xx[12] + xx[2]));
  xx[88] = fabs(- ((xx[79] - xx[70] * xx[15]) * xx[1] + xx[8] + xx[19] * state[5]
                   + xx[13] + xx[3]));
  xx[89] = fabs(- (xx[1] * (xx[80] + xx[17] * xx[70]) + xx[20] * state[5] + xx
                   [14] + xx[4]));
  ii[0] = 81;

  {
    int ll;
    for (ll = 82; ll < 90; ++ll)
      if (xx[ll] > xx[ii[0]])
        ii[0] = ll;
  }

  ii[0] -= 81;
  xx[0] = xx[81 + (ii[0])];
  return xx[0] > 1.0e-9;
}

PmfMessageId Wind_Turbine_31c4daf8_1_projectStateSim(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const int
  *modeVector, double *state, void *neDiagMgr0)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  int ii[9];
  double xx[476];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) neDiagMgr;
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
  xx[6] = xx[5] * state[14];
  xx[8] = cos(xx[6]);
  xx[10] = xx[5] * state[15];
  xx[11] = 1.011242923582525e-11;
  xx[12] = sin(xx[10]);
  xx[13] = 3.867410137194052e-7;
  xx[18] = cos(xx[10]);
  xx[19] = xx[11] * xx[12];
  xx[20] = - xx[12];
  xx[21] = xx[13] * xx[12];
  xx[22] = - 0.9999999999999301;
  xx[23] = 1.933705068580629e-7;
  xx[24] = 3.203773950294993e-7;
  xx[25] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 18, xx + 22, xx + 26);
  xx[10] = sin(xx[6]);
  xx[6] = xx[8] * xx[26] + xx[27] * xx[10];
  xx[12] = xx[8] * xx[27] - xx[26] * xx[10];
  xx[18] = xx[8] * xx[28] - xx[29] * xx[10];
  xx[19] = xx[8] * xx[29] + xx[28] * xx[10];
  xx[26] = xx[6];
  xx[27] = xx[12];
  xx[28] = xx[18];
  xx[29] = xx[19];
  pm_math_Quaternion_compose_ra(xx + 14, xx + 26, xx + 30);
  xx[8] = 2.0;
  xx[26] = xx[12];
  xx[27] = xx[18];
  xx[28] = xx[19];
  xx[10] = xx[18] - xx[19] * xx[9];
  xx[20] = xx[19] * xx[7] + xx[12];
  xx[34] = xx[10];
  xx[35] = - xx[20];
  xx[36] = xx[9] * xx[12] + xx[7] * xx[18];
  pm_math_Vector3_cross_ra(xx + 26, xx + 34, xx + 37);
  xx[21] = 0.8;
  xx[29] = (xx[8] * (xx[37] - xx[6] * xx[10]) - xx[7]) * xx[21];
  xx[10] = xx[33] * xx[29];
  xx[34] = (xx[9] + xx[8] * (xx[38] + xx[6] * xx[20])) * xx[21];
  xx[20] = xx[33] * xx[34];
  xx[35] = xx[31] * xx[29] + xx[32] * xx[34];
  xx[36] = - xx[10];
  xx[37] = - xx[20];
  xx[38] = xx[35];
  pm_math_Vector3_cross_ra(xx + 31, xx + 36, xx + 39);
  xx[36] = xx[21] * xx[12];
  xx[37] = xx[36] * xx[12];
  xx[38] = xx[21] * xx[18];
  xx[42] = (xx[37] + xx[38] * xx[18]) * xx[8] - xx[21];
  xx[43] = 1.6;
  xx[44] = xx[43] + state[18];
  xx[45] = xx[12] * xx[44];
  xx[46] = xx[45] * xx[12];
  xx[47] = xx[18] * xx[44];
  xx[48] = 20.09999033362554;
  xx[49] = xx[42] - xx[44] + (xx[46] + xx[47] * xx[18]) * xx[8] - xx[48];
  xx[50] = xx[6] * xx[45];
  xx[51] = xx[6] * xx[36];
  xx[52] = xx[8] * (xx[51] - xx[19] * xx[38]);
  xx[53] = 0.4999921507519162;
  xx[54] = xx[8] * (xx[50] - xx[19] * xx[47]) + xx[52] + xx[53];
  xx[55] = 1.259165044613055e-5;
  xx[56] = (xx[6] * xx[38] + xx[19] * xx[36]) * xx[8];
  xx[38] = xx[55] - ((xx[6] * xx[47] + xx[19] * xx[45]) * xx[8] + xx[56]);
  xx[57] = xx[49] * xx[9] - xx[54];
  xx[58] = xx[38] + xx[49] * xx[7];
  xx[59] = - (xx[54] * xx[7] + xx[38] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 57, xx + 60);
  xx[57] = - 7.57574839337541e-8;
  xx[58] = 2.875094602052041e-7;
  xx[59] = - 1.597336708053589e-13;
  pm_math_Quaternion_xform_ra(xx + 14, xx + 57, xx + 63);
  xx[38] = xx[21] * xx[33];
  xx[47] = xx[21] * xx[31];
  xx[49] = xx[19] * xx[44];
  xx[54] = xx[19] * xx[21];
  xx[66] = xx[8] * (xx[6] * xx[49] - xx[45] * xx[18]) + xx[8] * (xx[6] * xx[54]
    - xx[36] * xx[18]);
  xx[67] = (xx[19] * xx[49] + xx[46]) * xx[8] + (xx[19] * xx[54] + xx[37]) * xx
    [8] - xx[44] - xx[21];
  xx[68] = - ((xx[50] + xx[49] * xx[18]) * xx[8] + (xx[51] + xx[54] * xx[18]) *
              xx[8]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 66, xx + 49);
  xx[36] = xx[13] * xx[18] + xx[19];
  xx[37] = xx[19] * xx[11] - xx[13] * xx[12];
  xx[66] = xx[36];
  xx[67] = xx[37];
  xx[68] = - (xx[12] + xx[11] * xx[18]);
  pm_math_Vector3_cross_ra(xx + 26, xx + 66, xx + 69);
  xx[45] = xx[11] + xx[8] * (xx[69] - xx[36] * xx[6]);
  xx[36] = xx[45] * xx[21];
  xx[46] = xx[33] * xx[36];
  xx[54] = 1.0;
  xx[66] = xx[8] * (xx[70] - xx[6] * xx[37]) - xx[54];
  xx[37] = xx[66] * xx[21];
  xx[67] = xx[33] * xx[37];
  xx[68] = xx[31] * xx[36] + xx[32] * xx[37];
  xx[69] = - xx[46];
  xx[70] = - xx[67];
  xx[71] = xx[68];
  pm_math_Vector3_cross_ra(xx + 31, xx + 69, xx + 72);
  xx[69] = xx[45] * xx[44];
  xx[45] = xx[19] * xx[69];
  xx[70] = xx[66] * xx[44];
  xx[66] = xx[19] * xx[70];
  xx[71] = xx[69] * xx[12] + xx[70] * xx[18];
  xx[75] = - xx[45];
  xx[76] = - xx[66];
  xx[77] = xx[71];
  pm_math_Vector3_cross_ra(xx + 26, xx + 75, xx + 78);
  xx[75] = xx[19] * xx[36];
  xx[76] = xx[19] * xx[37];
  xx[19] = xx[36] * xx[12] + xx[37] * xx[18];
  xx[81] = - xx[75];
  xx[82] = - xx[76];
  xx[83] = xx[19];
  pm_math_Vector3_cross_ra(xx + 26, xx + 81, xx + 84);
  xx[26] = (xx[78] - xx[6] * xx[45]) * xx[8] - xx[70] + (xx[84] - xx[6] * xx[75])
    * xx[8] - xx[37];
  xx[27] = (xx[79] - xx[6] * xx[66]) * xx[8] + xx[69] + (xx[85] - xx[6] * xx[76])
    * xx[8] + xx[36];
  xx[28] = xx[8] * (xx[80] + xx[6] * xx[71]) + xx[8] * (xx[86] + xx[6] * xx[19]);
  pm_math_Quaternion_xform_ra(xx + 14, xx + 26, xx + 69);
  xx[6] = xx[31] * xx[47];
  xx[12] = xx[30] * xx[47];
  xx[75] = 0.3535536222753973;
  xx[76] = - 0.6123721711368582;
  xx[77] = - 0.3535533957406371;
  xx[78] = - 0.6123725635210486;
  xx[18] = xx[5] * state[20];
  xx[19] = sin(xx[18]);
  xx[79] = cos(xx[18]);
  xx[80] = - (xx[7] * xx[19]);
  xx[81] = xx[9] * xx[19];
  xx[82] = xx[19];
  pm_math_Quaternion_compose_ra(xx + 75, xx + 79, xx + 83);
  xx[18] = xx[5] * state[22];
  xx[19] = cos(xx[18]);
  xx[26] = xx[5] * state[23];
  xx[27] = sin(xx[26]);
  xx[79] = cos(xx[26]);
  xx[80] = xx[11] * xx[27];
  xx[81] = - xx[27];
  xx[82] = xx[13] * xx[27];
  pm_math_Quaternion_compose_ra(xx + 79, xx + 22, xx + 87);
  xx[26] = sin(xx[18]);
  xx[18] = xx[19] * xx[87] + xx[88] * xx[26];
  xx[27] = xx[19] * xx[88] - xx[87] * xx[26];
  xx[28] = xx[19] * xx[89] - xx[90] * xx[26];
  xx[45] = xx[19] * xx[90] + xx[89] * xx[26];
  xx[79] = xx[18];
  xx[80] = xx[27];
  xx[81] = xx[28];
  xx[82] = xx[45];
  pm_math_Quaternion_compose_ra(xx + 83, xx + 79, xx + 87);
  xx[79] = xx[27];
  xx[80] = xx[28];
  xx[81] = xx[45];
  xx[19] = xx[28] - xx[45] * xx[9];
  xx[26] = xx[45] * xx[7] + xx[27];
  xx[91] = xx[19];
  xx[92] = - xx[26];
  xx[93] = xx[9] * xx[27] + xx[7] * xx[28];
  pm_math_Vector3_cross_ra(xx + 79, xx + 91, xx + 94);
  xx[66] = (xx[8] * (xx[94] - xx[18] * xx[19]) - xx[7]) * xx[21];
  xx[19] = xx[90] * xx[66];
  xx[82] = (xx[9] + xx[8] * (xx[95] + xx[18] * xx[26])) * xx[21];
  xx[26] = xx[90] * xx[82];
  xx[91] = xx[88] * xx[66] + xx[89] * xx[82];
  xx[92] = - xx[19];
  xx[93] = - xx[26];
  xx[94] = xx[91];
  pm_math_Vector3_cross_ra(xx + 88, xx + 92, xx + 95);
  xx[92] = xx[21] * xx[27];
  xx[93] = xx[92] * xx[27];
  xx[94] = xx[21] * xx[28];
  xx[98] = (xx[93] + xx[94] * xx[28]) * xx[8] - xx[21];
  xx[99] = xx[43] + state[26];
  xx[100] = xx[27] * xx[99];
  xx[101] = xx[100] * xx[27];
  xx[102] = xx[28] * xx[99];
  xx[103] = xx[98] - xx[99] + (xx[101] + xx[102] * xx[28]) * xx[8] - xx[48];
  xx[104] = xx[18] * xx[100];
  xx[105] = xx[18] * xx[92];
  xx[106] = xx[8] * (xx[105] - xx[45] * xx[94]);
  xx[107] = xx[8] * (xx[104] - xx[45] * xx[102]) + xx[106] + xx[53];
  xx[108] = (xx[18] * xx[94] + xx[45] * xx[92]) * xx[8];
  xx[94] = xx[55] - ((xx[18] * xx[102] + xx[45] * xx[100]) * xx[8] + xx[108]);
  xx[109] = xx[103] * xx[9] - xx[107];
  xx[110] = xx[94] + xx[103] * xx[7];
  xx[111] = - (xx[107] * xx[7] + xx[94] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 83, xx + 109, xx + 112);
  pm_math_Quaternion_xform_ra(xx + 83, xx + 57, xx + 109);
  xx[94] = xx[21] * xx[90];
  xx[102] = xx[21] * xx[88];
  xx[103] = xx[45] * xx[99];
  xx[107] = xx[45] * xx[21];
  xx[115] = xx[8] * (xx[18] * xx[103] - xx[100] * xx[28]) + xx[8] * (xx[18] *
    xx[107] - xx[92] * xx[28]);
  xx[116] = (xx[45] * xx[103] + xx[101]) * xx[8] + (xx[45] * xx[107] + xx[93]) *
    xx[8] - xx[99] - xx[21];
  xx[117] = - ((xx[104] + xx[103] * xx[28]) * xx[8] + (xx[105] + xx[107] * xx[28])
               * xx[8]);
  pm_math_Quaternion_xform_ra(xx + 83, xx + 115, xx + 103);
  xx[92] = xx[13] * xx[28] + xx[45];
  xx[93] = xx[45] * xx[11] - xx[13] * xx[27];
  xx[115] = xx[92];
  xx[116] = xx[93];
  xx[117] = - (xx[27] + xx[11] * xx[28]);
  pm_math_Vector3_cross_ra(xx + 79, xx + 115, xx + 118);
  xx[100] = xx[11] + xx[8] * (xx[118] - xx[92] * xx[18]);
  xx[92] = xx[100] * xx[21];
  xx[101] = xx[90] * xx[92];
  xx[107] = xx[8] * (xx[119] - xx[18] * xx[93]) - xx[54];
  xx[93] = xx[107] * xx[21];
  xx[115] = xx[90] * xx[93];
  xx[116] = xx[88] * xx[92] + xx[89] * xx[93];
  xx[117] = - xx[101];
  xx[118] = - xx[115];
  xx[119] = xx[116];
  pm_math_Vector3_cross_ra(xx + 88, xx + 117, xx + 120);
  xx[117] = xx[100] * xx[99];
  xx[100] = xx[45] * xx[117];
  xx[118] = xx[107] * xx[99];
  xx[107] = xx[45] * xx[118];
  xx[119] = xx[117] * xx[27] + xx[118] * xx[28];
  xx[123] = - xx[100];
  xx[124] = - xx[107];
  xx[125] = xx[119];
  pm_math_Vector3_cross_ra(xx + 79, xx + 123, xx + 126);
  xx[123] = xx[45] * xx[92];
  xx[124] = xx[45] * xx[93];
  xx[45] = xx[92] * xx[27] + xx[93] * xx[28];
  xx[129] = - xx[123];
  xx[130] = - xx[124];
  xx[131] = xx[45];
  pm_math_Vector3_cross_ra(xx + 79, xx + 129, xx + 132);
  xx[79] = (xx[126] - xx[18] * xx[100]) * xx[8] - xx[118] + (xx[132] - xx[18] *
    xx[123]) * xx[8] - xx[93];
  xx[80] = (xx[127] - xx[18] * xx[107]) * xx[8] + xx[117] + (xx[133] - xx[18] *
    xx[124]) * xx[8] + xx[92];
  xx[81] = xx[8] * (xx[128] + xx[18] * xx[119]) + xx[8] * (xx[134] + xx[18] *
    xx[45]);
  pm_math_Quaternion_xform_ra(xx + 83, xx + 79, xx + 117);
  xx[18] = xx[88] * xx[102];
  xx[27] = xx[87] * xx[102];
  xx[123] = - 0.7071070077275268;
  xx[124] = - 1.367372157708226e-7;
  xx[125] = 0.7071065546454696;
  xx[126] = - 1.367299775908286e-7;
  xx[28] = xx[5] * state[4];
  xx[45] = sin(xx[28]);
  xx[127] = cos(xx[28]);
  xx[128] = - (xx[7] * xx[45]);
  xx[129] = xx[9] * xx[45];
  xx[130] = xx[45];
  pm_math_Quaternion_compose_ra(xx + 123, xx + 127, xx + 131);
  xx[28] = xx[5] * state[6];
  xx[45] = cos(xx[28]);
  xx[79] = xx[5] * state[7];
  xx[80] = sin(xx[79]);
  xx[127] = cos(xx[79]);
  xx[128] = xx[11] * xx[80];
  xx[129] = - xx[80];
  xx[130] = xx[13] * xx[80];
  pm_math_Quaternion_compose_ra(xx + 127, xx + 22, xx + 135);
  xx[79] = sin(xx[28]);
  xx[28] = xx[45] * xx[135] + xx[136] * xx[79];
  xx[80] = xx[45] * xx[136] - xx[135] * xx[79];
  xx[81] = xx[45] * xx[137] - xx[138] * xx[79];
  xx[100] = xx[45] * xx[138] + xx[137] * xx[79];
  xx[127] = xx[28];
  xx[128] = xx[80];
  xx[129] = xx[81];
  xx[130] = xx[100];
  pm_math_Quaternion_compose_ra(xx + 131, xx + 127, xx + 135);
  xx[127] = xx[80];
  xx[128] = xx[81];
  xx[129] = xx[100];
  xx[45] = xx[81] - xx[100] * xx[9];
  xx[79] = xx[100] * xx[7] + xx[80];
  xx[139] = xx[45];
  xx[140] = - xx[79];
  xx[141] = xx[9] * xx[80] + xx[7] * xx[81];
  pm_math_Vector3_cross_ra(xx + 127, xx + 139, xx + 142);
  xx[107] = (xx[8] * (xx[142] - xx[28] * xx[45]) - xx[7]) * xx[21];
  xx[45] = xx[138] * xx[107];
  xx[130] = (xx[9] + xx[8] * (xx[143] + xx[28] * xx[79])) * xx[21];
  xx[79] = xx[138] * xx[130];
  xx[139] = xx[136] * xx[107] + xx[137] * xx[130];
  xx[140] = - xx[45];
  xx[141] = - xx[79];
  xx[142] = xx[139];
  pm_math_Vector3_cross_ra(xx + 136, xx + 140, xx + 143);
  xx[140] = xx[21] * xx[80];
  xx[141] = xx[140] * xx[80];
  xx[142] = xx[21] * xx[81];
  xx[146] = (xx[141] + xx[142] * xx[81]) * xx[8] - xx[21];
  xx[147] = xx[43] + state[10];
  xx[148] = xx[80] * xx[147];
  xx[149] = xx[148] * xx[80];
  xx[150] = xx[81] * xx[147];
  xx[151] = xx[146] - xx[147] + (xx[149] + xx[150] * xx[81]) * xx[8] - xx[48];
  xx[152] = xx[28] * xx[148];
  xx[153] = xx[28] * xx[140];
  xx[154] = xx[8] * (xx[153] - xx[100] * xx[142]);
  xx[155] = xx[8] * (xx[152] - xx[100] * xx[150]) + xx[154] + xx[53];
  xx[156] = (xx[28] * xx[142] + xx[100] * xx[140]) * xx[8];
  xx[142] = xx[55] - ((xx[28] * xx[150] + xx[100] * xx[148]) * xx[8] + xx[156]);
  xx[157] = xx[151] * xx[9] - xx[155];
  xx[158] = xx[142] + xx[151] * xx[7];
  xx[159] = - (xx[155] * xx[7] + xx[142] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 131, xx + 157, xx + 160);
  pm_math_Quaternion_xform_ra(xx + 131, xx + 57, xx + 157);
  xx[142] = xx[21] * xx[138];
  xx[150] = xx[21] * xx[136];
  xx[151] = xx[100] * xx[147];
  xx[155] = xx[100] * xx[21];
  xx[163] = xx[8] * (xx[28] * xx[151] - xx[148] * xx[81]) + xx[8] * (xx[28] *
    xx[155] - xx[140] * xx[81]);
  xx[164] = (xx[100] * xx[151] + xx[149]) * xx[8] + (xx[100] * xx[155] + xx[141])
    * xx[8] - xx[147] - xx[21];
  xx[165] = - ((xx[152] + xx[151] * xx[81]) * xx[8] + (xx[153] + xx[155] * xx[81])
               * xx[8]);
  pm_math_Quaternion_xform_ra(xx + 131, xx + 163, xx + 151);
  xx[140] = xx[13] * xx[81] + xx[100];
  xx[141] = xx[100] * xx[11] - xx[13] * xx[80];
  xx[163] = xx[140];
  xx[164] = xx[141];
  xx[165] = - (xx[80] + xx[11] * xx[81]);
  pm_math_Vector3_cross_ra(xx + 127, xx + 163, xx + 166);
  xx[148] = xx[11] + xx[8] * (xx[166] - xx[140] * xx[28]);
  xx[140] = xx[148] * xx[21];
  xx[149] = xx[138] * xx[140];
  xx[155] = xx[8] * (xx[167] - xx[28] * xx[141]) - xx[54];
  xx[141] = xx[155] * xx[21];
  xx[163] = xx[138] * xx[141];
  xx[164] = xx[136] * xx[140] + xx[137] * xx[141];
  xx[165] = - xx[149];
  xx[166] = - xx[163];
  xx[167] = xx[164];
  pm_math_Vector3_cross_ra(xx + 136, xx + 165, xx + 168);
  xx[165] = xx[148] * xx[147];
  xx[148] = xx[100] * xx[165];
  xx[166] = xx[155] * xx[147];
  xx[155] = xx[100] * xx[166];
  xx[167] = xx[165] * xx[80] + xx[166] * xx[81];
  xx[171] = - xx[148];
  xx[172] = - xx[155];
  xx[173] = xx[167];
  pm_math_Vector3_cross_ra(xx + 127, xx + 171, xx + 174);
  xx[171] = xx[100] * xx[140];
  xx[172] = xx[100] * xx[141];
  xx[100] = xx[140] * xx[80] + xx[141] * xx[81];
  xx[177] = - xx[171];
  xx[178] = - xx[172];
  xx[179] = xx[100];
  pm_math_Vector3_cross_ra(xx + 127, xx + 177, xx + 180);
  xx[127] = (xx[174] - xx[28] * xx[148]) * xx[8] - xx[166] + (xx[180] - xx[28] *
    xx[171]) * xx[8] - xx[141];
  xx[128] = (xx[175] - xx[28] * xx[155]) * xx[8] + xx[165] + (xx[181] - xx[28] *
    xx[172]) * xx[8] + xx[140];
  xx[129] = xx[8] * (xx[176] + xx[28] * xx[167]) + xx[8] * (xx[182] + xx[28] *
    xx[100]);
  pm_math_Quaternion_xform_ra(xx + 131, xx + 127, xx + 165);
  xx[28] = xx[136] * xx[150];
  xx[80] = xx[135] * xx[150];
  xx[171] = xx[0];
  xx[172] = xx[0];
  xx[173] = xx[0];
  xx[174] = xx[0];
  xx[175] = xx[0];
  xx[176] = xx[0];
  xx[177] = - ((xx[39] - xx[30] * xx[10]) * xx[8] - xx[34] + xx[60] + xx[63]);
  xx[178] = - (xx[8] * (xx[30] * xx[38] - xx[32] * xx[47]) + xx[49]);
  xx[179] = - ((xx[72] - xx[30] * xx[46]) * xx[8] - xx[37] + xx[69]);
  xx[180] = (xx[30] * xx[32] + xx[31] * xx[33]) * xx[8];
  xx[181] = xx[0];
  xx[182] = xx[0];
  xx[183] = xx[0];
  xx[184] = xx[0];
  xx[185] = xx[0];
  xx[186] = xx[0];
  xx[187] = xx[0];
  xx[188] = xx[0];
  xx[189] = xx[0];
  xx[190] = xx[0];
  xx[191] = - ((xx[40] - xx[30] * xx[20]) * xx[8] + xx[29] + xx[61] + xx[64]);
  xx[192] = - (xx[50] + (xx[33] * xx[38] + xx[6]) * xx[8] - xx[21]);
  xx[193] = - ((xx[73] - xx[30] * xx[67]) * xx[8] + xx[36] + xx[70]);
  xx[194] = - (xx[8] * (xx[30] * xx[31] - xx[32] * xx[33]));
  xx[195] = xx[0];
  xx[196] = xx[0];
  xx[197] = xx[0];
  xx[198] = xx[0];
  xx[199] = xx[0];
  xx[200] = xx[0];
  xx[201] = xx[0];
  xx[202] = xx[0];
  xx[203] = xx[0];
  xx[204] = xx[0];
  xx[205] = - (xx[8] * (xx[41] + xx[35] * xx[30]) + xx[62] + xx[65]);
  xx[206] = - (xx[51] - (xx[12] + xx[32] * xx[38]) * xx[8]);
  xx[207] = - (xx[8] * (xx[74] + xx[68] * xx[30]) + xx[71]);
  xx[208] = - ((xx[31] * xx[31] + xx[32] * xx[32]) * xx[8] - xx[54]);
  xx[209] = xx[0];
  xx[210] = xx[0];
  xx[211] = xx[0];
  xx[212] = xx[0];
  xx[213] = xx[0];
  xx[214] = xx[0];
  xx[215] = xx[0];
  xx[216] = xx[0];
  xx[217] = xx[0];
  xx[218] = xx[0];
  xx[219] = xx[0];
  xx[220] = xx[0];
  xx[221] = xx[0];
  xx[222] = xx[0];
  xx[223] = - ((xx[95] - xx[87] * xx[19]) * xx[8] - xx[82] + xx[112] + xx[109]);
  xx[224] = - (xx[8] * (xx[87] * xx[94] - xx[89] * xx[102]) + xx[103]);
  xx[225] = - ((xx[120] - xx[87] * xx[101]) * xx[8] - xx[93] + xx[117]);
  xx[226] = (xx[87] * xx[89] + xx[88] * xx[90]) * xx[8];
  xx[227] = xx[0];
  xx[228] = xx[0];
  xx[229] = xx[0];
  xx[230] = xx[0];
  xx[231] = xx[0];
  xx[232] = xx[0];
  xx[233] = xx[0];
  xx[234] = xx[0];
  xx[235] = xx[0];
  xx[236] = xx[0];
  xx[237] = - ((xx[96] - xx[87] * xx[26]) * xx[8] + xx[66] + xx[113] + xx[110]);
  xx[238] = - (xx[104] + (xx[90] * xx[94] + xx[18]) * xx[8] - xx[21]);
  xx[239] = - ((xx[121] - xx[87] * xx[115]) * xx[8] + xx[92] + xx[118]);
  xx[240] = - (xx[8] * (xx[87] * xx[88] - xx[89] * xx[90]));
  xx[241] = xx[0];
  xx[242] = xx[0];
  xx[243] = xx[0];
  xx[244] = xx[0];
  xx[245] = xx[0];
  xx[246] = xx[0];
  xx[247] = xx[0];
  xx[248] = xx[0];
  xx[249] = xx[0];
  xx[250] = xx[0];
  xx[251] = - (xx[8] * (xx[97] + xx[91] * xx[87]) + xx[114] + xx[111]);
  xx[252] = - (xx[105] - (xx[27] + xx[89] * xx[94]) * xx[8]);
  xx[253] = - (xx[8] * (xx[122] + xx[116] * xx[87]) + xx[119]);
  xx[254] = - ((xx[88] * xx[88] + xx[89] * xx[89]) * xx[8] - xx[54]);
  xx[255] = xx[0];
  xx[256] = xx[0];
  xx[257] = - ((xx[143] - xx[135] * xx[45]) * xx[8] - xx[130] + xx[160] + xx[157]);
  xx[258] = - (xx[8] * (xx[135] * xx[142] - xx[137] * xx[150]) + xx[151]);
  xx[259] = - ((xx[168] - xx[135] * xx[149]) * xx[8] - xx[141] + xx[165]);
  xx[260] = (xx[135] * xx[137] + xx[136] * xx[138]) * xx[8];
  xx[261] = xx[0];
  xx[262] = xx[0];
  xx[263] = xx[0];
  xx[264] = xx[0];
  xx[265] = xx[0];
  xx[266] = xx[0];
  xx[267] = xx[0];
  xx[268] = xx[0];
  xx[269] = xx[0];
  xx[270] = xx[0];
  xx[271] = - ((xx[144] - xx[135] * xx[79]) * xx[8] + xx[107] + xx[161] + xx[158]);
  xx[272] = - (xx[152] + (xx[138] * xx[142] + xx[28]) * xx[8] - xx[21]);
  xx[273] = - ((xx[169] - xx[135] * xx[163]) * xx[8] + xx[140] + xx[166]);
  xx[274] = - (xx[8] * (xx[135] * xx[136] - xx[137] * xx[138]));
  xx[275] = xx[0];
  xx[276] = xx[0];
  xx[277] = xx[0];
  xx[278] = xx[0];
  xx[279] = xx[0];
  xx[280] = xx[0];
  xx[281] = xx[0];
  xx[282] = xx[0];
  xx[283] = xx[0];
  xx[284] = xx[0];
  xx[285] = - (xx[8] * (xx[145] + xx[139] * xx[135]) + xx[162] + xx[159]);
  xx[286] = - (xx[153] - (xx[80] + xx[137] * xx[142]) * xx[8]);
  xx[287] = - (xx[8] * (xx[170] + xx[164] * xx[135]) + xx[167]);
  xx[288] = - ((xx[136] * xx[136] + xx[137] * xx[137]) * xx[8] - xx[54]);
  xx[289] = xx[0];
  xx[290] = xx[0];
  xx[291] = xx[0];
  xx[292] = xx[0];
  xx[293] = xx[0];
  xx[294] = xx[0];
  xx[295] = xx[0];
  xx[296] = xx[0];
  xx[34] = xx[55] - xx[56];
  xx[35] = xx[53] + xx[52];
  xx[36] = xx[42] - xx[48];
  pm_math_Quaternion_xform_ra(xx + 14, xx + 34, xx + 37);
  xx[34] = 1.252758002333907e-5;
  xx[35] = - 7.810573945025114e-6;
  xx[36] = - 19.99999014025506;
  pm_math_Quaternion_xform_ra(xx + 14, xx + 34, xx + 40);
  xx[10] = xx[32] * xx[44];
  xx[14] = xx[31] * xx[44];
  xx[15] = xx[21] * xx[32];
  xx[16] = 0.4830127018922199;
  xx[17] = 0.1633974596215566;
  xx[19] = 3.2;
  xx[49] = xx[55] - xx[108];
  xx[50] = xx[53] + xx[106];
  xx[51] = xx[98] - xx[48];
  pm_math_Quaternion_xform_ra(xx + 83, xx + 49, xx + 60);
  pm_math_Quaternion_xform_ra(xx + 83, xx + 34, xx + 49);
  xx[20] = xx[89] * xx[99];
  xx[26] = xx[88] * xx[99];
  xx[29] = xx[21] * xx[89];
  xx[45] = 0.3830127018922198;
  xx[46] = 0.3366025403784447;
  xx[63] = xx[55] - xx[156];
  xx[64] = xx[53] + xx[154];
  xx[65] = xx[146] - xx[48];
  pm_math_Quaternion_xform_ra(xx + 131, xx + 63, xx + 66);
  pm_math_Quaternion_xform_ra(xx + 131, xx + 34, xx + 63);
  xx[52] = xx[137] * xx[147];
  xx[56] = xx[136] * xx[147];
  xx[69] = xx[21] * xx[137];
  xx[70] = 0.1000000000000001;
  xx[103] = xx[37] - xx[40] - (xx[30] * xx[10] + xx[33] * xx[14]) * xx[8] - (xx
    [30] * xx[15] + xx[33] * xx[47]) * xx[8] + xx[16];
  xx[104] = xx[8] * (xx[12] - xx[33] * xx[15]) + xx[8] * (xx[30] * xx[14] - xx
    [33] * xx[10]) + xx[38] - xx[41] + xx[17];
  xx[105] = xx[39] - xx[42] - xx[44] + (xx[31] * xx[14] + xx[32] * xx[10]) * xx
    [8] + (xx[6] + xx[32] * xx[15]) * xx[8] - xx[19];
  xx[106] = xx[60] - xx[49] - (xx[87] * xx[20] + xx[90] * xx[26]) * xx[8] - (xx
    [87] * xx[29] + xx[90] * xx[102]) * xx[8] - xx[45];
  xx[107] = xx[8] * (xx[27] - xx[90] * xx[29]) + xx[8] * (xx[87] * xx[26] - xx
    [90] * xx[20]) + xx[61] - xx[50] + xx[46];
  xx[108] = xx[62] - xx[51] - xx[99] + (xx[88] * xx[26] + xx[89] * xx[20]) * xx
    [8] + (xx[18] + xx[89] * xx[29]) * xx[8] - xx[19];
  xx[109] = xx[66] - xx[63] - (xx[135] * xx[52] + xx[138] * xx[56]) * xx[8] -
    (xx[135] * xx[69] + xx[138] * xx[150]) * xx[8] - xx[70];
  xx[110] = xx[8] * (xx[80] - xx[138] * xx[69]) + xx[8] * (xx[135] * xx[56] -
    xx[138] * xx[52]) + xx[67] - xx[64] - xx[5];
  xx[111] = xx[68] - xx[65] - xx[147] + (xx[136] * xx[56] + xx[137] * xx[52]) *
    xx[8] + (xx[28] + xx[137] * xx[69]) * xx[8] - xx[19];
  xx[6] = 1.0e-8;
  memcpy(xx + 297, xx + 171, 126 * sizeof(double));
  factorAndSolveWide(9, 14, xx + 297, xx + 60, xx + 93, ii + 0, xx + 103, xx[6],
                     xx + 79);
  xx[10] = state[12] + xx[85];
  xx[12] = xx[10] * xx[5];
  xx[14] = sin(xx[12]);
  xx[26] = cos(xx[12]);
  xx[27] = - (xx[7] * xx[14]);
  xx[28] = xx[9] * xx[14];
  xx[29] = xx[14];
  pm_math_Quaternion_compose_ra(xx + 1, xx + 26, xx + 30);
  xx[12] = state[14] + xx[86];
  xx[14] = xx[12] * xx[5];
  xx[15] = cos(xx[14]);
  xx[18] = state[15] + xx[87];
  xx[20] = xx[18] * xx[5];
  xx[26] = sin(xx[20]);
  xx[37] = cos(xx[20]);
  xx[38] = xx[11] * xx[26];
  xx[39] = - xx[26];
  xx[40] = xx[13] * xx[26];
  pm_math_Quaternion_compose_ra(xx + 37, xx + 22, xx + 26);
  xx[20] = sin(xx[14]);
  xx[14] = xx[15] * xx[26] + xx[27] * xx[20];
  xx[37] = xx[15] * xx[27] - xx[26] * xx[20];
  xx[26] = xx[15] * xx[28] - xx[29] * xx[20];
  xx[27] = xx[15] * xx[29] + xx[28] * xx[20];
  xx[38] = xx[14];
  xx[39] = xx[37];
  xx[40] = xx[26];
  xx[41] = xx[27];
  pm_math_Quaternion_compose_ra(xx + 30, xx + 38, xx + 49);
  xx[38] = xx[37];
  xx[39] = xx[26];
  xx[40] = xx[27];
  xx[15] = xx[26] - xx[27] * xx[9];
  xx[20] = xx[27] * xx[7] + xx[37];
  xx[60] = xx[15];
  xx[61] = - xx[20];
  xx[62] = xx[9] * xx[37] + xx[7] * xx[26];
  pm_math_Vector3_cross_ra(xx + 38, xx + 60, xx + 63);
  xx[28] = (xx[8] * (xx[63] - xx[14] * xx[15]) - xx[7]) * xx[21];
  xx[15] = xx[52] * xx[28];
  xx[29] = (xx[9] + xx[8] * (xx[64] + xx[14] * xx[20])) * xx[21];
  xx[20] = xx[52] * xx[29];
  xx[41] = xx[50] * xx[28] + xx[51] * xx[29];
  xx[60] = - xx[15];
  xx[61] = - xx[20];
  xx[62] = xx[41];
  pm_math_Vector3_cross_ra(xx + 50, xx + 60, xx + 63);
  xx[42] = xx[21] * xx[37];
  xx[44] = xx[42] * xx[37];
  xx[47] = xx[21] * xx[26];
  xx[56] = (xx[44] + xx[47] * xx[26]) * xx[8] - xx[21];
  xx[60] = state[18] + xx[88];
  xx[61] = xx[43] + xx[60];
  xx[62] = xx[37] * xx[61];
  xx[66] = xx[62] * xx[37];
  xx[67] = xx[26] * xx[61];
  xx[68] = xx[56] - xx[61] + (xx[66] + xx[67] * xx[26]) * xx[8] - xx[48];
  xx[69] = xx[14] * xx[62];
  xx[71] = xx[14] * xx[42];
  xx[72] = xx[8] * (xx[71] - xx[27] * xx[47]);
  xx[73] = xx[8] * (xx[69] - xx[27] * xx[67]) + xx[72] + xx[53];
  xx[74] = (xx[14] * xx[47] + xx[27] * xx[42]) * xx[8];
  xx[47] = xx[55] - ((xx[14] * xx[67] + xx[27] * xx[62]) * xx[8] + xx[74]);
  xx[93] = xx[68] * xx[9] - xx[73];
  xx[94] = xx[47] + xx[68] * xx[7];
  xx[95] = - (xx[73] * xx[7] + xx[47] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 93, xx + 96);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 57, xx + 93);
  xx[47] = xx[21] * xx[52];
  xx[67] = xx[21] * xx[50];
  xx[68] = xx[27] * xx[61];
  xx[73] = xx[27] * xx[21];
  xx[99] = xx[8] * (xx[14] * xx[68] - xx[62] * xx[26]) + xx[8] * (xx[14] * xx[73]
    - xx[42] * xx[26]);
  xx[100] = (xx[27] * xx[68] + xx[66]) * xx[8] + (xx[27] * xx[73] + xx[44]) *
    xx[8] - xx[61] - xx[21];
  xx[101] = - ((xx[69] + xx[68] * xx[26]) * xx[8] + (xx[71] + xx[73] * xx[26]) *
               xx[8]);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 99, xx + 102);
  xx[42] = xx[13] * xx[26] + xx[27];
  xx[44] = xx[27] * xx[11] - xx[13] * xx[37];
  xx[99] = xx[42];
  xx[100] = xx[44];
  xx[101] = - (xx[37] + xx[11] * xx[26]);
  pm_math_Vector3_cross_ra(xx + 38, xx + 99, xx + 105);
  xx[62] = xx[11] + xx[8] * (xx[105] - xx[42] * xx[14]);
  xx[42] = xx[62] * xx[21];
  xx[66] = xx[52] * xx[42];
  xx[68] = xx[8] * (xx[106] - xx[14] * xx[44]) - xx[54];
  xx[44] = xx[68] * xx[21];
  xx[69] = xx[52] * xx[44];
  xx[71] = xx[50] * xx[42] + xx[51] * xx[44];
  xx[99] = - xx[66];
  xx[100] = - xx[69];
  xx[101] = xx[71];
  pm_math_Vector3_cross_ra(xx + 50, xx + 99, xx + 105);
  xx[73] = xx[62] * xx[61];
  xx[62] = xx[27] * xx[73];
  xx[99] = xx[68] * xx[61];
  xx[68] = xx[27] * xx[99];
  xx[100] = xx[73] * xx[37] + xx[99] * xx[26];
  xx[108] = - xx[62];
  xx[109] = - xx[68];
  xx[110] = xx[100];
  pm_math_Vector3_cross_ra(xx + 38, xx + 108, xx + 111);
  xx[101] = xx[27] * xx[42];
  xx[108] = xx[27] * xx[44];
  xx[27] = xx[42] * xx[37] + xx[44] * xx[26];
  xx[114] = - xx[101];
  xx[115] = - xx[108];
  xx[116] = xx[27];
  pm_math_Vector3_cross_ra(xx + 38, xx + 114, xx + 117);
  xx[37] = (xx[111] - xx[14] * xx[62]) * xx[8] - xx[99] + (xx[117] - xx[14] *
    xx[101]) * xx[8] - xx[44];
  xx[38] = (xx[112] - xx[14] * xx[68]) * xx[8] + xx[73] + (xx[118] - xx[14] *
    xx[108]) * xx[8] + xx[42];
  xx[39] = xx[8] * (xx[113] + xx[14] * xx[100]) + xx[8] * (xx[119] + xx[14] *
    xx[27]);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 37, xx + 99);
  xx[14] = xx[50] * xx[67];
  xx[26] = xx[49] * xx[67];
  xx[27] = state[20] + xx[89];
  xx[37] = xx[27] * xx[5];
  xx[38] = sin(xx[37]);
  xx[108] = cos(xx[37]);
  xx[109] = - (xx[7] * xx[38]);
  xx[110] = xx[9] * xx[38];
  xx[111] = xx[38];
  pm_math_Quaternion_compose_ra(xx + 75, xx + 108, xx + 37);
  xx[62] = state[22] + xx[90];
  xx[68] = xx[62] * xx[5];
  xx[73] = cos(xx[68]);
  xx[108] = state[23] + xx[91];
  xx[109] = xx[108] * xx[5];
  xx[110] = sin(xx[109]);
  xx[111] = cos(xx[109]);
  xx[112] = xx[11] * xx[110];
  xx[113] = - xx[110];
  xx[114] = xx[13] * xx[110];
  pm_math_Quaternion_compose_ra(xx + 111, xx + 22, xx + 115);
  xx[109] = sin(xx[68]);
  xx[68] = xx[73] * xx[115] + xx[116] * xx[109];
  xx[110] = xx[73] * xx[116] - xx[115] * xx[109];
  xx[111] = xx[73] * xx[117] - xx[118] * xx[109];
  xx[112] = xx[73] * xx[118] + xx[117] * xx[109];
  xx[113] = xx[68];
  xx[114] = xx[110];
  xx[115] = xx[111];
  xx[116] = xx[112];
  pm_math_Quaternion_compose_ra(xx + 37, xx + 113, xx + 117);
  xx[73] = xx[111] - xx[112] * xx[9];
  xx[109] = xx[112] * xx[7] + xx[110];
  xx[113] = xx[73];
  xx[114] = - xx[109];
  xx[115] = xx[9] * xx[110] + xx[7] * xx[111];
  pm_math_Vector3_cross_ra(xx + 110, xx + 113, xx + 127);
  xx[113] = (xx[8] * (xx[127] - xx[68] * xx[73]) - xx[7]) * xx[21];
  xx[73] = xx[120] * xx[113];
  xx[114] = (xx[9] + xx[8] * (xx[128] + xx[68] * xx[109])) * xx[21];
  xx[109] = xx[120] * xx[114];
  xx[115] = xx[118] * xx[113] + xx[119] * xx[114];
  xx[127] = - xx[73];
  xx[128] = - xx[109];
  xx[129] = xx[115];
  pm_math_Vector3_cross_ra(xx + 118, xx + 127, xx + 130);
  xx[116] = xx[21] * xx[110];
  xx[121] = xx[116] * xx[110];
  xx[122] = xx[21] * xx[111];
  xx[127] = (xx[121] + xx[122] * xx[111]) * xx[8] - xx[21];
  xx[128] = state[26] + xx[92];
  xx[129] = xx[43] + xx[128];
  xx[133] = xx[110] * xx[129];
  xx[134] = xx[133] * xx[110];
  xx[135] = xx[111] * xx[129];
  xx[136] = xx[127] - xx[129] + (xx[134] + xx[135] * xx[111]) * xx[8] - xx[48];
  xx[137] = xx[68] * xx[133];
  xx[138] = xx[68] * xx[116];
  xx[139] = xx[8] * (xx[138] - xx[112] * xx[122]);
  xx[140] = xx[8] * (xx[137] - xx[112] * xx[135]) + xx[139] + xx[53];
  xx[141] = (xx[68] * xx[122] + xx[112] * xx[116]) * xx[8];
  xx[122] = xx[55] - ((xx[68] * xx[135] + xx[112] * xx[133]) * xx[8] + xx[141]);
  xx[142] = xx[136] * xx[9] - xx[140];
  xx[143] = xx[122] + xx[136] * xx[7];
  xx[144] = - (xx[140] * xx[7] + xx[122] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 37, xx + 142, xx + 145);
  pm_math_Quaternion_xform_ra(xx + 37, xx + 57, xx + 142);
  xx[122] = xx[21] * xx[120];
  xx[135] = xx[21] * xx[118];
  xx[136] = xx[112] * xx[129];
  xx[140] = xx[112] * xx[21];
  xx[148] = xx[8] * (xx[68] * xx[136] - xx[133] * xx[111]) + xx[8] * (xx[68] *
    xx[140] - xx[116] * xx[111]);
  xx[149] = (xx[112] * xx[136] + xx[134]) * xx[8] + (xx[112] * xx[140] + xx[121])
    * xx[8] - xx[129] - xx[21];
  xx[150] = - ((xx[137] + xx[136] * xx[111]) * xx[8] + (xx[138] + xx[140] * xx
    [111]) * xx[8]);
  pm_math_Quaternion_xform_ra(xx + 37, xx + 148, xx + 136);
  xx[116] = xx[13] * xx[111] + xx[112];
  xx[121] = xx[112] * xx[11] - xx[13] * xx[110];
  xx[148] = xx[116];
  xx[149] = xx[121];
  xx[150] = - (xx[110] + xx[11] * xx[111]);
  pm_math_Vector3_cross_ra(xx + 110, xx + 148, xx + 151);
  xx[133] = xx[11] + xx[8] * (xx[151] - xx[116] * xx[68]);
  xx[116] = xx[133] * xx[21];
  xx[134] = xx[120] * xx[116];
  xx[140] = xx[8] * (xx[152] - xx[68] * xx[121]) - xx[54];
  xx[121] = xx[140] * xx[21];
  xx[148] = xx[120] * xx[121];
  xx[149] = xx[118] * xx[116] + xx[119] * xx[121];
  xx[150] = - xx[134];
  xx[151] = - xx[148];
  xx[152] = xx[149];
  pm_math_Vector3_cross_ra(xx + 118, xx + 150, xx + 153);
  xx[150] = xx[133] * xx[129];
  xx[133] = xx[112] * xx[150];
  xx[151] = xx[140] * xx[129];
  xx[140] = xx[112] * xx[151];
  xx[152] = xx[150] * xx[110] + xx[151] * xx[111];
  xx[156] = - xx[133];
  xx[157] = - xx[140];
  xx[158] = xx[152];
  pm_math_Vector3_cross_ra(xx + 110, xx + 156, xx + 159);
  xx[156] = xx[112] * xx[116];
  xx[157] = xx[112] * xx[121];
  xx[158] = xx[116] * xx[110] + xx[121] * xx[111];
  xx[162] = - xx[156];
  xx[163] = - xx[157];
  xx[164] = xx[158];
  pm_math_Vector3_cross_ra(xx + 110, xx + 162, xx + 165);
  xx[110] = (xx[159] - xx[68] * xx[133]) * xx[8] - xx[151] + (xx[165] - xx[68] *
    xx[156]) * xx[8] - xx[121];
  xx[111] = (xx[160] - xx[68] * xx[140]) * xx[8] + xx[150] + (xx[166] - xx[68] *
    xx[157]) * xx[8] + xx[116];
  xx[112] = xx[8] * (xx[161] + xx[68] * xx[152]) + xx[8] * (xx[167] + xx[68] *
    xx[158]);
  pm_math_Quaternion_xform_ra(xx + 37, xx + 110, xx + 150);
  xx[68] = xx[118] * xx[135];
  xx[110] = xx[117] * xx[135];
  xx[111] = state[4] + xx[81];
  xx[112] = xx[111] * xx[5];
  xx[133] = sin(xx[112]);
  xx[156] = cos(xx[112]);
  xx[157] = - (xx[7] * xx[133]);
  xx[158] = xx[9] * xx[133];
  xx[159] = xx[133];
  pm_math_Quaternion_compose_ra(xx + 123, xx + 156, xx + 160);
  xx[112] = state[6] + xx[82];
  xx[133] = xx[112] * xx[5];
  xx[140] = cos(xx[133]);
  xx[156] = state[7] + xx[83];
  xx[157] = xx[156] * xx[5];
  xx[158] = sin(xx[157]);
  xx[164] = cos(xx[157]);
  xx[165] = xx[11] * xx[158];
  xx[166] = - xx[158];
  xx[167] = xx[13] * xx[158];
  pm_math_Quaternion_compose_ra(xx + 164, xx + 22, xx + 168);
  xx[157] = sin(xx[133]);
  xx[133] = xx[140] * xx[168] + xx[169] * xx[157];
  xx[158] = xx[140] * xx[169] - xx[168] * xx[157];
  xx[159] = xx[140] * xx[170] - xx[171] * xx[157];
  xx[164] = xx[140] * xx[171] + xx[170] * xx[157];
  xx[165] = xx[133];
  xx[166] = xx[158];
  xx[167] = xx[159];
  xx[168] = xx[164];
  pm_math_Quaternion_compose_ra(xx + 160, xx + 165, xx + 169);
  xx[165] = xx[158];
  xx[166] = xx[159];
  xx[167] = xx[164];
  xx[140] = xx[159] - xx[164] * xx[9];
  xx[157] = xx[164] * xx[7] + xx[158];
  xx[173] = xx[140];
  xx[174] = - xx[157];
  xx[175] = xx[9] * xx[158] + xx[7] * xx[159];
  pm_math_Vector3_cross_ra(xx + 165, xx + 173, xx + 176);
  xx[168] = (xx[8] * (xx[176] - xx[133] * xx[140]) - xx[7]) * xx[21];
  xx[140] = xx[172] * xx[168];
  xx[173] = (xx[9] + xx[8] * (xx[177] + xx[133] * xx[157])) * xx[21];
  xx[157] = xx[172] * xx[173];
  xx[174] = xx[170] * xx[168] + xx[171] * xx[173];
  xx[175] = - xx[140];
  xx[176] = - xx[157];
  xx[177] = xx[174];
  pm_math_Vector3_cross_ra(xx + 170, xx + 175, xx + 178);
  xx[175] = xx[21] * xx[158];
  xx[176] = xx[175] * xx[158];
  xx[177] = xx[21] * xx[159];
  xx[181] = (xx[176] + xx[177] * xx[159]) * xx[8] - xx[21];
  xx[182] = state[10] + xx[84];
  xx[183] = xx[43] + xx[182];
  xx[184] = xx[158] * xx[183];
  xx[185] = xx[184] * xx[158];
  xx[186] = xx[159] * xx[183];
  xx[187] = xx[181] - xx[183] + (xx[185] + xx[186] * xx[159]) * xx[8] - xx[48];
  xx[188] = xx[133] * xx[184];
  xx[189] = xx[133] * xx[175];
  xx[190] = xx[8] * (xx[189] - xx[164] * xx[177]);
  xx[191] = xx[8] * (xx[188] - xx[164] * xx[186]) + xx[190] + xx[53];
  xx[192] = (xx[133] * xx[177] + xx[164] * xx[175]) * xx[8];
  xx[177] = xx[55] - ((xx[133] * xx[186] + xx[164] * xx[184]) * xx[8] + xx[192]);
  xx[193] = xx[187] * xx[9] - xx[191];
  xx[194] = xx[177] + xx[187] * xx[7];
  xx[195] = - (xx[191] * xx[7] + xx[177] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 160, xx + 193, xx + 196);
  pm_math_Quaternion_xform_ra(xx + 160, xx + 57, xx + 193);
  xx[177] = xx[21] * xx[172];
  xx[186] = xx[21] * xx[170];
  xx[187] = xx[164] * xx[183];
  xx[191] = xx[164] * xx[21];
  xx[199] = xx[8] * (xx[133] * xx[187] - xx[184] * xx[159]) + xx[8] * (xx[133] *
    xx[191] - xx[175] * xx[159]);
  xx[200] = (xx[164] * xx[187] + xx[185]) * xx[8] + (xx[164] * xx[191] + xx[176])
    * xx[8] - xx[183] - xx[21];
  xx[201] = - ((xx[188] + xx[187] * xx[159]) * xx[8] + (xx[189] + xx[191] * xx
    [159]) * xx[8]);
  pm_math_Quaternion_xform_ra(xx + 160, xx + 199, xx + 187);
  xx[175] = xx[13] * xx[159] + xx[164];
  xx[176] = xx[164] * xx[11] - xx[13] * xx[158];
  xx[199] = xx[175];
  xx[200] = xx[176];
  xx[201] = - (xx[158] + xx[11] * xx[159]);
  pm_math_Vector3_cross_ra(xx + 165, xx + 199, xx + 202);
  xx[184] = xx[11] + xx[8] * (xx[202] - xx[175] * xx[133]);
  xx[175] = xx[184] * xx[21];
  xx[185] = xx[172] * xx[175];
  xx[191] = xx[8] * (xx[203] - xx[133] * xx[176]) - xx[54];
  xx[176] = xx[191] * xx[21];
  xx[199] = xx[172] * xx[176];
  xx[200] = xx[170] * xx[175] + xx[171] * xx[176];
  xx[201] = - xx[185];
  xx[202] = - xx[199];
  xx[203] = xx[200];
  pm_math_Vector3_cross_ra(xx + 170, xx + 201, xx + 204);
  xx[201] = xx[184] * xx[183];
  xx[184] = xx[164] * xx[201];
  xx[202] = xx[191] * xx[183];
  xx[191] = xx[164] * xx[202];
  xx[203] = xx[201] * xx[158] + xx[202] * xx[159];
  xx[207] = - xx[184];
  xx[208] = - xx[191];
  xx[209] = xx[203];
  pm_math_Vector3_cross_ra(xx + 165, xx + 207, xx + 210);
  xx[207] = xx[164] * xx[175];
  xx[208] = xx[164] * xx[176];
  xx[164] = xx[175] * xx[158] + xx[176] * xx[159];
  xx[213] = - xx[207];
  xx[214] = - xx[208];
  xx[215] = xx[164];
  pm_math_Vector3_cross_ra(xx + 165, xx + 213, xx + 216);
  xx[165] = (xx[210] - xx[133] * xx[184]) * xx[8] - xx[202] + (xx[216] - xx[133]
    * xx[207]) * xx[8] - xx[176];
  xx[166] = (xx[211] - xx[133] * xx[191]) * xx[8] + xx[201] + (xx[217] - xx[133]
    * xx[208]) * xx[8] + xx[175];
  xx[167] = xx[8] * (xx[212] + xx[133] * xx[203]) + xx[8] * (xx[218] + xx[133] *
    xx[164]);
  pm_math_Quaternion_xform_ra(xx + 160, xx + 165, xx + 201);
  xx[133] = xx[170] * xx[186];
  xx[158] = xx[169] * xx[186];
  xx[207] = xx[0];
  xx[208] = xx[0];
  xx[209] = xx[0];
  xx[210] = xx[0];
  xx[211] = xx[0];
  xx[212] = xx[0];
  xx[213] = - ((xx[63] - xx[49] * xx[15]) * xx[8] - xx[29] + xx[96] + xx[93]);
  xx[214] = - (xx[8] * (xx[49] * xx[47] - xx[51] * xx[67]) + xx[102]);
  xx[215] = - ((xx[105] - xx[49] * xx[66]) * xx[8] - xx[44] + xx[99]);
  xx[216] = (xx[49] * xx[51] + xx[50] * xx[52]) * xx[8];
  xx[217] = xx[0];
  xx[218] = xx[0];
  xx[219] = xx[0];
  xx[220] = xx[0];
  xx[221] = xx[0];
  xx[222] = xx[0];
  xx[223] = xx[0];
  xx[224] = xx[0];
  xx[225] = xx[0];
  xx[226] = xx[0];
  xx[227] = - ((xx[64] - xx[49] * xx[20]) * xx[8] + xx[28] + xx[97] + xx[94]);
  xx[228] = - (xx[103] + (xx[52] * xx[47] + xx[14]) * xx[8] - xx[21]);
  xx[229] = - ((xx[106] - xx[49] * xx[69]) * xx[8] + xx[42] + xx[100]);
  xx[230] = - (xx[8] * (xx[49] * xx[50] - xx[51] * xx[52]));
  xx[231] = xx[0];
  xx[232] = xx[0];
  xx[233] = xx[0];
  xx[234] = xx[0];
  xx[235] = xx[0];
  xx[236] = xx[0];
  xx[237] = xx[0];
  xx[238] = xx[0];
  xx[239] = xx[0];
  xx[240] = xx[0];
  xx[241] = - (xx[8] * (xx[65] + xx[41] * xx[49]) + xx[98] + xx[95]);
  xx[242] = - (xx[104] - (xx[26] + xx[51] * xx[47]) * xx[8]);
  xx[243] = - (xx[8] * (xx[107] + xx[71] * xx[49]) + xx[101]);
  xx[244] = - ((xx[50] * xx[50] + xx[51] * xx[51]) * xx[8] - xx[54]);
  xx[245] = xx[0];
  xx[246] = xx[0];
  xx[247] = xx[0];
  xx[248] = xx[0];
  xx[249] = xx[0];
  xx[250] = xx[0];
  xx[251] = xx[0];
  xx[252] = xx[0];
  xx[253] = xx[0];
  xx[254] = xx[0];
  xx[255] = xx[0];
  xx[256] = xx[0];
  xx[257] = xx[0];
  xx[258] = xx[0];
  xx[259] = - ((xx[130] - xx[117] * xx[73]) * xx[8] - xx[114] + xx[145] + xx[142]);
  xx[260] = - (xx[8] * (xx[117] * xx[122] - xx[119] * xx[135]) + xx[136]);
  xx[261] = - ((xx[153] - xx[117] * xx[134]) * xx[8] - xx[121] + xx[150]);
  xx[262] = (xx[117] * xx[119] + xx[118] * xx[120]) * xx[8];
  xx[263] = xx[0];
  xx[264] = xx[0];
  xx[265] = xx[0];
  xx[266] = xx[0];
  xx[267] = xx[0];
  xx[268] = xx[0];
  xx[269] = xx[0];
  xx[270] = xx[0];
  xx[271] = xx[0];
  xx[272] = xx[0];
  xx[273] = - ((xx[131] - xx[117] * xx[109]) * xx[8] + xx[113] + xx[146] + xx
               [143]);
  xx[274] = - (xx[137] + (xx[120] * xx[122] + xx[68]) * xx[8] - xx[21]);
  xx[275] = - ((xx[154] - xx[117] * xx[148]) * xx[8] + xx[116] + xx[151]);
  xx[276] = - (xx[8] * (xx[117] * xx[118] - xx[119] * xx[120]));
  xx[277] = xx[0];
  xx[278] = xx[0];
  xx[279] = xx[0];
  xx[280] = xx[0];
  xx[281] = xx[0];
  xx[282] = xx[0];
  xx[283] = xx[0];
  xx[284] = xx[0];
  xx[285] = xx[0];
  xx[286] = xx[0];
  xx[287] = - (xx[8] * (xx[132] + xx[115] * xx[117]) + xx[147] + xx[144]);
  xx[288] = - (xx[138] - (xx[110] + xx[119] * xx[122]) * xx[8]);
  xx[289] = - (xx[8] * (xx[155] + xx[149] * xx[117]) + xx[152]);
  xx[290] = - ((xx[118] * xx[118] + xx[119] * xx[119]) * xx[8] - xx[54]);
  xx[291] = xx[0];
  xx[292] = xx[0];
  xx[293] = - ((xx[178] - xx[169] * xx[140]) * xx[8] - xx[173] + xx[196] + xx
               [193]);
  xx[294] = - (xx[8] * (xx[169] * xx[177] - xx[171] * xx[186]) + xx[187]);
  xx[295] = - ((xx[204] - xx[169] * xx[185]) * xx[8] - xx[176] + xx[201]);
  xx[296] = (xx[169] * xx[171] + xx[170] * xx[172]) * xx[8];
  xx[297] = xx[0];
  xx[298] = xx[0];
  xx[299] = xx[0];
  xx[300] = xx[0];
  xx[301] = xx[0];
  xx[302] = xx[0];
  xx[303] = xx[0];
  xx[304] = xx[0];
  xx[305] = xx[0];
  xx[306] = xx[0];
  xx[307] = - ((xx[179] - xx[169] * xx[157]) * xx[8] + xx[168] + xx[197] + xx
               [194]);
  xx[308] = - (xx[188] + (xx[172] * xx[177] + xx[133]) * xx[8] - xx[21]);
  xx[309] = - ((xx[205] - xx[169] * xx[199]) * xx[8] + xx[175] + xx[202]);
  xx[310] = - (xx[8] * (xx[169] * xx[170] - xx[171] * xx[172]));
  xx[311] = xx[0];
  xx[312] = xx[0];
  xx[313] = xx[0];
  xx[314] = xx[0];
  xx[315] = xx[0];
  xx[316] = xx[0];
  xx[317] = xx[0];
  xx[318] = xx[0];
  xx[319] = xx[0];
  xx[320] = xx[0];
  xx[321] = - (xx[8] * (xx[180] + xx[174] * xx[169]) + xx[198] + xx[195]);
  xx[322] = - (xx[189] - (xx[158] + xx[171] * xx[177]) * xx[8]);
  xx[323] = - (xx[8] * (xx[206] + xx[200] * xx[169]) + xx[203]);
  xx[324] = - ((xx[170] * xx[170] + xx[171] * xx[171]) * xx[8] - xx[54]);
  xx[325] = xx[0];
  xx[326] = xx[0];
  xx[327] = xx[0];
  xx[328] = xx[0];
  xx[329] = xx[0];
  xx[330] = xx[0];
  xx[331] = xx[0];
  xx[332] = xx[0];
  xx[63] = xx[55] - xx[74];
  xx[64] = xx[53] + xx[72];
  xx[65] = xx[56] - xx[48];
  pm_math_Quaternion_xform_ra(xx + 30, xx + 63, xx + 71);
  pm_math_Quaternion_xform_ra(xx + 30, xx + 34, xx + 63);
  xx[15] = xx[51] * xx[61];
  xx[20] = xx[50] * xx[61];
  xx[28] = xx[21] * xx[51];
  xx[29] = xx[55] - xx[141];
  xx[30] = xx[53] + xx[139];
  xx[31] = xx[127] - xx[48];
  pm_math_Quaternion_xform_ra(xx + 37, xx + 29, xx + 93);
  pm_math_Quaternion_xform_ra(xx + 37, xx + 34, xx + 29);
  xx[32] = xx[119] * xx[129];
  xx[33] = xx[118] * xx[129];
  xx[37] = xx[21] * xx[119];
  xx[38] = xx[55] - xx[192];
  xx[39] = xx[53] + xx[190];
  xx[40] = xx[181] - xx[48];
  pm_math_Quaternion_xform_ra(xx + 160, xx + 38, xx + 96);
  pm_math_Quaternion_xform_ra(xx + 160, xx + 34, xx + 38);
  xx[41] = xx[171] * xx[183];
  xx[42] = xx[170] * xx[183];
  xx[44] = xx[21] * xx[171];
  xx[99] = xx[71] - xx[63] - (xx[49] * xx[15] + xx[52] * xx[20]) * xx[8] - (xx
    [49] * xx[28] + xx[52] * xx[67]) * xx[8] + xx[16];
  xx[100] = xx[8] * (xx[26] - xx[52] * xx[28]) + xx[8] * (xx[49] * xx[20] - xx
    [52] * xx[15]) + xx[72] - xx[64] + xx[17];
  xx[101] = xx[73] - xx[65] - xx[61] + (xx[50] * xx[20] + xx[51] * xx[15]) * xx
    [8] + (xx[14] + xx[51] * xx[28]) * xx[8] - xx[19];
  xx[102] = xx[93] - xx[29] - (xx[117] * xx[32] + xx[120] * xx[33]) * xx[8] -
    (xx[117] * xx[37] + xx[120] * xx[135]) * xx[8] - xx[45];
  xx[103] = xx[8] * (xx[110] - xx[120] * xx[37]) + xx[8] * (xx[117] * xx[33] -
    xx[120] * xx[32]) + xx[94] - xx[30] + xx[46];
  xx[104] = xx[95] - xx[31] - xx[129] + (xx[118] * xx[33] + xx[119] * xx[32]) *
    xx[8] + (xx[68] + xx[119] * xx[37]) * xx[8] - xx[19];
  xx[105] = xx[96] - xx[38] - (xx[169] * xx[41] + xx[172] * xx[42]) * xx[8] -
    (xx[169] * xx[44] + xx[172] * xx[186]) * xx[8] - xx[70];
  xx[106] = xx[8] * (xx[158] - xx[172] * xx[44]) + xx[8] * (xx[169] * xx[42] -
    xx[172] * xx[41]) + xx[97] - xx[39] - xx[5];
  xx[107] = xx[98] - xx[40] - xx[183] + (xx[170] * xx[42] + xx[171] * xx[41]) *
    xx[8] + (xx[133] + xx[171] * xx[44]) * xx[8] - xx[19];
  memcpy(xx + 333, xx + 207, 126 * sizeof(double));
  factorAndSolveWide(9, 14, xx + 333, xx + 113, xx + 143, ii + 0, xx + 99, xx[6],
                     xx + 129);
  xx[14] = xx[111] + xx[131];
  xx[15] = xx[112] + xx[132];
  xx[20] = xx[156] + xx[133];
  xx[26] = xx[182] + xx[134];
  xx[28] = xx[10] + xx[135];
  xx[10] = xx[12] + xx[136];
  xx[12] = xx[18] + xx[137];
  xx[18] = xx[60] + xx[138];
  xx[29] = xx[27] + xx[139];
  xx[27] = xx[62] + xx[140];
  xx[30] = xx[108] + xx[141];
  xx[31] = xx[128] + xx[142];
  xx[81] = state[0] + xx[79] + xx[129];
  xx[82] = state[1];
  xx[83] = state[2] + xx[80] + xx[130];
  xx[84] = state[3];
  xx[85] = xx[14];
  xx[86] = state[5];
  xx[87] = xx[15];
  xx[88] = xx[20];
  xx[89] = state[8];
  xx[90] = state[9];
  xx[91] = xx[26];
  xx[92] = state[11];
  xx[93] = xx[28];
  xx[94] = state[13];
  xx[95] = xx[10];
  xx[96] = xx[12];
  xx[97] = state[16];
  xx[98] = state[17];
  xx[99] = xx[18];
  xx[100] = state[19];
  xx[101] = xx[29];
  xx[102] = state[21];
  xx[103] = xx[27];
  xx[104] = xx[30];
  xx[105] = state[24];
  xx[106] = state[25];
  xx[107] = xx[31];
  xx[108] = state[27];
  xx[32] = xx[28] * xx[5];
  xx[28] = sin(xx[32]);
  xx[37] = cos(xx[32]);
  xx[38] = - (xx[7] * xx[28]);
  xx[39] = xx[9] * xx[28];
  xx[40] = xx[28];
  pm_math_Quaternion_compose_ra(xx + 1, xx + 37, xx + 49);
  xx[28] = xx[10] * xx[5];
  xx[10] = cos(xx[28]);
  xx[32] = xx[12] * xx[5];
  xx[12] = sin(xx[32]);
  xx[37] = cos(xx[32]);
  xx[38] = xx[11] * xx[12];
  xx[39] = - xx[12];
  xx[40] = xx[13] * xx[12];
  pm_math_Quaternion_compose_ra(xx + 37, xx + 22, xx + 60);
  xx[12] = sin(xx[28]);
  xx[28] = xx[10] * xx[60] + xx[61] * xx[12];
  xx[32] = xx[10] * xx[62] - xx[63] * xx[12];
  xx[33] = xx[21] * xx[32];
  xx[37] = xx[10] * xx[63] + xx[62] * xx[12];
  xx[38] = xx[10] * xx[61] - xx[60] * xx[12];
  xx[10] = xx[21] * xx[38];
  xx[12] = 20.89999033362555;
  xx[39] = xx[55] - (xx[28] * xx[33] + xx[37] * xx[10]) * xx[8];
  xx[40] = xx[53] + xx[8] * (xx[28] * xx[10] - xx[37] * xx[33]);
  xx[41] = (xx[10] * xx[38] + xx[33] * xx[32]) * xx[8] - xx[12];
  pm_math_Quaternion_xform_ra(xx + 49, xx + 39, xx + 60);
  pm_math_Quaternion_xform_ra(xx + 49, xx + 34, xx + 39);
  xx[63] = xx[28];
  xx[64] = xx[38];
  xx[65] = xx[32];
  xx[66] = xx[37];
  pm_math_Quaternion_compose_ra(xx + 49, xx + 63, xx + 71);
  xx[10] = xx[43] + xx[18];
  xx[18] = xx[73] * xx[10];
  xx[28] = xx[72] * xx[10];
  xx[32] = xx[21] * xx[73];
  xx[33] = xx[21] * xx[72];
  xx[37] = xx[29] * xx[5];
  xx[29] = sin(xx[37]);
  xx[49] = cos(xx[37]);
  xx[50] = - (xx[7] * xx[29]);
  xx[51] = xx[9] * xx[29];
  xx[52] = xx[29];
  pm_math_Quaternion_compose_ra(xx + 75, xx + 49, xx + 63);
  xx[29] = xx[27] * xx[5];
  xx[27] = cos(xx[29]);
  xx[37] = xx[30] * xx[5];
  xx[30] = sin(xx[37]);
  xx[49] = cos(xx[37]);
  xx[50] = xx[11] * xx[30];
  xx[51] = - xx[30];
  xx[52] = xx[13] * xx[30];
  pm_math_Quaternion_compose_ra(xx + 49, xx + 22, xx + 109);
  xx[30] = sin(xx[29]);
  xx[29] = xx[27] * xx[109] + xx[110] * xx[30];
  xx[37] = xx[27] * xx[111] - xx[112] * xx[30];
  xx[38] = xx[21] * xx[37];
  xx[42] = xx[27] * xx[112] + xx[111] * xx[30];
  xx[44] = xx[27] * xx[110] - xx[109] * xx[30];
  xx[27] = xx[21] * xx[44];
  xx[49] = xx[55] - (xx[29] * xx[38] + xx[42] * xx[27]) * xx[8];
  xx[50] = xx[53] + xx[8] * (xx[29] * xx[27] - xx[42] * xx[38]);
  xx[51] = (xx[27] * xx[44] + xx[38] * xx[37]) * xx[8] - xx[12];
  pm_math_Quaternion_xform_ra(xx + 63, xx + 49, xx + 67);
  pm_math_Quaternion_xform_ra(xx + 63, xx + 34, xx + 49);
  xx[109] = xx[29];
  xx[110] = xx[44];
  xx[111] = xx[37];
  xx[112] = xx[42];
  pm_math_Quaternion_compose_ra(xx + 63, xx + 109, xx + 113);
  xx[27] = xx[43] + xx[31];
  xx[29] = xx[115] * xx[27];
  xx[30] = xx[114] * xx[27];
  xx[31] = xx[21] * xx[115];
  xx[37] = xx[21] * xx[114];
  xx[38] = xx[14] * xx[5];
  xx[14] = sin(xx[38]);
  xx[63] = cos(xx[38]);
  xx[64] = - (xx[7] * xx[14]);
  xx[65] = xx[9] * xx[14];
  xx[66] = xx[14];
  pm_math_Quaternion_compose_ra(xx + 123, xx + 63, xx + 109);
  xx[14] = xx[15] * xx[5];
  xx[15] = cos(xx[14]);
  xx[38] = xx[20] * xx[5];
  xx[20] = sin(xx[38]);
  xx[63] = cos(xx[38]);
  xx[64] = xx[11] * xx[20];
  xx[65] = - xx[20];
  xx[66] = xx[13] * xx[20];
  pm_math_Quaternion_compose_ra(xx + 63, xx + 22, xx + 117);
  xx[20] = sin(xx[14]);
  xx[14] = xx[15] * xx[117] + xx[118] * xx[20];
  xx[38] = xx[15] * xx[119] - xx[120] * xx[20];
  xx[42] = xx[21] * xx[38];
  xx[44] = xx[15] * xx[120] + xx[119] * xx[20];
  xx[47] = xx[15] * xx[118] - xx[117] * xx[20];
  xx[15] = xx[21] * xx[47];
  xx[63] = xx[55] - (xx[14] * xx[42] + xx[44] * xx[15]) * xx[8];
  xx[64] = xx[53] + xx[8] * (xx[14] * xx[15] - xx[44] * xx[42]);
  xx[65] = (xx[15] * xx[47] + xx[42] * xx[38]) * xx[8] - xx[12];
  pm_math_Quaternion_xform_ra(xx + 109, xx + 63, xx + 117);
  pm_math_Quaternion_xform_ra(xx + 109, xx + 34, xx + 63);
  xx[127] = xx[14];
  xx[128] = xx[47];
  xx[129] = xx[38];
  xx[130] = xx[44];
  pm_math_Quaternion_compose_ra(xx + 109, xx + 127, xx + 131);
  xx[14] = xx[43] + xx[26];
  xx[15] = xx[133] * xx[14];
  xx[20] = xx[132] * xx[14];
  xx[26] = xx[21] * xx[133];
  xx[34] = xx[21] * xx[132];
  xx[135] = fabs(- (xx[16] + xx[60] - xx[39] - (xx[71] * xx[18] + xx[74] * xx[28])
                    * xx[8] - (xx[71] * xx[32] + xx[74] * xx[33]) * xx[8]));
  xx[136] = fabs(- (xx[17] + xx[8] * (xx[71] * xx[33] - xx[74] * xx[32]) + xx[8]
                    * (xx[71] * xx[28] - xx[74] * xx[18]) + xx[61] - xx[40]));
  xx[137] = fabs(xx[19] - (xx[62] - xx[41] - xx[10] + (xx[72] * xx[28] + xx[73] *
    xx[18]) * xx[8] + (xx[72] * xx[33] + xx[73] * xx[32]) * xx[8]));
  xx[138] = fabs(xx[45] - (xx[67] - xx[49] - (xx[113] * xx[29] + xx[116] * xx[30])
    * xx[8] - (xx[113] * xx[31] + xx[116] * xx[37]) * xx[8]));
  xx[139] = fabs(- (xx[46] + xx[8] * (xx[113] * xx[37] - xx[116] * xx[31]) + xx
                    [8] * (xx[113] * xx[30] - xx[116] * xx[29]) + xx[68] - xx[50]));
  xx[140] = fabs(xx[19] - (xx[69] - xx[51] - xx[27] + (xx[114] * xx[30] + xx[115]
    * xx[29]) * xx[8] + (xx[114] * xx[37] + xx[115] * xx[31]) * xx[8]));
  xx[141] = fabs(xx[70] - (xx[117] - xx[63] - (xx[131] * xx[15] + xx[134] * xx
    [20]) * xx[8] - (xx[131] * xx[26] + xx[134] * xx[34]) * xx[8]));
  xx[142] = fabs(xx[5] - (xx[8] * (xx[131] * xx[34] - xx[134] * xx[26]) + xx[8] *
    (xx[131] * xx[20] - xx[134] * xx[15]) + xx[118] - xx[64]));
  xx[143] = fabs(xx[19] - (xx[119] - xx[65] - xx[14] + (xx[132] * xx[20] + xx
    [133] * xx[15]) * xx[8] + (xx[132] * xx[34] + xx[133] * xx[26]) * xx[8]));
  ii[0] = 135;

  {
    int ll;
    for (ll = 136; ll < 144; ++ll)
      if (xx[ll] > xx[ii[0]])
        ii[0] = ll;
  }

  ii[0] -= 135;
  xx[10] = xx[135 + (ii[0])];
  xx[14] = 1.0e-9;
  if (xx[10] > xx[14]) {
    switch (ii[0])
    {
     case 0:
     case 1:
     case 2:
      {
        return sm_ssci_recordRunTimeError(
          "sm:compiler:messages:simulationErrors:ConstraintViolation",
          "'Wind_Turbine/Spherical  Joint1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem.",
          neDiagMgr);
      }

     case 3:
     case 4:
     case 5:
      {
        return sm_ssci_recordRunTimeError(
          "sm:compiler:messages:simulationErrors:ConstraintViolation",
          "'Wind_Turbine/Spherical  Joint2' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem.",
          neDiagMgr);
      }

     case 6:
     case 7:
     case 8:
      {
        return sm_ssci_recordRunTimeError(
          "sm:compiler:messages:simulationErrors:ConstraintViolation",
          "'Wind_Turbine/Spherical  Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem.",
          neDiagMgr);
      }
    }
  }

  xx[10] = xx[5] * xx[93];
  xx[15] = sin(xx[10]);
  xx[16] = cos(xx[10]);
  xx[17] = - (xx[7] * xx[15]);
  xx[18] = xx[9] * xx[15];
  xx[19] = xx[15];
  pm_math_Quaternion_compose_ra(xx + 1, xx + 16, xx + 26);
  xx[1] = xx[5] * xx[95];
  xx[2] = cos(xx[1]);
  xx[3] = xx[5] * xx[96];
  xx[4] = sin(xx[3]);
  xx[15] = cos(xx[3]);
  xx[16] = xx[11] * xx[4];
  xx[17] = - xx[4];
  xx[18] = xx[13] * xx[4];
  pm_math_Quaternion_compose_ra(xx + 15, xx + 22, xx + 30);
  xx[3] = sin(xx[1]);
  xx[1] = xx[2] * xx[30] + xx[31] * xx[3];
  xx[4] = xx[2] * xx[31] - xx[30] * xx[3];
  xx[10] = xx[2] * xx[32] - xx[33] * xx[3];
  xx[15] = xx[2] * xx[33] + xx[32] * xx[3];
  xx[16] = xx[1];
  xx[17] = xx[4];
  xx[18] = xx[10];
  xx[19] = xx[15];
  pm_math_Quaternion_compose_ra(xx + 26, xx + 16, xx + 30);
  xx[34] = xx[4];
  xx[35] = xx[10];
  xx[36] = xx[15];
  xx[2] = xx[10] - xx[15] * xx[9];
  xx[3] = xx[15] * xx[7] + xx[4];
  xx[37] = xx[2];
  xx[38] = - xx[3];
  xx[39] = xx[9] * xx[4] + xx[7] * xx[10];
  pm_math_Vector3_cross_ra(xx + 34, xx + 37, xx + 40);
  xx[20] = (xx[8] * (xx[40] - xx[1] * xx[2]) - xx[7]) * xx[21];
  xx[2] = xx[33] * xx[20];
  xx[37] = (xx[9] + xx[8] * (xx[41] + xx[1] * xx[3])) * xx[21];
  xx[3] = xx[33] * xx[37];
  xx[38] = xx[31] * xx[20] + xx[32] * xx[37];
  xx[39] = - xx[2];
  xx[40] = - xx[3];
  xx[41] = xx[38];
  pm_math_Vector3_cross_ra(xx + 31, xx + 39, xx + 44);
  xx[39] = xx[21] * xx[4];
  xx[40] = xx[39] * xx[4];
  xx[41] = xx[21] * xx[10];
  xx[42] = (xx[40] + xx[41] * xx[10]) * xx[8];
  xx[47] = xx[42] - xx[21];
  xx[49] = xx[43] + xx[99];
  xx[50] = xx[4] * xx[49];
  xx[51] = xx[50] * xx[4];
  xx[52] = xx[10] * xx[49];
  xx[56] = xx[47] - xx[49] + (xx[51] + xx[52] * xx[10]) * xx[8] - xx[48];
  xx[60] = xx[1] * xx[50];
  xx[61] = xx[1] * xx[39];
  xx[62] = xx[8] * (xx[61] - xx[15] * xx[41]);
  xx[63] = xx[8] * (xx[60] - xx[15] * xx[52]) + xx[62] + xx[53];
  xx[64] = (xx[1] * xx[41] + xx[15] * xx[39]) * xx[8];
  xx[41] = xx[55] - ((xx[1] * xx[52] + xx[15] * xx[50]) * xx[8] + xx[64]);
  xx[65] = xx[56] * xx[9] - xx[63];
  xx[66] = xx[41] + xx[56] * xx[7];
  xx[67] = - (xx[63] * xx[7] + xx[41] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 26, xx + 65, xx + 68);
  pm_math_Quaternion_xform_ra(xx + 26, xx + 57, xx + 65);
  xx[41] = xx[21] * xx[33];
  xx[52] = xx[21] * xx[31];
  xx[56] = xx[15] * xx[49];
  xx[63] = xx[15] * xx[21];
  xx[71] = xx[8] * (xx[1] * xx[56] - xx[50] * xx[10]) + xx[8] * (xx[1] * xx[63]
    - xx[39] * xx[10]);
  xx[72] = (xx[15] * xx[56] + xx[51]) * xx[8] + (xx[15] * xx[63] + xx[40]) * xx
    [8] - xx[49] - xx[21];
  xx[73] = - ((xx[60] + xx[56] * xx[10]) * xx[8] + (xx[61] + xx[63] * xx[10]) *
              xx[8]);
  pm_math_Quaternion_xform_ra(xx + 26, xx + 71, xx + 109);
  xx[39] = xx[13] * xx[10] + xx[15];
  xx[40] = xx[15] * xx[11] - xx[13] * xx[4];
  xx[71] = xx[39];
  xx[72] = xx[40];
  xx[73] = - (xx[4] + xx[11] * xx[10]);
  pm_math_Vector3_cross_ra(xx + 34, xx + 71, xx + 112);
  xx[50] = xx[11] + xx[8] * (xx[112] - xx[39] * xx[1]);
  xx[39] = xx[50] * xx[21];
  xx[51] = xx[33] * xx[39];
  xx[56] = xx[8] * (xx[113] - xx[1] * xx[40]) - xx[54];
  xx[40] = xx[56] * xx[21];
  xx[60] = xx[33] * xx[40];
  xx[61] = xx[31] * xx[39] + xx[32] * xx[40];
  xx[71] = - xx[51];
  xx[72] = - xx[60];
  xx[73] = xx[61];
  pm_math_Vector3_cross_ra(xx + 31, xx + 71, xx + 112);
  xx[63] = xx[50] * xx[49];
  xx[71] = xx[15] * xx[63];
  xx[72] = xx[56] * xx[49];
  xx[73] = xx[15] * xx[72];
  xx[74] = xx[63] * xx[4] + xx[72] * xx[10];
  xx[115] = - xx[71];
  xx[116] = - xx[73];
  xx[117] = xx[74];
  pm_math_Vector3_cross_ra(xx + 34, xx + 115, xx + 118);
  xx[79] = xx[15] * xx[39];
  xx[80] = xx[15] * xx[40];
  xx[115] = xx[39] * xx[4] + xx[40] * xx[10];
  xx[127] = - xx[79];
  xx[128] = - xx[80];
  xx[129] = xx[115];
  pm_math_Vector3_cross_ra(xx + 34, xx + 127, xx + 130);
  xx[127] = (xx[118] - xx[1] * xx[71]) * xx[8] - xx[72] + (xx[130] - xx[1] * xx
    [79]) * xx[8] - xx[40];
  xx[128] = (xx[119] - xx[1] * xx[73]) * xx[8] + xx[63] + (xx[131] - xx[1] * xx
    [80]) * xx[8] + xx[39];
  xx[129] = xx[8] * (xx[120] + xx[1] * xx[74]) + xx[8] * (xx[132] + xx[1] * xx
    [115]);
  pm_math_Quaternion_xform_ra(xx + 26, xx + 127, xx + 71);
  xx[63] = xx[5] * xx[101];
  xx[74] = sin(xx[63]);
  xx[115] = cos(xx[63]);
  xx[116] = - (xx[7] * xx[74]);
  xx[117] = xx[9] * xx[74];
  xx[118] = xx[74];
  pm_math_Quaternion_compose_ra(xx + 75, xx + 115, xx + 119);
  xx[63] = xx[5] * xx[103];
  xx[74] = cos(xx[63]);
  xx[75] = xx[5] * xx[104];
  xx[76] = sin(xx[75]);
  xx[77] = cos(xx[75]);
  xx[78] = xx[11] * xx[76];
  xx[79] = - xx[76];
  xx[80] = xx[13] * xx[76];
  pm_math_Quaternion_compose_ra(xx + 77, xx + 22, xx + 115);
  xx[75] = sin(xx[63]);
  xx[63] = xx[74] * xx[115] + xx[116] * xx[75];
  xx[76] = xx[74] * xx[116] - xx[115] * xx[75];
  xx[77] = xx[74] * xx[117] - xx[118] * xx[75];
  xx[78] = xx[74] * xx[118] + xx[117] * xx[75];
  xx[115] = xx[63];
  xx[116] = xx[76];
  xx[117] = xx[77];
  xx[118] = xx[78];
  pm_math_Quaternion_compose_ra(xx + 119, xx + 115, xx + 127);
  xx[74] = xx[77] - xx[78] * xx[9];
  xx[75] = xx[78] * xx[7] + xx[76];
  xx[131] = xx[74];
  xx[132] = - xx[75];
  xx[133] = xx[9] * xx[76] + xx[7] * xx[77];
  pm_math_Vector3_cross_ra(xx + 76, xx + 131, xx + 134);
  xx[79] = (xx[8] * (xx[134] - xx[63] * xx[74]) - xx[7]) * xx[21];
  xx[74] = xx[130] * xx[79];
  xx[80] = (xx[9] + xx[8] * (xx[135] + xx[63] * xx[75])) * xx[21];
  xx[75] = xx[130] * xx[80];
  xx[131] = xx[128] * xx[79] + xx[129] * xx[80];
  xx[132] = - xx[74];
  xx[133] = - xx[75];
  xx[134] = xx[131];
  pm_math_Vector3_cross_ra(xx + 128, xx + 132, xx + 135);
  xx[132] = xx[21] * xx[76];
  xx[133] = xx[132] * xx[76];
  xx[134] = xx[21] * xx[77];
  xx[138] = (xx[133] + xx[134] * xx[77]) * xx[8];
  xx[139] = xx[138] - xx[21];
  xx[140] = xx[43] + xx[107];
  xx[141] = xx[76] * xx[140];
  xx[142] = xx[141] * xx[76];
  xx[143] = xx[77] * xx[140];
  xx[144] = xx[139] - xx[140] + (xx[142] + xx[143] * xx[77]) * xx[8] - xx[48];
  xx[145] = xx[63] * xx[141];
  xx[146] = xx[63] * xx[132];
  xx[147] = xx[8] * (xx[146] - xx[78] * xx[134]);
  xx[148] = xx[8] * (xx[145] - xx[78] * xx[143]) + xx[147] + xx[53];
  xx[149] = (xx[63] * xx[134] + xx[78] * xx[132]) * xx[8];
  xx[134] = xx[55] - ((xx[63] * xx[143] + xx[78] * xx[141]) * xx[8] + xx[149]);
  xx[150] = xx[144] * xx[9] - xx[148];
  xx[151] = xx[134] + xx[144] * xx[7];
  xx[152] = - (xx[148] * xx[7] + xx[134] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 119, xx + 150, xx + 153);
  pm_math_Quaternion_xform_ra(xx + 119, xx + 57, xx + 150);
  xx[134] = xx[21] * xx[130];
  xx[143] = xx[21] * xx[128];
  xx[144] = xx[78] * xx[140];
  xx[148] = xx[78] * xx[21];
  xx[156] = xx[8] * (xx[63] * xx[144] - xx[141] * xx[77]) + xx[8] * (xx[63] *
    xx[148] - xx[132] * xx[77]);
  xx[157] = (xx[78] * xx[144] + xx[142]) * xx[8] + (xx[78] * xx[148] + xx[133]) *
    xx[8] - xx[140] - xx[21];
  xx[158] = - ((xx[145] + xx[144] * xx[77]) * xx[8] + (xx[146] + xx[148] * xx[77])
               * xx[8]);
  pm_math_Quaternion_xform_ra(xx + 119, xx + 156, xx + 144);
  xx[132] = xx[13] * xx[77] + xx[78];
  xx[133] = xx[78] * xx[11] - xx[13] * xx[76];
  xx[156] = xx[132];
  xx[157] = xx[133];
  xx[158] = - (xx[76] + xx[11] * xx[77]);
  pm_math_Vector3_cross_ra(xx + 76, xx + 156, xx + 159);
  xx[141] = xx[11] + xx[8] * (xx[159] - xx[132] * xx[63]);
  xx[132] = xx[141] * xx[21];
  xx[142] = xx[130] * xx[132];
  xx[148] = xx[8] * (xx[160] - xx[63] * xx[133]) - xx[54];
  xx[133] = xx[148] * xx[21];
  xx[156] = xx[130] * xx[133];
  xx[157] = xx[128] * xx[132] + xx[129] * xx[133];
  xx[158] = - xx[142];
  xx[159] = - xx[156];
  xx[160] = xx[157];
  pm_math_Vector3_cross_ra(xx + 128, xx + 158, xx + 161);
  xx[158] = xx[141] * xx[140];
  xx[159] = xx[78] * xx[158];
  xx[160] = xx[148] * xx[140];
  xx[164] = xx[78] * xx[160];
  xx[165] = xx[158] * xx[76] + xx[160] * xx[77];
  xx[166] = - xx[159];
  xx[167] = - xx[164];
  xx[168] = xx[165];
  pm_math_Vector3_cross_ra(xx + 76, xx + 166, xx + 169);
  xx[166] = xx[78] * xx[132];
  xx[167] = xx[78] * xx[133];
  xx[168] = xx[132] * xx[76] + xx[133] * xx[77];
  xx[172] = - xx[166];
  xx[173] = - xx[167];
  xx[174] = xx[168];
  pm_math_Vector3_cross_ra(xx + 76, xx + 172, xx + 175);
  xx[172] = (xx[169] - xx[63] * xx[159]) * xx[8] - xx[160] + (xx[175] - xx[63] *
    xx[166]) * xx[8] - xx[133];
  xx[173] = (xx[170] - xx[63] * xx[164]) * xx[8] + xx[158] + (xx[176] - xx[63] *
    xx[167]) * xx[8] + xx[132];
  xx[174] = xx[8] * (xx[171] + xx[63] * xx[165]) + xx[8] * (xx[177] + xx[63] *
    xx[168]);
  pm_math_Quaternion_xform_ra(xx + 119, xx + 172, xx + 158);
  xx[164] = xx[5] * xx[85];
  xx[165] = sin(xx[164]);
  xx[166] = cos(xx[164]);
  xx[167] = - (xx[7] * xx[165]);
  xx[168] = xx[9] * xx[165];
  xx[169] = xx[165];
  pm_math_Quaternion_compose_ra(xx + 123, xx + 166, xx + 170);
  xx[123] = xx[5] * xx[87];
  xx[124] = cos(xx[123]);
  xx[125] = xx[5] * xx[88];
  xx[5] = sin(xx[125]);
  xx[164] = cos(xx[125]);
  xx[165] = xx[11] * xx[5];
  xx[166] = - xx[5];
  xx[167] = xx[13] * xx[5];
  pm_math_Quaternion_compose_ra(xx + 164, xx + 22, xx + 174);
  xx[5] = sin(xx[123]);
  xx[22] = xx[124] * xx[174] + xx[175] * xx[5];
  xx[23] = xx[124] * xx[175] - xx[174] * xx[5];
  xx[24] = xx[124] * xx[176] - xx[177] * xx[5];
  xx[25] = xx[124] * xx[177] + xx[176] * xx[5];
  pm_math_Quaternion_compose_ra(xx + 170, xx + 22, xx + 123);
  xx[5] = xx[24] - xx[25] * xx[9];
  xx[164] = xx[25] * xx[7] + xx[23];
  xx[165] = xx[5];
  xx[166] = - xx[164];
  xx[167] = xx[9] * xx[23] + xx[7] * xx[24];
  pm_math_Vector3_cross_ra(xx + 23, xx + 165, xx + 174);
  xx[165] = (xx[8] * (xx[174] - xx[22] * xx[5]) - xx[7]) * xx[21];
  xx[5] = xx[126] * xx[165];
  xx[166] = (xx[9] + xx[8] * (xx[175] + xx[22] * xx[164])) * xx[21];
  xx[164] = xx[126] * xx[166];
  xx[167] = xx[124] * xx[165] + xx[125] * xx[166];
  xx[174] = - xx[5];
  xx[175] = - xx[164];
  xx[176] = xx[167];
  pm_math_Vector3_cross_ra(xx + 124, xx + 174, xx + 177);
  xx[168] = xx[21] * xx[23];
  xx[169] = xx[168] * xx[23];
  xx[174] = xx[21] * xx[24];
  xx[175] = (xx[169] + xx[174] * xx[24]) * xx[8];
  xx[176] = xx[175] - xx[21];
  xx[180] = xx[43] + xx[91];
  xx[43] = xx[23] * xx[180];
  xx[181] = xx[43] * xx[23];
  xx[182] = xx[24] * xx[180];
  xx[183] = xx[176] - xx[180] + (xx[181] + xx[182] * xx[24]) * xx[8] - xx[48];
  xx[184] = xx[22] * xx[43];
  xx[185] = xx[22] * xx[168];
  xx[186] = xx[8] * (xx[185] - xx[25] * xx[174]);
  xx[187] = xx[8] * (xx[184] - xx[25] * xx[182]) + xx[186] + xx[53];
  xx[188] = (xx[22] * xx[174] + xx[25] * xx[168]) * xx[8];
  xx[174] = xx[55] - ((xx[22] * xx[182] + xx[25] * xx[43]) * xx[8] + xx[188]);
  xx[189] = xx[183] * xx[9] - xx[187];
  xx[190] = xx[174] + xx[183] * xx[7];
  xx[191] = - (xx[187] * xx[7] + xx[174] * xx[9]);
  pm_math_Quaternion_xform_ra(xx + 170, xx + 189, xx + 192);
  pm_math_Quaternion_xform_ra(xx + 170, xx + 57, xx + 189);
  xx[57] = xx[21] * xx[126];
  xx[58] = xx[21] * xx[124];
  xx[59] = xx[25] * xx[180];
  xx[174] = xx[25] * xx[21];
  xx[195] = xx[8] * (xx[22] * xx[59] - xx[43] * xx[24]) + xx[8] * (xx[22] * xx
    [174] - xx[168] * xx[24]);
  xx[196] = (xx[25] * xx[59] + xx[181]) * xx[8] + (xx[25] * xx[174] + xx[169]) *
    xx[8] - xx[180] - xx[21];
  xx[197] = - ((xx[184] + xx[59] * xx[24]) * xx[8] + (xx[185] + xx[174] * xx[24])
               * xx[8]);
  pm_math_Quaternion_xform_ra(xx + 170, xx + 195, xx + 181);
  xx[43] = xx[13] * xx[24] + xx[25];
  xx[59] = xx[25] * xx[11] - xx[13] * xx[23];
  xx[195] = xx[43];
  xx[196] = xx[59];
  xx[197] = - (xx[23] + xx[11] * xx[24]);
  pm_math_Vector3_cross_ra(xx + 23, xx + 195, xx + 198);
  xx[13] = xx[11] + xx[8] * (xx[198] - xx[43] * xx[22]);
  xx[11] = xx[13] * xx[21];
  xx[43] = xx[126] * xx[11];
  xx[168] = xx[8] * (xx[199] - xx[22] * xx[59]) - xx[54];
  xx[59] = xx[168] * xx[21];
  xx[169] = xx[126] * xx[59];
  xx[174] = xx[124] * xx[11] + xx[125] * xx[59];
  xx[195] = - xx[43];
  xx[196] = - xx[169];
  xx[197] = xx[174];
  pm_math_Vector3_cross_ra(xx + 124, xx + 195, xx + 198);
  xx[184] = xx[13] * xx[180];
  xx[185] = xx[25] * xx[184];
  xx[187] = xx[168] * xx[180];
  xx[195] = xx[25] * xx[187];
  xx[196] = xx[184] * xx[23] + xx[187] * xx[24];
  xx[201] = - xx[185];
  xx[202] = - xx[195];
  xx[203] = xx[196];
  pm_math_Vector3_cross_ra(xx + 23, xx + 201, xx + 204);
  xx[197] = xx[25] * xx[11];
  xx[201] = xx[25] * xx[59];
  xx[202] = xx[11] * xx[23] + xx[59] * xx[24];
  xx[207] = - xx[197];
  xx[208] = - xx[201];
  xx[209] = xx[202];
  pm_math_Vector3_cross_ra(xx + 23, xx + 207, xx + 210);
  xx[207] = (xx[204] - xx[22] * xx[185]) * xx[8] - xx[187] + (xx[210] - xx[22] *
    xx[197]) * xx[8] - xx[59];
  xx[208] = (xx[205] - xx[22] * xx[195]) * xx[8] + xx[184] + (xx[211] - xx[22] *
    xx[201]) * xx[8] + xx[11];
  xx[209] = xx[8] * (xx[206] + xx[22] * xx[196]) + xx[8] * (xx[212] + xx[22] *
    xx[202]);
  pm_math_Quaternion_xform_ra(xx + 170, xx + 207, xx + 195);
  xx[201] = xx[0];
  xx[202] = xx[0];
  xx[203] = xx[0];
  xx[204] = xx[0];
  xx[205] = xx[0];
  xx[206] = xx[0];
  xx[207] = - ((xx[44] - xx[30] * xx[2]) * xx[8] - xx[37] + xx[68] + xx[65]);
  xx[208] = - (xx[8] * (xx[30] * xx[41] - xx[32] * xx[52]) + xx[109]);
  xx[209] = - ((xx[112] - xx[30] * xx[51]) * xx[8] - xx[40] + xx[71]);
  xx[210] = (xx[30] * xx[32] + xx[31] * xx[33]) * xx[8];
  xx[211] = xx[0];
  xx[212] = xx[0];
  xx[213] = xx[0];
  xx[214] = xx[0];
  xx[215] = xx[0];
  xx[216] = xx[0];
  xx[217] = xx[0];
  xx[218] = xx[0];
  xx[219] = xx[0];
  xx[220] = xx[0];
  xx[221] = - ((xx[45] - xx[30] * xx[3]) * xx[8] + xx[20] + xx[69] + xx[66]);
  xx[222] = - (xx[110] + (xx[33] * xx[41] + xx[31] * xx[52]) * xx[8] - xx[21]);
  xx[223] = - ((xx[113] - xx[30] * xx[60]) * xx[8] + xx[39] + xx[72]);
  xx[224] = - (xx[8] * (xx[30] * xx[31] - xx[32] * xx[33]));
  xx[225] = xx[0];
  xx[226] = xx[0];
  xx[227] = xx[0];
  xx[228] = xx[0];
  xx[229] = xx[0];
  xx[230] = xx[0];
  xx[231] = xx[0];
  xx[232] = xx[0];
  xx[233] = xx[0];
  xx[234] = xx[0];
  xx[235] = - (xx[8] * (xx[46] + xx[38] * xx[30]) + xx[70] + xx[67]);
  xx[236] = - (xx[111] - (xx[30] * xx[52] + xx[32] * xx[41]) * xx[8]);
  xx[237] = - (xx[8] * (xx[114] + xx[61] * xx[30]) + xx[73]);
  xx[238] = - ((xx[31] * xx[31] + xx[32] * xx[32]) * xx[8] - xx[54]);
  xx[239] = xx[0];
  xx[240] = xx[0];
  xx[241] = xx[0];
  xx[242] = xx[0];
  xx[243] = xx[0];
  xx[244] = xx[0];
  xx[245] = xx[0];
  xx[246] = xx[0];
  xx[247] = xx[0];
  xx[248] = xx[0];
  xx[249] = xx[0];
  xx[250] = xx[0];
  xx[251] = xx[0];
  xx[252] = xx[0];
  xx[253] = - ((xx[135] - xx[127] * xx[74]) * xx[8] - xx[80] + xx[153] + xx[150]);
  xx[254] = - (xx[8] * (xx[127] * xx[134] - xx[129] * xx[143]) + xx[144]);
  xx[255] = - ((xx[161] - xx[127] * xx[142]) * xx[8] - xx[133] + xx[158]);
  xx[256] = (xx[127] * xx[129] + xx[128] * xx[130]) * xx[8];
  xx[257] = xx[0];
  xx[258] = xx[0];
  xx[259] = xx[0];
  xx[260] = xx[0];
  xx[261] = xx[0];
  xx[262] = xx[0];
  xx[263] = xx[0];
  xx[264] = xx[0];
  xx[265] = xx[0];
  xx[266] = xx[0];
  xx[267] = - ((xx[136] - xx[127] * xx[75]) * xx[8] + xx[79] + xx[154] + xx[151]);
  xx[268] = - (xx[145] + (xx[130] * xx[134] + xx[128] * xx[143]) * xx[8] - xx[21]);
  xx[269] = - ((xx[162] - xx[127] * xx[156]) * xx[8] + xx[132] + xx[159]);
  xx[270] = - (xx[8] * (xx[127] * xx[128] - xx[129] * xx[130]));
  xx[271] = xx[0];
  xx[272] = xx[0];
  xx[273] = xx[0];
  xx[274] = xx[0];
  xx[275] = xx[0];
  xx[276] = xx[0];
  xx[277] = xx[0];
  xx[278] = xx[0];
  xx[279] = xx[0];
  xx[280] = xx[0];
  xx[281] = - (xx[8] * (xx[137] + xx[131] * xx[127]) + xx[155] + xx[152]);
  xx[282] = - (xx[146] - (xx[127] * xx[143] + xx[129] * xx[134]) * xx[8]);
  xx[283] = - (xx[8] * (xx[163] + xx[157] * xx[127]) + xx[160]);
  xx[284] = - ((xx[128] * xx[128] + xx[129] * xx[129]) * xx[8] - xx[54]);
  xx[285] = xx[0];
  xx[286] = xx[0];
  xx[287] = - ((xx[177] - xx[123] * xx[5]) * xx[8] - xx[166] + xx[192] + xx[189]);
  xx[288] = - (xx[8] * (xx[123] * xx[57] - xx[125] * xx[58]) + xx[181]);
  xx[289] = - ((xx[198] - xx[123] * xx[43]) * xx[8] - xx[59] + xx[195]);
  xx[290] = (xx[123] * xx[125] + xx[124] * xx[126]) * xx[8];
  xx[291] = xx[0];
  xx[292] = xx[0];
  xx[293] = xx[0];
  xx[294] = xx[0];
  xx[295] = xx[0];
  xx[296] = xx[0];
  xx[297] = xx[0];
  xx[298] = xx[0];
  xx[299] = xx[0];
  xx[300] = xx[0];
  xx[301] = - ((xx[178] - xx[123] * xx[164]) * xx[8] + xx[165] + xx[193] + xx
               [190]);
  xx[302] = - (xx[182] + (xx[126] * xx[57] + xx[124] * xx[58]) * xx[8] - xx[21]);
  xx[303] = - ((xx[199] - xx[123] * xx[169]) * xx[8] + xx[11] + xx[196]);
  xx[304] = - (xx[8] * (xx[123] * xx[124] - xx[125] * xx[126]));
  xx[305] = xx[0];
  xx[306] = xx[0];
  xx[307] = xx[0];
  xx[308] = xx[0];
  xx[309] = xx[0];
  xx[310] = xx[0];
  xx[311] = xx[0];
  xx[312] = xx[0];
  xx[313] = xx[0];
  xx[314] = xx[0];
  xx[315] = - (xx[8] * (xx[179] + xx[167] * xx[123]) + xx[194] + xx[191]);
  xx[316] = - (xx[183] - (xx[123] * xx[58] + xx[125] * xx[57]) * xx[8]);
  xx[317] = - (xx[8] * (xx[200] + xx[174] * xx[123]) + xx[197]);
  xx[318] = - ((xx[124] * xx[124] + xx[125] * xx[125]) * xx[8] - xx[54]);
  xx[319] = xx[0];
  xx[320] = xx[0];
  xx[321] = xx[0];
  xx[322] = xx[0];
  xx[323] = xx[0];
  xx[324] = xx[0];
  xx[325] = xx[0];
  xx[326] = xx[0];
  xx[37] = - (xx[7] * xx[94]);
  xx[38] = xx[9] * xx[94];
  xx[39] = xx[94];
  pm_math_Quaternion_inverseXform_ra(xx + 16, xx + 37, xx + 43);
  xx[0] = xx[50] * xx[98] - xx[97];
  xx[2] = xx[43] + xx[0];
  xx[3] = xx[2] * xx[21];
  xx[5] = xx[33] * xx[3];
  xx[11] = xx[56] * xx[98];
  xx[20] = xx[44] + xx[11];
  xx[40] = xx[20] * xx[21];
  xx[41] = xx[33] * xx[40];
  xx[43] = xx[31] * xx[3] + xx[32] * xx[40];
  xx[44] = - xx[5];
  xx[45] = - xx[41];
  xx[46] = xx[43];
  pm_math_Vector3_cross_ra(xx + 31, xx + 44, xx + 57);
  xx[44] = xx[21] * xx[0];
  xx[0] = xx[15] * xx[44];
  xx[45] = xx[21] * xx[11];
  xx[11] = xx[15] * xx[45];
  xx[46] = xx[44] * xx[4] + xx[45] * xx[10];
  xx[68] = - xx[0];
  xx[69] = - xx[11];
  xx[70] = xx[46];
  pm_math_Vector3_cross_ra(xx + 34, xx + 68, xx + 71);
  xx[51] = xx[55] - xx[64];
  xx[52] = xx[53] + xx[62];
  xx[60] = xx[51];
  xx[61] = xx[52];
  xx[62] = xx[47] - xx[48];
  pm_math_Vector3_cross_ra(xx + 37, xx + 60, xx + 68);
  xx[37] = (xx[71] - xx[1] * xx[0]) * xx[8] - xx[45] + xx[68];
  xx[38] = (xx[72] - xx[1] * xx[11]) * xx[8] + xx[44] + xx[69];
  xx[39] = xx[8] * (xx[73] + xx[1] * xx[46]) + xx[70];
  pm_math_Quaternion_xform_ra(xx + 26, xx + 37, xx + 44);
  xx[37] = - (xx[20] * xx[49]);
  xx[38] = xx[2] * xx[49];
  xx[39] = - xx[100];
  pm_math_Quaternion_xform_ra(xx + 30, xx + 37, xx + 60);
  xx[37] = - (xx[7] * xx[102]);
  xx[38] = xx[9] * xx[102];
  xx[39] = xx[102];
  pm_math_Quaternion_inverseXform_ra(xx + 115, xx + 37, xx + 68);
  xx[0] = xx[141] * xx[106] - xx[105];
  xx[2] = xx[68] + xx[0];
  xx[11] = xx[2] * xx[21];
  xx[20] = xx[130] * xx[11];
  xx[47] = xx[148] * xx[106];
  xx[54] = xx[69] + xx[47];
  xx[64] = xx[54] * xx[21];
  xx[68] = xx[130] * xx[64];
  xx[69] = xx[128] * xx[11] + xx[129] * xx[64];
  xx[70] = - xx[20];
  xx[71] = - xx[68];
  xx[72] = xx[69];
  pm_math_Vector3_cross_ra(xx + 128, xx + 70, xx + 73);
  xx[70] = xx[21] * xx[0];
  xx[0] = xx[78] * xx[70];
  xx[71] = xx[21] * xx[47];
  xx[47] = xx[78] * xx[71];
  xx[72] = xx[70] * xx[76] + xx[71] * xx[77];
  xx[109] = - xx[0];
  xx[110] = - xx[47];
  xx[111] = xx[72];
  pm_math_Vector3_cross_ra(xx + 76, xx + 109, xx + 112);
  xx[79] = xx[55] - xx[149];
  xx[80] = xx[53] + xx[147];
  xx[109] = xx[79];
  xx[110] = xx[80];
  xx[111] = xx[139] - xx[48];
  pm_math_Vector3_cross_ra(xx + 37, xx + 109, xx + 131);
  xx[37] = (xx[112] - xx[63] * xx[0]) * xx[8] - xx[71] + xx[131];
  xx[38] = (xx[113] - xx[63] * xx[47]) * xx[8] + xx[70] + xx[132];
  xx[39] = xx[8] * (xx[114] + xx[63] * xx[72]) + xx[133];
  pm_math_Quaternion_xform_ra(xx + 119, xx + 37, xx + 70);
  xx[37] = - (xx[54] * xx[140]);
  xx[38] = xx[2] * xx[140];
  xx[39] = - xx[108];
  pm_math_Quaternion_xform_ra(xx + 127, xx + 37, xx + 109);
  xx[37] = - (xx[7] * xx[86]);
  xx[38] = xx[9] * xx[86];
  xx[39] = xx[86];
  pm_math_Quaternion_inverseXform_ra(xx + 22, xx + 37, xx + 112);
  xx[0] = xx[13] * xx[90] - xx[89];
  xx[2] = xx[112] + xx[0];
  xx[47] = xx[2] * xx[21];
  xx[54] = xx[126] * xx[47];
  xx[112] = xx[168] * xx[90];
  xx[114] = xx[113] + xx[112];
  xx[113] = xx[114] * xx[21];
  xx[131] = xx[126] * xx[113];
  xx[132] = xx[124] * xx[47] + xx[125] * xx[113];
  xx[133] = - xx[54];
  xx[134] = - xx[131];
  xx[135] = xx[132];
  pm_math_Vector3_cross_ra(xx + 124, xx + 133, xx + 142);
  xx[133] = xx[21] * xx[0];
  xx[0] = xx[25] * xx[133];
  xx[134] = xx[21] * xx[112];
  xx[112] = xx[25] * xx[134];
  xx[135] = xx[133] * xx[23] + xx[134] * xx[24];
  xx[145] = - xx[0];
  xx[146] = - xx[112];
  xx[147] = xx[135];
  pm_math_Vector3_cross_ra(xx + 23, xx + 145, xx + 153);
  xx[136] = xx[55] - xx[188];
  xx[55] = xx[53] + xx[186];
  xx[145] = xx[136];
  xx[146] = xx[55];
  xx[147] = xx[176] - xx[48];
  pm_math_Vector3_cross_ra(xx + 37, xx + 145, xx + 156);
  xx[37] = (xx[153] - xx[22] * xx[0]) * xx[8] - xx[134] + xx[156];
  xx[38] = (xx[154] - xx[22] * xx[112]) * xx[8] + xx[133] + xx[157];
  xx[39] = xx[8] * (xx[155] + xx[22] * xx[135]) + xx[158];
  pm_math_Quaternion_xform_ra(xx + 170, xx + 37, xx + 133);
  xx[37] = - (xx[114] * xx[180]);
  xx[38] = xx[2] * xx[180];
  xx[39] = - xx[92];
  pm_math_Quaternion_xform_ra(xx + 123, xx + 37, xx + 145);
  xx[153] = (xx[57] - xx[30] * xx[5]) * xx[8] - xx[40] + xx[65] * xx[94] + xx[44]
    + xx[60];
  xx[154] = (xx[58] - xx[30] * xx[41]) * xx[8] + xx[3] + xx[66] * xx[94] + xx[45]
    + xx[61];
  xx[155] = xx[8] * (xx[59] + xx[43] * xx[30]) + xx[67] * xx[94] + xx[46] + xx
    [62];
  xx[156] = (xx[73] - xx[127] * xx[20]) * xx[8] - xx[64] + xx[150] * xx[102] +
    xx[70] + xx[109];
  xx[157] = (xx[74] - xx[127] * xx[68]) * xx[8] + xx[11] + xx[151] * xx[102] +
    xx[71] + xx[110];
  xx[158] = xx[8] * (xx[75] + xx[69] * xx[127]) + xx[152] * xx[102] + xx[72] +
    xx[111];
  xx[159] = (xx[142] - xx[123] * xx[54]) * xx[8] - xx[113] + xx[189] * xx[86] +
    xx[133] + xx[145];
  xx[160] = (xx[143] - xx[123] * xx[131]) * xx[8] + xx[47] + xx[190] * xx[86] +
    xx[134] + xx[146];
  xx[161] = xx[8] * (xx[144] + xx[132] * xx[123]) + xx[191] * xx[86] + xx[135] +
    xx[147];
  memcpy(xx + 341, xx + 201, 126 * sizeof(double));
  factorAndSolveWide(9, 14, xx + 341, xx + 192, xx + 467, ii + 0, xx + 153, xx[6],
                     xx + 327);
  xx[0] = xx[86] + xx[329];
  xx[2] = xx[89] + xx[330];
  xx[3] = xx[90] + xx[331];
  xx[5] = xx[92] + xx[332];
  xx[6] = xx[94] + xx[333];
  xx[11] = xx[97] + xx[334];
  xx[20] = xx[98] + xx[335];
  xx[37] = xx[100] + xx[336];
  xx[38] = xx[102] + xx[337];
  xx[39] = xx[105] + xx[338];
  xx[40] = xx[106] + xx[339];
  xx[41] = xx[108] + xx[340];
  xx[192] = xx[81];
  xx[193] = xx[82] + xx[327];
  xx[194] = xx[83];
  xx[195] = xx[84] + xx[328];
  xx[196] = xx[85];
  xx[197] = xx[0];
  xx[198] = xx[87];
  xx[199] = xx[88];
  xx[200] = xx[2];
  xx[201] = xx[3];
  xx[202] = xx[91];
  xx[203] = xx[5];
  xx[204] = xx[93];
  xx[205] = xx[6];
  xx[206] = xx[95];
  xx[207] = xx[96];
  xx[208] = xx[11];
  xx[209] = xx[20];
  xx[210] = xx[99];
  xx[211] = xx[37];
  xx[212] = xx[101];
  xx[213] = xx[38];
  xx[214] = xx[103];
  xx[215] = xx[104];
  xx[216] = xx[39];
  xx[217] = xx[40];
  xx[218] = xx[107];
  xx[219] = xx[41];
  xx[43] = - (xx[6] * xx[7]);
  xx[44] = xx[6] * xx[9];
  xx[45] = xx[6];
  pm_math_Quaternion_inverseXform_ra(xx + 16, xx + 43, xx + 46);
  xx[16] = xx[50] * xx[20] - xx[11];
  xx[11] = xx[46] + xx[16];
  xx[17] = xx[11] * xx[21];
  xx[18] = xx[33] * xx[17];
  xx[19] = xx[20] * xx[56];
  xx[20] = xx[47] + xx[19];
  xx[46] = xx[20] * xx[21];
  xx[47] = xx[33] * xx[46];
  xx[48] = xx[31] * xx[17] + xx[32] * xx[46];
  xx[56] = - xx[18];
  xx[57] = - xx[47];
  xx[58] = xx[48];
  pm_math_Vector3_cross_ra(xx + 31, xx + 56, xx + 59);
  xx[50] = xx[21] * xx[16];
  xx[16] = xx[15] * xx[50];
  xx[53] = xx[21] * xx[19];
  xx[19] = xx[15] * xx[53];
  xx[15] = xx[50] * xx[4] + xx[53] * xx[10];
  xx[56] = - xx[16];
  xx[57] = - xx[19];
  xx[58] = xx[15];
  pm_math_Vector3_cross_ra(xx + 34, xx + 56, xx + 68);
  xx[34] = xx[51];
  xx[35] = xx[52];
  xx[36] = xx[42] - xx[12];
  pm_math_Vector3_cross_ra(xx + 43, xx + 34, xx + 56);
  xx[34] = (xx[68] - xx[1] * xx[16]) * xx[8] - xx[53] + xx[56];
  xx[35] = (xx[69] - xx[1] * xx[19]) * xx[8] + xx[50] + xx[57];
  xx[36] = xx[8] * (xx[70] + xx[1] * xx[15]) + xx[58];
  pm_math_Quaternion_xform_ra(xx + 26, xx + 34, xx + 42);
  xx[26] = - (xx[20] * xx[49]);
  xx[27] = xx[11] * xx[49];
  xx[28] = - xx[37];
  pm_math_Quaternion_xform_ra(xx + 30, xx + 26, xx + 34);
  xx[26] = - (xx[38] * xx[7]);
  xx[27] = xx[38] * xx[9];
  xx[28] = xx[38];
  pm_math_Quaternion_inverseXform_ra(xx + 115, xx + 26, xx + 31);
  xx[1] = xx[141] * xx[40] - xx[39];
  xx[4] = xx[31] + xx[1];
  xx[10] = xx[4] * xx[21];
  xx[11] = xx[130] * xx[10];
  xx[15] = xx[40] * xx[148];
  xx[16] = xx[32] + xx[15];
  xx[19] = xx[16] * xx[21];
  xx[20] = xx[130] * xx[19];
  xx[29] = xx[128] * xx[10] + xx[129] * xx[19];
  xx[31] = - xx[11];
  xx[32] = - xx[20];
  xx[33] = xx[29];
  pm_math_Vector3_cross_ra(xx + 128, xx + 31, xx + 49);
  xx[31] = xx[21] * xx[1];
  xx[1] = xx[78] * xx[31];
  xx[32] = xx[21] * xx[15];
  xx[15] = xx[78] * xx[32];
  xx[33] = xx[31] * xx[76] + xx[32] * xx[77];
  xx[52] = - xx[1];
  xx[53] = - xx[15];
  xx[54] = xx[33];
  pm_math_Vector3_cross_ra(xx + 76, xx + 52, xx + 56);
  xx[52] = xx[79];
  xx[53] = xx[80];
  xx[54] = xx[138] - xx[12];
  pm_math_Vector3_cross_ra(xx + 26, xx + 52, xx + 68);
  xx[26] = (xx[56] - xx[63] * xx[1]) * xx[8] - xx[32] + xx[68];
  xx[27] = (xx[57] - xx[63] * xx[15]) * xx[8] + xx[31] + xx[69];
  xx[28] = xx[8] * (xx[58] + xx[63] * xx[33]) + xx[70];
  pm_math_Quaternion_xform_ra(xx + 119, xx + 26, xx + 31);
  xx[26] = - (xx[16] * xx[140]);
  xx[27] = xx[4] * xx[140];
  xx[28] = - xx[41];
  pm_math_Quaternion_xform_ra(xx + 127, xx + 26, xx + 39);
  xx[26] = - (xx[0] * xx[7]);
  xx[27] = xx[0] * xx[9];
  xx[28] = xx[0];
  pm_math_Quaternion_inverseXform_ra(xx + 22, xx + 26, xx + 52);
  xx[1] = xx[13] * xx[3] - xx[2];
  xx[2] = xx[52] + xx[1];
  xx[4] = xx[2] * xx[21];
  xx[7] = xx[126] * xx[4];
  xx[9] = xx[3] * xx[168];
  xx[3] = xx[53] + xx[9];
  xx[13] = xx[3] * xx[21];
  xx[15] = xx[126] * xx[13];
  xx[16] = xx[124] * xx[4] + xx[125] * xx[13];
  xx[52] = - xx[7];
  xx[53] = - xx[15];
  xx[54] = xx[16];
  pm_math_Vector3_cross_ra(xx + 124, xx + 52, xx + 56);
  xx[37] = xx[21] * xx[1];
  xx[1] = xx[25] * xx[37];
  xx[45] = xx[21] * xx[9];
  xx[9] = xx[25] * xx[45];
  xx[21] = xx[37] * xx[23] + xx[45] * xx[24];
  xx[52] = - xx[1];
  xx[53] = - xx[9];
  xx[54] = xx[21];
  pm_math_Vector3_cross_ra(xx + 23, xx + 52, xx + 62);
  xx[23] = xx[136];
  xx[24] = xx[55];
  xx[25] = xx[175] - xx[12];
  pm_math_Vector3_cross_ra(xx + 26, xx + 23, xx + 52);
  xx[23] = (xx[62] - xx[22] * xx[1]) * xx[8] - xx[45] + xx[52];
  xx[24] = (xx[63] - xx[22] * xx[9]) * xx[8] + xx[37] + xx[53];
  xx[25] = xx[8] * (xx[64] + xx[22] * xx[21]) + xx[54];
  pm_math_Quaternion_xform_ra(xx + 170, xx + 23, xx + 26);
  xx[21] = - (xx[3] * xx[180]);
  xx[22] = xx[2] * xx[180];
  xx[23] = - xx[5];
  pm_math_Quaternion_xform_ra(xx + 123, xx + 21, xx + 1);
  xx[68] = fabs(- ((xx[59] - xx[30] * xx[18]) * xx[8] - xx[46] + xx[6] * xx[65]
                   + xx[42] + xx[34]));
  xx[69] = fabs(- ((xx[60] - xx[30] * xx[47]) * xx[8] + xx[17] + xx[6] * xx[66]
                   + xx[43] + xx[35]));
  xx[70] = fabs(- (xx[8] * (xx[61] + xx[48] * xx[30]) + xx[6] * xx[67] + xx[44]
                   + xx[36]));
  xx[71] = fabs(- ((xx[49] - xx[127] * xx[11]) * xx[8] - xx[19] + xx[38] * xx
                   [150] + xx[31] + xx[39]));
  xx[72] = fabs(- ((xx[50] - xx[127] * xx[20]) * xx[8] + xx[10] + xx[38] * xx
                   [151] + xx[32] + xx[40]));
  xx[73] = fabs(- (xx[8] * (xx[51] + xx[29] * xx[127]) + xx[38] * xx[152] + xx
                   [33] + xx[41]));
  xx[74] = fabs(- ((xx[56] - xx[123] * xx[7]) * xx[8] - xx[13] + xx[0] * xx[189]
                   + xx[26] + xx[1]));
  xx[75] = fabs(- ((xx[57] - xx[123] * xx[15]) * xx[8] + xx[4] + xx[0] * xx[190]
                   + xx[27] + xx[2]));
  xx[76] = fabs(- (xx[8] * (xx[58] + xx[16] * xx[123]) + xx[0] * xx[191] + xx[28]
                   + xx[3]));
  ii[0] = 68;

  {
    int ll;
    for (ll = 69; ll < 77; ++ll)
      if (xx[ll] > xx[ii[0]])
        ii[0] = ll;
  }

  ii[0] -= 68;
  xx[0] = xx[68 + (ii[0])];
  if (xx[0] > xx[14]) {
    switch (ii[0])
    {
     case 0:
     case 1:
     case 2:
      {
        return sm_ssci_recordRunTimeError(
          "sm:compiler:messages:simulationErrors:ConstraintViolation",
          "'Wind_Turbine/Spherical  Joint1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem.",
          neDiagMgr);
      }

     case 3:
     case 4:
     case 5:
      {
        return sm_ssci_recordRunTimeError(
          "sm:compiler:messages:simulationErrors:ConstraintViolation",
          "'Wind_Turbine/Spherical  Joint2' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem.",
          neDiagMgr);
      }

     case 6:
     case 7:
     case 8:
      {
        return sm_ssci_recordRunTimeError(
          "sm:compiler:messages:simulationErrors:ConstraintViolation",
          "'Wind_Turbine/Spherical  Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem.",
          neDiagMgr);
      }
    }
  }

  state[0] = xx[192];
  state[1] = xx[193];
  state[2] = xx[194];
  state[3] = xx[195];
  state[4] = xx[196];
  state[5] = xx[197];
  state[6] = xx[198];
  state[7] = xx[199];
  state[8] = xx[200];
  state[9] = xx[201];
  state[10] = xx[202];
  state[11] = xx[203];
  state[12] = xx[204];
  state[13] = xx[205];
  state[14] = xx[206];
  state[15] = xx[207];
  state[16] = xx[208];
  state[17] = xx[209];
  state[18] = xx[210];
  state[19] = xx[211];
  state[20] = xx[212];
  state[21] = xx[213];
  state[22] = xx[214];
  state[23] = xx[215];
  state[24] = xx[216];
  state[25] = xx[217];
  state[26] = xx[218];
  state[27] = xx[219];
  return NULL;
}

void Wind_Turbine_31c4daf8_1_computeConstraintError(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, const int *modeVector,
  double *error)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[67];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  xx[0] = - 0.3535533854521294;
  xx[1] = - 0.6123723078740739;
  xx[2] = 0.3535531589048324;
  xx[3] = - 0.6123727002510262;
  xx[4] = 0.5;
  xx[5] = xx[4] * state[12];
  xx[6] = 6.407547900609781e-7;
  xx[7] = sin(xx[5]);
  xx[8] = 3.867410137128462e-7;
  xx[9] = cos(xx[5]);
  xx[10] = - (xx[6] * xx[7]);
  xx[11] = xx[8] * xx[7];
  xx[12] = xx[7];
  pm_math_Quaternion_compose_ra(xx + 0, xx + 9, xx + 13);
  xx[0] = 1.259165044613055e-5;
  xx[1] = xx[4] * state[14];
  xx[2] = cos(xx[1]);
  xx[3] = xx[4] * state[15];
  xx[5] = 1.011242923582525e-11;
  xx[7] = sin(xx[3]);
  xx[9] = 3.867410137194052e-7;
  xx[17] = cos(xx[3]);
  xx[18] = xx[5] * xx[7];
  xx[19] = - xx[7];
  xx[20] = xx[9] * xx[7];
  xx[21] = - 0.9999999999999301;
  xx[22] = 1.933705068580629e-7;
  xx[23] = 3.203773950294993e-7;
  xx[24] = - 5.118166157175355e-12;
  pm_math_Quaternion_compose_ra(xx + 17, xx + 21, xx + 25);
  xx[3] = sin(xx[1]);
  xx[1] = xx[2] * xx[25] + xx[26] * xx[3];
  xx[7] = 0.8;
  xx[10] = xx[2] * xx[27] - xx[28] * xx[3];
  xx[11] = xx[7] * xx[10];
  xx[12] = xx[2] * xx[28] + xx[27] * xx[3];
  xx[17] = xx[2] * xx[26] - xx[25] * xx[3];
  xx[2] = xx[7] * xx[17];
  xx[3] = 2.0;
  xx[18] = 0.4999921507519162;
  xx[19] = 20.89999033362555;
  xx[25] = xx[0] - (xx[1] * xx[11] + xx[12] * xx[2]) * xx[3];
  xx[26] = xx[18] + xx[3] * (xx[1] * xx[2] - xx[12] * xx[11]);
  xx[27] = (xx[2] * xx[17] + xx[11] * xx[10]) * xx[3] - xx[19];
  pm_math_Quaternion_xform_ra(xx + 13, xx + 25, xx + 28);
  xx[25] = 1.252758002333907e-5;
  xx[26] = - 7.810573945025114e-6;
  xx[27] = - 19.99999014025506;
  pm_math_Quaternion_xform_ra(xx + 13, xx + 25, xx + 31);
  xx[34] = xx[1];
  xx[35] = xx[17];
  xx[36] = xx[10];
  xx[37] = xx[12];
  pm_math_Quaternion_compose_ra(xx + 13, xx + 34, xx + 38);
  xx[1] = 1.6;
  xx[2] = xx[1] + state[18];
  xx[10] = xx[40] * xx[2];
  xx[11] = xx[39] * xx[2];
  xx[12] = xx[7] * xx[40];
  xx[13] = xx[7] * xx[39];
  xx[14] = 3.2;
  xx[34] = 0.3535536222753973;
  xx[35] = - 0.6123721711368582;
  xx[36] = - 0.3535533957406371;
  xx[37] = - 0.6123725635210486;
  xx[15] = xx[4] * state[20];
  xx[16] = sin(xx[15]);
  xx[42] = cos(xx[15]);
  xx[43] = - (xx[6] * xx[16]);
  xx[44] = xx[8] * xx[16];
  xx[45] = xx[16];
  pm_math_Quaternion_compose_ra(xx + 34, xx + 42, xx + 46);
  xx[15] = xx[4] * state[22];
  xx[16] = cos(xx[15]);
  xx[17] = xx[4] * state[23];
  xx[20] = sin(xx[17]);
  xx[34] = cos(xx[17]);
  xx[35] = xx[5] * xx[20];
  xx[36] = - xx[20];
  xx[37] = xx[9] * xx[20];
  pm_math_Quaternion_compose_ra(xx + 34, xx + 21, xx + 42);
  xx[17] = sin(xx[15]);
  xx[15] = xx[16] * xx[42] + xx[43] * xx[17];
  xx[20] = xx[16] * xx[44] - xx[45] * xx[17];
  xx[34] = xx[7] * xx[20];
  xx[35] = xx[16] * xx[45] + xx[44] * xx[17];
  xx[36] = xx[16] * xx[43] - xx[42] * xx[17];
  xx[16] = xx[7] * xx[36];
  xx[42] = xx[0] - (xx[15] * xx[34] + xx[35] * xx[16]) * xx[3];
  xx[43] = xx[18] + xx[3] * (xx[15] * xx[16] - xx[35] * xx[34]);
  xx[44] = (xx[16] * xx[36] + xx[34] * xx[20]) * xx[3] - xx[19];
  pm_math_Quaternion_xform_ra(xx + 46, xx + 42, xx + 50);
  pm_math_Quaternion_xform_ra(xx + 46, xx + 25, xx + 42);
  xx[53] = xx[15];
  xx[54] = xx[36];
  xx[55] = xx[20];
  xx[56] = xx[35];
  pm_math_Quaternion_compose_ra(xx + 46, xx + 53, xx + 34);
  xx[15] = xx[1] + state[26];
  xx[16] = xx[36] * xx[15];
  xx[17] = xx[35] * xx[15];
  xx[20] = xx[7] * xx[36];
  xx[45] = xx[7] * xx[35];
  xx[46] = - 0.7071070077275268;
  xx[47] = - 1.367372157708226e-7;
  xx[48] = 0.7071065546454696;
  xx[49] = - 1.367299775908286e-7;
  xx[53] = xx[4] * state[4];
  xx[54] = sin(xx[53]);
  xx[55] = cos(xx[53]);
  xx[56] = - (xx[6] * xx[54]);
  xx[57] = xx[8] * xx[54];
  xx[58] = xx[54];
  pm_math_Quaternion_compose_ra(xx + 46, xx + 55, xx + 59);
  xx[6] = xx[4] * state[6];
  xx[8] = cos(xx[6]);
  xx[46] = xx[4] * state[7];
  xx[47] = sin(xx[46]);
  xx[53] = cos(xx[46]);
  xx[54] = xx[5] * xx[47];
  xx[55] = - xx[47];
  xx[56] = xx[9] * xx[47];
  pm_math_Quaternion_compose_ra(xx + 53, xx + 21, xx + 46);
  xx[5] = sin(xx[6]);
  xx[6] = xx[8] * xx[46] + xx[47] * xx[5];
  xx[9] = xx[8] * xx[48] - xx[49] * xx[5];
  xx[21] = xx[7] * xx[9];
  xx[22] = xx[8] * xx[49] + xx[48] * xx[5];
  xx[23] = xx[8] * xx[47] - xx[46] * xx[5];
  xx[5] = xx[7] * xx[23];
  xx[46] = xx[0] - (xx[6] * xx[21] + xx[22] * xx[5]) * xx[3];
  xx[47] = xx[18] + xx[3] * (xx[6] * xx[5] - xx[22] * xx[21]);
  xx[48] = (xx[5] * xx[23] + xx[21] * xx[9]) * xx[3] - xx[19];
  pm_math_Quaternion_xform_ra(xx + 59, xx + 46, xx + 53);
  pm_math_Quaternion_xform_ra(xx + 59, xx + 25, xx + 46);
  xx[24] = xx[6];
  xx[25] = xx[23];
  xx[26] = xx[9];
  xx[27] = xx[22];
  pm_math_Quaternion_compose_ra(xx + 59, xx + 24, xx + 63);
  xx[0] = xx[1] + state[10];
  xx[1] = xx[65] * xx[0];
  xx[5] = xx[64] * xx[0];
  xx[6] = xx[7] * xx[65];
  xx[8] = xx[7] * xx[64];
  error[0] = - (0.4830127018922199 + xx[28] - xx[31] - (xx[38] * xx[10] + xx[41]
    * xx[11]) * xx[3] - (xx[38] * xx[12] + xx[41] * xx[13]) * xx[3]);
  error[1] = - (0.1633974596215566 + xx[3] * (xx[38] * xx[13] - xx[41] * xx[12])
                + xx[3] * (xx[38] * xx[11] - xx[41] * xx[10]) + xx[29] - xx[32]);
  error[2] = xx[14] - (xx[30] - xx[33] - xx[2] + (xx[39] * xx[11] + xx[40] * xx
    [10]) * xx[3] + (xx[39] * xx[13] + xx[40] * xx[12]) * xx[3]);
  error[3] = 0.3830127018922198 - (xx[50] - xx[42] - (xx[34] * xx[16] + xx[37] *
    xx[17]) * xx[3] - (xx[34] * xx[20] + xx[37] * xx[45]) * xx[3]);
  error[4] = - (0.3366025403784447 + xx[3] * (xx[34] * xx[45] - xx[37] * xx[20])
                + xx[3] * (xx[34] * xx[17] - xx[37] * xx[16]) + xx[51] - xx[43]);
  error[5] = xx[14] - (xx[52] - xx[44] - xx[15] + (xx[35] * xx[17] + xx[36] *
    xx[16]) * xx[3] + (xx[35] * xx[45] + xx[36] * xx[20]) * xx[3]);
  error[6] = 0.1000000000000001 - (xx[53] - xx[46] - (xx[63] * xx[1] + xx[66] *
    xx[5]) * xx[3] - (xx[63] * xx[6] + xx[66] * xx[8]) * xx[3]);
  error[7] = xx[4] - (xx[3] * (xx[63] * xx[8] - xx[66] * xx[6]) + xx[3] * (xx[63]
    * xx[5] - xx[66] * xx[1]) + xx[54] - xx[47]);
  error[8] = xx[14] - (xx[55] - xx[48] - xx[0] + (xx[64] * xx[5] + xx[65] * xx[1])
                       * xx[3] + (xx[64] * xx[8] + xx[65] * xx[6]) * xx[3]);
}

void Wind_Turbine_31c4daf8_1_resetModeVector(const void *mech, int *modeVector)
{
  (void) mech;
  (void) modeVector;
}

boolean_T Wind_Turbine_31c4daf8_1_hasJointDisToNormModeChange(const void *mech,
  const int *prevModeVector, const int *modeVector)
{
  (void) mech;
  (void) prevModeVector;
  (void) modeVector;
  return 0;
}

PmfMessageId Wind_Turbine_31c4daf8_1_performJointDisToNormModeChange(const void *
  mech, const RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const
  int *prevModeVector, const int *modeVector, const double *input, double *state,
  void *neDiagMgr0)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) prevModeVector;
  (void) modeVector;
  (void) input;
  (void) state;
  (void) neDiagMgr;
  return NULL;
}

void Wind_Turbine_31c4daf8_1_onModeChangedCutJoints(const void *mech, const int *
  prevModeVector, const int *modeVector, double *state)
{
  (void) mech;
  (void) prevModeVector;
  (void) modeVector;
  (void) state;
}
