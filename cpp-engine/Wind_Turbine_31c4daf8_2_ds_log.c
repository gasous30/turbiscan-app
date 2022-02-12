/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_log.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T t0[562];
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
  real_T Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_pow;
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
  out = t4->mLOG;
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
  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_pow =
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t * 1.0E-5;
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
  t0[1ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[2ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[3ULL] = X_idx_1;
  t0[4ULL] = X_idx_1;
  t0[5ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[6ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[7ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[8ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_tB;
  t0[9ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[10ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[11ULL] = 0.0;
  t0[12ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[13ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[14ULL] = 0.0;
  t0[15ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_tB * 6.25;
  t0[16ULL] = X_idx_0;
  t0[17ULL] = U_idx_0;
  t0[18ULL] = -U_idx_0;
  t0[19ULL] = -X_idx_0;
  t0[20ULL] = X_idx_0;
  t0[21ULL] = U_idx_0;
  t0[22ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[23ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[24ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[25ULL] = t1 * -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    0.44444444444444448;
  t0[26ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[27ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[28ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[29ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 * 0.5;
  t0[30ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[31ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[32ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[33ULL] = ((((Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
                  -44444.444444444438 +
                  Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5
                  * -2.0) +
                 Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2
                 * -0.66666666666666663) +
                Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
                -0.66666666666666663) +
               Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
               -0.66666666666666663) + X_idx_5 * -0.05333333333333333;
  t0[34ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[35ULL] = X_idx_0;
  t0[36ULL] = X_idx_0;
  t0[37ULL] = t1 * 0.39999999999999997 + U_idx_0;
  t0[38ULL] = X_idx_0;
  t0[39ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[40ULL] = X_idx_0;
  t0[41ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[42ULL] = X_idx_0;
  t0[43ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[44ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[45ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3 *
    0.60000000000000009;
  t0[46ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[47ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[48ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w *
    -2.666666666666667;
  t0[49ULL] = 0.0;
  t0[50ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3;
  t0[51ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear3 *
    -1.6;
  t0[52ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[53ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[54ULL] = X_idx_0;
  t0[55ULL] = t1 * -0.39999999999999997;
  t0[56ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[57ULL] = X_idx_0;
  t0[58ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w +
    X_idx_0;
  t0[59ULL] = 0.0;
  t0[60ULL] = t1;
  t0[61ULL] = t1 * -0.6;
  t0[62ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[63ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[64ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[65ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[66ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[67ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[68ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3 *
    0.55555555555555569;
  t0[69ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[70ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[71ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w *
    -2.8;
  t0[72ULL] = 0.0;
  t0[73ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3;
  t0[74ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear3 *
    -1.5555555555555558;
  t0[75ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[76ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[77ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[78ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.44444444444444448;
  t0[79ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[80ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[81ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[82ULL] = 0.0;
  t0[83ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6;
  t0[84ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.55555555555555558;
  t0[85ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[86ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[87ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[88ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[89ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[90ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[91ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    0.5;
  t0[92ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[93ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[94ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    -3.0;
  t0[95ULL] = 0.0;
  t0[96ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[97ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -1.5;
  t0[98ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[99ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[100ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[101ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[102ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[103ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[104ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w +
    Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[105ULL] = 0.0;
  t0[106ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[107ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[108ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[109ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[110ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[111ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[112ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[113ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[114ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    0.33333333333333331;
  t0[115ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[116ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[117ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[118ULL] = 0.0;
  t0[119ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3;
  t0[120ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    -1.3333333333333333;
  t0[121ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[122ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[123ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[124ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    -0.66666666666666663;
  t0[125ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[126ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[127ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w *
    0.66666666666666674;
  t0[128ULL] = 0.0;
  t0[129ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3;
  t0[130ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear3 *
    -0.33333333333333331;
  t0[131ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[132ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[133ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[134ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_pow;
  t0[135ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[136ULL] = X_idx_0;
  t0[137ULL] = X_idx_2;
  t0[138ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[139ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[140ULL] = X_idx_2;
  t0[141ULL] = X_idx_2;
  t0[142ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[143ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[144ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[145ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Simple_Gear_tB;
  t0[146ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[147ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[148ULL] = 0.0;
  t0[149ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[150ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[151ULL] = 0.0;
  t0[152ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Simple_Gear_tB * 6.25;
  t0[153ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[154ULL] = U_idx_1;
  t0[155ULL] = -U_idx_1;
  t0[156ULL] = -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[157ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[158ULL] = U_idx_1;
  t0[159ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[160ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[161ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[162ULL] = t2 * -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    0.44444444444444448;
  t0[163ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[164ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[165ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[166ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 * 0.5;
  t0[167ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[168ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[169ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[170ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -2.0 + Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    0.66666666666666663;
  t0[171ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[172ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[173ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[174ULL] = t2 * 0.39999999999999997 + U_idx_1;
  t0[175ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[176ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[177ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[178ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[179ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[180ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[181ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[182ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3 *
    0.60000000000000009;
  t0[183ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[184ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[185ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2;
  t0[186ULL] = 0.0;
  t0[187ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3;
  t0[188ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear3 *
    -1.6;
  t0[189ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[190ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[191ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[192ULL] = t2 * -0.39999999999999997;
  t0[193ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[194ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[195ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5;
  t0[196ULL] = 0.0;
  t0[197ULL] = t2;
  t0[198ULL] = t2 * -0.6;
  t0[199ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[200ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[201ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[202ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[203ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[204ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[205ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3 *
    0.55555555555555569;
  t0[206ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[207ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[208ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2;
  t0[209ULL] = 0.0;
  t0[210ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3;
  t0[211ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear3 *
    -1.5555555555555558;
  t0[212ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[213ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[214ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[215ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.44444444444444448;
  t0[216ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[217ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[218ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5;
  t0[219ULL] = 0.0;
  t0[220ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6;
  t0[221ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear6 *
    -0.55555555555555558;
  t0[222ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[223ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[224ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[225ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[226ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[227ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[228ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    0.5;
  t0[229ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[230ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[231ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2;
  t0[232ULL] = 0.0;
  t0[233ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[234ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -1.5;
  t0[235ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[236ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[237ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[238ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[239ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[240ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[241ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4;
  t0[242ULL] = 0.0;
  t0[243ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5;
  t0[244ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear5 *
    -0.5;
  t0[245ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[246ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[247ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[248ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[249ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[250ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[251ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    0.33333333333333331;
  t0[252ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[253ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[254ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[255ULL] = 0.0;
  t0[256ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[257ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    -1.3333333333333333;
  t0[258ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[259ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[260ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[261ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    -0.66666666666666663;
  t0[262ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[263ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[264ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1;
  t0[265ULL] = 0.0;
  t0[266ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[267ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear2 *
    -0.33333333333333331;
  t0[268ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[269ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[270ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[271ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_pow;
  t0[272ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[273ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[274ULL] = X_idx_3;
  t0[275ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[276ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[277ULL] = X_idx_3;
  t0[278ULL] = X_idx_3;
  t0[279ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[280ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[281ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[282ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Simple_Gear_tB;
  t0[283ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[284ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[285ULL] = 0.0;
  t0[286ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[287ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[288ULL] = 0.0;
  t0[289ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Simple_Gear_tB * 6.25;
  t0[290ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[291ULL] = U_idx_2;
  t0[292ULL] = -U_idx_2;
  t0[293ULL] = -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[294ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[295ULL] = U_idx_2;
  t0[296ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[297ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[298ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[299ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    0.44444444444444448;
  t0[300ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[301ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[302ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[303ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ * 0.5;
  t0[304ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[305ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[306ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[307ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -2.0 + Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.66666666666666663;
  t0[308ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[309ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[310ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[311ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    0.39999999999999997 + U_idx_2;
  t0[312ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[313ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[314ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[315ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[316ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[317ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[318ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[319ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0 *
    0.60000000000000009;
  t0[320ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[321ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[322ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2;
  t0[323ULL] = 0.0;
  t0[324ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[325ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear0 *
    -1.6;
  t0[326ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[327ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[328ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[329ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.39999999999999997;
  t0[330ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[331ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[332ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5;
  t0[333ULL] = 0.0;
  t0[334ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1;
  t0[335ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.6;
  t0[336ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[337ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[338ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[339ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[340ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[341ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[342ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0 *
    0.55555555555555569;
  t0[343ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[344ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[345ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2;
  t0[346ULL] = 0.0;
  t0[347ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[348ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear0 *
    -1.5555555555555558;
  t0[349ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[350ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[351ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[352ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.44444444444444448;
  t0[353ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[354ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[355ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5;
  t0[356ULL] = 0.0;
  t0[357ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1;
  t0[358ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.55555555555555558;
  t0[359ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[360ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[361ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[362ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[363ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[364ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[365ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    0.5;
  t0[366ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[367ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[368ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2;
  t0[369ULL] = 0.0;
  t0[370ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[371ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -1.5;
  t0[372ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[373ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[374ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[375ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[376ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[377ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[378ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4;
  t0[379ULL] = 0.0;
  t0[380ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[381ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[382ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[383ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[384ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[385ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[386ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[387ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[388ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.33333333333333331;
  t0[389ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[390ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[391ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[392ULL] = 0.0;
  t0[393ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[394ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -1.3333333333333333;
  t0[395ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[396ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[397ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[398ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.66666666666666663;
  t0[399ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[400ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[401ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1;
  t0[402ULL] = 0.0;
  t0[403ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[404ULL] = Ideal_Motor_Ideal_Yaw_Motor_3_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.33333333333333331;
  t0[405ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[406ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[407ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[408ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_pow;
  t0[409ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[410ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[411ULL] = X_idx_4;
  t0[412ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[413ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[414ULL] = X_idx_4;
  t0[415ULL] = X_idx_4;
  t0[416ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[417ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[418ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[419ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Simple_Gear_tB;
  t0[420ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[421ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[422ULL] = 0.0;
  t0[423ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[424ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Simple_Gear_damperF_w;
  t0[425ULL] = 0.0;
  t0[426ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Simple_Gear_tB * 6.25;
  t0[427ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[428ULL] = U_idx_3;
  t0[429ULL] = -U_idx_3;
  t0[430ULL] = -Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[431ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[432ULL] = U_idx_3;
  t0[433ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[434ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[435ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[436ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    0.44444444444444448;
  t0[437ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[438ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[439ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[440ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -1.9999999999999998 +
    Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ * 0.5;
  t0[441ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[442ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[443ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[444ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -2.0 + Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.66666666666666663;
  t0[445ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[446ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[447ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[448ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    0.39999999999999997 + U_idx_3;
  t0[449ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[450ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[451ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[452ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[453ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[454ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[455ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[456ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0 *
    0.60000000000000009;
  t0[457ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[458ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[459ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear2;
  t0[460ULL] = 0.0;
  t0[461ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[462ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear0 *
    -1.6;
  t0[463ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[464ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear0;
  t0[465ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[466ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.39999999999999997;
  t0[467ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[468ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[469ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear1_gear5;
  t0[470ULL] = 0.0;
  t0[471ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1;
  t0[472ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear1_gear1 *
    -0.6;
  t0[473ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[474ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[475ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[476ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[477ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[478ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[479ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0 *
    0.55555555555555569;
  t0[480ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[481ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[482ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear2;
  t0[483ULL] = 0.0;
  t0[484ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[485ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear0 *
    -1.5555555555555558;
  t0[486ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[487ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear0;
  t0[488ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[489ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.44444444444444448;
  t0[490ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[491ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier1_w;
  t0[492ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear2_gear5;
  t0[493ULL] = 0.0;
  t0[494ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1;
  t0[495ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear2_gear1 *
    -0.55555555555555558;
  t0[496ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[497ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[498ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[499ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[500ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[501ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[502ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    0.5;
  t0[503ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[504ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[505ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear2;
  t0[506ULL] = 0.0;
  t0[507ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[508ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -1.5;
  t0[509ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[510ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear0;
  t0[511ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[512ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[513ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[514ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier2_w;
  t0[515ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear3_gear4;
  t0[516ULL] = 0.0;
  t0[517ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_;
  t0[518ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear3_gear_ *
    -0.5;
  t0[519ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[520ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[521ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[522ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[523ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[524ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[525ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    0.33333333333333331;
  t0[526ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[527ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[528ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Planetary_Gear4_gear2;
  t0[529ULL] = 0.0;
  t0[530ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[531ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -1.3333333333333333;
  t0[532ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[533ULL] = -Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[534ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[535ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.66666666666666663;
  t0[536ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[537ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Carrier3_w;
  t0[538ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Planetary_Gear4_gear1;
  t0[539ULL] = 0.0;
  t0[540ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_;
  t0[541ULL] = Ideal_Motor_Ideal_Yaw_Motor_4_Yaw_Gearbox_Planetary_Gear4_gear_ *
    -0.33333333333333331;
  t0[542ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[543ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t;
  t0[544ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_t *
    1.0E-5;
  t0[545ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Yaw_Gearbox_Rotational_Damper_pow;
  t0[546ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_;
  t0[547ULL] = Ideal_Motor_Ideal_Yaw_Motor_2_Yaw_Gearbox_Inertia_Motor_Shaft1;
  t0[548ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[549ULL] = X_idx_5;
  t0[550ULL] = U_idx_4;
  t0[551ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[552ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[553ULL] = U_idx_4;
  t0[554ULL] = X_idx_5;
  t0[555ULL] = U_idx_4;
  t0[556ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[557ULL] = Ideal_Motor_Ideal_Yaw_Motor_1_Ideal_Rotational_Motion_Sensor_R_ *
    -0.16;
  t0[558ULL] = X_idx_5;
  t0[559ULL] = X_idx_5;
  t0[560ULL] = X_idx_5;
  t0[561ULL] = U_idx_4;
  for (b = 0; b < 562; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t4;
  return 0;
}
