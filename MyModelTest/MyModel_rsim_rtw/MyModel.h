/*
 * MyModel.h
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

#ifndef MyModel_h_
#define MyModel_h_
#ifndef MyModel_COMMON_INCLUDES_
#define MyModel_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#endif                                 /* MyModel_COMMON_INCLUDES_ */

#include "MyModel_types.h"
#include "rt_defines.h"
#include <stddef.h>
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME                     MyModel
#define NSAMPLE_TIMES                  (1)                       /* Number of sample times */
#define NINPUTS                        (0)                       /* Number of model inputs */
#define NOUTPUTS                       (0)                       /* Number of model outputs */
#define NBLOCKIO                       (6)                       /* Number of data output port signals */
#define NUM_ZC_EVENTS                  (0)                       /* Number of zero-crossing events */
#ifndef NCSTATES
#define NCSTATES                       (2)                       /* Number of continuous states */
#elif NCSTATES != 2
# error Invalid specification of NCSTATES defined in compiler command
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         (NULL)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T x;                            /* '<Root>/Integrator1' */
  real_T kx;                           /* '<Root>/Gain' */
  real_T v;                            /* '<Root>/Integrator' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T ma;                           /* '<Root>/Add' */
  real_T a;                            /* '<Root>/Gain2' */
} B;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T Integrator1_CSTATE;        /* '<Root>/Integrator1' */
  boolean_T Integrator_CSTATE;         /* '<Root>/Integrator' */
} XDis;

/* Continuous State Absolute Tolerance  */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} CStateAbsTol;

/* Continuous State Perturb Min  */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} CXPtMin;

/* Continuous State Perturb Max  */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} CXPtMax;

/* Parameters (default storage) */
struct P_ {
  real_T b;                            /* Variable: b
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T k;                            /* Variable: k
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T m;                            /* Variable: m
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T x0;                           /* Variable: x0
                                        * Referenced by: '<Root>/Integrator1'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<Root>/Integrator'
                                        */
};

/* External data declarations for dependent source files */
extern const char_T *RT_MEMORY_ALLOCATION_ERROR;
extern B rtB;                          /* block i/o */
extern X rtX;                          /* states (continuous) */
extern DW rtDW;                        /* states (dwork) */
extern P rtP;                          /* parameters */

/* Simulation Structure */
extern SimStruct *const rtS;

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
 * '<Root>' : 'MyModel'
 */

/* user code (bottom of header file) */
extern const int_T gblNumToFiles;
extern const int_T gblNumFrFiles;
extern const int_T gblNumFrWksBlocks;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
extern const int_T gblNumRootInportBlks;
extern const int_T gblNumModelInputs;
extern const int_T gblInportDataTypeIdx[];
extern const int_T gblInportDims[];
extern const int_T gblInportComplex[];
extern const int_T gblInportInterpoFlag[];
extern const int_T gblInportContinuous[];

#endif                                 /* MyModel_h_ */
