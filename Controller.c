/*
 * File: Controller.c
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

#include "Controller.h"

/* Include model header file for global data */
#include "DCspeedcontrolcode.h"
#include "DCspeedcontrolcode_private.h"

/* Declare variables for internal data of system '<Root>/Controller' */
DW_Controller_T Controller_DW;

/* Output and update for atomic system: '<Root>/Controller' */
void Controller(real_T rtu_In1)
{
  real_T rtb_DiscreteTransferFcn;

  /* DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn' */
  rtb_DiscreteTransferFcn = 3.6E-6 * Controller_DW.DiscreteTransferFcn_states;

  /* Saturate: '<S1>/Saturation' */
  if (rtb_DiscreteTransferFcn > 12.0) {
    PWMOut = 12.0;
  } else if (rtb_DiscreteTransferFcn < 0.0) {
    PWMOut = 0.0;
  } else {
    PWMOut = rtb_DiscreteTransferFcn;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Update for DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant2'
   *  Constant: '<S2>/Constant3'
   *  Product: '<S2>/Divide'
   *  Sum: '<S1>/Add'
   *  Sum: '<S2>/Add'
   */
  Controller_DW.DiscreteTransferFcn_states = (3000.0 - (3155.0 - rtu_In1 /
    0.00805860805860806)) - (-Controller_DW.DiscreteTransferFcn_states);
}

/* Initialize for atomic system: '<Root>/Controller' */
void Controller_initialize(void)
{
  /* custom signals */
  PWMOut = 0.0;
  (void) memset((void *)&Controller_DW, 0,
                sizeof(DW_Controller_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
