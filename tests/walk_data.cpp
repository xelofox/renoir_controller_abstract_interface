//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: walk_data.cpp
//
// Code generated for Simulink model 'walk'.
//
// Model version                  : 1.269
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Fri May 21 13:48:04 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "walk.h"
#include "walk_private.h"

// Constant parameters (default storage)
const ConstP_walk_T walk_ConstP = {
  // Expression: hd12
  //  Referenced by: '<Root>/Data Store Memory12'

  { 2.331468351712852E-16, -6.9944050551385491E-16, 6.9944050551385412E-16,
    -2.3314683517128436E-16, 0.0, -0.0, 0.1 },

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<Root>/Data Store Memory18'
  //    '<Root>/Data Store Memory25'

  { -9.325873406851408E-16, 2.7977620220554196E-15, -2.7977620220554165E-15,
    9.3258734068513745E-16, 0.0, 0.0, -0.4 },

  // Expression: hd4
  //  Referenced by: '<Root>/Data Store Memory29'

  { -3.6168981481482074, 10.850694444444615, -10.850694444444605,
    3.6168981481481963, 0.0, 0.0, -0.0 },

  // Expression: torso_f
  //  Referenced by: '<Root>/Data Store Memory38'

  { 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },

  // Expression: mass_stack
  //  Referenced by: '<Root>/Data Store Memory41'

  { 1.597773, 1.29096, 3.759951, 6.239871, 1.490952, 1.845591, 18.96974,
    1.845591, 1.490952, 6.239871, 3.759951, 1.29096, 1.597773, 0.0, 0.0, 3.02433,
    17.55011, 0.0, 0.73746, 1.443954, 0.0, 0.0, 2.714567, 0.0, 0.0, 2.425086,
    0.0, 2.208741, 0.0, 0.877346, 1.877923, 0.0, 0.0, 0.308441, 0.0, 0.0,
    2.714567, 0.0, 0.0, 2.425086, 0.0, 2.208741, 0.0, 0.877346, 1.877923, 0.0,
    0.0, 0.308441, 0.0 },

  // Expression: CoM_stack
  //  Referenced by: '<Root>/Data Store Memory43'

  { -0.12034668000000001, 0.0, 0.047125719999999996, 0.01271, 0.04708, -0.01106,
    0.20437, 0.0152, -0.02331, 0.19660436, 0.0058523, -0.0636967, 0.00619,
    -0.01583, 0.0, -0.00106736, 0.03130665, 0.02247868, 0.085, 0.02709419,
    0.1947, 0.00106736, -0.02247868, 0.03130665, 0.00619, 0.0, -0.01583,
    -0.18339564, 0.0058523, 0.0636967, -0.12063, 0.0152, 0.02331, 0.01271,
    -0.01106, 0.04708, -0.05987428, 0.0, -0.02034668, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.00013, 0.0, -0.01306, -0.04551, -0.16386, 0.0, 0.0, 0.0, 0.0,
    -0.00157211, -0.02175767, 0.0, 0.01002657, 0.0, 0.14136068, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.10060223, 0.04437419, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.08684268, -0.00092938, 0.01438831, 0.0, 0.0, 0.0, 0.0136084, -0.01241619,
    -0.2499004, 0.0, 0.0, 0.0, 0.00742138, 0.03312656, 0.0213895, 0.0, -0.003262,
    0.079625, 0.0, 0.0, 0.0, 0.000591, -0.001965, 0.0, -0.007525, -0.02463,
    -0.001378, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.10060223, 0.04437419, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.08684268, 0.00092938, 0.01438831, 0.0, 0.0, 0.0,
    0.0136084, 0.01241619, -0.2499004, 0.0, 0.0, 0.0, 0.00742138, 0.03312656,
    -0.0213895, 0.0, 0.003262, 0.079625, 0.0, 0.0, 0.0, -0.000591, 0.001965, 0.0,
    0.007525, 0.02463, 0.001378, 0.0, 0.0, 0.0 },

  // Expression: hd1
  //  Referenced by: '<Root>/Data Store Memory7'

  { -2.0867249183346289E-29, 1.6875389974303349E-15, -5.0626169922908828E-15,
    5.0626169922908457E-15, -1.6875389974302767E-15, 0.0, 0.0, 0.8 },

  // Expression: hd2
  //  Referenced by: '<Root>/Data Store Memory8'

  { -1.3441100084795228E-14, 1.8000000000000376, -4.5000000000000338,
    3.0000000000000093, 0.0, 0.0, -0.0 },

  // Expression: hd3
  //  Referenced by: '<Root>/Data Store Memory9'

  { 0.0, 0.0, 0.0, -0.0, 0.0, 0.2 }
};

//
// File trailer for generated code.
//
// [EOF]
//
