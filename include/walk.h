//
// File: walk.h
//
// Code generated for Simulink model 'walk'.
//
// Model version                  : 1.65
// Simulink Coder version         : 8.12 (R2017a) 16-Feb-2017
// C/C++ source code generated on : Wed Apr 28 18:17:14 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_walk_h_
#define RTW_HEADER_walk_h_
#include <cmath>
#include <string.h>
#include <stddef.h>
#ifndef walk_COMMON_INCLUDES_
# define walk_COMMON_INCLUDES_
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

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T accumulated_time_;            // '<Root>/walk'
  real_T tau_[32];                     // '<Root>/walk'
} DW_walk_T;

// Real-time Model Data Structure
struct tag_RTM_walk_T {
  const char_T * volatile errorStatus;
};

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

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
    // Block states
    DW_walk_T walk_DW;

    // Real-Time Model
    RT_MODEL_walk_T walk_M;
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
//  '<S1>'   : 'walk/walk'

#endif                                 // RTW_HEADER_walk_h_

//
// File trailer for generated code.
//
// [EOF]
//
