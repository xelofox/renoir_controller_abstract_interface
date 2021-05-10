//
// File: walk_2017a.h
//
// Code generated for Simulink model 'walk_2017a'.
//
// Model version                  : 1.247
// Simulink Coder version         : 8.12 (R2017a) 16-Feb-2017
// C/C++ source code generated on : Mon May 10 09:11:13 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_walk_2017a_h_
#define RTW_HEADER_walk_2017a_h_
#include <cmath>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef walk_2017a_COMMON_INCLUDES_
# define walk_2017a_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // walk_2017a_COMMON_INCLUDES_

#include "walk_2017a_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  real_T J_CoMs[4410];
  real_T J_CoMs_m[4410];
  real_T J_CoMs_c[4410];
  real_T J_CoMs_k[4410];
  real_T J_CoMs_cx[4410];
  real_T J_CoMs_b[4410];
  real_T JQ[900];
  real_T JQ_p[900];
  real_T a[900];
  real_T JQ_c[900];
  real_T V[900];
  real_T U[900];
  real_T b_A[900];
  real_T Vf[900];
  real_T b_A_f[900];
  real_T b_A_g[900];
  real_T b_A_g1[900];
  real_T J_h[840];
  real_T J_h_m[840];
  real_T J_h_n[840];
  real_T J_h_p[840];
  real_T dv0[784];
  real_T T[784];
  real_T Temp[784];
  real_T mat_t[784];
  real_T mat_t_data[784];
  real_T T_l[784];
  real_T T_j[784];
  real_T T_d[784];
  real_T Temp_g[784];
  real_T mat_t_l[784];
  real_T mat_t_data_d[784];
  real_T dv1[784];
  real_T Temp_d[784];
  real_T mat_t_lx[784];
  real_T mat_t_data_o[784];
} B_walk_2017a_T;

// Block states (auto storage) for system '<Root>'
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
  real_T CC;                           // '<Root>/Data Store Memory3'
  real_T hd5[6];                       // '<Root>/Data Store Memory30'
  real_T hd6[6];                       // '<Root>/Data Store Memory31'
  real_T hd7[6];                       // '<Root>/Data Store Memory32'
  real_T hd8[6];                       // '<Root>/Data Store Memory33'
  real_T hd9[6];                       // '<Root>/Data Store Memory34'
  real_T ZMPxCoeff[2];                 // '<Root>/Data Store Memory35'
  real_T ZMPyCoeff[2];                 // '<Root>/Data Store Memory36'
  real_T torso_f[16];                  // '<Root>/Data Store Memory38'
  real_T ant[49];                      // '<Root>/Data Store Memory39'
  real_T DD;                           // '<Root>/Data Store Memory4'
  real_T act[49];                      // '<Root>/Data Store Memory40'
  real_T mass_stack[49];               // '<Root>/Data Store Memory41'
  real_T I_stack[441];                 // '<Root>/Data Store Memory42'
  real_T CoM_stack[147];               // '<Root>/Data Store Memory43'
  real_T mass_tot;                     // '<Root>/Data Store Memory44'
  real_T Ia[30];                       // '<Root>/Data Store Memory45'
  real_T Dx;                           // '<Root>/Data Store Memory46'
  real_T Dy;                           // '<Root>/Data Store Memory47'
  real_T S;                            // '<Root>/Data Store Memory48'
  real_T D;                            // '<Root>/Data Store Memory49'
  real_T EE;                           // '<Root>/Data Store Memory5'
  real_T C;                            // '<Root>/Data Store Memory50'
  real_T T_des;                        // '<Root>/Data Store Memory51'
  real_T Kp[28];                       // '<Root>/Data Store Memory52'
  real_T Kv[28];                       // '<Root>/Data Store Memory53'
  real_T first;                        // '<Root>/Data Store Memory54'
  real_T cyclic;                       // '<Root>/Data Store Memory55'
  real_T swap;                         // '<Root>/Data Store Memory56'
  real_T pos_init;                     // '<Root>/Data Store Memory57'
  real_T in[4];                        // '<Root>/Data Store Memory58'
  real_T FF;                           // '<Root>/Data Store Memory6'
  real_T hd1[8];                       // '<Root>/Data Store Memory7'
  real_T hd2[7];                       // '<Root>/Data Store Memory8'
  real_T hd3[6];                       // '<Root>/Data Store Memory9'
  real_T T0;                           // '<S3>/gait_update'
  real_T t;                            // '<Root>/clock'
  real_T previous_time;                // '<Root>/Compute_Tau'
  real_T accumulated_error[30];        // '<Root>/Compute_Tau'
  boolean_T T0_not_empty;              // '<S3>/gait_update'
  boolean_T t_not_empty;               // '<Root>/clock'
  boolean_T previous_time_not_empty;   // '<Root>/Compute_Tau'
} DW_walk_2017a_T;

