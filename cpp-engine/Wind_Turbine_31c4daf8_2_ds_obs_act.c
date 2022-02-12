/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T t0[765];
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_tB;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3;
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Simple_Gear_tB;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1;
  real_T Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2;
  real_T Ideal_Motor_Ideal_Yaw_Motor_3_Simple_Gear_tB;
  real_T Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1;
  real_T Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1;
  real_T Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_;
  real_T Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_;
  real_T Ideal_Motor_Ideal_Yaw_Motor_4_Simple_Gear_tB;
  real_T Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1;
  real_T Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0;
  real_T Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1;
  real_T Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_;
  real_T Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T t1;
  real_T t2;
  int32_T b;
  U_idx_0 = t3->mU.mX[0];
  U_idx_1 = t3->mU.mX[1];
  U_idx_2 = t3->mU.mX[2];
  U_idx_3 = t3->mU.mX[3];
  U_idx_4 = t3->mU.mX[4];
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_2 = t3->mX.mX[2];
  X_idx_3 = t3->mX.mX[3];
  X_idx_4 = t3->mX.mX[4];
  X_idx_5 = t3->mX.mX[5];
  out = t4->mOBS_ACT;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w = ((X_idx_0 *
    0.011111111111111115 + X_idx_5 * 2.1175823681357508E-22) + U_idx_0 *
    -4.3368086899420177E-19) + U_idx_1 * -4.3368086899420177E-19;
  Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    0.33333333333333331;
  Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -0.053333333333333323;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 = ((((X_idx_0 *
    -185.18518518528396 + X_idx_5 * -0.020000000000035704) + U_idx_0 *
    33.750000000006473) + U_idx_1 * -101.25000000002669) + U_idx_2 *
    33.750000000010111) + U_idx_3 * 33.750000000010104;
  Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ = ((((X_idx_0 *
    -185.18518518528396 + X_idx_5 * -0.020000000000035704) + U_idx_0 *
    33.750000000006473) + U_idx_1 * 33.750000000010118) + U_idx_2 *
    -101.25000000002669) + U_idx_3 * 33.750000000010104;
  Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ = ((((X_idx_0 *
    -185.18518518528396 + X_idx_5 * -0.020000000000035704) + U_idx_0 *
    33.750000000006473) + U_idx_1 * 33.750000000010118) + U_idx_2 *
    33.750000000010111) + U_idx_3 * -101.2500000000267;
  Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_tB =
    (((Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
       99999.999999999985 +
       Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 * 2.0) +
      Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ * 2.0) +
     Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ * 2.0) +
    X_idx_5 * 0.16;
  t1 = ((((X_idx_0 * -3.2908159907278014 + X_idx_5 * -0.00035540812699726756) +
          U_idx_0 * -1.9002487856892438) + U_idx_1 * 0.59975121431121625) +
        U_idx_2 * 0.59975121431121559) + U_idx_3 * 0.59975121431121536;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 = ((((X_idx_0 *
    -15.401018836606106 + X_idx_5 * -0.001663310034347212) + U_idx_0 *
    -8.4431643170256621) + U_idx_1 * 2.80683568297649) + U_idx_2 *
    2.8068356829764887) + U_idx_3 * 2.8068356829764891;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w = X_idx_0 *
    0.19999999999999998;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 = ((((X_idx_0 *
    -61.721082137205869 + X_idx_5 * -0.0066658768707932008) + U_idx_0 *
    -33.751332780482706) + U_idx_1 * 11.248667219525903) + U_idx_2 *
    11.248667219525911) + U_idx_3 * 11.248667219525906;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w = ((X_idx_0 *
    0.04444444444444446 + X_idx_5 * 8.4703294725430034E-22) + U_idx_0 *
    -1.7347234759768071E-18) + U_idx_1 * -1.7347234759768071E-18;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w *
    -1.6666666666666667;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3 = t1 *
    0.99999999999999978;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w *
    -1.7999999999999998;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3 =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    0.99999999999999978;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w * -2.0;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2 =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -1.3333333333333333;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 =
    (((Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
       -66666.666666666657 +
       -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2) +
      -Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_) +
     -Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_) + X_idx_5
    * -0.08;
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    33333.333333333328;
  Ideal_Motor_Ideal_Yaw_Motor_2_Simple_Gear_tB =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -33333.333333333328 +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 * -2.0;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1 = ((X_idx_0 *
    1.0000000000000002 + X_idx_5 * 1.3552527156068805E-20) + U_idx_0 *
    -8.3266726846886741E-17) + U_idx_1 * -2.7755575615628914E-17;
  t2 = ((((X_idx_0 * -3.2908159907348185 + X_idx_5 * -0.00035540812699980529) +
          U_idx_0 * 0.5997512143112157) + U_idx_1 * -1.9002487856893739) +
        U_idx_2 * 0.59975121431128042) + U_idx_3 * 0.59975121431128;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 = ((((X_idx_0 *
    -15.401018836638945 + X_idx_5 * -0.0016633100343590881) + U_idx_0 *
    2.8068356829764887) + U_idx_1 * -8.44316431702627) + U_idx_2 *
    2.8068356829767915) + U_idx_3 * 2.8068356829767911;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w = ((X_idx_0 *
    0.19999999999999998 + U_idx_0 * -6.9388939039072284E-18) + U_idx_1 *
    -1.3877787807814457E-17) + U_idx_2 * 6.9388939039072284E-18;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 = ((((X_idx_0 *
    -61.721082137337454 + X_idx_5 * -0.0066658768708407895) + U_idx_0 *
    11.248667219525908) + U_idx_1 * -33.751332780485143) + U_idx_2 *
    11.248667219527123) + U_idx_3 * 11.248667219527121;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w = (((X_idx_0 *
    0.04444444444444446 + X_idx_5 * 8.4703294725430034E-22) + U_idx_0 *
    -3.4694469519536142E-18) + U_idx_1 * -1.7347234759768071E-18) + U_idx_2 *
    1.7347234759768071E-18;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w = (((X_idx_0 *
    0.011111111111111115 + X_idx_5 * 2.1175823681357508E-22) + U_idx_0 *
    -8.6736173798840355E-19) + U_idx_1 * -4.3368086899420177E-19) + U_idx_2 *
    4.3368086899420177E-19;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w *
    -1.6666666666666667;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2 =
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w *
    -2.666666666666667;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3 = t2 *
    0.99999999999999978;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5 =
    -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w *
    -1.7999999999999998;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2 =
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w * -2.8;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3 =
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    0.99999999999999978;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5 =
    -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w * -2.0;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2 =
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w * -3.0;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4 =
    -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1 =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -0.33333333333333331 +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  Ideal_Motor_Ideal_Yaw_Motor_3_Simple_Gear_tB =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -33333.333333333328 +
    Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ * -2.0;
  Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 = ((((X_idx_0 *
    -3.2908159907348185 + X_idx_5 * -0.00035540812699980529) + U_idx_0 *
    0.5997512143112157) + U_idx_1 * 0.59975121431128053) + U_idx_2 *
    -1.9002487856893742) + U_idx_3 * 0.59975121431128;
  Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 = ((((X_idx_0 *
    -15.401018836638945 + X_idx_5 * -0.0016633100343590881) + U_idx_0 *
    2.8068356829764887) + U_idx_1 * 2.806835682976792) + U_idx_2 *
    -8.44316431702627) + U_idx_3 * 2.8068356829767911;
  Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ = ((((X_idx_0 *
    -61.721082137337454 + X_idx_5 * -0.0066658768708407895) + U_idx_0 *
    11.248667219525908) + U_idx_1 * 11.248667219527125) + U_idx_2 *
    -33.751332780485143) + U_idx_3 * 11.248667219527121;
  Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    0.99999999999999978;
  Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    0.99999999999999978;
  Ideal_Motor_Ideal_Yaw_Motor_4_Simple_Gear_tB =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -33333.333333333328 +
    Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ * -2.0;
  Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 = ((((X_idx_0 *
    -3.2908159907348185 + X_idx_5 * -0.00035540812699980529) + U_idx_0 *
    0.5997512143112157) + U_idx_1 * 0.59975121431128053) + U_idx_2 *
    0.59975121431128042) + U_idx_3 * -1.9002487856893746;
  Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 = ((((X_idx_0 *
    -15.401018836638945 + X_idx_5 * -0.0016633100343590881) + U_idx_0 *
    2.8068356829764887) + U_idx_1 * 2.806835682976792) + U_idx_2 *
    2.8068356829767915) + U_idx_3 * -8.44316431702627;
  Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ = ((((X_idx_0 *
    -61.721082137337454 + X_idx_5 * -0.0066658768708407895) + U_idx_0 *
    11.248667219525908) + U_idx_1 * 11.248667219527125) + U_idx_2 *
    11.248667219527123) + U_idx_3 * -33.751332780485143;
  Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    0.99999999999999978;
  Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0 =
    Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    0.99999999999999978;
  t0[0ULL] = X_idx_1;
  t0[1ULL] = 0.0;
  t0[2ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[3ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[4ULL] = X_idx_1;
  t0[5ULL] = X_idx_1;
  t0[6ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[7ULL] = 0.0;
  t0[8ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[9ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[10ULL] = 0.0;
  t0[11ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_tB;
  t0[12ULL] = 300.0;
  t0[13ULL] = 0.0;
  t0[14ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[15ULL] = 0.0;
  t0[16ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[17ULL] = 0.0;
  t0[18ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[19ULL] = 0.0;
  t0[20ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[21ULL] = 0.0;
  t0[22ULL] = 0.0;
  t0[23ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_tB * 6.25;
  t0[24ULL] = 0.0;
  t0[25ULL] = 0.0;
  t0[26ULL] = 0.0;
  t0[27ULL] = X_idx_0;
  t0[28ULL] = U_idx_0;
  t0[29ULL] = -U_idx_0;
  t0[30ULL] = -X_idx_0;
  t0[31ULL] = 0.0;
  t0[32ULL] = X_idx_0;
  t0[33ULL] = U_idx_0;
  t0[34ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[35ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[36ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[37ULL] = t1 * -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    0.44444444444444448;
  t0[38ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[39ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[40ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[41ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 * 0.5;
  t0[42ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[43ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[44ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[45ULL] = ((((Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
                  -44444.444444444438 +
                  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5
                  * -2.0) +
                 Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2
                 * -0.66666666666666663) +
                Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
                -0.66666666666666663) +
               Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
               -0.66666666666666663) + X_idx_5 * -0.05333333333333333;
  t0[46ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[47ULL] = X_idx_0;
  t0[48ULL] = X_idx_0;
  t0[49ULL] = t1 * 0.39999999999999997 + U_idx_0;
  t0[50ULL] = X_idx_0;
  t0[51ULL] = 0.0;
  t0[52ULL] = 0.0;
  t0[53ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[54ULL] = 0.0;
  t0[55ULL] = 0.0;
  t0[56ULL] = X_idx_0;
  t0[57ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[58ULL] = 0.0;
  t0[59ULL] = 0.0;
  t0[60ULL] = X_idx_0;
  t0[61ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[62ULL] = 0.0;
  t0[63ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[64ULL] = 0.0;
  t0[65ULL] = 300.0;
  t0[66ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3 *
    0.60000000000000009;
  t0[67ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[68ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[69ULL] = 0.0;
  t0[70ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w *
    -2.666666666666667;
  t0[71ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3;
  t0[72ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3 *
    -1.6;
  t0[73ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[74ULL] = 0.0;
  t0[75ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[76ULL] = X_idx_0;
  t0[77ULL] = 300.0;
  t0[78ULL] = t1 * -0.39999999999999997;
  t0[79ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[80ULL] = X_idx_0;
  t0[81ULL] = 0.0;
  t0[82ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w +
    X_idx_0;
  t0[83ULL] = t1;
  t0[84ULL] = t1 * -0.6;
  t0[85ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[86ULL] = 0.0;
  t0[87ULL] = 0.0;
  t0[88ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[89ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[90ULL] = 0.0;
  t0[91ULL] = 0.0;
  t0[92ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[93ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[94ULL] = 0.0;
  t0[95ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[96ULL] = 0.0;
  t0[97ULL] = 300.0;
  t0[98ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3 *
    0.55555555555555569;
  t0[99ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[100ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[101ULL] = 0.0;
  t0[102ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w *
    -2.8;
  t0[103ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3;
  t0[104ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3 *
    -1.5555555555555558;
  t0[105ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[106ULL] = 0.0;
  t0[107ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[108ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[109ULL] = 300.0;
  t0[110ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.44444444444444448;
  t0[111ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[112ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[113ULL] = 0.0;
  t0[114ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[115ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6;
  t0[116ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.55555555555555558;
  t0[117ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[118ULL] = 0.0;
  t0[119ULL] = 0.0;
  t0[120ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[121ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[122ULL] = 0.0;
  t0[123ULL] = 0.0;
  t0[124ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[125ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[126ULL] = 0.0;
  t0[127ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[128ULL] = 0.0;
  t0[129ULL] = 300.0;
  t0[130ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    0.5;
  t0[131ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[132ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[133ULL] = 0.0;
  t0[134ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -3.0;
  t0[135ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[136ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -1.5;
  t0[137ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[138ULL] = 0.0;
  t0[139ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[140ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[141ULL] = 300.0;
  t0[142ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[143ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[144ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[145ULL] = 0.0;
  t0[146ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[147ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[148ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[149ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[150ULL] = 0.0;
  t0[151ULL] = 0.0;
  t0[152ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[153ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[154ULL] = 0.0;
  t0[155ULL] = 0.0;
  t0[156ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[157ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[158ULL] = 0.0;
  t0[159ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[160ULL] = 0.0;
  t0[161ULL] = 300.0;
  t0[162ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    0.33333333333333331;
  t0[163ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[164ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[165ULL] = 0.0;
  t0[166ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[167ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3;
  t0[168ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    -1.3333333333333333;
  t0[169ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[170ULL] = 0.0;
  t0[171ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[172ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[173ULL] = 300.0;
  t0[174ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    -0.66666666666666663;
  t0[175ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[176ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[177ULL] = 0.0;
  t0[178ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    0.66666666666666674;
  t0[179ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3;
  t0[180ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    -0.33333333333333331;
  t0[181ULL] = 0.0;
  t0[182ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[183ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[184ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[185ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[186ULL] = X_idx_0;
  t0[187ULL] = X_idx_2;
  t0[188ULL] = 0.0;
  t0[189ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[190ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[191ULL] = X_idx_2;
  t0[192ULL] = X_idx_2;
  t0[193ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[194ULL] = 0.0;
  t0[195ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[196ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[197ULL] = 0.0;
  t0[198ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Simple_Gear_tB;
  t0[199ULL] = 300.0;
  t0[200ULL] = 0.0;
  t0[201ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[202ULL] = 0.0;
  t0[203ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[204ULL] = 0.0;
  t0[205ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[206ULL] = 0.0;
  t0[207ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[208ULL] = 0.0;
  t0[209ULL] = 0.0;
  t0[210ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Simple_Gear_tB * 6.25;
  t0[211ULL] = 0.0;
  t0[212ULL] = 0.0;
  t0[213ULL] = 0.0;
  t0[214ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[215ULL] = U_idx_1;
  t0[216ULL] = -U_idx_1;
  t0[217ULL] = -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[218ULL] = 0.0;
  t0[219ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[220ULL] = U_idx_1;
  t0[221ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[222ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[223ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[224ULL] = t2 * -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    0.44444444444444448;
  t0[225ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[226ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[227ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[228ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 * 0.5;
  t0[229ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[230ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[231ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[232ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -2.0 + Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    0.66666666666666663;
  t0[233ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[234ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[235ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[236ULL] = t2 * 0.39999999999999997 + U_idx_1;
  t0[237ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[238ULL] = 0.0;
  t0[239ULL] = 0.0;
  t0[240ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[241ULL] = 0.0;
  t0[242ULL] = 0.0;
  t0[243ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[244ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[245ULL] = 0.0;
  t0[246ULL] = 0.0;
  t0[247ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[248ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[249ULL] = 0.0;
  t0[250ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[251ULL] = 0.0;
  t0[252ULL] = 300.0;
  t0[253ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3 *
    0.60000000000000009;
  t0[254ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[255ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[256ULL] = 0.0;
  t0[257ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2;
  t0[258ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3;
  t0[259ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3 *
    -1.6;
  t0[260ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[261ULL] = 0.0;
  t0[262ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[263ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[264ULL] = 300.0;
  t0[265ULL] = t2 * -0.39999999999999997;
  t0[266ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[267ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[268ULL] = 0.0;
  t0[269ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5;
  t0[270ULL] = t2;
  t0[271ULL] = t2 * -0.6;
  t0[272ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[273ULL] = 0.0;
  t0[274ULL] = 0.0;
  t0[275ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[276ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[277ULL] = 0.0;
  t0[278ULL] = 0.0;
  t0[279ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[280ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[281ULL] = 0.0;
  t0[282ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[283ULL] = 0.0;
  t0[284ULL] = 300.0;
  t0[285ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3 *
    0.55555555555555569;
  t0[286ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[287ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[288ULL] = 0.0;
  t0[289ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2;
  t0[290ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3;
  t0[291ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3 *
    -1.5555555555555558;
  t0[292ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[293ULL] = 0.0;
  t0[294ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[295ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[296ULL] = 300.0;
  t0[297ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.44444444444444448;
  t0[298ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[299ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[300ULL] = 0.0;
  t0[301ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5;
  t0[302ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6;
  t0[303ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.55555555555555558;
  t0[304ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[305ULL] = 0.0;
  t0[306ULL] = 0.0;
  t0[307ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[308ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[309ULL] = 0.0;
  t0[310ULL] = 0.0;
  t0[311ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[312ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[313ULL] = 0.0;
  t0[314ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[315ULL] = 0.0;
  t0[316ULL] = 300.0;
  t0[317ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    0.5;
  t0[318ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[319ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[320ULL] = 0.0;
  t0[321ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2;
  t0[322ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[323ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -1.5;
  t0[324ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[325ULL] = 0.0;
  t0[326ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[327ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[328ULL] = 300.0;
  t0[329ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[330ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[331ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[332ULL] = 0.0;
  t0[333ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4;
  t0[334ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[335ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[336ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[337ULL] = 0.0;
  t0[338ULL] = 0.0;
  t0[339ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[340ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[341ULL] = 0.0;
  t0[342ULL] = 0.0;
  t0[343ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[344ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[345ULL] = 0.0;
  t0[346ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[347ULL] = 0.0;
  t0[348ULL] = 300.0;
  t0[349ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    0.33333333333333331;
  t0[350ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[351ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[352ULL] = 0.0;
  t0[353ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[354ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[355ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    -1.3333333333333333;
  t0[356ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[357ULL] = 0.0;
  t0[358ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[359ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[360ULL] = 300.0;
  t0[361ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    -0.66666666666666663;
  t0[362ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[363ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[364ULL] = 0.0;
  t0[365ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1;
  t0[366ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[367ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    -0.33333333333333331;
  t0[368ULL] = 0.0;
  t0[369ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[370ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[371ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[372ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[373ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[374ULL] = X_idx_3;
  t0[375ULL] = 0.0;
  t0[376ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[377ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[378ULL] = X_idx_3;
  t0[379ULL] = X_idx_3;
  t0[380ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[381ULL] = 0.0;
  t0[382ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[383ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[384ULL] = 0.0;
  t0[385ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Simple_Gear_tB;
  t0[386ULL] = 300.0;
  t0[387ULL] = 0.0;
  t0[388ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[389ULL] = 0.0;
  t0[390ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[391ULL] = 0.0;
  t0[392ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[393ULL] = 0.0;
  t0[394ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[395ULL] = 0.0;
  t0[396ULL] = 0.0;
  t0[397ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Simple_Gear_tB * 6.25;
  t0[398ULL] = 0.0;
  t0[399ULL] = 0.0;
  t0[400ULL] = 0.0;
  t0[401ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[402ULL] = U_idx_2;
  t0[403ULL] = -U_idx_2;
  t0[404ULL] = -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[405ULL] = 0.0;
  t0[406ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[407ULL] = U_idx_2;
  t0[408ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[409ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[410ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[411ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    0.44444444444444448;
  t0[412ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[413ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[414ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[415ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ * 0.5;
  t0[416ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[417ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[418ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[419ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -2.0 + Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.66666666666666663;
  t0[420ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[421ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[422ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[423ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    0.39999999999999997 + U_idx_2;
  t0[424ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[425ULL] = 0.0;
  t0[426ULL] = 0.0;
  t0[427ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[428ULL] = 0.0;
  t0[429ULL] = 0.0;
  t0[430ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[431ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[432ULL] = 0.0;
  t0[433ULL] = 0.0;
  t0[434ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[435ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[436ULL] = 0.0;
  t0[437ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[438ULL] = 0.0;
  t0[439ULL] = 300.0;
  t0[440ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0 *
    0.60000000000000009;
  t0[441ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[442ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[443ULL] = 0.0;
  t0[444ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2;
  t0[445ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[446ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0 *
    -1.6;
  t0[447ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[448ULL] = 0.0;
  t0[449ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[450ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[451ULL] = 300.0;
  t0[452ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.39999999999999997;
  t0[453ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[454ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[455ULL] = 0.0;
  t0[456ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5;
  t0[457ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1;
  t0[458ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.6;
  t0[459ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[460ULL] = 0.0;
  t0[461ULL] = 0.0;
  t0[462ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[463ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[464ULL] = 0.0;
  t0[465ULL] = 0.0;
  t0[466ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[467ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[468ULL] = 0.0;
  t0[469ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[470ULL] = 0.0;
  t0[471ULL] = 300.0;
  t0[472ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0 *
    0.55555555555555569;
  t0[473ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[474ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[475ULL] = 0.0;
  t0[476ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2;
  t0[477ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[478ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0 *
    -1.5555555555555558;
  t0[479ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[480ULL] = 0.0;
  t0[481ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[482ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[483ULL] = 300.0;
  t0[484ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.44444444444444448;
  t0[485ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[486ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[487ULL] = 0.0;
  t0[488ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5;
  t0[489ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1;
  t0[490ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.55555555555555558;
  t0[491ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[492ULL] = 0.0;
  t0[493ULL] = 0.0;
  t0[494ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[495ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[496ULL] = 0.0;
  t0[497ULL] = 0.0;
  t0[498ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[499ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[500ULL] = 0.0;
  t0[501ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[502ULL] = 0.0;
  t0[503ULL] = 300.0;
  t0[504ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    0.5;
  t0[505ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[506ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[507ULL] = 0.0;
  t0[508ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2;
  t0[509ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[510ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -1.5;
  t0[511ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[512ULL] = 0.0;
  t0[513ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[514ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[515ULL] = 300.0;
  t0[516ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[517ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[518ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[519ULL] = 0.0;
  t0[520ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4;
  t0[521ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[522ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[523ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[524ULL] = 0.0;
  t0[525ULL] = 0.0;
  t0[526ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[527ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[528ULL] = 0.0;
  t0[529ULL] = 0.0;
  t0[530ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[531ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[532ULL] = 0.0;
  t0[533ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[534ULL] = 0.0;
  t0[535ULL] = 300.0;
  t0[536ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.33333333333333331;
  t0[537ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[538ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[539ULL] = 0.0;
  t0[540ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[541ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[542ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -1.3333333333333333;
  t0[543ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[544ULL] = 0.0;
  t0[545ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[546ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[547ULL] = 300.0;
  t0[548ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.66666666666666663;
  t0[549ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[550ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[551ULL] = 0.0;
  t0[552ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1;
  t0[553ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[554ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.33333333333333331;
  t0[555ULL] = 0.0;
  t0[556ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[557ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[558ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[559ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[560ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[561ULL] = X_idx_4;
  t0[562ULL] = 0.0;
  t0[563ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[564ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[565ULL] = X_idx_4;
  t0[566ULL] = X_idx_4;
  t0[567ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[568ULL] = 0.0;
  t0[569ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[570ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[571ULL] = 0.0;
  t0[572ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Simple_Gear_tB;
  t0[573ULL] = 300.0;
  t0[574ULL] = 0.0;
  t0[575ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[576ULL] = 0.0;
  t0[577ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[578ULL] = 0.0;
  t0[579ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[580ULL] = 0.0;
  t0[581ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[582ULL] = 0.0;
  t0[583ULL] = 0.0;
  t0[584ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Simple_Gear_tB * 6.25;
  t0[585ULL] = 0.0;
  t0[586ULL] = 0.0;
  t0[587ULL] = 0.0;
  t0[588ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[589ULL] = U_idx_3;
  t0[590ULL] = -U_idx_3;
  t0[591ULL] = -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[592ULL] = 0.0;
  t0[593ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[594ULL] = U_idx_3;
  t0[595ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[596ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[597ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[598ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    0.44444444444444448;
  t0[599ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[600ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[601ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[602ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ * 0.5;
  t0[603ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[604ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[605ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[606ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -2.0 + Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.66666666666666663;
  t0[607ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[608ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[609ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[610ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    0.39999999999999997 + U_idx_3;
  t0[611ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[612ULL] = 0.0;
  t0[613ULL] = 0.0;
  t0[614ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[615ULL] = 0.0;
  t0[616ULL] = 0.0;
  t0[617ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[618ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[619ULL] = 0.0;
  t0[620ULL] = 0.0;
  t0[621ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[622ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[623ULL] = 0.0;
  t0[624ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[625ULL] = 0.0;
  t0[626ULL] = 300.0;
  t0[627ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0 *
    0.60000000000000009;
  t0[628ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[629ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[630ULL] = 0.0;
  t0[631ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2;
  t0[632ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[633ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0 *
    -1.6;
  t0[634ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[635ULL] = 0.0;
  t0[636ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[637ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[638ULL] = 300.0;
  t0[639ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.39999999999999997;
  t0[640ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[641ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[642ULL] = 0.0;
  t0[643ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5;
  t0[644ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1;
  t0[645ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.6;
  t0[646ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[647ULL] = 0.0;
  t0[648ULL] = 0.0;
  t0[649ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[650ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[651ULL] = 0.0;
  t0[652ULL] = 0.0;
  t0[653ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[654ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[655ULL] = 0.0;
  t0[656ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[657ULL] = 0.0;
  t0[658ULL] = 300.0;
  t0[659ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0 *
    0.55555555555555569;
  t0[660ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[661ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[662ULL] = 0.0;
  t0[663ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2;
  t0[664ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[665ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0 *
    -1.5555555555555558;
  t0[666ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[667ULL] = 0.0;
  t0[668ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[669ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[670ULL] = 300.0;
  t0[671ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.44444444444444448;
  t0[672ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[673ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[674ULL] = 0.0;
  t0[675ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5;
  t0[676ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1;
  t0[677ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.55555555555555558;
  t0[678ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[679ULL] = 0.0;
  t0[680ULL] = 0.0;
  t0[681ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[682ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[683ULL] = 0.0;
  t0[684ULL] = 0.0;
  t0[685ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[686ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[687ULL] = 0.0;
  t0[688ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[689ULL] = 0.0;
  t0[690ULL] = 300.0;
  t0[691ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    0.5;
  t0[692ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[693ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[694ULL] = 0.0;
  t0[695ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2;
  t0[696ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[697ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -1.5;
  t0[698ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[699ULL] = 0.0;
  t0[700ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[701ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[702ULL] = 300.0;
  t0[703ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[704ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[705ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[706ULL] = 0.0;
  t0[707ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4;
  t0[708ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[709ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[710ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[711ULL] = 0.0;
  t0[712ULL] = 0.0;
  t0[713ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[714ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[715ULL] = 0.0;
  t0[716ULL] = 0.0;
  t0[717ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[718ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[719ULL] = 0.0;
  t0[720ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[721ULL] = 0.0;
  t0[722ULL] = 300.0;
  t0[723ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.33333333333333331;
  t0[724ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[725ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[726ULL] = 0.0;
  t0[727ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[728ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[729ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -1.3333333333333333;
  t0[730ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[731ULL] = 0.0;
  t0[732ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[733ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[734ULL] = 300.0;
  t0[735ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.66666666666666663;
  t0[736ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[737ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[738ULL] = 0.0;
  t0[739ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1;
  t0[740ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[741ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.33333333333333331;
  t0[742ULL] = 0.0;
  t0[743ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[744ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[745ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[746ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[747ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[748ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[749ULL] = 0.0;
  t0[750ULL] = X_idx_5;
  t0[751ULL] = U_idx_4;
  t0[752ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[753ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[754ULL] = 0.0;
  t0[755ULL] = U_idx_4;
  t0[756ULL] = X_idx_5;
  t0[757ULL] = U_idx_4;
  t0[758ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[759ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[760ULL] = X_idx_5;
  t0[761ULL] = X_idx_5;
  t0[762ULL] = 0.0;
  t0[763ULL] = X_idx_5;
  t0[764ULL] = U_idx_4;
  for (b = 0; b < 765; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t4;
  return 0;
}
