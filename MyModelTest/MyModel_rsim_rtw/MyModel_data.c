/*
 * MyModel_data.c
 *
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * Code generation for model "MyModel".
 *
 * Model version              : 1.7
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C source code generated on : Fri Jul 12 15:29:37 2024
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MyModel.h"

/* Block parameters (default storage) */
P rtP = {
  /* Variable: b
   * Referenced by: '<Root>/Gain1'
   */
  10.0,

  /* Variable: k
   * Referenced by: '<Root>/Gain'
   */
  400.0,

  /* Variable: m
   * Referenced by: '<Root>/Gain2'
   */
  3.0,

  /* Variable: x0
   * Referenced by: '<Root>/Integrator1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator'
   */
  0.0
};