// Constant parameters (auto storage)
typedef struct {
  // Expression: K
  //  Referenced by: '<S3>/gait_update'

  real_T gait_update_K[21];

  // Expression: X
  //  Referenced by: '<S3>/gait_update'

  real_T gait_update_X[4];

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

  // Expression: ant
  //  Referenced by: '<Root>/Data Store Memory39'

  real_T DataStoreMemory39_InitialValue[49];

  // Expression: act
  //  Referenced by: '<Root>/Data Store Memory40'

  real_T DataStoreMemory40_InitialValue[49];

  // Expression: mass_stack
  //  Referenced by: '<Root>/Data Store Memory41'

  real_T DataStoreMemory41_InitialValue[49];

  // Expression: I_stack
  //  Referenced by: '<Root>/Data Store Memory42'

  real_T DataStoreMemory42_InitialValue[441];

  // Expression: CoM_stack
  //  Referenced by: '<Root>/Data Store Memory43'

  real_T DataStoreMemory43_InitialValue[147];

  // Expression: Ia
  //  Referenced by: '<Root>/Data Store Memory45'

  real_T DataStoreMemory45_InitialValue[30];

  // Expression: hd1
  //  Referenced by: '<Root>/Data Store Memory7'

  real_T DataStoreMemory7_InitialValue[8];

  // Expression: hd2
  //  Referenced by: '<Root>/Data Store Memory8'

  real_T DataStoreMemory8_InitialValue[7];

  // Expression: hd3
  //  Referenced by: '<Root>/Data Store Memory9'

  real_T DataStoreMemory9_InitialValue[6];
} ConstP_walk_2017a_T;

// Real-time Model Data Structure
struct tag_RTM_walk_2017a_T {
  const char_T * volatile errorStatus;
};

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

// Constant parameters (auto storage)
extern const ConstP_walk_2017a_T walk_2017a_ConstP;

