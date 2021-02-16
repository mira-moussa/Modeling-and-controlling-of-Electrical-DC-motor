/*
 * File: DCspeedcontrolcode.h
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

#ifndef RTW_HEADER_DCspeedcontrolcode_h_
#define RTW_HEADER_DCspeedcontrolcode_h_
#include <stddef.h>
#include <string.h>
#ifndef DCspeedcontrolcode_COMMON_INCLUDES_
# define DCspeedcontrolcode_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DCspeedcontrolcode_COMMON_INCLUDES_ */

#include "DCspeedcontrolcode_types.h"

/* Child system includes */
#include "Controller.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_DCspeedcontrolcode_T;

/* Real-time Model Data Structure */
struct tag_RTM_DCspeedcontrolcode_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_DCspeedcontrolcode_T DCspeedcontrolcode_U;

/* Model entry point functions */
extern void DCspeedcontrolcode_initialize(void);
extern void DCspeedcontrolcode_step(void);
extern void DCspeedcontrolcode_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DCspeedcontrolcode_T *const DCspeedcontrolcode_M;

/* Exported data declaration */
extern real_T PWMOut;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DCspeedcontrolcode'
 * '<S1>'   : 'DCspeedcontrolcode/Controller'
 * '<S2>'   : 'DCspeedcontrolcode/Controller/inverse1'
 */
#endif                                 /* RTW_HEADER_DCspeedcontrolcode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
