/*
 * File: DCspeedcontrolcode.c
 *
 * Code generated for Simulink model 'DCspeedcontrolcode'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.8 (R2015a) 09-Feb-2015
 * C/C++ source code generated on : Sat Dec 21 19:04:51 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DCspeedcontrolcode.h"
#include "DCspeedcontrolcode_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_DCspeedcontrolcode_T DCspeedcontrolcode_U;

/* Real-time model */
RT_MODEL_DCspeedcontrolcode_T DCspeedcontrolcode_M_;
RT_MODEL_DCspeedcontrolcode_T *const DCspeedcontrolcode_M =
  &DCspeedcontrolcode_M_;

/* Exported data definition */
real_T PWMOut;

/* Model step function */
void DCspeedcontrolcode_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Controller' */

  /* Inport: '<Root>/In1' */
  Controller(DCspeedcontrolcode_U.In1);

  /* End of Outputs for SubSystem: '<Root>/Controller' */
}

/* Model initialize function */
void DCspeedcontrolcode_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(DCspeedcontrolcode_M, (NULL));

  /* external inputs */
  DCspeedcontrolcode_U.In1 = 0.0;

  /* Initialize subsystem data */
  Controller_initialize();
}

/* Model terminate function */
void DCspeedcontrolcode_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