// Class declaration for model walk_2017a
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
    RT_MODEL_walk_2017a_T * getRTM();

    // private data and function members
   private:
    // Block signals
    B_walk_2017a_T walk_2017a_B;

    // Block states
    DW_walk_2017a_T walk_2017a_DW;

    // Real-Time Model
    RT_MODEL_walk_2017a_T walk_2017a_M;

    // private member function(s) for subsystem '<Root>'
    real_T walk_2017a_polyval_j(const real_T p[8], real_T x);
    real_T walk_2017a_polyval_jz(const real_T p[7], real_T x);
    real_T walk_2017a_polyval_jzu(const real_T p[6]);
    void walk_2017a_desired_h_xelo_m(real_T hd[28]);
    void walk_2017a_TALOS_mat_trans2_m(const real_T Q[49], real_T T[784]);
    void walk_2017a_DGM_TALOS_QY_xelo_h(const real_T q[30], real_T T[784]);
    void walk_2017a_compute2_com_xelo_d(const real_T T[784], real_T CoM[3],
      real_T J_CoM[90], real_T J_Ankle[90], real_T crossM[441], real_T J_CoMs
      [4410]);
    void walk_2017a_free_dof_xelo_p(const real_T qp[30], const real_T CoM[3],
      const real_T J_CoM[90], real_T qf[2], real_T qfp[2]);
    void walk_201_J_state_v_TALOS_xelo_f(const real_T T[784], const real_T
      J_CoM[90], const real_T J_Ankle[90], real_T J_h[840]);
    void walk_2017a_state_v_TALOS_xelo_d(const real_T q[30], const real_T T[784],
      const real_T CoM[3], real_T h[28]);
    boolean_T walk_2017a_Initial_test(const real_T q[30], const real_T qp[30]);
    void walk_20_get_phi_and_diff_xelo_i(const real_T qf[2], real_T *phi, real_T
      *dphi_dx, real_T *dphi_dy, real_T *d2phi_dx2, real_T *d2phi_dy2, real_T
      *d2phi_dxy);
    boolean_T walk_2017a_sortLE(const real_T v_data[], const int32_T v_size[2],
      const int32_T col_data[], int32_T irow1, int32_T irow2);
    void walk_2017a_linsolve(const real_T A[64], real_T B[8]);
    void walk_2017a_findPolyCoeff(real_T Coeff[8]);
    void walk_2017a_linsolve_f(const real_T A[49], real_T B[7]);
    void walk_2017a_findPolyCoeff_b(const real_T posd[6], real_T Coeff[7]);
    void walk_2017a_linsolve_fo(const real_T A[36], real_T B[6]);
    void walk_2017a_findPolyCoeff_bv(const real_T posd[4], real_T Coeff[6]);
    void walk_2017a_findPolyCoeff_bv1(real_T Coeff[7]);
    void walk_2017a_findPolyCoeff_bv1j(real_T Coeff[7]);
    void walk_2017a_findPolyCoeff_bv1jo(real_T Coeff[6]);
    void walk_2017a_findPolyCoeff_bv1joy(real_T Coeff[7]);
    void walk_2017a_set_trajectories_f(void);
    void walk_2017a_polyder_j(const real_T u[8], real_T a_data[], int32_T
      a_size[2]);
    real_T walk_2017a_polyval_jzuq(const real_T p_data[], const int32_T p_size[2]);
    void walk_2017_findPolyCoeff_bv1joyt(const real_T posd[6], const real_T
      veld[6], real_T Coeff[8]);
    void walk_2017a_update_gait(const real_T value[7]);
    void walk_2017a_Correction_gait_K(const real_T b_X[4], const real_T b_K[21],
      const real_T q_fin[30], const real_T qp_fin[30]);
    void walk_2017a_swap_joints(real_T q[30]);
    void walk_2017a_TALOS_mat_trans2_j(const real_T Q[49], real_T T[784]);
    void walk_2017a_DGM_TALOS_QY_xelo_hy(const real_T q[30], real_T T[784]);
    void walk_2017a_compute2_com_xelo_e(const real_T T[784], real_T CoM[3],
      real_T J_CoM[90], real_T J_Ankle[90], real_T crossM[441], real_T J_CoMs
      [4410]);
    void walk_2017a_free_dof_xelo_f(const real_T qp[30], const real_T CoM[3],
      const real_T J_CoM[90], real_T qf[2], real_T qfp[2]);
    void walk_2017a_get_phi_coeff(const real_T b_y0[3], real_T *phi_coeff_b_AA,
      real_T *phi_coeff_b_BB, real_T *phi_coeff_b_CC, real_T *phi_coeff_b_DD,
      real_T *phi_coeff_b_EE, real_T *phi_coeff_b_FF);
    void walk_2017a_TALOS_mat_trans2(const real_T Q[49], real_T T[784]);
    void walk_2017a_DGM_TALOS_QY_xelo(const real_T q[30], real_T T[784]);
    void walk_2017a_compute2_com_xelo(const real_T T[784], real_T CoM[3], real_T
      J_CoM[90], real_T J_Ankle[90], real_T crossM[441], real_T J_CoMs[4410]);
    void walk_2017a_free_dof_xelo(const real_T qp[30], const real_T CoM[3],
      const real_T J_CoM[90], real_T qf[2], real_T qfp[2]);
    void walk_2017a_J_state_v_TALOS_xelo(const real_T T[784], const real_T
      J_CoM[90], const real_T J_Ankle[90], real_T J_h[840]);
    void walk_2017a_state_v_TALOS_xelo(const real_T q[30], const real_T T[784],
      const real_T CoM[3], real_T h[28]);
    void walk_2017_get_phi_and_diff_xelo(const real_T qf[2], real_T *phi, real_T
      *dphi_dx, real_T *dphi_dy, real_T *d2phi_dx2, real_T *d2phi_dy2, real_T
      *d2phi_dxy);
    void walk_2017a_inv_n(const real_T x[9], real_T y[9]);
    void walk_2017a_invNxN(const real_T x[16], real_T y[16]);
    void walk_2017a_inv(const real_T x[16], real_T y[16]);
    void walk_20_get_JpCoMqp_Jpi_qp_xelo(const real_T T[784], const real_T qp[30],
      real_T JpCoMqp[3], real_T Jpi_qp[294]);
    void walk_2017a_polyder(const real_T u_data[], const int32_T *u_size, real_T
      a_data[], int32_T a_size[2]);
    real_T walk_2017a_polyval_ioz(const real_T p_data[], const int32_T p_size[2],
      real_T x);
    void walk_2017a_polyder_l(const real_T u_data[], const int32_T u_size[2],
      real_T a_data[], int32_T a_size[2]);
    void walk_2017a_get_hd_jacob_xelo(const real_T qfp[2], real_T phi, real_T
      dphi_dx, real_T dphi_dy, real_T d2phi_dx2, real_T d2phi_dy2, real_T
      d2phi_dxy, real_T dhd_dqf[56], real_T dhd_dqf_p[56]);
    void walk_2017a_xswap(real_T x[900], int32_T ix0, int32_T iy0);
    void walk_2017a_xgetrf(real_T A[900], int32_T ipiv[30], int32_T *info);
    void walk_2017a_xtrsm_el44(const real_T A[900], real_T B[60]);
    void walk_2017a_xtrsm_el44v(const real_T A[900], real_T B[60]);
    void walk_2017a_mldivide_fs(const real_T A[900], real_T B[60]);
    void walk_2017a_get_JQ_JPhi_xelo(const real_T J_h[840], const real_T J_CoM
      [90], const real_T dhd_dqf[56], real_T JQ[900], real_T JPhi[60]);
    void walk_2017a_OmeDotRPY(real_T phi, real_T theta, real_T phip, real_T
      thetap, real_T OmeDot[9]);
    void walk_2017a_xtrsm_el(const real_T A[900], real_T B[30]);
    void walk_2017a_xtrsm_el4(const real_T A[900], real_T B[30]);
    void walk_2017a_mldivide_f(const real_T A[900], real_T B[30]);
    void walk_2_get_JQpqp_JPhipPhip_xelo(const real_T T[784], const real_T
      JpCoMqp[3], const real_T Jpi_qp[294], const real_T qp[30], const real_T
      JQ[900], const real_T dhd_dqf_p[56], const real_T qfp[2], real_T JQpqp[30],
      real_T JPhipPhip[30]);
    void walk_2017a_cross_matrix(const real_T r_data[], real_T r_cross[9]);
    void walk_20_TALOS_Newton_Euler_xelo(const real_T T[784], const real_T qD[30],
      const real_T qDD[30], real_T F0[3], real_T M0[3], real_T Tau[30]);
    void walk_2017a_qfpp_desired_xelo(const real_T F1[3], const real_T M1[3],
      const real_T Tau1[30], const real_T F2[3], const real_T M2[3], const
      real_T Tau2[30], const real_T F3[3], const real_T M3[3], const real_T
      Tau3[30], real_T phi, real_T qfpp[2]);
    void walk_20_desired_h_and_diff_xelo(const real_T qfp[2], const real_T qfpp
      [2], const real_T dhd_dqf[56], const real_T dhd_dqf_p[56], real_T phi,
      real_T hd[28], real_T hdp[28], real_T hdpp[28]);
    void walk_2017a_xscal(real_T a, real_T x[900], int32_T ix0);
    void walk_2017a_xswap_l(real_T x[900], int32_T ix0, int32_T iy0);
    void walk_2017a_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
    void walk_2017a_xrot(real_T x[900], int32_T ix0, int32_T iy0, real_T c,
                         real_T s);
    real_T walk_2017a_xdotc(int32_T n, const real_T x[900], int32_T ix0, const
      real_T y[900], int32_T iy0);
    void walk_2017a_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[900],
                          int32_T iy0);
    real_T walk_2017a_xnrm2(int32_T n, const real_T x[900], int32_T ix0);
    real_T walk_2017a_xnrm2_d(int32_T n, const real_T x[30], int32_T ix0);
    void walk_2017a_xaxpy_i3(int32_T n, real_T a, const real_T x[30], int32_T
      ix0, real_T y[900], int32_T iy0);
    void walk_2017a_xaxpy_i(int32_T n, real_T a, const real_T x[900], int32_T
      ix0, real_T y[30], int32_T iy0);
    void walk_2017a_svd(const real_T A[900], real_T U[900], real_T s[30], real_T
                        V[900]);
    real_T walk_2017a_eps(real_T x);
    void walk_2017a_xgemm(int32_T k, const real_T A[900], const real_T B[900],
                          real_T C[900]);
    void walk_2017a_pinv(const real_T A[900], real_T X[900]);
    void walk_2_desired_joint_accel_xelo(const real_T JQ[900], const real_T
      JQpqp[30], const real_T v[28], const real_T qfpp[2], real_T qpp[30]);
    void walk_2017a_Phase_control(const real_T q[30], const real_T qp[30],
      real_T Tau[30]);
    void walk_2017a_get_dhd_dphi_init(real_T t, real_T dhd_dPhi[84]);
    void walk_2017a_xtrsm(const real_T A[900], real_T B[90]);
    void walk_2017a_xtrsm_e(const real_T A[900], real_T B[90]);
    void walk_2017a_mldivide(const real_T A[900], real_T B[90]);
    void walk_2017_get_JQ_JPhi_xelo_init(const real_T J_h[840], const real_T
      J_CoM[90], const real_T dhd_dPhi[84], real_T JQ[900], real_T JPhi[90]);
    void walk_2017a_get_dhd_dphi_p_init(const real_T qfp[2], real_T t, real_T
      dhd_dPhi_p[84]);
    void w_get_JQpqp_JPhipPhip_xelo_init(const real_T T[784], const real_T
      JpCoMqp[3], const real_T Jpi_qp[294], const real_T qp[30], const real_T
      JQ[900], const real_T dhd_dPhi_p[84], const real_T qfp[2], real_T JQpqp[30],
      real_T JPhipPhip[30]);
    void wa_desired_h_and_diff_xelo_init(const real_T dhd_dPhi[84], const real_T
      dhd_dPhi_p[84], real_T t, const real_T qfp[2], const real_T qfpp[2],
      real_T hd[28], real_T hdp[28], real_T hdpp[28]);
    void walk_2017a_Time_control(const real_T q[30], const real_T qp[30], real_T
      t, real_T Tau[30]);
    real_T walk_2017a_polyval(const real_T p[8]);
    real_T walk_2017a_polyval_i(const real_T p[7]);
    real_T walk_2017a_polyval_io(const real_T p[6]);
    void walk_2017a_desired_h_xelo(real_T hd[28]);
    void walk_2017a_Initial_control(const real_T q[30], const real_T qp[30],
      real_T t, real_T Tau[30]);
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
//  '<Root>' : 'walk_2017a'
//  '<S1>'   : 'walk_2017a/Compute_Tau'
//  '<S2>'   : 'walk_2017a/clock'
//  '<S3>'   : 'walk_2017a/gait_update1'
//  '<S4>'   : 'walk_2017a/map_torques'
//  '<S5>'   : 'walk_2017a/mapping'
//  '<S6>'   : 'walk_2017a/swap_torques'
//  '<S7>'   : 'walk_2017a/swapping'
//  '<S8>'   : 'walk_2017a/gait_update1/gait_update'
//  '<S9>'   : 'walk_2017a/gait_update1/update_phi_coeff'

#endif                                 // RTW_HEADER_walk_2017a_h_

//
// File trailer for generated code.
//
// [EOF]
//
