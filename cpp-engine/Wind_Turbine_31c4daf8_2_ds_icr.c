/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_icr.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_icr(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  real_T P_R_idx_1;
  real_T P_R_idx_10;
  real_T P_R_idx_11;
  real_T P_R_idx_12;
  real_T P_R_idx_13;
  real_T P_R_idx_14;
  real_T P_R_idx_15;
  real_T P_R_idx_2;
  real_T P_R_idx_3;
  real_T P_R_idx_4;
  real_T P_R_idx_5;
  real_T P_R_idx_6;
  real_T P_R_idx_7;
  real_T P_R_idx_8;
  real_T P_R_idx_9;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_0;
  real_T X_idx_5;
  U_idx_0 = t1->mU.mX[0];
  U_idx_1 = t1->mU.mX[1];
  U_idx_2 = t1->mU.mX[2];
  X_idx_0 = t1->mX.mX[0];
  X_idx_5 = t1->mX.mX[5];
  P_R_idx_1 = t1->mP_R.mX[1];
  P_R_idx_2 = t1->mP_R.mX[2];
  P_R_idx_3 = t1->mP_R.mX[3];
  P_R_idx_4 = t1->mP_R.mX[4];
  P_R_idx_5 = t1->mP_R.mX[5];
  P_R_idx_6 = t1->mP_R.mX[6];
  P_R_idx_7 = t1->mP_R.mX[7];
  P_R_idx_8 = t1->mP_R.mX[8];
  P_R_idx_9 = t1->mP_R.mX[9];
  P_R_idx_10 = t1->mP_R.mX[10];
  P_R_idx_11 = t1->mP_R.mX[11];
  P_R_idx_12 = t1->mP_R.mX[12];
  P_R_idx_13 = t1->mP_R.mX[13];
  P_R_idx_14 = t1->mP_R.mX[14];
  P_R_idx_15 = t1->mP_R.mX[15];
  out = t2->mICR;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1 = ((X_idx_0 *
    1.0000000000000002 + X_idx_5 * 1.3552527156068805E-20) + U_idx_0 *
    -8.3266726846886741E-17) + U_idx_1 * -2.7755575615628914E-17;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w = ((X_idx_0 *
    0.19999999999999998 + U_idx_0 * -6.9388939039072284E-18) + U_idx_1 *
    -1.3877787807814457E-17) + U_idx_2 * 6.9388939039072284E-18;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w = (((X_idx_0 *
    0.04444444444444446 + X_idx_5 * 8.4703294725430034E-22) + U_idx_0 *
    -3.4694469519536142E-18) + U_idx_1 * -1.7347234759768071E-18) + U_idx_2 *
    1.7347234759768071E-18;
  U_idx_2 = (((X_idx_0 * 0.011111111111111115 + X_idx_5 * 2.1175823681357508E-22)
              + U_idx_0 * -8.6736173798840355E-19) + U_idx_1 *
             -4.3368086899420177E-19) + U_idx_2 * 4.3368086899420177E-19;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = 0.0;
  out.mX[34] = 0.0;
  out.mX[35] = 0.0;
  out.mX[36] = (((X_idx_0 * 0.011111111111111115 + X_idx_5 *
                  2.1175823681357508E-22) + U_idx_0 * -4.3368086899420177E-19) +
                U_idx_1 * -4.3368086899420177E-19) - P_R_idx_6;
  out.mX[37] = X_idx_0 * 0.19999999999999998 - P_R_idx_10;
  out.mX[38] = (((X_idx_0 * 0.04444444444444446 + X_idx_5 *
                  8.4703294725430034E-22) + U_idx_0 * -1.7347234759768071E-18) +
                U_idx_1 * -1.7347234759768071E-18) - P_R_idx_12;
  out.mX[39] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1 -
    P_R_idx_3;
  out.mX[40] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w -
    P_R_idx_11;
  out.mX[41] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w -
    P_R_idx_9;
  out.mX[42] = U_idx_2 - P_R_idx_2;
  out.mX[43] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1 -
    P_R_idx_14;
  out.mX[44] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w -
    P_R_idx_1;
  out.mX[45] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w -
    P_R_idx_7;
  out.mX[46] = U_idx_2 - P_R_idx_15;
  out.mX[47] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1 -
    P_R_idx_5;
  out.mX[48] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w -
    P_R_idx_8;
  out.mX[49] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w -
    P_R_idx_13;
  out.mX[50] = U_idx_2 - P_R_idx_4;
  (void)sys;
  (void)t2;
  return 0;
}
