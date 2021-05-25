//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: walk.cpp
//
// Code generated for Simulink model 'walk'.
//
// Model version                  : 1.70
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Tue May 25 19:56:28 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "walk.h"
#include "walk_private.h"

// Named constants for MATLAB Function: '<Root>/walk'
#define walk_dt_                       (0.001)

namespace renoir_controller
{
  // Model step function
  void walkModelClass::step(real_T (&arg_q)[32], real_T (&arg_qp)[32], real_T
    (&arg_torque)[32])
  {
    real_T error;
    int32_T i;
    static const real_T b[32] = { 0.0, 0.0, -0.411354, 0.859395, -0.448041,
      -0.001708, 0.0, 0.0, -0.411354, 0.859395, -0.448041, -0.001708, 0.0,
      0.006761, 0.25847, 0.173046, -0.0002, -0.525366, 0.0, -0.0, 0.1, 0.0,
      -0.25847, -0.173046, 0.0002, -0.525366, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0 };

    static const int16_T c[30] = { 5000, 5000, 5000, 5000, 5000, 5000, 5000,
      5000, 5000, 5000, 5000, 5000, 1000, 1000, 100, 200, 50, 50, 50, 50, 50,
      100, 200, 50, 50, 50, 50, 50, 300, 300 };

    static const real_T d[30] = { 20.0, 20.0, 20.0, 20.0, 20.0, 2.0, 20.0, 20.0,
      20.0, 20.0, 20.0, 1.0, 10.0, 10.0, 50.0, 50.0, 10.0, 1.0, 1.0, 1.0, 1.0,
      50.0, 50.0, 10.0, 1.0, 1.0, 1.0, 1.0, 0.1, 0.1 };

    // MATLAB Function: '<Root>/walk' incorporates:
    //   Inport: '<Root>/q'
    //   Inport: '<Root>/qp'

    //  nbDofs_ and dt_ are declared as "parameter" with the command "explorer" on the block function 
    //  As the parameter 'nbDofs_' is used in 'zeros' function, it must be declare 'no tunable'. 
    //  this parameter are initialized with the ecript 'init.m'.
    // MATLAB Function 'walk': '<S1>:1'
    // '<S1>:1:8' if isempty(accumulated_time_)
    // '<S1>:1:13' P= [5000.0, 5000.0, 5000.0, 5000.0, 5000.0, 5000.0,...
    // '<S1>:1:14'     5000.0, 5000.0, 5000.0, 5000.0, 5000.0, 5000.0,...
    // '<S1>:1:15'     1000.0, 1000.0, ...
    // '<S1>:1:16'     100.0, 200.0, 50.0, 50.0, 50.0, 50.0, 50.0,...
    // '<S1>:1:17'     100.0, 200.0, 50.0, 50.0, 50.0, 50.0, 50.0,...
    // '<S1>:1:18'     300.0, 300.0 ];
    // '<S1>:1:20' D = [ 20.0, 20.0, 20.0, 20.0, 20.0, 2.0,...
    // '<S1>:1:21'       20.0, 20.0, 20.0, 20.0, 20.0, 1.0,...
    // '<S1>:1:22'       10.0, 10.0,...
    // '<S1>:1:23'       50.0, 50.0, 10.0, 1.0, 1.0, 1.0, 1.0,...
    // '<S1>:1:24'       50.0, 50.0, 10.0, 1.0, 1.0, 1.0, 1.0,...
    // '<S1>:1:25'       0.1,   0.1];
    // '<S1>:1:27' q_des = [
    // '<S1>:1:28'           0.0,  0.0, -0.411354,  0.859395, -0.448041, -0.001708,... 
    // '<S1>:1:29'           0.0,  0.0, -0.411354,  0.859395, -0.448041, -0.001708,... 
    // '<S1>:1:30'           0.0 ,  0.006761,...
    // '<S1>:1:31'           0.25847 ,  0.173046, -0.0002, -0.525366, 0.0, -0.0,  0.1,... 
    // '<S1>:1:32'           0.0,...
    // '<S1>:1:33'           -0.25847 , -0.173046, 0.0002  , -0.525366, 0.0,  0.0,  0.1,... 
    // '<S1>:1:34'           0.0,...
    // '<S1>:1:35'           0.0, 0.0];
    // '<S1>:1:37' for i= 1 : length(P)
    for (i = 0; i < 30; i++) {
      // '<S1>:1:38' error= q_des(i) - q(i);
      error = b[i] - arg_q[i];

      // '<S1>:1:39' if i==18
      if (1 + i == 18) {
        // '<S1>:1:40' if accumulated_time_<2*3.14159265358
        if (walk_DW.accumulated_time_ < 6.28318530716) {
          // '<S1>:1:41' error= (q_des(i) + sin(accumulated_time_)*0.087) - q(i); 
          error = (std::sin(walk_DW.accumulated_time_) * 0.087 + b[i]) - arg_q[i];
        } else {
          // '<S1>:1:42' else
          // '<S1>:1:43' error= (q_des(i) + sin(2*3.14*accumulated_time_/10)*3.14/4) - q(i); 
          error = (std::sin(6.28 * walk_DW.accumulated_time_ / 10.0) * 3.14 /
                   4.0 + b[i]) - arg_q[i];
        }

        // '<S1>:1:45' fprintf("qdes = %f  , q_actual = %f \n",q_des(i),q(i))
        printf("qdes = %f  , q_actual = %f \n", b[i], arg_q[i]);
        fflush(stdout);
      }

      // '<S1>:1:48' tau_(i)= P(i)*error + D(i)*(-qp(i));
      walk_DW.tau_[i] = static_cast<real_T>(c[i]) * error + d[i] * -arg_qp[i];

      // '<S1>:1:49' if i==22 || i==30 || i==31 || i==32
      if ((1 + i == 22) || (1 + i == 30)) {
        // '<S1>:1:50' tau_(i)= q_des(i);
        walk_DW.tau_[i] = b[i];
      }
    }

    // '<S1>:1:53' accumulated_time_= accumulated_time_ + dt_;
    walk_DW.accumulated_time_ += walk_dt_;

    // Outport: '<Root>/torque' incorporates:
    //   MATLAB Function: '<Root>/walk'

    // '<S1>:1:54' computeTorque= tau_;
    memcpy(&arg_torque[0], &walk_DW.tau_[0], sizeof(real_T) << 5U);
  }

  // Model initialize function
  void walkModelClass::initialize()
  {
    // Registration code

    // initialize error status
    rtmSetErrorStatus((&walk_M), (NULL));

    // states (dwork)
    (void) memset((void *)&walk_DW, 0,
                  sizeof(DW_walk_T));

    // SystemInitialize for MATLAB Function: '<Root>/walk'
    // '<S1>:1:9' accumulated_time_= 0;
    walk_DW.accumulated_time_ = 0.0;

    // '<S1>:1:10' tau_= zeros(1,nbDofs_);
    memset(&walk_DW.tau_[0], 0, sizeof(real_T) << 5U);
  }

  // Model terminate function
  void walkModelClass::terminate()
  {
    // (no terminate code required)
  }

  // Constructor
  walkModelClass::walkModelClass()
  {
    // Currently there is no constructor body generated.
  }

  // Destructor
  walkModelClass::~walkModelClass()
  {
    // Currently there is no destructor body generated.
  }

  // Real-Time Model get method
  RT_MODEL_walk_T * walkModelClass::getRTM()
  {
    return (&walk_M);
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
