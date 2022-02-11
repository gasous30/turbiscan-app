/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_m.h"
#include "Wind_Turbine_31c4daf8_4_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_externals.h"
#include "Wind_Turbine_31c4daf8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_4_ds_m(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t15, NeDsMethodOutput *t16)
{
  PmRealVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T t12;
  real_T t13;
  X_idx_0 = t15->mX.mX[0];
  X_idx_1 = t15->mX.mX[1];
  X_idx_16 = t15->mX.mX[16];
  X_idx_17 = t15->mX.mX[17];
  out = t16->mM;
  t13 = exp(-X_idx_0 / 12428.460456240617);
  t12 = (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
           1.01325), 1.7142857142857144) * 0.0035424381432735568 + t13 /
         12428.460456240617) * 1.0000062909088354;
  t13 = (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
           1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_0 /
          12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_0 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_0 / 12428.460456240617));
  X_idx_0 = t12 / (t13 == 0.0 ? 1.0E-16 : t13);
  t12 = exp(-X_idx_1 / 12428.460456240617);
  t13 = (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
           1.01325), 1.7142857142857144) * 0.0035424381432735568 + t12 /
         12428.460456240617) * 1.0000062909088354;
  t12 = (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
           1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_1 /
          12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_1 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_1 / 12428.460456240617));
  out.mX[0] = -(X_idx_0 * X_idx_16 * 1.0E+6) / 4975.0312972714573;
  out.mX[1] = -(t13 / (t12 == 0.0 ? 1.0E-16 : t12) * X_idx_17 * 1.0E+6) /
    4975.0312972714573;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
  out.mX[5] = 1.0;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
  out.mX[8] = -1.0;
  (void)sys;
  (void)t16;
  return 0;
}
