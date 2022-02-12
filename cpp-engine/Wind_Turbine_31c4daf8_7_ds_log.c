/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_log.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_7_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T t0[129];
  real_T Brakes_Disk_Friction_Clutch_fundamental_clutch_S;
  real_T Brakes_Disk_Friction_Clutch_fundamental_clutch_clutch_t;
  real_T Helical_Gear_First_Step_tB;
  real_T Planetary_Gear_gear_ring_planet_t_C;
  real_T Revolute_Joint_ti;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_2;
  real_T X_idx_20;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t1;
  int32_T Q_idx_0;
  Q_idx_0 = t2->mQ.mX[0];
  U_idx_0 = t2->mU.mX[0];
  U_idx_1 = t2->mU.mX[1];
  U_idx_2 = t2->mU.mX[2];
  X_idx_0 = t2->mX.mX[0];
  X_idx_1 = t2->mX.mX[1];
  X_idx_2 = t2->mX.mX[2];
  X_idx_3 = t2->mX.mX[3];
  X_idx_4 = t2->mX.mX[4];
  X_idx_5 = t2->mX.mX[5];
  X_idx_6 = t2->mX.mX[6];
  X_idx_7 = t2->mX.mX[7];
  X_idx_8 = t2->mX.mX[8];
  X_idx_9 = t2->mX.mX[9];
  X_idx_10 = t2->mX.mX[10];
  X_idx_11 = t2->mX.mX[11];
  X_idx_12 = t2->mX.mX[12];
  X_idx_13 = t2->mX.mX[13];
  X_idx_14 = t2->mX.mX[14];
  X_idx_15 = t2->mX.mX[15];
  X_idx_16 = t2->mX.mX[16];
  X_idx_17 = t2->mX.mX[17];
  X_idx_18 = t2->mX.mX[18];
  X_idx_19 = t2->mX.mX[19];
  X_idx_20 = t2->mX.mX[20];
  out = t3->mLOG;
  Brakes_Disk_Friction_Clutch_fundamental_clutch_S = -X_idx_1 + X_idx_0;
  Brakes_Disk_Friction_Clutch_fundamental_clutch_clutch_t = -X_idx_7 + -X_idx_8;
  Helical_Gear_First_Step_tB = X_idx_13 * -0.25 + X_idx_14 *
    0.083333333333333329;
  Planetary_Gear_gear_ring_planet_t_C = X_idx_14 * 0.99999999999999989;
  Revolute_Joint_ti = ((X_idx_14 * 2.0 + X_idx_7) + X_idx_8) + X_idx_18;
  t1 = X_idx_14 * 2.0 + X_idx_18;
  t0[0ULL] = X_idx_1;
  t0[1ULL] = X_idx_0;
  t0[2ULL] = U_idx_0 * 0.99999999999999989;
  t0[3ULL] = X_idx_0;
  t0[4ULL] = X_idx_1;
  t0[5ULL] = -X_idx_0 + X_idx_1;
  t0[6ULL] = 0.0;
  t0[7ULL] = X_idx_1;
  t0[8ULL] = X_idx_0;
  t0[9ULL] = X_idx_6;
  t0[10ULL] = Brakes_Disk_Friction_Clutch_fundamental_clutch_S;
  t0[11ULL] = X_idx_1;
  t0[12ULL] = X_idx_0;
  t0[13ULL] = X_idx_6;
  t0[14ULL] = Brakes_Disk_Friction_Clutch_fundamental_clutch_S;
  t0[15ULL] = Brakes_Disk_Friction_Clutch_fundamental_clutch_clutch_t;
  t0[16ULL] = X_idx_9;
  t0[17ULL] = X_idx_10;
  t0[18ULL] = X_idx_11;
  t0[19ULL] = Brakes_Disk_Friction_Clutch_fundamental_clutch_S;
  t0[20ULL] = (real_T)(size_t)Q_idx_0;
  t0[21ULL] = X_idx_9;
  t0[22ULL] = X_idx_6 * Brakes_Disk_Friction_Clutch_fundamental_clutch_S *
    X_idx_9;
  t0[23ULL] = X_idx_10;
  t0[24ULL] = X_idx_11;
  t0[25ULL] = Brakes_Disk_Friction_Clutch_fundamental_clutch_clutch_t;
  t0[26ULL] = X_idx_0;
  t0[27ULL] = X_idx_0;
  t0[28ULL] = X_idx_7;
  t0[29ULL] = X_idx_0;
  t0[30ULL] = X_idx_1;
  t0[31ULL] = X_idx_0;
  t0[32ULL] = X_idx_8;
  t0[33ULL] = X_idx_8 * 1.0E-5;
  t0[34ULL] = X_idx_8 * X_idx_8 * 1.0E-5;
  t0[35ULL] = U_idx_0;
  t0[36ULL] = X_idx_2;
  t0[37ULL] = X_idx_1;
  t0[38ULL] = X_idx_1;
  t0[39ULL] = X_idx_2;
  t0[40ULL] = X_idx_1;
  t0[41ULL] = X_idx_1;
  t0[42ULL] = X_idx_3 * -4.0;
  t0[43ULL] = X_idx_3;
  t0[44ULL] = Helical_Gear_First_Step_tB;
  t0[45ULL] = X_idx_3 * -4.0;
  t0[46ULL] = X_idx_12;
  t0[47ULL] = 0.0;
  t0[48ULL] = X_idx_3;
  t0[49ULL] = X_idx_3;
  t0[50ULL] = 0.0;
  t0[51ULL] = Helical_Gear_First_Step_tB * 4.0;
  t0[52ULL] = X_idx_3 * 14.05;
  t0[53ULL] = X_idx_3 * -4.0;
  t0[54ULL] = U_idx_1;
  t0[55ULL] = X_idx_3 * 14.05;
  t0[56ULL] = X_idx_15;
  t0[57ULL] = 0.0;
  t0[58ULL] = X_idx_3 * -4.0;
  t0[59ULL] = X_idx_16;
  t0[60ULL] = 0.0;
  t0[61ULL] = U_idx_1 * 3.5125;
  t0[62ULL] = X_idx_3;
  t0[63ULL] = X_idx_3;
  t0[64ULL] = X_idx_13;
  t0[65ULL] = X_idx_3;
  t0[66ULL] = X_idx_3 * -4.0;
  t0[67ULL] = X_idx_3 * -4.0;
  t0[68ULL] = X_idx_17;
  t0[69ULL] = X_idx_4;
  t0[70ULL] = X_idx_1;
  t0[71ULL] = X_idx_1;
  t0[72ULL] = X_idx_18;
  t0[73ULL] = X_idx_1;
  t0[74ULL] = X_idx_1;
  t0[75ULL] = X_idx_3;
  t0[76ULL] = X_idx_1;
  t0[77ULL] = X_idx_3;
  t0[78ULL] = X_idx_1;
  t0[79ULL] = X_idx_19;
  t0[80ULL] = Planetary_Gear_gear_ring_planet_t_C * 0.66666666666666674;
  t0[81ULL] = X_idx_1;
  t0[82ULL] = X_idx_19;
  t0[83ULL] = -X_idx_1 + X_idx_19;
  t0[84ULL] = 0.0;
  t0[85ULL] = Planetary_Gear_gear_ring_planet_t_C;
  t0[86ULL] = Planetary_Gear_gear_ring_planet_t_C * -1.6666666666666667;
  t0[87ULL] = X_idx_1;
  t0[88ULL] = X_idx_19;
  t0[89ULL] = X_idx_3;
  t0[90ULL] = X_idx_14 * -0.33333333333333331;
  t0[91ULL] = X_idx_1;
  t0[92ULL] = X_idx_3;
  t0[93ULL] = -X_idx_1 + X_idx_3;
  t0[94ULL] = 0.0;
  t0[95ULL] = X_idx_14;
  t0[96ULL] = X_idx_14 * -0.66666666666666663;
  t0[97ULL] = Revolute_Joint_ti;
  t0[98ULL] = U_idx_2;
  t0[99ULL] = X_idx_1;
  t0[100ULL] = X_idx_1;
  t0[101ULL] = U_idx_2;
  t0[102ULL] = Revolute_Joint_ti;
  t0[103ULL] = U_idx_2;
  t0[104ULL] = X_idx_1;
  t0[105ULL] = X_idx_1;
  t0[106ULL] = Revolute_Joint_ti;
  t0[107ULL] = Revolute_Joint_ti;
  t0[108ULL] = Revolute_Joint_ti;
  t0[109ULL] = U_idx_2;
  t0[110ULL] = X_idx_5;
  t0[111ULL] = X_idx_3 * 14.05;
  t0[112ULL] = X_idx_20;
  t0[113ULL] = X_idx_5;
  t0[114ULL] = X_idx_20;
  t0[115ULL] = X_idx_3 * 14.05;
  t0[116ULL] = X_idx_3 * 14.05;
  t0[117ULL] = U_idx_1;
  t0[118ULL] = -U_idx_1;
  t0[119ULL] = -(X_idx_3 * 14.05);
  t0[120ULL] = X_idx_3 * 14.05;
  t0[121ULL] = U_idx_1;
  t0[122ULL] = X_idx_1;
  t0[123ULL] = X_idx_1;
  t0[124ULL] = X_idx_1;
  t0[125ULL] = X_idx_1;
  t0[126ULL] = t1;
  t0[127ULL] = t1;
  t0[128ULL] = t1;
  for (Q_idx_0 = 0; Q_idx_0 < 129; Q_idx_0++) {
    out.mX[Q_idx_0] = t0[Q_idx_0];
  }

  (void)sys;
  (void)t3;
  return 0;
}
