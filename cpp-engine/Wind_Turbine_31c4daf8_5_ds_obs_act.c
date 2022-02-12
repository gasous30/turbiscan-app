/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_5_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_5_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_externals.h"
#include "Wind_Turbine_31c4daf8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_5_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T t0[195];
  real_T Hydraulic_Actuator_1_Flow_Rate_Sensor_Ideal_Hydraulic_Flow_Rate;
  real_T Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  real_T Hydraulic_Actuator_1_Position_Sensor_Ideal_Translational_Motion;
  real_T Hydraulic_Actuator_1_Spring_Loaded_Accumulator_A_p;
  real_T Prismatic_Joint_fi;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
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
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  int32_T b;
  U_idx_0 = t3->mU.mX[0];
  U_idx_1 = t3->mU.mX[1];
  U_idx_2 = t3->mU.mX[2];
  U_idx_3 = t3->mU.mX[3];
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_2 = t3->mX.mX[2];
  X_idx_3 = t3->mX.mX[3];
  X_idx_4 = t3->mX.mX[4];
  X_idx_5 = t3->mX.mX[5];
  X_idx_6 = t3->mX.mX[6];
  X_idx_7 = t3->mX.mX[7];
  X_idx_8 = t3->mX.mX[8];
  X_idx_9 = t3->mX.mX[9];
  X_idx_10 = t3->mX.mX[10];
  X_idx_11 = t3->mX.mX[11];
  X_idx_12 = t3->mX.mX[12];
  X_idx_13 = t3->mX.mX[13];
  X_idx_14 = t3->mX.mX[14];
  X_idx_15 = t3->mX.mX[15];
  X_idx_16 = t3->mX.mX[16];
  X_idx_17 = t3->mX.mX[17];
  X_idx_18 = t3->mX.mX[18];
  X_idx_19 = t3->mX.mX[19];
  X_idx_20 = t3->mX.mX[20];
  X_idx_21 = t3->mX.mX[21];
  X_idx_22 = t3->mX.mX[22];
  X_idx_23 = t3->mX.mX[23];
  X_idx_24 = t3->mX.mX[24];
  out = t4->mOBS_ACT;
  Hydraulic_Actuator_1_Flow_Rate_Sensor_Ideal_Hydraulic_Flow_Rate = X_idx_12 *
    0.00096187319999999988 + X_idx_13 * -0.00096187319999999988;
  Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v = X_idx_14 * 0.002;
  Hydraulic_Actuator_1_Position_Sensor_Ideal_Translational_Motion = X_idx_14 *
    -0.002;
  Hydraulic_Actuator_1_Spring_Loaded_Accumulator_A_p = X_idx_0 + X_idx_24;
  Prismatic_Joint_fi = X_idx_14 + X_idx_23;
  t0[0ULL] = X_idx_9 * 99999.999999999985;
  t0[1ULL] = X_idx_0 * 99999.999999999985;
  t0[2ULL] = (-X_idx_0 + X_idx_9) * 99999.999999999985;
  t0[3ULL] = X_idx_10 * 1.0E-6;
  t0[4ULL] = X_idx_11 * 99999.999999999985;
  t0[5ULL] = X_idx_1 * 99999.999999999985;
  t0[6ULL] = (-X_idx_1 + X_idx_11) * 99999.999999999985;
  t0[7ULL] = X_idx_12 * 1.0E-6;
  t0[8ULL] = 0.0;
  t0[9ULL] = 0.0;
  t0[10ULL] = 0.0;
  t0[11ULL] = 0.0;
  t0[12ULL] = Hydraulic_Actuator_1_Flow_Rate_Sensor_Ideal_Hydraulic_Flow_Rate;
  t0[13ULL] = Hydraulic_Actuator_1_Flow_Rate_Sensor_Ideal_Hydraulic_Flow_Rate *
    0.0010396380728769656;
  t0[14ULL] = Hydraulic_Actuator_1_Flow_Rate_Sensor_Ideal_Hydraulic_Flow_Rate *
    0.0010396380728769656;
  t0[15ULL] = Hydraulic_Actuator_1_Flow_Rate_Sensor_Ideal_Hydraulic_Flow_Rate *
    0.0010396380728769656;
  t0[16ULL] = X_idx_0 * 99999.999999999985;
  t0[17ULL] = X_idx_1 * 99999.999999999985;
  t0[18ULL] = 0.0;
  t0[19ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[20ULL] = X_idx_0 * 99999.999999999985;
  t0[21ULL] = 0.0;
  t0[22ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[23ULL] = X_idx_0 * 99999.999999999985;
  t0[24ULL] = 0.0;
  t0[25ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[26ULL] = X_idx_0 * 99999.999999999985;
  t0[27ULL] = X_idx_0 * -500.0;
  t0[28ULL] = 0.0;
  t0[29ULL] = X_idx_2;
  t0[30ULL] = (-X_idx_15 + X_idx_10) * 1.0E-6;
  t0[31ULL] = X_idx_16;
  t0[32ULL] = 0.0;
  t0[33ULL] = X_idx_1 * 99999.999999999985;
  t0[34ULL] = 0.0;
  t0[35ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[36ULL] = X_idx_1 * 99999.999999999985;
  t0[37ULL] = 0.0;
  t0[38ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[39ULL] = X_idx_1 * 99999.999999999985;
  t0[40ULL] = X_idx_1 * 500.0;
  t0[41ULL] = 1.4967;
  t0[42ULL] = X_idx_3;
  t0[43ULL] = X_idx_13 * 1.0E-6;
  t0[44ULL] = X_idx_17;
  t0[45ULL] = 1.4967;
  t0[46ULL] = 0.0;
  t0[47ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[48ULL] = X_idx_18;
  t0[49ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[50ULL] = 0.0;
  t0[51ULL] = X_idx_4;
  t0[52ULL] = 0.0;
  t0[53ULL] = 0.0;
  t0[54ULL] = 0.0;
  t0[55ULL] = X_idx_9 * 99999.999999999985;
  t0[56ULL] = X_idx_11 * 99999.999999999985;
  t0[57ULL] = 2.0E+7;
  t0[58ULL] = X_idx_6;
  t0[59ULL] = 0.0;
  t0[60ULL] = X_idx_9 * 99999.999999999985;
  t0[61ULL] = 0.0;
  t0[62ULL] = X_idx_6;
  t0[63ULL] = (-X_idx_10 + X_idx_19) * 1.0E-6;
  t0[64ULL] = X_idx_9 * 99999.999999999985;
  t0[65ULL] = X_idx_11 * 99999.999999999985;
  t0[66ULL] = 0.0;
  t0[67ULL] = X_idx_6;
  t0[68ULL] = (-X_idx_12 + X_idx_20) * 1.0E-6;
  t0[69ULL] = X_idx_11 * 99999.999999999985;
  t0[70ULL] = 2.0E+7;
  t0[71ULL] = X_idx_9 * 99999.999999999985;
  t0[72ULL] = X_idx_6;
  t0[73ULL] = X_idx_19 * 1.0E-6;
  t0[74ULL] = (-X_idx_9 + 200.00000000000003) * 99999.999999999985;
  t0[75ULL] = 2.0E+7;
  t0[76ULL] = X_idx_11 * 99999.999999999985;
  t0[77ULL] = X_idx_6;
  t0[78ULL] = X_idx_20 * 1.0E-6;
  t0[79ULL] = (-X_idx_11 + 200.00000000000003) * 99999.999999999985;
  t0[80ULL] = X_idx_9 * 99999.999999999985;
  t0[81ULL] = X_idx_11 * 99999.999999999985;
  t0[82ULL] = 2.0E+7;
  t0[83ULL] = U_idx_0;
  t0[84ULL] = 0.0;
  t0[85ULL] = U_idx_0;
  t0[86ULL] = X_idx_6;
  t0[87ULL] = X_idx_21;
  t0[88ULL] = X_idx_5;
  t0[89ULL] = X_idx_5;
  t0[90ULL] = X_idx_22;
  t0[91ULL] = X_idx_6;
  t0[92ULL] = X_idx_6;
  t0[93ULL] = -X_idx_6 + U_idx_0;
  t0[94ULL] = X_idx_21 * 0.05;
  t0[95ULL] = U_idx_0;
  t0[96ULL] = 0.0;
  t0[97ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[98ULL] = 0.0;
  t0[99ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[100ULL] = X_idx_14;
  t0[101ULL] = X_idx_14 * 0.002;
  t0[102ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[103ULL] = X_idx_7;
  t0[104ULL] = 0.0;
  t0[105ULL] = Hydraulic_Actuator_1_Position_Sensor_Ideal_Translational_Motion;
  t0[106ULL] = X_idx_7;
  t0[107ULL] = X_idx_7;
  t0[108ULL] = Hydraulic_Actuator_1_Position_Sensor_Ideal_Translational_Motion;
  t0[109ULL] = 0.0;
  t0[110ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[111ULL] = 2.0E+7;
  t0[112ULL] = 2.0E+7;
  t0[113ULL] = 0.0;
  t0[114ULL] = 2.0E+7;
  t0[115ULL] = (-X_idx_19 + -X_idx_20) * 1.0E-6;
  t0[116ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[117ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[118ULL] = X_idx_23;
  t0[119ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[120ULL] = X_idx_23;
  t0[121ULL] = X_idx_23;
  t0[122ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[123ULL] = Hydraulic_Actuator_1_Spring_Loaded_Accumulator_A_p *
    99999.999999999985;
  t0[124ULL] = X_idx_15 * 1.0E-6;
  t0[125ULL] = Hydraulic_Actuator_1_Spring_Loaded_Accumulator_A_p *
    99999.999999999985;
  t0[126ULL] = X_idx_8;
  t0[127ULL] = X_idx_0 * 99999.999999999985;
  t0[128ULL] = 0.0;
  t0[129ULL] = X_idx_0 * 99999.999999999985;
  t0[130ULL] = 0.0;
  t0[131ULL] = X_idx_0 * 99999.999999999985;
  t0[132ULL] = X_idx_0 * 99999.999999999985;
  t0[133ULL] = X_idx_1 * 99999.999999999985;
  t0[134ULL] = 0.0;
  t0[135ULL] = X_idx_1 * 99999.999999999985;
  t0[136ULL] = 0.0;
  t0[137ULL] = X_idx_1 * 99999.999999999985;
  t0[138ULL] = X_idx_1 * 99999.999999999985;
  t0[139ULL] = 2.0E+7;
  t0[140ULL] = Hydraulic_Actuator_1_Spring_Loaded_Accumulator_A_p *
    99999.999999999985;
  t0[141ULL] = X_idx_0 * 99999.999999999985;
  t0[142ULL] = U_idx_1 + -24.0;
  t0[143ULL] = -(U_idx_1 + -24.0);
  t0[144ULL] = U_idx_1;
  t0[145ULL] = 24.0;
  t0[146ULL] = U_idx_1 + -24.0;
  t0[147ULL] = U_idx_1;
  t0[148ULL] = -(U_idx_1 + -24.0);
  t0[149ULL] = 24.0;
  t0[150ULL] = U_idx_1;
  t0[151ULL] = Hydraulic_Actuator_1_Spring_Loaded_Accumulator_A_p *
    99999.999999999985;
  t0[152ULL] = X_idx_0 * 99999.999999999985;
  t0[153ULL] = -(U_idx_1 + -24.0);
  t0[154ULL] = Hydraulic_Actuator_1_Spring_Loaded_Accumulator_A_p *
    99999.999999999985;
  t0[155ULL] = X_idx_0 * 99999.999999999985;
  t0[156ULL] = -(U_idx_1 + -24.0);
  t0[157ULL] = X_idx_15 * -1.0E-6;
  t0[158ULL] = X_idx_24 * 99999.999999999985;
  t0[159ULL] = 0.0;
  t0[160ULL] = X_idx_1 * 99999.999999999985;
  t0[161ULL] = U_idx_2 + -24.0;
  t0[162ULL] = -(U_idx_2 + -24.0);
  t0[163ULL] = U_idx_2;
  t0[164ULL] = 24.0;
  t0[165ULL] = U_idx_2 + -24.0;
  t0[166ULL] = U_idx_2;
  t0[167ULL] = -(U_idx_2 + -24.0);
  t0[168ULL] = 24.0;
  t0[169ULL] = U_idx_2;
  t0[170ULL] = 0.0;
  t0[171ULL] = X_idx_1 * 99999.999999999985;
  t0[172ULL] = -(U_idx_2 + -24.0);
  t0[173ULL] = 0.0;
  t0[174ULL] = X_idx_1 * 99999.999999999985;
  t0[175ULL] = -(U_idx_2 + -24.0);
  t0[176ULL] = Hydraulic_Actuator_1_Flow_Rate_Sensor_Ideal_Hydraulic_Flow_Rate *
    -0.0010396380728769656;
  t0[177ULL] = -X_idx_1 * 99999.999999999985;
  t0[178ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[179ULL] = 0.0;
  t0[180ULL] = Prismatic_Joint_fi;
  t0[181ULL] = U_idx_3;
  t0[182ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[183ULL] = Prismatic_Joint_fi;
  t0[184ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[185ULL] = Prismatic_Joint_fi;
  t0[186ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[187ULL] = Prismatic_Joint_fi;
  t0[188ULL] = Hydraulic_Actuator_1_Hydraulic_Cylinder_R_v;
  t0[189ULL] = 0.0;
  t0[190ULL] = U_idx_3;
  t0[191ULL] = Prismatic_Joint_fi;
  t0[192ULL] = U_idx_3;
  t0[193ULL] = 0.0;
  t0[194ULL] = U_idx_3;
  for (b = 0; b < 195; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t4;
  return 0;
}
