/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "Wind_Turbine_31c4daf8_1.h"
#include "Wind_Turbine_31c4daf8_1_gateway.h"

void Wind_Turbine_31c4daf8_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 0, 0.001, 0, 0, 0.001, 0, 0,
    0, 0, (SscLoggingSetting) 1, 566501908, 0, };

  NeSolverParameters solverparams = { 0, 0, 1, 0, 0, 0.001, 1e-06, 1e-09, 0, 0,
    100, 0, 1, 0, 1e-09, 0, (NeLocalSolverChoice) 0, 0.01, 0, 3, 2, 0, 2,
    (NeLinearAlgebraChoice) 1, (NeEquationFormulationChoice) 0, 1024, 1, 0.001,
    (NePartitionStorageMethod) 0, 1024, (NePartitionMethod) 1, };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae;
  size_t numOutputs = 0;
  int* rtpDaes = NULL;
  int rtwLogDaes[1] = { 0 };

  {
    static const NeOutputParameters outputparameters_init[] = { { 0, 0, }, { 0,
        1, }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  Wind_Turbine_31c4daf8_1_dae(&dae,
    &modelparams,
    &solverparams);
  nesl_register_simulator_group("Wind_Turbine/Solver Configuration_1",
    1,
    &dae,
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    0,
    rtpDaes,
    1,
    rtwLogDaes);
}
