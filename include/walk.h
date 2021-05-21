//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: walk.h
//
// Code generated for Simulink model 'walk'.
//
// Model version                  : 1.268
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Fri May 21 13:37:01 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_walk_h_
#define RTW_HEADER_walk_h_
#include <cmath>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef walk_COMMON_INCLUDES_
# define walk_COMMON_INCLUDES_
#include <stdio.h>
#include "rtwtypes.h"
#endif                                 // walk_COMMON_INCLUDES_

#include "walk_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  real_T J_CoMs[4410];
  real_T JQ[900];
  real_T J_h[840];
  real_T T[784];
  real_T Temp[784];
  real_T mat_t[784];
  real_T mat_t_data[784];
} B_walk_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  real_T AA;                           // '<Root>/Data Store Memory1'
  real_T hd10[6];                      // '<Root>/Data Store Memory10'
  real_T hd11[6];                      // '<Root>/Data Store Memory11'
  real_T hd12[7];                      // '<Root>/Data Store Memory12'
  real_T hd13[6];                      // '<Root>/Data Store Memory13'
  real_T hd14[6];                      // '<Root>/Data Store Memory14'
  real_T hd15[6];                      // '<Root>/Data Store Memory15'
  real_T hd16[6];                      // '<Root>/Data Store Memory16'
  real_T hd17[6];                      // '<Root>/Data Store Memory17'
  real_T hd18[7];                      // '<Root>/Data Store Memory18'
  real_T hd19[6];                      // '<Root>/Data Store Memory19'
  real_T BB;                           // '<Root>/Data Store Memory2'
  real_T hd20[6];                      // '<Root>/Data Store Memory20'
  real_T hd21[6];                      // '<Root>/Data Store Memory21'
  real_T hd22[6];                      // '<Root>/Data Store Memory22'
  real_T hd23[6];                      // '<Root>/Data Store Memory23'
  real_T hd24[6];                      // '<Root>/Data Store Memory24'
  real_T hd25[7];                      // '<Root>/Data Store Memory25'
  real_T hd26[6];                      // '<Root>/Data Store Memory26'
  real_T hd27[6];                      // '<Root>/Data Store Memory27'
  real_T hd28[6];                      // '<Root>/Data Store Memory28'
  real_T hd4[7];                       // '<Root>/Data Store Memory29'
  real_T hd5[6];                       // '<Root>/Data Store Memory30'
  real_T hd6[6];                       // '<Root>/Data Store Memory31'
  real_T hd7[6];                       // '<Root>/Data Store Memory32'
  real_T hd8[6];                       // '<Root>/Data Store Memory33'
  real_T hd9[6];                       // '<Root>/Data Store Memory34'
  real_T ZMPxCoeff[3];                 // '<Root>/Data Store Memory35'
  real_T ZMPyCoeff[3];                 // '<Root>/Data Store Memory36'
  real_T torso_f[16];                  // '<Root>/Data Store Memory38'
  real_T mass_stack[49];               // '<Root>/Data Store Memory41'
  real_T CoM_stack[147];               // '<Root>/Data Store Memory43'
  real_T mass_tot;                     // '<Root>/Data Store Memory44'
  real_T EE;                           // '<Root>/Data Store Memory5'
  real_T Kp[28];                       // '<Root>/Data Store Memory52'
  real_T Kv[28];                       // '<Root>/Data Store Memory53'
  real_T first;                        // '<Root>/Data Store Memory54'
  real_T cyclic;                       // '<Root>/Data Store Memory55'
  real_T swap;                         // '<Root>/Data Store Memory56'
  real_T FF;                           // '<Root>/Data Store Memory6'
  real_T xyT_ini[3];                   // '<Root>/Data Store Memory60'
  real_T last;                         // '<Root>/Data Store Memory61'
  real_T stop;                         // '<Root>/Data Store Memory62'
  real_T hd1[8];                       // '<Root>/Data Store Memory7'
  real_T hd2[7];                       // '<Root>/Data Store Memory8'
  real_T hd3[6];                       // '<Root>/Data Store Memory9'
  real_T t;                            // '<Root>/clock'
  real_T previous_time;                // '<Root>/Compute_Tau'
  real_T accumulated_error[30];        // '<Root>/Compute_Tau'
  boolean_T t_not_empty;               // '<Root>/clock'
  boolean_T previous_time_not_empty;   // '<Root>/Compute_Tau'
} DW_walk_T;

