/*
 * File: Controller.h
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

#ifndef RTW_HEADER_Controller_h_
#define RTW_HEADER_Controller_h_
#ifndef DCspeedcontrolcode_COMMON_INCLUDES_
# define DCspeedcontrolcode_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DCspeedcontrolcode_COMMON_INCLUDES_ */

#include "DCspeedcontrolcode_types.h"

/* Block states (auto storage) for system '<Root>/Controller' */
typedef struct {
  real_T DiscreteTransferFcn_states;   /* '<S1>/Discrete Transfer Fcn' */
} DW_Controller_T;

/* Extern declarations of internal data for system '<Root>/Controller' */
extern DW_Controller_T Controller_DW;
extern void Controller_initialize(void);
extern void Controller(real_T rtu_In1);

#endif                                 /* RTW_HEADER_Controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