// Constant parameters (default storage)
typedef struct {
  // Expression: hd12
  //  Referenced by: '<Root>/Data Store Memory12'

  real_T DataStoreMemory12_InitialValue[7];

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<Root>/Data Store Memory18'
  //    '<Root>/Data Store Memory25'

  real_T pooled3[7];

  // Expression: hd4
  //  Referenced by: '<Root>/Data Store Memory29'

  real_T DataStoreMemory29_InitialValue[7];

  // Expression: torso_f
  //  Referenced by: '<Root>/Data Store Memory38'

  real_T DataStoreMemory38_InitialValue[16];

  // Expression: mass_stack
  //  Referenced by: '<Root>/Data Store Memory41'

  real_T DataStoreMemory41_InitialValue[49];

  // Expression: CoM_stack
  //  Referenced by: '<Root>/Data Store Memory43'

  real_T DataStoreMemory43_InitialValue[147];

  // Expression: hd1
  //  Referenced by: '<Root>/Data Store Memory7'

  real_T DataStoreMemory7_InitialValue[8];

  // Expression: hd2
  //  Referenced by: '<Root>/Data Store Memory8'

  real_T DataStoreMemory8_InitialValue[7];

  // Expression: hd3
  //  Referenced by: '<Root>/Data Store Memory9'

  real_T DataStoreMemory9_InitialValue[6];
} ConstP_walk_T;

// Real-time Model Data Structure
struct tag_RTM_walk_T {
  const char_T * volatile errorStatus;
};

// Constant parameters (default storage)
extern const ConstP_walk_T walk_ConstP;

// Class declaration for model walk
namespace renoir_controller
{
  class walkModelClass {
    // public data and function members
   public:
    // model initialize function
    void initialize();

    // model step function
    void step(real_T (&arg_q)[32], real_T (&arg_qp)[32], real_T (&arg_torque)[32]);

    // model terminate function
    void terminate();

    // Constructor
    walkModelClass();

    // Destructor
    ~walkModelClass();

    // Real-Time Model get method
    RT_MODEL_walk_T * getRTM();

    // private data and function members
   private:
    // Block signals
    B_walk_T walk_B;

    // Block states
    DW_walk_T walk_DW;

    // Real-Time Model
    RT_MODEL_walk_T walk_M;

    // private member function(s) for subsystem '<Root>'
    real_T walk_polyval(const real_T p[8]);
    real_T walk_polyval_i(const real_T p[7]);
    real_T walk_polyval_i3(const real_T p[6]);
    void walk_desired_h_xelo(real_T hd[28]);
    void walk_TALOS_mat_trans2(const real_T Q[49], real_T T[784]);
    void walk_DGM_TALOS_QY_xelo(const real_T q[30], real_T T[784]);
    void walk_compute2_com_xelo(const real_T T[784], real_T CoM[3], real_T
      J_CoM[90], real_T J_Ankle[90], real_T crossM[441], real_T J_CoMs[4410]);
    void walk_J_state_v_TALOS_xelo(const real_T T[784], const real_T J_CoM[90],
      const real_T J_Ankle[90], real_T J_h[840]);
    void walk_state_v_TALOS_xelo(const real_T q[30], const real_T T[784], const
      real_T CoM[3], real_T h[28]);
  };
}

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'walk'
//  '<S1>'   : 'walk/Compute_Tau'
//  '<S2>'   : 'walk/clock'
//  '<S3>'   : 'walk/map_torques'
//  '<S4>'   : 'walk/mapping'
//  '<S5>'   : 'walk/swap_torques'
//  '<S6>'   : 'walk/swapping'

#endif                                 // RTW_HEADER_walk_h_

//
// File trailer for generated code.
//
// [EOF]
//
