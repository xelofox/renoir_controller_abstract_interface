//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: walk.cpp
//
// Code generated for Simulink model 'walk'.
//
// Model version                  : 1.293
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Tue Jun 15 18:16:37 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "walk.h"
#include "walk_private.h"

namespace renoir_controller
{
  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function  [T]=TALOS_mat_trans2(Q)
  //
  void walkModelClass::walk_TALOS_mat_trans2(const real_T Q[49], real_T T[784])
  {
    real_T im;
    int32_T j;
    static const real_T b[49] = { 0.1, 0.0, 0.0, 0.325, 0.38, 0.0, 0.0, 0.17,
      0.0, 0.0, -0.38, -0.325, 0.0, 0.0, 0.085, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.00493, 0.0, 0.0, 0.0, 0.0, 0.02, 0.0, 0.02, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.00493, 0.0, 0.0, 0.0, 0.0, 0.02, 0.0, 0.02, 0.0, 0.0, 0.0, 0.0
    };

    static const real_T c[49] = { 0.0, -0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, -0.107, 0.0, 0.34325, 0.0, 0.316, 0.0, 0.0, 0.0,
      -0.232, 0.1575, 0.04673, -0.1365, 0.0, 0.0, 0.0, -0.273, 0.0, -0.2643, 0.0,
      0.0, 0.0, 0.0, 0.232, 0.1575, 0.04673, 0.1365, 0.0, 0.0, 0.0, -0.273, 0.0,
      -0.2643, 0.0, 0.0, 0.0, 0.0 };

    static const real_T d[49] = { 0.0, 0.107, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

    static const real_T e[49] = { 0.0, 1.5707963267948966, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.5707963267948966, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0 };

    static const real_T f[49] = { 0.0, 1.5707963267948966, 1.5707963267948966,
      0.0, 0.0, -1.5707963267948966, -1.5707963267948966, 0.0,
      1.5707963267948966, 1.5707963267948966, 0.0, 0.0, -1.5707963267948966,
      -1.5707963267948966, 0.0, 0.0, -1.5707963267948966, 1.5707963267948966,
      -1.5707963267948966, 1.5707963267948966, 0.0, 0.0, 1.5707963267948966, 0.0,
      -1.5707963267948966, 1.5707963267948966, 0.0, -1.5707963267948966, 0.0,
      -1.5707963267948966, 1.5707963267948966, 0.0, 1.5707963267948966,
      -1.5707963267948966, 0.0, 0.0, 1.5707963267948966, 0.0,
      -1.5707963267948966, 1.5707963267948966, 0.0, -1.5707963267948966, 0.0,
      -1.5707963267948966, 1.5707963267948966, 0.0, -1.5707963267948966,
      -1.5707963267948966, 0.0 };

    real_T T_tmp;
    real_T T_tmp_0;
    real_T T_tmp_1;
    real_T T_tmp_2;
    int32_T T_tmp_3;
    real_T T_tmp_tmp;
    real_T T_tmp_tmp_0;
    real_T T_tmp_4;

    // 'TALOS_mat_trans2:3' d1= 0.1;
    // 'TALOS_mat_trans2:4' d4= 0.325;
    // 'TALOS_mat_trans2:5' d5= 0.380;
    // 'TALOS_mat_trans2:6' d8= 0.17;
    // 'TALOS_mat_trans2:7' d11= -0.380;
    // 'TALOS_mat_trans2:8' d12= -0.325;
    // 'TALOS_mat_trans2:9' d15= 0.085;
    // 'TALOS_mat_trans2:10' d24= 0.00493;
    // 'TALOS_mat_trans2:11' d29= 0.020;
    // 'TALOS_mat_trans2:12' d31= 0.020;
    // 'TALOS_mat_trans2:13' d38= 0.00493;
    // 'TALOS_mat_trans2:14' d43= 0.020;
    // 'TALOS_mat_trans2:15' d45= 0.020;
    // 'TALOS_mat_trans2:17' r2= -0.1;
    // 'TALOS_mat_trans2:18' r14= -0.107;
    // 'TALOS_mat_trans2:19' r16= 0.34325;
    // 'TALOS_mat_trans2:20' r18= 0.316;
    // 'TALOS_mat_trans2:21' r22= -0.232;
    // 'TALOS_mat_trans2:22' r23= 0.1575;
    // 'TALOS_mat_trans2:23' r24= 0.04673;
    // 'TALOS_mat_trans2:24' r25= -0.1365;
    // 'TALOS_mat_trans2:25' r29= -0.273;
    // 'TALOS_mat_trans2:26' r31= -0.2643;
    // 'TALOS_mat_trans2:27' r36= 0.232;
    // 'TALOS_mat_trans2:28' r37= 0.1575;
    // 'TALOS_mat_trans2:29' r38= 0.04673;
    // 'TALOS_mat_trans2:30' r39= 0.1365;
    // 'TALOS_mat_trans2:31' r43= -0.273;
    // 'TALOS_mat_trans2:32' r45= -0.2643;
    // 'TALOS_mat_trans2:34' b2= 0.107;
    // 'TALOS_mat_trans2:35' b14= 0.100;
    // /$gamma15 0.0737$/
    // 'TALOS_mat_trans2:38' gamma15= 0;
    // 'TALOS_mat_trans2:40' alpha16= 0.174537;
    // 'TALOS_mat_trans2:41' alpha21= -0.158675;
    // 'TALOS_mat_trans2:42' alpha23= 1.484004;
    // 'TALOS_mat_trans2:43' alpha29= 0.158675;
    // 'TALOS_mat_trans2:44' alpha31= 1.484004;
    // 'TALOS_mat_trans2:46' gam =   [0,pi/2,0,0,0, ...
    // 'TALOS_mat_trans2:47' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:48' 0,0,0,-pi/2,gamma15, ...
    // 'TALOS_mat_trans2:49' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:50' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:51' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:52' 0,0,0,0,0,0,0, ...
    // 'TALOS_mat_trans2:53' 0,0,0,0,0,0,0,0,0,0,0,0];
    // 'TALOS_mat_trans2:55' b =     [0,b2,0,0,0, ...
    // 'TALOS_mat_trans2:56' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:57' 0,0,0,b14,0, ...
    // 'TALOS_mat_trans2:58' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:59' 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]; 
    // 'TALOS_mat_trans2:61' r =     [0,r2,0,0,0, ...
    // 'TALOS_mat_trans2:62' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:63' 0,0,0,r14,0, ...
    // 'TALOS_mat_trans2:64' r16,0,r18,0,0, ...
    // 'TALOS_mat_trans2:65' 0,r22,r23,r24,r25, ...
    // 'TALOS_mat_trans2:66' 0,0,0,r29,0, ...
    // 'TALOS_mat_trans2:67' r31,0,0,0,0, ...
    // 'TALOS_mat_trans2:68' r36,r37,  ...
    // 'TALOS_mat_trans2:69' r38,r39,0, ...
    // 'TALOS_mat_trans2:70' 0,0,r43,0,r45, ...
    // 'TALOS_mat_trans2:71' 0,0,0,0];
    // 'TALOS_mat_trans2:73' d =     [d1,0,0,d4,d5, ...
    // 'TALOS_mat_trans2:74' 0,0,d8,0,0, ...
    // 'TALOS_mat_trans2:75' d11,d12,0,0,d15, ...
    // 'TALOS_mat_trans2:76' 0,0,0,0,0, ...
    // 'TALOS_mat_trans2:77' 0,0,0,d24,0, ...
    // 'TALOS_mat_trans2:78' 0,0,0,d29,0, ...
    // 'TALOS_mat_trans2:79' d31,0,0,0,0, ...
    // 'TALOS_mat_trans2:80' 0,0,d38,0,0, ...
    // 'TALOS_mat_trans2:81' 0,0,d43,0,d45, ...
    // 'TALOS_mat_trans2:82' 0,0,0,0];
    // 'TALOS_mat_trans2:84' alpha = [0,pi/2,pi/2,0,0, ...
    // 'TALOS_mat_trans2:85' -pi/2,-pi/2,0,pi/2,pi/2, ...
    // 'TALOS_mat_trans2:86' 0,0,-pi/2,-pi/2,0,   ...
    // 'TALOS_mat_trans2:87' 0,-pi/2,pi/2,-pi/2,pi/2, ...
    // 'TALOS_mat_trans2:88' 0,0,pi/2,0,-pi/2, ...
    // 'TALOS_mat_trans2:89' pi/2,0,-pi/2,0,-pi/2, ...
    // 'TALOS_mat_trans2:90' pi/2,0,pi/2,-pi/2,0, ...
    // 'TALOS_mat_trans2:91' 0,pi/2, ...
    // 'TALOS_mat_trans2:92' 0,-pi/2,pi/2, ...
    // 'TALOS_mat_trans2:93' 0,-pi/2,0,-pi/2,pi/2, ...
    // 'TALOS_mat_trans2:94' 0,-pi/2,-pi/2,0];
    // 'TALOS_mat_trans2:96' NJoints=length(Q);
    // 'TALOS_mat_trans2:97' T=zeros(4*NJoints,4);
    memset(&T[0], 0, 784U * sizeof(real_T));

    // 'TALOS_mat_trans2:98' im=1;
    im = 1.0;

    // 'TALOS_mat_trans2:99' for j=1:NJoints
    for (j = 0; j < 49; j++) {
      // 'TALOS_mat_trans2:100' T(im,1)=cos(gam(j))*cos(Q(j))-sin(gam(j))*cos(alpha(j))*sin(Q(j)); 
      T_tmp = std::cos(e[j]);
      T_tmp_0 = std::sin(Q[j]);
      T_tmp_tmp = std::sin(e[j]);
      T_tmp_tmp_0 = std::cos(f[j]);
      T_tmp_1 = T_tmp_tmp * T_tmp_tmp_0;
      T_tmp_2 = std::cos(Q[j]);
      T_tmp_3 = static_cast<int32_T>(im);
      T[T_tmp_3 - 1] = T_tmp * T_tmp_2 - T_tmp_1 * T_tmp_0;

      // 'TALOS_mat_trans2:101' T(im,2)=-cos(gam(j))*sin(Q(j))-sin(gam(j))*cos(alpha(j))*cos(Q(j)); 
      T[T_tmp_3 + 195] = -T_tmp * T_tmp_0 - T_tmp_1 * T_tmp_2;

      // 'TALOS_mat_trans2:102' T(im,3)=sin(gam(j))*sin(alpha(j));
      T_tmp_1 = std::sin(f[j]);
      T[T_tmp_3 + 391] = T_tmp_tmp * T_tmp_1;

      // 'TALOS_mat_trans2:103' T(im,4)=d(j)*cos(gam(j))+r(j)*sin(gam(j))*sin(alpha(j)); 
      T[T_tmp_3 + 587] = c[j] * T_tmp_tmp * T_tmp_1 + b[j] * T_tmp;

      // 'TALOS_mat_trans2:104' T(im+1,1)=sin(gam(j))*cos(Q(j))+cos(gam(j))*cos(alpha(j))*sin(Q(j)); 
      T_tmp_4 = T_tmp * T_tmp_tmp_0;
      T_tmp_3 = static_cast<int32_T>((im + 1.0));
      T[T_tmp_3 - 1] = T_tmp_4 * T_tmp_0 + T_tmp_tmp * T_tmp_2;

      // 'TALOS_mat_trans2:105' T(im+1,2)=-sin(gam(j))*sin(Q(j))+cos(gam(j))*cos(alpha(j))*cos(Q(j)); 
      T[T_tmp_3 + 195] = T_tmp_4 * T_tmp_2 + -T_tmp_tmp * T_tmp_0;

      // 'TALOS_mat_trans2:106' T(im+1,3)=-cos(gam(j))*sin(alpha(j));
      T[T_tmp_3 + 391] = -std::cos(e[j]) * T_tmp_1;

      // 'TALOS_mat_trans2:107' T(im+1,4)=d(j)*sin(gam(j))-r(j)*cos(gam(j))*sin(alpha(j)); 
      T[T_tmp_3 + 587] = b[j] * T_tmp_tmp - c[j] * T_tmp * T_tmp_1;

      // 'TALOS_mat_trans2:108' T(im+2,1)=sin(alpha(j))*sin(Q(j));
      T_tmp_3 = static_cast<int32_T>((im + 2.0));
      T[T_tmp_3 - 1] = T_tmp_1 * T_tmp_0;

      // 'TALOS_mat_trans2:109' T(im+2,2)=sin(alpha(j))*cos(Q(j));
      T[T_tmp_3 + 195] = T_tmp_1 * T_tmp_2;

      // 'TALOS_mat_trans2:110' T(im+2,3)=cos(alpha(j));
      T[T_tmp_3 + 391] = T_tmp_tmp_0;

      // 'TALOS_mat_trans2:111' T(im+2,4)=r(j)*cos(alpha(j))+b(j);
      T[T_tmp_3 + 587] = c[j] * T_tmp_tmp_0 + d[j];

      // 'TALOS_mat_trans2:112' T(im+3,4)=1;
      T[static_cast<int32_T>((im + 3.0)) + 587] = 1.0;

      // 'TALOS_mat_trans2:113' im=im+4;
      im += 4.0;
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function T = DGM_TALOS_QY_xelo(q)
  //  computing of the geometric model (transformations matrix) of the robot
  //  using TALO robot structure
  // q = robot_TALOS.q;%30 raw and 1 column
  //
  void walkModelClass::walk_DGM_TALOS_QY_xelo(const real_T q[30], real_T T[784])
  {
    real_T theta[49];
    int32_T j;
    int32_T c;
    static const int8_T f[49] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
      7, 15, 16, 17, 18, 19, 20, 17, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
      33, 34, 17, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48 };

    real_T T_0[16];
    int32_T i;
    int32_T Temp_tmp;
    int32_T mat_t_size_idx_0_tmp;
    int32_T T_tmp;
    int32_T T_tmp_0;

    // 'DGM_TALOS_QY_xelo:5' theta = zeros(1,49);
    // 'DGM_TALOS_QY_xelo:6' T=zeros(4,4,49);
    //  TALOS has 49 frame
    // 'DGM_TALOS_QY_xelo:7' Temp =zeros(4,4,49);
    memset(&T[0], 0, 784U * sizeof(real_T));
    memset(&walk_B.Temp[0], 0, 784U * sizeof(real_T));

    //
    // 'DGM_TALOS_QY_xelo:9' ant = [ 0,1,2,3,4,5,6,7,8,9,10,11,12,13,7,...
    // 'DGM_TALOS_QY_xelo:10'        15,16,17,18,19,20,...
    // 'DGM_TALOS_QY_xelo:11'        17,22,23,24,25,26,27,28,29,30,31,32,33,34,... 
    // 'DGM_TALOS_QY_xelo:12'        17,36,37,38,39,40,41,42,43,44,45,46,47,48]; 
    //
    //  SE SUPONE QUE ES LO MISMO, los originales son los de ARRIBA =)
    //  th15o = - 0.480175;%TorsoYaw
    //  th17o = - 1.745532;%NeckPitch
    //  th21o = - 0.029316;%RshoulderPitch
    //  th22o = - 0.437389;%RshoulderYaw
    //  th23o = - 0.155553;%RelberRoll
    //  th24o = 0.014011;%RelberYaw
    //  th29o = - 0.029316;%LshoulderPitch
    //  th30o = 0.437389;%LshoulderYaw
    //  th31o = 0.155553;%LelberRoll
    //  th32o = - 0.014011;%LelberYaw
    // 'DGM_TALOS_QY_xelo:27' theta(1) = 0;
    theta[0] = 0.0;

    // 'DGM_TALOS_QY_xelo:28' theta(2) = q(1)+pi/2;
    theta[1] = q[0] + 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:29' theta(3) = q(2);
    theta[2] = q[1];

    // 'DGM_TALOS_QY_xelo:30' theta(4) = q(3);
    theta[3] = q[2];

    // 'DGM_TALOS_QY_xelo:31' theta(5) = q(4);
    theta[4] = q[3];

    // 'DGM_TALOS_QY_xelo:32' theta(6) = q(5)-pi/2;
    theta[5] = q[4] - 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:33' theta(7) = q(6);
    theta[6] = q[5];

    // 'DGM_TALOS_QY_xelo:34' theta(8) = q(7);
    theta[7] = q[6];

    // 'DGM_TALOS_QY_xelo:35' theta(9) = q(8)+pi/2;
    theta[8] = q[7] + 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:36' theta(10) =q(9);
    theta[9] = q[8];

    // 'DGM_TALOS_QY_xelo:37' theta(11) =q(10);
    theta[10] = q[9];

    // 'DGM_TALOS_QY_xelo:38' theta(12) =q(11);
    theta[11] = q[10];

    // 'DGM_TALOS_QY_xelo:39' theta(13) =q(12);
    theta[12] = q[11];

    // 'DGM_TALOS_QY_xelo:40' theta(14) = -pi/2;
    theta[13] = -1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:41' theta(15) = -pi/2;
    theta[14] = -1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:42' theta(16) = q(13);
    theta[15] = q[12];

    // 'DGM_TALOS_QY_xelo:43' theta(17) = q(14);
    theta[16] = q[13];

    // 'DGM_TALOS_QY_xelo:44' theta(18) = 0;
    theta[17] = 0.0;

    // 'DGM_TALOS_QY_xelo:45' theta(19) = q(15);
    theta[18] = q[14];

    // 'DGM_TALOS_QY_xelo:46' theta(20) = q(16);
    theta[19] = q[15];

    // 'DGM_TALOS_QY_xelo:47' theta(21) = 0;
    theta[20] = 0.0;

    // 'DGM_TALOS_QY_xelo:48' theta(22) = 0;
    theta[21] = 0.0;

    // 'DGM_TALOS_QY_xelo:49' theta(23) = q(17);
    theta[22] = q[16];

    // 'DGM_TALOS_QY_xelo:50' theta(24) = 0;
    theta[23] = 0.0;

    // 'DGM_TALOS_QY_xelo:51' theta(25) = pi/2;
    theta[24] = 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:52' theta(26) = q(18);
    theta[25] = q[17];

    // 'DGM_TALOS_QY_xelo:53' theta(27) = pi/2;
    theta[26] = 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:54' theta(28) = q(19) - pi/2;
    theta[27] = q[18] - 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:55' theta(29) = 0;
    theta[28] = 0.0;

    // 'DGM_TALOS_QY_xelo:56' theta(30) = q(20);
    theta[29] = q[19];

    // 'DGM_TALOS_QY_xelo:57' theta(31) = q(21);
    theta[30] = q[20];

    // 'DGM_TALOS_QY_xelo:58' theta(32) = pi/2;
    theta[31] = 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:59' theta(33) = q(22) - pi/2;
    theta[32] = q[21] - 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:60' theta(34) = q(23) - pi/2;
    theta[33] = q[22] - 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:61' theta(35) = 0;
    theta[34] = 0.0;

    // 'DGM_TALOS_QY_xelo:62' theta(36) = 0;
    theta[35] = 0.0;

    // 'DGM_TALOS_QY_xelo:63' theta(37) = q(24);
    theta[36] = q[23];

    // 'DGM_TALOS_QY_xelo:64' theta(38) = 0;
    theta[37] = 0.0;

    // 'DGM_TALOS_QY_xelo:65' theta(39) = pi/2;
    theta[38] = 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:66' theta(40) = q(25);
    theta[39] = q[24];

    // 'DGM_TALOS_QY_xelo:67' theta(41) = pi/2;
    theta[40] = 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:68' theta(42) = q(26) - pi/2;
    theta[41] = q[25] - 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:69' theta(43) = 0;
    theta[42] = 0.0;

    // 'DGM_TALOS_QY_xelo:70' theta(44) = q(27);
    theta[43] = q[26];

    // 'DGM_TALOS_QY_xelo:71' theta(45) = q(28);
    theta[44] = q[27];

    // 'DGM_TALOS_QY_xelo:72' theta(46) = pi/2;
    theta[45] = 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:73' theta(47) = q(29) - pi/2;
    theta[46] = q[28] - 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:74' theta(48) = q(30) - pi/2;
    theta[47] = q[29] - 1.5707963267948966;

    // 'DGM_TALOS_QY_xelo:75' theta(49) = 0;
    theta[48] = 0.0;

    //
    // mat_t=TALOS_mat_trans(theta);
    // 'DGM_TALOS_QY_xelo:80' mat_t=TALOS_mat_trans2(theta);
    walk_TALOS_mat_trans2(theta, walk_B.mat_t);

    // 'DGM_TALOS_QY_xelo:81' Temp(:,:,1)= mat_t(1:4,:);
    for (c = 0; c < 4; c++) {
      Temp_tmp = c << 2;
      walk_B.Temp[Temp_tmp] = walk_B.mat_t[196 * c];
      walk_B.Temp[1 + Temp_tmp] = walk_B.mat_t[196 * c + 1];
      walk_B.Temp[2 + Temp_tmp] = walk_B.mat_t[196 * c + 2];
      walk_B.Temp[3 + Temp_tmp] = walk_B.mat_t[196 * c + 3];
    }

    // 'DGM_TALOS_QY_xelo:82' Temp(1,4,1)= Temp(1,4,1);
    //  ?changer en 0.2 quand on agrandira les pieds
    // 'DGM_TALOS_QY_xelo:84' for j = 2 : 49
    for (j = 0; j < 48; j++) {
      // 'DGM_TALOS_QY_xelo:85' Temp(:,:,j) = mat_t(4*(j-1)+1:4*j,:);
      Temp_tmp = (j + 1) << 2;
      c = (2 + j) << 2;
      if (Temp_tmp + 1 > c) {
        Temp_tmp = 0;
        c = 0;
      }

      mat_t_size_idx_0_tmp = c - Temp_tmp;
      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data[c] = walk_B.mat_t[Temp_tmp + c];
      }

      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data[c + mat_t_size_idx_0_tmp] = walk_B.mat_t[(Temp_tmp + c)
          + 196];
      }

      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data[c + (mat_t_size_idx_0_tmp << 1)] = walk_B.mat_t
          [(Temp_tmp + c) + 392];
      }

      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data[c + mat_t_size_idx_0_tmp * 3] = walk_B.mat_t[(Temp_tmp
          + c) + 588];
      }

      for (c = 0; c < 4; c++) {
        Temp_tmp = c << 2;
        mat_t_size_idx_0_tmp = Temp_tmp + ((j + 1) << 4);
        walk_B.Temp[mat_t_size_idx_0_tmp] = walk_B.mat_t_data[Temp_tmp];
        walk_B.Temp[mat_t_size_idx_0_tmp + 1] = walk_B.mat_t_data[Temp_tmp + 1];
        walk_B.Temp[mat_t_size_idx_0_tmp + 2] = walk_B.mat_t_data[Temp_tmp + 2];
        walk_B.Temp[mat_t_size_idx_0_tmp + 3] = walk_B.mat_t_data[Temp_tmp + 3];
      }
    }

    // 'DGM_TALOS_QY_xelo:87' T(:,:,1) = Temp(:,:,1);
    for (c = 0; c < 4; c++) {
      Temp_tmp = c << 2;
      T[Temp_tmp] = walk_B.Temp[Temp_tmp];
      T[1 + (c << 2)] = walk_B.Temp[Temp_tmp + 1];
      T[2 + (c << 2)] = walk_B.Temp[Temp_tmp + 2];
      T[3 + (c << 2)] = walk_B.Temp[Temp_tmp + 3];
    }

    // 'DGM_TALOS_QY_xelo:88' for j = 2 : 49
    for (j = 0; j < 48; j++) {
      // 'DGM_TALOS_QY_xelo:89' T(:,:,j) = T(:,:,ant(j)) * Temp(:,:,j);
      mat_t_size_idx_0_tmp = f[j + 1];
      for (c = 0; c < 4; c++) {
        for (i = 0; i < 4; i++) {
          Temp_tmp = i << 2;
          T_tmp = c + Temp_tmp;
          T_0[T_tmp] = 0.0;
          T_tmp_0 = ((mat_t_size_idx_0_tmp - 1) << 4) + c;
          Temp_tmp += (j + 1) << 4;
          T_0[T_tmp] += T[T_tmp_0] * walk_B.Temp[Temp_tmp];
          T_0[T_tmp] += T[T_tmp_0 + 4] * walk_B.Temp[Temp_tmp + 1];
          T_0[T_tmp] += T[T_tmp_0 + 8] * walk_B.Temp[Temp_tmp + 2];
          T_0[T_tmp] += T[T_tmp_0 + 12] * walk_B.Temp[Temp_tmp + 3];
        }
      }

      for (c = 0; c < 4; c++) {
        Temp_tmp = c << 2;
        T_tmp = Temp_tmp + ((j + 1) << 4);
        T[T_tmp] = T_0[Temp_tmp];
        T[T_tmp + 1] = T_0[Temp_tmp + 1];
        T[T_tmp + 2] = T_0[Temp_tmp + 2];
        T[T_tmp + 3] = T_0[Temp_tmp + 3];
      }
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T)
  //  CoM position/velocity
  //
  void walkModelClass::walk_compute2_com_xelo(const real_T T[784], real_T CoM[3],
    real_T J_CoM[90], real_T J_Ankle[90], real_T crossM[441], real_T J_CoMs[4410])
  {
    real_T MS_j[3];
    real_T J_X[90];
    int32_T F;
    int32_T i;
    static const int8_T b[49] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 0, 0,
      13, 14, 0, 15, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 21, 0, 22, 23, 0, 0,
      24, 0, 0, 25, 0, 26, 0, 27, 28, 0, 29, 30, 0 };

    static const int8_T c[49] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
      7, 15, 16, 17, 18, 19, 20, 17, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
      33, 34, 17, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48 };

    real_T tmp;
    real_T MS_j_0;
    int32_T crossM_tmp;
    real_T crossM_tmp_0;
    real_T crossM_tmp_1;
    int32_T MS_j_idx_0_tmp;
    int32_T J_X_tmp;
    int32_T J_X_tmp_0;

    // Mass informations
    // M = PI.masse;
    // CoM_stack = PI.CoM;
    // 'compute2_com_xelo:9' joints=30;
    // Initialisations
    // 'compute2_com_xelo:13' CoM = [0;0;0];
    CoM[0] = 0.0;
    CoM[1] = 0.0;
    CoM[2] = 0.0;

    // 'compute2_com_xelo:14' J_CoMs = zeros(3,30,49);
    memset(&J_CoMs[0], 0, 4410U * sizeof(real_T));

    // 'compute2_com_xelo:15' J_CoM = zeros(3,30);
    memset(&J_CoM[0], 0, 90U * sizeof(real_T));

    // T = robot.T;
    // 'compute2_com_xelo:17' ant = [ 0,1,2,3,4,5,6,7,8,9,10,11,12,13,7,...
    // 'compute2_com_xelo:18'        15,16,17,18,19,20,...
    // 'compute2_com_xelo:19'        17,22,23,24,25,26,27,28,29,30,31,32,33,34,... 
    // 'compute2_com_xelo:20'        17,36,37,38,39,40,41,42,43,44,45,46,47,48]; 
    // %1-14
    // %15-21
    // %22-35
    // 'compute2_com_xelo:21' act= [ 0,1,2,3,4,5,6,7,8,9,10,11,12,0,...%1-14
    // 'compute2_com_xelo:22'        0,13,14,0,15,16,0,...%15-21
    // 'compute2_com_xelo:23'        0,17,0,0,18,0,19,0,20,21,0,22,23,0,...%22-35 
    // 'compute2_com_xelo:24'        0,24,0,0,25,0,26,0,27,28,0,29,30,0];
    // 36-49
    // 'compute2_com_xelo:26' crossM = zeros(3,3,49);
    // Computation of the cross matrices
    // 'compute2_com_xelo:29' for i = 1:49
    for (i = 0; i < 49; i++) {
      // 'compute2_com_xelo:30' crossM(:,:,i) = cross_matrix(T(1:3,3,i));
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      crossM[9 * i] = 0.0;
      crossM_tmp = i << 4;
      crossM_tmp_0 = T[crossM_tmp + 10];
      crossM[3 + 9 * i] = -crossM_tmp_0;
      crossM_tmp_1 = T[crossM_tmp + 9];
      crossM[6 + 9 * i] = crossM_tmp_1;
      crossM[1 + 9 * i] = crossM_tmp_0;
      crossM[4 + 9 * i] = 0.0;
      crossM_tmp_0 = T[crossM_tmp + 8];
      crossM[7 + 9 * i] = -crossM_tmp_0;
      crossM[2 + 9 * i] = -crossM_tmp_1;
      crossM[5 + 9 * i] = crossM_tmp_0;
      crossM[8 + 9 * i] = 0.0;

      //  Transforma el vector "a" de la matriz T = [s n a p; 0 0 0 1]; en una matriz antisimétrica 
    }

    // 'compute2_com_xelo:33' for j = 1 : 49
    for (i = 0; i < 49; i++) {
      // 'compute2_com_xelo:34' if mass_stack(j) ~=0
      if (walk_DW.mass_stack[i] != 0.0) {
        // Center of mass position (X,Y)
        // 'compute2_com_xelo:36' MS_j = T(1:3,:,j) * [CoM_stack(:,j);1];
        crossM_tmp_0 = walk_DW.CoM_stack[3 * i];
        crossM_tmp_1 = walk_DW.CoM_stack[3 * i + 1];
        tmp = walk_DW.CoM_stack[3 * i + 2];

        //  Este es el vector de posicion del CoM_stack respecto al marco 0
        // 'compute2_com_xelo:37' CoM = CoM + mass_stack(j) * MS_j;
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 3; MS_j_idx_0_tmp++) {
          F = (i << 4) + MS_j_idx_0_tmp;
          MS_j_0 = T[F + 12] + (T[F + 8] * tmp + (T[F + 4] * crossM_tmp_1 + T[F]
            * crossM_tmp_0));
          MS_j[MS_j_idx_0_tmp] = MS_j_0;
          CoM[MS_j_idx_0_tmp] += walk_DW.mass_stack[i] * MS_j_0;
        }

        //  De igual forma, aqu?se va calculando el CoM total del robot "Sum(j=1:36) m* ^0CoM_stack" 
        // Center of mass velocity (XD,YD)
        // 'compute2_com_xelo:39' J_X = zeros(3,30);
        memset(&J_X[0], 0, 90U * sizeof(real_T));

        //  Se crea una matriz de 3x36 para calcular J_CoM_stack
        // 'compute2_com_xelo:40' F = j;
        // 'compute2_com_xelo:41' while F~=1
        for (F = i; F + 1 != 1; F = c[F] - 1) {
          //  ¿Llegamos al marco 1? Si si, sale del "while", si no, continúa... (F nunca es menor que 1) 
          //  Aqui se va calculando cada columna de la matriz J_CoM_stack. Nótese que se "brinca" las columnas que 
          //  corresponden a los marcos que NO tienen asignada una masa.. Nótese que empieza de ADELANTE pa'trás 
          // 'compute2_com_xelo:44' if act(F)~=0
          if (b[F] != 0) {
            //  ¿El marco F tiene una articulacion (q)? Si si, entra al "if", si no no =P 
            // 'compute2_com_xelo:45' J_X(:,act(F)) =crossM(:,:,F)*(MS_j-T(1:3,4,F)); 
            MS_j_idx_0_tmp = F << 4;
            crossM_tmp_0 = MS_j[0] - T[MS_j_idx_0_tmp + 12];
            crossM_tmp_1 = MS_j[1] - T[MS_j_idx_0_tmp + 13];
            tmp = MS_j[2] - T[MS_j_idx_0_tmp + 14];
            crossM_tmp = b[F] - 1;
            for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 3; MS_j_idx_0_tmp++) {
              J_X_tmp = MS_j_idx_0_tmp + 3 * crossM_tmp;
              J_X[J_X_tmp] = 0.0;
              J_X_tmp_0 = 9 * F + MS_j_idx_0_tmp;
              J_X[J_X_tmp] += crossM[J_X_tmp_0] * crossM_tmp_0;
              J_X[J_X_tmp] += crossM[J_X_tmp_0 + 3] * crossM_tmp_1;
              J_X[J_X_tmp] += crossM[J_X_tmp_0 + 6] * tmp;
            }

            // col  -> 0a_j X (0PCoM_stack - 0P_j)
          }

          // 'compute2_com_xelo:47' F = ant(F);
        }

        // 'compute2_com_xelo:49' J_CoMs(:,:,j)=J_X;
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 30; MS_j_idx_0_tmp++) {
          F = 3 * MS_j_idx_0_tmp + 90 * i;
          J_CoMs[F] = J_X[3 * MS_j_idx_0_tmp];
          J_CoMs[F + 1] = J_X[3 * MS_j_idx_0_tmp + 1];
          J_CoMs[F + 2] = J_X[3 * MS_j_idx_0_tmp + 2];
        }

        //  Se asigna
        // 'compute2_com_xelo:50' J_CoM = J_CoM+mass_stack(j)*J_X;
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 90; MS_j_idx_0_tmp++) {
          J_CoM[MS_j_idx_0_tmp] += walk_DW.mass_stack[i] * J_X[MS_j_idx_0_tmp];
        }
      }
    }

    // 'compute2_com_xelo:54' CoM = CoM / mass_tot;
    CoM[0] /= walk_DW.mass_tot;
    CoM[1] /= walk_DW.mass_tot;
    CoM[2] /= walk_DW.mass_tot;

    //  = 1/mT Sum_{i=1}^n a_j X ^jCoM_stack   donde  jCoM_stack es el vector constante de CoM del del eslabon j  
    // CoM=CoM+[0;0.0241;0];                          % respecto al marco j, y a_j es el vector de la matriz "snap" del marco "j" 
    // 'compute2_com_xelo:56' J_CoM = J_CoM/mass_tot;
    //  J_Ankle is the jacobian of the ankle for x,y position and leg tip for z
    //  position
    //  ant = [ 0,1,2,3,4,5,6,7,8,9,...
    //          10,11,12,13,7,15,16,17,18,19,...
    //          15,21,22,23,24,25,26,27,15,...
    //          29,30,31,32,33,34,35];
    //  act= [ 0,1,2,3,4,5,6,7,8,9,10,...
    //          11,12,0,13,14,15,16,17,0,18,19,...
    //          20,21,22,23,24,0,25,26,27,...
    //          28,29,30,31,0];
    //   ant(15)=7,act(14)=act(20)=act(28)=act(36)=act(1)=0
    // 'compute2_com_xelo:69' F = 12;
    F = 11;

    // 'compute2_com_xelo:70' J_Ankle = zeros(3,joints);
    for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 90; MS_j_idx_0_tmp++) {
      J_Ankle[MS_j_idx_0_tmp] = 0.0;
      J_CoM[MS_j_idx_0_tmp] /= walk_DW.mass_tot;
    }

    // 'compute2_com_xelo:71' while F~=1
    while (F + 1 != 1) {
      // 'compute2_com_xelo:72' if act(F)~=0
      if (b[F] != 0) {
        // 'compute2_com_xelo:73' J = crossM(:,:,F)*(T(1:3,4,12)-T(1:3,4,F));
        // 'compute2_com_xelo:74' J_Ankle(1:2,act(F)) =J(1:2);
        i = F << 4;
        crossM_tmp_0 = T[188] - T[i + 12];
        crossM_tmp_1 = T[189] - T[i + 13];
        tmp = T[190] - T[i + 14];
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 3; MS_j_idx_0_tmp++) {
          crossM_tmp = 9 * F + MS_j_idx_0_tmp;
          MS_j[MS_j_idx_0_tmp] = crossM[crossM_tmp + 6] * tmp +
            (crossM[crossM_tmp + 3] * crossM_tmp_1 + crossM[crossM_tmp] *
             crossM_tmp_0);
        }

        i = 3 * (b[F] - 1);
        J_Ankle[i] = MS_j[0];
        J_Ankle[1 + i] = MS_j[1];
      }

      // 'compute2_com_xelo:76' F = ant(F);
      F = c[F] - 1;
    }

    // 'compute2_com_xelo:78' F = 14;
    // 'compute2_com_xelo:79' while F~=1
    for (F = 13; F + 1 != 1; F = c[F] - 1) {
      // 'compute2_com_xelo:80' if act(F)~=0
      if (b[F] != 0) {
        // 'compute2_com_xelo:81' J = crossM(:,:,F)*(T(1:3,4,14)-T(1:3,4,F));
        // 'compute2_com_xelo:82' J_Ankle(3,act(F)) =J(3);
        i = F << 4;
        crossM_tmp_0 = T[220] - T[i + 12];
        crossM_tmp_1 = T[221] - T[i + 13];
        tmp = T[222] - T[i + 14];
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 3; MS_j_idx_0_tmp++) {
          crossM_tmp = 9 * F + MS_j_idx_0_tmp;
          MS_j[MS_j_idx_0_tmp] = crossM[crossM_tmp + 6] * tmp +
            (crossM[crossM_tmp + 3] * crossM_tmp_1 + crossM[crossM_tmp] *
             crossM_tmp_0);
        }

        J_Ankle[2 + 3 * (b[F] - 1)] = MS_j[2];
      }

      // 'compute2_com_xelo:84' F = ant(F);
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle)
  // Computation of the jacobian of h function for virtual constraint
  //
  void walkModelClass::walk_J_state_v_TALOS_xelo(const real_T T[784], const
    real_T J_CoM[90], const real_T J_Ankle[90], real_T J_h[840])
  {
    real_T phi;
    real_T theta;
    real_T J_L[90];
    real_T Hips[16];
    int8_T b_I[289];
    int32_T k;
    real_T tmp[9];
    int32_T J_h_tmp;
    int32_T J_L_tmp;
    real_T theta_tmp;
    real_T tmp_0;
    int32_T Hips_tmp;

    //  Jh (dim29x31) = Jacobiana de h(q), esta NOS SIRVE para calcular las vel. de las operacionales controladas (Qp) DESEADAS [zp,xp_s,xp_s,xp_s,qp_t^T]  
    //  (donde qp_T =  son las velocidades articulares del torso), a partir de las velocidades de las coordenadas operacionales qp = [qp1... qp31]. 
    //  Es decir,  Qp = dh(q)/dq*qp = Qp = JQ*qp.. (aunque aqu?le llaman J_h)
    // 'J_state_v_TALOS_xelo:7' joints=30;
    // 'J_state_v_TALOS_xelo:9' J_h = zeros(joints-2,joints);
    memset(&J_h[0], 0, 840U * sizeof(real_T));

    // 28*30
    // 'J_state_v_TALOS_xelo:10' J_h(12:end,14:end) = eye(17);
    memset(&b_I[0], 0, 289U * sizeof(int8_T));
    for (k = 0; k < 17; k++) {
      b_I[k + 17 * k] = 1;
    }

    for (k = 0; k < 17; k++) {
      for (J_L_tmp = 0; J_L_tmp < 17; J_L_tmp++) {
        J_h[(J_L_tmp + 28 * (13 + k)) + 11] = b_I[17 * k + J_L_tmp];
      }
    }

    //  CoM height
    // 'J_state_v_TALOS_xelo:12' J_G=J_CoM;
    // 'J_state_v_TALOS_xelo:13' J_h(1,:)=J_G(3,:);
    //  Foot position
    // 'J_state_v_TALOS_xelo:16' J_h(2:4,:)=J_Ankle;
    for (k = 0; k < 30; k++) {
      J_h_tmp = 3 * k + 2;
      J_h[28 * k] = J_CoM[J_h_tmp];
      J_h[1 + 28 * k] = J_Ankle[3 * k];
      J_h[2 + 28 * k] = J_Ankle[3 * k + 1];
      J_h[3 + 28 * k] = J_Ankle[J_h_tmp];
    }

    //  Foot yaw,pitch,roll
    // 'J_state_v_TALOS_xelo:19' Foot = T(:,:,14);
    // 'J_state_v_TALOS_xelo:20' phi=atan2(Foot(2,1),Foot(1,1));
    phi = atan2(T[209], T[208]);

    // 'J_state_v_TALOS_xelo:21' theta=atan2(-Foot(3,1),cos(phi)*Foot(1,1)+sin(phi)*Foot(2,1)); 
    theta_tmp = std::cos(phi);
    phi = std::sin(phi);
    theta = atan2(-T[210], theta_tmp * T[208] + phi * T[209]);

    // 'J_state_v_TALOS_xelo:22' J_L = zeros(3,joints);
    memset(&J_L[0], 0, 90U * sizeof(real_T));

    // 'J_state_v_TALOS_xelo:23' for i = 2:13
    for (k = 0; k < 12; k++) {
      // 'J_state_v_TALOS_xelo:24' J_L(:,i-1)=T(1:3,3,i);
      J_L_tmp = (k + 1) << 4;
      J_L[3 * k] = T[J_L_tmp + 8];
      J_L[1 + 3 * k] = T[J_L_tmp + 9];
      J_L[2 + 3 * k] = T[J_L_tmp + 10];

      //  crea la matriz J_foot,w = [0a2, 0a3, 0a4, 0a5, ..., 0a13, 0 ... 0] (3x31) 
    }

    // 'J_state_v_TALOS_xelo:26' J_h(5:7,:)=OmeRPY(phi,theta)*J_L;
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    tmp_0 = std::cos(theta);
    tmp[0] = theta_tmp / tmp_0;
    tmp[3] = phi / tmp_0;
    tmp[6] = 0.0;
    tmp[1] = -phi;
    tmp[4] = theta_tmp;
    tmp[7] = 0.0;
    tmp_0 = std::tan(theta);
    tmp[2] = theta_tmp * tmp_0;
    tmp[5] = phi * tmp_0;
    tmp[8] = 1.0;
    for (k = 0; k < 3; k++) {
      for (J_L_tmp = 0; J_L_tmp < 30; J_L_tmp++) {
        J_h_tmp = (k + 28 * J_L_tmp) + 4;
        J_h[J_h_tmp] = 0.0;
        J_h[J_h_tmp] += J_L[3 * J_L_tmp] * tmp[k];
        J_h[J_h_tmp] += J_L[3 * J_L_tmp + 1] * tmp[k + 3];
        J_h[J_h_tmp] += J_L[3 * J_L_tmp + 2] * tmp[k + 6];
      }
    }

    //  Hips yaw,pitch,roll
    // 'J_state_v_TALOS_xelo:29' Hips = T(:,:,7)*torso_f;
    for (k = 0; k < 4; k++) {
      for (J_L_tmp = 0; J_L_tmp < 4; J_L_tmp++) {
        J_h_tmp = k << 2;
        Hips_tmp = J_L_tmp + J_h_tmp;
        Hips[Hips_tmp] = 0.0;
        Hips[Hips_tmp] += T[96 + J_L_tmp] * walk_DW.torso_f[J_h_tmp];
        Hips[Hips_tmp] += walk_DW.torso_f[J_h_tmp + 1] * T[J_L_tmp + 100];
        Hips[Hips_tmp] += walk_DW.torso_f[J_h_tmp + 2] * T[J_L_tmp + 104];
        Hips[Hips_tmp] += walk_DW.torso_f[J_h_tmp + 3] * T[J_L_tmp + 108];
      }
    }

    // 'J_state_v_TALOS_xelo:30' phi=atan2(Hips(2,1),Hips(1,1));
    phi = atan2(Hips[1], Hips[0]);

    // 'J_state_v_TALOS_xelo:31' theta=atan2(-Hips(3,1),cos(phi)*Hips(1,1)+sin(phi)*Hips(2,1)); 
    theta_tmp = std::cos(phi);
    phi = std::sin(phi);
    theta = atan2(-Hips[2], theta_tmp * Hips[0] + phi * Hips[1]);

    // 'J_state_v_TALOS_xelo:32' J_T = zeros(3,joints);
    memset(&J_L[0], 0, 90U * sizeof(real_T));

    // 'J_state_v_TALOS_xelo:33' for i = 2:7
    for (k = 0; k < 6; k++) {
      // 'J_state_v_TALOS_xelo:34' J_T(:,i-1)=T(1:3,3,i);
      J_L[3 * k] = T[((k + 1) << 4) + 8];
      J_L[1 + 3 * k] = T[((k + 1) << 4) + 9];
      J_L[2 + 3 * k] = T[((k + 1) << 4) + 10];

      //  crea la matriz J_torso,w = [0a2, 0a3, 0a4, 0a5, 0a6, 0a7 0 ... 0] (3x31) 
    }

    // 'J_state_v_TALOS_xelo:36' J_h(8:10,:)=OmeRPY(phi,theta)*J_T;
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    tmp_0 = std::cos(theta);
    tmp[0] = theta_tmp / tmp_0;
    tmp[3] = phi / tmp_0;
    tmp[6] = 0.0;
    tmp[1] = -phi;
    tmp[4] = theta_tmp;
    tmp[7] = 0.0;
    tmp_0 = std::tan(theta);
    tmp[2] = theta_tmp * tmp_0;
    tmp[5] = phi * tmp_0;
    tmp[8] = 1.0;
    for (k = 0; k < 3; k++) {
      for (J_L_tmp = 0; J_L_tmp < 30; J_L_tmp++) {
        J_h_tmp = (k + 28 * J_L_tmp) + 7;
        J_h[J_h_tmp] = 0.0;
        J_h[J_h_tmp] += J_L[3 * J_L_tmp] * tmp[k];
        J_h[J_h_tmp] += J_L[3 * J_L_tmp + 1] * tmp[k + 3];
        J_h[J_h_tmp] += J_L[3 * J_L_tmp + 2] * tmp[k + 6];
      }
    }

    //  Torso yaw
    //  Torso = T(:,:,15);
    // 'J_state_v_TALOS_xelo:40' Torso = T(:,:,16);
    // 'J_state_v_TALOS_xelo:41' phi=atan2(Torso(2,1),Torso(1,1));
    phi = atan2(T[241], T[240]);

    // 'J_state_v_TALOS_xelo:42' theta=atan2(-Torso(3,1),cos(phi)*Torso(1,1)+sin(phi)*Torso(2,1)); 
    theta_tmp = std::cos(phi);
    phi = std::sin(phi);

    // 'J_state_v_TALOS_xelo:43' J_T = zeros(3,joints);
    memset(&J_L[0], 0, 90U * sizeof(real_T));

    // 'J_state_v_TALOS_xelo:44' for i = 2:7
    for (k = 0; k < 6; k++) {
      // 'J_state_v_TALOS_xelo:45' J_T(:,i-1)=T(1:3,3,i);
      J_L[3 * k] = T[((k + 1) << 4) + 8];
      J_L[1 + 3 * k] = T[((k + 1) << 4) + 9];
      J_L[2 + 3 * k] = T[((k + 1) << 4) + 10];

      //  ....
    }

    //  J_T(:,13)=T(1:3,3,15);      % crea la matriz J_UpperTorso,w = [0a2, 0a3, 0a4, 0a5, 0a6, 0a7, 0a15 0 ... 0] (3x31) 
    // 'J_state_v_TALOS_xelo:48' J_T(:,13)=T(1:3,3,16);
    J_L[36] = T[248];
    J_L[37] = T[249];
    J_L[38] = T[250];

    // 'J_state_v_TALOS_xelo:49' Ome = OmeRPY(phi,theta);
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    // 'J_state_v_TALOS_xelo:50' J_h(11,:)=Ome(3,:)*J_T;
    theta = std::tan(atan2(-T[242], theta_tmp * T[240] + phi * T[241]));
    theta_tmp *= theta;
    phi *= theta;
    for (k = 0; k < 30; k++) {
      J_h_tmp = 10 + 28 * k;
      J_h[J_h_tmp] = 0.0;
      J_h[J_h_tmp] += J_L[3 * k] * theta_tmp;
      J_h[J_h_tmp] += J_L[3 * k + 1] * phi;
      J_h[J_h_tmp] += J_L[3 * k + 2];
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function h = state_v_TALOS_xelo(q,T,CoM)
  //
  void walkModelClass::walk_state_v_TALOS_xelo(const real_T q[30], const real_T
    T[784], const real_T CoM[3], real_T h[28])
  {
    real_T Hips[16];
    int32_T i;
    int32_T i_0;
    real_T r_tmp;
    real_T h_tmp;
    int32_T Hips_tmp;
    int32_T Hips_tmp_tmp;

    //  state_v  are the 29 controlled "coordinates" [zp,xp_s,xp_s,xp_s,theta_s, phi_s, psi_s, qp_t^T], the first 11 ones are 
    //  operational coordinates and the last ones are joint coordinates (correspondiing to the robot upper body) 
    //
    // Computation of the h function for virtual constraint
    // 'state_v_TALOS_xelo:7' h = zeros(28,1);
    memset(&h[0], 0, 28U * sizeof(real_T));

    //  Constraints for the top of the body
    // 'state_v_TALOS_xelo:10' h(12:28)=q(14:30);
    memcpy(&h[11], &q[13], 17U * sizeof(real_T));

    //  17 last coordinates correspond to:
    //  Q13,  q14 (2 jointS) torso
    //  q15 , q16 (2 joints) Face
    //  q17 a q23 (7 joints) Left arm: Shoulder, elbow, wrist
    //  q24 a q30 (7 joints) Right arm: Shoulder, elbow, wrist
    //  The next 11 operational coordinates are defined fot the hip, low torso and free foot 
    //  CoM position
    // 'state_v_TALOS_xelo:18' X=CoM;
    // 'state_v_TALOS_xelo:19' h(1)=X(3);
    h[0] = CoM[2];

    //  Vertical position of the CoM in "z" axis w.r.t. the inertial frame on the support foot (all the coordinates are measured w.r.t. this frame) 
    //  Foot position
    // 'state_v_TALOS_xelo:22' h(2:3)=T(1:2,4,12);
    h[1] = T[188];
    h[2] = T[189];

    //  Position "x" and "y" of the free foot is given by the vector "p" of the transformation matrix 0T12 
    //  where the frame 12 is located on the ANKLE, but since frame 14 (located on the foot tip) has the same orientation we 
    //  can use frame 12 in order to have the location of the free foot on his sole (coordinate z_f) exactly below the ankle 
    // 'state_v_TALOS_xelo:25' h(4)=T(3,4,14);
    h[3] = T[222];

    //  Position "z" of the free foot is given by the third element of vector "p" of the transformation matrix 0T14 
    //  Note that in order to have the position of these frames it is NOT NECESSARY to rotate them since their position will still be the same 
    //  (since it is the frame origin). However, in order to compute the frame ORIENTATION (in pitch, roll and yaw) it is 
    //  recommendable to rotate then and let them into the same orientation that the INERTIAL frame 
    //  Foot yaw, pitch,roll
    // 'state_v_TALOS_xelo:31' Foot = T(:,:,14);
    //  The orientation (in pitch, roll and yaw angles) of the free foot is obtained from the transformation matrix  0T14 
    //  Frame 14 is taken as it, since in zero potition (i.e. q=0 ) this frame has the same orientation as frame 0 
    // 'state_v_TALOS_xelo:33' h(7)=atan2(Foot(2,1),Foot(1,1));
    r_tmp = atan2(T[209], T[208]);
    h[6] = r_tmp;

    //  Yaw (psi) rotación  alrededor del eje Z
    // 'state_v_TALOS_xelo:34' h(6)=atan2(-Foot(3,1),cos(h(7))*Foot(1,1)+sin(h(7))*Foot(2,1)); 
    h_tmp = std::sin(r_tmp);
    r_tmp = std::cos(r_tmp);
    h[5] = atan2(-T[210], r_tmp * T[208] + h_tmp * T[209]);

    //  Pitch (theta) rotación  alrededor del eje Y
    // 'state_v_TALOS_xelo:35' h(5)=atan2(sin(h(7))*Foot(1,3)-cos(h(7))*Foot(2,3),-sin(h(7))*Foot(1,2)+cos(h(7))*Foot(2,2)); 
    h[4] = atan2(h_tmp * T[216] - r_tmp * T[217], -h_tmp * T[212] + r_tmp * T
                 [213]);

    //  Roll (phi) rotación  alrededor del eje X
    //  Hips yaw,pitch,roll
    // 'state_v_TALOS_xelo:38' Hips = T(:,:,7)*torso_f;
    for (i_0 = 0; i_0 < 4; i_0++) {
      for (i = 0; i < 4; i++) {
        Hips_tmp_tmp = i_0 << 2;
        Hips_tmp = i + Hips_tmp_tmp;
        Hips[Hips_tmp] = 0.0;
        Hips[Hips_tmp] += T[96 + i] * walk_DW.torso_f[Hips_tmp_tmp];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 1] * T[i + 100];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 2] * T[i + 104];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 3] * T[i + 108];
      }
    }

    //  The orientation (in pitch, roll and yaw angles) of the hip is obtained from the transformation matrix  0T7 
    //  Frame 7 is the last frame of the support leg hip
    //  Since frame 7 in zero potition (i.e. q=0 ) has a diferent orientation as frame 0. It must be oriented as frame 0, so that 
    //  the pitch yaw and roll angles have the same meaning for the torso and for the foot. 
    //  That's why a constant matrix "robot.torso_f" was used.
    // 'state_v_TALOS_xelo:43' h(10)=atan2(Hips(2,1),Hips(1,1));
    r_tmp = atan2(Hips[1], Hips[0]);
    h[9] = atan2(Hips[1], Hips[0]);

    //  Yaw (psi) rotation around axis "Z"
    // 'state_v_TALOS_xelo:44' h(9)=atan2(-Hips(3,1),cos(h(10))*Hips(1,1)+sin(h(10))*Hips(2,1)); 
    h_tmp = std::sin(r_tmp);
    r_tmp = std::cos(r_tmp);
    h[8] = atan2(-Hips[2], r_tmp * Hips[0] + h_tmp * Hips[1]);

    //  Pitch (theta) rotation around axis "Y"
    // 'state_v_TALOS_xelo:45' h(8)=atan2(sin(h(10))*Hips(1,3)-cos(h(10))*Hips(2,3),-sin(h(10))*Hips(1,2)+cos(h(10))*Hips(2,2)); 
    h[7] = atan2(h_tmp * Hips[8] - r_tmp * Hips[9], -h_tmp * Hips[4] + r_tmp *
                 Hips[5]);

    //  Roll (phi) rotation around axis "X"
    //  Torso yaw
    //  Torso = T(:,:,17); % The orientation around Z (yaw angle) of the low torso is obtained from the transformation matrix  0T15 
    // 'state_v_TALOS_xelo:49' Torso = T(:,:,16);
    //  It seems that this coordinates can be substituted only by "q13"..
    // 'state_v_TALOS_xelo:51' h(11)=atan2(Torso(2,1),Torso(1,1));
    h[10] = atan2(T[241], T[240]);

    //  Yaw (psi) rotation around axis "Z"
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval_an(const real_T p[8], real_T x)
  {
    real_T y;
    int32_T k;
    y = p[0];
    for (k = 0; k < 7; k++) {
      y = x * y + p[k + 1];
    }

    return y;
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  real_T walkModelClass::walk_polyval_kc(const real_T p[7], real_T x)
  {
    real_T y;
    int32_T k;
    y = p[0];
    for (k = 0; k < 6; k++) {
      y = x * y + p[k + 1];
    }

    return y;
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  real_T walkModelClass::walk_polyval_kcw(const real_T p[6])
  {
    real_T y;
    int32_T k;
    y = p[0];
    for (k = 0; k < 5; k++) {
      y = p[k + 1];
    }

    return y;
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function [hd] = desired_h_xelo(phi)
  //
  void walkModelClass::walk_desired_h_xelo_h(real_T hd[28])
  {
    int32_T k;

    // 'desired_h_xelo:5' hd_phi=cell(1,28);
    // 'desired_h_xelo:6' hd_phi{1}=hd1;
    // 'desired_h_xelo:6' hd_phi{2}=hd2;
    // 'desired_h_xelo:6' hd_phi{3}=hd3;
    // 'desired_h_xelo:6' hd_phi{4}=hd4;
    // 'desired_h_xelo:6' hd_phi{5}=hd5;
    // 'desired_h_xelo:6' hd_phi{6}=hd6;
    // 'desired_h_xelo:6' hd_phi{7}=hd7;
    // 'desired_h_xelo:6' hd_phi{8}=hd8;
    // 'desired_h_xelo:6' hd_phi{9}=hd9;
    // 'desired_h_xelo:6' hd_phi{10}=hd10;
    // 'desired_h_xelo:6' hd_phi{11}=hd11;
    // 'desired_h_xelo:6' hd_phi{12}=hd12;
    // 'desired_h_xelo:7' hd_phi{13}=hd13;
    // 'desired_h_xelo:7' hd_phi{14}=hd14;
    // 'desired_h_xelo:7' hd_phi{15}=hd15;
    // 'desired_h_xelo:7' hd_phi{16}=hd16;
    // 'desired_h_xelo:7' hd_phi{17}=hd17;
    // 'desired_h_xelo:7' hd_phi{18}=hd18;
    // 'desired_h_xelo:7' hd_phi{19}=hd19;
    // 'desired_h_xelo:7' hd_phi{20}=hd20;
    // 'desired_h_xelo:7' hd_phi{21}=hd21;
    // 'desired_h_xelo:7' hd_phi{22}=hd22;
    // 'desired_h_xelo:7' hd_phi{23}=hd23;
    // 'desired_h_xelo:8' hd_phi{24}=hd24;
    // 'desired_h_xelo:8' hd_phi{25}=hd25;
    // 'desired_h_xelo:8' hd_phi{26}=hd26;
    // 'desired_h_xelo:8' hd_phi{27}=hd27;
    // 'desired_h_xelo:8' hd_phi{28}=hd28;
    // 'desired_h_xelo:10' hd=zeros(28,1);
    // 'desired_h_xelo:11' for i=1:28
    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[0] = walk_polyval_an(walk_DW.hd1, 0.0);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[1] = walk_polyval_kc(walk_DW.hd2, 0.0);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[2] = walk_polyval_kcw(walk_DW.hd3);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[3] = walk_polyval_kc(walk_DW.hd4, 0.0);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[4] = walk_DW.hd5[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[5] = walk_DW.hd6[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[6] = walk_DW.hd7[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[7] = walk_DW.hd8[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[8] = walk_DW.hd9[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[9] = walk_DW.hd10[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[10] = walk_DW.hd11[0];
    for (k = 0; k < 5; k++) {
      hd[4] = walk_DW.hd5[k + 1];
      hd[5] = walk_DW.hd6[k + 1];
      hd[6] = walk_DW.hd7[k + 1];
      hd[7] = walk_DW.hd8[k + 1];
      hd[8] = walk_DW.hd9[k + 1];
      hd[9] = walk_DW.hd10[k + 1];
      hd[10] = walk_DW.hd11[k + 1];
    }

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[11] = walk_DW.hd12[0];
    for (k = 0; k < 6; k++) {
      hd[11] = walk_DW.hd12[k + 1];
    }

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[12] = walk_DW.hd13[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[13] = walk_DW.hd14[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[14] = walk_DW.hd15[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[15] = walk_DW.hd16[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[16] = walk_DW.hd17[0];
    for (k = 0; k < 5; k++) {
      hd[12] = walk_DW.hd13[k + 1];
      hd[13] = walk_DW.hd14[k + 1];
      hd[14] = walk_DW.hd15[k + 1];
      hd[15] = walk_DW.hd16[k + 1];
      hd[16] = walk_DW.hd17[k + 1];
    }

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[17] = walk_DW.hd18[0];
    for (k = 0; k < 6; k++) {
      hd[17] = walk_DW.hd18[k + 1];
    }

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[18] = walk_DW.hd19[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[19] = walk_DW.hd20[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[20] = walk_DW.hd21[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[21] = walk_DW.hd22[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[22] = walk_DW.hd23[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[23] = walk_DW.hd24[0];
    for (k = 0; k < 5; k++) {
      hd[18] = walk_DW.hd19[k + 1];
      hd[19] = walk_DW.hd20[k + 1];
      hd[20] = walk_DW.hd21[k + 1];
      hd[21] = walk_DW.hd22[k + 1];
      hd[22] = walk_DW.hd23[k + 1];
      hd[23] = walk_DW.hd24[k + 1];
    }

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[24] = walk_DW.hd25[0];
    for (k = 0; k < 6; k++) {
      hd[24] = walk_DW.hd25[k + 1];
    }

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[25] = walk_DW.hd26[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[26] = walk_DW.hd27[0];

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[27] = walk_DW.hd28[0];
    for (k = 0; k < 5; k++) {
      hd[25] = walk_DW.hd26[k + 1];
      hd[26] = walk_DW.hd27[k + 1];
      hd[27] = walk_DW.hd28[k + 1];
    }
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  boolean_T walkModelClass::walk_sortLE(const real_T v_data[], int32_T idx1,
    int32_T idx2)
  {
    boolean_T p;
    real_T v1;
    real_T v2;
    p = true;
    v1 = v_data[idx1 - 1];
    v2 = v_data[idx2 - 1];
    if (v1 != v2) {
      p = (v1 <= v2);
    }

    return p;
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff(const real_T posd[4], const real_T
    veld[4], real_T Coeff[4])
  {
    real_T A[16];
    real_T row;
    real_T result_data[5];
    int32_T b_k;
    real_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_i;
    int32_T pEnd;
    int32_T q;
    real_T ycol_data[8];
    boolean_T b_p;
    int8_T ipiv[4];
    int32_T ix;
    real_T s;
    int32_T c_ix;
    int32_T ijA;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    result_data[0] = posd[0];
    result_data[2] = veld[0];
    result_data[1] = posd[1];
    result_data[3] = veld[1];

    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    c_ix = 1;
    q = 3;
    ix = 0;
    while (ix + 1 <= 4) {
      c_i = idx_data[q - 1];
      b_k = idx_data[c_ix - 1];
      if (walk_sortLE(result_data, b_k, c_i)) {
        iwork_data[ix] = b_k;
        c_ix++;
        if (c_ix == 3) {
          while (q < 5) {
            ix++;
            iwork_data[ix] = idx_data[q - 1];
            q++;
          }
        }
      } else {
        iwork_data[ix] = c_i;
        q++;
        if (q == 5) {
          while (c_ix < 3) {
            ix++;
            iwork_data[ix] = idx_data[c_ix - 1];
            c_ix++;
          }
        }
      }

      ix++;
    }

    for (pEnd = -1; pEnd < 3; pEnd++) {
      idx_data[1 + pEnd] = iwork_data[pEnd + 1];
    }

    b_data[0] = posd[0];
    b_data[1] = posd[1];
    b_data[2] = veld[0];
    b_data[3] = veld[1];
    for (c_i = 0; c_i < 4; c_i++) {
      ycol_data[c_i] = result_data[idx_data[c_i] - 1];
    }

    for (c_i = 0; c_i < 4; c_i++) {
      b_data[c_i] = ycol_data[c_i];
    }

    c_i = 0;
    b_k = 0;
    while (b_k + 1 <= 4) {
      ix = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 4) {
          exitg1 = 1;
        } else {
          b_p = false;
          s = std::abs(b_data[b_k] / 2.0);
          if (s <= 2.2250738585072014E-308) {
            s = 4.94065645841247E-324;
          } else {
            frexp(s, &c);
            s = std::ldexp(1.0, c - 53);
          }

          if (std::abs(b_data[b_k] - b_data[ix]) >= s) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      c_i++;
      b_data[c_i - 1] = b_data[ix];
    }

    if (1 > c_i) {
      c = 0;
    } else {
      c = c_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, sizeof(real_T) << 4U);

    // 'findPolyCoeff:107' b = zeros(n,1);
    Coeff[0] = 0.0;
    Coeff[1] = 0.0;
    Coeff[2] = 0.0;
    Coeff[3] = 0.0;

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (c_i = 0; c_i < c; c_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      s = b_data[c_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (s == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          // 'findPolyCoeff:114' for i=n-1:-1:0
          // 'findPolyCoeff:115' A(row,col) = x^i;
          ix = static_cast<int32_T>(row);
          c_ix = ix - 1;
          A[c_ix] = pow(s, 3.0);

          // 'findPolyCoeff:116' col = col + 1;
          // 'findPolyCoeff:115' A(row,col) = x^i;
          A[ix + 3] = pow(s, 2.0);

          // 'findPolyCoeff:116' col = col + 1;
          // 'findPolyCoeff:115' A(row,col) = x^i;
          A[ix + 7] = pow(s, 1.0);

          // 'findPolyCoeff:116' col = col + 1;
          // 'findPolyCoeff:115' A(row,col) = x^i;
          A[ix + 11] = pow(s, 0.0);

          // 'findPolyCoeff:116' col = col + 1;
          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[c_ix] = posd[2 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (s == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          // 'findPolyCoeff:125' for i=n-1:-1:1
          // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
          A[static_cast<int32_T>(row) - 1] = 3.0 * pow(s, 2.0);

          // 'findPolyCoeff:127' col = col + 1;
          // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
          A[static_cast<int32_T>(row) + 3] = 2.0 * pow(s, 1.0);

          // 'findPolyCoeff:127' col = col + 1;
          // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
          A[static_cast<int32_T>(row) + 7] = pow(s, 0.0);

          // 'findPolyCoeff:127' col = col + 1;
          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = veld[2 + b_k];

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    ipiv[0] = 1;
    ipiv[1] = 2;
    ipiv[2] = 3;
    for (c = 0; c < 3; c++) {
      c_i = c * 5;
      b_k = 0;
      ix = c_i;
      row = std::abs(A[c_i]);
      for (pEnd = 2; pEnd <= 4 - c; pEnd++) {
        ix++;
        s = std::abs(A[ix]);
        if (s > row) {
          b_k = pEnd - 1;
          row = s;
        }
      }

      if (A[c_i + b_k] != 0.0) {
        if (b_k != 0) {
          c_ix = c + b_k;
          ipiv[c] = static_cast<int8_T>((c_ix + 1));
          row = A[c];
          A[c] = A[c_ix];
          A[c_ix] = row;
          ix = c + 4;
          b_k = c_ix + 4;
          row = A[ix];
          A[ix] = A[b_k];
          A[b_k] = row;
          ix += 4;
          b_k += 4;
          row = A[ix];
          A[ix] = A[b_k];
          A[b_k] = row;
          ix += 4;
          b_k += 4;
          row = A[ix];
          A[ix] = A[b_k];
          A[b_k] = row;
        }

        b_k = (c_i - c) + 4;
        for (ix = c_i + 1; ix < b_k; ix++) {
          A[ix] /= A[c_i];
        }
      }

      b_k = c_i;
      ix = c_i + 4;
      for (pEnd = 0; pEnd <= 2 - c; pEnd++) {
        row = A[ix];
        if (A[ix] != 0.0) {
          c_ix = c_i + 1;
          q = (b_k - c) + 8;
          for (ijA = 5 + b_k; ijA < q; ijA++) {
            A[ijA] += A[c_ix] * -row;
            c_ix++;
          }
        }

        ix += 4;
        b_k += 4;
      }
    }

    if (ipiv[0] != 1) {
      row = Coeff[0];
      c = ipiv[0] - 1;
      Coeff[0] = Coeff[c];
      Coeff[c] = row;
    }

    if (ipiv[1] != 2) {
      row = Coeff[1];
      c = ipiv[1] - 1;
      Coeff[1] = Coeff[c];
      Coeff[c] = row;
    }

    if (ipiv[2] != 3) {
      row = Coeff[2];
      c = ipiv[2] - 1;
      Coeff[2] = Coeff[c];
      Coeff[c] = row;
    }

    if (Coeff[0] != 0.0) {
      for (b_k = 1; b_k + 1 < 5; b_k++) {
        Coeff[b_k] -= Coeff[0] * A[b_k];
      }
    }

    if (Coeff[1] != 0.0) {
      for (b_k = 2; b_k + 1 < 5; b_k++) {
        Coeff[b_k] -= A[b_k + 4] * Coeff[1];
      }
    }

    if (Coeff[2] != 0.0) {
      for (b_k = 3; b_k + 1 < 5; b_k++) {
        Coeff[b_k] -= A[b_k + 8] * Coeff[2];
      }
    }

    if (Coeff[3] != 0.0) {
      Coeff[3] /= A[15];
      for (b_k = 0; b_k < 3; b_k++) {
        Coeff[b_k] -= A[b_k + 12] * Coeff[3];
      }
    }

    if (Coeff[2] != 0.0) {
      Coeff[2] /= A[10];
      for (b_k = 0; b_k < 2; b_k++) {
        Coeff[b_k] -= A[b_k + 8] * Coeff[2];
      }
    }

    if (Coeff[1] != 0.0) {
      Coeff[1] /= A[5];
      Coeff[0] -= Coeff[1] * A[4];
    }

    if (Coeff[0] != 0.0) {
      Coeff[0] /= A[0];
    }

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function set_h_init(q,qp)
  //
  void walkModelClass::walk_set_h_init(const real_T q[30], const real_T qp[30])
  {
    real_T h[28];
    real_T hp[28];
    real_T hd[28];
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T qfp[2];
    int32_T k;
    real_T tmp[4];
    real_T tmp_0[4];
    int32_T i;

    //  Actual
    // 'set_h_init:4' T = DGM_TALOS_QY_xelo(q);
    walk_DGM_TALOS_QY_xelo(q, walk_B.T_d);

    // 'set_h_init:5' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T);
    walk_compute2_com_xelo(walk_B.T_d, CoM, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_p);

    // 'set_h_init:6' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    for (k = 0; k < 2; k++) {
      qfp[k] = 0.0;
      for (i = 0; i < 30; i++) {
        qfp[k] += J_CoM[3 * i + k] * qp[i];
      }
    }

    // 'set_h_init:7' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T_d, J_CoM, J_Ankle, walk_B.J_h_dy);

    // 'set_h_init:8' h = state_v_TALOS_xelo(q,T,CoM);
    walk_state_v_TALOS_xelo(q, walk_B.T_d, CoM, h);

    // 'set_h_init:9' hp= J_h*qp;
    for (k = 0; k < 28; k++) {
      hp[k] = 0.0;
      for (i = 0; i < 30; i++) {
        hp[k] += walk_B.J_h_dy[28 * i + k] * qp[i];
      }
    }

    //  Objective
    // 'set_h_init:12' hd=desired_h_xelo(0);
    walk_desired_h_xelo_h(hd);

    // 'set_h_init:13' hpd=zeros(28,1);
    // 'set_h_init:14' qfd=xyT_ini(1:2);
    // 'set_h_init:15' qfpd=zeros(2,1);
    // 'set_h_init:17' time=10;
    //  Computation
    // 'set_h_init:19' for k=1:28
    for (k = 0; k < 28; k++) {
      // 'set_h_init:20' PosD = [0, h(k);
      // 'set_h_init:21'         time, hd(k)];
      // 'set_h_init:22' VelD = [0, hp(k);
      // 'set_h_init:23'         time, hpd(k)];
      // 'set_h_init:24' h_init(:,k)=findPolyCoeff(PosD,VelD,[]);
      tmp[0] = 0.0;
      tmp[2] = h[k];
      tmp[1] = 10.0;
      tmp[3] = hd[k];
      tmp_0[0] = 0.0;
      tmp_0[2] = hp[k];
      tmp_0[1] = 10.0;
      tmp_0[3] = 0.0;
      walk_findPolyCoeff(tmp, tmp_0, &walk_DW.h_init[k << 2]);
    }

    // 'set_h_init:27' PosD = [0, qf(1);
    // 'set_h_init:28'     time, qfd(1)];
    // 'set_h_init:29' VelD = [0, qfp(1);
    // 'set_h_init:30'     time, qfpd(1)];
    // 'set_h_init:31' h_init(:,29)=findPolyCoeff(PosD,VelD,[]);
    tmp[0] = 0.0;
    tmp[2] = CoM[0];
    tmp[1] = 10.0;
    tmp[3] = walk_DW.xyT_ini[0];
    tmp_0[0] = 0.0;
    tmp_0[2] = qfp[0];
    tmp_0[1] = 10.0;
    tmp_0[3] = 0.0;
    walk_findPolyCoeff(tmp, tmp_0, &walk_DW.h_init[112]);

    // 'set_h_init:33' PosD = [0, qf(2);
    // 'set_h_init:34'     time, qfd(2)];
    // 'set_h_init:35' VelD = [0, qfp(2);
    // 'set_h_init:36'     time, qfpd(2)];
    // 'set_h_init:37' h_init(:,30)=findPolyCoeff(PosD,VelD,[]);
    tmp[0] = 0.0;
    tmp[2] = CoM[1];
    tmp[1] = 10.0;
    tmp[3] = walk_DW.xyT_ini[1];
    tmp_0[0] = 0.0;
    tmp_0[2] = qfp[1];
    tmp_0[1] = 10.0;
    tmp_0[3] = 0.0;
    walk_findPolyCoeff(tmp, tmp_0, &walk_DW.h_init[116]);
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function test=Initial_test(q,qp)
  //
  boolean_T walkModelClass::walk_Initial_test(const real_T q[30], const real_T
    qp[30])
  {
    boolean_T test;
    real_T hd[28];
    real_T h[28];
    real_T Q[30];
    real_T Qd[30];
    real_T Qp[30];
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    int32_T k;
    real_T J_CoM_0[2];
    int32_T i;

    // 'Initial_test:2' test=true;
    test = true;

    //  Desired
    // 'Initial_test:5' hd=desired_h_xelo(0);
    walk_desired_h_xelo_h(hd);

    // 'Initial_test:6' hpd=zeros(28,1);
    // 'Initial_test:7' qfd=xyT_ini(1:2);
    // 'Initial_test:8' qfpd=zeros(2,1);
    //  Actual
    // 'Initial_test:11' T = DGM_TALOS_QY_xelo(q);
    walk_DGM_TALOS_QY_xelo(q, walk_B.T_f);

    // 'Initial_test:12' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_compute2_com_xelo(walk_B.T_f, CoM, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_cv);

    // 'Initial_test:13' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    // 'Initial_test:14' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T_f, J_CoM, J_Ankle, walk_B.J_h_lx);

    // 'Initial_test:16' h = state_v_TALOS_xelo(q,T,CoM);
    walk_state_v_TALOS_xelo(q, walk_B.T_f, CoM, h);

    // 'Initial_test:17' hp= J_h*qp;
    //  Test
    // 'Initial_test:20' Q=[h;qf];
    Q[28] = CoM[0];
    Q[29] = CoM[1];

    // 'Initial_test:21' Qd=[hd;qfd];
    memcpy(&Q[0], &h[0], 28U * sizeof(real_T));
    memcpy(&Qd[0], &hd[0], 28U * sizeof(real_T));
    Qd[28] = walk_DW.xyT_ini[0];
    Qd[29] = walk_DW.xyT_ini[1];

    // 'Initial_test:22' Qp=[hp;qfp];
    for (k = 0; k < 28; k++) {
      hd[k] = 0.0;
      for (i = 0; i < 30; i++) {
        hd[k] += walk_B.J_h_lx[28 * i + k] * qp[i];
      }
    }

    for (k = 0; k < 2; k++) {
      J_CoM_0[k] = 0.0;
      for (i = 0; i < 30; i++) {
        J_CoM_0[k] += J_CoM[3 * i + k] * qp[i];
      }
    }

    memcpy(&Qp[0], &hd[0], 28U * sizeof(real_T));
    Qp[28] = J_CoM_0[0];
    Qp[29] = J_CoM_0[1];

    // 'Initial_test:23' Qpd=[hpd;qfpd];
    // 'Initial_test:25' for k=1:30
    for (k = 0; k < 30; k++) {
      // 'Initial_test:26' if ( abs(Q(k)-Qd(k))>1e-3 )||(abs(Qp(k)-Qpd(k))>1e-3 ) 
      if (std::abs(Q[k] - Qd[k]) > 0.001) {
        // 'Initial_test:27' test=false;
        test = false;
      } else {
        if (std::abs(Qp[k]) > 0.001) {
          // 'Initial_test:27' test=false;
          test = false;
        }
      }
    }

    return test;
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [phi,dphi_dx,dphi_dy,d2phi_dx2,d2phi_dy2,d2phi_dxy]=get_phi_and_diff_xelo(qf)
  //
  void walkModelClass::walk_get_phi_and_diff_xelo(const real_T qf[2], real_T
    *phi, real_T *dphi_dx, real_T *dphi_dy, real_T *d2phi_dx2, real_T *d2phi_dy2,
    real_T *d2phi_dxy)
  {
    real_T phi_tmp;

    // 'get_phi_and_diff_xelo:5' X=qf(1);
    // 'get_phi_and_diff_xelo:5' Y=qf(2);
    //  AA=phi_coeff.AA;
    //  BB=phi_coeff.BB;
    //  CC=phi_coeff.CC;
    //  DD=phi_coeff.DD;
    //  EE=phi_coeff.EE;
    //  FF=phi_coeff.FF;
    // 'get_phi_and_diff_xelo:15' phi= AA*X + BB*Y + CC*X*Y+DD*X^2+EE*Y^2+FF;
    phi_tmp = walk_DW.CC * qf[0];
    *phi = ((((walk_DW.AA * qf[0] + walk_DW.BB * qf[1]) + phi_tmp * qf[1]) + qf
             [0] * qf[0] * walk_DW.DD) + qf[1] * qf[1] * walk_DW.EE) +
      walk_DW.FF;

    // 'get_phi_and_diff_xelo:17' dphi_dx = AA + CC*Y + 2*DD*X;
    *dphi_dx = (walk_DW.CC * qf[1] + walk_DW.AA) + 2.0 * walk_DW.DD * qf[0];

    // 'get_phi_and_diff_xelo:18' dphi_dy = BB + CC*X + 2*EE*Y;
    *dphi_dy = (phi_tmp + walk_DW.BB) + 2.0 * walk_DW.EE * qf[1];

    // 'get_phi_and_diff_xelo:20' d2phi_dx2 = 2*DD;
    *d2phi_dx2 = 2.0 * walk_DW.DD;

    // 'get_phi_and_diff_xelo:21' d2phi_dy2 = 2*EE;
    *d2phi_dy2 = 2.0 * walk_DW.EE;

    // 'get_phi_and_diff_xelo:22' d2phi_dxy = CC;
    *d2phi_dxy = walk_DW.CC;
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  void walkModelClass::walk_linsolve(const real_T A[64], real_T B[8])
  {
    real_T b_A[64];
    int8_T ipiv[8];
    int32_T j;
    int32_T ix;
    real_T smax;
    real_T s;
    int32_T k;
    int32_T iy;
    int32_T c_ix;
    int32_T d;
    int32_T ijA;
    int32_T kAcol;
    memcpy(&b_A[0], &A[0], sizeof(real_T) << 6U);
    for (kAcol = 0; kAcol < 8; kAcol++) {
      ipiv[kAcol] = static_cast<int8_T>((1 + kAcol));
    }

    for (j = 0; j < 7; j++) {
      kAcol = j * 9;
      iy = 0;
      ix = kAcol;
      smax = std::abs(b_A[kAcol]);
      for (k = 2; k <= 8 - j; k++) {
        ix++;
        s = std::abs(b_A[ix]);
        if (s > smax) {
          iy = k - 1;
          smax = s;
        }
      }

      if (b_A[kAcol + iy] != 0.0) {
        if (iy != 0) {
          iy += j;
          ipiv[j] = static_cast<int8_T>((iy + 1));
          ix = j;
          for (k = 0; k < 8; k++) {
            smax = b_A[ix];
            b_A[ix] = b_A[iy];
            b_A[iy] = smax;
            ix += 8;
            iy += 8;
          }
        }

        iy = (kAcol - j) + 8;
        for (ix = kAcol + 1; ix < iy; ix++) {
          b_A[ix] /= b_A[kAcol];
        }
      }

      iy = kAcol + 9;
      ix = kAcol + 8;
      for (k = 0; k <= 6 - j; k++) {
        smax = b_A[ix];
        if (b_A[ix] != 0.0) {
          c_ix = kAcol + 1;
          d = (iy - j) + 7;
          for (ijA = iy; ijA < d; ijA++) {
            b_A[ijA] += b_A[c_ix] * -smax;
            c_ix++;
          }
        }

        ix += 8;
        iy += 8;
      }
    }

    for (j = 0; j < 7; j++) {
      if (j + 1 != ipiv[j]) {
        smax = B[j];
        kAcol = ipiv[j] - 1;
        B[j] = B[kAcol];
        B[kAcol] = smax;
      }
    }

    for (j = 0; j < 8; j++) {
      kAcol = j << 3;
      if (B[j] != 0.0) {
        for (iy = j + 1; iy + 1 < 9; iy++) {
          B[iy] -= b_A[iy + kAcol] * B[j];
        }
      }
    }

    for (j = 7; j >= 0; j--) {
      kAcol = j << 3;
      if (B[j] != 0.0) {
        B[j] /= b_A[j + kAcol];
        for (iy = 0; iy < j; iy++) {
          B[iy] -= b_A[iy + kAcol] * B[j];
        }
      }
    }
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_g(real_T Coeff[8])
  {
    real_T A[64];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[6] = { 0.0, 0.5, 1.0, 0.85, 0.88, 0.5 };

    static const real_T veld[6] = { 0.0, 0.5, 1.0, 0.0, 0.0, 0.0 };

    static const int8_T accd[4] = { 0, 1, 0, 0 };

    int32_T tmp;
    int32_T tmp_0;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = 0.0;
    result_data[3] = 0.0;
    result_data[1] = 0.5;
    result_data[4] = 0.5;
    result_data[2] = 1.0;
    result_data[5] = 1.0;
    result_data[6] = 0.0;
    result_data[7] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    if (walk_sortLE(result_data, 7, 8)) {
      idx_data[6] = 7;
      idx_data[7] = 8;
    } else {
      idx_data[6] = 8;
      idx_data[7] = 7;
    }

    d_i = 2;
    while (d_i < 8) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 9) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 9) {
          qEnd = 9;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          tmp = idx_data[q - 1];
          tmp_0 = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp_0, tmp)) {
            iwork_data[c_k] = tmp_0;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (d_i = 0; d_i < 8; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 8; d_i++) {
      result_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 8) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 8) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = result_data[b_k] / 2.0;
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(result_data[b_k] - result_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      result_data[d_i - 1] = result_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, sizeof(real_T) << 6U);

    // 'findPolyCoeff:107' b = zeros(n,1);
    memset(&Coeff[0], 0, sizeof(real_T) << 3U);

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = result_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 8; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = pow(x, 7.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = posd[3 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 7; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = pow(x, (7.0 + -static_cast<real_T>(k0)) - 1.0) * (7.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == accd[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          col = 1.0;

          // 'findPolyCoeff:136' for i=n-1:-1:2
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = static_cast<real_T>(((7 - k0) * (6 - k0))) * pow(x, (7.0 +
              -static_cast<real_T>(k0)) - 2.0);

            // 'findPolyCoeff:138' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  void walkModelClass::walk_linsolve_a(const real_T A[49], real_T B[7])
  {
    real_T b_A[49];
    int8_T ipiv[7];
    int32_T j;
    int32_T ix;
    real_T smax;
    real_T s;
    int32_T k;
    int32_T iy;
    int32_T c_ix;
    int32_T d;
    int32_T ijA;
    int32_T kAcol;
    memcpy(&b_A[0], &A[0], 49U * sizeof(real_T));
    for (kAcol = 0; kAcol < 7; kAcol++) {
      ipiv[kAcol] = static_cast<int8_T>((1 + kAcol));
    }

    for (j = 0; j < 6; j++) {
      kAcol = j << 3;
      iy = 0;
      ix = kAcol;
      smax = std::abs(b_A[kAcol]);
      for (k = 2; k <= 7 - j; k++) {
        ix++;
        s = std::abs(b_A[ix]);
        if (s > smax) {
          iy = k - 1;
          smax = s;
        }
      }

      if (b_A[kAcol + iy] != 0.0) {
        if (iy != 0) {
          iy += j;
          ipiv[j] = static_cast<int8_T>((iy + 1));
          ix = j;
          for (k = 0; k < 7; k++) {
            smax = b_A[ix];
            b_A[ix] = b_A[iy];
            b_A[iy] = smax;
            ix += 7;
            iy += 7;
          }
        }

        iy = (kAcol - j) + 7;
        for (ix = kAcol + 1; ix < iy; ix++) {
          b_A[ix] /= b_A[kAcol];
        }
      }

      iy = kAcol + 8;
      ix = kAcol + 7;
      for (k = 0; k <= 5 - j; k++) {
        smax = b_A[ix];
        if (b_A[ix] != 0.0) {
          c_ix = kAcol + 1;
          d = (iy - j) + 6;
          for (ijA = iy; ijA < d; ijA++) {
            b_A[ijA] += b_A[c_ix] * -smax;
            c_ix++;
          }
        }

        ix += 7;
        iy += 7;
      }
    }

    for (j = 0; j < 6; j++) {
      if (j + 1 != ipiv[j]) {
        smax = B[j];
        kAcol = ipiv[j] - 1;
        B[j] = B[kAcol];
        B[kAcol] = smax;
      }
    }

    for (j = 0; j < 7; j++) {
      kAcol = 7 * j;
      if (B[j] != 0.0) {
        for (iy = j + 1; iy + 1 < 8; iy++) {
          B[iy] -= b_A[iy + kAcol] * B[j];
        }
      }
    }

    for (j = 6; j >= 0; j--) {
      kAcol = 7 * j;
      if (B[j] != 0.0) {
        B[j] /= b_A[j + kAcol];
        for (iy = 0; iy < j; iy++) {
          B[iy] -= b_A[iy + kAcol] * B[j];
        }
      }
    }
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_gr(const real_T posd[6], real_T Coeff
    [7])
  {
    real_T A[49];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    real_T posd_data[8];
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    posd_data[0] = posd[0];
    posd_data[1] = posd[1];
    posd_data[2] = posd[2];
    posd_data[3] = 0.0;
    posd_data[4] = 1.0;
    for (i = 0; i < 5; i++) {
      result_data[i] = posd_data[i];
    }

    result_data[5] = 0.0;
    result_data[6] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 7; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    idx_data[6] = 7;
    d_i = 2;
    while (d_i < 7) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 8) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 8) {
          qEnd = 8;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 7; i++) {
      posd_data[i] = result_data[i];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      posd_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 7) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 7) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = std::abs(posd_data[b_k] / 2.0);
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(posd_data[b_k] - posd_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      posd_data[d_i - 1] = posd_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 49U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 7; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = posd_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 7; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, 6.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = posd[3 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, (6.0 + -static_cast<real_T>(k0)) - 1.0) * (6.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          col = 1.0;

          // 'findPolyCoeff:136' for i=n-1:-1:2
          for (k0 = 0; k0 < 5; k0++) {
            // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = static_cast<real_T>(((6 - k0) * (5 - k0))) * pow(x, (6.0 +
              -static_cast<real_T>(k0)) - 2.0);

            // 'findPolyCoeff:138' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_a(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  void walkModelClass::walk_linsolve_aa(const real_T A[36], real_T B[6])
  {
    real_T b_A[36];
    int8_T ipiv[6];
    int32_T j;
    int32_T ix;
    real_T smax;
    real_T s;
    int32_T k;
    int32_T iy;
    int32_T c_ix;
    int32_T d;
    int32_T ijA;
    int32_T kAcol;
    memcpy(&b_A[0], &A[0], 36U * sizeof(real_T));
    for (kAcol = 0; kAcol < 6; kAcol++) {
      ipiv[kAcol] = static_cast<int8_T>((1 + kAcol));
    }

    for (j = 0; j < 5; j++) {
      kAcol = j * 7;
      iy = 0;
      ix = kAcol;
      smax = std::abs(b_A[kAcol]);
      for (k = 2; k <= 6 - j; k++) {
        ix++;
        s = std::abs(b_A[ix]);
        if (s > smax) {
          iy = k - 1;
          smax = s;
        }
      }

      if (b_A[kAcol + iy] != 0.0) {
        if (iy != 0) {
          iy += j;
          ipiv[j] = static_cast<int8_T>((iy + 1));
          ix = j;
          for (k = 0; k < 6; k++) {
            smax = b_A[ix];
            b_A[ix] = b_A[iy];
            b_A[iy] = smax;
            ix += 6;
            iy += 6;
          }
        }

        iy = (kAcol - j) + 6;
        for (ix = kAcol + 1; ix < iy; ix++) {
          b_A[ix] /= b_A[kAcol];
        }
      }

      iy = kAcol + 7;
      ix = kAcol + 6;
      for (k = 0; k <= 4 - j; k++) {
        smax = b_A[ix];
        if (b_A[ix] != 0.0) {
          c_ix = kAcol + 1;
          d = (iy - j) + 5;
          for (ijA = iy; ijA < d; ijA++) {
            b_A[ijA] += b_A[c_ix] * -smax;
            c_ix++;
          }
        }

        ix += 6;
        iy += 6;
      }
    }

    for (j = 0; j < 5; j++) {
      if (j + 1 != ipiv[j]) {
        smax = B[j];
        kAcol = ipiv[j] - 1;
        B[j] = B[kAcol];
        B[kAcol] = smax;
      }
    }

    for (j = 0; j < 6; j++) {
      kAcol = 6 * j;
      if (B[j] != 0.0) {
        for (iy = j + 1; iy + 1 < 7; iy++) {
          B[iy] -= b_A[iy + kAcol] * B[j];
        }
      }
    }

    for (j = 5; j >= 0; j--) {
      kAcol = 6 * j;
      if (B[j] != 0.0) {
        B[j] /= b_A[j + kAcol];
        for (iy = 0; iy < j; iy++) {
          B[iy] -= b_A[iy + kAcol] * B[j];
        }
      }
    }
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grq(const real_T posd[4], real_T
    Coeff[6])
  {
    real_T A[36];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    real_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = posd[0];
    result_data[1] = posd[1];
    result_data[2] = 0.0;
    result_data[3] = 1.0;
    result_data[4] = 0.0;
    result_data[5] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 6; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    d_i = 2;
    while (d_i < 6) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 7) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 7) {
          qEnd = 7;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 6; i++) {
      b_data[i] = result_data[i];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      b_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 6) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 6) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = std::abs(b_data[b_k] / 2.0);
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(b_data[b_k] - b_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      b_data[d_i - 1] = b_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 36U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 6; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = b_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, 5.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = posd[2 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 5; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, (5.0 + -static_cast<real_T>(k0)) - 1.0) * (5.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          // 'findPolyCoeff:136' for i=n-1:-1:2
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) - 1] = 20.0 * pow(x, 3.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 5] = 12.0 * pow(x, 2.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 11] = 6.0 * pow(x, 1.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 17] = 2.0;

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_aa(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqh(real_T Coeff[7])
  {
    real_T A[49];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[6] = { 0.0, 0.6, 1.0, 0.0, 0.05, 0.0 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    real_T d_data[8];
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    d_data[0] = 0.0;
    d_data[1] = 0.6;
    d_data[2] = 1.0;
    d_data[3] = 0.0;
    d_data[4] = 1.0;
    for (i = 0; i < 5; i++) {
      result_data[i] = d_data[i];
    }

    result_data[5] = 0.0;
    result_data[6] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 7; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    idx_data[6] = 7;
    d_i = 2;
    while (d_i < 7) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 8) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 8) {
          qEnd = 8;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 7; i++) {
      d_data[i] = result_data[i];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      d_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 7) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 7) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = d_data[b_k] / 2.0;
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(d_data[b_k] - d_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      d_data[d_i - 1] = d_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 49U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 7; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = d_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 7; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, 6.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = posd[3 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, (6.0 + -static_cast<real_T>(k0)) - 1.0) * (6.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          col = 1.0;

          // 'findPolyCoeff:136' for i=n-1:-1:2
          for (k0 = 0; k0 < 5; k0++) {
            // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = static_cast<real_T>(((6 - k0) * (5 - k0))) * pow(x, (6.0 +
              -static_cast<real_T>(k0)) - 2.0);

            // 'findPolyCoeff:138' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_a(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhn(real_T Coeff[7])
  {
    real_T A[49];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[6] = { 0.0, 0.5, 1.0, 0.1, 0.1, 0.1 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    real_T tmp_data[8];
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    tmp_data[0] = 0.0;
    tmp_data[1] = 0.5;
    tmp_data[2] = 1.0;
    tmp_data[3] = 0.0;
    tmp_data[4] = 1.0;
    for (i = 0; i < 5; i++) {
      result_data[i] = tmp_data[i];
    }

    result_data[5] = 0.0;
    result_data[6] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 7; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    idx_data[6] = 7;
    d_i = 2;
    while (d_i < 7) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 8) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 8) {
          qEnd = 8;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 7; i++) {
      tmp_data[i] = result_data[i];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      tmp_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 7) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 7) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = tmp_data[b_k] / 2.0;
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(tmp_data[b_k] - tmp_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      tmp_data[d_i - 1] = tmp_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 49U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 7; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = tmp_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 7; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, 6.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.1;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, (6.0 + -static_cast<real_T>(k0)) - 1.0) * (6.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          col = 1.0;

          // 'findPolyCoeff:136' for i=n-1:-1:2
          for (k0 = 0; k0 < 5; k0++) {
            // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = static_cast<real_T>(((6 - k0) * (5 - k0))) * pow(x, (6.0 +
              -static_cast<real_T>(k0)) - 2.0);

            // 'findPolyCoeff:138' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_a(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhng(real_T Coeff[6])
  {
    real_T A[36];
    real_T row;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int8_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    int8_T ycol_data[8];
    boolean_T b_p;
    static const int8_T posd[4] = { 0, 1, 0, 0 };

    int32_T i;
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = 0.0;
    result_data[1] = 1.0;
    result_data[2] = 0.0;
    result_data[3] = 1.0;
    result_data[4] = 0.0;
    result_data[5] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 6; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    d_i = 2;
    while (d_i < 6) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 7) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 7) {
          qEnd = 7;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 6; i++) {
      b_data[i] = static_cast<int8_T>(result_data[i]);
    }

    for (d_i = 0; d_i < 6; d_i++) {
      ycol_data[d_i] = b_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      b_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 6) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 6) {
          exitg1 = 1;
        } else {
          b_p = false;
          row = static_cast<real_T>(b_data[b_k]) / 2.0;
          if (row <= 2.2250738585072014E-308) {
            row = 4.94065645841247E-324;
          } else {
            frexp(row, &c);
            row = std::ldexp(1.0, c - 53);
          }

          if (std::abs((real_T)(b_data[b_k] - b_data[k0])) >= row) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      b_data[d_i - 1] = b_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 36U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 6; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      b_k = b_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (b_k == posd[k0]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (qEnd = 0; qEnd < 6; qEnd++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, 5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (b_k == posd[k0]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (qEnd = 0; qEnd < 5; qEnd++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, (5.0 + -static_cast<real_T>(qEnd)) - 1.0) *
              (5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (b_k == posd[k0]) {
          // 'findPolyCoeff:135' col = 1;
          // 'findPolyCoeff:136' for i=n-1:-1:2
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) - 1] = 20.0 * pow((real_T)b_k, 3.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 5] = 12.0 * pow((real_T)b_k, 2.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 11] = 6.0 * pow((real_T)b_k, 1.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 17] = 2.0;

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_aa(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhngb(real_T Coeff[7])
  {
    real_T A[49];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[6] = { 0.0, 0.5, 1.0, -0.4, -0.4, -0.4 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    real_T tmp_data[8];
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    tmp_data[0] = 0.0;
    tmp_data[1] = 0.5;
    tmp_data[2] = 1.0;
    tmp_data[3] = 0.0;
    tmp_data[4] = 1.0;
    for (i = 0; i < 5; i++) {
      result_data[i] = tmp_data[i];
    }

    result_data[5] = 0.0;
    result_data[6] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 7; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    idx_data[6] = 7;
    d_i = 2;
    while (d_i < 7) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 8) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 8) {
          qEnd = 8;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 7; i++) {
      tmp_data[i] = result_data[i];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 7; d_i++) {
      tmp_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 7) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 7) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = tmp_data[b_k] / 2.0;
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(tmp_data[b_k] - tmp_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      tmp_data[d_i - 1] = tmp_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 49U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 7; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = tmp_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 7; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, 6.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = -0.4;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(x, (6.0 + -static_cast<real_T>(k0)) - 1.0) * (6.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          col = 1.0;

          // 'findPolyCoeff:136' for i=n-1:-1:2
          for (k0 = 0; k0 < 5; k0++) {
            // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
            A[(static_cast<int32_T>(row) + 7 * (static_cast<int32_T>(col) - 1))
              - 1] = static_cast<real_T>(((6 - k0) * (5 - k0))) * pow(x, (6.0 +
              -static_cast<real_T>(k0)) - 2.0);

            // 'findPolyCoeff:138' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_a(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhngbg(real_T Coeff[6])
  {
    real_T A[36];
    real_T row;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int8_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    int8_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[4] = { 0.0, 1.0, -0.26, -0.26 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = 0.0;
    result_data[1] = 1.0;
    result_data[2] = 0.0;
    result_data[3] = 1.0;
    result_data[4] = 0.0;
    result_data[5] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 6; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    d_i = 2;
    while (d_i < 6) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 7) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 7) {
          qEnd = 7;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 6; i++) {
      b_data[i] = static_cast<int8_T>(result_data[i]);
    }

    for (d_i = 0; d_i < 6; d_i++) {
      ycol_data[d_i] = b_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      b_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 6) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 6) {
          exitg1 = 1;
        } else {
          b_p = false;
          row = static_cast<real_T>(b_data[b_k]) / 2.0;
          if (row <= 2.2250738585072014E-308) {
            row = 4.94065645841247E-324;
          } else {
            frexp(row, &c);
            row = std::ldexp(1.0, c - 53);
          }

          if (std::abs((real_T)(b_data[b_k] - b_data[k0])) >= row) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      b_data[d_i - 1] = b_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 36U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 6; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      b_k = b_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (b_k == static_cast<int32_T>(posd[k0])) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (qEnd = 0; qEnd < 6; qEnd++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, 5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = -0.26;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (qEnd = 0; qEnd < 5; qEnd++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, (5.0 + -static_cast<real_T>(qEnd)) - 1.0) *
              (5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:135' col = 1;
          // 'findPolyCoeff:136' for i=n-1:-1:2
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) - 1] = 20.0 * pow((real_T)b_k, 3.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 5] = 12.0 * pow((real_T)b_k, 2.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 11] = 6.0 * pow((real_T)b_k, 1.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 17] = 2.0;

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_aa(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhngbgf(real_T Coeff[6])
  {
    real_T A[36];
    real_T row;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int8_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    int8_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[4] = { 0.0, 1.0, 0.26, 0.26 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = 0.0;
    result_data[1] = 1.0;
    result_data[2] = 0.0;
    result_data[3] = 1.0;
    result_data[4] = 0.0;
    result_data[5] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 6; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    d_i = 2;
    while (d_i < 6) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 7) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 7) {
          qEnd = 7;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 6; i++) {
      b_data[i] = static_cast<int8_T>(result_data[i]);
    }

    for (d_i = 0; d_i < 6; d_i++) {
      ycol_data[d_i] = b_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      b_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 6) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 6) {
          exitg1 = 1;
        } else {
          b_p = false;
          row = static_cast<real_T>(b_data[b_k]) / 2.0;
          if (row <= 2.2250738585072014E-308) {
            row = 4.94065645841247E-324;
          } else {
            frexp(row, &c);
            row = std::ldexp(1.0, c - 53);
          }

          if (std::abs((real_T)(b_data[b_k] - b_data[k0])) >= row) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      b_data[d_i - 1] = b_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 36U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 6; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      b_k = b_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (b_k == static_cast<int32_T>(posd[k0])) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (qEnd = 0; qEnd < 6; qEnd++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, 5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.26;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (qEnd = 0; qEnd < 5; qEnd++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, (5.0 + -static_cast<real_T>(qEnd)) - 1.0) *
              (5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:135' col = 1;
          // 'findPolyCoeff:136' for i=n-1:-1:2
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) - 1] = 20.0 * pow((real_T)b_k, 3.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 5] = 12.0 * pow((real_T)b_k, 2.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 11] = 6.0 * pow((real_T)b_k, 1.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 17] = 2.0;

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_aa(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhngbgfj(real_T Coeff[6])
  {
    real_T A[36];
    real_T row;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int8_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    int8_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[4] = { 0.0, 1.0, -0.17, -0.17 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = 0.0;
    result_data[1] = 1.0;
    result_data[2] = 0.0;
    result_data[3] = 1.0;
    result_data[4] = 0.0;
    result_data[5] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 6; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    d_i = 2;
    while (d_i < 6) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 7) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 7) {
          qEnd = 7;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 6; i++) {
      b_data[i] = static_cast<int8_T>(result_data[i]);
    }

    for (d_i = 0; d_i < 6; d_i++) {
      ycol_data[d_i] = b_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      b_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 6) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 6) {
          exitg1 = 1;
        } else {
          b_p = false;
          row = static_cast<real_T>(b_data[b_k]) / 2.0;
          if (row <= 2.2250738585072014E-308) {
            row = 4.94065645841247E-324;
          } else {
            frexp(row, &c);
            row = std::ldexp(1.0, c - 53);
          }

          if (std::abs((real_T)(b_data[b_k] - b_data[k0])) >= row) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      b_data[d_i - 1] = b_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 36U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 6; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      b_k = b_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (b_k == static_cast<int32_T>(posd[k0])) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (qEnd = 0; qEnd < 6; qEnd++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, 5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = -0.17;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (qEnd = 0; qEnd < 5; qEnd++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, (5.0 + -static_cast<real_T>(qEnd)) - 1.0) *
              (5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:135' col = 1;
          // 'findPolyCoeff:136' for i=n-1:-1:2
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) - 1] = 20.0 * pow((real_T)b_k, 3.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 5] = 12.0 * pow((real_T)b_k, 2.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 11] = 6.0 * pow((real_T)b_k, 1.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 17] = 2.0;

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_aa(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhngbgfj2(real_T Coeff[6])
  {
    real_T A[36];
    real_T row;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int8_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    int8_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[4] = { 0.0, 1.0, 0.17, 0.17 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = 0.0;
    result_data[1] = 1.0;
    result_data[2] = 0.0;
    result_data[3] = 1.0;
    result_data[4] = 0.0;
    result_data[5] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 6; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    d_i = 2;
    while (d_i < 6) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 7) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 7) {
          qEnd = 7;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 6; i++) {
      b_data[i] = static_cast<int8_T>(result_data[i]);
    }

    for (d_i = 0; d_i < 6; d_i++) {
      ycol_data[d_i] = b_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      b_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 6) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 6) {
          exitg1 = 1;
        } else {
          b_p = false;
          row = static_cast<real_T>(b_data[b_k]) / 2.0;
          if (row <= 2.2250738585072014E-308) {
            row = 4.94065645841247E-324;
          } else {
            frexp(row, &c);
            row = std::ldexp(1.0, c - 53);
          }

          if (std::abs((real_T)(b_data[b_k] - b_data[k0])) >= row) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      b_data[d_i - 1] = b_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 36U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 6; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      b_k = b_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (b_k == static_cast<int32_T>(posd[k0])) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (qEnd = 0; qEnd < 6; qEnd++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, 5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.17;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (qEnd = 0; qEnd < 5; qEnd++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, (5.0 + -static_cast<real_T>(qEnd)) - 1.0) *
              (5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:135' col = 1;
          // 'findPolyCoeff:136' for i=n-1:-1:2
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) - 1] = 20.0 * pow((real_T)b_k, 3.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 5] = 12.0 * pow((real_T)b_k, 2.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 11] = 6.0 * pow((real_T)b_k, 1.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 17] = 2.0;

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_aa(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::walk_findPolyCoeff_grqhngbgfj2r(real_T Coeff[6])
  {
    real_T A[36];
    real_T row;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int8_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    int8_T ycol_data[8];
    boolean_T b_p;
    static const real_T posd[4] = { 0.0, 1.0, 0.1, 0.1 };

    static const int8_T veld[4] = { 0, 1, 0, 0 };

    int32_T i;
    int32_T tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = 0.0;
    result_data[1] = 1.0;
    result_data[2] = 0.0;
    result_data[3] = 1.0;
    result_data[4] = 0.0;
    result_data[5] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (i = 0; i < 6; i++) {
      idx_data[i] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    d_i = 2;
    while (d_i < 6) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 7) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 7) {
          qEnd = 7;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          i = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, i)) {
            iwork_data[c_k] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (i = 0; i < 6; i++) {
      b_data[i] = static_cast<int8_T>(result_data[i]);
    }

    for (d_i = 0; d_i < 6; d_i++) {
      ycol_data[d_i] = b_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 6; d_i++) {
      b_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 6) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 6) {
          exitg1 = 1;
        } else {
          b_p = false;
          row = static_cast<real_T>(b_data[b_k]) / 2.0;
          if (row <= 2.2250738585072014E-308) {
            row = 4.94065645841247E-324;
          } else {
            frexp(row, &c);
            row = std::ldexp(1.0, c - 53);
          }

          if (std::abs((real_T)(b_data[b_k] - b_data[k0])) >= row) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      b_data[d_i - 1] = b_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 36U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (i = 0; i < 6; i++) {
      Coeff[i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      b_k = b_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (b_k == static_cast<int32_T>(posd[k0])) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (qEnd = 0; qEnd < 6; qEnd++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, 5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.1;

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (qEnd = 0; qEnd < 5; qEnd++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + 6 * (static_cast<int32_T>(col) - 1))
              - 1] = pow((real_T)b_k, (5.0 + -static_cast<real_T>(qEnd)) - 1.0) *
              (5.0 + -static_cast<real_T>(qEnd));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (k0 = 0; k0 < 2; k0++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (b_k == veld[k0]) {
          // 'findPolyCoeff:135' col = 1;
          // 'findPolyCoeff:136' for i=n-1:-1:2
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) - 1] = 20.0 * pow((real_T)b_k, 3.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 5] = 12.0 * pow((real_T)b_k, 2.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 11] = 6.0 * pow((real_T)b_k, 1.0);

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
          A[static_cast<int32_T>(row) + 17] = 2.0;

          // 'findPolyCoeff:138' col = col + 1;
          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve_aa(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function set_trajectories_f
  //
  void walkModelClass::walk_set_trajectories_f(void)
  {
    real_T tmp[4];
    real_T tmp_0[6];

    // 'set_trajectories_f:5' S=0.3;
    walk_DW.S = 0.3;

    // 'set_trajectories_f:6' D=0.2;
    walk_DW.D = 0.2;

    // 'set_trajectories_f:7' C=3;
    walk_DW.C = 3.0;

    // 'set_trajectories_f:9' ZMPxCoeff=zeros(3,1);
    // 'set_trajectories_f:10' ZMPyCoeff=zeros(3,1);
    walk_DW.ZMPxCoeff[0] = 0.0;
    walk_DW.ZMPyCoeff[0] = 0.0;
    walk_DW.ZMPxCoeff[1] = 0.0;
    walk_DW.ZMPyCoeff[1] = 0.0;
    walk_DW.ZMPxCoeff[2] = 0.0;
    walk_DW.ZMPyCoeff[2] = 0.0;

    // 'set_trajectories_f:12' CC=18.131077687499992;
    walk_DW.CC = 18.131077687499992;

    // 'set_trajectories_f:13' DD=-1.305442687500000;
    walk_DW.DD = -1.3054426875;

    //  x_ffoot_i
    // 'set_trajectories_f:15' PosD = [0, 0.85; % x_ffoot_i
    // 'set_trajectories_f:16'     0.5, 0.88
    // 'set_trajectories_f:17'     1, 0.5];
    // 'set_trajectories_f:18' VelD = [0, 0;
    // 'set_trajectories_f:19'     0.5, 0;
    // 'set_trajectories_f:20'     1, 0];
    // 'set_trajectories_f:21' AccD = [0, 0;
    // 'set_trajectories_f:22'     1, 0];
    // 'set_trajectories_f:23' hd1 = findPolyCoeff(PosD,VelD,AccD);
    walk_findPolyCoeff_g(walk_DW.hd1);

    //  posd,veld,accd
    //  x_ffoot_i
    // 'set_trajectories_f:24' PosD = [0, -S; % x_ffoot_i
    // 'set_trajectories_f:25'     0.5, 0;
    // 'set_trajectories_f:26'     1, S];
    // 'set_trajectories_f:27' VelD = [0, 0;
    // 'set_trajectories_f:28'     1, 0];
    // 'set_trajectories_f:29' hd2 = findPolyCoeff(PosD,VelD,VelD);
    tmp_0[0] = 0.0;
    tmp_0[3] = -walk_DW.S;
    tmp_0[1] = 0.5;
    tmp_0[4] = 0.0;
    tmp_0[2] = 1.0;
    tmp_0[5] = walk_DW.S;
    walk_findPolyCoeff_gr(tmp_0, walk_DW.hd2);

    //  posd,veld,accd
    //  x_ffoot_i
    // 'set_trajectories_f:31' PosD = [0, D; % x_ffoot_i
    // 'set_trajectories_f:32'     1, D];
    // 'set_trajectories_f:33' VelD = [0, 0;
    // 'set_trajectories_f:34'     1, 0];
    // 'set_trajectories_f:35' hd3 = findPolyCoeff(PosD,VelD,VelD);
    tmp[0] = 0.0;
    tmp[2] = walk_DW.D;
    tmp[1] = 1.0;
    tmp[3] = walk_DW.D;
    walk_findPolyCoeff_grq(tmp, walk_DW.hd3);

    //  posd,veld,accd
    // 'set_trajectories_f:38' PosD = [0, 0;
    // 'set_trajectories_f:39'     0.6, 0.05
    // 'set_trajectories_f:40'     1, 0];
    // 'set_trajectories_f:41' VelD = [0, 0;
    // 'set_trajectories_f:42'     1, 0];
    // 'set_trajectories_f:43' hd4 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqh(walk_DW.hd4);

    //  posd,veld,accd
    // 'set_trajectories_f:45' hd12_des=0.1;
    //  x_ffoot_i
    // 'set_trajectories_f:46' PosD = [0, hd12_des; % x_ffoot_i
    // 'set_trajectories_f:47'     0.5, hd12_des;
    // 'set_trajectories_f:48'     1, hd12_des];
    // 'set_trajectories_f:49' VelD = [0, 0;
    // 'set_trajectories_f:50'     1, 0];
    // 'set_trajectories_f:51' hd12 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhn(walk_DW.hd12);

    //  posd,veld,accd
    // 'set_trajectories_f:54' PosD = [0, 0;
    // 'set_trajectories_f:55'     1, 0];
    // 'set_trajectories_f:56' VelD = [0, 0;
    // 'set_trajectories_f:57'     1, 0];
    // 'set_trajectories_f:58' hd5 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd5);

    //  posd,veld,accd
    // 'set_trajectories_f:59' hd6 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd6);

    //  posd,veld,accd
    // 'set_trajectories_f:60' hd7 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd7);

    //  posd,veld,accd
    // 'set_trajectories_f:61' hd8 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd8);

    //  posd,veld,accd
    // 'set_trajectories_f:62' hd9 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd9);

    //  posd,veld,accd
    // 'set_trajectories_f:63' hd10 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd10);

    //  posd,veld,accd
    // 'set_trajectories_f:64' hd11 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd11);

    //  posd,veld,accd
    // 'set_trajectories_f:65' hd13 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd13);

    //  posd,veld,accd
    // 'set_trajectories_f:66' hd14 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd14);

    //  posd,veld,accd
    // 'set_trajectories_f:69' PosD = [0, -0.4;
    // 'set_trajectories_f:70'     0.5, -0.4;
    // 'set_trajectories_f:71'     1, -0.4];
    // 'set_trajectories_f:72' VelD = [0, 0;
    // 'set_trajectories_f:73'     1, 0];
    // 'set_trajectories_f:74' hd18 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngb(walk_DW.hd18);

    //  posd,veld,accd
    // 'set_trajectories_f:75' hd25 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngb(walk_DW.hd25);

    //  posd,veld,accd
    // 'set_trajectories_f:77' PosD = [0, -0.26;
    // 'set_trajectories_f:78'     1, -0.26];
    // 'set_trajectories_f:79' VelD = [0, 0;
    // 'set_trajectories_f:80'     1, 0];
    // 'set_trajectories_f:81' hd15 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngbg(walk_DW.hd15);

    //  posd,veld,accd
    // 'set_trajectories_f:82' PosD = [0, 0.26;
    // 'set_trajectories_f:83'     1, 0.26];
    // 'set_trajectories_f:84' VelD = [0, 0;
    // 'set_trajectories_f:85'     1, 0];
    // 'set_trajectories_f:86' hd22 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngbgf(walk_DW.hd22);

    //  posd,veld,accd
    // 'set_trajectories_f:89' PosD = [0, -0.17;
    // 'set_trajectories_f:90'     1, -0.17];
    // 'set_trajectories_f:91' VelD = [0, 0;
    // 'set_trajectories_f:92'     1, 0];
    // 'set_trajectories_f:93' hd16 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngbgfj(walk_DW.hd16);

    //  posd,veld,accd
    // 'set_trajectories_f:94' PosD = [0, 0.17;
    // 'set_trajectories_f:95'     1, 0.17];
    // 'set_trajectories_f:96' VelD = [0, 0;
    // 'set_trajectories_f:97'     1, 0];
    // 'set_trajectories_f:98' hd23 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngbgfj2(walk_DW.hd23);

    //  posd,veld,accd
    // 'set_trajectories_f:101' PosD = [0, 0;
    // 'set_trajectories_f:102'     1, 0];
    // 'set_trajectories_f:103' VelD = [0, 0;
    // 'set_trajectories_f:104'     1, 0];
    // 'set_trajectories_f:105' hd17 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd17);

    //  posd,veld,accd
    // 'set_trajectories_f:106' hd24 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd24);

    //  posd,veld,accd
    // 'set_trajectories_f:107' hd19 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd19);

    //  posd,veld,accd
    // 'set_trajectories_f:108' hd26 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd26);

    //  posd,veld,accd
    // 'set_trajectories_f:109' hd20 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd20);

    //  posd,veld,accd
    // 'set_trajectories_f:110' hd27 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhng(walk_DW.hd27);

    //  posd,veld,accd
    // 'set_trajectories_f:112' PosD = [0, 0.1;
    // 'set_trajectories_f:113'     1, 0.1];
    // 'set_trajectories_f:114' VelD = [0, 0;
    // 'set_trajectories_f:115'     1, 0];
    // 'set_trajectories_f:116' hd21 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngbgfj2r(walk_DW.hd21);

    //  posd,veld,accd
    // 'set_trajectories_f:117' hd28 = findPolyCoeff(PosD,VelD,VelD);
    walk_findPolyCoeff_grqhngbgfj2r(walk_DW.hd28);

    //  posd,veld,accd
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::wal_findPolyCoeff_grqhngbgfj2rs(const real_T posd[6],
    real_T Coeff[8])
  {
    real_T A[64];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const real_T veld[6] = { 0.0, 0.5, 1.0, 0.0, 0.0, 0.0 };

    static const int8_T accd[4] = { 0, 1, 0, 0 };

    int32_T tmp;
    int32_T tmp_0;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = posd[0];
    result_data[3] = 0.0;
    result_data[1] = posd[1];
    result_data[4] = 0.5;
    result_data[2] = posd[2];
    result_data[5] = 1.0;
    result_data[6] = 0.0;
    result_data[7] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    if (walk_sortLE(result_data, 7, 8)) {
      idx_data[6] = 7;
      idx_data[7] = 8;
    } else {
      idx_data[6] = 8;
      idx_data[7] = 7;
    }

    d_i = 2;
    while (d_i < 8) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 9) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 9) {
          qEnd = 9;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          tmp = idx_data[q - 1];
          tmp_0 = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp_0, tmp)) {
            iwork_data[c_k] = tmp_0;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (d_i = 0; d_i < 8; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 8; d_i++) {
      result_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 8) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 8) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = std::abs(result_data[b_k] / 2.0);
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(result_data[b_k] - result_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      result_data[d_i - 1] = result_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, sizeof(real_T) << 6U);

    // 'findPolyCoeff:107' b = zeros(n,1);
    memset(&Coeff[0], 0, sizeof(real_T) << 3U);

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = result_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 8; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = pow(x, 7.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = posd[3 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 7; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = pow(x, (7.0 + -static_cast<real_T>(k0)) - 1.0) * (7.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == accd[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          col = 1.0;

          // 'findPolyCoeff:136' for i=n-1:-1:2
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = static_cast<real_T>(((7 - k0) * (6 - k0))) * pow(x, (7.0 +
              -static_cast<real_T>(k0)) - 2.0);

            // 'findPolyCoeff:138' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::wa_findPolyCoeff_grqhngbgfj2rsh(const real_T posd[6],
    const real_T veld[4], real_T Coeff[5])
  {
    real_T A[25];
    real_T row;
    real_T col;
    real_T result_data[5];
    int32_T b_k;
    real_T b_data[8];
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    int8_T ipiv[5];
    int32_T ix;
    real_T s;
    int32_T c_ix;
    int32_T tmp;
    int32_T A_tmp_tmp;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    result_data[0] = posd[0];
    result_data[1] = posd[1];
    result_data[2] = posd[2];
    result_data[3] = veld[0];
    result_data[4] = veld[1];

    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    for (A_tmp_tmp = 0; A_tmp_tmp < 5; A_tmp_tmp++) {
      idx_data[A_tmp_tmp] = 0;
    }

    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    idx_data[4] = 5;
    c_i = 2;
    while (c_i < 5) {
      b_k = c_i << 1;
      ix = 1;
      pEnd = 1 + c_i;
      while (pEnd < 6) {
        p = ix;
        q = pEnd;
        qEnd = ix + b_k;
        if (qEnd > 6) {
          qEnd = 6;
        }

        c_ix = 0;
        kEnd = qEnd - ix;
        while (c_ix + 1 <= kEnd) {
          A_tmp_tmp = idx_data[q - 1];
          tmp = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp, A_tmp_tmp)) {
            iwork_data[c_ix] = tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_ix++;
                iwork_data[c_ix] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_ix] = A_tmp_tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_ix++;
                iwork_data[c_ix] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_ix++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[ix + pEnd] = iwork_data[pEnd + 1];
        }

        ix = qEnd;
        pEnd = qEnd + c_i;
      }

      c_i = b_k;
    }

    for (A_tmp_tmp = 0; A_tmp_tmp < 5; A_tmp_tmp++) {
      b_data[A_tmp_tmp] = result_data[A_tmp_tmp];
    }

    for (c_i = 0; c_i < 5; c_i++) {
      ycol_data[c_i] = result_data[idx_data[c_i] - 1];
    }

    for (c_i = 0; c_i < 5; c_i++) {
      b_data[c_i] = ycol_data[c_i];
    }

    c_i = 0;
    b_k = 0;
    while (b_k + 1 <= 5) {
      ix = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 5) {
          exitg1 = 1;
        } else {
          b_p = false;
          s = std::abs(b_data[b_k] / 2.0);
          if (s <= 2.2250738585072014E-308) {
            s = 4.94065645841247E-324;
          } else {
            frexp(s, &c);
            s = std::ldexp(1.0, c - 53);
          }

          if (std::abs(b_data[b_k] - b_data[ix]) >= s) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      c_i++;
      b_data[c_i - 1] = b_data[ix];
    }

    if (1 > c_i) {
      c = 0;
    } else {
      c = c_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 25U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    for (c_i = 0; c_i < 5; c_i++) {
      Coeff[c_i] = 0.0;
    }

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (c_i = 0; c_i < c; c_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      s = b_data[c_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (s == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (ix = 0; ix < 5; ix++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + 5 * (static_cast<int32_T>(col) - 1))
              - 1] = pow(s, 4.0 + -static_cast<real_T>(ix));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = posd[3 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (s == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          // 'findPolyCoeff:125' for i=n-1:-1:1
          // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
          A_tmp_tmp = static_cast<int32_T>(row);
          ix = A_tmp_tmp - 1;
          A[ix] = 4.0 * pow(s, 3.0);

          // 'findPolyCoeff:127' col = col + 1;
          // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
          A[A_tmp_tmp + 4] = 3.0 * pow(s, 2.0);

          // 'findPolyCoeff:127' col = col + 1;
          // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
          A[A_tmp_tmp + 9] = 2.0 * pow(s, 1.0);

          // 'findPolyCoeff:127' col = col + 1;
          // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
          A[A_tmp_tmp + 14] = pow(s, 0.0);

          // 'findPolyCoeff:127' col = col + 1;
          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[ix] = veld[2 + b_k];

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    for (A_tmp_tmp = 0; A_tmp_tmp < 5; A_tmp_tmp++) {
      ipiv[A_tmp_tmp] = static_cast<int8_T>((1 + A_tmp_tmp));
    }

    for (c = 0; c < 4; c++) {
      c_i = c * 6;
      b_k = 0;
      ix = c_i;
      row = std::abs(A[c_i]);
      for (qEnd = 2; qEnd <= 5 - c; qEnd++) {
        ix++;
        s = std::abs(A[ix]);
        if (s > row) {
          b_k = qEnd - 1;
          row = s;
        }
      }

      if (A[c_i + b_k] != 0.0) {
        if (b_k != 0) {
          b_k += c;
          ipiv[c] = static_cast<int8_T>((b_k + 1));
          ix = c;
          for (qEnd = 0; qEnd < 5; qEnd++) {
            row = A[ix];
            A[ix] = A[b_k];
            A[b_k] = row;
            ix += 5;
            b_k += 5;
          }
        }

        b_k = (c_i - c) + 5;
        for (ix = c_i + 1; ix < b_k; ix++) {
          A[ix] /= A[c_i];
        }
      }

      b_k = c_i;
      ix = c_i + 5;
      for (qEnd = 0; qEnd <= 3 - c; qEnd++) {
        row = A[ix];
        if (A[ix] != 0.0) {
          c_ix = c_i + 1;
          kEnd = (b_k - c) + 10;
          for (pEnd = 6 + b_k; pEnd < kEnd; pEnd++) {
            A[pEnd] += A[c_ix] * -row;
            c_ix++;
          }
        }

        ix += 5;
        b_k += 5;
      }
    }

    if (ipiv[0] != 1) {
      row = Coeff[0];
      c = ipiv[0] - 1;
      Coeff[0] = Coeff[c];
      Coeff[c] = row;
    }

    if (ipiv[1] != 2) {
      row = Coeff[1];
      c = ipiv[1] - 1;
      Coeff[1] = Coeff[c];
      Coeff[c] = row;
    }

    if (ipiv[2] != 3) {
      row = Coeff[2];
      c = ipiv[2] - 1;
      Coeff[2] = Coeff[c];
      Coeff[c] = row;
    }

    if (ipiv[3] != 4) {
      row = Coeff[3];
      c = ipiv[3] - 1;
      Coeff[3] = Coeff[c];
      Coeff[c] = row;
    }

    for (c = 0; c < 5; c++) {
      c_i = 5 * c;
      if (Coeff[c] != 0.0) {
        for (b_k = c + 1; b_k + 1 < 6; b_k++) {
          Coeff[b_k] -= A[b_k + c_i] * Coeff[c];
        }
      }
    }

    for (c = 4; c >= 0; c--) {
      c_i = 5 * c;
      if (Coeff[c] != 0.0) {
        Coeff[c] /= A[c + c_i];
        for (b_k = 0; b_k < c; b_k++) {
          Coeff[b_k] -= A[b_k + c_i] * Coeff[c];
        }
      }
    }

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function set_trajectory_last_f(X)
  //
  void walkModelClass::walk_set_trajectory_last_f(const real_T b_X[4])
  {
    int32_T k;
    real_T c_y;
    real_T d_y;
    real_T tmp[4];
    real_T tmp_0[4];
    real_T tmp_1[6];
    real_T b_y_tmp;

    // 'set_trajectory_last_f:2' set_trajectories_f()
    walk_set_trajectories_f();

    // 'set_trajectory_last_f:5' x=xyT_end(1);
    // 'set_trajectory_last_f:6' y=xyT_end(2);
    // 'set_trajectory_last_f:7' T_des=xyT_end(3);
    walk_DW.T_des = walk_DW.xyT_end[2];

    // 'set_trajectory_last_f:9' Dx=X(3);
    // 'set_trajectory_last_f:10' Dy=X(4);
    // 'set_trajectory_last_f:11' xf=S/2+Dx;
    // 'set_trajectory_last_f:12' yf=D/2+Dy;
    // 'set_trajectory_last_f:13' xpf=X(1);
    // 'set_trajectory_last_f:14' ypf=X(2);
    //  x_ffoot_i
    // 'set_trajectory_last_f:16' PosD = [0, -S; % x_ffoot_i
    // 'set_trajectory_last_f:17'     0.5, -S/2;
    // 'set_trajectory_last_f:18'     1, 0];
    // 'set_trajectory_last_f:19' VelD = [0, 0;
    // 'set_trajectory_last_f:20'     1, 0];
    // 'set_trajectory_last_f:21' hd2 = findPolyCoeff(PosD,VelD,VelD);
    tmp_1[0] = 0.0;
    tmp_1[3] = -walk_DW.S;
    tmp_1[1] = 0.5;
    tmp_1[4] = -walk_DW.S / 2.0;
    tmp_1[2] = 1.0;
    tmp_1[5] = 0.0;
    walk_findPolyCoeff_gr(tmp_1, walk_DW.hd2);

    //  posd,veld,accd
    //  x_ffoot_i
    // 'set_trajectory_last_f:23' PosD = [0, polyval(hd1,0); % x_ffoot_i
    // 'set_trajectory_last_f:24'     0.5, polyval(hd1,0);
    // 'set_trajectory_last_f:25'     1, polyval(hd1,0)];
    b_y_tmp = walk_DW.hd1[0];
    c_y = walk_DW.hd1[0];
    d_y = walk_DW.hd1[0];
    for (k = 0; k < 7; k++) {
      b_y_tmp = walk_DW.hd1[k + 1];
      c_y = b_y_tmp;
      d_y = b_y_tmp;
    }

    // 'set_trajectory_last_f:26' VelD = [0, 0;
    // 'set_trajectory_last_f:27'     0.5, 0;
    // 'set_trajectory_last_f:28'     1, 0];
    // 'set_trajectory_last_f:29' AccD = [0, 0;
    // 'set_trajectory_last_f:30'     1, 0];
    // 'set_trajectory_last_f:31' hd1 = findPolyCoeff(PosD,VelD,AccD);
    tmp_1[0] = 0.0;
    tmp_1[3] = b_y_tmp;
    tmp_1[1] = 0.5;
    tmp_1[4] = c_y;
    tmp_1[2] = 1.0;
    tmp_1[5] = d_y;
    wal_findPolyCoeff_grqhngbgfj2rs(tmp_1, walk_DW.hd1);

    //  posd,veld,accd
    // 'set_trajectory_last_f:34' PosD=[0, xf-S;
    // 'set_trajectory_last_f:35'     0.5, 0.015;
    // 'set_trajectory_last_f:36'     1, x];
    // 'set_trajectory_last_f:37' VelD=[0, xpf*T_des;
    // 'set_trajectory_last_f:38'     1, 0];
    // 'set_trajectory_last_f:39' x_coeff=  findPolyCoeff(PosD,VelD,[]);
    tmp_1[0] = 0.0;
    tmp_1[3] = (walk_DW.S / 2.0 + b_X[2]) - walk_DW.S;
    tmp_1[2] = 1.0;
    tmp_1[5] = walk_DW.xyT_end[0];
    tmp_0[0] = 0.0;
    tmp_0[2] = b_X[0] * walk_DW.T_des;
    tmp_1[1] = 0.5;
    tmp_0[1] = 1.0;
    tmp_1[4] = 0.015;
    tmp_0[3] = 0.0;
    wa_findPolyCoeff_grqhngbgfj2rsh(tmp_1, tmp_0, walk_DW.x_coeff);

    //  posd,veld,accd
    // 'set_trajectory_last_f:41' PosD=[0, D-yf;
    // 'set_trajectory_last_f:42'     1, y];
    // 'set_trajectory_last_f:43' VelD=[0, -ypf*T_des;
    // 'set_trajectory_last_f:44'     1, 0];
    // 'set_trajectory_last_f:45' y_coeff=  findPolyCoeff(PosD,VelD,[]);
    tmp_0[0] = 0.0;
    tmp_0[2] = walk_DW.D - (walk_DW.D / 2.0 + b_X[3]);
    tmp_0[1] = 1.0;
    tmp_0[3] = walk_DW.xyT_end[1];
    tmp[0] = 0.0;
    tmp[2] = -b_X[1] * walk_DW.T_des;
    tmp[1] = 1.0;
    tmp[3] = 0.0;
    walk_findPolyCoeff(tmp_0, tmp, walk_DW.y_coeff);

    //  posd,veld,accd
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  void walkModelClass::walk_polyder_i(const real_T u[8], real_T a_data[],
    int32_T a_size[2])
  {
    int32_T nlead0;
    int32_T b_k;
    nlead0 = 0;
    b_k = 0;
    while ((b_k < 6) && (u[b_k] == 0.0)) {
      nlead0++;
      b_k++;
    }

    a_size[0] = 1;
    a_size[1] = 7 - nlead0;
    for (b_k = 0; b_k <= 6 - nlead0; b_k++) {
      a_data[b_k] = u[b_k + nlead0];
    }

    nlead0 = a_size[1] - 2;
    for (b_k = 0; b_k <= nlead0; b_k++) {
      a_data[b_k] *= static_cast<real_T>(((nlead0 - b_k) + 1)) + 1.0;
    }
  }

  // Function for MATLAB Function: '<Root>/gait_update'
  real_T walkModelClass::walk_polyval_kcwq(const real_T p_data[], const int32_T
    p_size[2])
  {
    real_T y;
    int32_T k;
    if (p_size[1] != 0) {
      y = p_data[0];
      for (k = 0; k <= p_size[1] - 2; k++) {
        y = 0.5 * y + p_data[k + 1];
      }
    }

    return y;
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::w_findPolyCoeff_grqhngbgfj2rsh1(const real_T posd[6],
    real_T Coeff[3])
  {
    real_T A[9];
    real_T b[3];
    real_T row;
    int32_T b_k;
    real_T b_b_data[8];
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T b_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    int32_T r1;
    real_T a21;
    int32_T rtemp;
    int32_T tmp;
    int32_T tmp_0;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    if (walk_sortLE(&posd[0], 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    idx_data[2] = 3;
    b_i = 1;
    pEnd = 3;
    while (pEnd < 4) {
      p = b_i;
      q = pEnd;
      b_k = b_i + 4;
      if (b_i + 4 > 4) {
        b_k = 4;
      }

      rtemp = 0;
      kEnd = b_k - b_i;
      while (rtemp + 1 <= kEnd) {
        tmp = idx_data[q - 1];
        tmp_0 = idx_data[p - 1];
        if (walk_sortLE(&posd[0], tmp_0, tmp)) {
          iwork_data[rtemp] = tmp_0;
          p++;
          if (p == pEnd) {
            while (q < b_k) {
              rtemp++;
              iwork_data[rtemp] = idx_data[q - 1];
              q++;
            }
          }
        } else {
          iwork_data[rtemp] = tmp;
          q++;
          if (q == b_k) {
            while (p < pEnd) {
              rtemp++;
              iwork_data[rtemp] = idx_data[p - 1];
              p++;
            }
          }
        }

        rtemp++;
      }

      for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
        idx_data[b_i + pEnd] = iwork_data[pEnd + 1];
      }

      b_i = b_k;
      pEnd = b_k + 2;
    }

    b_b_data[0] = posd[0];
    b_b_data[1] = posd[1];
    b_b_data[2] = posd[2];
    for (b_i = 0; b_i < 3; b_i++) {
      ycol_data[b_i] = posd[idx_data[b_i] - 1];
    }

    for (b_i = 0; b_i < 3; b_i++) {
      b_b_data[b_i] = ycol_data[b_i];
    }

    b_i = 0;
    b_k = 0;
    while (b_k + 1 <= 3) {
      rtemp = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 3) {
          exitg1 = 1;
        } else {
          b_p = false;
          a21 = std::abs(b_b_data[b_k] / 2.0);
          if (a21 <= 2.2250738585072014E-308) {
            a21 = 4.94065645841247E-324;
          } else {
            frexp(a21, &r1);
            a21 = std::ldexp(1.0, r1 - 53);
          }

          if (std::abs(b_b_data[b_k] - b_b_data[rtemp]) >= a21) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      b_i++;
      b_b_data[b_i - 1] = b_b_data[rtemp];
    }

    if (1 > b_i) {
      r1 = 0;
    } else {
      r1 = b_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, 9U * sizeof(real_T));

    // 'findPolyCoeff:107' b = zeros(n,1);
    b[0] = 0.0;
    b[1] = 0.0;
    b[2] = 0.0;

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (b_i = 0; b_i < r1; b_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      a21 = b_b_data[b_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (a21 == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          // 'findPolyCoeff:114' for i=n-1:-1:0
          // 'findPolyCoeff:115' A(row,col) = x^i;
          pEnd = static_cast<int32_T>(row);
          rtemp = pEnd - 1;
          A[rtemp] = pow(a21, 2.0);

          // 'findPolyCoeff:116' col = col + 1;
          // 'findPolyCoeff:115' A(row,col) = x^i;
          A[pEnd + 2] = pow(a21, 1.0);

          // 'findPolyCoeff:116' col = col + 1;
          // 'findPolyCoeff:115' A(row,col) = x^i;
          A[pEnd + 5] = pow(a21, 0.0);

          // 'findPolyCoeff:116' col = col + 1;
          // 'findPolyCoeff:118' b(row) = posd(j,2);
          b[rtemp] = posd[3 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      // 'findPolyCoeff:133' for j=1:RowAcc
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    r1 = 0;
    b_i = 1;
    b_k = 2;
    row = std::abs(A[0]);
    a21 = std::abs(A[1]);
    if (a21 > row) {
      row = a21;
      r1 = 1;
      b_i = 0;
    }

    if (std::abs(A[2]) > row) {
      r1 = 2;
      b_i = 1;
      b_k = 0;
    }

    A[b_i] /= A[r1];
    A[b_k] /= A[r1];
    A[3 + b_i] -= A[3 + r1] * A[b_i];
    A[3 + b_k] -= A[3 + r1] * A[b_k];
    A[6 + b_i] -= A[6 + r1] * A[b_i];
    A[6 + b_k] -= A[6 + r1] * A[b_k];
    if (std::abs(A[3 + b_k]) > std::abs(A[3 + b_i])) {
      rtemp = b_i;
      b_i = b_k;
      b_k = rtemp;
    }

    A[3 + b_k] /= A[3 + b_i];
    A[6 + b_k] -= A[3 + b_k] * A[6 + b_i];
    Coeff[1] = b[b_i] - b[r1] * A[b_i];
    Coeff[2] = (b[b_k] - b[r1] * A[b_k]) - A[3 + b_k] * Coeff[1];
    Coeff[2] /= A[6 + b_k];
    Coeff[0] = b[r1] - A[6 + r1] * Coeff[2];
    Coeff[1] -= A[6 + b_i] * Coeff[2];
    Coeff[1] /= A[3 + b_i];
    Coeff[0] -= A[3 + r1] * Coeff[1];
    Coeff[0] /= A[r1];

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Coeff = findPolyCoeff(posd,veld,accd)
  //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *
  //
  void walkModelClass::w_findPolyCoeff_a(const real_T posd[6], const real_T
    veld[6], real_T Coeff[8])
  {
    real_T A[64];
    real_T row;
    real_T x;
    real_T col;
    real_T result_data[8];
    int32_T b_k;
    int32_T k0;
    int32_T c;
    int32_T idx_data[8];
    int32_T iwork_data[8];
    int32_T c_k;
    int32_T d_i;
    int32_T pEnd;
    int32_T p;
    int32_T q;
    int32_T qEnd;
    int32_T kEnd;
    real_T ycol_data[8];
    boolean_T b_p;
    static const int8_T accd[4] = { 0, 1, 0, 0 };

    int32_T tmp;
    int32_T tmp_0;
    int32_T exitg1;

    //  Author: Victor de Leon
    //  Creation: 13/jan/2018
    //  Last modification: -/-/-
    //      *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  Uncomment this line for using this file as a function:
    //  For posd, veld and accd the First column is the evaluation point and the second column is the 
    //  posd - > n1 x 2 matrix for desired positions at each specific evaluation points  
    //  veld - > n1 x 2 matrix for desired velocities at each specific evaluation points  
    //  accd - > n1 x 2 matrix for desired accelerations at each specific evaluation points  
    //  The coefficients are computed by means of
    //  A*Coeff = b
    //  where "A" is a n x n matrix and "b" a n-vector of desired positions, velocities and accelerations 
    //  % ============================================================================================== 
    //  % Coment the next (and the last part) for using this file as a function (and uncomment the above one) 
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  clear all;
    //  close all;
    //  clc;
    //  % NOTE that it is neccesary to give at least one point for desired position in order to get a solution  
    //  %      if not, rank(A) = n-1
    //
    //  % Example 1
    //  posd = [0, 5;
    //          1, 9;
    //          3,30;
    //          8, 8];
    //  veld = [0, 0;
    //          5, 20;
    //          8, 0];
    //  accd = [0, 0;
    //          1, 9;
    //          8, 0];
    //
    //  % Example 2 without taking into account acceleration
    //  % posd = [0, 5;
    //  %         8, 8];
    //  % veld = [0, 0;
    //  %         8, 0];
    //  % accd = [];
    //
    //  % Example 3 without taking into account velocity
    //  % posd = [0, 5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [0, 0;
    //  %         1, 9;
    //  %         8, 0];
    //
    //  % Example 4 without taking into account velocity and acceleration
    //  % posd = [0, 5;
    //  %         -1,-2;
    //  %         -18,5;
    //  %         3,30];
    //  % veld = [];
    //  % accd = [];
    //
    //  % % Example 5
    //  % posd = [0, 0;
    //  %         2, -2;
    //  %         3.6, 10;
    //  %         5.21, 14];
    //  % veld = [4, 12
    //  %        -4,-12];
    //  % accd = [6 0];
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
    //  Desired values
    // 'findPolyCoeff:74' [RowPos, ColPos] = size(posd);
    // 'findPolyCoeff:75' [RowVel, ColVel] = size(veld);
    // 'findPolyCoeff:76' [RowAcc, ColAcc] = size(accd);
    // 'findPolyCoeff:78' n = RowPos + RowVel + RowAcc;
    //  Number of Coefficients we need
    // 'findPolyCoeff:80' xAll = [];
    // 'findPolyCoeff:81' if ColPos == 2
    // 'findPolyCoeff:82' xAll = posd(:,1);
    // 'findPolyCoeff:88' if ColVel == 2
    // 'findPolyCoeff:89' xAll = [xAll;veld(:,1)];
    // 'findPolyCoeff:95' if ColAcc == 2
    // 'findPolyCoeff:96' xAll = [xAll;accd(:,1)];
    result_data[0] = posd[0];
    result_data[3] = veld[0];
    result_data[1] = posd[1];
    result_data[4] = veld[1];
    result_data[2] = posd[2];
    result_data[5] = veld[2];
    result_data[6] = 0.0;
    result_data[7] = 1.0;

    // 'findPolyCoeff:103' xAll = unique(xAll,'rows');
    if (walk_sortLE(result_data, 1, 2)) {
      idx_data[0] = 1;
      idx_data[1] = 2;
    } else {
      idx_data[0] = 2;
      idx_data[1] = 1;
    }

    if (walk_sortLE(result_data, 3, 4)) {
      idx_data[2] = 3;
      idx_data[3] = 4;
    } else {
      idx_data[2] = 4;
      idx_data[3] = 3;
    }

    if (walk_sortLE(result_data, 5, 6)) {
      idx_data[4] = 5;
      idx_data[5] = 6;
    } else {
      idx_data[4] = 6;
      idx_data[5] = 5;
    }

    if (walk_sortLE(result_data, 7, 8)) {
      idx_data[6] = 7;
      idx_data[7] = 8;
    } else {
      idx_data[6] = 8;
      idx_data[7] = 7;
    }

    d_i = 2;
    while (d_i < 8) {
      b_k = d_i << 1;
      k0 = 1;
      pEnd = 1 + d_i;
      while (pEnd < 9) {
        p = k0;
        q = pEnd;
        qEnd = k0 + b_k;
        if (qEnd > 9) {
          qEnd = 9;
        }

        c_k = 0;
        kEnd = qEnd - k0;
        while (c_k + 1 <= kEnd) {
          tmp = idx_data[q - 1];
          tmp_0 = idx_data[p - 1];
          if (walk_sortLE(result_data, tmp_0, tmp)) {
            iwork_data[c_k] = tmp_0;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[q - 1];
                q++;
              }
            }
          } else {
            iwork_data[c_k] = tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                c_k++;
                iwork_data[c_k] = idx_data[p - 1];
                p++;
              }
            }
          }

          c_k++;
        }

        for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
          idx_data[k0 + pEnd] = iwork_data[pEnd + 1];
        }

        k0 = qEnd;
        pEnd = qEnd + d_i;
      }

      d_i = b_k;
    }

    for (d_i = 0; d_i < 8; d_i++) {
      ycol_data[d_i] = result_data[idx_data[d_i] - 1];
    }

    for (d_i = 0; d_i < 8; d_i++) {
      result_data[d_i] = ycol_data[d_i];
    }

    d_i = 0;
    b_k = 0;
    while (b_k + 1 <= 8) {
      k0 = b_k;
      do {
        exitg1 = 0;
        b_k++;
        if (b_k + 1 > 8) {
          exitg1 = 1;
        } else {
          b_p = false;
          x = std::abs(result_data[b_k] / 2.0);
          if (x <= 2.2250738585072014E-308) {
            x = 4.94065645841247E-324;
          } else {
            frexp(x, &c);
            x = std::ldexp(1.0, c - 53);
          }

          if (std::abs(result_data[b_k] - result_data[k0]) >= x) {
            b_p = true;
          }

          if (b_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      d_i++;
      result_data[d_i - 1] = result_data[k0];
    }

    if (1 > d_i) {
      c = 0;
    } else {
      c = d_i;
    }

    //  We arrange a vector for all the points we are going to create the polynomials 
    // 'findPolyCoeff:104' nPoints = numel(xAll);
    // 'findPolyCoeff:106' A = zeros(n,n);
    memset(&A[0], 0, sizeof(real_T) << 6U);

    // 'findPolyCoeff:107' b = zeros(n,1);
    memset(&Coeff[0], 0, sizeof(real_T) << 3U);

    // 'findPolyCoeff:108' row = 1;
    row = 1.0;

    // 'findPolyCoeff:109' for k=1:nPoints
    for (d_i = 0; d_i < c; d_i++) {
      // 'findPolyCoeff:110' x = xAll(k);
      x = result_data[d_i];

      // 'findPolyCoeff:111' for j=1:RowPos
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:112' if x == posd(j,1)
        if (x == posd[b_k]) {
          // 'findPolyCoeff:113' col = 1;
          col = 1.0;

          // 'findPolyCoeff:114' for i=n-1:-1:0
          for (k0 = 0; k0 < 8; k0++) {
            // 'findPolyCoeff:115' A(row,col) = x^i;
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = pow(x, 7.0 + -static_cast<real_T>(k0));

            // 'findPolyCoeff:116' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:118' b(row) = posd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = posd[3 + b_k];

          // 'findPolyCoeff:119' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:122' for j=1:RowVel
      for (b_k = 0; b_k < 3; b_k++) {
        // 'findPolyCoeff:123' if x == veld(j,1)
        if (x == veld[b_k]) {
          // 'findPolyCoeff:124' col = 1;
          col = 1.0;

          // 'findPolyCoeff:125' for i=n-1:-1:1
          for (k0 = 0; k0 < 7; k0++) {
            // 'findPolyCoeff:126' A(row,col) = i*x^(i-1);
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = pow(x, (7.0 + -static_cast<real_T>(k0)) - 1.0) * (7.0 +
              -static_cast<real_T>(k0));

            // 'findPolyCoeff:127' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:129' b(row) = veld(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = veld[3 + b_k];

          // 'findPolyCoeff:130' row = row + 1;
          row++;
        }
      }

      // 'findPolyCoeff:133' for j=1:RowAcc
      for (b_k = 0; b_k < 2; b_k++) {
        // 'findPolyCoeff:134' if x == accd(j,1)
        if (x == accd[b_k]) {
          // 'findPolyCoeff:135' col = 1;
          col = 1.0;

          // 'findPolyCoeff:136' for i=n-1:-1:2
          for (k0 = 0; k0 < 6; k0++) {
            // 'findPolyCoeff:137' A(row,col) = i*(i-1)*x^(i-2);
            A[(static_cast<int32_T>(row) + ((static_cast<int32_T>(col) - 1) << 3))
              - 1] = static_cast<real_T>(((7 - k0) * (6 - k0))) * pow(x, (7.0 +
              -static_cast<real_T>(k0)) - 2.0);

            // 'findPolyCoeff:138' col = col + 1;
            col++;
          }

          // 'findPolyCoeff:140' b(row) = accd(j,2);
          Coeff[static_cast<int32_T>(row) - 1] = 0.0;

          // 'findPolyCoeff:141' row = row + 1;
          row++;
        }
      }
    }

    // 'findPolyCoeff:147' Coeff = linsolve(A,b);
    walk_linsolve(A, Coeff);

    //  we can simply use "inv(A)*b;".
    //  % ============================================================================================== 
    //  % TEST: Coment this last part for using this file as a function
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % build trajectories
    //  xt = xAll(1):0.001:xAll(end);
    //  samples = length(xt);
    //  yt = zeros(1,samples);
    //  ypt = zeros(1,samples);
    //  yppt = zeros(1,samples);
    //  for i=1:samples
    //      yt(i) = polyval(Coeff,xt(i));
    //      ypt(i) = polyval(polyder(Coeff),xt(i));
    //      yppt(i) = polyval(polyder(polyder(Coeff)),xt(i));
    //  end
    //
    //  figure (1)
    //  subplot(3,1,1)
    //  for i=1:RowPos
    //      plot(posd(i,1),posd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yt,'b')
    //  ylabel('Position');
    //  subplot(3,1,2)
    //  for i=1:RowVel
    //      plot(veld(i,1),veld(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,ypt,'b')
    //  ylabel('Velocity');
    //  subplot(3,1,3)
    //  for i=1:RowAcc
    //      plot(accd(i,1),accd(i,2),'ro');
    //      hold on
    //  end
    //  plot(xt,yppt,'b')
    //  ylabel('Acceleration');
    //  %     *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *     
    //  % ============================================================================================ 
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function update_gait(Names,value)
  //
  void walkModelClass::walk_update_gait(real_T value[9])
  {
    real_T hd1_pos_phi_ini;
    real_T hd4_pos_phi_int;
    real_T hd12_pos_phi_ini;
    real_T hd18_pos_phi_ini;
    real_T hd25_pos_phi_ini;
    int32_T k;
    real_T tmp[6];
    real_T tmp_0[6];

    // 'update_gait:3' if length(Names)~=length(value)
    // set_trajectories_f()
    //  Getting initial values
    // 'update_gait:14' hd1_pos_phi_ini=polyval(hd1,0);
    hd1_pos_phi_ini = walk_DW.hd1[0];
    for (k = 0; k < 7; k++) {
      hd1_pos_phi_ini = walk_DW.hd1[k + 1];
    }

    // 'update_gait:15' hd1_pos_phi_int=polyval(hd1,0.5);
    // 'update_gait:16' hd1_phi_pos_int=0.5;
    // 'update_gait:17' hd1_vel_phi_int=polyval(polyder(hd1),0.5);
    // 'update_gait:19' hd2_pos_phi_int=polyval(hd2,0.5);
    // 'update_gait:21' hd4_pos_phi_int=polyval(hd4,0.6);
    hd4_pos_phi_int = walk_DW.hd4[0];

    // 'update_gait:22' hd4_phi_pos_int=0.6;
    // 'update_gait:24' hd12_pos_phi_ini=polyval(hd12,0);
    hd12_pos_phi_ini = walk_DW.hd12[0];

    // 'update_gait:25' hd12_pos_phi_int=polyval(hd12,0.5);
    // 'update_gait:27' hd18_pos_phi_ini=polyval(hd18,0);
    hd18_pos_phi_ini = walk_DW.hd18[0];

    // 'update_gait:28' hd18_pos_phi_int=polyval(hd18,0.5);
    // 'update_gait:30' hd25_pos_phi_ini=polyval(hd25,0);
    hd25_pos_phi_ini = walk_DW.hd25[0];
    for (k = 0; k < 6; k++) {
      hd4_pos_phi_int = 0.6 * hd4_pos_phi_int + walk_DW.hd4[k + 1];
      hd12_pos_phi_ini = walk_DW.hd12[k + 1];
      hd18_pos_phi_ini = walk_DW.hd18[k + 1];
      hd25_pos_phi_ini = walk_DW.hd25[k + 1];
    }

    // 'update_gait:31' hd25_pos_phi_int=polyval(hd25,0.5);
    //  Getting new values
    // 'update_gait:36' for k=1:length(value)
    // 'update_gait:37' if size(Names{k})==size('hd1_pos_phi_int')
    // 'update_gait:38' if Names{k}=='hd1_pos_phi_int'
    // 'update_gait:39' hd1_pos_phi_int=value(k);
    // 'update_gait:42' if size(Names{k})==size('hd1_phi_pos_int')
    // 'update_gait:43' if Names{k}=='hd1_phi_pos_int'
    // 'update_gait:47' if size(Names{k})==size('hd1_vel_phi_int')
    // 'update_gait:48' if Names{k}=='hd1_vel_phi_int'
    // 'update_gait:52' if size(Names{k})==size('hd2_pos_phi_int')
    // 'update_gait:53' if Names{k}=='hd2_pos_phi_int'
    // 'update_gait:57' if size(Names{k})==size('hd4_pos_phi_int')
    // 'update_gait:58' if Names{k}=='hd4_pos_phi_int'
    // 'update_gait:62' if size(Names{k})==size('hd4_phi_pos_int')
    // 'update_gait:63' if Names{k}=='hd4_phi_pos_int'
    // 'update_gait:67' if size(Names{k})==size('hd12_pos_phi_int')
    // 'update_gait:72' if size(Names{k})==size('hd18_pos_phi_int')
    // 'update_gait:77' if size(Names{k})==size('hd25_pos_phi_int')
    // 'update_gait:82' if size(Names{k})==size('ZMPxCoeff')
    // 'update_gait:96' if size(Names{k})==size('ZMPyCoeff')
    // 'update_gait:64' hd4_phi_pos_int=value(k);
    // 'update_gait:68' if Names{k}=='hd12_pos_phi_int'
    // 'update_gait:69' hd12_pos_phi_int=value(k);
    // 'update_gait:73' if Names{k}=='hd18_pos_phi_int'
    // 'update_gait:78' if Names{k}=='hd25_pos_phi_int'
    // 'update_gait:74' hd18_pos_phi_int=value(k);
    // 'update_gait:79' hd25_pos_phi_int=value(k);
    // 'update_gait:54' hd2_pos_phi_int=value(k);
    // 'update_gait:49' hd1_vel_phi_int=value(k);
    // 'update_gait:83' if Names{k}=='ZMPxCoeff'
    // 'update_gait:84' if value(k)>0.05
    if (value[7] > 0.05) {
      // 'update_gait:85' value(k)=0.05;
      value[7] = 0.05;
    }

    // 'update_gait:87' if value(k)<-0.05
    if (value[7] < -0.05) {
      // 'update_gait:88' value(k)=-0.05;
      value[7] = -0.05;
    }

    // 'update_gait:90' PosD=[0,0;
    // 'update_gait:91'                 0.5, value(k);
    // 'update_gait:92'                 1,0];
    // 'update_gait:93' ZMPxCoeff=findPolyCoeff(PosD,[],[]);
    tmp_0[1] = 0.5;
    tmp_0[4] = value[7];
    tmp_0[0] = 0.0;
    tmp_0[2] = 1.0;
    tmp_0[3] = 0.0;
    tmp_0[5] = 0.0;
    w_findPolyCoeff_grqhngbgfj2rsh1(tmp_0, walk_DW.ZMPxCoeff);

    // 'update_gait:96' if size(Names{k})==size('ZMPyCoeff')
    // 'update_gait:97' if Names{k}=='ZMPyCoeff'
    // 'update_gait:37' if size(Names{k})==size('hd1_pos_phi_int')
    // 'update_gait:42' if size(Names{k})==size('hd1_phi_pos_int')
    // 'update_gait:47' if size(Names{k})==size('hd1_vel_phi_int')
    // 'update_gait:52' if size(Names{k})==size('hd2_pos_phi_int')
    // 'update_gait:57' if size(Names{k})==size('hd4_pos_phi_int')
    // 'update_gait:62' if size(Names{k})==size('hd4_phi_pos_int')
    // 'update_gait:67' if size(Names{k})==size('hd12_pos_phi_int')
    // 'update_gait:72' if size(Names{k})==size('hd18_pos_phi_int')
    // 'update_gait:77' if size(Names{k})==size('hd25_pos_phi_int')
    // 'update_gait:82' if size(Names{k})==size('ZMPxCoeff')
    // 'update_gait:83' if Names{k}=='ZMPxCoeff'
    // 'update_gait:98' if value(k)>0.05
    if (value[8] > 0.05) {
      // 'update_gait:99' value(k)=0.05;
      value[8] = 0.05;
    }

    // 'update_gait:101' if value(k)<-0.05
    if (value[8] < -0.05) {
      // 'update_gait:102' value(k)=-0.05;
      value[8] = -0.05;
    }

    // 'update_gait:104' PosD=[0,0;
    // 'update_gait:105'                 0.5, value(k);
    // 'update_gait:106'                 1,0];
    // 'update_gait:107' ZMPyCoeff=findPolyCoeff(PosD,[],[]);
    tmp_0[1] = 0.5;
    tmp_0[4] = value[8];
    tmp_0[0] = 0.0;
    tmp_0[2] = 1.0;
    tmp_0[3] = 0.0;
    tmp_0[5] = 0.0;
    w_findPolyCoeff_grqhngbgfj2rsh1(tmp_0, walk_DW.ZMPyCoeff);

    //  Updating
    //  x_ffoot_i
    // 'update_gait:114' PosD = [0, hd1_pos_phi_ini; % x_ffoot_i
    // 'update_gait:115'     hd1_phi_pos_int, hd1_pos_phi_int;
    // 'update_gait:116'     1, hd1_pos_phi_ini];
    // 'update_gait:117' VelD = [0, 0;
    // 'update_gait:118'     0.5, hd1_vel_phi_int;
    // 'update_gait:119'     1, 0];
    // 'update_gait:120' AccD = [0, 0;
    // 'update_gait:121'     1, 0];
    // 'update_gait:122' hd1=findPolyCoeff(PosD,VelD,AccD);
    tmp_0[0] = 0.0;
    tmp_0[3] = hd1_pos_phi_ini;
    tmp_0[1] = 0.5;
    tmp_0[4] = value[0];
    tmp_0[2] = 1.0;
    tmp_0[5] = hd1_pos_phi_ini;
    tmp[1] = 0.5;
    tmp[4] = value[6];
    tmp[0] = 0.0;
    tmp[2] = 1.0;
    tmp[3] = 0.0;
    tmp[5] = 0.0;
    w_findPolyCoeff_a(tmp_0, tmp, walk_DW.hd1);

    //  x_ffoot_i
    // 'update_gait:124' PosD = [0, -S; % x_ffoot_i
    // 'update_gait:125'     0.5, hd2_pos_phi_int;
    // 'update_gait:126'     1, S];
    // 'update_gait:127' VelD = [0, 0;
    // 'update_gait:128'     1, 0];
    // 'update_gait:129' hd2=findPolyCoeff(PosD,VelD,VelD);
    tmp_0[0] = 0.0;
    tmp_0[3] = -walk_DW.S;
    tmp_0[1] = 0.5;
    tmp_0[4] = value[5];
    tmp_0[2] = 1.0;
    tmp_0[5] = walk_DW.S;
    walk_findPolyCoeff_gr(tmp_0, walk_DW.hd2);

    //  x_ffoot_i
    // 'update_gait:131' PosD = [0, 0; % x_ffoot_i
    // 'update_gait:132'     hd4_phi_pos_int, hd4_pos_phi_int;
    // 'update_gait:133'     1, 0];
    // 'update_gait:134' VelD = [0, 0;
    // 'update_gait:135'     1, 0];
    // 'update_gait:136' hd4=findPolyCoeff(PosD,VelD,VelD);
    tmp_0[1] = value[1];
    tmp_0[4] = hd4_pos_phi_int;
    tmp_0[0] = 0.0;
    tmp_0[2] = 1.0;
    tmp_0[3] = 0.0;
    tmp_0[5] = 0.0;
    walk_findPolyCoeff_gr(tmp_0, walk_DW.hd4);

    //  x_ffoot_i
    // 'update_gait:138' PosD = [0, hd12_pos_phi_ini; % x_ffoot_i
    // 'update_gait:139'     0.5, hd12_pos_phi_int;
    // 'update_gait:140'     1, hd12_pos_phi_ini];
    // 'update_gait:141' VelD = [0, 0;
    // 'update_gait:142'     1, 0];
    // 'update_gait:143' hd12=findPolyCoeff(PosD,VelD,VelD);
    tmp_0[0] = 0.0;
    tmp_0[3] = hd12_pos_phi_ini;
    tmp_0[1] = 0.5;
    tmp_0[4] = value[2];
    tmp_0[2] = 1.0;
    tmp_0[5] = hd12_pos_phi_ini;
    walk_findPolyCoeff_gr(tmp_0, walk_DW.hd12);

    //  x_ffoot_i
    // 'update_gait:145' PosD = [0, hd18_pos_phi_ini; % x_ffoot_i
    // 'update_gait:146'     0.5, hd18_pos_phi_int;
    // 'update_gait:147'     1, hd18_pos_phi_ini];
    // 'update_gait:148' VelD = [0, 0;
    // 'update_gait:149'     1, 0];
    // 'update_gait:150' hd18=findPolyCoeff(PosD,VelD,VelD);
    tmp_0[0] = 0.0;
    tmp_0[3] = hd18_pos_phi_ini;
    tmp_0[1] = 0.5;
    tmp_0[4] = value[3];
    tmp_0[2] = 1.0;
    tmp_0[5] = hd18_pos_phi_ini;
    walk_findPolyCoeff_gr(tmp_0, walk_DW.hd18);

    //  x_ffoot_i
    // 'update_gait:152' PosD = [0, hd25_pos_phi_ini; % x_ffoot_i
    // 'update_gait:153'     0.5, hd25_pos_phi_int;
    // 'update_gait:154'     1, hd25_pos_phi_ini];
    // 'update_gait:155' VelD = [0, 0;
    // 'update_gait:156'     1, 0];
    // 'update_gait:157' hd25=findPolyCoeff(PosD,VelD,VelD);
    tmp_0[0] = 0.0;
    tmp_0[3] = hd25_pos_phi_ini;
    tmp_0[1] = 0.5;
    tmp_0[4] = value[4];
    tmp_0[2] = 1.0;
    tmp_0[5] = hd25_pos_phi_ini;
    walk_findPolyCoeff_gr(tmp_0, walk_DW.hd25);
  }

  //
  // Function for MATLAB Function: '<Root>/gait_update'
  // function Correction_gait_K(X,K,Names,q_fin,qp_fin)
  //
  void walkModelClass::walk_Correction_gait_K(const real_T b_X[4], const real_T
    b_K[27], const real_T q_fin[30], const real_T qp_fin[30])
  {
    real_T dbeta[9];
    real_T value[9];
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T qfp[2];
    real_T b_data[7];
    real_T b_K_0[27];
    int32_T i;
    int32_T i_0;
    int32_T b_size[2];
    real_T CoM_idx_0;
    real_T CoM_idx_1;
    real_T CoM_idx_2;

    // 'Correction_gait_K:3' set_trajectories_f()
    walk_set_trajectories_f();

    //  Getting initial values
    // 'Correction_gait_K:9' hd1_pos_phi_ini=polyval(hd1,0);
    // 'Correction_gait_K:10' hd1_pos_phi_int=polyval(hd1,0.5);
    // 'Correction_gait_K:11' hd1_phi_pos_int=0.5;
    // 'Correction_gait_K:12' hd1_vel_phi_int=polyval(polyder(hd1),0.5);
    walk_polyder_i(walk_DW.hd1, b_data, b_size);

    // 'Correction_gait_K:14' hd2_pos_phi_int=polyval(hd2,0.5);
    // 'Correction_gait_K:16' hd4_pos_phi_int=polyval(hd4,0.6);
    // 'Correction_gait_K:17' hd4_phi_pos_int=0.6;
    // 'Correction_gait_K:19' hd12_pos_phi_ini=polyval(hd12,0);
    // 'Correction_gait_K:20' hd12_pos_phi_int=polyval(hd12,0.5);
    // 'Correction_gait_K:22' hd18_pos_phi_ini=polyval(hd18,0);
    // 'Correction_gait_K:23' hd18_pos_phi_int=polyval(hd18,0.5);
    // 'Correction_gait_K:25' hd25_pos_phi_ini=polyval(hd25,0);
    // 'Correction_gait_K:26' hd25_pos_phi_int=polyval(hd25,0.5);
    //
    // 'Correction_gait_K:30' T = DGM_TALOS_QY_xelo(q_fin);
    // 'Correction_gait_K:31' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_DGM_TALOS_QY_xelo(q_fin, walk_B.dv1);
    walk_compute2_com_xelo(walk_B.dv1, CoM, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_f);

    // 'Correction_gait_K:32' [qf, qfp] = free_dof_xelo(qp_fin,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    for (i = 0; i < 2; i++) {
      qfp[i] = 0.0;
      for (i_0 = 0; i_0 < 30; i_0++) {
        qfp[i] += J_CoM[3 * i_0 + i] * qp_fin[i_0];
      }
    }

    // [h,hp]=verif_h(q_fin,qp_fin);
    // 'Correction_gait_K:37' Dx_des=X(3);
    // 'Correction_gait_K:38' Dy_des=X(4);
    // 'Correction_gait_K:39' xp_des=X(1);
    // 'Correction_gait_K:40' yp_des=X(2);
    // 'Correction_gait_K:41' x_des=S/2+Dx_des;
    // 'Correction_gait_K:42' y_des=D/2+Dy_des;
    // 'Correction_gait_K:44' dx=[qf(1)-x_des;
    // 'Correction_gait_K:45'     qfp(1)-xp_des;
    // 'Correction_gait_K:46'     qfp(2)-yp_des;
    // 'Correction_gait_K:47'     ];
    // 'Correction_gait_K:50' dbeta=-K*dx;
    for (i = 0; i < 27; i++) {
      b_K_0[i] = -b_K[i];
    }

    CoM_idx_0 = CoM[0] - (walk_DW.S / 2.0 + b_X[2]);
    CoM_idx_1 = qfp[0] - b_X[0];
    CoM_idx_2 = qfp[1] - b_X[1];
    for (i = 0; i < 9; i++) {
      dbeta[i] = b_K_0[i + 18] * CoM_idx_2 + (b_K_0[i + 9] * CoM_idx_1 + b_K_0[i]
        * CoM_idx_0);
    }

    //  disp("dx = "+num2str(dx'))
    //  disp("dbeta = "+num2str(dbeta'))
    //  for k=1:length(Names)
    //      value(k)=eval(Names{k})+dbeta(k);
    //  end
    // 'Correction_gait_K:58' value=zeros(length(dbeta),1);
    // 'Correction_gait_K:59' value(1)=hd1_pos_phi_int+dbeta(1);
    value[0] = walk_polyval_an(walk_DW.hd1, 0.5) + dbeta[0];

    // 'Correction_gait_K:60' value(2)=hd4_phi_pos_int+dbeta(2);
    value[1] = 0.6 + dbeta[1];

    // 'Correction_gait_K:61' value(3)=hd12_pos_phi_int+dbeta(3);
    value[2] = walk_polyval_kc(walk_DW.hd12, 0.5) + dbeta[2];

    // 'Correction_gait_K:62' value(4)=hd18_pos_phi_int+dbeta(4);
    value[3] = walk_polyval_kc(walk_DW.hd18, 0.5) + dbeta[3];

    // 'Correction_gait_K:63' value(5)=hd25_pos_phi_int+dbeta(5);
    value[4] = walk_polyval_kc(walk_DW.hd25, 0.5) + dbeta[4];

    // 'Correction_gait_K:64' value(6)=hd2_pos_phi_int+dbeta(6);
    value[5] = walk_polyval_kc(walk_DW.hd2, 0.5) + dbeta[5];

    // 'Correction_gait_K:65' value(7)=hd1_vel_phi_int+dbeta(7);
    value[6] = walk_polyval_kcwq(b_data, b_size) + dbeta[6];

    // 'Correction_gait_K:66' value(8)=dbeta(8);
    value[7] = dbeta[7];

    // 'Correction_gait_K:67' value(9)=dbeta(9);
    value[8] = dbeta[8];

    // 'Correction_gait_K:69' update_gait(Names,value)
    walk_update_gait(value);
  }

  //
  // Function for MATLAB Function: '<Root>/update_phi_coeff'
  // function [q]=swap_joints(q)
  //
  void walkModelClass::walk_swap_joints(real_T q[30])
  {
    real_T tmp;
    real_T tmp_0;
    real_T tmp_1;
    real_T tmp_2;
    real_T tmp_3;
    real_T tmp_4;
    real_T tmp_5;
    real_T tmp_6;
    real_T tmp_7;
    real_T tmp_8;
    real_T tmp_9;

    // 'swap_joints:3' q(1:12)=[q(12);-q(11);-q(10);-q(9);q(8);q(7);q(6);q(5);-q(4);-q(3);-q(2);q(1)]; 
    tmp = q[10];
    tmp_0 = q[9];
    tmp_1 = q[8];
    tmp_2 = q[7];
    tmp_3 = q[6];
    tmp_4 = q[5];
    tmp_5 = q[4];
    tmp_6 = q[3];
    tmp_7 = q[2];
    tmp_8 = q[1];
    tmp_9 = q[0];
    q[0] = q[11];
    q[1] = -tmp;
    q[2] = -tmp_0;
    q[3] = -tmp_1;
    q[4] = tmp_2;
    q[5] = tmp_3;
    q[6] = tmp_4;
    q[7] = tmp_5;
    q[8] = -tmp_6;
    q[9] = -tmp_7;
    q[10] = -tmp_8;
    q[11] = tmp_9;

    //  q+ = E*q-
    // 'swap_joints:4' q(13)=-q(13);
    q[12] = -q[12];

    //  The twist of the trunk change since the Y axis direction changed, i.e. Y(k+1) = -Y(k) 
    //  now the positive twist is from -Y to X instead of X to Y (or viceversa)
    // 'swap_joints:6' q(16)=-q(16);
    q[15] = -q[15];

    //  Neck_yaw
    // 'swap_joints:7' q([18,25])=[q(25),q(18)];
    tmp = q[17];
    q[17] = q[24];
    q[24] = tmp;

    //  Swap Shoulders Pitch
    //  CHECK THIS SWAPING....
    // 'swap_joints:9' q([17,19,20,21,22,23,24,26,27,28,29,30])=[-q(24),-q(26),q(27),-q(28),-q(29),q(30),-q(17),-q(19),q(20),-q(21),-q(22),q(23)]; 
    tmp = q[25];
    tmp_0 = q[26];
    tmp_1 = q[27];
    tmp_2 = q[28];
    tmp_3 = q[29];
    tmp_4 = q[16];
    tmp_5 = q[18];
    tmp_6 = q[19];
    tmp_7 = q[20];
    tmp_8 = q[21];
    tmp_9 = q[22];
    q[16] = -q[23];
    q[18] = -tmp;
    q[19] = tmp_0;
    q[20] = -tmp_1;
    q[21] = -tmp_2;
    q[22] = tmp_3;
    q[23] = -tmp_4;
    q[25] = -tmp_5;
    q[26] = tmp_6;
    q[27] = -tmp_7;
    q[28] = -tmp_8;
    q[29] = tmp_9;

    //  Swap Shoulders Yaw and rest of the arm
  }

  //
  // Function for MATLAB Function: '<Root>/update_phi_coeff'
  // function phi_coeff=get_phi_coeff(y0)
  // y0=[x0ini y0ini xp0ini]
  //
  void walkModelClass::walk_get_phi_coeff(const real_T b_y0[3], real_T
    *phi_coeff_b_AA, real_T *phi_coeff_b_BB, real_T *phi_coeff_b_CC, real_T
    *phi_coeff_b_DD, real_T *phi_coeff_b_EE, real_T *phi_coeff_b_FF)
  {
    real_T Xf;
    real_T Yf;
    real_T AA_tmp;
    real_T AA_tmp_0;
    real_T AA_tmp_1;
    real_T AA_tmp_2;
    real_T AA_tmp_3;
    real_T BB_tmp;
    real_T AA_tmp_4;
    real_T AA_tmp_5;
    real_T AA_tmp_6;
    real_T AA_tmp_7;
    real_T BB_tmp_0;
    real_T BB_tmp_1;
    real_T AA_tmp_8;
    real_T AA_tmp_9;
    real_T AA_tmp_a;
    real_T BB_tmp_2;
    real_T AA_tmp_tmp;
    real_T BB_tmp_3;
    real_T BB_tmp_4;
    real_T BB_tmp_5;
    real_T BB_tmp_6;
    real_T BB_tmp_7;
    real_T BB_tmp_8;

    // inspired of cal_phi_angularM(State,y0,n,t)
    // 'get_phi_coeff:11' ei=0;
    // apparemment
    // 'get_phi_coeff:13' kv = 0;
    // 'get_phi_coeff:14' ki = 0;
    // 'get_phi_coeff:15' xpD = 0;
    // 'get_phi_coeff:17' Cf = C;
    // 'get_phi_coeff:18' Xi = y0(1);
    // 'get_phi_coeff:19' Yi = y0(2);
    // 'get_phi_coeff:20' Xf = S/2+Dx;
    Xf = walk_DW.S / 2.0 + walk_DW.Dx;

    // 'get_phi_coeff:21' Yf = D/2+Dy;
    Yf = walk_DW.D / 2.0 + walk_DW.Dy;

    // 'get_phi_coeff:23' dist = kv*(xpD-y0(3)) + ki*ei;
    // 'get_phi_coeff:25' AA = (-1).*(dist+Xf+(-1).*Xi+Cf.*Yf+(-1).*Cf.*Yi).^(-1).*((-1)+DD.* ... 
    // 'get_phi_coeff:26'     dist.^2+2.*DD.*dist.*Xf+DD.*Xf.^2+(-1).*DD.*Xi.^2+2.*Cf.*DD.* ... 
    // 'get_phi_coeff:27'     dist.*Yf+2.*Cf.*DD.*Xf.*Yf+Cf.^2.*DD.*Yf.^2+CC.*dist.*Yi+(-2).* ... 
    // 'get_phi_coeff:28'     Cf.*DD.*dist.*Yi+CC.*Xf.*Yi+(-2).*Cf.*DD.*Xf.*Yi+(-1).*CC.*Xi.*Yi+ ... 
    // 'get_phi_coeff:29'     CC.*Cf.*Yf.*Yi+(-2).*Cf.^2.*DD.*Yf.*Yi+(-1).*CC.*Cf.*Yi.^2+Cf.^2.* ... 
    // 'get_phi_coeff:30'     DD.*Yi.^2);
    AA_tmp = walk_DW.C * walk_DW.C;
    AA_tmp_0 = AA_tmp * walk_DW.DD;
    AA_tmp_1 = b_y0[1] * b_y0[1];
    AA_tmp_2 = Xf * Xf;
    AA_tmp_3 = 2.0 * walk_DW.C * walk_DW.DD * Xf;
    AA_tmp_4 = b_y0[0] * b_y0[0];
    AA_tmp_5 = AA_tmp * -2.0 * walk_DW.DD;
    AA_tmp_6 = -walk_DW.CC * walk_DW.C;
    AA_tmp_7 = Yf * Yf;
    AA_tmp_tmp = -walk_DW.C * b_y0[1];
    AA_tmp_8 = -(1.0 / (((Xf + -b_y0[0]) + walk_DW.C * Yf) + AA_tmp_tmp));
    AA_tmp_9 = walk_DW.CC * walk_DW.C;
    AA_tmp_a = AA_tmp_2 * walk_DW.DD;
    walk_DW.AA = (((((((((((AA_tmp_a + -1.0) + AA_tmp_4 * -walk_DW.DD) +
                          AA_tmp_3 * Yf) + AA_tmp_0 * AA_tmp_7) + walk_DW.CC *
                        Xf * b_y0[1]) + -2.0 * walk_DW.C * walk_DW.DD * Xf *
                       b_y0[1]) + -walk_DW.CC * b_y0[0] * b_y0[1]) + AA_tmp_9 *
                     Yf * b_y0[1]) + AA_tmp_5 * Yf * b_y0[1]) + AA_tmp_6 *
                   AA_tmp_1) + AA_tmp_0 * AA_tmp_1) * AA_tmp_8;

    // 'get_phi_coeff:31' BB = (-1).*(dist+Xf+(-1).*Xi+Cf.*Yf+(-1).*Cf.*Yi).^(-1).*((-1).*Cf+CC.* ... 
    // 'get_phi_coeff:32'     dist.^2+(-1).*Cf.*DD.*dist.^2+2.*CC.*dist.*Xf+(-2).*Cf.*DD.*dist.* ... 
    // 'get_phi_coeff:33'     Xf+CC.*Xf.^2+(-1).*Cf.*DD.*Xf.^2+(-1).*CC.*dist.*Xi+2.*Cf.*DD.* ... 
    // 'get_phi_coeff:34'     dist.*Xi+(-1).*CC.*Xf.*Xi+2.*Cf.*DD.*Xf.*Xi+(-1).*Cf.*DD.*Xi.^2+ ... 
    // 'get_phi_coeff:35'     2.*CC.*Cf.*dist.*Yf+(-2).*Cf.^2.*DD.*dist.*Yf+2.*CC.*Cf.*Xf.*Yf+( ... 
    // 'get_phi_coeff:36'     -2).*Cf.^2.*DD.*Xf.*Yf+(-1).*CC.*Cf.*Xi.*Yf+2.*Cf.^2.*DD.*Xi.*Yf+ ... 
    // 'get_phi_coeff:37'     CC.*Cf.^2.*Yf.^2+(-1).*Cf.^3.*DD.*Yf.^2+(-1).*CC.*Cf.*Xi.*Yi+(-1) ... 
    // 'get_phi_coeff:38'     .*CC.*Cf.^2.*Yi.^2+Cf.^3.*DD.*Yi.^2);
    BB_tmp = -walk_DW.C * walk_DW.DD;
    BB_tmp_0 = AA_tmp_6 * b_y0[0];
    BB_tmp_1 = pow(walk_DW.C, 3.0);
    AA_tmp_3 *= b_y0[0];
    BB_tmp_2 = BB_tmp * AA_tmp_4;
    BB_tmp_3 = AA_tmp_2 * walk_DW.CC;
    BB_tmp *= AA_tmp_2;
    AA_tmp_2 = -walk_DW.CC * Xf * b_y0[0];
    BB_tmp_4 = 2.0 * walk_DW.CC * walk_DW.C * Xf * Yf;
    AA_tmp_5 = AA_tmp_5 * Xf * Yf;
    BB_tmp_5 = BB_tmp_0 * Yf;
    BB_tmp_6 = AA_tmp * walk_DW.CC * AA_tmp_7;
    BB_tmp_7 = -BB_tmp_1 * walk_DW.DD * AA_tmp_7;
    BB_tmp_8 = AA_tmp * -walk_DW.CC;
    BB_tmp_1 *= walk_DW.DD;
    walk_DW.BB = ((((((((((((((BB_tmp_3 + -walk_DW.C) + BB_tmp) + AA_tmp_2) +
      AA_tmp_3) + BB_tmp_2) + BB_tmp_4) + AA_tmp_5) + BB_tmp_5) + AA_tmp * 2.0 *
                       walk_DW.DD * b_y0[0] * Yf) + BB_tmp_6) + BB_tmp_7) +
                    BB_tmp_0 * b_y0[1]) + BB_tmp_8 * AA_tmp_1) + BB_tmp_1 *
                  AA_tmp_1) * AA_tmp_8;

    // 'get_phi_coeff:39' EE = CC.*Cf+(-1).*Cf.^2.*DD;
    walk_DW.EE = -AA_tmp * walk_DW.DD + AA_tmp_9;

    // 'get_phi_coeff:40' FF = (-1).*((-1).*dist+(-1).*Xf+Xi+(-1).*Cf.*Yf+Cf.*Yi).^(-1).*((-1).* ... 
    // 'get_phi_coeff:41'     Xi+DD.*dist.^2.*Xi+2.*DD.*dist.*Xf.*Xi+DD.*Xf.^2.*Xi+(-1).*DD.* ... 
    // 'get_phi_coeff:42'     dist.*Xi.^2+(-1).*DD.*Xf.*Xi.^2+2.*Cf.*DD.*dist.*Xi.*Yf+2.*Cf.* ... 
    // 'get_phi_coeff:43'     DD.*Xf.*Xi.*Yf+(-1).*Cf.*DD.*Xi.^2.*Yf+Cf.^2.*DD.*Xi.*Yf.^2+(-1).* ... 
    // 'get_phi_coeff:44'     Cf.*Yi+CC.*dist.^2.*Yi+(-1).*Cf.*DD.*dist.^2.*Yi+2.*CC.*dist.*Xf.* ... 
    // 'get_phi_coeff:45'     Yi+(-2).*Cf.*DD.*dist.*Xf.*Yi+CC.*Xf.^2.*Yi+(-1).*Cf.*DD.*Xf.^2.* ... 
    // 'get_phi_coeff:46'     Yi+(-1).*CC.*dist.*Xi.*Yi+(-1).*CC.*Xf.*Xi.*Yi+2.*CC.*Cf.*dist.* ... 
    // 'get_phi_coeff:47'     Yf.*Yi+(-2).*Cf.^2.*DD.*dist.*Yf.*Yi+2.*CC.*Cf.*Xf.*Yf.*Yi+(-2).* ... 
    // 'get_phi_coeff:48'     Cf.^2.*DD.*Xf.*Yf.*Yi+(-1).*CC.*Cf.*Xi.*Yf.*Yi+CC.*Cf.^2.*Yf.^2.* ... 
    // 'get_phi_coeff:49'     Yi+(-1).*Cf.^3.*DD.*Yf.^2.*Yi+(-1).*CC.*Cf.*dist.*Yi.^2+Cf.^2.* ... 
    // 'get_phi_coeff:50'     DD.*dist.*Yi.^2+(-1).*CC.*Cf.*Xf.*Yi.^2+Cf.^2.*DD.*Xf.*Yi.^2+(-1) ... 
    // 'get_phi_coeff:51'     .*CC.*Cf.^2.*Yf.*Yi.^2+Cf.^3.*DD.*Yf.*Yi.^2);
    walk_DW.FF = ((((((((((((((((((AA_tmp_a * b_y0[0] + -b_y0[0]) + -walk_DW.DD *
      Xf * AA_tmp_4) + AA_tmp_3 * Yf) + BB_tmp_2 * Yf) + AA_tmp_0 * b_y0[0] *
      AA_tmp_7) + AA_tmp_tmp) + BB_tmp_3 * b_y0[1]) + BB_tmp * b_y0[1]) +
      AA_tmp_2 * b_y0[1]) + BB_tmp_4 * b_y0[1]) + AA_tmp_5 * b_y0[1]) + BB_tmp_5
                        * b_y0[1]) + BB_tmp_6 * b_y0[1]) + BB_tmp_7 * b_y0[1]) +
                     AA_tmp_6 * Xf * AA_tmp_1) + AA_tmp_0 * Xf * AA_tmp_1) +
                   BB_tmp_8 * Yf * AA_tmp_1) + BB_tmp_1 * Yf * AA_tmp_1) * -(1.0
      / (((-Xf + b_y0[0]) + -walk_DW.C * Yf) + walk_DW.C * b_y0[1]));

    // 'get_phi_coeff:52' phi_coeff.AA=AA;
    *phi_coeff_b_AA = walk_DW.AA;

    // 'get_phi_coeff:53' phi_coeff.BB=BB;
    *phi_coeff_b_BB = walk_DW.BB;

    // 'get_phi_coeff:54' phi_coeff.CC=CC;
    *phi_coeff_b_CC = walk_DW.CC;

    // 'get_phi_coeff:55' phi_coeff.DD=DD;
    *phi_coeff_b_DD = walk_DW.DD;

    // 'get_phi_coeff:56' phi_coeff.EE=EE;
    *phi_coeff_b_EE = walk_DW.EE;

    // 'get_phi_coeff:57' phi_coeff.FF=FF;
    *phi_coeff_b_FF = walk_DW.FF;

    // phi_coeff=get_phi_coeff2(y0);
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval_an1(const real_T p[7])
  {
    real_T y;
    int32_T k;
    y = p[0];
    for (k = 0; k < 6; k++) {
      y += p[k + 1];
    }

    return y;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval_an1y(const real_T p[6])
  {
    real_T y;
    int32_T k;
    y = p[0];
    for (k = 0; k < 5; k++) {
      y += p[k + 1];
    }

    return y;
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [hd] = desired_h_xelo(phi)
  //
  void walkModelClass::walk_desired_h_xelo(real_T hd[28])
  {
    real_T y;
    int32_T k;

    // 'desired_h_xelo:5' hd_phi=cell(1,28);
    // 'desired_h_xelo:6' hd_phi{1}=hd1;
    // 'desired_h_xelo:6' hd_phi{2}=hd2;
    // 'desired_h_xelo:6' hd_phi{3}=hd3;
    // 'desired_h_xelo:6' hd_phi{4}=hd4;
    // 'desired_h_xelo:6' hd_phi{5}=hd5;
    // 'desired_h_xelo:6' hd_phi{6}=hd6;
    // 'desired_h_xelo:6' hd_phi{7}=hd7;
    // 'desired_h_xelo:6' hd_phi{8}=hd8;
    // 'desired_h_xelo:6' hd_phi{9}=hd9;
    // 'desired_h_xelo:6' hd_phi{10}=hd10;
    // 'desired_h_xelo:6' hd_phi{11}=hd11;
    // 'desired_h_xelo:6' hd_phi{12}=hd12;
    // 'desired_h_xelo:7' hd_phi{13}=hd13;
    // 'desired_h_xelo:7' hd_phi{14}=hd14;
    // 'desired_h_xelo:7' hd_phi{15}=hd15;
    // 'desired_h_xelo:7' hd_phi{16}=hd16;
    // 'desired_h_xelo:7' hd_phi{17}=hd17;
    // 'desired_h_xelo:7' hd_phi{18}=hd18;
    // 'desired_h_xelo:7' hd_phi{19}=hd19;
    // 'desired_h_xelo:7' hd_phi{20}=hd20;
    // 'desired_h_xelo:7' hd_phi{21}=hd21;
    // 'desired_h_xelo:7' hd_phi{22}=hd22;
    // 'desired_h_xelo:7' hd_phi{23}=hd23;
    // 'desired_h_xelo:8' hd_phi{24}=hd24;
    // 'desired_h_xelo:8' hd_phi{25}=hd25;
    // 'desired_h_xelo:8' hd_phi{26}=hd26;
    // 'desired_h_xelo:8' hd_phi{27}=hd27;
    // 'desired_h_xelo:8' hd_phi{28}=hd28;
    // 'desired_h_xelo:10' hd=zeros(28,1);
    // 'desired_h_xelo:11' for i=1:28
    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[0] = walk_polyval_an(walk_DW.hd1, 1.0);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[1] = walk_polyval_an1(walk_DW.hd2);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[2] = walk_polyval_an1y(walk_DW.hd3);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[3] = walk_polyval_an1(walk_DW.hd4);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd5[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd5[k + 1];
    }

    hd[4] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd6[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd6[k + 1];
    }

    hd[5] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd7[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd7[k + 1];
    }

    hd[6] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd8[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd8[k + 1];
    }

    hd[7] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd9[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd9[k + 1];
    }

    hd[8] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd10[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd10[k + 1];
    }

    hd[9] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd11[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd11[k + 1];
    }

    hd[10] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd12[0];
    for (k = 0; k < 6; k++) {
      y += walk_DW.hd12[k + 1];
    }

    hd[11] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd13[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd13[k + 1];
    }

    hd[12] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd14[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd14[k + 1];
    }

    hd[13] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd15[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd15[k + 1];
    }

    hd[14] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd16[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd16[k + 1];
    }

    hd[15] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd17[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd17[k + 1];
    }

    hd[16] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd18[0];
    for (k = 0; k < 6; k++) {
      y += walk_DW.hd18[k + 1];
    }

    hd[17] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd19[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd19[k + 1];
    }

    hd[18] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd20[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd20[k + 1];
    }

    hd[19] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd21[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd21[k + 1];
    }

    hd[20] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd22[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd22[k + 1];
    }

    hd[21] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd23[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd23[k + 1];
    }

    hd[22] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd24[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd24[k + 1];
    }

    hd[23] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd25[0];
    for (k = 0; k < 6; k++) {
      y += walk_DW.hd25[k + 1];
    }

    hd[24] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd26[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd26[k + 1];
    }

    hd[25] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd27[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd27[k + 1];
    }

    hd[26] = y;

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    y = walk_DW.hd28[0];
    for (k = 0; k < 5; k++) {
      y += walk_DW.hd28[k + 1];
    }

    hd[27] = y;
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function Tau=PID_control(q,qp,t,phi,qfd)
  // global Kp_ini Ki_ini Kd_ini
  //
  void walkModelClass::walk_PID_control(const real_T q[30], real_T t, const
    real_T qfd[2], real_T Tau[30])
  {
    boolean_T init;
    real_T hd[28];
    real_T h[28];
    real_T F[30];
    real_T error[30];
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T b;
    int32_T i;
    int32_T i_0;

    // 'PID_control:3' Kp_ini=100*ones(30,1);
    // 'PID_control:4' Kd_ini=000*ones(30,1);
    // 'PID_control:5' Ki_ini=10*ones(30,1);
    // 'PID_control:8' init=false;
    init = false;

    // 'PID_control:9' if isempty(previous_time)
    if (!walk_DW.previous_time_not_empty_a) {
      // 'PID_control:10' previous_time=0;
      walk_DW.previous_time_not_empty_a = true;

      // 'PID_control:11' accumulated_error=zeros(30,1);
      // 'PID_control:12' init=true;
      init = true;
    }

    //  Desired
    // 'PID_control:15' hd=desired_h_xelo(phi);
    walk_desired_h_xelo(hd);

    // 'PID_control:16' hpd=zeros(28,1);
    // qfd=xyT_ini(1:2);
    // 'PID_control:18' qfpd=zeros(2,1);
    //  Actual
    // 'PID_control:21' T = DGM_TALOS_QY_xelo(q);
    walk_DGM_TALOS_QY_xelo(q, walk_B.T_b);

    // 'PID_control:22' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_compute2_com_xelo(walk_B.T_b, CoM, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_b);

    // 'PID_control:23' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    // 'PID_control:24' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T_b, J_CoM, J_Ankle, walk_B.J_h_dh);

    // 'PID_control:26' h = state_v_TALOS_xelo(q,T,CoM);
    walk_state_v_TALOS_xelo(q, walk_B.T_b, CoM, h);

    // 'PID_control:27' hp= J_h*qp;
    //  Torque Computation
    //  Qp=JQ.qp, Qp^T.F=qp^T.Tau -> qp^T.JQ^T.F=qp^T.Tau -> Tau=JQ^T.F
    // 'PID_control:31' JQ=zeros(30,30);
    memset(&walk_B.JQ_m[0], 0, 900U * sizeof(real_T));

    // 'PID_control:32' JQ(1:28,:)=J_h;
    // 'PID_control:33' JQ(29:30,:)=J_CoM(1:2,:);
    for (i = 0; i < 30; i++) {
      memcpy(&walk_B.JQ_m[i * 30], &walk_B.J_h_dh[i * 28], 28U * sizeof(real_T));
      walk_B.JQ_m[28 + 30 * i] = J_CoM[3 * i];
      walk_B.JQ_m[29 + 30 * i] = J_CoM[3 * i + 1];
    }

    // 'PID_control:35' F=zeros(30,1);
    // 'PID_control:36' if init
    if (init) {
      // 'PID_control:37' F=Kp_ini.*[hd-h;qfd-qf]+Kd_ini.*[hpd-hp;qfpd-qfp];
      for (i = 0; i < 28; i++) {
        error[i] = hd[i] - h[i];
      }

      error[28] = qfd[0] - CoM[0];
      error[29] = qfd[1] - CoM[1];
      for (i = 0; i < 30; i++) {
        F[i] = 100.0 * error[i];
      }

      // 'PID_control:38' previous_time=t;
      walk_DW.previous_time_n = t;
    } else {
      // 'PID_control:39' else
      // 'PID_control:40' error=[hd-h;qfd-qf];
      for (i = 0; i < 28; i++) {
        error[i] = hd[i] - h[i];
      }

      error[28] = qfd[0] - CoM[0];
      error[29] = qfd[1] - CoM[1];

      // 'PID_control:41' accumulated_error=accumulated_error+error*(t-previous_time); 
      b = t - walk_DW.previous_time_n;

      // 'PID_control:42' F=Kp_ini.*error+Kd_ini.*[hpd-hp;qfpd-qfp]+Ki_ini.*accumulated_error; 
      for (i = 0; i < 30; i++) {
        walk_DW.accumulated_error_b[i] += error[i] * b;
        F[i] = 100.0 * error[i] + 10.0 * walk_DW.accumulated_error_b[i];
      }

      // 'PID_control:43' previous_time=t;
      walk_DW.previous_time_n = t;
    }

    // 'PID_control:46' Tau=transpose(JQ)*F;
    for (i = 0; i < 30; i++) {
      Tau[i] = 0.0;
      for (i_0 = 0; i_0 < 30; i_0++) {
        Tau[i] += walk_B.JQ_m[30 * i + i_0] * F[i_0];
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_inv_a(const real_T x[9], real_T y[9])
  {
    real_T b_x[9];
    int32_T p1;
    int32_T p2;
    int32_T p3;
    real_T absx11;
    real_T absx21;
    real_T absx31;
    int32_T itmp;
    memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
    p1 = 0;
    p2 = 3;
    p3 = 6;
    absx11 = std::abs(x[0]);
    absx21 = std::abs(x[1]);
    absx31 = std::abs(x[2]);
    if ((absx21 > absx11) && (absx21 > absx31)) {
      p1 = 3;
      p2 = 0;
      b_x[0] = x[1];
      b_x[1] = x[0];
      b_x[3] = x[4];
      b_x[4] = x[3];
      b_x[6] = x[7];
      b_x[7] = x[6];
    } else {
      if (absx31 > absx11) {
        p1 = 6;
        p3 = 0;
        b_x[0] = x[2];
        b_x[2] = x[0];
        b_x[3] = x[5];
        b_x[5] = x[3];
        b_x[6] = x[8];
        b_x[8] = x[6];
      }
    }

    absx11 = b_x[1] / b_x[0];
    b_x[1] /= b_x[0];
    absx21 = b_x[2] / b_x[0];
    b_x[2] /= b_x[0];
    b_x[4] -= absx11 * b_x[3];
    b_x[5] -= absx21 * b_x[3];
    b_x[7] -= absx11 * b_x[6];
    b_x[8] -= absx21 * b_x[6];
    if (std::abs(b_x[5]) > std::abs(b_x[4])) {
      itmp = p2;
      p2 = p3;
      p3 = itmp;
      b_x[1] = absx21;
      b_x[2] = absx11;
      absx11 = b_x[4];
      b_x[4] = b_x[5];
      b_x[5] = absx11;
      absx11 = b_x[7];
      b_x[7] = b_x[8];
      b_x[8] = absx11;
    }

    absx31 = b_x[5] / b_x[4];
    b_x[8] -= absx31 * b_x[7];
    absx11 = (absx31 * b_x[1] - b_x[2]) / b_x[8];
    absx21 = -(b_x[7] * absx11 + b_x[1]) / b_x[4];
    y[p1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
    y[p1 + 1] = absx21;
    y[p1 + 2] = absx11;
    absx11 = -absx31 / b_x[8];
    absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
    y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
    y[p2 + 1] = absx21;
    y[p2 + 2] = absx11;
    absx11 = 1.0 / b_x[8];
    absx21 = -b_x[7] * absx11 / b_x[4];
    y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
    y[p3 + 1] = absx21;
    y[p3 + 2] = absx11;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_invNxN(const real_T x[16], real_T y[16])
  {
    int8_T p[4];
    real_T A[16];
    int8_T ipiv[4];
    int32_T b_j;
    int32_T ix;
    real_T smax;
    real_T s;
    int32_T b_k;
    int32_T iy;
    int32_T c_ix;
    int32_T d;
    int32_T ijA;
    int32_T pipk;
    for (b_j = 0; b_j < 16; b_j++) {
      y[b_j] = 0.0;
      A[b_j] = x[b_j];
    }

    ipiv[0] = 1;
    ipiv[1] = 2;
    ipiv[2] = 3;
    for (b_j = 0; b_j < 3; b_j++) {
      pipk = b_j * 5;
      iy = 0;
      ix = pipk;
      smax = std::abs(A[pipk]);
      for (b_k = 2; b_k <= 4 - b_j; b_k++) {
        ix++;
        s = std::abs(A[ix]);
        if (s > smax) {
          iy = b_k - 1;
          smax = s;
        }
      }

      if (A[pipk + iy] != 0.0) {
        if (iy != 0) {
          iy += b_j;
          ipiv[b_j] = static_cast<int8_T>((iy + 1));
          smax = A[b_j];
          A[b_j] = A[iy];
          A[iy] = smax;
          ix = b_j + 4;
          iy += 4;
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 4;
          iy += 4;
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 4;
          iy += 4;
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
        }

        iy = (pipk - b_j) + 4;
        for (ix = pipk + 1; ix < iy; ix++) {
          A[ix] /= A[pipk];
        }
      }

      iy = pipk + 5;
      ix = pipk + 4;
      for (b_k = 0; b_k <= 2 - b_j; b_k++) {
        smax = A[ix];
        if (A[ix] != 0.0) {
          c_ix = pipk + 1;
          d = (iy - b_j) + 3;
          for (ijA = iy; ijA < d; ijA++) {
            A[ijA] += A[c_ix] * -smax;
            c_ix++;
          }
        }

        ix += 4;
        iy += 4;
      }
    }

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    if (ipiv[0] > 1) {
      ix = ipiv[0] - 1;
      pipk = p[ix];
      p[ix] = 1;
      p[0] = static_cast<int8_T>(pipk);
    }

    if (ipiv[1] > 2) {
      ix = ipiv[1] - 1;
      pipk = p[ix];
      p[ix] = p[1];
      p[1] = static_cast<int8_T>(pipk);
    }

    if (ipiv[2] > 3) {
      pipk = p[ipiv[2] - 1];
      p[ipiv[2] - 1] = p[2];
      p[2] = static_cast<int8_T>(pipk);
    }

    pipk = p[0] - 1;
    y[(p[0] - 1) << 2] = 1.0;
    for (iy = 0; iy + 1 < 5; iy++) {
      b_j = pipk << 2;
      b_k = b_j + iy;
      if (y[b_k] != 0.0) {
        for (ix = iy + 1; ix + 1 < 5; ix++) {
          c_ix = b_j + ix;
          y[c_ix] -= y[b_k] * A[(iy << 2) + ix];
        }
      }
    }

    pipk = p[1] - 1;
    y[1 + ((p[1] - 1) << 2)] = 1.0;
    for (iy = 1; iy + 1 < 5; iy++) {
      b_j = pipk << 2;
      b_k = b_j + iy;
      if (y[b_k] != 0.0) {
        for (ix = iy + 1; ix + 1 < 5; ix++) {
          c_ix = b_j + ix;
          y[c_ix] -= y[b_k] * A[(iy << 2) + ix];
        }
      }
    }

    pipk = p[2] - 1;
    y[2 + ((p[2] - 1) << 2)] = 1.0;
    for (iy = 2; iy + 1 < 5; iy++) {
      b_j = pipk << 2;
      b_k = b_j + iy;
      if (y[b_k] != 0.0) {
        for (ix = iy + 1; ix + 1 < 5; ix++) {
          c_ix = b_j + ix;
          y[c_ix] -= y[b_k] * A[(iy << 2) + ix];
        }
      }
    }

    pipk = p[3] - 1;
    y[3 + ((p[3] - 1) << 2)] = 1.0;
    for (iy = 3; iy + 1 < 5; iy++) {
      if (y[(pipk << 2) + iy] != 0.0) {
        for (ix = iy + 1; ix + 1 < 5; ix++) {
          c_ix = pipk << 2;
          b_j = c_ix + ix;
          y[b_j] -= y[c_ix + iy] * A[(iy << 2) + ix];
        }
      }
    }

    for (b_j = 0; b_j < 4; b_j++) {
      pipk = b_j << 2;
      smax = y[3 + pipk];
      if (smax != 0.0) {
        y[3 + pipk] = smax / A[15];
        for (b_k = 0; b_k < 3; b_k++) {
          c_ix = b_k + pipk;
          y[c_ix] -= y[3 + pipk] * A[b_k + 12];
        }
      }

      smax = y[2 + pipk];
      if (smax != 0.0) {
        y[2 + pipk] = smax / A[10];
        for (b_k = 0; b_k < 2; b_k++) {
          c_ix = b_k + pipk;
          y[c_ix] -= y[2 + pipk] * A[b_k + 8];
        }
      }

      smax = y[1 + pipk];
      if (smax != 0.0) {
        y[1 + pipk] = smax / A[5];
        y[pipk] -= y[1 + pipk] * A[4];
      }

      if (y[pipk] != 0.0) {
        y[pipk] /= A[0];
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_inv(const real_T x[16], real_T y[16])
  {
    walk_invNxN(x, y);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [JpCoMqp,Jpi_qp] = get_JpCoMqp_Jpi_qp_xelo(T,qp)
  //
  void walkModelClass::walk_get_JpCoMqp_Jpi_qp_xelo(const real_T T[784], const
    real_T qp[30], real_T JpCoMqp[3], real_T Jpi_qp[294])
  {
    real_T P[147];
    real_T Wi_1[147];
    real_T PartialWPi_1[147];
    real_T PartialVPi_1[147];
    real_T Wi[147];
    real_T PartialWPi[147];
    real_T PartialVPi[147];
    real_T PartialVp_Gi[147];
    real_T PartialAce_CoMs[147];
    real_T cont;
    real_T iRi_1[9];
    real_T ai[3];
    int32_T b_i;
    real_T iRi_1_tmp[9];
    real_T tmp[16];
    real_T T_0[9];
    real_T tmp_0[16];
    real_T PartialWPi_0[3];
    real_T tmp_1[9];
    real_T tmp_2[9];
    real_T iRi_1_0;
    real_T Wi_idx_2;
    real_T PartialWPi_idx_1;
    real_T PartialWPi_idx_2;
    real_T PartialVPi_idx_1;
    real_T PartialVPi_idx_2;
    int32_T T_tmp;
    int32_T iRi_1_tmp_0;
    int32_T iRi_1_tmp_1;
    int32_T tmp_3;
    int32_T i;
    int32_T P_tmp;
    int32_T PartialWPi_tmp;
    int32_T PartialVPi_tmp;
    int32_T Wi_tmp;
    int32_T PartialWPi_tmp_0;
    int32_T PartialVPi_tmp_0;
    int32_T PartialVPi_idx_1_tmp;
    real_T qp_tmp;
    real_T T_tmp_0;
    int32_T Jpi_qp_tmp;

    // ant = robot_TALOS.ant; % Marcos antecedentes
    // act= robot_TALOS.act;  % Articulaciones actuadas en cada marco
    // 'get_JpCoMqp_Jpi_qp_xelo:7' M = mass_stack;
    //  Masas adjuntas a cada marco
    // T = robot_TALOS.T;
    // 'get_JpCoMqp_Jpi_qp_xelo:9' CoM_j=CoM_stack;
    // CoM_j = robot_TALOS.PI.CoM;
    // qp = robot_TALOS.qD;
    //  Marcos antecedentes al marco Actual:
    //  -------------------------------------------------
    //  numMarco   1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 
    //  ant    = [ 0,1,2,3,4,5,6,7,8, 9,10,11,12,13, 7,15,16,17,18,19,15,21,22,23,24,25,26,27,15,29,30,31,32,33,34,35]; 
    //  Marcos actuados, se pone cero si no es actuado y se pune un numero consecutivo para definir el numero de articulación: 
    //  -------------------------------------------------------------------------------------------------------------------------- 
    //  numMarco   1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 
    //  act    = [ 0,1,2,3,4,5,6,7,8, 9,10,11,12, 0,13,14,15,16,17, 0,18,19,20,21,22,23,24, 0,25,26,27,28,29,30,31,0]; 
    //  Observando la info anterior podemos agrupar los MARCOS que tienen ARTICULACION 
    //  -------------------------------------------------------------------------------------------------------------------------- 
    //  i = 1 2 3 4 5 6 7 8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 
    //  Fr = [2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,21,22,23,24,25,26,27,29,30,31,32,33,34,35]; 
    //  Estos Marcos son los que se utilizan para calcular las Jacobianas
    //  As? en lugar del codigo que utiliza Damien para calcular las J_CoMs podríamos calcularlas usando un código más simple... 
    //  =)  ... en realidad es casi igual ¬¬ jaja.. sólo es un poco más claro la formación por columnas de la matriz Jacobiana 
    // 'get_JpCoMqp_Jpi_qp_xelo:30' P = zeros(3,49);
    // cell(1,49);   % Posicion del marco i desde i-1
    // 'get_JpCoMqp_Jpi_qp_xelo:31' Wi_1 = zeros(3,49);
    // cell(1,49);  % Velocidad angular del marco i-1 Siempre respecto al marco i-1 
    // 'get_JpCoMqp_Jpi_qp_xelo:32' Vi_1 = zeros(3,49);
    // cell(1,49);  % Velocidad lineal del marco i-1 Siempre respecto al marco i-1 
    // 'get_JpCoMqp_Jpi_qp_xelo:33' PartialWPi_1 = zeros(3,49);
    // cell(1,49);  % Aceleracion angular del marco i-1 Siempre respecto al marco i-1 
    // 'get_JpCoMqp_Jpi_qp_xelo:34' PartialVPi_1 = zeros(3,49);
    // cell(1,49);   % Aceleracion lineal del marco i-1 Siempre respecto al marco i-1 
    // 'get_JpCoMqp_Jpi_qp_xelo:35' Wi = zeros(3,49);
    // cell(1,49);  % Velocidad angular del marco i
    // 'get_JpCoMqp_Jpi_qp_xelo:36' Vi = zeros(3,49);
    // cell(1,49);  % Velocidad lineal del marco i
    // 'get_JpCoMqp_Jpi_qp_xelo:37' V_Gi = zeros(3,49);
    // cell(1,49);  % Velocidad lineal del CoM unido al marco i
    // 'get_JpCoMqp_Jpi_qp_xelo:38' PartialWPi = zeros(3,49);
    // cell(1,49);  % Aceleracion angular del marco i
    // 'get_JpCoMqp_Jpi_qp_xelo:39' PartialVPi = zeros(3,49);
    // cell(1,49);   % Aceleracion lineal del marco i
    // 'get_JpCoMqp_Jpi_qp_xelo:40' PartialVp_Gi = zeros(3,49);
    memset(&Wi_1[0], 0, 147U * sizeof(real_T));
    memset(&PartialWPi_1[0], 0, 147U * sizeof(real_T));
    memset(&PartialVPi_1[0], 0, 147U * sizeof(real_T));
    memset(&Wi[0], 0, 147U * sizeof(real_T));
    memset(&PartialWPi[0], 0, 147U * sizeof(real_T));
    memset(&PartialVPi[0], 0, 147U * sizeof(real_T));
    memset(&PartialVp_Gi[0], 0, 147U * sizeof(real_T));

    // cell(1,49);  % Aceleración lineal del CoM unido al marco i
    // 'get_JpCoMqp_Jpi_qp_xelo:41' PartialAceFrame_i = zeros(6,49);
    memset(&Jpi_qp[0], 0, 294U * sizeof(real_T));

    // cell(1,49);  % Aceleración (lineal y angular) del Marco i
    //  for k=1:49
    //      P{k} = 0;   % Posicion del marco i desde i-1
    //      Wi_1{k} = 0;  % Velocidad angular del marco i-1 Siempre respecto al marco i-1 
    //      Vi_1{k} = 0;   % Velocidad lineal del marco i-1 Siempre respecto al marco i-1 
    //      PartialWPi_1{k} = 0;   % Aceleracion angular del marco i-1 Siempre respecto al marco i-1 
    //      PartialVPi_1{k} = 0;    % Aceleracion lineal del marco i-1 Siempre respecto al marco i-1 
    //      Wi{k} = 0;   % Velocidad angular del marco i
    //      Vi{k} = 0;   % Velocidad lineal del marco i
    //      V_Gi{k} = 0;   % Velocidad lineal del CoM unido al marco i
    //      PartialWPi{k} = 0;   % Aceleracion angular del marco i
    //      PartialVPi{k} = 0;    % Aceleracion lineal del marco i
    //      PartialVp_Gi{k} = 0;   % Aceleración lineal del CoM unido al marco i 
    //      PartialAceFrame_i{k} = [0;0;0;0;0;0];   % Aceleración (lineal y angular) del Marco i 
    //  end
    //  Inicialización
    // 'get_JpCoMqp_Jpi_qp_xelo:59' P(:,1) = T(1:3,4,1);
    // 'get_JpCoMqp_Jpi_qp_xelo:60' Wi_1(:,1) = [0;0;0];
    // 'get_JpCoMqp_Jpi_qp_xelo:61' Vi_1(:,1) = [0;0;0];
    // 'get_JpCoMqp_Jpi_qp_xelo:62' PartialWPi_1(:,1) = [0;0;0];
    // 'get_JpCoMqp_Jpi_qp_xelo:63' PartialVPi_1(:,1) = [0;0;0];
    // 'get_JpCoMqp_Jpi_qp_xelo:65' Vel_CoMs = zeros(3,49);
    // cell(1,49);  % Velocidad lineal de los CoMs unido al marco i respecto al marco 0 
    // 'get_JpCoMqp_Jpi_qp_xelo:66' Vel_CoMs(:,1) = [0;0;0];
    // 'get_JpCoMqp_Jpi_qp_xelo:67' Vel_CoM = [0;0;0];
    // 'get_JpCoMqp_Jpi_qp_xelo:68' PartialAce_CoMs = zeros(3,49);
    // cell(1,49);  % Aceleracion lineal de los CoMs unido al marco i respecto al marco 0 
    // 'get_JpCoMqp_Jpi_qp_xelo:69' PartialAce_CoMs(:,1) = [0;0;0];
    // 'get_JpCoMqp_Jpi_qp_xelo:70' PartialAce_CoM = [0;0;0];
    P[0] = T[12];
    Wi_1[0] = 0.0;
    PartialWPi_1[0] = 0.0;
    PartialVPi_1[0] = 0.0;
    PartialAce_CoMs[0] = 0.0;
    JpCoMqp[0] = 0.0;
    P[1] = T[13];
    Wi_1[1] = 0.0;
    PartialWPi_1[1] = 0.0;
    PartialVPi_1[1] = 0.0;
    PartialAce_CoMs[1] = 0.0;
    JpCoMqp[1] = 0.0;
    P[2] = T[14];
    Wi_1[2] = 0.0;
    PartialWPi_1[2] = 0.0;
    PartialVPi_1[2] = 0.0;
    PartialAce_CoMs[2] = 0.0;
    JpCoMqp[2] = 0.0;

    // 'get_JpCoMqp_Jpi_qp_xelo:71' cont = 1;
    cont = 1.0;

    // 'get_JpCoMqp_Jpi_qp_xelo:72' for i = 2 : 49
    for (b_i = 0; b_i < 48; b_i++) {
      //  Se empieza desde el marco 2 ya que no existe actuador en el primer marco  
      //  IMPORTANT (For remarks): Note that "ant(i)" is the previous frame of "i". So in a serial chain "ant(i) = i-1", however in a three 
      //       chain we must use "ant(i)" because in a new branch we need to re-take ITS previous frame, for example in our robot 
      //        the previous frame of 15 is 7 (not 14)... However in order to make some explanations clearer "i-1" was used =P 
      //  -----------------------
      // 'get_JpCoMqp_Jpi_qp_xelo:77' i_1Ti = inv(T(1:4,1:4,ant(i)))*T(1:4,1:4,i); 
      //  ^{i-1}T_{i} = ^{i-1}T_0 * ^0T_{i}
      // 'get_JpCoMqp_Jpi_qp_xelo:78' iRi_1 = inv(T(1:3,1:3,i))*T(1:3,1:3,ant(i)); 
      for (PartialVPi_idx_1_tmp = 0; PartialVPi_idx_1_tmp < 3;
           PartialVPi_idx_1_tmp++) {
        T_tmp = ((b_i + 1) << 4) + (PartialVPi_idx_1_tmp << 2);
        T_0[3 * PartialVPi_idx_1_tmp] = T[T_tmp];
        T_0[1 + 3 * PartialVPi_idx_1_tmp] = T[T_tmp + 1];
        T_0[2 + 3 * PartialVPi_idx_1_tmp] = T[T_tmp + 2];
      }

      walk_inv_a(T_0, iRi_1_tmp);
      PartialVPi_idx_1_tmp = static_cast<int32_T>(walk_DW.ant[b_i + 1]);
      for (T_tmp = 0; T_tmp < 3; T_tmp++) {
        for (Jpi_qp_tmp = 0; Jpi_qp_tmp < 3; Jpi_qp_tmp++) {
          iRi_1_tmp_0 = T_tmp + 3 * Jpi_qp_tmp;
          iRi_1[iRi_1_tmp_0] = 0.0;
          iRi_1_tmp_1 = ((PartialVPi_idx_1_tmp - 1) << 4) + (Jpi_qp_tmp << 2);
          iRi_1[iRi_1_tmp_0] += T[iRi_1_tmp_1] * iRi_1_tmp[T_tmp];
          iRi_1[iRi_1_tmp_0] += T[iRi_1_tmp_1 + 1] * iRi_1_tmp[T_tmp + 3];
          iRi_1[iRi_1_tmp_0] += T[iRi_1_tmp_1 + 2] * iRi_1_tmp[T_tmp + 6];
        }
      }

      //  ^iR_{i-1} = ^iR_0 * ^0R_{i-1}
      // 'get_JpCoMqp_Jpi_qp_xelo:79' Pp = i_1Ti(1:3,4);
      //  ^{i-1}P_{i-1,i}
      // 'get_JpCoMqp_Jpi_qp_xelo:80' P(:,i) = iRi_1*Pp;
      walk_inv(&T[(static_cast<int32_T>(walk_DW.ant[b_i + 1]) - 1) << 4], tmp);
      for (T_tmp = 0; T_tmp < 4; T_tmp++) {
        for (Jpi_qp_tmp = 0; Jpi_qp_tmp < 4; Jpi_qp_tmp++) {
          tmp_3 = Jpi_qp_tmp << 2;
          i = T_tmp + tmp_3;
          tmp_0[i] = 0.0;
          tmp_3 += (b_i + 1) << 4;
          tmp_0[i] += T[tmp_3] * tmp[T_tmp];
          tmp_0[i] += T[tmp_3 + 1] * tmp[T_tmp + 4];
          tmp_0[i] += T[tmp_3 + 2] * tmp[T_tmp + 8];
          tmp_0[i] += T[tmp_3 + 3] * tmp[T_tmp + 12];
        }
      }

      iRi_1_tmp_0 = b_i + 1;

      //  ^iP_{i-1,i}
      // 'get_JpCoMqp_Jpi_qp_xelo:81' Wi(:,ant(i)) = iRi_1*Wi_1(:,ant(i));
      T_tmp = static_cast<int32_T>(walk_DW.ant[b_i + 1]) - 1;

      // ^iw_{i-1} = ^iR_{i-1} * ^{i-1}w_{i-1}   % Velocidad angular del marco i-1 (respecto a i) 
      // 'get_JpCoMqp_Jpi_qp_xelo:82' Vi(:,ant(i)) = iRi_1*Vi_1(:,ant(i));
      // ^iv_{i-1} = ^iR_{i-1} * ^{i-1}v_{i-1}   % Velocidad lineal del marco i-1 (respecto a i) 
      // 'get_JpCoMqp_Jpi_qp_xelo:83' PartialWPi(:,ant(i)) = iRi_1*PartialWPi_1(:,ant(i)); 
      Jpi_qp_tmp = static_cast<int32_T>(walk_DW.ant[b_i + 1]) - 1;

      // ^iwp_{i-1} = ^iR_{i-1} * ^{i-1}wp_{i-1}   % Aceleracion angular del marco i-1 (respecto a i) 
      // 'get_JpCoMqp_Jpi_qp_xelo:84' PartialVPi(:,ant(i)) = iRi_1*PartialVPi_1(:,ant(i)); 
      tmp_3 = static_cast<int32_T>(walk_DW.ant[b_i + 1]) - 1;

      // ^ivp_{i-1} = ^iR_{i-1} * ^{i-1}vp_{i-1}   % Aceleracion lineal del marco i-1 (respecto a i) 
      //  -------------------
      // 'get_JpCoMqp_Jpi_qp_xelo:86' iR0 = inv(T(1:3,1:3,i));
      // 'get_JpCoMqp_Jpi_qp_xelo:87' ai = iR0*T(1:3,3,i);
      for (i = 0; i < 3; i++) {
        P_tmp = i + 3 * iRi_1_tmp_0;
        P[P_tmp] = 0.0;
        iRi_1_tmp_1 = i + 3 * T_tmp;
        Wi[iRi_1_tmp_1] = 0.0;
        PartialWPi_tmp = i + 3 * Jpi_qp_tmp;
        PartialWPi[PartialWPi_tmp] = 0.0;
        PartialVPi_tmp = i + 3 * tmp_3;
        PartialVPi[PartialVPi_tmp] = 0.0;
        P[P_tmp] += iRi_1[i] * tmp_0[12];
        Wi_tmp = (PartialVPi_idx_1_tmp - 1) * 3;
        Wi[iRi_1_tmp_1] += Wi_1[Wi_tmp] * iRi_1[i];
        PartialWPi_tmp_0 = (PartialVPi_idx_1_tmp - 1) * 3;
        PartialWPi[PartialWPi_tmp] += PartialWPi_1[PartialWPi_tmp_0] * iRi_1[i];
        PartialVPi_tmp_0 = (PartialVPi_idx_1_tmp - 1) * 3;
        PartialVPi[PartialVPi_tmp] += PartialVPi_1[PartialVPi_tmp_0] * iRi_1[i];
        iRi_1_0 = iRi_1[i + 3];
        P[P_tmp] += iRi_1_0 * tmp_0[13];
        Wi[iRi_1_tmp_1] += Wi_1[Wi_tmp + 1] * iRi_1_0;
        PartialWPi[PartialWPi_tmp] += PartialWPi_1[PartialWPi_tmp_0 + 1] *
          iRi_1_0;
        PartialVPi[PartialVPi_tmp] += PartialVPi_1[PartialVPi_tmp_0 + 1] *
          iRi_1_0;
        iRi_1_0 = iRi_1[i + 6];
        P[P_tmp] += iRi_1_0 * tmp_0[14];
        Wi[iRi_1_tmp_1] += Wi_1[Wi_tmp + 2] * iRi_1_0;
        PartialWPi[PartialWPi_tmp] += PartialWPi_1[PartialWPi_tmp_0 + 2] *
          iRi_1_0;
        PartialVPi[PartialVPi_tmp] += PartialVPi_1[PartialVPi_tmp_0 + 2] *
          iRi_1_0;
        ai[i] = T[((b_i + 1) << 4) + 10] * iRi_1_tmp[i + 6] + (T[((b_i + 1) << 4)
          + 9] * iRi_1_tmp[i + 3] + T[((b_i + 1) << 4) + 8] * iRi_1_tmp[i]);
      }

      //  ^ia = ^iR_0 ^0a
      // 'get_JpCoMqp_Jpi_qp_xelo:88' P_Gi = CoM_j(:,i);
      //  if M(i) == 0   % Ya que NO existe actuador en los marcos que NO tienen asignada una massa.  
      // 'get_JpCoMqp_Jpi_qp_xelo:90' if act(i) == 0
      if (walk_DW.act[b_i + 1] == 0.0) {
        // 'get_JpCoMqp_Jpi_qp_xelo:91' Wi(:,i) = Wi(:,ant(i));
        T_tmp = (PartialVPi_idx_1_tmp - 1) * 3;
        iRi_1_0 = Wi[T_tmp + 1];
        Wi_idx_2 = Wi[T_tmp + 2];
        Wi[3 * (b_i + 1)] = Wi[T_tmp];
        iRi_1_tmp_1 = 1 + 3 * (b_i + 1);
        Wi[iRi_1_tmp_1] = iRi_1_0;
        Wi_tmp = 2 + 3 * (b_i + 1);
        Wi[Wi_tmp] = Wi_idx_2;

        // 'get_JpCoMqp_Jpi_qp_xelo:92' Vi(:,i) = Vi(:,ant(i));
        // 'get_JpCoMqp_Jpi_qp_xelo:93' V_Gi(:,i) = [0;0;0];
        // 'get_JpCoMqp_Jpi_qp_xelo:94' PartialWPi(:,i) = PartialWPi(:,ant(i));
        T_tmp = (PartialVPi_idx_1_tmp - 1) * 3;
        PartialWPi_idx_1 = PartialWPi[T_tmp + 1];
        PartialWPi_idx_2 = PartialWPi[T_tmp + 2];
        PartialWPi[3 * (b_i + 1)] = PartialWPi[T_tmp];
        PartialWPi[iRi_1_tmp_1] = PartialWPi_idx_1;
        PartialWPi[Wi_tmp] = PartialWPi_idx_2;

        // 'get_JpCoMqp_Jpi_qp_xelo:95' PartialVPi(:,i) = PartialVPi(:,ant(i));
        PartialVPi_idx_1_tmp = (PartialVPi_idx_1_tmp - 1) * 3;
        PartialVPi_idx_1 = PartialVPi[PartialVPi_idx_1_tmp + 1];
        PartialVPi_idx_2 = PartialVPi[PartialVPi_idx_1_tmp + 2];

        // 'get_JpCoMqp_Jpi_qp_xelo:96' PartialVp_Gi(:,i) = [0;0;0];
        PartialVPi[3 * (b_i + 1)] = PartialVPi[PartialVPi_idx_1_tmp];
        PartialVp_Gi[3 * (b_i + 1)] = 0.0;
        PartialVPi[iRi_1_tmp_1] = PartialVPi_idx_1;
        PartialVp_Gi[iRi_1_tmp_1] = 0.0;
        PartialVPi[Wi_tmp] = PartialVPi_idx_2;
        PartialVp_Gi[Wi_tmp] = 0.0;
      } else {
        // 'get_JpCoMqp_Jpi_qp_xelo:97' else
        // 'get_JpCoMqp_Jpi_qp_xelo:98' Wi(:,i) = Wi(:,ant(i)) + ai*qp(cont);
        qp_tmp = qp[static_cast<int32_T>(cont) - 1];
        T_tmp = (PartialVPi_idx_1_tmp - 1) * 3;
        iRi_1_0 = Wi[T_tmp + 1] + ai[1] * qp_tmp;
        Wi_idx_2 = Wi[T_tmp + 2] + ai[2] * qp_tmp;
        Wi[3 * (b_i + 1)] = Wi[T_tmp] + ai[0] * qp_tmp;
        Wi[1 + 3 * (b_i + 1)] = iRi_1_0;
        Wi[2 + 3 * (b_i + 1)] = Wi_idx_2;

        // ^iw_{i} = ^iw_{i-1} + ^ia_i * qp_k   % Velocidad angular del marco i (respecto a i) 
        // 'get_JpCoMqp_Jpi_qp_xelo:99' Vi(:,i) = Vi(:,ant(i)) + cross_matrix(Wi(:,ant(i)))*P(:,i); 
        // ^iv_{i} = ^iv_{i-1} + ^iw_{i-1} X ^iP_{i-1,i}   % Velocidad lineal del marco i (respecto a i) 
        // 'get_JpCoMqp_Jpi_qp_xelo:100' V_Gi(:,i) = Vi(:,i) + cross_matrix(Wi(:,i))*P_Gi; 
        // ^iv_{Gi} = ^iv_{i} + ^iw_i X ^iP_{Gi}   % Velocidad del CoM del marco i (respecto a i) 
        //  La siguiente sería la única ecuación que cambi?. se le quito "ai*qpp(cont)" a "WPi{i}" por lo que ahora se llama "parcial" 
        //  WPi{i} =  WPi{ant(i)} + ai*qpp(cont) + cross_matrix(Wi{i})*ai*qp(cont); 
        // 'get_JpCoMqp_Jpi_qp_xelo:103' PartialWPi(:,i) =  PartialWPi(:,ant(i)) + cross_matrix(Wi(:,i))*ai*qp(cont); 
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        T_0[0] = 0.0;
        T_0[3] = -Wi[(b_i + 1) * 3 + 2];
        T_0[6] = Wi[(b_i + 1) * 3 + 1];
        T_0[1] = Wi[(b_i + 1) * 3 + 2];
        T_0[4] = 0.0;
        iRi_1_0 = Wi[(b_i + 1) * 3];
        T_0[7] = -iRi_1_0;
        Wi_idx_2 = -Wi[(b_i + 1) * 3 + 1];
        T_0[2] = Wi_idx_2;
        T_0[5] = iRi_1_0;
        T_0[8] = 0.0;
        for (T_tmp = 0; T_tmp < 3; T_tmp++) {
          PartialWPi_0[T_tmp] = PartialWPi[(PartialVPi_idx_1_tmp - 1) * 3 +
            T_tmp] + (T_0[T_tmp + 6] * ai[2] + (T_0[T_tmp + 3] * ai[1] +
            T_0[T_tmp] * ai[0])) * qp_tmp;
        }

        PartialWPi[3 * (b_i + 1)] = PartialWPi_0[0];
        PartialWPi[1 + 3 * (b_i + 1)] = PartialWPi_0[1];
        PartialWPi[2 + 3 * (b_i + 1)] = PartialWPi_0[2];

        //  Las siguientes dos ecuaciones se calculan normalmente pero como se le quito "ai*qpp(cont)" a "WPi{i}" ya no est?completa por consecuencia 
        //  "VPi" y "Vp_G" tampoco. As? éstas corresponderían sólo a "Jpj*qp" y "JpCoMj*qp" respectivamente. 
        // 'get_JpCoMqp_Jpi_qp_xelo:106' PartialVPi(:,i) = PartialVPi(:,ant(i)) + cross_matrix(PartialWPi(:,ant(i)))*P(:,i) + cross_matrix(Wi(:,ant(i)))*cross_matrix(Wi(:,ant(i)))*P(:,i); 
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        T_0[0] = 0.0;
        T_tmp = (static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3 + 2;
        T_0[3] = -PartialWPi[T_tmp];
        Jpi_qp_tmp = (static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3 + 1;
        T_0[6] = PartialWPi[Jpi_qp_tmp];
        T_0[1] = PartialWPi[T_tmp];
        T_0[4] = 0.0;
        qp_tmp = PartialWPi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3];
        T_0[7] = -qp_tmp;
        T_0[2] = -PartialWPi[Jpi_qp_tmp];
        T_0[5] = qp_tmp;
        T_0[8] = 0.0;
        iRi_1_tmp[0] = 0.0;
        iRi_1_tmp[3] = -Wi[T_tmp];
        iRi_1_tmp[6] = Wi[Jpi_qp_tmp];
        iRi_1_tmp[1] = Wi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3 +
          2];
        iRi_1_tmp[4] = 0.0;
        qp_tmp = Wi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3];
        iRi_1_tmp[7] = -qp_tmp;
        PartialWPi_idx_1 = -Wi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) *
          3 + 1];
        iRi_1_tmp[2] = PartialWPi_idx_1;
        iRi_1_tmp[5] = qp_tmp;
        iRi_1_tmp[8] = 0.0;
        tmp_1[0] = 0.0;
        tmp_1[3] = -Wi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3 + 2];
        tmp_1[6] = Wi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3 + 1];
        tmp_1[1] = Wi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3 + 2];
        tmp_1[4] = 0.0;
        tmp_1[7] = -Wi[(static_cast<int32_T>(walk_DW.ant[1 + b_i]) - 1) * 3];
        tmp_1[2] = PartialWPi_idx_1;
        tmp_1[5] = qp_tmp;
        tmp_1[8] = 0.0;
        for (T_tmp = 0; T_tmp < 3; T_tmp++) {
          qp_tmp = 0.0;
          for (Jpi_qp_tmp = 0; Jpi_qp_tmp < 3; Jpi_qp_tmp++) {
            tmp_3 = T_tmp + 3 * Jpi_qp_tmp;
            tmp_2[tmp_3] = 0.0;
            tmp_2[tmp_3] += tmp_1[3 * Jpi_qp_tmp] * iRi_1_tmp[T_tmp];
            tmp_2[tmp_3] += tmp_1[3 * Jpi_qp_tmp + 1] * iRi_1_tmp[T_tmp + 3];
            tmp_2[tmp_3] += tmp_1[3 * Jpi_qp_tmp + 2] * iRi_1_tmp[T_tmp + 6];
            qp_tmp += P[(b_i + 1) * 3 + Jpi_qp_tmp] * T_0[tmp_3];
          }

          ai[T_tmp] = PartialVPi[(PartialVPi_idx_1_tmp - 1) * 3 + T_tmp] +
            qp_tmp;
          PartialWPi_0[T_tmp] = P[(b_i + 1) * 3 + 2] * tmp_2[T_tmp + 6] + (P
            [(b_i + 1) * 3 + 1] * tmp_2[T_tmp + 3] + P[(b_i + 1) * 3] *
            tmp_2[T_tmp]);
        }

        // 'get_JpCoMqp_Jpi_qp_xelo:107' PartialVp_Gi(:,i) = PartialVPi(:,i) + cross_matrix(PartialWPi(:,i))*P_Gi + cross_matrix(Wi(:,i))*cross_matrix(Wi(:,i))*P_Gi; 
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        T_0[0] = 0.0;
        T_0[3] = -PartialWPi[(b_i + 1) * 3 + 2];
        T_0[6] = PartialWPi[(b_i + 1) * 3 + 1];
        T_0[1] = PartialWPi[(b_i + 1) * 3 + 2];
        T_0[4] = 0.0;
        T_0[7] = -PartialWPi[(b_i + 1) * 3];
        T_0[2] = -PartialWPi[(b_i + 1) * 3 + 1];
        T_0[5] = PartialWPi[(b_i + 1) * 3];
        T_0[8] = 0.0;
        iRi_1_tmp[0] = 0.0;
        iRi_1_tmp[3] = -Wi[(b_i + 1) * 3 + 2];
        iRi_1_tmp[6] = Wi[(b_i + 1) * 3 + 1];
        iRi_1_tmp[1] = Wi[(b_i + 1) * 3 + 2];
        iRi_1_tmp[4] = 0.0;
        iRi_1_tmp[7] = -Wi[(b_i + 1) * 3];
        iRi_1_tmp[2] = Wi_idx_2;
        iRi_1_tmp[5] = iRi_1_0;
        iRi_1_tmp[8] = 0.0;
        tmp_1[0] = 0.0;
        tmp_1[3] = -Wi[(b_i + 1) * 3 + 2];
        tmp_1[6] = Wi[(b_i + 1) * 3 + 1];
        tmp_1[1] = Wi[(b_i + 1) * 3 + 2];
        tmp_1[4] = 0.0;
        tmp_1[7] = -Wi[(b_i + 1) * 3];
        tmp_1[2] = Wi_idx_2;
        tmp_1[5] = iRi_1_0;
        tmp_1[8] = 0.0;
        for (PartialVPi_idx_1_tmp = 0; PartialVPi_idx_1_tmp < 3;
             PartialVPi_idx_1_tmp++) {
          PartialVPi[PartialVPi_idx_1_tmp + 3 * (b_i + 1)] =
            ai[PartialVPi_idx_1_tmp] + PartialWPi_0[PartialVPi_idx_1_tmp];
          for (T_tmp = 0; T_tmp < 3; T_tmp++) {
            Jpi_qp_tmp = PartialVPi_idx_1_tmp + 3 * T_tmp;
            tmp_2[Jpi_qp_tmp] = 0.0;
            tmp_2[Jpi_qp_tmp] += tmp_1[3 * T_tmp] *
              iRi_1_tmp[PartialVPi_idx_1_tmp];
            tmp_2[Jpi_qp_tmp] += tmp_1[3 * T_tmp + 1] *
              iRi_1_tmp[PartialVPi_idx_1_tmp + 3];
            tmp_2[Jpi_qp_tmp] += tmp_1[3 * T_tmp + 2] *
              iRi_1_tmp[PartialVPi_idx_1_tmp + 6];
          }
        }

        for (PartialVPi_idx_1_tmp = 0; PartialVPi_idx_1_tmp < 3;
             PartialVPi_idx_1_tmp++) {
          iRi_1_0 = walk_DW.CoM_stack[(b_i + 1) * 3];
          T_tmp = (b_i + 1) * 3 + PartialVPi_idx_1_tmp;
          PartialVp_Gi[T_tmp] = (((walk_DW.CoM_stack[(b_i + 1) * 3 + 1] *
            T_0[PartialVPi_idx_1_tmp + 3] + iRi_1_0 * T_0[PartialVPi_idx_1_tmp])
            + walk_DW.CoM_stack[(b_i + 1) * 3 + 2] * T_0[PartialVPi_idx_1_tmp +
            6]) + PartialVPi[T_tmp]) + (walk_DW.CoM_stack[(b_i + 1) * 3 + 2] *
            tmp_2[PartialVPi_idx_1_tmp + 6] + (walk_DW.CoM_stack[(b_i + 1) * 3 +
            1] * tmp_2[PartialVPi_idx_1_tmp + 3] + iRi_1_0 *
            tmp_2[PartialVPi_idx_1_tmp]));
        }

        // 'get_JpCoMqp_Jpi_qp_xelo:108' cont = cont + 1;
        cont++;
      }

      //  ---------------------
      //  Éstos serán las nuevas velocidades y aceleraciones:
      // 'get_JpCoMqp_Jpi_qp_xelo:112' Wi_1(:,i) = Wi(:,i);
      //  ^{i-1}w_{i-1}
      // 'get_JpCoMqp_Jpi_qp_xelo:113' Vi_1(:,i) = Vi(:,i);
      //  ^{i-1}v_{i-1}
      // 'get_JpCoMqp_Jpi_qp_xelo:114' PartialWPi_1(:,i) = PartialWPi(:,i);
      //  ^{i-1}wp_{i-1}
      // 'get_JpCoMqp_Jpi_qp_xelo:115' PartialVPi_1(:,i) = PartialVPi(:,i);
      //  ^{i-1}vp_{i-1}
      //  ---------------------
      // 'get_JpCoMqp_Jpi_qp_xelo:117' Vel_CoMs(:,i) = T(1:3,1:4,i)*[V_Gi(:,i);0]; 
      //  ^0v_G = ^0R_i*^iv_G
      // 'get_JpCoMqp_Jpi_qp_xelo:118' Vel_CoM = Vel_CoM +  M(i)*Vel_CoMs(:,i);
      // 'get_JpCoMqp_Jpi_qp_xelo:119' PartialAce_CoMs(:,i) = T(1:3,1:4,i)*[PartialVp_Gi(:,i);0]; 
      Wi_1[3 * (b_i + 1)] = Wi[(b_i + 1) * 3];
      qp_tmp = PartialWPi[(b_i + 1) * 3];
      PartialWPi_1[3 * (b_i + 1)] = qp_tmp;
      Wi_idx_2 = PartialVPi[(b_i + 1) * 3];
      PartialVPi_1[3 * (b_i + 1)] = Wi_idx_2;
      iRi_1_0 = PartialVp_Gi[(b_i + 1) * 3];
      Wi_1[1 + 3 * (b_i + 1)] = Wi[(b_i + 1) * 3 + 1];
      PartialWPi_1[1 + 3 * (b_i + 1)] = PartialWPi[(b_i + 1) * 3 + 1];
      PartialVPi_1[1 + 3 * (b_i + 1)] = PartialVPi[(b_i + 1) * 3 + 1];
      PartialVPi_idx_1_tmp = (b_i + 1) * 3 + 1;
      Wi_1[2 + 3 * (b_i + 1)] = Wi[(b_i + 1) * 3 + 2];
      PartialWPi_1[2 + 3 * (b_i + 1)] = PartialWPi[(b_i + 1) * 3 + 2];
      PartialVPi_1[2 + 3 * (b_i + 1)] = PartialVPi[(b_i + 1) * 3 + 2];
      T_tmp = (b_i + 1) * 3 + 2;
      iRi_1_tmp_0 = b_i + 1;
      for (Jpi_qp_tmp = 0; Jpi_qp_tmp < 3; Jpi_qp_tmp++) {
        iRi_1_tmp_1 = Jpi_qp_tmp + 3 * iRi_1_tmp_0;
        PartialAce_CoMs[iRi_1_tmp_1] = 0.0;
        Wi_tmp = ((b_i + 1) << 4) + Jpi_qp_tmp;
        PartialAce_CoMs[iRi_1_tmp_1] += T[Wi_tmp] * iRi_1_0;
        PartialAce_CoMs[iRi_1_tmp_1] += T[Wi_tmp + 4] *
          PartialVp_Gi[PartialVPi_idx_1_tmp];
        PartialAce_CoMs[iRi_1_tmp_1] += T[Wi_tmp + 8] * PartialVp_Gi[T_tmp];
      }

      //  ^0vp_G = ^0R_i*^ivp_G ..hubiera sido lo mismo "T(1:3,1:3,i)*PartialVp_Gi{i};" 
      // 'get_JpCoMqp_Jpi_qp_xelo:120' PartialAce_CoM = PartialAce_CoM +  M(i)*PartialAce_CoMs(:,i); 
      iRi_1_0 = walk_DW.mass_stack[b_i + 1];

      //  Formamos el vector de aceleraciones (linear y angular) de cada uno de los Marcos de referencia 
      // 'get_JpCoMqp_Jpi_qp_xelo:122' PartialAce_i = T(1:3,1:4,i)*[PartialVPi(:,i);0]; 
      //  ^0vp_i = ^0R_i*^ivp_i
      // 'get_JpCoMqp_Jpi_qp_xelo:123' PartialWP_i = T(1:3,1:4,i)*[PartialWPi(:,i);0]; 
      //  ^0vp_i = ^0R_i*^ivp_i
      // 'get_JpCoMqp_Jpi_qp_xelo:124' PartialAceFrame_i(:,i) = [PartialAce_i; PartialWP_i]; 
      JpCoMqp[0] += PartialAce_CoMs[(b_i + 1) * 3] * iRi_1_0;
      PartialVPi_idx_1 = PartialVPi[(b_i + 1) * 3 + 1];
      PartialWPi_idx_1 = PartialWPi[(b_i + 1) * 3 + 1];
      JpCoMqp[1] += PartialAce_CoMs[(b_i + 1) * 3 + 1] * iRi_1_0;
      PartialVPi_idx_2 = PartialVPi[(b_i + 1) * 3 + 2];
      PartialWPi_idx_2 = PartialWPi[(b_i + 1) * 3 + 2];
      JpCoMqp[2] += PartialAce_CoMs[(b_i + 1) * 3 + 2] * iRi_1_0;
      iRi_1_tmp_0 = b_i + 1;
      for (PartialVPi_idx_1_tmp = 0; PartialVPi_idx_1_tmp < 3;
           PartialVPi_idx_1_tmp++) {
        T_tmp = ((b_i + 1) << 4) + PartialVPi_idx_1_tmp;
        iRi_1_0 = T[T_tmp + 4];
        T_tmp_0 = T[T_tmp + 8];
        Jpi_qp_tmp = PartialVPi_idx_1_tmp + 6 * iRi_1_tmp_0;
        Jpi_qp[Jpi_qp_tmp] = T_tmp_0 * PartialVPi_idx_2 + (iRi_1_0 *
          PartialVPi_idx_1 + T[T_tmp] * Wi_idx_2);
        Jpi_qp[Jpi_qp_tmp + 3] = T_tmp_0 * PartialWPi_idx_2 + (iRi_1_0 *
          PartialWPi_idx_1 + T[T_tmp] * qp_tmp);
      }
    }

    // Vel_CoM = Vel_CoM/robot_TALOS.mass;
    // 'get_JpCoMqp_Jpi_qp_xelo:128' Vel_CoM = Vel_CoM/mass_tot;
    // PartialAce_CoM = PartialAce_CoM/robot_TALOS.mass;
    // 'get_JpCoMqp_Jpi_qp_xelo:130' PartialAce_CoM = PartialAce_CoM/mass_tot;
    JpCoMqp[0] /= walk_DW.mass_tot;
    JpCoMqp[1] /= walk_DW.mass_tot;
    JpCoMqp[2] /= walk_DW.mass_tot;

    // 'get_JpCoMqp_Jpi_qp_xelo:132' JpCoMqp=PartialAce_CoM;
    // 'get_JpCoMqp_Jpi_qp_xelo:133' Jpi_qp=PartialAceFrame_i;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_polyder_g(const real_T u_data[], const int32_T
    *u_size, real_T a_data[], int32_T a_size[2])
  {
    int32_T nlead0;
    int32_T ny;
    int32_T c_k;
    nlead0 = 0;
    ny = 0;
    while ((ny <= *u_size - 3) && (u_data[ny] == 0.0)) {
      nlead0++;
      ny++;
    }

    ny = (*u_size - nlead0) - 1;
    a_size[0] = 1;
    a_size[1] = ny;
    for (c_k = 0; c_k < ny; c_k++) {
      a_data[c_k] = u_data[c_k + nlead0];
    }

    nlead0 = ny - 2;
    for (ny = 0; ny <= nlead0; ny++) {
      a_data[ny] *= static_cast<real_T>(((nlead0 - ny) + 1)) + 1.0;
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval_a(const real_T p_data[], const int32_T
    p_size[2], real_T x)
  {
    real_T y;
    int32_T k;
    if (p_size[1] != 0) {
      y = p_data[0];
      for (k = 0; k <= p_size[1] - 2; k++) {
        y = x * y + p_data[k + 1];
      }
    }

    return y;
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function dhd_dPhi = get_dhd_dphi_init(qf,t)
  //
  void walkModelClass::walk_get_dhd_dphi_init(real_T t, real_T dhd_dPhi[84])
  {
    b_cell_wrap_0_walk_T hd_phi[28];
    real_T phi;
    int32_T i;
    real_T tmp_data[7];
    int32_T tmp_size[2];

    // 'get_dhd_dphi_init:2' x = qf(1);
    // 'get_dhd_dphi_init:3' y = qf(2);
    //  The partial x-derivative of the constraint. Must be adapted to the
    //  constraints
    // 'get_dhd_dphi_init:8' hd_phi=cell(1,28);
    // 'get_dhd_dphi_init:9' hd_phi{1}=hd1;
    hd_phi[0].f1.size = 8;
    memcpy(&hd_phi[0].f1.data[0], &walk_DW.hd1[0], sizeof(real_T) << 3U);

    // 'get_dhd_dphi_init:9' hd_phi{2}=hd2;
    hd_phi[1].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[1].f1.data[i] = walk_DW.hd2[i];
    }

    // 'get_dhd_dphi_init:9' hd_phi{3}=hd3;
    hd_phi[2].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[2].f1.data[i] = walk_DW.hd3[i];
    }

    // 'get_dhd_dphi_init:9' hd_phi{4}=hd4;
    hd_phi[3].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[3].f1.data[i] = walk_DW.hd4[i];
    }

    // 'get_dhd_dphi_init:9' hd_phi{5}=hd5;
    hd_phi[4].f1.size = 6;

    // 'get_dhd_dphi_init:9' hd_phi{6}=hd6;
    hd_phi[5].f1.size = 6;

    // 'get_dhd_dphi_init:9' hd_phi{7}=hd7;
    hd_phi[6].f1.size = 6;

    // 'get_dhd_dphi_init:9' hd_phi{8}=hd8;
    hd_phi[7].f1.size = 6;

    // 'get_dhd_dphi_init:9' hd_phi{9}=hd9;
    hd_phi[8].f1.size = 6;

    // 'get_dhd_dphi_init:9' hd_phi{10}=hd10;
    hd_phi[9].f1.size = 6;

    // 'get_dhd_dphi_init:9' hd_phi{11}=hd11;
    hd_phi[10].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[4].f1.data[i] = walk_DW.hd5[i];
      hd_phi[5].f1.data[i] = walk_DW.hd6[i];
      hd_phi[6].f1.data[i] = walk_DW.hd7[i];
      hd_phi[7].f1.data[i] = walk_DW.hd8[i];
      hd_phi[8].f1.data[i] = walk_DW.hd9[i];
      hd_phi[9].f1.data[i] = walk_DW.hd10[i];
      hd_phi[10].f1.data[i] = walk_DW.hd11[i];
    }

    // 'get_dhd_dphi_init:9' hd_phi{12}=hd12;
    hd_phi[11].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[11].f1.data[i] = walk_DW.hd12[i];
    }

    // 'get_dhd_dphi_init:10' hd_phi{13}=hd13;
    hd_phi[12].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{14}=hd14;
    hd_phi[13].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{15}=hd15;
    hd_phi[14].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{16}=hd16;
    hd_phi[15].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{17}=hd17;
    hd_phi[16].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[12].f1.data[i] = walk_DW.hd13[i];
      hd_phi[13].f1.data[i] = walk_DW.hd14[i];
      hd_phi[14].f1.data[i] = walk_DW.hd15[i];
      hd_phi[15].f1.data[i] = walk_DW.hd16[i];
      hd_phi[16].f1.data[i] = walk_DW.hd17[i];
    }

    // 'get_dhd_dphi_init:10' hd_phi{18}=hd18;
    hd_phi[17].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[17].f1.data[i] = walk_DW.hd18[i];
    }

    // 'get_dhd_dphi_init:10' hd_phi{19}=hd19;
    hd_phi[18].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{20}=hd20;
    hd_phi[19].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{21}=hd21;
    hd_phi[20].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{22}=hd22;
    hd_phi[21].f1.size = 6;

    // 'get_dhd_dphi_init:10' hd_phi{23}=hd23;
    hd_phi[22].f1.size = 6;

    // 'get_dhd_dphi_init:11' hd_phi{24}=hd24;
    hd_phi[23].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[18].f1.data[i] = walk_DW.hd19[i];
      hd_phi[19].f1.data[i] = walk_DW.hd20[i];
      hd_phi[20].f1.data[i] = walk_DW.hd21[i];
      hd_phi[21].f1.data[i] = walk_DW.hd22[i];
      hd_phi[22].f1.data[i] = walk_DW.hd23[i];
      hd_phi[23].f1.data[i] = walk_DW.hd24[i];
    }

    // 'get_dhd_dphi_init:11' hd_phi{25}=hd25;
    hd_phi[24].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[24].f1.data[i] = walk_DW.hd25[i];
    }

    // 'get_dhd_dphi_init:11' hd_phi{26}=hd26;
    hd_phi[25].f1.size = 6;

    // 'get_dhd_dphi_init:11' hd_phi{27}=hd27;
    hd_phi[26].f1.size = 6;

    // 'get_dhd_dphi_init:11' hd_phi{28}=hd28;
    hd_phi[27].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[25].f1.data[i] = walk_DW.hd26[i];
      hd_phi[26].f1.data[i] = walk_DW.hd27[i];
      hd_phi[27].f1.data[i] = walk_DW.hd28[i];
    }

    // 'get_dhd_dphi_init:15' phi = t/T_des;
    phi = t / walk_DW.T_des;

    // 'get_dhd_dphi_init:20' dhd_dPhi = zeros(28,3);
    memset(&dhd_dPhi[0], 0, 84U * sizeof(real_T));

    // 'get_dhd_dphi_init:21' for i=1:28
    for (i = 0; i < 28; i++) {
      // 'get_dhd_dphi_init:22' dhd_dPhi(i,3) =  polyval(polyder(hd_phi{i}),phi); 
      walk_polyder_g(hd_phi[i].f1.data, &hd_phi[i].f1.size, tmp_data, tmp_size);
      dhd_dPhi[56 + i] = walk_polyval_a(tmp_data, tmp_size, phi);
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xswap(real_T x[900], int32_T ix0, int32_T iy0)
  {
    int32_T ix;
    int32_T iy;
    real_T temp;
    int32_T k;
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < 30; k++) {
      temp = x[ix];
      x[ix] = x[iy];
      x[iy] = temp;
      ix += 30;
      iy += 30;
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xgetrf(real_T A[900], int32_T ipiv[30], int32_T
    *info)
  {
    int32_T j;
    int32_T c;
    int32_T ix;
    real_T smax;
    real_T s;
    int32_T k;
    int32_T jA;
    int32_T b_ix;
    int32_T d;
    int32_T ijA;
    for (j = 0; j < 30; j++) {
      ipiv[j] = 1 + j;
    }

    *info = 0;
    for (j = 0; j < 29; j++) {
      c = j * 31;
      jA = 1;
      ix = c;
      smax = std::abs(A[c]);
      for (k = 2; k <= 30 - j; k++) {
        ix++;
        s = std::abs(A[ix]);
        if (s > smax) {
          jA = k;
          smax = s;
        }
      }

      if (A[(c + jA) - 1] != 0.0) {
        if (jA - 1 != 0) {
          ipiv[j] = j + jA;
          walk_xswap(A, j + 1, j + jA);
        }

        jA = (c - j) + 30;
        for (ix = c + 1; ix < jA; ix++) {
          A[ix] /= A[c];
        }
      } else {
        *info = j + 1;
      }

      jA = c + 31;
      ix = c + 30;
      for (k = 0; k <= 28 - j; k++) {
        smax = A[ix];
        if (A[ix] != 0.0) {
          b_ix = c + 1;
          d = (jA - j) + 29;
          for (ijA = jA; ijA < d; ijA++) {
            A[ijA] += A[b_ix] * -smax;
            b_ix++;
          }
        }

        ix += 30;
        jA += 30;
      }
    }

    if ((*info == 0) && (A[899] == 0.0)) {
      *info = 30;
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xtrsm_et(const real_T A[900], real_T B[90])
  {
    int32_T jBcol;
    int32_T kAcol;
    int32_T j;
    int32_T k;
    int32_T i;
    int32_T tmp;
    for (j = 0; j < 3; j++) {
      jBcol = 30 * j;
      for (k = 0; k < 30; k++) {
        kAcol = 30 * k;
        if (B[k + jBcol] != 0.0) {
          for (i = k + 2; i < 31; i++) {
            tmp = (i + jBcol) - 1;
            B[tmp] -= A[(i + kAcol) - 1] * B[k + jBcol];
          }
        }
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xtrsm_et4(const real_T A[900], real_T B[90])
  {
    int32_T jBcol;
    int32_T kAcol;
    int32_T j;
    int32_T k;
    int32_T i;
    int32_T tmp;
    int32_T tmp_0;
    for (j = 0; j < 3; j++) {
      jBcol = 30 * j;
      for (k = 29; k >= 0; k--) {
        kAcol = 30 * k;
        tmp = k + jBcol;
        if (B[tmp] != 0.0) {
          B[tmp] /= A[k + kAcol];
          for (i = 0; i < k; i++) {
            tmp_0 = i + jBcol;
            B[tmp_0] -= B[tmp] * A[i + kAcol];
          }
        }
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_mldivide_p(const real_T A[900], real_T B[90])
  {
    real_T temp;
    int32_T ip;
    int32_T ipiv[30];
    int32_T info;
    memcpy(&walk_B.b_A_p[0], &A[0], 900U * sizeof(real_T));
    walk_xgetrf(walk_B.b_A_p, ipiv, &info);
    for (info = 0; info < 29; info++) {
      if (info + 1 != ipiv[info]) {
        ip = ipiv[info] - 1;
        temp = B[info];
        B[info] = B[ip];
        B[ip] = temp;
        temp = B[info + 30];
        B[info + 30] = B[ip + 30];
        B[ip + 30] = temp;
        temp = B[info + 60];
        B[info + 60] = B[ip + 60];
        B[ip + 60] = temp;
      }
    }

    walk_xtrsm_et(walk_B.b_A_p, B);
    walk_xtrsm_et4(walk_B.b_A_p, B);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [JQ,JPhi] = get_JQ_JPhi_xelo_init(J_h,J_CoM,dhd_dPhi)
  //
  void walkModelClass::walk_get_JQ_JPhi_xelo_init(const real_T J_h[840], const
    real_T J_CoM[90], const real_T dhd_dPhi[84], real_T JQ[900], real_T JPhi[90])
  {
    static const int8_T b[3] = { 1, 0, 0 };

    static const int8_T c[3] = { 0, 1, 0 };

    int32_T i;

    // 'get_JQ_JPhi_xelo_init:3' JQ=zeros(30,30);
    memset(&JQ[0], 0, 900U * sizeof(real_T));

    // 'get_JQ_JPhi_xelo_init:4' JQ(1:28,:)=J_h;
    // 'get_JQ_JPhi_xelo_init:5' JQ(29:30,:)=J_CoM(1:2,:);
    for (i = 0; i < 30; i++) {
      memcpy(&JQ[i * 30], &J_h[i * 28], 28U * sizeof(real_T));
      JQ[28 + 30 * i] = J_CoM[3 * i];
      JQ[29 + 30 * i] = J_CoM[3 * i + 1];
    }

    // 'get_JQ_JPhi_xelo_init:7' Jd = [dhd_dPhi;
    // 'get_JQ_JPhi_xelo_init:8'         1, 0, 0;
    // 'get_JQ_JPhi_xelo_init:9'         0, 1, 0];
    // 'get_JQ_JPhi_xelo_init:11' JPhi = JQ\Jd;
    for (i = 0; i < 3; i++) {
      memcpy(&JPhi[i * 30], &dhd_dPhi[i * 28], 28U * sizeof(real_T));
      JPhi[28 + 30 * i] = b[i];
      JPhi[29 + 30 * i] = c[i];
    }

    walk_mldivide_p(JQ, JPhi);
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_polyder_g3(const real_T u_data[], const int32_T
    u_size[2], real_T a_data[], int32_T a_size[2])
  {
    int32_T nymax;
    int32_T nlead0;
    int32_T ny;
    if (u_size[1] < 2) {
      nymax = 1;
    } else {
      nymax = u_size[1] - 1;
    }

    a_size[0] = 1;
    a_size[1] = nymax;
    switch (u_size[1]) {
     case 0:
      a_data[0] = 0.0;
      break;

     case 1:
      a_data[0] = 0.0;
      break;

     default:
      nlead0 = 0;
      ny = 0;
      while ((ny <= nymax - 2) && (u_data[ny] == 0.0)) {
        nlead0++;
        ny++;
      }

      ny = nymax - nlead0;
      a_size[0] = 1;
      a_size[1] = ny;
      for (nymax = 0; nymax < ny; nymax++) {
        a_data[nymax] = u_data[nymax + nlead0];
      }
      break;
    }

    nlead0 = a_size[1] - 2;
    for (ny = 0; ny <= nlead0; ny++) {
      a_data[ny] *= static_cast<real_T>(((nlead0 - ny) + 1)) + 1.0;
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function dhd_dPhi_p = get_dhd_dphi_p_init(qf,qfp,t)
  //
  void walkModelClass::walk_get_dhd_dphi_p_init(const real_T qfp[2], real_T t,
    real_T dhd_dPhi_p[84])
  {
    b_cell_wrap_0_walk_T hd_phi[28];
    real_T phi;
    real_T dhd_dt2[84];
    int32_T i;
    real_T tmp_data[7];
    real_T tmp_data_0[6];
    int32_T tmp_size[2];
    int32_T tmp_size_0[2];
    real_T qfp_idx_2;

    // 'get_dhd_dphi_p_init:2' x = qf(1);
    // 'get_dhd_dphi_p_init:3' y = qf(2);
    //  The partial x-derivative of the constraint. Must be adapted to the
    //  constraints
    // 'get_dhd_dphi_p_init:8' hd_phi=cell(1,28);
    // 'get_dhd_dphi_p_init:9' hd_phi{1}=hd1;
    hd_phi[0].f1.size = 8;
    memcpy(&hd_phi[0].f1.data[0], &walk_DW.hd1[0], sizeof(real_T) << 3U);

    // 'get_dhd_dphi_p_init:9' hd_phi{2}=hd2;
    hd_phi[1].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[1].f1.data[i] = walk_DW.hd2[i];
    }

    // 'get_dhd_dphi_p_init:9' hd_phi{3}=hd3;
    hd_phi[2].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[2].f1.data[i] = walk_DW.hd3[i];
    }

    // 'get_dhd_dphi_p_init:9' hd_phi{4}=hd4;
    hd_phi[3].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[3].f1.data[i] = walk_DW.hd4[i];
    }

    // 'get_dhd_dphi_p_init:9' hd_phi{5}=hd5;
    hd_phi[4].f1.size = 6;

    // 'get_dhd_dphi_p_init:9' hd_phi{6}=hd6;
    hd_phi[5].f1.size = 6;

    // 'get_dhd_dphi_p_init:9' hd_phi{7}=hd7;
    hd_phi[6].f1.size = 6;

    // 'get_dhd_dphi_p_init:9' hd_phi{8}=hd8;
    hd_phi[7].f1.size = 6;

    // 'get_dhd_dphi_p_init:9' hd_phi{9}=hd9;
    hd_phi[8].f1.size = 6;

    // 'get_dhd_dphi_p_init:9' hd_phi{10}=hd10;
    hd_phi[9].f1.size = 6;

    // 'get_dhd_dphi_p_init:9' hd_phi{11}=hd11;
    hd_phi[10].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[4].f1.data[i] = walk_DW.hd5[i];
      hd_phi[5].f1.data[i] = walk_DW.hd6[i];
      hd_phi[6].f1.data[i] = walk_DW.hd7[i];
      hd_phi[7].f1.data[i] = walk_DW.hd8[i];
      hd_phi[8].f1.data[i] = walk_DW.hd9[i];
      hd_phi[9].f1.data[i] = walk_DW.hd10[i];
      hd_phi[10].f1.data[i] = walk_DW.hd11[i];
    }

    // 'get_dhd_dphi_p_init:9' hd_phi{12}=hd12;
    hd_phi[11].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[11].f1.data[i] = walk_DW.hd12[i];
    }

    // 'get_dhd_dphi_p_init:10' hd_phi{13}=hd13;
    hd_phi[12].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{14}=hd14;
    hd_phi[13].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{15}=hd15;
    hd_phi[14].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{16}=hd16;
    hd_phi[15].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{17}=hd17;
    hd_phi[16].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[12].f1.data[i] = walk_DW.hd13[i];
      hd_phi[13].f1.data[i] = walk_DW.hd14[i];
      hd_phi[14].f1.data[i] = walk_DW.hd15[i];
      hd_phi[15].f1.data[i] = walk_DW.hd16[i];
      hd_phi[16].f1.data[i] = walk_DW.hd17[i];
    }

    // 'get_dhd_dphi_p_init:10' hd_phi{18}=hd18;
    hd_phi[17].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[17].f1.data[i] = walk_DW.hd18[i];
    }

    // 'get_dhd_dphi_p_init:10' hd_phi{19}=hd19;
    hd_phi[18].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{20}=hd20;
    hd_phi[19].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{21}=hd21;
    hd_phi[20].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{22}=hd22;
    hd_phi[21].f1.size = 6;

    // 'get_dhd_dphi_p_init:10' hd_phi{23}=hd23;
    hd_phi[22].f1.size = 6;

    // 'get_dhd_dphi_p_init:11' hd_phi{24}=hd24;
    hd_phi[23].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[18].f1.data[i] = walk_DW.hd19[i];
      hd_phi[19].f1.data[i] = walk_DW.hd20[i];
      hd_phi[20].f1.data[i] = walk_DW.hd21[i];
      hd_phi[21].f1.data[i] = walk_DW.hd22[i];
      hd_phi[22].f1.data[i] = walk_DW.hd23[i];
      hd_phi[23].f1.data[i] = walk_DW.hd24[i];
    }

    // 'get_dhd_dphi_p_init:11' hd_phi{25}=hd25;
    hd_phi[24].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[24].f1.data[i] = walk_DW.hd25[i];
    }

    // 'get_dhd_dphi_p_init:11' hd_phi{26}=hd26;
    hd_phi[25].f1.size = 6;

    // 'get_dhd_dphi_p_init:11' hd_phi{27}=hd27;
    hd_phi[26].f1.size = 6;

    // 'get_dhd_dphi_p_init:11' hd_phi{28}=hd28;
    hd_phi[27].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[25].f1.data[i] = walk_DW.hd26[i];
      hd_phi[26].f1.data[i] = walk_DW.hd27[i];
      hd_phi[27].f1.data[i] = walk_DW.hd28[i];
    }

    // 'get_dhd_dphi_p_init:15' phi = t/T_des;
    phi = t / walk_DW.T_des;

    // 'get_dhd_dphi_p_init:18' Phip=[qfp;1/T_des];
    // 'get_dhd_dphi_p_init:20' dhd_dPhi_p = zeros(28,3);
    // 'get_dhd_dphi_p_init:21' dhd_dt2 = zeros(28,3);
    memset(&dhd_dPhi_p[0], 0, 84U * sizeof(real_T));
    memset(&dhd_dt2[0], 0, 84U * sizeof(real_T));

    // 'get_dhd_dphi_p_init:22' for i=1:28
    // 'get_dhd_dphi_p_init:26' dhd_dPhi_p(:,3)=dhd_dt2*Phip;
    qfp_idx_2 = 1.0 / walk_DW.T_des;
    for (i = 0; i < 28; i++) {
      // 'get_dhd_dphi_p_init:23' dhd_dt2(i,3) =  polyval(polyder(polyder(hd_phi{i})),phi); 
      walk_polyder_g(hd_phi[i].f1.data, &hd_phi[i].f1.size, tmp_data, tmp_size);
      walk_polyder_g3(tmp_data, tmp_size, tmp_data_0, tmp_size_0);
      dhd_dt2[56 + i] = walk_polyval_a(tmp_data_0, tmp_size_0, phi);
      dhd_dPhi_p[56 + i] = 0.0;
      dhd_dPhi_p[56 + i] += dhd_dt2[i] * qfp[0];
      dhd_dPhi_p[56 + i] += dhd_dt2[i + 28] * qfp[1];
      dhd_dPhi_p[56 + i] += dhd_dt2[i + 56] * qfp_idx_2;
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function OmeDot = OmeDotRPY(phi,theta,phip,thetap)
  // Computation of the transfert matrix for Jacobian computation in Roll,
  // Pitch, Yaw representation
  //  Given
  //  Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
  //           -sin(phi)               cos(phi)            0;
  //         cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
  //
  void walkModelClass::walk_OmeDotRPY(real_T phi, real_T theta, real_T phip,
    real_T thetap, real_T OmeDot[9])
  {
    real_T x_tmp;
    real_T OmeDot_tmp;
    real_T OmeDot_tmp_0;
    real_T OmeDot_tmp_1;
    real_T OmeDot_tmp_2;
    real_T OmeDot_tmp_3;

    //  Using Maple, the temporal derivative of "Ome" is given by
    // 'OmeDotRPY:10' OmeDot = zeros(3,3);
    memset(&OmeDot[0], 0, 9U * sizeof(real_T));

    // 'OmeDotRPY:11' OmeDot(1,1) = (cos(phi)*sin(theta)*thetap-sin(phi)*phip*cos(theta))/cos(theta)^2; 
    x_tmp = std::cos(theta);
    OmeDot_tmp = std::sin(phi);
    OmeDot_tmp_0 = std::sin(theta);
    OmeDot_tmp_1 = std::cos(phi);
    OmeDot[0] = (OmeDot_tmp_1 * OmeDot_tmp_0 * thetap - OmeDot_tmp * phip *
                 x_tmp) / (x_tmp * x_tmp);

    // 'OmeDotRPY:12' OmeDot(1,2) = (sin(phi)*sin(theta)*thetap+cos(phi)*phip*cos(theta))/cos(theta)^2; 
    OmeDot_tmp_3 = OmeDot_tmp_1 * phip;
    OmeDot[3] = (OmeDot_tmp * OmeDot_tmp_0 * thetap + OmeDot_tmp_3 * x_tmp) /
      (x_tmp * x_tmp);

    // 'OmeDotRPY:13' OmeDot(2,1) = -cos(phi)*phip;
    OmeDot[1] = -OmeDot_tmp_1 * phip;

    // 'OmeDotRPY:14' OmeDot(2,2) = -sin(phi)*phip;
    OmeDot_tmp_2 = -OmeDot_tmp * phip;
    OmeDot[4] = OmeDot_tmp_2;

    // 'OmeDotRPY:15' OmeDot(3,1) = (-sin(phi)*phip*sin(theta)*cos(theta)+cos(phi)*thetap)/cos(theta)^2; 
    OmeDot[2] = (OmeDot_tmp_2 * OmeDot_tmp_0 * x_tmp + OmeDot_tmp_1 * thetap) /
      (x_tmp * x_tmp);

    // 'OmeDotRPY:16' OmeDot(3,2) = (cos(phi)*phip*sin(theta)*cos(theta)+sin(phi)*thetap)/cos(theta)^2; 
    OmeDot[5] = (OmeDot_tmp_3 * OmeDot_tmp_0 * x_tmp + OmeDot_tmp * thetap) /
      (x_tmp * x_tmp);
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xtrsm(const real_T A[900], real_T B[30])
  {
    int32_T kAcol;
    int32_T k;
    int32_T i;
    for (k = 0; k < 30; k++) {
      kAcol = 30 * k;
      if (B[k] != 0.0) {
        for (i = k + 1; i + 1 < 31; i++) {
          B[i] -= A[i + kAcol] * B[k];
        }
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xtrsm_e(const real_T A[900], real_T B[30])
  {
    int32_T kAcol;
    int32_T k;
    int32_T i;
    for (k = 29; k >= 0; k--) {
      kAcol = 30 * k;
      if (B[k] != 0.0) {
        B[k] /= A[k + kAcol];
        for (i = 0; i < k; i++) {
          B[i] -= A[i + kAcol] * B[k];
        }
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_mldivide(const real_T A[900], real_T B[30])
  {
    real_T temp;
    int32_T ipiv[30];
    int32_T info;
    memcpy(&walk_B.b_A_n[0], &A[0], 900U * sizeof(real_T));
    walk_xgetrf(walk_B.b_A_n, ipiv, &info);
    for (info = 0; info < 29; info++) {
      if (info + 1 != ipiv[info]) {
        temp = B[info];
        B[info] = B[ipiv[info] - 1];
        B[ipiv[info] - 1] = temp;
      }
    }

    walk_xtrsm(walk_B.b_A_n, B);
    walk_xtrsm_e(walk_B.b_A_n, B);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [JQpqp,JPhipPhip] = get_JQpqp_JPhipPhip_xelo_init(T,JpCoMqp,Jpi_qp,qp,JQ,dhd_dPhi_p,qfp)
  // Computation of the derivative of jacobian of f function with respect time
  //  In here, computation is based on "VelPartialAccCoMs_Frames.m" and NOT in Symoro =)
  //  q = robot.q;
  // qp = robot_TALOS.qD;
  //
  void walkModelClass::w_get_JQpqp_JPhipPhip_xelo_init(const real_T T[784],
    const real_T JpCoMqp[3], const real_T Jpi_qp[294], const real_T qp[30],
    const real_T JQ[900], const real_T dhd_dPhi_p[84], const real_T qfp[2],
    real_T JQpqp[30], real_T JPhipPhip[30])
  {
    real_T phi;
    real_T theta;
    real_T Omega[9];
    real_T Hips[16];
    real_T J_T[90];
    real_T OmegaJTqp[3];
    int32_T i;
    real_T tmp[9];
    real_T tmp_0[9];
    real_T tmp_1[9];
    real_T tmp_2[3];
    real_T Omega_0[3];
    real_T Omega_1[90];
    real_T theta_tmp;
    real_T theta_tmp_0;
    real_T Omega_tmp;
    int32_T Hips_tmp;
    int32_T Hips_tmp_tmp;
    int32_T J_T_tmp;

    //  This file compute the term JQp*qp (31x1) which is used to calculate "qpp" from Qpp = JQ*qpp + JQp*qp, i.e.  
    //  qpp = inv(JQ)[Qpp - JQp*qpp]
    // 'get_JQpqp_JPhipPhip_xelo_init:11' joints=30;
    // 'get_JQpqp_JPhipPhip_xelo_init:13' JQpqp = zeros(joints,1);
    memset(&JQpqp[0], 0, 30U * sizeof(real_T));

    //  Obtenemos las Jp*qp de los centros de masa y de los marcos
    // [~, ~, JpCoMqp, ~, Jpi_qp] = TALOS_VelPartialAccCoMs_Frames_testard(robot_TALOS); 
    //  [~, ~, JpCoMqp, ~, Jpi_qp] = VelAceCoMs_Frames(robot,zeros(31,1));% Podemos utilizar tambien ésta función usando qpp = 0 =) 
    // 'get_JQpqp_JPhipPhip_xelo_init:18' H7 = Jpi_qp(:,7);
    //  [^0PartialVP_7; ^0PartialWP_7] = [^0Jp_7,v*qp; ^0Jp_7,w*qp]
    // 'get_JQpqp_JPhipPhip_xelo_init:19' H12 = Jpi_qp(:,12);
    //  [^0PartialVP_12; ^0PartialWP_12] = [^0Jp_12,v*qp; ^0Jp_12,w*qp]
    // 'get_JQpqp_JPhipPhip_xelo_init:20' H14 = Jpi_qp(:,14);
    //  [^0PartialVP_14; ^0PartialWP_14] = [^0Jp_14,v*qp; ^0Jp_14,w*qp]
    // 'get_JQpqp_JPhipPhip_xelo_init:21' H15 = Jpi_qp(:,15);
    //  [^0PartialVP_15; ^0PartialWP_15] = [^0Jp_15,v*qp; ^0Jp_15,w*qp]
    //  CoM height
    // 'get_JQpqp_JPhipPhip_xelo_init:24' JQpqp(1)= JpCoMqp(3);
    JQpqp[0] = JpCoMqp[2];

    //  The row corresponding to zpp of the CoM
    //  Foot
    // 'get_JQpqp_JPhipPhip_xelo_init:28' JQpqp(2:4)= [H12(1:2);H14(3)];
    JQpqp[1] = Jpi_qp[66];
    JQpqp[2] = Jpi_qp[67];
    JQpqp[3] = Jpi_qp[80];

    //  [H12(1,2);H14(3)] = J_foot,v*qp
    //  Foot yaw,pitch,roll
    // 'get_JQpqp_JPhipPhip_xelo_init:31' Foot = T(:,:,14);
    //  Frame 14 is taken as it, since in zero potition (i.e. q=0 ) this frame as the same orientation as frame 0 
    // 'get_JQpqp_JPhipPhip_xelo_init:32' phi = atan2(Foot(2,1),Foot(1,1));
    phi = atan2(T[209], T[208]);

    // 'get_JQpqp_JPhipPhip_xelo_init:33' theta = atan2(-Foot(3,1),cos(phi)*Foot(1,1)+sin(phi)*Foot(2,1)); 
    theta_tmp = std::cos(phi);
    theta_tmp_0 = std::sin(phi);
    theta = atan2(-T[210], theta_tmp * T[208] + theta_tmp_0 * T[209]);

    // 'get_JQpqp_JPhipPhip_xelo_init:34' thetap = JQ(6,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo_init:35' phip = JQ(7,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo_init:36' Omega = OmeRPY(phi,theta);
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    Omega_tmp = std::cos(theta);
    Omega[0] = theta_tmp / Omega_tmp;
    Omega[3] = theta_tmp_0 / Omega_tmp;
    Omega[6] = 0.0;
    Omega[1] = -theta_tmp_0;
    Omega[4] = theta_tmp;
    Omega[7] = 0.0;
    Omega_tmp = std::tan(theta);
    Omega[2] = theta_tmp * Omega_tmp;
    Omega[5] = theta_tmp_0 * Omega_tmp;
    Omega[8] = 1.0;

    // 'get_JQpqp_JPhipPhip_xelo_init:37' OmegaDot = OmeDotRPY(phi,theta,phip,thetap); 
    //  Recalling that, as we just computing JQp*qp the first term i.e. JQ*qpp is computed outside 
    //  Note that "JQ(5:7,:) = Omega*Jfoot,w"... and for the second term (first term here) we want: "OmegaDot*J_foot,w *qp" 
    // 'get_JQpqp_JPhipPhip_xelo_init:40' term2 = OmegaDot*inv(Omega)*JQ(5:7,:)*qp; 
    //  OmegaDot*J_foot,w *qp
    // 'get_JQpqp_JPhipPhip_xelo_init:41' term3 = Omega*H14(4:6);
    //  Omega*Jp_foot,w *qp
    // 'get_JQpqp_JPhipPhip_xelo_init:42' JQpqp(5:7) = term2 + term3;
    theta_tmp = 0.0;
    theta_tmp_0 = 0.0;
    for (i = 0; i < 30; i++) {
      theta_tmp += JQ[30 * i + 6] * qp[i];
      theta_tmp_0 += JQ[30 * i + 5] * qp[i];
    }

    walk_OmeDotRPY(phi, theta, theta_tmp, theta_tmp_0, tmp);
    walk_inv_a(Omega, tmp_0);
    for (i = 0; i < 3; i++) {
      for (J_T_tmp = 0; J_T_tmp < 3; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        tmp_1[Hips_tmp_tmp] = 0.0;
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp] * tmp[i];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 1] * tmp[i + 3];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 2] * tmp[i + 6];
      }

      tmp_2[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 4] * tmp_1[i];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 5] * tmp_1[i + 3];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 6] * tmp_1[i + 6];
        tmp_2[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }

      Omega_0[i] = 0.0;
      Omega_0[i] += Omega[i] * Jpi_qp[81];
      Omega_0[i] += Omega[i + 3] * Jpi_qp[82];
      Omega_0[i] += Omega[i + 6] * Jpi_qp[83];
      JQpqp[4 + i] = tmp_2[i] + Omega_0[i];
    }

    //  Hips yaw,pitch,roll (lower Torso)
    // 'get_JQpqp_JPhipPhip_xelo_init:46' Hips = T(:,:,7)*torso_f;
    for (i = 0; i < 4; i++) {
      for (J_T_tmp = 0; J_T_tmp < 4; J_T_tmp++) {
        Hips_tmp_tmp = i << 2;
        Hips_tmp = J_T_tmp + Hips_tmp_tmp;
        Hips[Hips_tmp] = 0.0;
        Hips[Hips_tmp] += T[96 + J_T_tmp] * walk_DW.torso_f[Hips_tmp_tmp];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 1] * T[J_T_tmp + 100];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 2] * T[J_T_tmp + 104];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 3] * T[J_T_tmp + 108];
      }
    }

    //  Since frame 7 in zero potition (i.e. q=0 ) has a diferent orientation as frame 0.  
    //  It must be oriented as frame 0, so that the pitch yaw and roll angles have the same meaning for the 
    //  torso and for the foot.
    // 'get_JQpqp_JPhipPhip_xelo_init:49' phi=atan2(Hips(2,1),Hips(1,1));
    phi = atan2(Hips[1], Hips[0]);

    // 'get_JQpqp_JPhipPhip_xelo_init:50' theta=atan2(-Hips(3,1),cos(phi)*Hips(1,1)+sin(phi)*Hips(2,1)); 
    theta_tmp = std::cos(phi);
    theta_tmp_0 = std::sin(phi);
    theta = atan2(-Hips[2], theta_tmp * Hips[0] + theta_tmp_0 * Hips[1]);

    // 'get_JQpqp_JPhipPhip_xelo_init:51' thetap = JQ(9,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo_init:52' phip = JQ(10,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo_init:53' Omega = OmeRPY(phi,theta);
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    Omega_tmp = std::cos(theta);
    Omega[0] = theta_tmp / Omega_tmp;
    Omega[3] = theta_tmp_0 / Omega_tmp;
    Omega[6] = 0.0;
    Omega[1] = -theta_tmp_0;
    Omega[4] = theta_tmp;
    Omega[7] = 0.0;
    Omega_tmp = std::tan(theta);
    Omega[2] = theta_tmp * Omega_tmp;
    Omega[5] = theta_tmp_0 * Omega_tmp;
    Omega[8] = 1.0;

    // 'get_JQpqp_JPhipPhip_xelo_init:54' OmegaDot = OmeDotRPY(phi,theta,phip,thetap); 
    //  Recalling that, as we just computing JQp*qp the first term i.e. JQ*qpp is computed outside 
    //  Note that "JQ(8:10,:) = Omega*Jtorso,w"... and for the second term (first term here) we want: "OmegaDot*J_torso,w *qp" 
    // 'get_JQpqp_JPhipPhip_xelo_init:57' term2 = OmegaDot*inv(Omega)*JQ(8:10,:)*qp; 
    //  OmegaDot*J_torso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo_init:58' term3 = Omega*H7(4:6);
    //  Omega*Jp_torso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo_init:59' JQpqp(8:10) = term2 + term3;
    theta_tmp = 0.0;
    theta_tmp_0 = 0.0;
    for (i = 0; i < 30; i++) {
      theta_tmp += JQ[30 * i + 9] * qp[i];
      theta_tmp_0 += JQ[30 * i + 8] * qp[i];
    }

    walk_OmeDotRPY(phi, theta, theta_tmp, theta_tmp_0, tmp);
    walk_inv_a(Omega, tmp_0);
    for (i = 0; i < 3; i++) {
      for (J_T_tmp = 0; J_T_tmp < 3; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        tmp_1[Hips_tmp_tmp] = 0.0;
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp] * tmp[i];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 1] * tmp[i + 3];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 2] * tmp[i + 6];
      }

      tmp_2[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 7] * tmp_1[i];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 8] * tmp_1[i + 3];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 9] * tmp_1[i + 6];
        tmp_2[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }

      Omega_0[i] = 0.0;
      Omega_0[i] += Omega[i] * Jpi_qp[39];
      Omega_0[i] += Omega[i + 3] * Jpi_qp[40];
      Omega_0[i] += Omega[i + 6] * Jpi_qp[41];
      JQpqp[7 + i] = tmp_2[i] + Omega_0[i];
    }

    //  Torso yaw   (Upper torso)
    // 'get_JQpqp_JPhipPhip_xelo_init:62' Torso = T(:,:,16);
    // 'get_JQpqp_JPhipPhip_xelo_init:63' phi=atan2(Torso(2,1),Torso(1,1));
    phi = atan2(T[241], T[240]);

    // 'get_JQpqp_JPhipPhip_xelo_init:64' theta=atan2(-Torso(3,1),cos(phi)*Torso(1,1)+sin(phi)*Torso(2,1)); 
    theta_tmp = std::cos(phi);
    theta_tmp_0 = std::sin(phi);
    theta = atan2(-T[242], theta_tmp * T[240] + theta_tmp_0 * T[241]);

    //  Since velocities "phip" and "thetap" were not taked into account before for the upper body  in "J_state.m" (just "yawp") 
    //  In the next we will use this part of the code  "J_state.m" to compute "phip" and "thetap" and use it in OmeDotRPY(phi,theta,phip,thetap) 
    //  in order to get the term "JQpqp(11)".
    //  --------------------------------------------------------------------------------- 
    // 'get_JQpqp_JPhipPhip_xelo_init:69' J_T = zeros(3,joints);
    memset(&J_T[0], 0, 90U * sizeof(real_T));

    // 'get_JQpqp_JPhipPhip_xelo_init:70' for i = 2:7
    for (i = 0; i < 6; i++) {
      // 'get_JQpqp_JPhipPhip_xelo_init:71' J_T(:,i-1)=T(1:3,3,i);
      J_T_tmp = (i + 1) << 4;
      J_T[3 * i] = T[J_T_tmp + 8];
      J_T[1 + 3 * i] = T[J_T_tmp + 9];
      J_T[2 + 3 * i] = T[J_T_tmp + 10];

      //  ....
    }

    // 'get_JQpqp_JPhipPhip_xelo_init:73' J_T(:,13)=T(1:3,3,17);
    J_T[36] = T[264];
    J_T[37] = T[265];
    J_T[38] = T[266];

    //  crea la matriz J_UpperTorso,w = [0a2, 0a3, 0a4, 0a5, 0a6, 0a7, 0a15 0 ... 0] (3x31) 
    // 'get_JQpqp_JPhipPhip_xelo_init:74' Omega = OmeRPY(phi,theta);
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    Omega_tmp = std::cos(theta);
    Omega[0] = theta_tmp / Omega_tmp;
    Omega[3] = theta_tmp_0 / Omega_tmp;
    Omega[6] = 0.0;
    Omega[1] = -theta_tmp_0;
    Omega[4] = theta_tmp;
    Omega[7] = 0.0;
    Omega_tmp = std::tan(theta);
    Omega[2] = theta_tmp * Omega_tmp;
    Omega[5] = theta_tmp_0 * Omega_tmp;
    Omega[8] = 1.0;

    //  Ahora se calcula la velocidad de los 3 ángulos [psip, thetap, phip]^T Notese que el tercer renglon de "OmegaJTqp" -> JQ(11)*qp = "psip" 
    // 'get_JQpqp_JPhipPhip_xelo_init:76' OmegaJTqp =Omega*J_T*qp;
    for (i = 0; i < 3; i++) {
      OmegaJTqp[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp] * Omega[i];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 1] * Omega[i + 3];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 2] * Omega[i + 6];
        OmegaJTqp[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }
    }

    // 'get_JQpqp_JPhipPhip_xelo_init:77' thetap = OmegaJTqp(2);
    // 'get_JQpqp_JPhipPhip_xelo_init:78' phip = OmegaJTqp(3);
    // 'get_JQpqp_JPhipPhip_xelo_init:79' OmegaDot = OmeDotRPY(phi,theta,phip,thetap); 
    // clear term2 term3  % Ya que estos anteriormente eran vectores de 3 elementos y ahora solo queremos que sea un escalar... =) 
    // 'get_JQpqp_JPhipPhip_xelo_init:81' term2 = OmegaDot*J_T*qp;
    //  OmegaDot*J_UperTorso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo_init:82' term3 = Omega*H15(4:6);
    //  Omega*Jp_UperTorso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo_init:83' JQpqp(11) = term2(3) + term3(3);
    walk_OmeDotRPY(phi, theta, OmegaJTqp[2], OmegaJTqp[1], tmp);
    for (i = 0; i < 3; i++) {
      tmp_2[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp] * tmp[i];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 1] * tmp[i + 3];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 2] * tmp[i + 6];
        tmp_2[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }

      Omega_0[i] = Omega[i + 6] * Jpi_qp[89] + (Omega[i + 3] * Jpi_qp[88] +
        Omega[i] * Jpi_qp[87]);
    }

    JQpqp[10] = tmp_2[2] + Omega_0[2];

    // ------------------------------------------------------
    //  Finally we introduce the two las elements that will help to compute "xpp" and "ypp"...  
    //  JQpqp(30)= JCoMp(1,:)*qp; % The row corresponding to xpp of the CoM
    //  JQpqp(31)= JCoMp(2,:)*qp; % The row corresponding to ypp of the CoM
    // 'get_JQpqp_JPhipPhip_xelo_init:89' JQpqp(29)= JpCoMqp(1);
    JQpqp[28] = JpCoMqp[0];

    //  The row corresponding to xpp of the CoM
    // 'get_JQpqp_JPhipPhip_xelo_init:90' JQpqp(30)= JpCoMqp(2);
    JQpqp[29] = JpCoMqp[1];

    //  The row corresponding to ypp of the CoM
    //  End
    // 'get_JQpqp_JPhipPhip_xelo_init:96' Phip=[qfp;1/T_des];
    // 'get_JQpqp_JPhipPhip_xelo_init:98' JdpPhip = [dhd_dPhi_p;
    // 'get_JQpqp_JPhipPhip_xelo_init:99'           zeros(2,3)]*Phip;
    // 'get_JQpqp_JPhipPhip_xelo_init:101' JPhipPhip = JQ\(JdpPhip - JQpqp);
    for (i = 0; i < 3; i++) {
      memcpy(&J_T[i * 30], &dhd_dPhi_p[i * 28], 28U * sizeof(real_T));
      J_T[28 + 30 * i] = 0.0;
      J_T[29 + 30 * i] = 0.0;
    }

    phi = 1.0 / walk_DW.T_des;
    for (i = 0; i < 30; i++) {
      JPhipPhip[i] = ((J_T[i + 30] * qfp[1] + J_T[i] * qfp[0]) + J_T[i + 60] *
                      phi) - JQpqp[i];
    }

    walk_mldivide(JQ, JPhipPhip);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function r_cross = cross_matrix(r)
  // Generate the cross product matrix for a vector
  //
  void walkModelClass::walk_cross_matrix(const real_T r_data[], real_T r_cross[9])
  {
    // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
    // 'cross_matrix:4'          r(3)   0       -r(1);
    // 'cross_matrix:5'          -r(2)  r(1)    0];
    r_cross[0] = 0.0;
    r_cross[3] = -r_data[2];
    r_cross[6] = r_data[1];
    r_cross[1] = r_data[2];
    r_cross[4] = 0.0;
    r_cross[7] = -r_data[0];
    r_cross[2] = -r_data[1];
    r_cross[5] = r_data[0];
    r_cross[8] = 0.0;
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [F0,M0,Tau] = TALOS_Newton_Euler_xelofox(T,q,qD,qDD)
  //
  void walkModelClass::walk_TALOS_Newton_Euler_xelo(const real_T T[784], const
    real_T qD[30], const real_T qDD[30], real_T F0[3], real_T M0[3], real_T Tau
    [30])
  {
    real_T ome[3];
    real_T omeD[3];
    real_T vD[3];
    real_T ft[90];
    real_T mt[90];
    real_T omei_data[3];
    real_T omeDi_data[3];
    real_T S[3];
    real_T f[3];
    real_T m[3];
    real_T m_temp[3];
    real_T b_ome_data[3];
    real_T b_omeD_data[3];
    int32_T i;
    int32_T e_aoffset;
    static const int8_T b[30] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16, 17,
      19, 20, 23, 26, 28, 30, 31, 33, 34, 37, 40, 42, 44, 45, 47, 48 };

    real_T d_a_tmp[9];
    real_T mt_tmp[9];
    real_T tmp[9];
    real_T mt_tmp_0[3];
    real_T T_0[9];
    real_T T_1[9];
    real_T qD_0;
    real_T f_0;
    int32_T omei_size_idx_0;
    int32_T omeDi_size_idx_0;
    real_T L_idx_2;
    real_T L_idx_1;
    real_T L_idx_0;
    real_T vDi_idx_2;
    real_T vDi_idx_1;
    real_T vDi_idx_0;
    int32_T L_idx_0_tmp;
    int32_T L_idx_0_tmp_0;
    int32_T b_0;
    int32_T b_1;
    int32_T S_tmp;
    int32_T S_tmp_0;
    int32_T T_tmp;

    // function [F0,M0,Tau] = TALOS_Newton_Euler_testard(q,qD,qDD,F1,W3,W4)
    //    switch nargin
    //        case 3
    // 'TALOS_Newton_Euler_xelo:7' W1 = [0;0;0;0;0;0];
    // 'TALOS_Newton_Euler_xelo:8' W3 = [0;0;0;0;0;0];
    // 'TALOS_Newton_Euler_xelo:9' W4 = [0;0;0;0;0;0];
    //        case 4
    //              W1 = F1;
    //              W3 = [0;0;0;0;0;0];
    //              W4 = [0;0;0;0;0;0];
    //
    //        case 5
    //              W1 = [0;0;0;0;0;0];
    //          otherwise
    //              ;
    //      end
    // NEWTON_EULER Algorithm to compute torques (model single mass)
    // PI=Mass_information_TALOS_QY_testard;
    //  TALOS_init;
    // Ia = TALOS_actuator_inertia_testard;
    // 'TALOS_Newton_Euler_xelo:26' Tau = zeros(30,1);
    // 'TALOS_Newton_Euler_xelo:27' frame=[ 2,3,4,5,6,7,8,9,10,11,12,13,...
    // 'TALOS_Newton_Euler_xelo:28'         16,17,19,20,...
    // 'TALOS_Newton_Euler_xelo:29'         23,26,28,30,31,33,34,...
    // 'TALOS_Newton_Euler_xelo:30'         37,40,42,44,45,47,48];
    // 'TALOS_Newton_Euler_xelo:31' tree1 =[1,2,3,4,5,6,7,8,9,10,11,12];
    // 'TALOS_Newton_Euler_xelo:32' tree2 =[13,14,15,16];
    // 'TALOS_Newton_Euler_xelo:33' tree3 = [17,18,19,20,21,22,23];
    // 'TALOS_Newton_Euler_xelo:34' tree4 = [24,25,26,27,28,29,30];
    // M= PI.masse;
    // I =PI.I;
    // COM = PI.CoM;
    //  PRUEBAAAA
    //  =============
    //  for i = 1:36
    //      I{i} = zeros(3,3);
    //  %     COM{i} = zeros(3,1);
    //  end
    //  Ia = zeros(31,1);
    //  M = zeros(36,1);
    //  M(15:end) = zeros; % solo la parte diarriba
    //  M(1) = 0;  % OJO!, en el programa... NO SE USA LA MASA 1  =/ pero ya se modific?al final =) 
    //  ============
    // robot_TALOS=genebot2_testard;
    // robot_TALOS.q=q;
    // T=DGM_TALOS_QY(robot_TALOS);
    // Initialisation
    // 'TALOS_Newton_Euler_xelo:55' g=9.8100;
    // 'TALOS_Newton_Euler_xelo:56' ome =[0;0;0];
    // 'TALOS_Newton_Euler_xelo:57' omeD = [0;0;0];
    // 'TALOS_Newton_Euler_xelo:58' vD = [0;0;g];
    ome[0] = 0.0;
    omeD[0] = 0.0;
    vD[0] = 0.0;
    ome[1] = 0.0;
    omeD[1] = 0.0;
    vD[1] = 0.0;
    ome[2] = 0.0;
    omeD[2] = 0.0;
    vD[2] = 9.81;

    // 'TALOS_Newton_Euler_xelo:59' tree = tree1;
    // 'TALOS_Newton_Euler_xelo:60' ft = zeros(3,30);
    // 'TALOS_Newton_Euler_xelo:61' mt = zeros(3,30);
    memset(&ft[0], 0, 90U * sizeof(real_T));
    memset(&mt[0], 0, 90U * sizeof(real_T));

    // 'TALOS_Newton_Euler_xelo:62' omei=0;
    omei_size_idx_0 = 1;
    omei_data[0] = 0.0;

    // 'TALOS_Newton_Euler_xelo:62' omeDi=0;
    omeDi_size_idx_0 = 1;
    omeDi_data[0] = 0.0;

    // 'TALOS_Newton_Euler_xelo:62' vDi=vD;
    vDi_idx_0 = 0.0;
    vDi_idx_1 = 0.0;
    vDi_idx_2 = 9.81;

    // Forward algorithm
    //  =========================================
    // 'TALOS_Newton_Euler_xelo:65' for i=1:numel(tree)
    for (i = 0; i < 12; i++) {
      qD_0 = qD[i];

      // 'TALOS_Newton_Euler_xelo:66' if i~=1
      if (1 + i != 1) {
        // 'TALOS_Newton_Euler_xelo:67' L = T(1:3,4,frame(tree(i)))-T(1:3,4,frame(tree(i-1))); 
        L_idx_0_tmp = (b[i] - 1) << 4;
        L_idx_0_tmp_0 = (b[i - 1] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];

        //  0L = 0Pi - OP{i-1}
      } else {
        // 'TALOS_Newton_Euler_xelo:68' else
        // 'TALOS_Newton_Euler_xelo:69' L = T(1:3,4,frame(tree(i)))-T(1:3,4,1);
        L_idx_0 = T[28] - T[12];
        L_idx_1 = T[29] - T[13];
        L_idx_2 = T[30] - T[14];

        //  0L = 0P2 - OP1
      }

      //  Note que en las siguientes 2 ecuaciones se usan los valores anteriores de w, i.e "w_{i-1}" luego en la 3era ecuacion de 
      //  calcula el nuevo w, i.e "w_i"
      //  0vp = 0vp_a  +  0wp X 0L  +  0w x 0w x 0L
      // 'TALOS_Newton_Euler_xelo:74' vD = vD + cross_matrix(omeD)*L+cross_matrix(ome)*(cross_matrix(ome)*L); 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      tmp[0] = 0.0;
      tmp[3] = -omeD[2];
      tmp[6] = omeD[1];
      tmp[1] = omeD[2];
      tmp[4] = 0.0;
      tmp[7] = -omeD[0];
      tmp[2] = -omeD[1];
      tmp[5] = omeD[0];
      tmp[8] = 0.0;
      T_0[0] = 0.0;
      T_0[3] = -ome[2];
      T_0[6] = ome[1];
      T_0[1] = ome[2];
      T_0[4] = 0.0;
      T_0[7] = -ome[0];
      T_0[2] = -ome[1];
      T_0[5] = ome[0];
      T_0[8] = 0.0;
      T_1[0] = 0.0;
      T_1[3] = -ome[2];
      T_1[6] = ome[1];
      T_1[1] = ome[2];
      T_1[4] = 0.0;
      T_1[7] = -ome[0];
      T_1[2] = -ome[1];
      T_1[5] = ome[0];
      T_1[8] = 0.0;
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        m_temp[L_idx_0_tmp] = ((tmp[L_idx_0_tmp + 3] * L_idx_1 + tmp[L_idx_0_tmp]
          * L_idx_0) + tmp[L_idx_0_tmp + 6] * L_idx_2) + vD[L_idx_0_tmp];
        mt_tmp_0[L_idx_0_tmp] = T_0[L_idx_0_tmp + 6] * L_idx_2 +
          (T_0[L_idx_0_tmp + 3] * L_idx_1 + T_0[L_idx_0_tmp] * L_idx_0);
      }

      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        vD[L_idx_0_tmp] = m_temp[L_idx_0_tmp] + (T_1[L_idx_0_tmp + 6] *
          mt_tmp_0[2] + (T_1[L_idx_0_tmp + 3] * mt_tmp_0[1] + T_1[L_idx_0_tmp] *
                         mt_tmp_0[0]));
      }

      //  0wp = 0wp_a  +  0a*qpp  +  0w x 0a*qp
      // 'TALOS_Newton_Euler_xelo:76' omeD = omeD+T(1:3,3,frame(tree(i)))*qDD(tree(i))+cross_matrix(ome)*T(1:3,3,frame(tree(i)))*qD(tree(i)); 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      tmp[0] = 0.0;
      tmp[3] = -ome[2];
      tmp[6] = ome[1];
      tmp[1] = ome[2];
      tmp[4] = 0.0;
      tmp[7] = -ome[0];
      tmp[2] = -ome[1];
      tmp[5] = ome[0];
      tmp[8] = 0.0;
      L_idx_0_tmp_0 = b[i];

      //  w = w_a + qp*0a
      // 'TALOS_Newton_Euler_xelo:78' ome = ome + qD(tree(i))*T(1:3,3,frame(tree(i))); 
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        L_idx_0 = T[(((b[i] - 1) << 4) + L_idx_0_tmp) + 8];
        omeD[L_idx_0_tmp] = (L_idx_0 * qDD[i] + omeD[L_idx_0_tmp]) + (T
          [((L_idx_0_tmp_0 - 1) << 4) + 10] * tmp[L_idx_0_tmp + 6] + (T
          [((L_idx_0_tmp_0 - 1) << 4) + 9] * tmp[L_idx_0_tmp + 3] + T
          [((L_idx_0_tmp_0 - 1) << 4) + 8] * tmp[L_idx_0_tmp])) * qD_0;
        ome[L_idx_0_tmp] += L_idx_0 * qD_0;
      }

      // 'TALOS_Newton_Euler_xelo:79' if tree(i)==6
      if (1 + i == 6) {
        // 'TALOS_Newton_Euler_xelo:80' omei = ome;
        omei_size_idx_0 = 3;

        // 'TALOS_Newton_Euler_xelo:81' omeDi = omeD;
        omeDi_size_idx_0 = 3;

        // 'TALOS_Newton_Euler_xelo:82' vDi = vD;
        omei_data[0] = ome[0];
        omeDi_data[0] = omeD[0];
        vDi_idx_0 = vD[0];
        omei_data[1] = ome[1];
        omeDi_data[1] = omeD[1];
        vDi_idx_1 = vD[1];
        omei_data[2] = ome[2];
        omeDi_data[2] = omeD[2];
        vDi_idx_2 = vD[2];
      }

      // 'TALOS_Newton_Euler_xelo:84' R=T(1:3,1:3,frame(tree(i)));
      //  R = 0^R_{i}
      // 'TALOS_Newton_Euler_xelo:85' S = R*CoM_stack(:,frame(tree(i)));
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        S_tmp = ((b[i] - 1) << 4) + L_idx_0_tmp;
        S_tmp_0 = (b[i] - 1) * 3;
        S[L_idx_0_tmp] = T[S_tmp + 8] * walk_DW.CoM_stack[S_tmp_0 + 2] +
          (T[S_tmp + 4] * walk_DW.CoM_stack[S_tmp_0 + 1] + T[S_tmp] *
           walk_DW.CoM_stack[S_tmp_0]);
      }

      //  S = 0Pcom = 0^R_i i^Pcom
      //  0Finercial = m[0vp  +  0wp x 0Pcom  +  0w x 0w x 0Pcom]
      // 'TALOS_Newton_Euler_xelo:87' ft(:,tree(i)) = mass_stack(frame(tree(i)))*(vD+cross_matrix(omeD)*S + cross_matrix(ome)*(cross_matrix(ome)*S)); 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      L_idx_0_tmp = b[i] - 1;
      tmp[0] = 0.0;
      tmp[3] = -omeD[2];
      tmp[6] = omeD[1];
      tmp[1] = omeD[2];
      tmp[4] = 0.0;
      tmp[7] = -omeD[0];
      tmp[2] = -omeD[1];
      tmp[5] = omeD[0];
      tmp[8] = 0.0;
      T_0[0] = 0.0;
      T_0[3] = -ome[2];
      T_0[6] = ome[1];
      T_0[1] = ome[2];
      T_0[4] = 0.0;
      T_0[7] = -ome[0];
      T_0[2] = -ome[1];
      T_0[5] = ome[0];
      T_0[8] = 0.0;
      T_1[0] = 0.0;
      T_1[3] = -ome[2];
      T_1[6] = ome[1];
      T_1[1] = ome[2];
      T_1[4] = 0.0;
      T_1[7] = -ome[0];
      T_1[2] = -ome[1];
      T_1[5] = ome[0];
      T_1[8] = 0.0;
      for (S_tmp = 0; S_tmp < 3; S_tmp++) {
        m_temp[S_tmp] = ((tmp[S_tmp + 3] * S[1] + tmp[S_tmp] * S[0]) + tmp[S_tmp
                         + 6] * S[2]) + vD[S_tmp];
        mt_tmp_0[S_tmp] = T_0[S_tmp + 6] * S[2] + (T_0[S_tmp + 3] * S[1] +
          T_0[S_tmp] * S[0]);
      }

      //  0Minercial = m*0Pcom X 0vp  +  0Ij*wp  +  w x 0Ij x ome
      // 'TALOS_Newton_Euler_xelo:89' mt(:,tree(i))= mass_stack(frame(tree(i)))*cross_matrix(S)*vD+R*I_stack(:,:,frame(tree(i)))*R'*omeD+cross_matrix(ome)*R*I_stack(:,:,frame(tree(i)))*R'*ome; 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      for (S_tmp = 0; S_tmp < 3; S_tmp++) {
        e_aoffset = ((b[i] - 1) << 4) + S_tmp;
        mt_tmp[3 * S_tmp] = T[e_aoffset];
        mt_tmp[1 + 3 * S_tmp] = T[e_aoffset + 4];
        mt_tmp[2 + 3 * S_tmp] = T[e_aoffset + 8];
        ft[S_tmp + 3 * i] = (m_temp[S_tmp] + (T_1[S_tmp + 6] * mt_tmp_0[2] +
          (T_1[S_tmp + 3] * mt_tmp_0[1] + T_1[S_tmp] * mt_tmp_0[0]))) *
          walk_DW.mass_stack[L_idx_0_tmp];
      }

      L_idx_0 = walk_DW.mass_stack[b[i] - 1];
      tmp[0] = 0.0;
      tmp[3] = L_idx_0 * -S[2];
      tmp[6] = L_idx_0 * S[1];
      tmp[1] = L_idx_0 * S[2];
      tmp[4] = 0.0;
      tmp[7] = L_idx_0 * -S[0];
      tmp[2] = L_idx_0 * -S[1];
      tmp[5] = L_idx_0 * S[0];
      tmp[8] = 0.0;
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        for (S_tmp = 0; S_tmp < 3; S_tmp++) {
          e_aoffset = L_idx_0_tmp + 3 * S_tmp;
          T_0[e_aoffset] = 0.0;
          T_tmp = ((b[i] - 1) << 4) + L_idx_0_tmp;
          S_tmp_0 = (b[i] - 1) * 9 + 3 * S_tmp;
          T_0[e_aoffset] += T[T_tmp] * walk_DW.I_stack[S_tmp_0];
          T_0[e_aoffset] += T[T_tmp + 4] * walk_DW.I_stack[S_tmp_0 + 1];
          T_0[e_aoffset] += T[T_tmp + 8] * walk_DW.I_stack[S_tmp_0 + 2];
        }

        mt_tmp_0[L_idx_0_tmp] = 0.0;
        f[L_idx_0_tmp] = 0.0;
        for (S_tmp = 0; S_tmp < 3; S_tmp++) {
          e_aoffset = L_idx_0_tmp + 3 * S_tmp;
          T_1[e_aoffset] = 0.0;
          T_1[e_aoffset] += mt_tmp[3 * S_tmp] * T_0[L_idx_0_tmp];
          T_1[e_aoffset] += mt_tmp[3 * S_tmp + 1] * T_0[L_idx_0_tmp + 3];
          T_1[e_aoffset] += mt_tmp[3 * S_tmp + 2] * T_0[L_idx_0_tmp + 6];
          mt_tmp_0[L_idx_0_tmp] += tmp[e_aoffset] * vD[S_tmp];
          f[L_idx_0_tmp] += T_1[e_aoffset] * omeD[S_tmp];
        }
      }

      tmp[0] = 0.0;
      tmp[3] = -ome[2];
      tmp[6] = ome[1];
      tmp[1] = ome[2];
      tmp[4] = 0.0;
      tmp[7] = -ome[0];
      tmp[2] = -ome[1];
      tmp[5] = ome[0];
      tmp[8] = 0.0;
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        for (S_tmp = 0; S_tmp < 3; S_tmp++) {
          e_aoffset = L_idx_0_tmp + 3 * S_tmp;
          T_0[e_aoffset] = 0.0;
          L_idx_0_tmp_0 = ((b[i] - 1) << 4) + (S_tmp << 2);
          T_0[e_aoffset] += T[L_idx_0_tmp_0] * tmp[L_idx_0_tmp];
          T_0[e_aoffset] += T[L_idx_0_tmp_0 + 1] * tmp[L_idx_0_tmp + 3];
          T_0[e_aoffset] += T[L_idx_0_tmp_0 + 2] * tmp[L_idx_0_tmp + 6];
        }

        for (S_tmp = 0; S_tmp < 3; S_tmp++) {
          e_aoffset = L_idx_0_tmp + 3 * S_tmp;
          T_1[e_aoffset] = 0.0;
          L_idx_0_tmp_0 = (b[i] - 1) * 9 + 3 * S_tmp;
          T_1[e_aoffset] += walk_DW.I_stack[L_idx_0_tmp_0] * T_0[L_idx_0_tmp];
          T_1[e_aoffset] += walk_DW.I_stack[L_idx_0_tmp_0 + 1] * T_0[L_idx_0_tmp
            + 3];
          T_1[e_aoffset] += walk_DW.I_stack[L_idx_0_tmp_0 + 2] * T_0[L_idx_0_tmp
            + 6];
        }

        L_idx_0 = 0.0;
        for (S_tmp = 0; S_tmp < 3; S_tmp++) {
          e_aoffset = L_idx_0_tmp + 3 * S_tmp;
          d_a_tmp[e_aoffset] = 0.0;
          d_a_tmp[e_aoffset] += mt_tmp[3 * S_tmp] * T_1[L_idx_0_tmp];
          d_a_tmp[e_aoffset] += mt_tmp[3 * S_tmp + 1] * T_1[L_idx_0_tmp + 3];
          d_a_tmp[e_aoffset] += mt_tmp[3 * S_tmp + 2] * T_1[L_idx_0_tmp + 6];
          L_idx_0 += d_a_tmp[e_aoffset] * ome[S_tmp];
        }

        mt[L_idx_0_tmp + 3 * i] = (mt_tmp_0[L_idx_0_tmp] + f[L_idx_0_tmp]) +
          L_idx_0;
      }
    }

    // Tree 2 Initialisation
    // 'TALOS_Newton_Euler_xelo:93' ome =omei;
    if (0 <= omei_size_idx_0 - 1) {
      memcpy(&b_ome_data[0], &omei_data[0], omei_size_idx_0 * sizeof(real_T));
    }

    // 'TALOS_Newton_Euler_xelo:94' omeD = omeDi;
    if (0 <= omeDi_size_idx_0 - 1) {
      memcpy(&b_omeD_data[0], &omeDi_data[0], omeDi_size_idx_0 * sizeof(real_T));
    }

    // 'TALOS_Newton_Euler_xelo:95' vD = vDi;
    vD[0] = vDi_idx_0;
    vD[1] = vDi_idx_1;
    vD[2] = vDi_idx_2;

    // 'TALOS_Newton_Euler_xelo:96' tree=tree2;
    // Forward algorithm
    // 'TALOS_Newton_Euler_xelo:99' for i=1:numel(tree)
    for (i = 0; i < 4; i++) {
      // 'TALOS_Newton_Euler_xelo:100' if i~=1
      if (1 + i != 1) {
        // 'TALOS_Newton_Euler_xelo:101' L = T(1:3,4,frame(tree(i)))-T(1:3,4,frame(tree(i-1))); 
        L_idx_0_tmp = (b[i + 12] - 1) << 4;
        L_idx_0_tmp_0 = (b[i + 11] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];
      } else {
        // 'TALOS_Newton_Euler_xelo:102' else
        // 'TALOS_Newton_Euler_xelo:103' L = T(1:3,4,frame(tree(i)))-T(1:3,4,7); 
        L_idx_0 = T[252] - T[108];
        L_idx_1 = T[253] - T[109];
        L_idx_2 = T[254] - T[110];
      }

      // 'TALOS_Newton_Euler_xelo:105' vD = vD + cross_matrix(omeD)*L+cross_matrix(ome)*(cross_matrix(ome)*L); 
      walk_cross_matrix(b_ome_data, mt_tmp);
      walk_cross_matrix(b_omeD_data, tmp);
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        m_temp[L_idx_0_tmp] = ((tmp[L_idx_0_tmp + 3] * L_idx_1 + tmp[L_idx_0_tmp]
          * L_idx_0) + tmp[L_idx_0_tmp + 6] * L_idx_2) + vD[L_idx_0_tmp];
        ome[L_idx_0_tmp] = mt_tmp[L_idx_0_tmp + 6] * L_idx_2 +
          (mt_tmp[L_idx_0_tmp + 3] * L_idx_1 + mt_tmp[L_idx_0_tmp] * L_idx_0);
      }

      // 'TALOS_Newton_Euler_xelo:106' omeD = omeD+T(1:3,3,frame(tree(i)))*qDD(tree(i))+cross_matrix(ome)*T(1:3,3,frame(tree(i)))*qD(tree(i)); 
      L_idx_0 = qDD[i + 12];
      L_idx_1 = qD[i + 12];
      L_idx_0_tmp_0 = b[i + 12];
      b_0 = b[i + 12];

      // 'TALOS_Newton_Euler_xelo:107' ome = ome + qD(tree(i))*T(1:3,3,frame(tree(i))); 
      b_1 = b[i + 12];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        qD_0 = mt_tmp[L_idx_0_tmp + 3];
        L_idx_2 = mt_tmp[L_idx_0_tmp + 6];
        vD[L_idx_0_tmp] = m_temp[L_idx_0_tmp] + (L_idx_2 * ome[2] + (qD_0 * ome
          [1] + mt_tmp[L_idx_0_tmp] * ome[0]));
        e_aoffset = (L_idx_0_tmp_0 - 1) << 4;
        L_idx_2 = (T[(((b_0 - 1) << 4) + L_idx_0_tmp) + 8] * L_idx_0 +
                   b_omeD_data[L_idx_0_tmp]) + (T[e_aoffset + 10] * L_idx_2 +
          (T[e_aoffset + 9] * qD_0 + T[e_aoffset + 8] * mt_tmp[L_idx_0_tmp])) *
          L_idx_1;
        qD_0 = T[(((b_1 - 1) << 4) + L_idx_0_tmp) + 8] * L_idx_1 +
          b_ome_data[L_idx_0_tmp];
        omeD[L_idx_0_tmp] = L_idx_2;
        f[L_idx_0_tmp] = qD_0;
        b_omeD_data[L_idx_0_tmp] = L_idx_2;
        b_ome_data[L_idx_0_tmp] = qD_0;
      }

      // 'TALOS_Newton_Euler_xelo:108' if tree(i)==13
      if (13 + i == 13) {
        // 'TALOS_Newton_Euler_xelo:109' omei = ome;
        omei_size_idx_0 = 3;

        // 'TALOS_Newton_Euler_xelo:110' omeDi = omeD;
        omeDi_size_idx_0 = 3;

        // 'TALOS_Newton_Euler_xelo:111' vDi = vD;
        omei_data[0] = f[0];
        omeDi_data[0] = omeD[0];
        vDi_idx_0 = vD[0];
        omei_data[1] = f[1];
        omeDi_data[1] = omeD[1];
        vDi_idx_1 = vD[1];
        omei_data[2] = f[2];
        omeDi_data[2] = omeD[2];
        vDi_idx_2 = vD[2];
      }

      // 'TALOS_Newton_Euler_xelo:113' R=T(1:3,1:3,frame(tree(i)));
      // 'TALOS_Newton_Euler_xelo:114' S = R*CoM_stack(:,frame(tree(i)));
      L_idx_0_tmp_0 = b[i + 12];
      b_0 = b[i + 12];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        S_tmp = ((L_idx_0_tmp_0 - 1) << 4) + L_idx_0_tmp;
        S_tmp_0 = (b_0 - 1) * 3;
        S[L_idx_0_tmp] = T[S_tmp + 8] * walk_DW.CoM_stack[S_tmp_0 + 2] +
          (T[S_tmp + 4] * walk_DW.CoM_stack[S_tmp_0 + 1] + T[S_tmp] *
           walk_DW.CoM_stack[S_tmp_0]);
      }

      // 'TALOS_Newton_Euler_xelo:115' ft(:,tree(i)) = mass_stack(frame(tree(i)))*(vD+cross_matrix(omeD)*S+cross_matrix(ome)*(cross_matrix(ome)*S)); 
      walk_cross_matrix(f, mt_tmp);
      walk_cross_matrix(omeD, tmp);
      L_idx_0 = walk_DW.mass_stack[b[i + 12] - 1];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        m_temp[L_idx_0_tmp] = ((tmp[L_idx_0_tmp + 3] * S[1] + tmp[L_idx_0_tmp] *
          S[0]) + tmp[L_idx_0_tmp + 6] * S[2]) + vD[L_idx_0_tmp];
        ome[L_idx_0_tmp] = mt_tmp[L_idx_0_tmp + 6] * S[2] + (mt_tmp[L_idx_0_tmp
          + 3] * S[1] + mt_tmp[L_idx_0_tmp] * S[0]);
      }

      // 'TALOS_Newton_Euler_xelo:116' mt(:,tree(i))= mass_stack(frame(tree(i)))*cross_matrix(S)*vD+R*I_stack(:,:,frame(tree(i)))*R'*omeD+cross_matrix(ome)*R*I_stack(:,:,frame(tree(i)))*R'*ome; 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      L_idx_0_tmp_0 = b[i + 12];
      b_0 = b[i + 12];
      b_1 = b[i + 12];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        mt_tmp_0[L_idx_0_tmp] = 0.0;
        for (S_tmp = 0; S_tmp < 3; S_tmp++) {
          d_a_tmp[S_tmp + 3 * L_idx_0_tmp] = T[((S_tmp << 2) + L_idx_0_tmp) +
            ((L_idx_0_tmp_0 - 1) << 4)];
          e_aoffset = L_idx_0_tmp + 3 * S_tmp;
          T_0[e_aoffset] = 0.0;
          T_tmp = ((b_0 - 1) << 4) + L_idx_0_tmp;
          S_tmp_0 = (b_1 - 1) * 9 + 3 * S_tmp;
          T_0[e_aoffset] += T[T_tmp] * walk_DW.I_stack[S_tmp_0];
          T_0[e_aoffset] += T[T_tmp + 4] * walk_DW.I_stack[S_tmp_0 + 1];
          T_0[e_aoffset] += T[T_tmp + 8] * walk_DW.I_stack[S_tmp_0 + 2];
          mt_tmp_0[L_idx_0_tmp] += mt_tmp[e_aoffset] * ome[S_tmp];
        }

        ft[L_idx_0_tmp + 3 * (i + 12)] = (m_temp[L_idx_0_tmp] +
          mt_tmp_0[L_idx_0_tmp]) * L_idx_0;
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          e_aoffset = b_1 + 3 * L_idx_0_tmp;
          mt_tmp[e_aoffset] = 0.0;
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp] * T_0[b_1];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 1] * T_0[b_1 + 3];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 2] * T_0[b_1 + 6];
        }

        m_temp[b_1] = 0.0;
      }

      walk_cross_matrix(f, tmp);
      L_idx_0_tmp_0 = b[i + 12];
      b_0 = b[i + 12];
      for (b_1 = 0; b_1 < 3; b_1++) {
        e_aoffset = b_1 * 3;
        for (T_tmp = 0; T_tmp < 3; T_tmp++) {
          L_idx_0_tmp = b_1 + 3 * T_tmp;
          T_0[L_idx_0_tmp] = 0.0;
          S_tmp = ((L_idx_0_tmp_0 - 1) << 4) + (T_tmp << 2);
          T_0[L_idx_0_tmp] += T[S_tmp] * tmp[b_1];
          T_0[L_idx_0_tmp] += T[S_tmp + 1] * tmp[b_1 + 3];
          T_0[L_idx_0_tmp] += T[S_tmp + 2] * tmp[b_1 + 6];
          m_temp[T_tmp] += mt_tmp[e_aoffset + T_tmp] * omeD[b_1];
        }

        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          S_tmp = b_1 + 3 * L_idx_0_tmp;
          T_1[S_tmp] = 0.0;
          e_aoffset = (b_0 - 1) * 9 + 3 * L_idx_0_tmp;
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset] * T_0[b_1];
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset + 1] * T_0[b_1 + 3];
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset + 2] * T_0[b_1 + 6];
        }
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          e_aoffset = b_1 + 3 * L_idx_0_tmp;
          mt_tmp[e_aoffset] = 0.0;
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp] * T_1[b_1];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 1] * T_1[b_1 + 3];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 2] * T_1[b_1 + 6];
        }

        omeD[b_1] = 0.0;
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        e_aoffset = b_1 * 3;
        omeD[0] += f[b_1] * mt_tmp[e_aoffset];
        omeD[1] += mt_tmp[e_aoffset + 1] * f[b_1];
        omeD[2] += mt_tmp[e_aoffset + 2] * f[b_1];
      }

      tmp[0] = 0.0;
      tmp[3] = L_idx_0 * -S[2];
      tmp[6] = L_idx_0 * S[1];
      tmp[1] = L_idx_0 * S[2];
      tmp[4] = 0.0;
      tmp[7] = L_idx_0 * -S[0];
      tmp[2] = L_idx_0 * -S[1];
      tmp[5] = L_idx_0 * S[0];
      tmp[8] = 0.0;
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        mt[L_idx_0_tmp + 3 * (i + 12)] = (((tmp[L_idx_0_tmp + 3] * vD[1] +
          tmp[L_idx_0_tmp] * vD[0]) + tmp[L_idx_0_tmp + 6] * vD[2]) +
          m_temp[L_idx_0_tmp]) + omeD[L_idx_0_tmp];
      }
    }

    // Tree 3 Initialisation
    // 'TALOS_Newton_Euler_xelo:120' ome =omei;
    if (0 <= omei_size_idx_0 - 1) {
      memcpy(&b_ome_data[0], &omei_data[0], omei_size_idx_0 * sizeof(real_T));
    }

    // 'TALOS_Newton_Euler_xelo:121' omeD = omeDi;
    if (0 <= omeDi_size_idx_0 - 1) {
      memcpy(&b_omeD_data[0], &omeDi_data[0], omeDi_size_idx_0 * sizeof(real_T));
    }

    // 'TALOS_Newton_Euler_xelo:122' vD = vDi;
    vD[0] = vDi_idx_0;
    vD[1] = vDi_idx_1;
    vD[2] = vDi_idx_2;

    // 'TALOS_Newton_Euler_xelo:123' tree=tree3;
    // Forward algorithm
    // 'TALOS_Newton_Euler_xelo:126' for i=1:numel(tree)
    for (i = 0; i < 7; i++) {
      // 'TALOS_Newton_Euler_xelo:127' if i~=1
      if (1 + i != 1) {
        // 'TALOS_Newton_Euler_xelo:128' L = T(1:3,4,frame(tree(i)))-T(1:3,4,frame(tree(i-1))); 
        L_idx_0_tmp = (b[i + 16] - 1) << 4;
        L_idx_0_tmp_0 = (b[i + 15] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];
      } else {
        // 'TALOS_Newton_Euler_xelo:129' else
        // 'TALOS_Newton_Euler_xelo:130' L = T(1:3,4,frame(tree(i)))-T(1:3,4,frame(14)); 
        L_idx_0 = T[364] - T[268];
        L_idx_1 = T[365] - T[269];
        L_idx_2 = T[366] - T[270];
      }

      // 'TALOS_Newton_Euler_xelo:132' vD = vD + cross_matrix(omeD)*L+cross_matrix(ome)*(cross_matrix(ome)*L); 
      walk_cross_matrix(b_omeD_data, tmp);
      walk_cross_matrix(b_ome_data, T_0);
      walk_cross_matrix(b_ome_data, T_1);
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        m_temp[L_idx_0_tmp] = ((tmp[L_idx_0_tmp + 3] * L_idx_1 + tmp[L_idx_0_tmp]
          * L_idx_0) + tmp[L_idx_0_tmp + 6] * L_idx_2) + vD[L_idx_0_tmp];
        mt_tmp_0[L_idx_0_tmp] = T_1[L_idx_0_tmp + 6] * L_idx_2 +
          (T_1[L_idx_0_tmp + 3] * L_idx_1 + T_1[L_idx_0_tmp] * L_idx_0);
      }

      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        vD[L_idx_0_tmp] = m_temp[L_idx_0_tmp] + (T_0[L_idx_0_tmp + 6] *
          mt_tmp_0[2] + (T_0[L_idx_0_tmp + 3] * mt_tmp_0[1] + T_0[L_idx_0_tmp] *
                         mt_tmp_0[0]));
      }

      // 'TALOS_Newton_Euler_xelo:133' omeD = omeD+T(1:3,3,frame(tree(i)))*qDD(tree(i))+cross_matrix(ome)*T(1:3,3,frame(tree(i)))*qD(tree(i)); 
      walk_cross_matrix(b_ome_data, tmp);
      L_idx_0 = qDD[i + 16];
      L_idx_1 = qD[i + 16];
      L_idx_0_tmp_0 = b[i + 16];
      b_0 = b[i + 16];

      // 'TALOS_Newton_Euler_xelo:134' ome = ome + qD(tree(i))*T(1:3,3,frame(tree(i))); 
      b_1 = b[i + 16];

      // 'TALOS_Newton_Euler_xelo:135' R=T(1:3,1:3,frame(tree(i)));
      // 'TALOS_Newton_Euler_xelo:136' S = R*CoM_stack(:,frame(tree(i)));
      e_aoffset = b[i + 16];
      T_tmp = b[i + 16];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        S_tmp = (L_idx_0_tmp_0 - 1) << 4;
        L_idx_2 = (T[(((b_0 - 1) << 4) + L_idx_0_tmp) + 8] * L_idx_0 +
                   b_omeD_data[L_idx_0_tmp]) + (T[S_tmp + 10] * tmp[L_idx_0_tmp
          + 6] + (T[S_tmp + 9] * tmp[L_idx_0_tmp + 3] + T[S_tmp + 8] *
                  tmp[L_idx_0_tmp])) * L_idx_1;
        qD_0 = T[(((b_1 - 1) << 4) + L_idx_0_tmp) + 8] * L_idx_1 +
          b_ome_data[L_idx_0_tmp];
        S_tmp = ((e_aoffset - 1) << 4) + L_idx_0_tmp;
        S_tmp_0 = (T_tmp - 1) * 3;
        omeD[L_idx_0_tmp] = L_idx_2;
        f[L_idx_0_tmp] = qD_0;
        b_omeD_data[L_idx_0_tmp] = L_idx_2;
        b_ome_data[L_idx_0_tmp] = qD_0;
        S[L_idx_0_tmp] = T[S_tmp + 8] * walk_DW.CoM_stack[S_tmp_0 + 2] +
          (T[S_tmp + 4] * walk_DW.CoM_stack[S_tmp_0 + 1] + T[S_tmp] *
           walk_DW.CoM_stack[S_tmp_0]);
      }

      // 'TALOS_Newton_Euler_xelo:137' ft(:,tree(i)) = mass_stack(frame(tree(i)))*(vD+cross_matrix(omeD)*S+cross_matrix(ome)*(cross_matrix(ome)*S)); 
      walk_cross_matrix(f, mt_tmp);
      walk_cross_matrix(omeD, tmp);
      L_idx_0 = walk_DW.mass_stack[b[i + 16] - 1];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        m_temp[L_idx_0_tmp] = ((tmp[L_idx_0_tmp + 3] * S[1] + tmp[L_idx_0_tmp] *
          S[0]) + tmp[L_idx_0_tmp + 6] * S[2]) + vD[L_idx_0_tmp];
        ome[L_idx_0_tmp] = mt_tmp[L_idx_0_tmp + 6] * S[2] + (mt_tmp[L_idx_0_tmp
          + 3] * S[1] + mt_tmp[L_idx_0_tmp] * S[0]);
      }

      // 'TALOS_Newton_Euler_xelo:138' mt(:,tree(i))= mass_stack(frame(tree(i)))*cross_matrix(S)*vD+R*I_stack(:,:,frame(tree(i)))*R'*omeD+cross_matrix(ome)*R*I_stack(:,:,frame(tree(i)))*R'*ome; 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      L_idx_0_tmp_0 = b[i + 16];
      b_0 = b[i + 16];
      b_1 = b[i + 16];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        mt_tmp_0[L_idx_0_tmp] = 0.0;
        for (S_tmp = 0; S_tmp < 3; S_tmp++) {
          d_a_tmp[S_tmp + 3 * L_idx_0_tmp] = T[((S_tmp << 2) + L_idx_0_tmp) +
            ((L_idx_0_tmp_0 - 1) << 4)];
          e_aoffset = L_idx_0_tmp + 3 * S_tmp;
          T_0[e_aoffset] = 0.0;
          T_tmp = ((b_0 - 1) << 4) + L_idx_0_tmp;
          S_tmp_0 = (b_1 - 1) * 9 + 3 * S_tmp;
          T_0[e_aoffset] += T[T_tmp] * walk_DW.I_stack[S_tmp_0];
          T_0[e_aoffset] += T[T_tmp + 4] * walk_DW.I_stack[S_tmp_0 + 1];
          T_0[e_aoffset] += T[T_tmp + 8] * walk_DW.I_stack[S_tmp_0 + 2];
          mt_tmp_0[L_idx_0_tmp] += mt_tmp[e_aoffset] * ome[S_tmp];
        }

        ft[L_idx_0_tmp + 3 * (i + 16)] = (m_temp[L_idx_0_tmp] +
          mt_tmp_0[L_idx_0_tmp]) * L_idx_0;
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          e_aoffset = b_1 + 3 * L_idx_0_tmp;
          mt_tmp[e_aoffset] = 0.0;
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp] * T_0[b_1];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 1] * T_0[b_1 + 3];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 2] * T_0[b_1 + 6];
        }

        m_temp[b_1] = 0.0;
      }

      walk_cross_matrix(f, tmp);
      L_idx_0_tmp_0 = b[i + 16];
      b_0 = b[i + 16];
      for (b_1 = 0; b_1 < 3; b_1++) {
        e_aoffset = b_1 * 3;
        for (T_tmp = 0; T_tmp < 3; T_tmp++) {
          T_0[b_1 + 3 * T_tmp] = 0.0;
          L_idx_0_tmp = ((L_idx_0_tmp_0 - 1) << 4) + (T_tmp << 2);
          T_0[b_1 + 3 * T_tmp] += T[L_idx_0_tmp] * tmp[b_1];
          T_0[b_1 + 3 * T_tmp] += T[L_idx_0_tmp + 1] * tmp[b_1 + 3];
          T_0[b_1 + 3 * T_tmp] += T[L_idx_0_tmp + 2] * tmp[b_1 + 6];
          m_temp[T_tmp] += mt_tmp[e_aoffset + T_tmp] * omeD[b_1];
        }

        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          S_tmp = b_1 + 3 * L_idx_0_tmp;
          T_1[S_tmp] = 0.0;
          e_aoffset = (b_0 - 1) * 9 + 3 * L_idx_0_tmp;
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset] * T_0[b_1];
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset + 1] * T_0[b_1 + 3];
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset + 2] * T_0[b_1 + 6];
        }
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          e_aoffset = b_1 + 3 * L_idx_0_tmp;
          mt_tmp[e_aoffset] = 0.0;
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp] * T_1[b_1];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 1] * T_1[b_1 + 3];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 2] * T_1[b_1 + 6];
        }

        omeD[b_1] = 0.0;
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        e_aoffset = b_1 * 3;
        omeD[0] += f[b_1] * mt_tmp[e_aoffset];
        omeD[1] += mt_tmp[e_aoffset + 1] * f[b_1];
        omeD[2] += mt_tmp[e_aoffset + 2] * f[b_1];
      }

      tmp[0] = 0.0;
      tmp[3] = L_idx_0 * -S[2];
      tmp[6] = L_idx_0 * S[1];
      tmp[1] = L_idx_0 * S[2];
      tmp[4] = 0.0;
      tmp[7] = L_idx_0 * -S[0];
      tmp[2] = L_idx_0 * -S[1];
      tmp[5] = L_idx_0 * S[0];
      tmp[8] = 0.0;
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        mt[L_idx_0_tmp + 3 * (i + 16)] = (((tmp[L_idx_0_tmp + 3] * vD[1] +
          tmp[L_idx_0_tmp] * vD[0]) + tmp[L_idx_0_tmp + 6] * vD[2]) +
          m_temp[L_idx_0_tmp]) + omeD[L_idx_0_tmp];
      }
    }

    // Tree 4 Initialisation
    // 'TALOS_Newton_Euler_xelo:142' ome =omei;
    if (0 <= omei_size_idx_0 - 1) {
      memcpy(&b_ome_data[0], &omei_data[0], omei_size_idx_0 * sizeof(real_T));
    }

    // 'TALOS_Newton_Euler_xelo:143' omeD = omeDi;
    if (0 <= omeDi_size_idx_0 - 1) {
      memcpy(&b_omeD_data[0], &omeDi_data[0], omeDi_size_idx_0 * sizeof(real_T));
    }

    // 'TALOS_Newton_Euler_xelo:144' vD = vDi;
    vD[0] = vDi_idx_0;
    vD[1] = vDi_idx_1;
    vD[2] = vDi_idx_2;

    // 'TALOS_Newton_Euler_xelo:145' tree=tree4;
    // Forward algorithm
    // 'TALOS_Newton_Euler_xelo:148' for i=1:numel(tree)
    for (i = 0; i < 7; i++) {
      // 'TALOS_Newton_Euler_xelo:149' if i~=1
      if (1 + i != 1) {
        // 'TALOS_Newton_Euler_xelo:150' L = T(1:3,4,frame(tree(i)))-T(1:3,4,frame(tree(i-1))); 
        L_idx_0_tmp = (b[i + 23] - 1) << 4;
        L_idx_0_tmp_0 = (b[i + 22] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];
      } else {
        // 'TALOS_Newton_Euler_xelo:151' else
        // 'TALOS_Newton_Euler_xelo:152' L = T(1:3,4,frame(tree(i)))-T(1:3,4,frame(14)); 
        L_idx_0 = T[588] - T[268];
        L_idx_1 = T[589] - T[269];
        L_idx_2 = T[590] - T[270];
      }

      // 'TALOS_Newton_Euler_xelo:154' vD = vD + cross_matrix(omeD)*L+cross_matrix(ome)*(cross_matrix(ome)*L); 
      walk_cross_matrix(b_omeD_data, tmp);
      walk_cross_matrix(b_ome_data, T_0);
      walk_cross_matrix(b_ome_data, T_1);
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        m_temp[L_idx_0_tmp] = ((tmp[L_idx_0_tmp + 3] * L_idx_1 + tmp[L_idx_0_tmp]
          * L_idx_0) + tmp[L_idx_0_tmp + 6] * L_idx_2) + vD[L_idx_0_tmp];
        mt_tmp_0[L_idx_0_tmp] = T_1[L_idx_0_tmp + 6] * L_idx_2 +
          (T_1[L_idx_0_tmp + 3] * L_idx_1 + T_1[L_idx_0_tmp] * L_idx_0);
      }

      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        vD[L_idx_0_tmp] = m_temp[L_idx_0_tmp] + (T_0[L_idx_0_tmp + 6] *
          mt_tmp_0[2] + (T_0[L_idx_0_tmp + 3] * mt_tmp_0[1] + T_0[L_idx_0_tmp] *
                         mt_tmp_0[0]));
      }

      // 'TALOS_Newton_Euler_xelo:155' omeD = omeD+T(1:3,3,frame(tree(i)))*qDD(tree(i))+cross_matrix(ome)*T(1:3,3,frame(tree(i)))*qD(tree(i)); 
      walk_cross_matrix(b_ome_data, tmp);
      L_idx_0 = qDD[i + 23];
      L_idx_1 = qD[i + 23];
      L_idx_0_tmp_0 = b[i + 23];
      b_0 = b[i + 23];

      // 'TALOS_Newton_Euler_xelo:156' ome = ome + qD(tree(i))*T(1:3,3,frame(tree(i))); 
      b_1 = b[i + 23];
      e_aoffset = b[i + 23];

      // 'TALOS_Newton_Euler_xelo:157' R=T(1:3,1:3,frame(tree(i)));
      // 'TALOS_Newton_Euler_xelo:158' S = R*CoM_stack(:,frame(tree(i)));
      T_tmp = b[i + 23];
      omei_size_idx_0 = b[i + 23];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        S_tmp = (L_idx_0_tmp_0 - 1) << 4;
        L_idx_2 = (T[(((b_0 - 1) << 4) + L_idx_0_tmp) + 8] * L_idx_0 +
                   b_omeD_data[L_idx_0_tmp]) + (T[S_tmp + 10] * tmp[L_idx_0_tmp
          + 6] + (T[S_tmp + 9] * tmp[L_idx_0_tmp + 3] + T[S_tmp + 8] *
                  tmp[L_idx_0_tmp])) * L_idx_1;
        ome[L_idx_0_tmp] = T[(((b_1 - 1) << 4) + L_idx_0_tmp) + 8] * L_idx_1 +
          b_ome_data[L_idx_0_tmp];
        S_tmp = ((T_tmp - 1) << 4) + L_idx_0_tmp;
        S_tmp_0 = (omei_size_idx_0 - 1) * 3;
        omeD[L_idx_0_tmp] = L_idx_2;
        b_omeD_data[L_idx_0_tmp] = L_idx_2;
        b_ome_data[L_idx_0_tmp] += T[(((e_aoffset - 1) << 4) + L_idx_0_tmp) + 8]
          * L_idx_1;
        S[L_idx_0_tmp] = T[S_tmp + 8] * walk_DW.CoM_stack[S_tmp_0 + 2] +
          (T[S_tmp + 4] * walk_DW.CoM_stack[S_tmp_0 + 1] + T[S_tmp] *
           walk_DW.CoM_stack[S_tmp_0]);
      }

      // 'TALOS_Newton_Euler_xelo:159' ft(:,tree(i)) = mass_stack(frame(tree(i)))*(vD+cross_matrix(omeD)*S+cross_matrix(ome)*(cross_matrix(ome)*S)); 
      walk_cross_matrix(omeD, tmp);
      walk_cross_matrix(ome, T_0);
      walk_cross_matrix(ome, T_1);
      L_idx_0 = walk_DW.mass_stack[b[i + 23] - 1];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        m_temp[L_idx_0_tmp] = ((tmp[L_idx_0_tmp + 3] * S[1] + tmp[L_idx_0_tmp] *
          S[0]) + tmp[L_idx_0_tmp + 6] * S[2]) + vD[L_idx_0_tmp];
        mt_tmp_0[L_idx_0_tmp] = T_1[L_idx_0_tmp + 6] * S[2] + (T_1[L_idx_0_tmp +
          3] * S[1] + T_1[L_idx_0_tmp] * S[0]);
      }

      // 'TALOS_Newton_Euler_xelo:160' mt(:,tree(i))= mass_stack(frame(tree(i)))*cross_matrix(S)*vD+R*I_stack(:,:,frame(tree(i)))*R'*omeD+cross_matrix(ome)*R*I_stack(:,:,frame(tree(i)))*R'*ome; 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      L_idx_0_tmp_0 = b[i + 23];
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        omei_size_idx_0 = ((L_idx_0_tmp_0 - 1) << 4) + L_idx_0_tmp;
        d_a_tmp[3 * L_idx_0_tmp] = T[omei_size_idx_0];
        d_a_tmp[1 + 3 * L_idx_0_tmp] = T[omei_size_idx_0 + 4];
        d_a_tmp[2 + 3 * L_idx_0_tmp] = T[omei_size_idx_0 + 8];
        ft[L_idx_0_tmp + 3 * (i + 23)] = (m_temp[L_idx_0_tmp] + (T_0[L_idx_0_tmp
          + 6] * mt_tmp_0[2] + (T_0[L_idx_0_tmp + 3] * mt_tmp_0[1] +
          T_0[L_idx_0_tmp] * mt_tmp_0[0]))) * L_idx_0;
      }

      L_idx_0_tmp_0 = b[i + 23];
      b_0 = b[i + 23];
      for (b_1 = 0; b_1 < 3; b_1++) {
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          e_aoffset = b_1 + 3 * L_idx_0_tmp;
          T_0[e_aoffset] = 0.0;
          T_tmp = ((L_idx_0_tmp_0 - 1) << 4) + b_1;
          S_tmp_0 = (b_0 - 1) * 9 + 3 * L_idx_0_tmp;
          T_0[e_aoffset] += T[T_tmp] * walk_DW.I_stack[S_tmp_0];
          T_0[e_aoffset] += T[T_tmp + 4] * walk_DW.I_stack[S_tmp_0 + 1];
          T_0[e_aoffset] += T[T_tmp + 8] * walk_DW.I_stack[S_tmp_0 + 2];
        }

        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          e_aoffset = b_1 + 3 * L_idx_0_tmp;
          mt_tmp[e_aoffset] = 0.0;
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp] * T_0[b_1];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 1] * T_0[b_1 + 3];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 2] * T_0[b_1 + 6];
        }

        m_temp[b_1] = 0.0;
      }

      walk_cross_matrix(ome, tmp);
      L_idx_0_tmp_0 = b[i + 23];
      b_0 = b[i + 23];
      for (b_1 = 0; b_1 < 3; b_1++) {
        e_aoffset = b_1 * 3;
        for (T_tmp = 0; T_tmp < 3; T_tmp++) {
          T_0[b_1 + 3 * T_tmp] = 0.0;
          L_idx_0_tmp = ((L_idx_0_tmp_0 - 1) << 4) + (T_tmp << 2);
          T_0[b_1 + 3 * T_tmp] += T[L_idx_0_tmp] * tmp[b_1];
          T_0[b_1 + 3 * T_tmp] += T[L_idx_0_tmp + 1] * tmp[b_1 + 3];
          T_0[b_1 + 3 * T_tmp] += T[L_idx_0_tmp + 2] * tmp[b_1 + 6];
          m_temp[T_tmp] += mt_tmp[e_aoffset + T_tmp] * omeD[b_1];
        }

        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          S_tmp = b_1 + 3 * L_idx_0_tmp;
          T_1[S_tmp] = 0.0;
          e_aoffset = (b_0 - 1) * 9 + 3 * L_idx_0_tmp;
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset] * T_0[b_1];
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset + 1] * T_0[b_1 + 3];
          T_1[S_tmp] += walk_DW.I_stack[e_aoffset + 2] * T_0[b_1 + 6];
        }
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          e_aoffset = b_1 + 3 * L_idx_0_tmp;
          mt_tmp[e_aoffset] = 0.0;
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp] * T_1[b_1];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 1] * T_1[b_1 + 3];
          mt_tmp[e_aoffset] += d_a_tmp[3 * L_idx_0_tmp + 2] * T_1[b_1 + 6];
        }

        omeD[b_1] = 0.0;
      }

      for (b_1 = 0; b_1 < 3; b_1++) {
        e_aoffset = b_1 * 3;
        omeD[0] += ome[b_1] * mt_tmp[e_aoffset];
        omeD[1] += mt_tmp[e_aoffset + 1] * ome[b_1];
        omeD[2] += mt_tmp[e_aoffset + 2] * ome[b_1];
      }

      tmp[0] = 0.0;
      tmp[3] = L_idx_0 * -S[2];
      tmp[6] = L_idx_0 * S[1];
      tmp[1] = L_idx_0 * S[2];
      tmp[4] = 0.0;
      tmp[7] = L_idx_0 * -S[0];
      tmp[2] = L_idx_0 * -S[1];
      tmp[5] = L_idx_0 * S[0];
      tmp[8] = 0.0;
      for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
        mt[L_idx_0_tmp + 3 * (i + 23)] = (((tmp[L_idx_0_tmp + 3] * vD[1] +
          tmp[L_idx_0_tmp] * vD[0]) + tmp[L_idx_0_tmp + 6] * vD[2]) +
          m_temp[L_idx_0_tmp]) + omeD[L_idx_0_tmp];
      }
    }

    // Backward algorithm
    //  =========================================
    //  f =[0;0;0];
    // 'TALOS_Newton_Euler_xelo:166' f = W4(1:3,1);
    //  m = [0;0;0];
    // 'TALOS_Newton_Euler_xelo:168' m = W4(4:6,1);
    f[0] = 0.0;
    m[0] = 0.0;
    f[1] = 0.0;
    m[1] = 0.0;
    f[2] = 0.0;
    m[2] = 0.0;

    // Tree 4
    // 'TALOS_Newton_Euler_xelo:171' tree = tree4;
    // 'TALOS_Newton_Euler_xelo:172' for i = numel(tree):-1:1
    for (i = 0; i < 7; i++) {
      // 'TALOS_Newton_Euler_xelo:173' if i == numel(tree)
      if (7 - i == 7) {
        // 'TALOS_Newton_Euler_xelo:174' L=[0;0;0];
        L_idx_0 = 0.0;
        L_idx_1 = 0.0;
        L_idx_2 = 0.0;
      } else {
        // 'TALOS_Newton_Euler_xelo:175' else
        // 'TALOS_Newton_Euler_xelo:176' L = T(1:3,4,frame(tree(i+1)))-T(1:3,4,frame(tree(i))); 
        L_idx_0_tmp = (b[30 - i] - 1) << 4;
        L_idx_0_tmp_0 = (b[29 - i] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];
      }

      //  0M = 0Minercial + 0M_{i+1} + 0L x 0F
      // 'TALOS_Newton_Euler_xelo:179' m = mt(:,tree(i))+m+cross_matrix(L)*f;
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      tmp[0] = 0.0;
      tmp[3] = -L_idx_2;
      tmp[6] = L_idx_1;
      tmp[1] = L_idx_2;
      tmp[4] = 0.0;
      tmp[7] = -L_idx_0;
      tmp[2] = -L_idx_1;
      tmp[5] = L_idx_0;
      tmp[8] = 0.0;
      L_idx_0_tmp = 29 - i;
      for (S_tmp = 0; S_tmp < 3; S_tmp++) {
        m[S_tmp] = ((tmp[S_tmp + 3] * f[1] + tmp[S_tmp] * f[0]) + tmp[S_tmp + 6]
                    * f[2]) + (mt[3 * L_idx_0_tmp + S_tmp] + m[S_tmp]);
      }

      //  0F = 0Finercial + 0F_{i+1}
      // 'TALOS_Newton_Euler_xelo:181' f = ft(:,tree(i))+f;
      L_idx_0_tmp = 29 - i;

      //  Las 3 componentes del par estarían dadas por ^iTau = ^iR0 0M, sin embargo ya que el par solo se aplica en "z" sólo se 
      //  calcula el ultimo rengon, i.e. ^iTau_z = ^iR0(i,:) 0M -> [0ax 0ay 0az]*[0Mx 0My 0Mz] 
      // 'TALOS_Newton_Euler_xelo:184' Tau(tree(i))=m'*T(1:3,3,frame(tree(i)))+Ia(tree(i))*qDD(tree(i)); 
      f[0] += ft[3 * L_idx_0_tmp];
      f[1] += ft[3 * L_idx_0_tmp + 1];
      f[2] += ft[3 * L_idx_0_tmp + 2];
      omei_size_idx_0 = (b[29 - i] - 1) << 4;
      Tau[29 - i] = ((T[omei_size_idx_0 + 8] * m[0] + T[omei_size_idx_0 + 9] *
                      m[1]) + T[omei_size_idx_0 + 10] * m[2]) + walk_DW.Ia[29 -
        i] * qDD[29 - i];

      //  As?estaba... + Ia(i)*qDD(i); pero as?no es por que no toma las inercias de los actuadores superiores 
      //  Ésto sería lo mismo:
      //  Par = T(1:3,1:3,frame(tree(i)))'*m; % iR0*0M y luego se toma el 3er elemento 
      //  Tau(tree(i))= Par(3) + Ia(i)*qDD(i);  % iTau = iMz + iIa*qpp
      //  NOTE que el par "tau" est?expresado en su PROPIO MARCO
    }

    // 'TALOS_Newton_Euler_xelo:190' f_temp = f;
    // 'TALOS_Newton_Euler_xelo:191' m_temp = m;
    // Tree 3
    //  f =[0;0;0];
    // 'TALOS_Newton_Euler_xelo:195' f = W3(1:3,1);
    //  m = [0;0;0];
    // 'TALOS_Newton_Euler_xelo:197' m =W3(4:6,1);
    S[0] = f[0];
    m_temp[0] = m[0];
    f[0] = 0.0;
    m[0] = 0.0;
    S[1] = f[1];
    m_temp[1] = m[1];
    f[1] = 0.0;
    m[1] = 0.0;
    qD_0 = f[2];
    m_temp[2] = m[2];
    f[2] = 0.0;
    m[2] = 0.0;

    // 'TALOS_Newton_Euler_xelo:198' tree = tree3;
    // 'TALOS_Newton_Euler_xelo:199' for i = numel(tree):-1:1
    for (i = 0; i < 7; i++) {
      // 'TALOS_Newton_Euler_xelo:200' if i == numel(tree)
      if (7 - i == 7) {
        // 'TALOS_Newton_Euler_xelo:201' L=[0;0;0];
        L_idx_0 = 0.0;
        L_idx_1 = 0.0;
        L_idx_2 = 0.0;
      } else {
        // 'TALOS_Newton_Euler_xelo:202' else
        // 'TALOS_Newton_Euler_xelo:203' L = T(1:3,4,frame(tree(i+1)))-T(1:3,4,frame(tree(i))); 
        L_idx_0_tmp = (b[23 - i] - 1) << 4;
        L_idx_0_tmp_0 = (b[22 - i] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];
      }

      // 'TALOS_Newton_Euler_xelo:205' m = mt(:,tree(i))+m+cross_matrix(L)*f;
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      tmp[0] = 0.0;
      tmp[3] = -L_idx_2;
      tmp[6] = L_idx_1;
      tmp[1] = L_idx_2;
      tmp[4] = 0.0;
      tmp[7] = -L_idx_0;
      tmp[2] = -L_idx_1;
      tmp[5] = L_idx_0;
      tmp[8] = 0.0;
      L_idx_0_tmp = 22 - i;
      for (S_tmp = 0; S_tmp < 3; S_tmp++) {
        m[S_tmp] = ((tmp[S_tmp + 3] * f[1] + tmp[S_tmp] * f[0]) + tmp[S_tmp + 6]
                    * f[2]) + (mt[3 * L_idx_0_tmp + S_tmp] + m[S_tmp]);
      }

      // 'TALOS_Newton_Euler_xelo:206' f = ft(:,tree(i))+f;
      L_idx_0_tmp = 22 - i;

      // 'TALOS_Newton_Euler_xelo:207' Tau(tree(i))=m'*T(1:3,3,frame(tree(i)))+Ia(tree(i))*qDD(tree(i)); 
      f[0] += ft[3 * L_idx_0_tmp];
      f[1] += ft[3 * L_idx_0_tmp + 1];
      f[2] += ft[3 * L_idx_0_tmp + 2];
      omei_size_idx_0 = (b[22 - i] - 1) << 4;
      Tau[22 - i] = ((T[omei_size_idx_0 + 8] * m[0] + T[omei_size_idx_0 + 9] *
                      m[1]) + T[omei_size_idx_0 + 10] * m[2]) + walk_DW.Ia[22 -
        i] * qDD[22 - i];

      //  As?estaba... + Ia(i)*qDD(i); pero as?no es
      //  Ésto sería lo mismo:
      //  Par = T(1:3,1:3,frame(tree(i)))'*m; % iR0*0M y luego se toma el 3er elemento 
      //  Tau(tree(i))= Par(3) + Ia(i)*qDD(i);  % iTau = iMz + iIa*qpp
    }

    // 'TALOS_Newton_Euler_xelo:212' f_temp2 = f;
    // 'TALOS_Newton_Euler_xelo:213' m_temp2 = m;
    // Tree 2
    // 'TALOS_Newton_Euler_xelo:216' f =[0;0;0];
    // 'TALOS_Newton_Euler_xelo:217' m = [0;0;0];
    ome[0] = f[0];
    vD[0] = m[0];
    f[0] = 0.0;
    m[0] = 0.0;
    ome[1] = f[1];
    vD[1] = m[1];
    f[1] = 0.0;
    m[1] = 0.0;
    f_0 = f[2];
    vD[2] = m[2];
    f[2] = 0.0;
    m[2] = 0.0;

    // 'TALOS_Newton_Euler_xelo:218' tree = tree2;
    // 'TALOS_Newton_Euler_xelo:219' for i = numel(tree):-1:1
    for (i = 0; i < 4; i++) {
      // 'TALOS_Newton_Euler_xelo:220' if i == numel(tree)
      if (4 - i == 4) {
        // 'TALOS_Newton_Euler_xelo:221' L=[0;0;0];
        L_idx_0 = 0.0;
        L_idx_1 = 0.0;
        L_idx_2 = 0.0;
      } else {
        // 'TALOS_Newton_Euler_xelo:222' else
        // 'TALOS_Newton_Euler_xelo:223' L = T(1:3,4,frame(tree(i+1)))-T(1:3,4,frame(tree(i))); 
        L_idx_0_tmp = (b[16 - i] - 1) << 4;
        L_idx_0_tmp_0 = (b[15 - i] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];
      }

      // 'TALOS_Newton_Euler_xelo:225' m = mt(:,tree(i))+m+cross_matrix(L)*f;
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      tmp[0] = 0.0;
      tmp[3] = -L_idx_2;
      tmp[6] = L_idx_1;
      tmp[1] = L_idx_2;
      tmp[4] = 0.0;
      tmp[7] = -L_idx_0;
      tmp[2] = -L_idx_1;
      tmp[5] = L_idx_0;
      tmp[8] = 0.0;
      L_idx_0_tmp = 15 - i;
      for (S_tmp = 0; S_tmp < 3; S_tmp++) {
        m[S_tmp] = ((tmp[S_tmp + 3] * f[1] + tmp[S_tmp] * f[0]) + tmp[S_tmp + 6]
                    * f[2]) + (mt[3 * L_idx_0_tmp + S_tmp] + m[S_tmp]);
      }

      // 'TALOS_Newton_Euler_xelo:226' f = ft(:,tree(i))+f;
      L_idx_0_tmp = 15 - i;
      f[0] += ft[3 * L_idx_0_tmp];
      f[1] += ft[3 * L_idx_0_tmp + 1];
      f[2] += ft[3 * L_idx_0_tmp + 2];

      // 'TALOS_Newton_Euler_xelo:227' if tree(i) ==13
      if (16 - i == 13) {
        // 'TALOS_Newton_Euler_xelo:228' f = f+f_temp+f_temp2;
        // 'TALOS_Newton_Euler_xelo:229' L1 = T(1:3,4,frame(18))-T(1:3,4,frame(14)); 
        // 'TALOS_Newton_Euler_xelo:230' L2 = T(1:3,4,frame(25))-T(1:3,4,frame(14)); 
        vDi_idx_0 = T[412] - T[268];
        omeD[0] = T[636] - T[268];
        f[0] = (f[0] + S[0]) + ome[0];
        vDi_idx_1 = T[413] - T[269];
        omeD[1] = T[637] - T[269];
        f[1] = (f[1] + S[1]) + ome[1];
        vDi_idx_2 = T[414] - T[270];
        omeD[2] = T[638] - T[270];
        f[2] = (f[2] + qD_0) + f_0;

        // 'TALOS_Newton_Euler_xelo:231' m = m + cross_matrix(L2)*f_temp+cross_matrix(L1)*f_temp2+m_temp2+m_temp; 
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        tmp[0] = 0.0;
        tmp[3] = -omeD[2];
        tmp[6] = omeD[1];
        tmp[1] = omeD[2];
        tmp[4] = 0.0;
        tmp[7] = -omeD[0];
        tmp[2] = -omeD[1];
        tmp[5] = omeD[0];
        tmp[8] = 0.0;
        T_0[0] = 0.0;
        T_0[3] = -vDi_idx_2;
        T_0[6] = vDi_idx_1;
        T_0[1] = vDi_idx_2;
        T_0[4] = 0.0;
        T_0[7] = -vDi_idx_0;
        T_0[2] = -vDi_idx_1;
        T_0[5] = vDi_idx_0;
        T_0[8] = 0.0;
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          m[L_idx_0_tmp] = (((((tmp[L_idx_0_tmp + 3] * S[1] + tmp[L_idx_0_tmp] *
                                S[0]) + tmp[L_idx_0_tmp + 6] * qD_0) +
                              m[L_idx_0_tmp]) + (T_0[L_idx_0_tmp + 6] * f_0 +
            (T_0[L_idx_0_tmp + 3] * ome[1] + T_0[L_idx_0_tmp] * ome[0]))) +
                            vD[L_idx_0_tmp]) + m_temp[L_idx_0_tmp];
        }
      }

      // 'TALOS_Newton_Euler_xelo:233' Tau(tree(i))=m'*T(1:3,3,frame(tree(i)))+Ia(tree(i))*qDD(tree(i)); 
      omei_size_idx_0 = (b[15 - i] - 1) << 4;
      Tau[15 - i] = ((T[omei_size_idx_0 + 8] * m[0] + T[omei_size_idx_0 + 9] *
                      m[1]) + T[omei_size_idx_0 + 10] * m[2]) + walk_DW.Ia[15 -
        i] * qDD[15 - i];

      //  As?estaba... + Ia(i)*qDD(i); pero as?no es
      //  Ésto sería lo mismo:
      //  Par = T(1:3,1:3,frame(tree(i)))'*m; % iR0*0M y luego se toma el 3er elemento 
      //  Tau(tree(i))= Par(3) + Ia(i)*qDD(i);   % iTau = iMz + iIa*qpp
    }

    // 'TALOS_Newton_Euler_xelo:238' f_temp3= f;
    // 'TALOS_Newton_Euler_xelo:239' m_temp3 = m;
    // Tree 1
    //  f =[0;0;0];
    // 'TALOS_Newton_Euler_xelo:244' f = -W1(1:3,1);
    //  m = [0;0;0];
    // 'TALOS_Newton_Euler_xelo:246' m = -W1(4:6,1);
    omeD[0] = f[0];
    S[0] = m[0];
    f[0] = -0.0;
    m[0] = -0.0;
    omeD[1] = f[1];
    S[1] = m[1];
    f[1] = -0.0;
    m[1] = -0.0;
    qD_0 = f[2];
    S[2] = m[2];
    f[2] = -0.0;
    m[2] = -0.0;

    // 'TALOS_Newton_Euler_xelo:249' tree = tree1;
    // 'TALOS_Newton_Euler_xelo:250' for i = numel(tree):-1:1
    for (i = 0; i < 12; i++) {
      // 'TALOS_Newton_Euler_xelo:251' if i == numel(tree)
      if (12 - i == 12) {
        // 'TALOS_Newton_Euler_xelo:252' L=[0;0;0];
        L_idx_0 = 0.0;
        L_idx_1 = 0.0;
        L_idx_2 = 0.0;
      } else {
        // 'TALOS_Newton_Euler_xelo:253' else
        // 'TALOS_Newton_Euler_xelo:254' L = T(1:3,4,frame(tree(i+1)))-T(1:3,4,frame(tree(i))); 
        L_idx_0_tmp = (b[12 - i] - 1) << 4;
        L_idx_0_tmp_0 = (b[11 - i] - 1) << 4;
        L_idx_0 = T[L_idx_0_tmp + 12] - T[L_idx_0_tmp_0 + 12];
        L_idx_1 = T[L_idx_0_tmp + 13] - T[L_idx_0_tmp_0 + 13];
        L_idx_2 = T[L_idx_0_tmp + 14] - T[L_idx_0_tmp_0 + 14];
      }

      // 'TALOS_Newton_Euler_xelo:256' m = mt(:,tree(i)) + m + cross_matrix(L)*f; 
      // Generate the cross product matrix for a vector
      // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
      // 'cross_matrix:4'          r(3)   0       -r(1);
      // 'cross_matrix:5'          -r(2)  r(1)    0];
      tmp[0] = 0.0;
      tmp[3] = -L_idx_2;
      tmp[6] = L_idx_1;
      tmp[1] = L_idx_2;
      tmp[4] = 0.0;
      tmp[7] = -L_idx_0;
      tmp[2] = -L_idx_1;
      tmp[5] = L_idx_0;
      tmp[8] = 0.0;
      L_idx_0_tmp = 11 - i;
      for (S_tmp = 0; S_tmp < 3; S_tmp++) {
        m[S_tmp] = ((tmp[S_tmp + 3] * f[1] + tmp[S_tmp] * f[0]) + tmp[S_tmp + 6]
                    * f[2]) + (mt[3 * L_idx_0_tmp + S_tmp] + m[S_tmp]);
      }

      // 'TALOS_Newton_Euler_xelo:257' f = ft(:,tree(i)) + f;
      L_idx_0_tmp = 11 - i;
      f[0] += ft[3 * L_idx_0_tmp];
      f[1] += ft[3 * L_idx_0_tmp + 1];
      f[2] += ft[3 * L_idx_0_tmp + 2];

      // 'TALOS_Newton_Euler_xelo:258' if tree(i) ==6
      if (12 - i == 6) {
        // 'TALOS_Newton_Euler_xelo:259' f = f+f_temp3;
        // 'TALOS_Newton_Euler_xelo:260' L1 = T(1:3,4,frame(13))-T(1:3,4,frame(6)); 
        L_idx_0 = T[252] - T[108];
        f[0] += omeD[0];
        vDi_idx_0 = T[253] - T[109];
        f[1] += omeD[1];
        vDi_idx_1 = T[254] - T[110];
        f[2] += qD_0;

        // 'TALOS_Newton_Euler_xelo:261' m = m + cross_matrix(L1)*f_temp3+m_temp3; 
        // Generate the cross product matrix for a vector
        // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
        // 'cross_matrix:4'          r(3)   0       -r(1);
        // 'cross_matrix:5'          -r(2)  r(1)    0];
        tmp[0] = 0.0;
        tmp[3] = -vDi_idx_1;
        tmp[6] = vDi_idx_0;
        tmp[1] = vDi_idx_1;
        tmp[4] = 0.0;
        tmp[7] = -L_idx_0;
        tmp[2] = -vDi_idx_0;
        tmp[5] = L_idx_0;
        tmp[8] = 0.0;
        for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
          m[L_idx_0_tmp] = (((tmp[L_idx_0_tmp + 3] * omeD[1] + tmp[L_idx_0_tmp] *
                              omeD[0]) + tmp[L_idx_0_tmp + 6] * qD_0) +
                            m[L_idx_0_tmp]) + S[L_idx_0_tmp];
        }
      }

      // 'TALOS_Newton_Euler_xelo:263' Tau(tree(i))=m'*T(1:3,3,frame(tree(i)))+Ia(tree(i))*qDD(tree(i)); 
      omei_size_idx_0 = (b[11 - i] - 1) << 4;
      Tau[11 - i] = ((T[omei_size_idx_0 + 8] * m[0] + T[omei_size_idx_0 + 9] *
                      m[1]) + T[omei_size_idx_0 + 10] * m[2]) + walk_DW.Ia[11 -
        i] * qDD[11 - i];

      //  As?estaba: + Ia(i)*qDD(i); pero as?no es
      //  Ésto sería lo mismo:
      //  Par = T(1:3,1:3,frame(tree(i)))'*m; % iR0*0M y luego se toma el 3er elemento 
      //  Tau(tree(i))= Par(3) + Ia(i)*qDD(i);  % iTau = iMz + iIa*qpp
    }

    // 'TALOS_Newton_Euler_xelo:268' F0 = f;
    //  En realidad esta es la fuerza en el marco 2 respecto a cero, i.e. 0f2
    // 'TALOS_Newton_Euler_xelo:269' M0 = m + cross_matrix(T(1:3,4,frame(1)))*f; 
    // Generate the cross product matrix for a vector
    // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
    // 'cross_matrix:4'          r(3)   0       -r(1);
    // 'cross_matrix:5'          -r(2)  r(1)    0];
    //  0M2 + 0p2 x 0F2 donde p es la distancia del marco de 0 al marco 2 (el uno es el de soporte) 
    //  Sin embargo falta agregar la fuerza debido al peso de la masa 1 (del pie), y el par que produce la masa 1 en el marco 0 i.e 
    //  Recordemos que la masa 1 no se ha utilizado para los cálculos anteriores 
    // 'TALOS_Newton_Euler_xelo:273' W_1 = mass_stack(1)*[0;0;g];
    //  Peso del pie de soporte
    // 'TALOS_Newton_Euler_xelo:274' F0 = F0 + W_1;
    //  0F0 = 0F2 + 0W_1
    // 'TALOS_Newton_Euler_xelo:275' P0com1 = T(1:3,:,1)*[CoM_stack(:,1); 1];
    F0[0] = f[0];
    F0[1] = f[1];
    L_idx_2 = walk_DW.mass_stack[0] * 9.81;
    F0[2] = f[2] + L_idx_2;
    for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
      vDi_idx_0 = T[L_idx_0_tmp + 12] + (T[L_idx_0_tmp + 8] * walk_DW.CoM_stack
        [2] + (T[L_idx_0_tmp + 4] * walk_DW.CoM_stack[1] + T[L_idx_0_tmp] *
               walk_DW.CoM_stack[0]));
      S[L_idx_0_tmp] = vDi_idx_0;
    }

    //  Posición del CoM1 medido respecto el marco 0 i.e. 0Pcom1 = 0T1*1Pcom1 (Aqu?no solo se rota  
    //  sino que se desea conocer la posicion desde el marco 0)
    // 'TALOS_Newton_Euler_xelo:277' M0 = M0 + cross_matrix(P0com1)*W_1;
    // Generate the cross product matrix for a vector
    // 'cross_matrix:3' r_cross=[ 0     -r(3)   r(2);
    // 'cross_matrix:4'          r(3)   0       -r(1);
    // 'cross_matrix:5'          -r(2)  r(1)    0];
    tmp[0] = 0.0;
    tmp[3] = -T[30];
    tmp[6] = T[29];
    tmp[1] = T[30];
    tmp[4] = 0.0;
    tmp[7] = -T[28];
    tmp[2] = -T[29];
    tmp[5] = T[28];
    tmp[8] = 0.0;
    T_0[0] = 0.0;
    T_0[3] = -S[2];
    T_0[6] = S[1];
    T_0[1] = S[2];
    T_0[4] = 0.0;
    T_0[7] = -S[0];
    T_0[2] = -S[1];
    T_0[5] = S[0];
    T_0[8] = 0.0;
    for (L_idx_0_tmp = 0; L_idx_0_tmp < 3; L_idx_0_tmp++) {
      M0[L_idx_0_tmp] = (((tmp[L_idx_0_tmp + 3] * f[1] + tmp[L_idx_0_tmp] * f[0])
                          + tmp[L_idx_0_tmp + 6] * f[2]) + m[L_idx_0_tmp]) +
        T_0[L_idx_0_tmp + 6] * L_idx_2;
    }

    //  0M0 = 0M2 + 0Pcom1*0W_1
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_polyder_g3o(const real_T u[5], real_T a_data[],
    int32_T a_size[2])
  {
    int32_T nlead0;
    int32_T b_k;
    nlead0 = 0;
    b_k = 0;
    while ((b_k < 3) && (u[b_k] == 0.0)) {
      nlead0++;
      b_k++;
    }

    a_size[0] = 1;
    a_size[1] = 4 - nlead0;
    for (b_k = 0; b_k <= 3 - nlead0; b_k++) {
      a_data[b_k] = u[b_k + nlead0];
    }

    nlead0 = a_size[1] - 2;
    for (b_k = 0; b_k <= nlead0; b_k++) {
      a_data[b_k] *= static_cast<real_T>(((nlead0 - b_k) + 1)) + 1.0;
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_polyder(const real_T u[4], real_T a_data[], int32_T
    a_size[2])
  {
    int32_T nlead0;
    int32_T b_k;
    nlead0 = 0;
    b_k = 0;
    while ((b_k < 2) && (u[b_k] == 0.0)) {
      nlead0++;
      b_k++;
    }

    a_size[0] = 1;
    a_size[1] = 3 - nlead0;
    for (b_k = 0; b_k <= 2 - nlead0; b_k++) {
      a_data[b_k] = u[b_k + nlead0];
    }

    nlead0 = a_size[1] - 2;
    for (b_k = 0; b_k <= nlead0; b_k++) {
      a_data[b_k] *= static_cast<real_T>(((nlead0 - b_k) + 1)) + 1.0;
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function ZMP_update(phi,qf,qfp)
  //
  void walkModelClass::walk_ZMP_update(real_T phi, const real_T qf[2], const
    real_T qfp[2])
  {
    real_T z;
    real_T x;
    int32_T k;
    real_T ZMPxCoeff_tmp_data[7];
    real_T tmp_data[3];
    real_T tmp_data_0[6];
    real_T tmp_data_1[4];
    int32_T ZMPxCoeff_tmp_size[2];
    int32_T tmp_size[2];

    // 'ZMP_update:3' z = polyval(hd1,phi);
    z = walk_DW.hd1[0];
    for (k = 0; k < 7; k++) {
      z = phi * z + walk_DW.hd1[k + 1];
    }

    // 'ZMP_update:4' g=9.81;
    // 'ZMP_update:8' x=polyval(((x_coeff)),phi);
    x = (((phi * walk_DW.x_coeff[0] + walk_DW.x_coeff[1]) * phi +
          walk_DW.x_coeff[2]) * phi + walk_DW.x_coeff[3]) * phi +
      walk_DW.x_coeff[4];

    // 'ZMP_update:9' y=polyval(((y_coeff)),phi);
    // 'ZMP_update:11' xp=polyval(polyder((x_coeff)),phi)*1/T_des;
    // 'ZMP_update:12' yp=polyval(polyder((y_coeff)),phi)*1/T_des;
    //  xp=polyval(polyder((x_coeff)),phi);
    //  yp=polyval(polyder((y_coeff)),phi);
    //
    //  x_end=polyval(((x_coeff)),1);
    //  y_end=polyval(((y_coeff)),1);
    // global Kp Kd
    // 'ZMP_update:20' Kp=50;
    // 'ZMP_update:21' Kd=50;
    //  Kp=1e5;
    //  Kd=Kp/100;
    // 'ZMP_update:25' xpp=polyval(polyder(polyder(x_coeff)),phi)*1/T_des+Kp*(x-qf(1))+Kd*(xp-qfp(1)); 
    // 'ZMP_update:26' ypp=polyval(polyder(polyder(y_coeff)),phi)*1/T_des+Kp*(y-qf(2))+Kd*(yp-qfp(2)); 
    // 'ZMP_update:28' fprintf("error x = %f \n",x-qf(1))
    printf("error x = %f \n", x - qf[0]);
    fflush(stdout);

    // 'ZMP_update:31' ZMPxCoeff=zeros(3,1);
    // 'ZMP_update:32' ZMPyCoeff=zeros(3,1);
    walk_DW.ZMPxCoeff[0] = 0.0;
    walk_DW.ZMPyCoeff[0] = 0.0;
    walk_DW.ZMPxCoeff[1] = 0.0;
    walk_DW.ZMPyCoeff[1] = 0.0;
    walk_DW.ZMPxCoeff[2] = 0.0;
    walk_DW.ZMPyCoeff[2] = 0.0;

    // 'ZMP_update:34' ZMPxCoeff(end)=qf(1)-z*xpp/g;
    walk_polyder_g3o(walk_DW.x_coeff, tmp_data_1, tmp_size);
    ZMPxCoeff_tmp_size[0] = 1;
    ZMPxCoeff_tmp_size[1] = tmp_size[1];
    k = tmp_size[0] * tmp_size[1];
    if (0 <= k - 1) {
      memcpy(&ZMPxCoeff_tmp_data[0], &tmp_data_1[0], k * sizeof(real_T));
    }

    walk_polyder_g3(ZMPxCoeff_tmp_data, ZMPxCoeff_tmp_size, tmp_data_0, tmp_size);
    walk_DW.ZMPxCoeff[2] = qf[0] - (((x - qf[0]) * 50.0 + walk_polyval_a
      (tmp_data_0, tmp_size, phi) / walk_DW.T_des) + (walk_polyval_a
      (ZMPxCoeff_tmp_data, ZMPxCoeff_tmp_size, phi) / walk_DW.T_des - qfp[0]) *
      50.0) * z / 9.81;

    // 'ZMP_update:35' ZMPyCoeff(end)=qf(2)-z*ypp/g;
    walk_polyder(walk_DW.y_coeff, tmp_data, tmp_size);
    ZMPxCoeff_tmp_size[0] = 1;
    ZMPxCoeff_tmp_size[1] = tmp_size[1];
    k = tmp_size[0] * tmp_size[1];
    if (0 <= k - 1) {
      memcpy(&ZMPxCoeff_tmp_data[0], &tmp_data[0], k * sizeof(real_T));
    }

    walk_polyder_g3(ZMPxCoeff_tmp_data, ZMPxCoeff_tmp_size, tmp_data_0, tmp_size);
    walk_DW.ZMPyCoeff[2] = qf[1] - ((((((phi * walk_DW.y_coeff[0] +
      walk_DW.y_coeff[1]) * phi + walk_DW.y_coeff[2]) * phi + walk_DW.y_coeff[3])
      - qf[1]) * 50.0 + walk_polyval_a(tmp_data_0, tmp_size, phi) /
      walk_DW.T_des) + (walk_polyval_a(ZMPxCoeff_tmp_data, ZMPxCoeff_tmp_size,
      phi) / walk_DW.T_des - qfp[1]) * 50.0) * z / 9.81;

    // 'ZMP_update:37' if ZMPxCoeff(end)>0.05
    if (walk_DW.ZMPxCoeff[2] > 0.05) {
      // 'ZMP_update:38' ZMPxCoeff(end)=0.05;
      walk_DW.ZMPxCoeff[2] = 0.05;
    }

    // 'ZMP_update:40' if ZMPyCoeff(end)>0.05
    if (walk_DW.ZMPyCoeff[2] > 0.05) {
      // 'ZMP_update:41' ZMPyCoeff(end)=0.05;
      walk_DW.ZMPyCoeff[2] = 0.05;
    }

    // 'ZMP_update:43' if ZMPxCoeff(end)<-0.05
    if (walk_DW.ZMPxCoeff[2] < -0.05) {
      // 'ZMP_update:44' ZMPxCoeff(end)=-0.05;
      walk_DW.ZMPxCoeff[2] = -0.05;
    }

    // 'ZMP_update:46' if ZMPyCoeff(end)<-0.05
    if (walk_DW.ZMPyCoeff[2] < -0.05) {
      // 'ZMP_update:47' ZMPyCoeff(end)=-0.05;
      walk_DW.ZMPyCoeff[2] = -0.05;
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function qfpp = qfpp_desired_xelo(F1,M1,Tau1,F2,M2,Tau2,F3,M3,Tau3,phi)
  //
  void walkModelClass::walk_qfpp_desired_xelo(const real_T F1[3], const real_T
    M1[3], const real_T Tau1[30], const real_T F2[3], const real_T M2[3], const
    real_T Tau2[30], const real_T F3[3], const real_T M3[3], const real_T Tau3
    [30], real_T phi, real_T qfpp[2])
  {
    real_T ZMPdX;
    real_T ZMPdY;
    real_T NE3[36];
    real_T DeBar[72];
    real_T HrBar[2];
    real_T A[4];
    int32_T r1;
    int32_T r2;
    real_T F1_0[36];
    real_T F2_0[36];

    // 'qfpp_desired_xelo:5' ZMPdX = polyval(ZMPxCoeff,phi);
    // 'qfpp_desired_xelo:7' ZMPdY = polyval(ZMPyCoeff,phi);
    ZMPdX = (phi * walk_DW.ZMPxCoeff[0] + walk_DW.ZMPxCoeff[1]) * phi +
      walk_DW.ZMPxCoeff[2];
    ZMPdY = (phi * walk_DW.ZMPyCoeff[0] + walk_DW.ZMPyCoeff[1]) * phi +
      walk_DW.ZMPyCoeff[2];

    // 'qfpp_desired_xelo:9' NE1 = [F1;M1;Tau1];
    // 'qfpp_desired_xelo:10' NE2 = [F2;M2;Tau2];
    // 'qfpp_desired_xelo:11' NE3 = [F3;M3;Tau3];
    NE3[0] = F3[0];
    NE3[3] = M3[0];
    NE3[1] = F3[1];
    NE3[4] = M3[1];
    NE3[2] = F3[2];
    NE3[5] = M3[2];

    // 'qfpp_desired_xelo:13' DeBar = [NE1-NE3, NE2-NE3];
    F1_0[0] = F1[0];
    F1_0[3] = M1[0];
    F1_0[1] = F1[1];
    F1_0[4] = M1[1];
    F1_0[2] = F1[2];
    F1_0[5] = M1[2];
    F2_0[0] = F2[0];
    F2_0[3] = M2[0];
    F2_0[1] = F2[1];
    F2_0[4] = M2[1];
    F2_0[2] = F2[2];
    F2_0[5] = M2[2];
    memcpy(&NE3[6], &Tau3[0], 30U * sizeof(real_T));
    memcpy(&F1_0[6], &Tau1[0], 30U * sizeof(real_T));
    memcpy(&F2_0[6], &Tau2[0], 30U * sizeof(real_T));
    for (r1 = 0; r1 < 36; r1++) {
      DeBar[r1] = F1_0[r1] - NE3[r1];
      DeBar[r1 + 36] = F2_0[r1] - NE3[r1];
    }

    // 'qfpp_desired_xelo:14' HeBar = NE3;
    //  Matriz 2x2
    // 'qfpp_desired_xelo:16' DrBar = [DeBar(5,:) + ZMPdX*DeBar(3,:);
    // 'qfpp_desired_xelo:17'          DeBar(4,:) - ZMPdY*DeBar(3,:)];
    //  Vector 2x1
    // 'qfpp_desired_xelo:19' HrBar = [HeBar(5) + ZMPdX*HeBar(3);
    // 'qfpp_desired_xelo:20'          HeBar(4) - ZMPdY*HeBar(3)];
    HrBar[0] = ZMPdX * NE3[2] + NE3[4];
    HrBar[1] = NE3[3] - ZMPdY * NE3[2];

    //  Aceleración xpp y ypp "deseada"
    // 'qfpp_desired_xelo:22' qfpp = -DrBar\HrBar;
    A[0] = -(ZMPdX * DeBar[2] + DeBar[4]);
    A[1] = -(DeBar[3] - ZMPdY * DeBar[2]);
    A[2] = -(ZMPdX * DeBar[38] + DeBar[40]);
    A[3] = -(DeBar[39] - ZMPdY * DeBar[38]);
    if (std::abs(A[1]) > std::abs(A[0])) {
      r1 = 1;
      r2 = 0;
    } else {
      r1 = 0;
      r2 = 1;
    }

    ZMPdX = A[r2] / A[r1];
    ZMPdY = A[2 + r1];
    qfpp[1] = (HrBar[r2] - HrBar[r1] * ZMPdX) / (A[2 + r2] - ZMPdY * ZMPdX);
    qfpp[0] = (HrBar[r1] - ZMPdY * qfpp[1]) / A[r1];
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [hd,hdp,hdpp] = desired_h_and_diff_xelo_init(dhd_dPhi,dhd_dPhi_p,t,qfp,qfpp)
  //
  void walkModelClass::wa_desired_h_and_diff_xelo_init(const real_T dhd_dPhi[84],
    const real_T dhd_dPhi_p[84], real_T t, const real_T qfp[2], const real_T
    qfpp[2], real_T hd[28], real_T hdp[28], real_T hdpp[28])
  {
    b_cell_wrap_0_walk_T hd_phi[28];
    real_T phi;
    int32_T i;
    real_T y;
    int32_T k;
    real_T dhd_dPhi_0[28];
    real_T dhd_dPhi_p_0[28];
    real_T Phip_idx_2;
    real_T Phip_idx_0;
    real_T Phip_idx_1;

    // 'desired_h_and_diff_xelo_init:5' hd_phi=cell(1,28);
    // 'desired_h_and_diff_xelo_init:6' hd_phi{1}=hd1;
    hd_phi[0].f1.size = 8;
    memcpy(&hd_phi[0].f1.data[0], &walk_DW.hd1[0], sizeof(real_T) << 3U);

    // 'desired_h_and_diff_xelo_init:6' hd_phi{2}=hd2;
    hd_phi[1].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[1].f1.data[i] = walk_DW.hd2[i];
    }

    // 'desired_h_and_diff_xelo_init:6' hd_phi{3}=hd3;
    hd_phi[2].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[2].f1.data[i] = walk_DW.hd3[i];
    }

    // 'desired_h_and_diff_xelo_init:6' hd_phi{4}=hd4;
    hd_phi[3].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[3].f1.data[i] = walk_DW.hd4[i];
    }

    // 'desired_h_and_diff_xelo_init:6' hd_phi{5}=hd5;
    hd_phi[4].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:6' hd_phi{6}=hd6;
    hd_phi[5].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:6' hd_phi{7}=hd7;
    hd_phi[6].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:6' hd_phi{8}=hd8;
    hd_phi[7].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:6' hd_phi{9}=hd9;
    hd_phi[8].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:6' hd_phi{10}=hd10;
    hd_phi[9].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:6' hd_phi{11}=hd11;
    hd_phi[10].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[4].f1.data[i] = walk_DW.hd5[i];
      hd_phi[5].f1.data[i] = walk_DW.hd6[i];
      hd_phi[6].f1.data[i] = walk_DW.hd7[i];
      hd_phi[7].f1.data[i] = walk_DW.hd8[i];
      hd_phi[8].f1.data[i] = walk_DW.hd9[i];
      hd_phi[9].f1.data[i] = walk_DW.hd10[i];
      hd_phi[10].f1.data[i] = walk_DW.hd11[i];
    }

    // 'desired_h_and_diff_xelo_init:6' hd_phi{12}=hd12;
    hd_phi[11].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[11].f1.data[i] = walk_DW.hd12[i];
    }

    // 'desired_h_and_diff_xelo_init:7' hd_phi{13}=hd13;
    hd_phi[12].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{14}=hd14;
    hd_phi[13].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{15}=hd15;
    hd_phi[14].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{16}=hd16;
    hd_phi[15].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{17}=hd17;
    hd_phi[16].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[12].f1.data[i] = walk_DW.hd13[i];
      hd_phi[13].f1.data[i] = walk_DW.hd14[i];
      hd_phi[14].f1.data[i] = walk_DW.hd15[i];
      hd_phi[15].f1.data[i] = walk_DW.hd16[i];
      hd_phi[16].f1.data[i] = walk_DW.hd17[i];
    }

    // 'desired_h_and_diff_xelo_init:7' hd_phi{18}=hd18;
    hd_phi[17].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[17].f1.data[i] = walk_DW.hd18[i];
    }

    // 'desired_h_and_diff_xelo_init:7' hd_phi{19}=hd19;
    hd_phi[18].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{20}=hd20;
    hd_phi[19].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{21}=hd21;
    hd_phi[20].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{22}=hd22;
    hd_phi[21].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:7' hd_phi{23}=hd23;
    hd_phi[22].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:8' hd_phi{24}=hd24;
    hd_phi[23].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[18].f1.data[i] = walk_DW.hd19[i];
      hd_phi[19].f1.data[i] = walk_DW.hd20[i];
      hd_phi[20].f1.data[i] = walk_DW.hd21[i];
      hd_phi[21].f1.data[i] = walk_DW.hd22[i];
      hd_phi[22].f1.data[i] = walk_DW.hd23[i];
      hd_phi[23].f1.data[i] = walk_DW.hd24[i];
    }

    // 'desired_h_and_diff_xelo_init:8' hd_phi{25}=hd25;
    hd_phi[24].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[24].f1.data[i] = walk_DW.hd25[i];
    }

    // 'desired_h_and_diff_xelo_init:8' hd_phi{26}=hd26;
    hd_phi[25].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:8' hd_phi{27}=hd27;
    hd_phi[26].f1.size = 6;

    // 'desired_h_and_diff_xelo_init:8' hd_phi{28}=hd28;
    hd_phi[27].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[25].f1.data[i] = walk_DW.hd26[i];
      hd_phi[26].f1.data[i] = walk_DW.hd27[i];
      hd_phi[27].f1.data[i] = walk_DW.hd28[i];
    }

    // 'desired_h_and_diff_xelo_init:12' phi=t/T_des;
    phi = t / walk_DW.T_des;

    // 'desired_h_and_diff_xelo_init:14' hd=zeros(28,1);
    // 'desired_h_and_diff_xelo_init:15' hdp=zeros(28,1);
    // 'desired_h_and_diff_xelo_init:16' hdpp=zeros(28,1);
    // 'desired_h_and_diff_xelo_init:17' for i=1:28
    // 'desired_h_and_diff_xelo_init:23' Phip=[qfp;1/T_des];
    Phip_idx_0 = qfp[0];
    Phip_idx_1 = qfp[1];
    Phip_idx_2 = 1.0 / walk_DW.T_des;

    // 'desired_h_and_diff_xelo_init:24' Phipp=[qfpp;0];
    // 'desired_h_and_diff_xelo_init:26' hdp=dhd_dPhi*Phip;
    // 'desired_h_and_diff_xelo_init:27' hdpp=dhd_dPhi*Phipp+dhd_dPhi_p*Phip;
    for (i = 0; i < 28; i++) {
      // 'desired_h_and_diff_xelo_init:18' hd(i) = polyval(hd_phi{i},phi);
      y = hd_phi[i].f1.data[0];
      for (k = 0; k <= hd_phi[i].f1.size - 2; k++) {
        y = phi * y + hd_phi[i].f1.data[k + 1];
      }

      hd[i] = y;

      // hdp(i) = polyval(polyder(hd_phi{i}),phi);
      // hdpp(i) = polyval(polyder(polyder(hd_phi{i})),phi);
      hdp[i] = 0.0;
      hdp[i] += dhd_dPhi[i] * Phip_idx_0;
      y = dhd_dPhi[i + 28];
      hdp[i] += y * Phip_idx_1;
      hdp[i] += dhd_dPhi[i + 56] * Phip_idx_2;
      dhd_dPhi_0[i] = 0.0;
      dhd_dPhi_p_0[i] = 0.0;
      dhd_dPhi_0[i] += dhd_dPhi[i] * qfpp[0];
      dhd_dPhi_p_0[i] += dhd_dPhi_p[i] * Phip_idx_0;
      dhd_dPhi_0[i] += y * qfpp[1];
      dhd_dPhi_p_0[i] += dhd_dPhi_p[i + 28] * Phip_idx_1;
      dhd_dPhi_p_0[i] += dhd_dPhi_p[i + 56] * Phip_idx_2;
      hdpp[i] = dhd_dPhi_0[i] + dhd_dPhi_p_0[i];
    }

    //  hdp=dhd_dPhi(:,3);
    //  hdpp=dhd_dPhi_p(:,3);
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_xnrm2(int32_T n, const real_T x[900], int32_T ix0)
  {
    real_T y;
    real_T scale;
    int32_T kend;
    real_T absxk;
    real_T t;
    int32_T k;
    y = 0.0;
    scale = 3.3121686421112381E-170;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      absxk = std::abs(x[k - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    return scale * std::sqrt(y);
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_xnrm2_i(int32_T n, const real_T x[30], int32_T ix0)
  {
    real_T y;
    real_T scale;
    int32_T kend;
    real_T absxk;
    real_T t;
    int32_T k;
    y = 0.0;
    scale = 3.3121686421112381E-170;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      absxk = std::abs(x[k - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    return scale * std::sqrt(y);
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xaxpy_ie(int32_T n, real_T a, const real_T x[30],
    int32_T ix0, real_T y[900], int32_T iy0)
  {
    int32_T ix;
    int32_T iy;
    int32_T k;
    if (a != 0.0) {
      ix = ix0 - 1;
      iy = iy0 - 1;
      for (k = 0; k < n; k++) {
        y[iy] += a * x[ix];
        ix++;
        iy++;
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xaxpy_i(int32_T n, real_T a, const real_T x[900],
    int32_T ix0, real_T y[30], int32_T iy0)
  {
    int32_T ix;
    int32_T iy;
    int32_T k;
    if (a != 0.0) {
      ix = ix0 - 1;
      iy = iy0 - 1;
      for (k = 0; k < n; k++) {
        y[iy] += a * x[ix];
        ix++;
        iy++;
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_xdotc(int32_T n, const real_T x[900], int32_T ix0,
    const real_T y[900], int32_T iy0)
  {
    real_T d;
    int32_T ix;
    int32_T iy;
    int32_T k;
    d = 0.0;
    ix = ix0;
    iy = iy0;
    for (k = 0; k < n; k++) {
      d += x[ix - 1] * y[iy - 1];
      ix++;
      iy++;
    }

    return d;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[900],
    int32_T iy0)
  {
    int32_T ix;
    int32_T iy;
    int32_T k;
    if (a != 0.0) {
      ix = ix0 - 1;
      iy = iy0 - 1;
      for (k = 0; k < n; k++) {
        y[iy] += a * y[ix];
        ix++;
        iy++;
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xscal(real_T a, real_T x[900], int32_T ix0)
  {
    int32_T k;
    for (k = ix0; k <= ix0 + 29; k++) {
      x[k - 1] *= a;
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xswap_g(real_T x[900], int32_T ix0, int32_T iy0)
  {
    int32_T ix;
    int32_T iy;
    real_T temp;
    int32_T k;
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < 30; k++) {
      temp = x[ix];
      x[ix] = x[iy];
      x[iy] = temp;
      ix++;
      iy++;
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
  {
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale;
    real_T ads;
    real_T bds;
    roe = *b;
    absa = std::abs(*a);
    absb = std::abs(*b);
    if (absa > absb) {
      roe = *a;
    }

    scale = absa + absb;
    if (scale == 0.0) {
      *s = 0.0;
      *c = 1.0;
      *b = 0.0;
    } else {
      ads = absa / scale;
      bds = absb / scale;
      scale *= std::sqrt(ads * ads + bds * bds);
      if (roe < 0.0) {
        scale = -scale;
      }

      *c = *a / scale;
      *s = *b / scale;
      if (absa > absb) {
        *b = *s;
      } else if (*c != 0.0) {
        *b = 1.0 / *c;
      } else {
        *b = 1.0;
      }
    }

    *a = scale;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xrot(real_T x[900], int32_T ix0, int32_T iy0, real_T
    c, real_T s)
  {
    int32_T ix;
    int32_T iy;
    real_T temp;
    int32_T k;
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < 30; k++) {
      temp = c * x[ix] + s * x[iy];
      x[iy] = c * x[iy] - s * x[ix];
      x[ix] = temp;
      iy++;
      ix++;
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_svd(const real_T A[900], real_T U[900], real_T s[30],
    real_T V[900])
  {
    real_T b_s[30];
    real_T e[30];
    real_T work[30];
    int32_T qq;
    boolean_T apply_transform;
    real_T nrm;
    int32_T qjj;
    int32_T qp1jj;
    int32_T m;
    int32_T qp1q;
    real_T rt;
    real_T ztest;
    real_T smm1;
    real_T emm1;
    real_T sqds;
    real_T shift;
    int32_T k_ii;
    int32_T exitg1;
    boolean_T exitg2;
    memcpy(&walk_B.b_A[0], &A[0], 900U * sizeof(real_T));
    memset(&b_s[0], 0, 30U * sizeof(real_T));
    memset(&e[0], 0, 30U * sizeof(real_T));
    memset(&work[0], 0, 30U * sizeof(real_T));
    memset(&U[0], 0, 900U * sizeof(real_T));
    memset(&walk_B.Vf[0], 0, 900U * sizeof(real_T));
    for (m = 0; m < 29; m++) {
      qq = 30 * m + m;
      apply_transform = false;
      nrm = walk_xnrm2(30 - m, walk_B.b_A, qq + 1);
      if (nrm > 0.0) {
        apply_transform = true;
        if (walk_B.b_A[qq] < 0.0) {
          b_s[m] = -nrm;
        } else {
          b_s[m] = nrm;
        }

        if (std::abs(b_s[m]) >= 1.0020841800044864E-292) {
          nrm = 1.0 / b_s[m];
          qp1q = (qq - m) + 30;
          for (qjj = qq; qjj < qp1q; qjj++) {
            walk_B.b_A[qjj] *= nrm;
          }
        } else {
          qp1q = (qq - m) + 30;
          for (qjj = qq; qjj < qp1q; qjj++) {
            walk_B.b_A[qjj] /= b_s[m];
          }
        }

        walk_B.b_A[qq]++;
        b_s[m] = -b_s[m];
      } else {
        b_s[m] = 0.0;
      }

      for (qp1q = m + 1; qp1q + 1 < 31; qp1q++) {
        qjj = 30 * qp1q + m;
        if (apply_transform) {
          walk_xaxpy(30 - m, -(walk_xdotc(30 - m, walk_B.b_A, qq + 1, walk_B.b_A,
            qjj + 1) / walk_B.b_A[m + 30 * m]), qq + 1, walk_B.b_A, qjj + 1);
        }

        e[qp1q] = walk_B.b_A[qjj];
      }

      for (qq = m; qq + 1 < 31; qq++) {
        U[qq + 30 * m] = walk_B.b_A[30 * m + qq];
      }

      if (m + 1 <= 28) {
        nrm = walk_xnrm2_i(29 - m, e, m + 2);
        if (nrm == 0.0) {
          e[m] = 0.0;
        } else {
          if (e[m + 1] < 0.0) {
            e[m] = -nrm;
          } else {
            e[m] = nrm;
          }

          nrm = e[m];
          if (std::abs(e[m]) >= 1.0020841800044864E-292) {
            nrm = 1.0 / e[m];
            for (qq = m + 1; qq < 30; qq++) {
              e[qq] *= nrm;
            }
          } else {
            for (qq = m + 1; qq < 30; qq++) {
              e[qq] /= nrm;
            }
          }

          e[m + 1]++;
          e[m] = -e[m];
          for (qq = m + 1; qq + 1 < 31; qq++) {
            work[qq] = 0.0;
          }

          for (qq = m + 1; qq + 1 < 31; qq++) {
            walk_xaxpy_i(29 - m, e[qq], walk_B.b_A, (m + 30 * qq) + 2, work, m +
                         2);
          }

          for (qq = m + 1; qq + 1 < 31; qq++) {
            walk_xaxpy_ie(29 - m, -e[qq] / e[m + 1], work, m + 2, walk_B.b_A, (m
              + 30 * qq) + 2);
          }
        }

        for (qq = m + 1; qq + 1 < 31; qq++) {
          walk_B.Vf[qq + 30 * m] = e[qq];
        }
      }
    }

    m = 28;
    b_s[29] = walk_B.b_A[899];
    e[28] = walk_B.b_A[898];
    e[29] = 0.0;
    memset(&U[870], 0, 30U * sizeof(real_T));
    U[899] = 1.0;
    for (qp1q = 28; qp1q >= 0; qp1q--) {
      qq = 30 * qp1q + qp1q;
      if (b_s[qp1q] != 0.0) {
        for (qp1jj = qp1q + 1; qp1jj + 1 < 31; qp1jj++) {
          qjj = (30 * qp1jj + qp1q) + 1;
          walk_xaxpy(30 - qp1q, -(walk_xdotc(30 - qp1q, U, qq + 1, U, qjj) /
                      U[qq]), qq + 1, U, qjj);
        }

        for (qjj = qp1q; qjj + 1 < 31; qjj++) {
          qp1jj = 30 * qp1q + qjj;
          U[qp1jj] = -U[qp1jj];
        }

        U[qq]++;
        for (qq = 0; qq < qp1q; qq++) {
          U[qq + 30 * qp1q] = 0.0;
        }
      } else {
        memset(&U[qp1q * 30], 0, 30U * sizeof(real_T));
        U[qq] = 1.0;
      }
    }

    for (qq = 29; qq >= 0; qq--) {
      if ((qq + 1 <= 28) && (e[qq] != 0.0)) {
        qp1q = (30 * qq + qq) + 2;
        for (qjj = qq + 1; qjj + 1 < 31; qjj++) {
          qp1jj = (30 * qjj + qq) + 2;
          walk_xaxpy(29 - qq, -(walk_xdotc(29 - qq, walk_B.Vf, qp1q, walk_B.Vf,
            qp1jj) / walk_B.Vf[qp1q - 1]), qp1q, walk_B.Vf, qp1jj);
        }
      }

      memset(&walk_B.Vf[qq * 30], 0, 30U * sizeof(real_T));
      walk_B.Vf[qq + 30 * qq] = 1.0;
    }

    for (qq = 0; qq < 30; qq++) {
      sqds = e[qq];
      if (b_s[qq] != 0.0) {
        rt = std::abs(b_s[qq]);
        nrm = b_s[qq] / rt;
        b_s[qq] = rt;
        if (qq + 1 < 30) {
          sqds = e[qq] / nrm;
        }

        walk_xscal(nrm, U, 1 + 30 * qq);
      }

      if ((qq + 1 < 30) && (sqds != 0.0)) {
        rt = std::abs(sqds);
        nrm = rt / sqds;
        sqds = rt;
        b_s[qq + 1] *= nrm;
        walk_xscal(nrm, walk_B.Vf, 1 + 30 * (qq + 1));
      }

      e[qq] = sqds;
    }

    qq = 0;
    nrm = 0.0;
    for (qp1q = 0; qp1q < 30; qp1q++) {
      sqds = std::abs(b_s[qp1q]);
      rt = std::abs(e[qp1q]);
      if (sqds > rt) {
        rt = sqds;
      }

      if (nrm <= rt) {
        nrm = rt;
      }
    }

    while ((m + 2 > 0) && (qq < 75)) {
      qp1jj = m + 1;
      do {
        exitg1 = 0;
        qp1q = qp1jj;
        if (qp1jj == 0) {
          exitg1 = 1;
        } else {
          rt = std::abs(e[qp1jj - 1]);
          if (rt <= (std::abs(b_s[qp1jj - 1]) + std::abs(b_s[qp1jj])) *
              2.2204460492503131E-16) {
            e[qp1jj - 1] = 0.0;
            exitg1 = 1;
          } else if ((rt <= 1.0020841800044864E-292) || ((qq > 20) && (rt <=
                       2.2204460492503131E-16 * nrm))) {
            e[qp1jj - 1] = 0.0;
            exitg1 = 1;
          } else {
            qp1jj--;
          }
        }
      } while (exitg1 == 0);

      if (m + 1 == qp1jj) {
        qp1jj = 4;
      } else {
        qjj = m + 2;
        k_ii = m + 2;
        exitg2 = false;
        while ((!exitg2) && (k_ii >= qp1jj)) {
          qjj = k_ii;
          if (k_ii == qp1jj) {
            exitg2 = true;
          } else {
            rt = 0.0;
            if (k_ii < m + 2) {
              rt = std::abs(e[k_ii - 1]);
            }

            if (k_ii > qp1jj + 1) {
              rt += std::abs(e[k_ii - 2]);
            }

            ztest = std::abs(b_s[k_ii - 1]);
            if ((ztest <= 2.2204460492503131E-16 * rt) || (ztest <=
                 1.0020841800044864E-292)) {
              b_s[k_ii - 1] = 0.0;
              exitg2 = true;
            } else {
              k_ii--;
            }
          }
        }

        if (qjj == qp1jj) {
          qp1jj = 3;
        } else if (m + 2 == qjj) {
          qp1jj = 1;
        } else {
          qp1jj = 2;
          qp1q = qjj;
        }
      }

      switch (qp1jj) {
       case 1:
        rt = e[m];
        e[m] = 0.0;
        for (qjj = m; qjj + 1 >= qp1q + 1; qjj--) {
          walk_xrotg(&b_s[qjj], &rt, &ztest, &sqds);
          if (qjj + 1 > qp1q + 1) {
            rt = e[qjj - 1] * -sqds;
            e[qjj - 1] *= ztest;
          }

          walk_xrot(walk_B.Vf, 1 + 30 * qjj, 1 + 30 * (m + 1), ztest, sqds);
        }
        break;

       case 2:
        rt = e[qp1q - 1];
        e[qp1q - 1] = 0.0;
        for (qjj = qp1q; qjj < m + 2; qjj++) {
          walk_xrotg(&b_s[qjj], &rt, &ztest, &sqds);
          rt = -sqds * e[qjj];
          e[qjj] *= ztest;
          walk_xrot(U, 1 + 30 * qjj, 1 + 30 * (qp1q - 1), ztest, sqds);
        }
        break;

       case 3:
        sqds = std::abs(b_s[m + 1]);
        rt = std::abs(b_s[m]);
        if (sqds > rt) {
          rt = sqds;
        }

        sqds = std::abs(e[m]);
        if (rt > sqds) {
          sqds = rt;
        }

        rt = std::abs(b_s[qp1q]);
        if (sqds > rt) {
          rt = sqds;
        }

        ztest = std::abs(e[qp1q]);
        if (rt > ztest) {
          ztest = rt;
        }

        rt = b_s[m + 1] / ztest;
        smm1 = b_s[m] / ztest;
        emm1 = e[m] / ztest;
        sqds = b_s[qp1q] / ztest;
        smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
        emm1 *= rt;
        emm1 *= emm1;
        if ((smm1 != 0.0) || (emm1 != 0.0)) {
          shift = std::sqrt(smm1 * smm1 + emm1);
          if (smm1 < 0.0) {
            shift = -shift;
          }

          shift = emm1 / (smm1 + shift);
        } else {
          shift = 0.0;
        }

        rt = (sqds + rt) * (sqds - rt) + shift;
        ztest = e[qp1q] / ztest * sqds;
        for (qjj = qp1q + 1; qjj <= m + 1; qjj++) {
          walk_xrotg(&rt, &ztest, &sqds, &smm1);
          if (qjj > qp1q + 1) {
            e[qjj - 2] = rt;
          }

          ztest = e[qjj - 1];
          emm1 = b_s[qjj - 1];
          rt = emm1 * sqds + ztest * smm1;
          e[qjj - 1] = ztest * sqds - emm1 * smm1;
          ztest = smm1 * b_s[qjj];
          b_s[qjj] *= sqds;
          walk_xrot(walk_B.Vf, 1 + 30 * (qjj - 1), 1 + 30 * qjj, sqds, smm1);
          walk_xrotg(&rt, &ztest, &sqds, &smm1);
          b_s[qjj - 1] = rt;
          ztest = e[qjj - 1];
          rt = ztest * sqds + smm1 * b_s[qjj];
          b_s[qjj] = ztest * -smm1 + sqds * b_s[qjj];
          ztest = smm1 * e[qjj];
          e[qjj] *= sqds;
          walk_xrot(U, 1 + 30 * (qjj - 1), 1 + 30 * qjj, sqds, smm1);
        }

        e[m] = rt;
        qq++;
        break;

       default:
        if (b_s[qp1q] < 0.0) {
          b_s[qp1q] = -b_s[qp1q];
          walk_xscal(-1.0, walk_B.Vf, 1 + 30 * qp1q);
        }

        qq = qp1q + 1;
        while ((qp1q + 1 < 30) && (b_s[qp1q] < b_s[qq])) {
          rt = b_s[qp1q];
          b_s[qp1q] = b_s[qq];
          b_s[qq] = rt;
          walk_xswap_g(walk_B.Vf, 1 + 30 * qp1q, 1 + 30 * (qp1q + 1));
          walk_xswap_g(U, 1 + 30 * qp1q, 1 + 30 * (qp1q + 1));
          qp1q = qq;
          qq++;
        }

        qq = 0;
        m--;
        break;
      }
    }

    for (m = 0; m < 30; m++) {
      s[m] = b_s[m];
      memcpy(&V[m * 30], &walk_B.Vf[m * 30], 30U * sizeof(real_T));
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_eps(real_T x)
  {
    real_T r;
    real_T absxk;
    int32_T exponent;
    absxk = std::abs(x);
    if (absxk <= 2.2250738585072014E-308) {
      r = 4.94065645841247E-324;
    } else {
      frexp(absxk, &exponent);
      r = std::ldexp(1.0, exponent - 53);
    }

    return r;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xgemm(int32_T k, const real_T A[900], const real_T
    B[900], real_T C[900])
  {
    int32_T br;
    int32_T ar;
    int32_T ia;
    int32_T ic;
    int32_T b;
    int32_T ib;
    int32_T b_ic;
    for (br = 0; br <= 871; br += 30) {
      for (ic = br; ic < br + 30; ic++) {
        C[ic] = 0.0;
      }
    }

    br = 0;
    for (ic = 0; ic <= 871; ic += 30) {
      ar = -1;
      br++;
      b = (k - 1) * 30 + br;
      for (ib = br; ib <= b; ib += 30) {
        ia = ar;
        for (b_ic = ic; b_ic < ic + 30; b_ic++) {
          ia++;
          C[b_ic] += B[ib - 1] * A[ia];
        }

        ar += 30;
      }
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function qpp = desired_joint_accel_xelo(JQ,JQpqp,v,qfpp)
  //
  void walkModelClass::walk_desired_joint_accel_xelo(const real_T JQ[900], const
    real_T JQpqp[30], const real_T v[28], const real_T qfpp[2], real_T qpp[30])
  {
    int32_T r;
    int32_T vcol;
    real_T s[30];
    real_T tol;
    int32_T j;
    real_T v_0[30];

    // 'desired_joint_accel_xelo:3' Qpp=[v;qfpp];
    // Qpp = JQ*qpp + JQp*qp, JQpqp=JQp*qp
    //  JQ1=JQ(1:28,1:30);
    //  JQ2=JQ(29:30,1:30);
    //  JQpqp1=JQpqp(1:28);
    //  JQpqp2=JQpqp(29:30);
    //
    //  qpp1=pinv(JQ1)*(v-JQpqp1);
    //
    //  P=eye(30)-pinv(JQ1)*JQ1;
    //  qpp2=qpp1+pinv(JQ2*P)*(qfpp-JQpqp2-JQ2*qpp1);
    //  qpp=qpp2;
    // 'desired_joint_accel_xelo:16' qpp=pinv(JQ)*(Qpp-JQpqp);
    memset(&walk_B.X[0], 0, 900U * sizeof(real_T));
    walk_svd(JQ, walk_B.U, s, walk_B.V);
    tol = 30.0 * walk_eps(s[0]);
    r = 0;
    vcol = 0;
    while ((vcol < 30) && (s[vcol] > tol)) {
      r++;
      vcol++;
    }

    if (r > 0) {
      vcol = 1;
      for (j = 0; j < r; j++) {
        walk_xscal(1.0 / s[j], walk_B.V, vcol);
        vcol += 30;
      }

      walk_xgemm(r, walk_B.V, walk_B.U, walk_B.X);
    }

    memcpy(&s[0], &v[0], 28U * sizeof(real_T));
    s[28] = qfpp[0];
    s[29] = qfpp[1];
    for (r = 0; r < 30; r++) {
      v_0[r] = s[r] - JQpqp[r];
    }

    for (r = 0; r < 30; r++) {
      qpp[r] = 0.0;
      for (vcol = 0; vcol < 30; vcol++) {
        qpp[r] += walk_B.X[30 * vcol + r] * v_0[vcol];
      }
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function Tau = Time_ZMP_control(q,qp,t)
  //  DGM and CoM
  //
  void walkModelClass::walk_Time_ZMP_control(const real_T q[30], const real_T
    qp[30], real_T t, real_T Tau[30])
  {
    real_T h[28];
    real_T dhd_dPhi[84];
    real_T dhd_dPhi_p[84];
    real_T qfpp[2];
    real_T qpp[30];
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T qfp[2];
    real_T Jpi_qp[294];
    real_T JQpqp[30];
    real_T M1[3];
    real_T Tau1[30];
    real_T F2[3];
    real_T M2[3];
    real_T Tau2[30];
    real_T F3[3];
    real_T M3[3];
    real_T hd[28];
    real_T hdp[28];
    real_T hdpp[28];
    real_T hdpp_0[28];
    real_T J_Ankle_0[30];
    int32_T i;
    int32_T i_0;
    real_T tmp;

    // 'Time_ZMP_control:3' T = DGM_TALOS_QY_xelo(q);
    walk_DGM_TALOS_QY_xelo(q, walk_B.T_l);

    // 'Time_ZMP_control:4' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_compute2_com_xelo(walk_B.T_l, CoM, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_k);

    // 'Time_ZMP_control:5' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    qfpp[0] = CoM[0];
    qfpp[1] = CoM[1];

    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    for (i = 0; i < 2; i++) {
      qfp[i] = 0.0;
      for (i_0 = 0; i_0 < 30; i_0++) {
        qfp[i] += J_CoM[3 * i_0 + i] * qp[i_0];
      }
    }

    // 'Time_ZMP_control:6' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T_l, J_CoM, J_Ankle, walk_B.J_h_g);

    //  Actual state
    // 'Time_ZMP_control:9' h = state_v_TALOS_xelo(q,T,CoM);
    walk_state_v_TALOS_xelo(q, walk_B.T_l, CoM, h);

    // 'Time_ZMP_control:10' hp= J_h*qp;
    //  Compute all remaining jacobian
    // 'Time_ZMP_control:13' [JpCoMqp,Jpi_qp] = get_JpCoMqp_Jpi_qp_xelo(T,qp);
    walk_get_JpCoMqp_Jpi_qp_xelo(walk_B.T_l, qp, CoM, Jpi_qp);

    // 'Time_ZMP_control:14' dhd_dPhi = get_dhd_dphi_init(qf,t);
    walk_get_dhd_dphi_init(t, dhd_dPhi);

    // 'Time_ZMP_control:15' [JQ,JPhi] = get_JQ_JPhi_xelo_init(J_h,J_CoM,dhd_dPhi); 
    walk_get_JQ_JPhi_xelo_init(walk_B.J_h_g, J_CoM, dhd_dPhi, walk_B.JQ_g,
      J_Ankle);

    // 'Time_ZMP_control:16' dhd_dPhi_p = get_dhd_dphi_p_init(qf,qfp,t);
    walk_get_dhd_dphi_p_init(qfp, t, dhd_dPhi_p);

    // 'Time_ZMP_control:17' [JQpqp,JPhipPhip] = get_JQpqp_JPhipPhip_xelo_init(T,JpCoMqp,Jpi_qp,qp,JQ,dhd_dPhi_p,qfp); 
    w_get_JQpqp_JPhipPhip_xelo_init(walk_B.T_l, CoM, Jpi_qp, qp, walk_B.JQ_g,
      dhd_dPhi_p, qfp, JQpqp, qpp);

    //  Desired CoM acc
    // 'Time_ZMP_control:20' [term1,term2,term3] = get_NE_terms_xelo(JPhi,JPhipPhip); 
    // 'get_NE_terms_xelo:3' term1 = JPhi(:,1) + JPhipPhip;
    //
    // 'get_NE_terms_xelo:4' term2 = JPhi(:,2) + JPhipPhip;
    //
    // 'get_NE_terms_xelo:5' term3 = JPhipPhip;
    //
    // 'Time_ZMP_control:21' [F1,M1,Tau1] = TALOS_Newton_Euler_xelo(T,q,qp,term1); 
    for (i = 0; i < 30; i++) {
      J_Ankle_0[i] = J_Ankle[i] + qpp[i];
    }

    walk_TALOS_Newton_Euler_xelo(walk_B.T_l, qp, J_Ankle_0, CoM, M1, Tau1);

    // 'Time_ZMP_control:22' [F2,M2,Tau2] = TALOS_Newton_Euler_xelo(T,q,qp,term2); 
    for (i = 0; i < 30; i++) {
      J_Ankle_0[i] = J_Ankle[30 + i] + qpp[i];
    }

    walk_TALOS_Newton_Euler_xelo(walk_B.T_l, qp, J_Ankle_0, F2, M2, Tau2);

    // 'Time_ZMP_control:23' [F3,M3,Tau3] = TALOS_Newton_Euler_xelo(T,q,qp,term3); 
    walk_TALOS_Newton_Euler_xelo(walk_B.T_l, qp, qpp, F3, M3, J_Ankle_0);

    // 'Time_ZMP_control:25' ZMP_update(t/T_des,qf,qfp);
    walk_ZMP_update(t / walk_DW.T_des, qfpp, qfp);

    // 'Time_ZMP_control:26' qfpp = qfpp_desired_xelo(F1,M1,Tau1,F2,M2,Tau2,F3,M3,Tau3,t/T_des); 
    walk_qfpp_desired_xelo(CoM, M1, Tau1, F2, M2, Tau2, F3, M3, J_Ankle_0, t /
      walk_DW.T_des, qfpp);

    //  Control
    // 'Time_ZMP_control:31' [hd,hdp,hdpp] = desired_h_and_diff_xelo_init(dhd_dPhi,dhd_dPhi_p,t,qfp,qfpp); 
    wa_desired_h_and_diff_xelo_init(dhd_dPhi, dhd_dPhi_p, t, qfp, qfpp, hd, hdp,
      hdpp);

    //  k=18;
    //  %
    //  qpp_inter = desired_joint_accel_xelo(JQ,JQpqp,hdpp,qfpp);
    //  [~,~,Tau_inter] = TALOS_Newton_Euler_xelo(T,q,qp,qpp_inter);
    //  fprintf("Tau init %f = %f \n",k,Tau_inter(k));
    //  %
    // 'Time_ZMP_control:40' v=hdpp+Kv.*(hdp-hp)+Kp.*(hd-h);
    // 'Time_ZMP_control:42' qpp = desired_joint_accel_xelo(JQ,JQpqp,v,qfpp);
    for (i = 0; i < 28; i++) {
      tmp = 0.0;
      for (i_0 = 0; i_0 < 30; i_0++) {
        tmp += walk_B.J_h_g[28 * i_0 + i] * qp[i_0];
      }

      hdpp_0[i] = ((hdp[i] - tmp) * walk_DW.Kv[i] + hdpp[i]) + (hd[i] - h[i]) *
        walk_DW.Kp[i];
    }

    walk_desired_joint_accel_xelo(walk_B.JQ_g, JQpqp, hdpp_0, qfpp, qpp);

    // 'Time_ZMP_control:44' [~,~,Tau] = TALOS_Newton_Euler_xelo(T,q,qp,qpp);
    walk_TALOS_Newton_Euler_xelo(walk_B.T_l, qp, qpp, CoM, M1, Tau);

    // 'Time_ZMP_control:44' ~
    // fprintf("Tau correct %f = %f \n",k,Tau(k));
    // 'Time_ZMP_control:47' k=16;
    // fprintf("error %f = %f \n",k,hd(k)-h(k))
    //  fprintf("hdpp %f = %f \n",k,hdpp(k))
    //  fprintf("correction P %f = %f \n",k,Kp(k)*(hd(k)-h(k)))
    //  fprintf("correction D %f = %f \n",k,Kv(k)*(hdp(k)-hp(k)))
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [dhd_dqf,dhd_dqf_p]=get_hd_jacob_xelo(qf,qfp,phi,dphi_dx,dphi_dy,d2phi_dx2,d2phi_dy2,d2phi_dxy)
  //
  void walkModelClass::walk_get_hd_jacob_xelo(const real_T qfp[2], real_T phi,
    real_T dphi_dx, real_T dphi_dy, real_T d2phi_dx2, real_T d2phi_dy2, real_T
    d2phi_dxy, real_T dhd_dqf[56], real_T dhd_dqf_p[56])
  {
    b_cell_wrap_0_walk_T hd[28];
    real_T dhd_dx[28];
    real_T dhd_dy[28];
    int32_T i;
    real_T tmp_data[7];
    real_T tmp_data_0[7];
    real_T tmp_data_1[6];
    real_T tmp_data_2[6];
    real_T dhd_dx_0[56];
    real_T ddhd_dy_dx[56];
    int32_T dhd_dx_tmp_size[2];
    int32_T tmp_size[2];
    int32_T tmp_size_0[2];
    int32_T tmp_size_1[2];

    //  order 0
    // phi=get_phi_and_diff(phi_coeff,qf,0,'');
    //  order 1
    // dphi_dx=get_phi_and_diff(phi_coeff,qf,1,'x');
    // dphi_dy=get_phi_and_diff(phi_coeff,qf,1,'y');
    // global gait_parameters
    // PolyCoeff = gait_parameters.PolyCoeff;
    // 'get_hd_jacob_xelo:13' hd=cell(1,28);
    // 'get_hd_jacob_xelo:14' hd{1}=hd1;
    hd[0].f1.size = 8;
    memcpy(&hd[0].f1.data[0], &walk_DW.hd1[0], sizeof(real_T) << 3U);

    // 'get_hd_jacob_xelo:14' hd{2}=hd2;
    hd[1].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd[1].f1.data[i] = walk_DW.hd2[i];
    }

    // 'get_hd_jacob_xelo:14' hd{3}=hd3;
    hd[2].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd[2].f1.data[i] = walk_DW.hd3[i];
    }

    // 'get_hd_jacob_xelo:14' hd{4}=hd4;
    hd[3].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd[3].f1.data[i] = walk_DW.hd4[i];
    }

    // 'get_hd_jacob_xelo:14' hd{5}=hd5;
    hd[4].f1.size = 6;

    // 'get_hd_jacob_xelo:14' hd{6}=hd6;
    hd[5].f1.size = 6;

    // 'get_hd_jacob_xelo:14' hd{7}=hd7;
    hd[6].f1.size = 6;

    // 'get_hd_jacob_xelo:14' hd{8}=hd8;
    hd[7].f1.size = 6;

    // 'get_hd_jacob_xelo:14' hd{9}=hd9;
    hd[8].f1.size = 6;

    // 'get_hd_jacob_xelo:14' hd{10}=hd10;
    hd[9].f1.size = 6;

    // 'get_hd_jacob_xelo:14' hd{11}=hd11;
    hd[10].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd[4].f1.data[i] = walk_DW.hd5[i];
      hd[5].f1.data[i] = walk_DW.hd6[i];
      hd[6].f1.data[i] = walk_DW.hd7[i];
      hd[7].f1.data[i] = walk_DW.hd8[i];
      hd[8].f1.data[i] = walk_DW.hd9[i];
      hd[9].f1.data[i] = walk_DW.hd10[i];
      hd[10].f1.data[i] = walk_DW.hd11[i];
    }

    // 'get_hd_jacob_xelo:14' hd{12}=hd12;
    hd[11].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd[11].f1.data[i] = walk_DW.hd12[i];
    }

    // 'get_hd_jacob_xelo:15' hd{13}=hd13;
    hd[12].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{14}=hd14;
    hd[13].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{15}=hd15;
    hd[14].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{16}=hd16;
    hd[15].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{17}=hd17;
    hd[16].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd[12].f1.data[i] = walk_DW.hd13[i];
      hd[13].f1.data[i] = walk_DW.hd14[i];
      hd[14].f1.data[i] = walk_DW.hd15[i];
      hd[15].f1.data[i] = walk_DW.hd16[i];
      hd[16].f1.data[i] = walk_DW.hd17[i];
    }

    // 'get_hd_jacob_xelo:15' hd{18}=hd18;
    hd[17].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd[17].f1.data[i] = walk_DW.hd18[i];
    }

    // 'get_hd_jacob_xelo:15' hd{19}=hd19;
    hd[18].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{20}=hd20;
    hd[19].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{21}=hd21;
    hd[20].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{22}=hd22;
    hd[21].f1.size = 6;

    // 'get_hd_jacob_xelo:15' hd{23}=hd23;
    hd[22].f1.size = 6;

    // 'get_hd_jacob_xelo:16' hd{24}=hd24;
    hd[23].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd[18].f1.data[i] = walk_DW.hd19[i];
      hd[19].f1.data[i] = walk_DW.hd20[i];
      hd[20].f1.data[i] = walk_DW.hd21[i];
      hd[21].f1.data[i] = walk_DW.hd22[i];
      hd[22].f1.data[i] = walk_DW.hd23[i];
      hd[23].f1.data[i] = walk_DW.hd24[i];
    }

    // 'get_hd_jacob_xelo:16' hd{25}=hd25;
    hd[24].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd[24].f1.data[i] = walk_DW.hd25[i];
    }

    // 'get_hd_jacob_xelo:16' hd{26}=hd26;
    hd[25].f1.size = 6;

    // 'get_hd_jacob_xelo:16' hd{27}=hd27;
    hd[26].f1.size = 6;

    // 'get_hd_jacob_xelo:16' hd{28}=hd28;
    hd[27].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd[25].f1.data[i] = walk_DW.hd26[i];
      hd[26].f1.data[i] = walk_DW.hd27[i];
      hd[27].f1.data[i] = walk_DW.hd28[i];
    }

    // 'get_hd_jacob_xelo:18' jointN = 28;
    // 'get_hd_jacob_xelo:19' dhd_dx = zeros(jointN,1);
    // 'get_hd_jacob_xelo:20' dhd_dy = zeros(jointN,1);
    // 'get_hd_jacob_xelo:21' for i=1:jointN
    // 'get_hd_jacob_xelo:26' dhd_dqf = [dhd_dx, dhd_dy];
    //  order 2
    // d2phi_dx2 = get_phi_and_diff(phi_coeff,qf,2,'xx');  % d[dphi/dx]/dx
    // d2phi_dy2 = get_phi_and_diff(phi_coeff,qf,2,'yy');  % d[dphi/dy]/dy
    // d2phi_dxy =get_phi_and_diff(phi_coeff,qf,2,'xy'); % d[dphi/dx]/dy=d[dphi/dy]/dx 
    // 'get_hd_jacob_xelo:33' ddhd_dx_dx = zeros(jointN,1);
    // 'get_hd_jacob_xelo:34' ddhd_dx_dy = zeros(jointN,1);
    // 'get_hd_jacob_xelo:36' for i=1:jointN
    for (i = 0; i < 28; i++) {
      // 'get_hd_jacob_xelo:22' dhd_dx(i) =  polyval(polyder(hd{i} ),phi)*dphi_dx; 
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data_0, tmp_size_0);

      // 'get_hd_jacob_xelo:23' dhd_dy(i) =  polyval(polyder(hd{i} ),phi)*dphi_dy; 
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data, tmp_size);
      dhd_dqf[i] = walk_polyval_a(tmp_data_0, tmp_size_0, phi) * dphi_dx;
      dhd_dqf[i + 28] = walk_polyval_a(tmp_data, tmp_size, phi) * dphi_dy;

      // 'get_hd_jacob_xelo:37' ddhd_dx_dx(i) =   polyval(polyder(polyder(hd{i})),phi)*dphi_dx^2 + ... 
      // 'get_hd_jacob_xelo:38'         polyval(polyder(hd{i}),phi)*d2phi_dx2;
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data, dhd_dx_tmp_size);
      walk_polyder_g3(tmp_data, dhd_dx_tmp_size, tmp_data_2, tmp_size_0);

      // 'get_hd_jacob_xelo:39' ddhd_dx_dy(i) =   polyval(polyder(polyder(hd{i})),phi)*dphi_dy*dphi_dx + ... 
      // 'get_hd_jacob_xelo:40'         polyval(polyder(hd{i}),phi)*d2phi_dxy;
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data_0, tmp_size);
      walk_polyder_g3(tmp_data_0, tmp_size, tmp_data_1, tmp_size_1);
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data_0, tmp_size);
      dhd_dx[i] = dphi_dx * dphi_dx * walk_polyval_a(tmp_data_2, tmp_size_0, phi)
        + walk_polyval_a(tmp_data, dhd_dx_tmp_size, phi) * d2phi_dx2;
      dhd_dy[i] = walk_polyval_a(tmp_data_1, tmp_size_1, phi) * dphi_dy *
        dphi_dx + walk_polyval_a(tmp_data_0, tmp_size, phi) * d2phi_dxy;
    }

    // 'get_hd_jacob_xelo:43' ddhd_dx_dqf = [ddhd_dx_dx, ddhd_dx_dy];
    // 'get_hd_jacob_xelo:46' ddhd_dy_dx = zeros(jointN,1);
    // 'get_hd_jacob_xelo:47' ddhd_dy_dy = zeros(jointN,1);
    // 'get_hd_jacob_xelo:48' for i=1:jointN
    // 'get_hd_jacob_xelo:55' ddhd_dy_dqf = [ddhd_dy_dx, ddhd_dy_dy];
    // 'get_hd_jacob_xelo:57' dhd_dqf_p = [ddhd_dx_dqf*qfp, ddhd_dy_dqf*qfp];
    for (i = 0; i < 28; i++) {
      // 'get_hd_jacob_xelo:49' ddhd_dy_dx(i) =   polyval(polyder(polyder(hd{i})),phi)*dphi_dx*dphi_dy+ ... 
      // 'get_hd_jacob_xelo:50'         polyval(polyder(hd{i}),phi)*d2phi_dxy;
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data, dhd_dx_tmp_size);
      walk_polyder_g3(tmp_data, dhd_dx_tmp_size, tmp_data_2, tmp_size_0);

      // 'get_hd_jacob_xelo:51' ddhd_dy_dy(i) =   polyval(polyder(polyder(hd{i})),phi)*dphi_dy^2 + ... 
      // 'get_hd_jacob_xelo:52'         polyval(polyder(hd{i}),phi)*d2phi_dy2;
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data_0, tmp_size);
      walk_polyder_g3(tmp_data_0, tmp_size, tmp_data_1, tmp_size_1);
      walk_polyder_g(hd[i].f1.data, &hd[i].f1.size, tmp_data_0, tmp_size);
      dhd_dx_0[i] = dhd_dx[i];
      dhd_dx_0[i + 28] = dhd_dy[i];
      ddhd_dy_dx[i] = walk_polyval_a(tmp_data_2, tmp_size_0, phi) * dphi_dx *
        dphi_dy + walk_polyval_a(tmp_data, dhd_dx_tmp_size, phi) * d2phi_dxy;
      ddhd_dy_dx[i + 28] = dphi_dy * dphi_dy * walk_polyval_a(tmp_data_1,
        tmp_size_1, phi) + walk_polyval_a(tmp_data_0, tmp_size, phi) * d2phi_dy2;
      dhd_dqf_p[i] = dhd_dx_0[i + 28] * qfp[1] + dhd_dx_0[i] * qfp[0];
      dhd_dqf_p[i + 28] = ddhd_dy_dx[i + 28] * qfp[1] + ddhd_dy_dx[i] * qfp[0];
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xtrsm_et4x(const real_T A[900], real_T B[60])
  {
    int32_T jBcol;
    int32_T kAcol;
    int32_T j;
    int32_T k;
    int32_T i;
    int32_T tmp;
    for (j = 0; j < 2; j++) {
      jBcol = 30 * j;
      for (k = 0; k < 30; k++) {
        kAcol = 30 * k;
        if (B[k + jBcol] != 0.0) {
          for (i = k + 2; i < 31; i++) {
            tmp = (i + jBcol) - 1;
            B[tmp] -= A[(i + kAcol) - 1] * B[k + jBcol];
          }
        }
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_xtrsm_et4xz(const real_T A[900], real_T B[60])
  {
    int32_T jBcol;
    int32_T kAcol;
    int32_T j;
    int32_T k;
    int32_T i;
    int32_T tmp;
    int32_T tmp_0;
    for (j = 0; j < 2; j++) {
      jBcol = 30 * j;
      for (k = 29; k >= 0; k--) {
        kAcol = 30 * k;
        tmp = k + jBcol;
        if (B[tmp] != 0.0) {
          B[tmp] /= A[k + kAcol];
          for (i = 0; i < k; i++) {
            tmp_0 = i + jBcol;
            B[tmp_0] -= B[tmp] * A[i + kAcol];
          }
        }
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_mldivide_po(const real_T A[900], real_T B[60])
  {
    real_T temp;
    int32_T ip;
    int32_T ipiv[30];
    int32_T info;
    memcpy(&walk_B.b_A_l[0], &A[0], 900U * sizeof(real_T));
    walk_xgetrf(walk_B.b_A_l, ipiv, &info);
    for (info = 0; info < 29; info++) {
      if (info + 1 != ipiv[info]) {
        ip = ipiv[info] - 1;
        temp = B[info];
        B[info] = B[ip];
        B[ip] = temp;
        temp = B[info + 30];
        B[info + 30] = B[ip + 30];
        B[ip + 30] = temp;
      }
    }

    walk_xtrsm_et4x(walk_B.b_A_l, B);
    walk_xtrsm_et4xz(walk_B.b_A_l, B);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [JQ,JPhi] = get_JQ_JPhi_xelo(J_h,J_CoM,dhd_dqf)
  //
  void walkModelClass::walk_get_JQ_JPhi_xelo(const real_T J_h[840], const real_T
    J_CoM[90], const real_T dhd_dqf[56], real_T JQ[900], real_T JPhi[60])
  {
    int32_T i;

    // 'get_JQ_JPhi_xelo:3' JQ=zeros(30,30);
    memset(&JQ[0], 0, 900U * sizeof(real_T));

    // 'get_JQ_JPhi_xelo:4' JQ(1:28,:)=J_h;
    // 'get_JQ_JPhi_xelo:5' JQ(29:30,:)=J_CoM(1:2,:);
    for (i = 0; i < 30; i++) {
      memcpy(&JQ[i * 30], &J_h[i * 28], 28U * sizeof(real_T));
      JQ[28 + 30 * i] = J_CoM[3 * i];
      JQ[29 + 30 * i] = J_CoM[3 * i + 1];
    }

    // 'get_JQ_JPhi_xelo:7' Jd = [dhd_dqf;
    // 'get_JQ_JPhi_xelo:8'         1, 0;
    // 'get_JQ_JPhi_xelo:9'         0, 1];
    // 'get_JQ_JPhi_xelo:11' JPhi = JQ\Jd;
    for (i = 0; i < 2; i++) {
      memcpy(&JPhi[i * 30], &dhd_dqf[i * 28], 28U * sizeof(real_T));
      JPhi[28 + 30 * i] = 1.0 - static_cast<real_T>(i);
      JPhi[29 + 30 * i] = i;
    }

    walk_mldivide_po(JQ, JPhi);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [JQpqp,JPhipPhip] = get_JQpqp_JPhipPhip_xelo(T,JpCoMqp,Jpi_qp,qp,JQ,dhd_dqf_p,qfp)
  // Computation of the derivative of jacobian of f function with respect time
  //  In here, computation is based on "VelPartialAccCoMs_Frames.m" and NOT in Symoro =)
  //  q = robot.q;
  // qp = robot_TALOS.qD;
  //
  void walkModelClass::walk_get_JQpqp_JPhipPhip_xelo(const real_T T[784], const
    real_T JpCoMqp[3], const real_T Jpi_qp[294], const real_T qp[30], const
    real_T JQ[900], const real_T dhd_dqf_p[56], const real_T qfp[2], real_T
    JQpqp[30], real_T JPhipPhip[30])
  {
    real_T phi;
    real_T theta;
    real_T Omega[9];
    real_T Hips[16];
    real_T J_T[90];
    real_T OmegaJTqp[3];
    int32_T i;
    real_T tmp[9];
    real_T tmp_0[9];
    real_T tmp_1[9];
    real_T tmp_2[3];
    real_T Omega_0[3];
    real_T Omega_1[90];
    real_T dhd_dqf_p_0[60];
    real_T theta_tmp;
    real_T theta_tmp_0;
    real_T Omega_tmp;
    int32_T Hips_tmp;
    int32_T Hips_tmp_tmp;
    int32_T J_T_tmp;

    //  This file compute the term JQp*qp (31x1) which is used to calculate "qpp" from Qpp = JQ*qpp + JQp*qp, i.e.  
    //  qpp = inv(JQ)[Qpp - JQp*qpp]
    // 'get_JQpqp_JPhipPhip_xelo:11' joints=30;
    // 'get_JQpqp_JPhipPhip_xelo:13' JQpqp = zeros(joints,1);
    memset(&JQpqp[0], 0, 30U * sizeof(real_T));

    //  Obtenemos las Jp*qp de los centros de masa y de los marcos
    // [~, ~, JpCoMqp, ~, Jpi_qp] = TALOS_VelPartialAccCoMs_Frames_testard(robot_TALOS); 
    //  [~, ~, JpCoMqp, ~, Jpi_qp] = VelAceCoMs_Frames(robot,zeros(31,1));% Podemos utilizar tambien ésta función usando qpp = 0 =) 
    // 'get_JQpqp_JPhipPhip_xelo:18' H7 = Jpi_qp(:,7);
    //  [^0PartialVP_7; ^0PartialWP_7] = [^0Jp_7,v*qp; ^0Jp_7,w*qp]
    // 'get_JQpqp_JPhipPhip_xelo:19' H12 = Jpi_qp(:,12);
    //  [^0PartialVP_12; ^0PartialWP_12] = [^0Jp_12,v*qp; ^0Jp_12,w*qp]
    // 'get_JQpqp_JPhipPhip_xelo:20' H14 = Jpi_qp(:,14);
    //  [^0PartialVP_14; ^0PartialWP_14] = [^0Jp_14,v*qp; ^0Jp_14,w*qp]
    // 'get_JQpqp_JPhipPhip_xelo:21' H15 = Jpi_qp(:,15);
    //  [^0PartialVP_15; ^0PartialWP_15] = [^0Jp_15,v*qp; ^0Jp_15,w*qp]
    //  CoM height
    // 'get_JQpqp_JPhipPhip_xelo:24' JQpqp(1)= JpCoMqp(3);
    JQpqp[0] = JpCoMqp[2];

    //  The row corresponding to zpp of the CoM
    //  Foot
    // 'get_JQpqp_JPhipPhip_xelo:28' JQpqp(2:4)= [H12(1:2);H14(3)];
    JQpqp[1] = Jpi_qp[66];
    JQpqp[2] = Jpi_qp[67];
    JQpqp[3] = Jpi_qp[80];

    //  [H12(1,2);H14(3)] = J_foot,v*qp
    //  Foot yaw,pitch,roll
    // 'get_JQpqp_JPhipPhip_xelo:31' Foot = T(:,:,14);
    //  Frame 14 is taken as it, since in zero potition (i.e. q=0 ) this frame as the same orientation as frame 0 
    // 'get_JQpqp_JPhipPhip_xelo:32' phi = atan2(Foot(2,1),Foot(1,1));
    phi = atan2(T[209], T[208]);

    // 'get_JQpqp_JPhipPhip_xelo:33' theta = atan2(-Foot(3,1),cos(phi)*Foot(1,1)+sin(phi)*Foot(2,1)); 
    theta_tmp = std::cos(phi);
    theta_tmp_0 = std::sin(phi);
    theta = atan2(-T[210], theta_tmp * T[208] + theta_tmp_0 * T[209]);

    // 'get_JQpqp_JPhipPhip_xelo:34' thetap = JQ(6,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo:35' phip = JQ(7,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo:36' Omega = OmeRPY(phi,theta);
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    Omega_tmp = std::cos(theta);
    Omega[0] = theta_tmp / Omega_tmp;
    Omega[3] = theta_tmp_0 / Omega_tmp;
    Omega[6] = 0.0;
    Omega[1] = -theta_tmp_0;
    Omega[4] = theta_tmp;
    Omega[7] = 0.0;
    Omega_tmp = std::tan(theta);
    Omega[2] = theta_tmp * Omega_tmp;
    Omega[5] = theta_tmp_0 * Omega_tmp;
    Omega[8] = 1.0;

    // 'get_JQpqp_JPhipPhip_xelo:37' OmegaDot = OmeDotRPY(phi,theta,phip,thetap); 
    //  Recalling that, as we just computing JQp*qp the first term i.e. JQ*qpp is computed outside 
    //  Note that "JQ(5:7,:) = Omega*Jfoot,w"... and for the second term (first term here) we want: "OmegaDot*J_foot,w *qp" 
    // 'get_JQpqp_JPhipPhip_xelo:40' term2 = OmegaDot*inv(Omega)*JQ(5:7,:)*qp;
    //  OmegaDot*J_foot,w *qp
    // 'get_JQpqp_JPhipPhip_xelo:41' term3 = Omega*H14(4:6);
    //  Omega*Jp_foot,w *qp
    // 'get_JQpqp_JPhipPhip_xelo:42' JQpqp(5:7) = term2 + term3;
    theta_tmp = 0.0;
    theta_tmp_0 = 0.0;
    for (i = 0; i < 30; i++) {
      theta_tmp += JQ[30 * i + 6] * qp[i];
      theta_tmp_0 += JQ[30 * i + 5] * qp[i];
    }

    walk_OmeDotRPY(phi, theta, theta_tmp, theta_tmp_0, tmp);
    walk_inv_a(Omega, tmp_0);
    for (i = 0; i < 3; i++) {
      for (J_T_tmp = 0; J_T_tmp < 3; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        tmp_1[Hips_tmp_tmp] = 0.0;
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp] * tmp[i];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 1] * tmp[i + 3];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 2] * tmp[i + 6];
      }

      tmp_2[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 4] * tmp_1[i];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 5] * tmp_1[i + 3];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 6] * tmp_1[i + 6];
        tmp_2[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }

      Omega_0[i] = 0.0;
      Omega_0[i] += Omega[i] * Jpi_qp[81];
      Omega_0[i] += Omega[i + 3] * Jpi_qp[82];
      Omega_0[i] += Omega[i + 6] * Jpi_qp[83];
      JQpqp[4 + i] = tmp_2[i] + Omega_0[i];
    }

    //  Hips yaw,pitch,roll (lower Torso)
    // 'get_JQpqp_JPhipPhip_xelo:46' Hips = T(:,:,7)*torso_f;
    for (i = 0; i < 4; i++) {
      for (J_T_tmp = 0; J_T_tmp < 4; J_T_tmp++) {
        Hips_tmp_tmp = i << 2;
        Hips_tmp = J_T_tmp + Hips_tmp_tmp;
        Hips[Hips_tmp] = 0.0;
        Hips[Hips_tmp] += T[96 + J_T_tmp] * walk_DW.torso_f[Hips_tmp_tmp];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 1] * T[J_T_tmp + 100];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 2] * T[J_T_tmp + 104];
        Hips[Hips_tmp] += walk_DW.torso_f[Hips_tmp_tmp + 3] * T[J_T_tmp + 108];
      }
    }

    //  Since frame 7 in zero potition (i.e. q=0 ) has a diferent orientation as frame 0.  
    //  It must be oriented as frame 0, so that the pitch yaw and roll angles have the same meaning for the 
    //  torso and for the foot.
    // 'get_JQpqp_JPhipPhip_xelo:49' phi=atan2(Hips(2,1),Hips(1,1));
    phi = atan2(Hips[1], Hips[0]);

    // 'get_JQpqp_JPhipPhip_xelo:50' theta=atan2(-Hips(3,1),cos(phi)*Hips(1,1)+sin(phi)*Hips(2,1)); 
    theta_tmp = std::cos(phi);
    theta_tmp_0 = std::sin(phi);
    theta = atan2(-Hips[2], theta_tmp * Hips[0] + theta_tmp_0 * Hips[1]);

    // 'get_JQpqp_JPhipPhip_xelo:51' thetap = JQ(9,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo:52' phip = JQ(10,:)*qp;
    // 'get_JQpqp_JPhipPhip_xelo:53' Omega = OmeRPY(phi,theta);
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    Omega_tmp = std::cos(theta);
    Omega[0] = theta_tmp / Omega_tmp;
    Omega[3] = theta_tmp_0 / Omega_tmp;
    Omega[6] = 0.0;
    Omega[1] = -theta_tmp_0;
    Omega[4] = theta_tmp;
    Omega[7] = 0.0;
    Omega_tmp = std::tan(theta);
    Omega[2] = theta_tmp * Omega_tmp;
    Omega[5] = theta_tmp_0 * Omega_tmp;
    Omega[8] = 1.0;

    // 'get_JQpqp_JPhipPhip_xelo:54' OmegaDot = OmeDotRPY(phi,theta,phip,thetap); 
    //  Recalling that, as we just computing JQp*qp the first term i.e. JQ*qpp is computed outside 
    //  Note that "JQ(8:10,:) = Omega*Jtorso,w"... and for the second term (first term here) we want: "OmegaDot*J_torso,w *qp" 
    // 'get_JQpqp_JPhipPhip_xelo:57' term2 = OmegaDot*inv(Omega)*JQ(8:10,:)*qp;
    //  OmegaDot*J_torso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo:58' term3 = Omega*H7(4:6);
    //  Omega*Jp_torso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo:59' JQpqp(8:10) = term2 + term3;
    theta_tmp = 0.0;
    theta_tmp_0 = 0.0;
    for (i = 0; i < 30; i++) {
      theta_tmp += JQ[30 * i + 9] * qp[i];
      theta_tmp_0 += JQ[30 * i + 8] * qp[i];
    }

    walk_OmeDotRPY(phi, theta, theta_tmp, theta_tmp_0, tmp);
    walk_inv_a(Omega, tmp_0);
    for (i = 0; i < 3; i++) {
      for (J_T_tmp = 0; J_T_tmp < 3; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        tmp_1[Hips_tmp_tmp] = 0.0;
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp] * tmp[i];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 1] * tmp[i + 3];
        tmp_1[Hips_tmp_tmp] += tmp_0[3 * J_T_tmp + 2] * tmp[i + 6];
      }

      tmp_2[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 7] * tmp_1[i];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 8] * tmp_1[i + 3];
        Omega_1[Hips_tmp_tmp] += JQ[30 * J_T_tmp + 9] * tmp_1[i + 6];
        tmp_2[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }

      Omega_0[i] = 0.0;
      Omega_0[i] += Omega[i] * Jpi_qp[39];
      Omega_0[i] += Omega[i + 3] * Jpi_qp[40];
      Omega_0[i] += Omega[i + 6] * Jpi_qp[41];
      JQpqp[7 + i] = tmp_2[i] + Omega_0[i];
    }

    //  Torso yaw   (Upper torso)
    // 'get_JQpqp_JPhipPhip_xelo:62' Torso = T(:,:,16);
    // 'get_JQpqp_JPhipPhip_xelo:63' phi=atan2(Torso(2,1),Torso(1,1));
    phi = atan2(T[241], T[240]);

    // 'get_JQpqp_JPhipPhip_xelo:64' theta=atan2(-Torso(3,1),cos(phi)*Torso(1,1)+sin(phi)*Torso(2,1)); 
    theta_tmp = std::cos(phi);
    theta_tmp_0 = std::sin(phi);
    theta = atan2(-T[242], theta_tmp * T[240] + theta_tmp_0 * T[241]);

    //  Since velocities "phip" and "thetap" were not taked into account before for the upper body  in "J_state.m" (just "yawp") 
    //  In the next we will use this part of the code  "J_state.m" to compute "phip" and "thetap" and use it in OmeDotRPY(phi,theta,phip,thetap) 
    //  in order to get the term "JQpqp(11)".
    //  --------------------------------------------------------------------------------- 
    // 'get_JQpqp_JPhipPhip_xelo:69' J_T = zeros(3,joints);
    memset(&J_T[0], 0, 90U * sizeof(real_T));

    // 'get_JQpqp_JPhipPhip_xelo:70' for i = 2:7
    for (i = 0; i < 6; i++) {
      // 'get_JQpqp_JPhipPhip_xelo:71' J_T(:,i-1)=T(1:3,3,i);
      J_T_tmp = (i + 1) << 4;
      J_T[3 * i] = T[J_T_tmp + 8];
      J_T[1 + 3 * i] = T[J_T_tmp + 9];
      J_T[2 + 3 * i] = T[J_T_tmp + 10];

      //  ....
    }

    // 'get_JQpqp_JPhipPhip_xelo:73' J_T(:,13)=T(1:3,3,17);
    J_T[36] = T[264];
    J_T[37] = T[265];
    J_T[38] = T[266];

    //  crea la matriz J_UpperTorso,w = [0a2, 0a3, 0a4, 0a5, 0a6, 0a7, 0a15 0 ... 0] (3x31) 
    // 'get_JQpqp_JPhipPhip_xelo:74' Omega = OmeRPY(phi,theta);
    // Computation of the transfert matrix for Jacobian computation in Roll,
    // Pitch, Yaw representation
    // 'OmeRPY:5' Ome = [ cos(phi)/cos(theta)    sin(phi)/cos(theta)   0;
    // 'OmeRPY:6'         -sin(phi)              cos(phi)            0;
    // 'OmeRPY:7'        cos(phi)*tan(theta)    sin(phi)*tan(theta)   1];
    Omega_tmp = std::cos(theta);
    Omega[0] = theta_tmp / Omega_tmp;
    Omega[3] = theta_tmp_0 / Omega_tmp;
    Omega[6] = 0.0;
    Omega[1] = -theta_tmp_0;
    Omega[4] = theta_tmp;
    Omega[7] = 0.0;
    Omega_tmp = std::tan(theta);
    Omega[2] = theta_tmp * Omega_tmp;
    Omega[5] = theta_tmp_0 * Omega_tmp;
    Omega[8] = 1.0;

    //  Ahora se calcula la velocidad de los 3 ángulos [psip, thetap, phip]^T Notese que el tercer renglon de "OmegaJTqp" -> JQ(11)*qp = "psip" 
    // 'get_JQpqp_JPhipPhip_xelo:76' OmegaJTqp =Omega*J_T*qp;
    for (i = 0; i < 3; i++) {
      OmegaJTqp[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp] * Omega[i];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 1] * Omega[i + 3];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 2] * Omega[i + 6];
        OmegaJTqp[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }
    }

    // 'get_JQpqp_JPhipPhip_xelo:77' thetap = OmegaJTqp(2);
    // 'get_JQpqp_JPhipPhip_xelo:78' phip = OmegaJTqp(3);
    // 'get_JQpqp_JPhipPhip_xelo:79' OmegaDot = OmeDotRPY(phi,theta,phip,thetap); 
    // clear term2 term3  % Ya que estos anteriormente eran vectores de 3 elementos y ahora solo queremos que sea un escalar... =) 
    // 'get_JQpqp_JPhipPhip_xelo:81' term2 = OmegaDot*J_T*qp;
    //  OmegaDot*J_UperTorso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo:82' term3 = Omega*H15(4:6);
    //  Omega*Jp_UperTorso,w *qp
    // 'get_JQpqp_JPhipPhip_xelo:83' JQpqp(11) = term2(3) + term3(3);
    walk_OmeDotRPY(phi, theta, OmegaJTqp[2], OmegaJTqp[1], tmp);
    for (i = 0; i < 3; i++) {
      tmp_2[i] = 0.0;
      for (J_T_tmp = 0; J_T_tmp < 30; J_T_tmp++) {
        Hips_tmp_tmp = i + 3 * J_T_tmp;
        Omega_1[Hips_tmp_tmp] = 0.0;
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp] * tmp[i];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 1] * tmp[i + 3];
        Omega_1[Hips_tmp_tmp] += J_T[3 * J_T_tmp + 2] * tmp[i + 6];
        tmp_2[i] += Omega_1[Hips_tmp_tmp] * qp[J_T_tmp];
      }

      Omega_0[i] = Omega[i + 6] * Jpi_qp[89] + (Omega[i + 3] * Jpi_qp[88] +
        Omega[i] * Jpi_qp[87]);
    }

    JQpqp[10] = tmp_2[2] + Omega_0[2];

    // ------------------------------------------------------
    //  Finally we introduce the two las elements that will help to compute "xpp" and "ypp"...  
    //  JQpqp(30)= JCoMp(1,:)*qp; % The row corresponding to xpp of the CoM
    //  JQpqp(31)= JCoMp(2,:)*qp; % The row corresponding to ypp of the CoM
    // 'get_JQpqp_JPhipPhip_xelo:89' JQpqp(29)= JpCoMqp(1);
    JQpqp[28] = JpCoMqp[0];

    //  The row corresponding to xpp of the CoM
    // 'get_JQpqp_JPhipPhip_xelo:90' JQpqp(30)= JpCoMqp(2);
    JQpqp[29] = JpCoMqp[1];

    //  The row corresponding to ypp of the CoM
    //  End
    // 'get_JQpqp_JPhipPhip_xelo:96' JdpPhip = [dhd_dqf_p;
    // 'get_JQpqp_JPhipPhip_xelo:97'           zeros(2,2)]*qfp;
    // 'get_JQpqp_JPhipPhip_xelo:99' JPhipPhip = JQ\(JdpPhip - JQpqp);
    for (i = 0; i < 2; i++) {
      memcpy(&dhd_dqf_p_0[i * 30], &dhd_dqf_p[i * 28], 28U * sizeof(real_T));
      dhd_dqf_p_0[28 + 30 * i] = 0.0;
      dhd_dqf_p_0[29 + 30 * i] = 0.0;
    }

    for (i = 0; i < 30; i++) {
      JPhipPhip[i] = (dhd_dqf_p_0[i + 30] * qfp[1] + dhd_dqf_p_0[i] * qfp[0]) -
        JQpqp[i];
    }

    walk_mldivide(JQ, JPhipPhip);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [hd,hdp,hdpp] = desired_h_and_diff_xelo(qf,qfp,qfpp,dhd_dqf,dhd_dqf_p,phi)
  //
  void walkModelClass::walk_desired_h_and_diff_xelo(const real_T qfp[2], const
    real_T qfpp[2], const real_T dhd_dqf[56], const real_T dhd_dqf_p[56], real_T
    phi, real_T hd[28], real_T hdp[28], real_T hdpp[28])
  {
    b_cell_wrap_0_walk_T hd_phi[28];
    int32_T i;
    real_T y;
    int32_T k;
    real_T dhd_dqf_0[28];
    real_T dhd_dqf_p_0[28];

    // 'desired_h_and_diff_xelo:5' hd_phi=cell(1,28);
    // 'desired_h_and_diff_xelo:6' hd_phi{1}=hd1;
    hd_phi[0].f1.size = 8;
    memcpy(&hd_phi[0].f1.data[0], &walk_DW.hd1[0], sizeof(real_T) << 3U);

    // 'desired_h_and_diff_xelo:6' hd_phi{2}=hd2;
    hd_phi[1].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[1].f1.data[i] = walk_DW.hd2[i];
    }

    // 'desired_h_and_diff_xelo:6' hd_phi{3}=hd3;
    hd_phi[2].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[2].f1.data[i] = walk_DW.hd3[i];
    }

    // 'desired_h_and_diff_xelo:6' hd_phi{4}=hd4;
    hd_phi[3].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[3].f1.data[i] = walk_DW.hd4[i];
    }

    // 'desired_h_and_diff_xelo:6' hd_phi{5}=hd5;
    hd_phi[4].f1.size = 6;

    // 'desired_h_and_diff_xelo:6' hd_phi{6}=hd6;
    hd_phi[5].f1.size = 6;

    // 'desired_h_and_diff_xelo:6' hd_phi{7}=hd7;
    hd_phi[6].f1.size = 6;

    // 'desired_h_and_diff_xelo:6' hd_phi{8}=hd8;
    hd_phi[7].f1.size = 6;

    // 'desired_h_and_diff_xelo:6' hd_phi{9}=hd9;
    hd_phi[8].f1.size = 6;

    // 'desired_h_and_diff_xelo:6' hd_phi{10}=hd10;
    hd_phi[9].f1.size = 6;

    // 'desired_h_and_diff_xelo:6' hd_phi{11}=hd11;
    hd_phi[10].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[4].f1.data[i] = walk_DW.hd5[i];
      hd_phi[5].f1.data[i] = walk_DW.hd6[i];
      hd_phi[6].f1.data[i] = walk_DW.hd7[i];
      hd_phi[7].f1.data[i] = walk_DW.hd8[i];
      hd_phi[8].f1.data[i] = walk_DW.hd9[i];
      hd_phi[9].f1.data[i] = walk_DW.hd10[i];
      hd_phi[10].f1.data[i] = walk_DW.hd11[i];
    }

    // 'desired_h_and_diff_xelo:6' hd_phi{12}=hd12;
    hd_phi[11].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[11].f1.data[i] = walk_DW.hd12[i];
    }

    // 'desired_h_and_diff_xelo:7' hd_phi{13}=hd13;
    hd_phi[12].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{14}=hd14;
    hd_phi[13].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{15}=hd15;
    hd_phi[14].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{16}=hd16;
    hd_phi[15].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{17}=hd17;
    hd_phi[16].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[12].f1.data[i] = walk_DW.hd13[i];
      hd_phi[13].f1.data[i] = walk_DW.hd14[i];
      hd_phi[14].f1.data[i] = walk_DW.hd15[i];
      hd_phi[15].f1.data[i] = walk_DW.hd16[i];
      hd_phi[16].f1.data[i] = walk_DW.hd17[i];
    }

    // 'desired_h_and_diff_xelo:7' hd_phi{18}=hd18;
    hd_phi[17].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[17].f1.data[i] = walk_DW.hd18[i];
    }

    // 'desired_h_and_diff_xelo:7' hd_phi{19}=hd19;
    hd_phi[18].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{20}=hd20;
    hd_phi[19].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{21}=hd21;
    hd_phi[20].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{22}=hd22;
    hd_phi[21].f1.size = 6;

    // 'desired_h_and_diff_xelo:7' hd_phi{23}=hd23;
    hd_phi[22].f1.size = 6;

    // 'desired_h_and_diff_xelo:8' hd_phi{24}=hd24;
    hd_phi[23].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[18].f1.data[i] = walk_DW.hd19[i];
      hd_phi[19].f1.data[i] = walk_DW.hd20[i];
      hd_phi[20].f1.data[i] = walk_DW.hd21[i];
      hd_phi[21].f1.data[i] = walk_DW.hd22[i];
      hd_phi[22].f1.data[i] = walk_DW.hd23[i];
      hd_phi[23].f1.data[i] = walk_DW.hd24[i];
    }

    // 'desired_h_and_diff_xelo:8' hd_phi{25}=hd25;
    hd_phi[24].f1.size = 7;
    for (i = 0; i < 7; i++) {
      hd_phi[24].f1.data[i] = walk_DW.hd25[i];
    }

    // 'desired_h_and_diff_xelo:8' hd_phi{26}=hd26;
    hd_phi[25].f1.size = 6;

    // 'desired_h_and_diff_xelo:8' hd_phi{27}=hd27;
    hd_phi[26].f1.size = 6;

    // 'desired_h_and_diff_xelo:8' hd_phi{28}=hd28;
    hd_phi[27].f1.size = 6;
    for (i = 0; i < 6; i++) {
      hd_phi[25].f1.data[i] = walk_DW.hd26[i];
      hd_phi[26].f1.data[i] = walk_DW.hd27[i];
      hd_phi[27].f1.data[i] = walk_DW.hd28[i];
    }

    // 'desired_h_and_diff_xelo:10' hd=zeros(28,1);
    // 'desired_h_and_diff_xelo:11' for i=1:28
    // 'desired_h_and_diff_xelo:15' hdp=dhd_dqf*qfp;
    // 'desired_h_and_diff_xelo:16' hdpp=dhd_dqf*qfpp + dhd_dqf_p*qfp;
    for (i = 0; i < 28; i++) {
      // 'desired_h_and_diff_xelo:12' hd(i) = polyval(hd_phi{i},phi);
      y = hd_phi[i].f1.data[0];
      for (k = 0; k <= hd_phi[i].f1.size - 2; k++) {
        y = phi * y + hd_phi[i].f1.data[k + 1];
      }

      hd[i] = y;
      hdp[i] = 0.0;
      dhd_dqf_0[i] = 0.0;
      dhd_dqf_p_0[i] = 0.0;
      hdp[i] += dhd_dqf[i] * qfp[0];
      dhd_dqf_0[i] += dhd_dqf[i] * qfpp[0];
      dhd_dqf_p_0[i] += dhd_dqf_p[i] * qfp[0];
      y = dhd_dqf[i + 28];
      hdp[i] += y * qfp[1];
      dhd_dqf_0[i] += y * qfpp[1];
      dhd_dqf_p_0[i] += dhd_dqf_p[i + 28] * qfp[1];
      hdpp[i] = dhd_dqf_0[i] + dhd_dqf_p_0[i];
    }
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function Tau= Phase_control(q,qp)
  //  DGM and CoM
  //
  void walkModelClass::walk_Phase_control(const real_T q[30], const real_T qp[30],
    real_T Tau[30])
  {
    real_T h[28];
    real_T qfpp[2];
    real_T qpp[30];
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T qfp[2];
    real_T phi;
    real_T dphi_dx;
    real_T dphi_dy;
    real_T d2phi_dx2;
    real_T d2phi_dy2;
    real_T d2phi_dxy;
    real_T Jpi_qp[294];
    real_T dhd_dqf[56];
    real_T dhd_dqf_p[56];
    real_T JPhi[60];
    real_T JQpqp[30];
    real_T M1[3];
    real_T Tau1[30];
    real_T F2[3];
    real_T M2[3];
    real_T Tau2[30];
    real_T F3[3];
    real_T M3[3];
    real_T hd[28];
    real_T hdp[28];
    real_T hdpp[28];
    real_T hdpp_0[28];
    real_T JPhi_0[30];
    int32_T i;
    int32_T i_0;

    // 'Phase_control:3' T = DGM_TALOS_QY_xelo(q);
    walk_DGM_TALOS_QY_xelo(q, walk_B.T_h);

    // 'Phase_control:4' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_compute2_com_xelo(walk_B.T_h, CoM, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_cx);

    // 'Phase_control:5' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    for (i = 0; i < 2; i++) {
      qfp[i] = 0.0;
      for (i_0 = 0; i_0 < 30; i_0++) {
        qfp[i] += J_CoM[3 * i_0 + i] * qp[i_0];
      }
    }

    // 'Phase_control:6' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T_h, J_CoM, J_Ankle, walk_B.J_h_l);

    //  Actual state
    // 'Phase_control:9' h = state_v_TALOS_xelo(q,T,CoM);
    walk_state_v_TALOS_xelo(q, walk_B.T_h, CoM, h);

    // 'Phase_control:10' hp= J_h*qp;
    //  Phi and derivative
    // 'Phase_control:14' [phi,dphi_dx,dphi_dy,d2phi_dx2,d2phi_dy2,d2phi_dxy]=get_phi_and_diff_xelo(qf); 
    qfpp[0] = CoM[0];
    qfpp[1] = CoM[1];
    walk_get_phi_and_diff_xelo(qfpp, &phi, &dphi_dx, &dphi_dy, &d2phi_dx2,
      &d2phi_dy2, &d2phi_dxy);

    //  Compute all remaining jacobian
    // 'Phase_control:18' [JpCoMqp,Jpi_qp] = get_JpCoMqp_Jpi_qp_xelo(T,qp);
    walk_get_JpCoMqp_Jpi_qp_xelo(walk_B.T_h, qp, CoM, Jpi_qp);

    // 'Phase_control:19' [dhd_dqf,dhd_dqf_p]=get_hd_jacob_xelo(qf,qfp,phi,dphi_dx,dphi_dy,d2phi_dx2,d2phi_dy2,d2phi_dxy); 
    walk_get_hd_jacob_xelo(qfp, phi, dphi_dx, dphi_dy, d2phi_dx2, d2phi_dy2,
      d2phi_dxy, dhd_dqf, dhd_dqf_p);

    // 'Phase_control:20' [JQ,JPhi] = get_JQ_JPhi_xelo(J_h,J_CoM,dhd_dqf);
    walk_get_JQ_JPhi_xelo(walk_B.J_h_l, J_CoM, dhd_dqf, walk_B.JQ_g1, JPhi);

    // 'Phase_control:21' [JQpqp,JPhipPhip] = get_JQpqp_JPhipPhip_xelo(T,JpCoMqp,Jpi_qp,qp,JQ,dhd_dqf_p,qfp); 
    walk_get_JQpqp_JPhipPhip_xelo(walk_B.T_h, CoM, Jpi_qp, qp, walk_B.JQ_g1,
      dhd_dqf_p, qfp, JQpqp, qpp);

    //  Desired CoM acc
    // 'Phase_control:24' [term1,term2,term3] = get_NE_terms_xelo(JPhi,JPhipPhip); 
    // 'get_NE_terms_xelo:3' term1 = JPhi(:,1) + JPhipPhip;
    //
    // 'get_NE_terms_xelo:4' term2 = JPhi(:,2) + JPhipPhip;
    //
    // 'get_NE_terms_xelo:5' term3 = JPhipPhip;
    //
    // 'Phase_control:25' [F1,M1,Tau1] = TALOS_Newton_Euler_xelo(T,q,qp,term1);
    for (i = 0; i < 30; i++) {
      JPhi_0[i] = JPhi[i] + qpp[i];
    }

    walk_TALOS_Newton_Euler_xelo(walk_B.T_h, qp, JPhi_0, CoM, M1, Tau1);

    // 'Phase_control:26' [F2,M2,Tau2] = TALOS_Newton_Euler_xelo(T,q,qp,term2);
    for (i = 0; i < 30; i++) {
      JPhi_0[i] = JPhi[30 + i] + qpp[i];
    }

    walk_TALOS_Newton_Euler_xelo(walk_B.T_h, qp, JPhi_0, F2, M2, Tau2);

    // 'Phase_control:27' [F3,M3,Tau3] = TALOS_Newton_Euler_xelo(T,q,qp,term3);
    walk_TALOS_Newton_Euler_xelo(walk_B.T_h, qp, qpp, F3, M3, JPhi_0);

    // 'Phase_control:28' qfpp = qfpp_desired_xelo(F1,M1,Tau1,F2,M2,Tau2,F3,M3,Tau3,phi); 
    walk_qfpp_desired_xelo(CoM, M1, Tau1, F2, M2, Tau2, F3, M3, JPhi_0, phi,
      qfpp);

    //  Control
    // 'Phase_control:33' [hd,hdp,hdpp] = desired_h_and_diff_xelo(qf,qfp,qfpp,dhd_dqf,dhd_dqf_p,phi); 
    walk_desired_h_and_diff_xelo(qfp, qfpp, dhd_dqf, dhd_dqf_p, phi, hd, hdp,
      hdpp);

    // 'Phase_control:35' v=hdpp+Kv.*(hdp-hp)+Kp.*(hd-h);
    // 'Phase_control:37' qpp = desired_joint_accel_xelo(JQ,JQpqp,v,qfpp);
    for (i = 0; i < 28; i++) {
      phi = 0.0;
      for (i_0 = 0; i_0 < 30; i_0++) {
        phi += walk_B.J_h_l[28 * i_0 + i] * qp[i_0];
      }

      hdpp_0[i] = ((hdp[i] - phi) * walk_DW.Kv[i] + hdpp[i]) + (hd[i] - h[i]) *
        walk_DW.Kp[i];
    }

    walk_desired_joint_accel_xelo(walk_B.JQ_g1, JQpqp, hdpp_0, qfpp, qpp);

    // 'Phase_control:39' [~,~,Tau] = TALOS_Newton_Euler_xelo(T,q,qp,qpp);
    walk_TALOS_Newton_Euler_xelo(walk_B.T_h, qp, qpp, CoM, M1, Tau);

    // 'Phase_control:39' ~
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval(const real_T p[4], real_T x)
  {
    return ((x * p[0] + p[1]) * x + p[2]) * x + p[3];
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function T = DGM_TALOS_QY_xelo(q)
  //  computing of the geometric model (transformations matrix) of the robot
  //  using TALO robot structure
  // q = robot_TALOS.q;%30 raw and 1 column
  //
  void walkModelClass::walk_DGM_TALOS_QY_xelo_d(real_T T[784])
  {
    int32_T j;
    int32_T c;
    static const real_T f[49] = { 0.0, 1.5707963267948966, 0.05, -0.1, 0.05,
      -1.5707963267948966, 0.0, 0.0, 1.5707963267948966, -0.05, 0.1, -0.05, 0.0,
      -1.5707963267948966, -1.5707963267948966, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.5707963267948966, 0.0, 1.5707963267948966,
      -1.5707963267948966, 0.0, 0.0, 0.0, 1.5707963267948966,
      -1.5707963267948966, -1.5707963267948966, 0.0, 0.0, 0.0, 0.0,
      1.5707963267948966, 0.0, 1.5707963267948966, -1.5707963267948966, 0.0, 0.0,
      0.0, 1.5707963267948966, -1.5707963267948966, -1.5707963267948966, 0.0 };

    static const int8_T g[49] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
      7, 15, 16, 17, 18, 19, 20, 17, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
      33, 34, 17, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48 };

    real_T T_0[16];
    int32_T i;
    int32_T Temp_tmp;
    int32_T mat_t_size_idx_0_tmp;
    int32_T T_tmp;
    int32_T T_tmp_0;

    // 'DGM_TALOS_QY_xelo:5' theta = zeros(1,49);
    // 'DGM_TALOS_QY_xelo:6' T=zeros(4,4,49);
    //  TALOS has 49 frame
    // 'DGM_TALOS_QY_xelo:7' Temp =zeros(4,4,49);
    memset(&T[0], 0, 784U * sizeof(real_T));
    memset(&walk_B.Temp_b[0], 0, 784U * sizeof(real_T));

    //
    // 'DGM_TALOS_QY_xelo:9' ant = [ 0,1,2,3,4,5,6,7,8,9,10,11,12,13,7,...
    // 'DGM_TALOS_QY_xelo:10'        15,16,17,18,19,20,...
    // 'DGM_TALOS_QY_xelo:11'        17,22,23,24,25,26,27,28,29,30,31,32,33,34,... 
    // 'DGM_TALOS_QY_xelo:12'        17,36,37,38,39,40,41,42,43,44,45,46,47,48]; 
    //
    //  SE SUPONE QUE ES LO MISMO, los originales son los de ARRIBA =)
    //  th15o = - 0.480175;%TorsoYaw
    //  th17o = - 1.745532;%NeckPitch
    //  th21o = - 0.029316;%RshoulderPitch
    //  th22o = - 0.437389;%RshoulderYaw
    //  th23o = - 0.155553;%RelberRoll
    //  th24o = 0.014011;%RelberYaw
    //  th29o = - 0.029316;%LshoulderPitch
    //  th30o = 0.437389;%LshoulderYaw
    //  th31o = 0.155553;%LelberRoll
    //  th32o = - 0.014011;%LelberYaw
    // 'DGM_TALOS_QY_xelo:27' theta(1) = 0;
    // 'DGM_TALOS_QY_xelo:28' theta(2) = q(1)+pi/2;
    // 'DGM_TALOS_QY_xelo:29' theta(3) = q(2);
    // 'DGM_TALOS_QY_xelo:30' theta(4) = q(3);
    // 'DGM_TALOS_QY_xelo:31' theta(5) = q(4);
    // 'DGM_TALOS_QY_xelo:32' theta(6) = q(5)-pi/2;
    // 'DGM_TALOS_QY_xelo:33' theta(7) = q(6);
    // 'DGM_TALOS_QY_xelo:34' theta(8) = q(7);
    // 'DGM_TALOS_QY_xelo:35' theta(9) = q(8)+pi/2;
    // 'DGM_TALOS_QY_xelo:36' theta(10) =q(9);
    // 'DGM_TALOS_QY_xelo:37' theta(11) =q(10);
    // 'DGM_TALOS_QY_xelo:38' theta(12) =q(11);
    // 'DGM_TALOS_QY_xelo:39' theta(13) =q(12);
    // 'DGM_TALOS_QY_xelo:40' theta(14) = -pi/2;
    // 'DGM_TALOS_QY_xelo:41' theta(15) = -pi/2;
    // 'DGM_TALOS_QY_xelo:42' theta(16) = q(13);
    // 'DGM_TALOS_QY_xelo:43' theta(17) = q(14);
    // 'DGM_TALOS_QY_xelo:44' theta(18) = 0;
    // 'DGM_TALOS_QY_xelo:45' theta(19) = q(15);
    // 'DGM_TALOS_QY_xelo:46' theta(20) = q(16);
    // 'DGM_TALOS_QY_xelo:47' theta(21) = 0;
    // 'DGM_TALOS_QY_xelo:48' theta(22) = 0;
    // 'DGM_TALOS_QY_xelo:49' theta(23) = q(17);
    // 'DGM_TALOS_QY_xelo:50' theta(24) = 0;
    // 'DGM_TALOS_QY_xelo:51' theta(25) = pi/2;
    // 'DGM_TALOS_QY_xelo:52' theta(26) = q(18);
    // 'DGM_TALOS_QY_xelo:53' theta(27) = pi/2;
    // 'DGM_TALOS_QY_xelo:54' theta(28) = q(19) - pi/2;
    // 'DGM_TALOS_QY_xelo:55' theta(29) = 0;
    // 'DGM_TALOS_QY_xelo:56' theta(30) = q(20);
    // 'DGM_TALOS_QY_xelo:57' theta(31) = q(21);
    // 'DGM_TALOS_QY_xelo:58' theta(32) = pi/2;
    // 'DGM_TALOS_QY_xelo:59' theta(33) = q(22) - pi/2;
    // 'DGM_TALOS_QY_xelo:60' theta(34) = q(23) - pi/2;
    // 'DGM_TALOS_QY_xelo:61' theta(35) = 0;
    // 'DGM_TALOS_QY_xelo:62' theta(36) = 0;
    // 'DGM_TALOS_QY_xelo:63' theta(37) = q(24);
    // 'DGM_TALOS_QY_xelo:64' theta(38) = 0;
    // 'DGM_TALOS_QY_xelo:65' theta(39) = pi/2;
    // 'DGM_TALOS_QY_xelo:66' theta(40) = q(25);
    // 'DGM_TALOS_QY_xelo:67' theta(41) = pi/2;
    // 'DGM_TALOS_QY_xelo:68' theta(42) = q(26) - pi/2;
    // 'DGM_TALOS_QY_xelo:69' theta(43) = 0;
    // 'DGM_TALOS_QY_xelo:70' theta(44) = q(27);
    // 'DGM_TALOS_QY_xelo:71' theta(45) = q(28);
    // 'DGM_TALOS_QY_xelo:72' theta(46) = pi/2;
    // 'DGM_TALOS_QY_xelo:73' theta(47) = q(29) - pi/2;
    // 'DGM_TALOS_QY_xelo:74' theta(48) = q(30) - pi/2;
    // 'DGM_TALOS_QY_xelo:75' theta(49) = 0;
    //
    // mat_t=TALOS_mat_trans(theta);
    // 'DGM_TALOS_QY_xelo:80' mat_t=TALOS_mat_trans2(theta);
    walk_TALOS_mat_trans2(f, walk_B.mat_t_n);

    // 'DGM_TALOS_QY_xelo:81' Temp(:,:,1)= mat_t(1:4,:);
    for (c = 0; c < 4; c++) {
      Temp_tmp = c << 2;
      walk_B.Temp_b[Temp_tmp] = walk_B.mat_t_n[196 * c];
      walk_B.Temp_b[1 + Temp_tmp] = walk_B.mat_t_n[196 * c + 1];
      walk_B.Temp_b[2 + Temp_tmp] = walk_B.mat_t_n[196 * c + 2];
      walk_B.Temp_b[3 + Temp_tmp] = walk_B.mat_t_n[196 * c + 3];
    }

    // 'DGM_TALOS_QY_xelo:82' Temp(1,4,1)= Temp(1,4,1);
    //  ?changer en 0.2 quand on agrandira les pieds
    // 'DGM_TALOS_QY_xelo:84' for j = 2 : 49
    for (j = 0; j < 48; j++) {
      // 'DGM_TALOS_QY_xelo:85' Temp(:,:,j) = mat_t(4*(j-1)+1:4*j,:);
      Temp_tmp = (j + 1) << 2;
      c = (2 + j) << 2;
      if (Temp_tmp + 1 > c) {
        Temp_tmp = 0;
        c = 0;
      }

      mat_t_size_idx_0_tmp = c - Temp_tmp;
      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data_b[c] = walk_B.mat_t_n[Temp_tmp + c];
      }

      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data_b[c + mat_t_size_idx_0_tmp] = walk_B.mat_t_n[(Temp_tmp
          + c) + 196];
      }

      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data_b[c + (mat_t_size_idx_0_tmp << 1)] = walk_B.mat_t_n
          [(Temp_tmp + c) + 392];
      }

      for (c = 0; c < mat_t_size_idx_0_tmp; c++) {
        walk_B.mat_t_data_b[c + mat_t_size_idx_0_tmp * 3] = walk_B.mat_t_n
          [(Temp_tmp + c) + 588];
      }

      for (c = 0; c < 4; c++) {
        Temp_tmp = c << 2;
        mat_t_size_idx_0_tmp = Temp_tmp + ((j + 1) << 4);
        walk_B.Temp_b[mat_t_size_idx_0_tmp] = walk_B.mat_t_data_b[Temp_tmp];
        walk_B.Temp_b[mat_t_size_idx_0_tmp + 1] = walk_B.mat_t_data_b[Temp_tmp +
          1];
        walk_B.Temp_b[mat_t_size_idx_0_tmp + 2] = walk_B.mat_t_data_b[Temp_tmp +
          2];
        walk_B.Temp_b[mat_t_size_idx_0_tmp + 3] = walk_B.mat_t_data_b[Temp_tmp +
          3];
      }
    }

    // 'DGM_TALOS_QY_xelo:87' T(:,:,1) = Temp(:,:,1);
    for (c = 0; c < 4; c++) {
      Temp_tmp = c << 2;
      T[Temp_tmp] = walk_B.Temp_b[Temp_tmp];
      T[1 + (c << 2)] = walk_B.Temp_b[Temp_tmp + 1];
      T[2 + (c << 2)] = walk_B.Temp_b[Temp_tmp + 2];
      T[3 + (c << 2)] = walk_B.Temp_b[Temp_tmp + 3];
    }

    // 'DGM_TALOS_QY_xelo:88' for j = 2 : 49
    for (j = 0; j < 48; j++) {
      // 'DGM_TALOS_QY_xelo:89' T(:,:,j) = T(:,:,ant(j)) * Temp(:,:,j);
      mat_t_size_idx_0_tmp = g[j + 1];
      for (c = 0; c < 4; c++) {
        for (i = 0; i < 4; i++) {
          Temp_tmp = i << 2;
          T_tmp = c + Temp_tmp;
          T_0[T_tmp] = 0.0;
          T_tmp_0 = ((mat_t_size_idx_0_tmp - 1) << 4) + c;
          Temp_tmp += (j + 1) << 4;
          T_0[T_tmp] += T[T_tmp_0] * walk_B.Temp_b[Temp_tmp];
          T_0[T_tmp] += T[T_tmp_0 + 4] * walk_B.Temp_b[Temp_tmp + 1];
          T_0[T_tmp] += T[T_tmp_0 + 8] * walk_B.Temp_b[Temp_tmp + 2];
          T_0[T_tmp] += T[T_tmp_0 + 12] * walk_B.Temp_b[Temp_tmp + 3];
        }
      }

      for (c = 0; c < 4; c++) {
        Temp_tmp = c << 2;
        T_tmp = Temp_tmp + ((j + 1) << 4);
        T[T_tmp] = T_0[Temp_tmp];
        T[T_tmp + 1] = T_0[Temp_tmp + 1];
        T[T_tmp + 2] = T_0[Temp_tmp + 2];
        T[T_tmp + 3] = T_0[Temp_tmp + 3];
      }
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  void walkModelClass::walk_abs(const real_T x[30], real_T y[30])
  {
    int32_T k;
    for (k = 0; k < 30; k++) {
      y[k] = std::abs(x[k]);
    }
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_norm(const real_T x[30])
  {
    real_T y;
    real_T scale;
    real_T absxk;
    real_T t;
    int32_T k;
    y = 0.0;
    scale = 3.3121686421112381E-170;
    for (k = 0; k < 30; k++) {
      absxk = std::abs(x[k]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    return scale * std::sqrt(y);
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function q = InvGeometricHZD_xelo(q_init,qf,hd)
  // Numerical solver of the inverse geometric model assuming the virtual
  // constraint are respected.
  // q_init=robot.q;
  //
  void walkModelClass::walk_InvGeometricHZD_xelo(const real_T qf[2], const
    real_T hd[28], real_T q[30])
  {
    real_T Qdes[30];
    real_T J_CoM[90];
    real_T h[28];
    real_T Q[30];
    real_T dQ[30];
    real_T nQ;
    real_T G[3];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T varargin_1[30];
    static const real_T b[30] = { 0.0, 0.05, -0.1, 0.05, 0.0, 0.0, 0.0, 0.0,
      -0.05, 0.1, -0.05, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

    static const int8_T c[6] = { 1, 2, 6, 7, 11, 12 };

    int32_T i;
    int32_T i_0;
    real_T tmp;

    // 'InvGeometricHZD_xelo:5' x=qf(1);
    // 'InvGeometricHZD_xelo:5' y=qf(2);
    // 'InvGeometricHZD_xelo:6' q=q_init;
    memcpy(&q[0], &b[0], 30U * sizeof(real_T));

    // Case = 'position';
    //  "Case", "gait_parameters" and "t" are used inside "OptionDesiredTrajectory" 
    // OptionDesiredTrajectory;
    // 'InvGeometricHZD_xelo:11' Qdes = [hd; x; y];
    memcpy(&Qdes[0], &hd[0], 28U * sizeof(real_T));
    Qdes[28] = qf[0];
    Qdes[29] = qf[1];

    //  Qd - > Desired controlled variables set and the CoM Qdes = [xm xs ys zs q q q x y] 
    //  Qdes(5) =
    //  Qdes(5)+0.1;vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvbvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv 
    //  b v
    //  Qdes = [0.65 -0.148756 0.138540 0.047324 0.001412 -0.009477 -0.004895 -0.040727 0.099080 0.046337 1.565306 -0.006570 0.411674 0.009341 0.021864 1.747546 0.196696 1.896289 0.490423 -0.000520 -0.013623 0.015231 1.633540 -0.196312 -1.902432 -0.607166 0.000121 0.010235 -0.010127 -0.011238 0.046189]'; 
    // G = robot.CoM;  % Posiciï¿½n X,Y,Z del COM del robot
    // Q = [state_v(robot);G(1);G(2)];  % Set of real OPERATIONAL positions Q = [h(q)^T, q_f^T]^T 
    // 'InvGeometricHZD_xelo:20' T = DGM_TALOS_QY_xelo(q);
    walk_DGM_TALOS_QY_xelo_d(walk_B.T_o);

    // 'InvGeometricHZD_xelo:21' [G,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_compute2_com_xelo(walk_B.T_o, G, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_c);

    // [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'InvGeometricHZD_xelo:23' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T_o, J_CoM, J_Ankle, walk_B.J_h_d);

    // 'InvGeometricHZD_xelo:25' h = state_v_TALOS_xelo(q,T,G);
    walk_state_v_TALOS_xelo(b, walk_B.T_o, G, h);

    // hp= J_h*qp;
    // disp(hd-h)
    // 'InvGeometricHZD_xelo:28' Q=[h;G(1);G(2)];
    memcpy(&Q[0], &h[0], 28U * sizeof(real_T));
    Q[28] = G[0];
    Q[29] = G[1];

    // Numerical threshold
    // 'InvGeometricHZD_xelo:31' Thre = 0.2;
    // global nQ
    //  ---------------------------
    // 'InvGeometricHZD_xelo:35' dQ = Qdes-Q;
    for (i = 0; i < 30; i++) {
      dQ[i] = Qdes[i] - Q[i];
    }

    // 'InvGeometricHZD_xelo:36' nQ = max(abs(dQ));
    walk_abs(dQ, varargin_1);
    nQ = varargin_1[0];
    for (i = 0; i < 29; i++) {
      tmp = varargin_1[i + 1];
      if (nQ < tmp) {
        nQ = tmp;
      }
    }

    // i=0;
    // 'InvGeometricHZD_xelo:41' while nQ>1e-10
    while (nQ > 1.0E-10) {
      // 'InvGeometricHZD_xelo:42' if nQ>Thre
      if (nQ > 0.2) {
        // 'InvGeometricHZD_xelo:43' dQ = dQ./norm(Q).*Thre;
        tmp = walk_norm(Q);
        for (i_0 = 0; i_0 < 30; i_0++) {
          dQ[i_0] = dQ[i_0] / tmp * 0.2;
        }
      }

      // dq = InvKinematic(dQ,robot);
      // 'InvGeometricHZD_xelo:46' J=[J_h;J_CoM(1:2,:)];
      // 'InvGeometricHZD_xelo:48' dq=J\dQ;
      for (i_0 = 0; i_0 < 30; i_0++) {
        memcpy(&walk_B.J_h[i_0 * 30], &walk_B.J_h_d[i_0 * 28], 28U * sizeof
               (real_T));
        walk_B.J_h[28 + 30 * i_0] = J_CoM[3 * i_0];
        walk_B.J_h[29 + 30 * i_0] = J_CoM[3 * i_0 + 1];
      }

      walk_mldivide(walk_B.J_h, dQ);

      // Next iteration
      // q=robot.q+dq;
      // 'InvGeometricHZD_xelo:52' q=q+dq;
      for (i_0 = 0; i_0 < 30; i_0++) {
        q[i_0] += dQ[i_0];
      }

      // Singularity treatment
      //      PREVIOUS CONDITIONS....
      //      if q(1)<-pi/2-1e-3
      //          q(1)=-pi/2-1e-3;
      //      end
      //      if q(1)>pi/2+1e-3
      //          q(1) = pi/2+1e-3;
      //      end
      //      if q(2)<-pi/2-1e-3
      //          q(2)=-pi/2-1e-3;
      //      end
      //      if q(2)>pi/2+1e-3
      //          q(1) = pi/2+1e-3;
      //      end
      //
      //      if q(3)>-1e-3
      //          q(3)=-1e-3;
      //      end
      //      if q(3)<-pi+1e-3
      //          q(3) = -pi+1e-3;
      //      end
      //
      //      if q(10)<1e-3
      //          q(10) = 1e-3;
      //      end
      //      if q(10)>pi-1e-3
      //          q(10) = pi-1e-3;
      //      end
      //  All leg joints are restricted to be between -180 and 180 deg
      // 'InvGeometricHZD_xelo:85' for k = [1:12]
      for (i = 0; i < 12; i++) {
        // (-180,180)deg
        // 'InvGeometricHZD_xelo:86' while q(k)<-pi
        while (q[i] < -3.1415926535897931) {
          // 'InvGeometricHZD_xelo:87' q(k) = q(k) + 2*pi;
          q[i] += 6.2831853071795862;
        }

        // 'InvGeometricHZD_xelo:89' while q(k)>pi
        while (q[i] > 3.1415926535897931) {
          // 'InvGeometricHZD_xelo:90' q(k) = q(k) - 2*pi;
          q[i] -= 6.2831853071795862;
        }
      }

      //  Then more restrictive values are chosen for some particular joints.... 
      //  Lateral ankle orientation and hip yaw (support and non-support) of the robot cannot be more than +90  and -90 deg 
      // 'InvGeometricHZD_xelo:96' for k=[1,2,6,7,11,12]
      for (i = 0; i < 6; i++) {
        // (-90,90)deg
        // 'InvGeometricHZD_xelo:97' if q(k)>=pi/2
        i_0 = c[i] - 1;
        if (q[i_0] >= 1.5707963267948966) {
          // 'InvGeometricHZD_xelo:98' q(k) = deg2rad(88);
          q[i_0] = 1.53588974175501;
        }

        // 'InvGeometricHZD_xelo:100' if q(k)<=-pi/2
        if (q[i_0] <= -1.5707963267948966) {
          // 'InvGeometricHZD_xelo:101' q(k) = deg2rad(-88);
          q[i_0] = -1.53588974175501;
        }
      }

      //  Knee can not be flexed to the front and it legs can be pulled up almost 180 deg 
      //  support knee (-180,0)deg
      // 'InvGeometricHZD_xelo:107' if q(3)>0
      if (q[2] > 0.0) {
        // 'InvGeometricHZD_xelo:108' q(3) = deg2rad(-2);
        q[2] = -0.034906585039886591;
      }

      // 'InvGeometricHZD_xelo:110' if q(3)<=-pi
      if (q[2] <= -3.1415926535897931) {
        // 'InvGeometricHZD_xelo:111' q(3) = deg2rad(-178);
        q[2] = -3.1066860685499065;
      }

      //  non-support knee (0,180)deg
      // 'InvGeometricHZD_xelo:114' if q(10)<0
      if (q[9] < 0.0) {
        // 'InvGeometricHZD_xelo:115' q(10) = deg2rad(2);
        q[9] = 0.034906585039886591;
      }

      // 'InvGeometricHZD_xelo:117' if q(10)>=pi
      if (q[9] >= 3.1415926535897931) {
        // 'InvGeometricHZD_xelo:118' q(10) = deg2rad(178);
        q[9] = 3.1066860685499065;
      }

      // robot = robot_move(robot,q);
      // G = robot.CoM;
      // Q = [state_v(robot);G(1);G(2)]; % Posiciones operacionales reales
      // 'InvGeometricHZD_xelo:125' T = DGM_TALOS_QY_xelo(q);
      walk_DGM_TALOS_QY_xelo(q, walk_B.T_o);

      // 'InvGeometricHZD_xelo:126' [G,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
      walk_compute2_com_xelo(walk_B.T_o, G, J_CoM, J_Ankle, crossM,
        walk_B.J_CoMs_c);

      // [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
      // 'InvGeometricHZD_xelo:128' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle); 
      walk_J_state_v_TALOS_xelo(walk_B.T_o, J_CoM, J_Ankle, walk_B.J_h_d);

      // 'InvGeometricHZD_xelo:130' h = state_v_TALOS_xelo(q,T,G);
      walk_state_v_TALOS_xelo(q, walk_B.T_o, G, h);

      // hp= J_h*qp;
      // 'InvGeometricHZD_xelo:133' Q=[h;G(1);G(2)];
      memcpy(&Q[0], &h[0], 28U * sizeof(real_T));
      Q[28] = G[0];
      Q[29] = G[1];

      // 'InvGeometricHZD_xelo:135' dQ = Qdes-Q;
      for (i = 0; i < 30; i++) {
        dQ[i] = Qdes[i] - Q[i];
      }

      // 'InvGeometricHZD_xelo:136' nQ = max(abs(dQ));
      walk_abs(dQ, varargin_1);
      nQ = varargin_1[0];
      for (i = 0; i < 29; i++) {
        tmp = varargin_1[i + 1];
        if (nQ < tmp) {
          nQ = tmp;
        }
      }
    }

    // q=robot.q;
    // Test
    //   figure;
    //   cla;
    //   robot_draw(robot,0,0);
    //   q
    //   pause
  }

  //
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function Tau=PID_control_init(q,qp,t)
  // disp("time = "+num2str(t)+" s")
  // global Kp_ini Ki_ini Kd_ini
  //  Kp_ini=1000*ones(30,1);
  //  Kd_ini=100*ones(30,1);
  //  Ki_ini=1*ones(30,1);
  //  % Kp_ini(1)=7000;
  //  % Kd_ini(1)=100;
  //  % Ki_ini(1)=10;
  //  Kp_ini(10:28)=Kp_ini(10:28)/50;
  //  Kd_ini(10:28)=Kd_ini(10:28)/50;
  //  Ki_ini(10:28)=Ki_ini(10:28)/50;
  //
  void walkModelClass::walk_PID_control_init(const real_T q[30], const real_T
    qp[30], real_T t, real_T Tau[30])
  {
    int32_T Kp_ini[30];
    real_T Ki_ini[30];
    real_T Kd_ini[30];
    boolean_T init;
    real_T Hd[30];
    real_T Hpd[30];
    real_T h[28];
    real_T Qd[30];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    int32_T i;
    real_T tmp_data[3];
    real_T J_CoM_0[2];
    real_T Kp_ini_0[30];
    int32_T i_0;
    int32_T tmp_size[2];
    real_T t_0;
    real_T t_1;

    // 'PID_control_init:16' if t<10
    if (t < 10.0) {
      // 'PID_control_init:18' Kp_ini=zeros(30,1);
      // 'PID_control_init:19' Ki_ini=zeros(30,1);
      // 'PID_control_init:20' Kd_ini=zeros(30,1);
      memset(&Kp_ini[0], 0, 30U * sizeof(int32_T));
      memset(&Ki_ini[0], 0, 30U * sizeof(real_T));
      memset(&Kd_ini[0], 0, 30U * sizeof(real_T));

      // 'PID_control_init:22' Kp_ini(1:12)=Kp_ini(1:12)+4000;
      for (i = 0; i < 12; i++) {
        Kp_ini[i] = 4000;
      }

      // 'PID_control_init:23' Kp_ini(13:14)=Kp_ini(13:14)+800;
      // 'PID_control_init:24' Kp_ini(15:16)=Kp_ini(15:16)+150;
      Kp_ini[12] += 800;
      Kp_ini[14] += 150;
      Kp_ini[13] += 800;
      Kp_ini[15] += 150;

      // 'PID_control_init:25' Kp_ini(17:30)=Kp_ini(17:30)+80;
      for (i = 0; i < 14; i++) {
        Kp_ini[16 + i] += 80;
      }

      // 'PID_control_init:27' Ki_ini(1:12)=Kp_ini(1:12)/100;
      for (i = 0; i < 12; i++) {
        Ki_ini[i] = static_cast<real_T>(Kp_ini[i]) / 100.0;
      }

      // 'PID_control_init:28' Ki_ini(13:14)=Kp_ini(13:14)/100;
      // 'PID_control_init:29' Ki_ini(15:16)=Kp_ini(15:16)/100;
      Ki_ini[12] = static_cast<real_T>(Kp_ini[12]) / 100.0;
      Ki_ini[14] = static_cast<real_T>(Kp_ini[14]) / 100.0;
      Ki_ini[13] = static_cast<real_T>(Kp_ini[13]) / 100.0;
      Ki_ini[15] = static_cast<real_T>(Kp_ini[15]) / 100.0;

      // 'PID_control_init:30' Ki_ini(17:30)=Kp_ini(17:30)/100;
      for (i = 0; i < 14; i++) {
        Ki_ini[i + 16] = static_cast<real_T>(Kp_ini[i + 16]) / 100.0;
      }
    } else {
      // 'PID_control_init:32' else
      //      Kp_ini=100*ones(30,1);
      //      Kp_ini(1)=Kp_ini(1)*1000;
      //      Kd_ini=10*ones(30,1);
      //      Ki_ini=1*ones(30,1);
      // 'PID_control_init:38' Kp_ini=zeros(30,1);
      memset(&Kp_ini[0], 0, 30U * sizeof(int32_T));

      // 'PID_control_init:39' Ki_ini=zeros(30,1);
      // 'PID_control_init:40' Kd_ini=zeros(30,1);
      // 'PID_control_init:42' Kp_ini(1)=1e5;
      Kp_ini[0] = 100000;

      // z
      // 'PID_control_init:43' Kp_ini(2:4)=Kp_ini(2:4)+1.5e4;
      // foot pos
      // 'PID_control_init:44' Kp_ini(5:7)=Kp_ini(5:7)+100;
      // foot ori
      // 'PID_control_init:45' Kp_ini(8:10)=Kp_ini(8:10)+1000;
      Kp_ini[1] += 15000;
      Kp_ini[4] += 100;
      Kp_ini[7] += 1000;
      Kp_ini[2] += 15000;
      Kp_ini[5] += 100;
      Kp_ini[8] += 1000;
      Kp_ini[3] += 15000;
      Kp_ini[6] += 100;
      Kp_ini[9] += 1000;

      // torso ori
      // 'PID_control_init:46' Kp_ini(11:12)=Kp_ini(11:12)+800;
      // 'PID_control_init:47' Kp_ini(13:14)=Kp_ini(13:14)+150;
      Kp_ini[10] += 800;
      Kp_ini[12] += 150;
      Kp_ini[11] += 800;
      Kp_ini[13] += 150;

      // 'PID_control_init:48' Kp_ini(15:28)=Kp_ini(15:28)+100;
      for (i = 0; i < 14; i++) {
        Kp_ini[14 + i] += 100;
      }

      // 'PID_control_init:49' Kp_ini(29:30)=Kp_ini(29:30)+1e5;
      Kp_ini[28] += 100000;
      Kp_ini[29] += 100000;

      // 'PID_control_init:51' Ki_ini=Kp_ini/10;
      // 'PID_control_init:52' Kd_ini=Kp_ini/100;
      for (i = 0; i < 30; i++) {
        Ki_ini[i] = static_cast<real_T>(Kp_ini[i]) / 10.0;
        Kd_ini[i] = static_cast<real_T>(Kp_ini[i]) / 100.0;
      }

      // Kd_ini(1)=Kd_ini(1)*10;
      // Kd_ini(29:30)=Kd_ini(29:30)*10;
    }

    // 'PID_control_init:62' init=false;
    init = false;

    // 'PID_control_init:63' if isempty(previous_time)
    if (!walk_DW.previous_time_not_empty) {
      // 'PID_control_init:64' previous_time=0;
      walk_DW.previous_time_not_empty = true;

      // 'PID_control_init:65' accumulated_error=zeros(30,1);
      // 'PID_control_init:66' accumulated_error2=zeros(30,1);
      // 'PID_control_init:67' init=true;
      init = true;
    }

    //  Desired
    // 'PID_control_init:70' Hd=zeros(30,1);
    // 'PID_control_init:71' Hpd=zeros(30,1);
    // 'PID_control_init:72' time=10;
    // 'PID_control_init:74' for k=1:30
    if (t < 10.0) {
      t_0 = t;
      t_1 = t;
    } else {
      t_0 = 10.0;
      t_1 = 10.0;
    }

    for (i = 0; i < 30; i++) {
      // 'PID_control_init:75' Hd(k)=polyval(h_init(:,k),min(t,time));
      Hd[i] = walk_polyval(&walk_DW.h_init[i << 2], t_0);

      // 'PID_control_init:76' Hpd(k)=polyval(polyder(h_init(:,k)),min(t,time)); 
      walk_polyder(&walk_DW.h_init[i << 2], tmp_data, tmp_size);
      Hpd[i] = walk_polyval_a(tmp_data, tmp_size, t_1);
    }

    //  Actual
    // 'PID_control_init:80' T = DGM_TALOS_QY_xelo(q);
    walk_DGM_TALOS_QY_xelo(q, walk_B.T);

    // 'PID_control_init:81' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_compute2_com_xelo(walk_B.T, tmp_data, J_CoM, J_Ankle, crossM,
      walk_B.J_CoMs_m);

    // 'PID_control_init:82' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    // 'PID_control_init:83' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T, J_CoM, J_Ankle, walk_B.J_h_j);

    // 'PID_control_init:85' h = state_v_TALOS_xelo(q,T,CoM);
    walk_state_v_TALOS_xelo(q, walk_B.T, tmp_data, h);

    // 'PID_control_init:86' hp= J_h*qp;
    // 'PID_control_init:89' H=[h;qf];
    // 'PID_control_init:90' Hp=[hp;qfp];
    //  fprintf("pied x = %f -%f \n",Hd(2),H(2))
    //  fprintf("pied y = %f -%f \n",Hd(3),H(3))
    //  fprintf("pied z = %f -%f \n",Hd(4),H(4))
    //  fprintf("CoM x = %f -%f \n",Hd(29),H(29))
    //  fprintf("CoM y = %f -%f \n",Hd(30),H(30))
    //  fprintf("CoM z = %f -%f \n",Hd(1),H(1))
    //  Torque Computation
    //  Qp=JQ.qp, Qp^T.F=qp^T.Tau -> qp^T.JQ^T.F=qp^T.Tau -> Tau=JQ^T.F
    // 'PID_control_init:102' JQ=zeros(30,30);
    memset(&walk_B.JQ[0], 0, 900U * sizeof(real_T));

    // 'PID_control_init:103' JQ(1:28,:)=J_h;
    // 'PID_control_init:104' JQ(29:30,:)=J_CoM(1:2,:);
    for (i = 0; i < 30; i++) {
      memcpy(&walk_B.JQ[i * 30], &walk_B.J_h_j[i * 28], 28U * sizeof(real_T));
      walk_B.JQ[28 + 30 * i] = J_CoM[3 * i];
      walk_B.JQ[29 + 30 * i] = J_CoM[3 * i + 1];
    }

    // 'PID_control_init:106' Q_initial=[0;0.0500000000000000;-0.100000000000000;0.0500000000000000;0;0;0;0;-0.0500000000000000;0.100000000000000;-0.0500000000000000;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0] 
    // 'PID_control_init:107' Qd = InvGeometricHZD_xelo(Q_initial,Hd(29:30),Hd(1:28)); 
    walk_InvGeometricHZD_xelo(&Hd[28], &Hd[0], Qd);

    // 'PID_control_init:110' if init
    if (init) {
      // 'PID_control_init:111' Tau=Kp_ini.*(Qd-q);
      for (i = 0; i < 30; i++) {
        Tau[i] = (Qd[i] - q[i]) * static_cast<real_T>(Kp_ini[i]);
      }

      // 'PID_control_init:112' previous_time=t;
      walk_DW.previous_time = t;
    } else {
      // 'PID_control_init:113' else
      // 'PID_control_init:114' if t<10
      if (t < 10.0) {
        // 'PID_control_init:115' error=(Qd-q);
        // 'PID_control_init:116' accumulated_error=accumulated_error+error*(t-previous_time); 
        t_0 = t - walk_DW.previous_time;

        // 'PID_control_init:117' Tau=Kp_ini.*error+Ki_ini.*accumulated_error;
        for (i = 0; i < 30; i++) {
          t_1 = Qd[i] - q[i];
          walk_DW.accumulated_error[i] += t_1 * t_0;
          Tau[i] = static_cast<real_T>(Kp_ini[i]) * t_1 + Ki_ini[i] *
            walk_DW.accumulated_error[i];
          Qd[i] = t_1;
        }

        // 'PID_control_init:118' previous_time=t;
        walk_DW.previous_time = t;
      } else {
        // 'PID_control_init:119' else
        // 'PID_control_init:120' error=(Hd-H);
        for (i = 0; i < 28; i++) {
          Qd[i] = Hd[i] - h[i];
        }

        Qd[28] = Hd[28] - tmp_data[0];
        Qd[29] = Hd[29] - tmp_data[1];

        // 'PID_control_init:121' accumulated_error2=accumulated_error2+error*(t-previous_time); 
        t_0 = t - walk_DW.previous_time;
        for (i = 0; i < 30; i++) {
          walk_DW.accumulated_error2[i] += Qd[i] * t_0;
        }

        // 'PID_control_init:122' F=Kp_ini.*error+Kd_ini.*(Hpd-Hp)+Ki_ini.*accumulated_error2; 
        // 'PID_control_init:123' previous_time=t;
        walk_DW.previous_time = t;

        // 'PID_control_init:124' Tau=transpose(JQ)*F;
        for (i = 0; i < 28; i++) {
          h[i] = 0.0;
          for (i_0 = 0; i_0 < 30; i_0++) {
            h[i] += walk_B.J_h_j[28 * i_0 + i] * qp[i_0];
          }
        }

        for (i = 0; i < 2; i++) {
          J_CoM_0[i] = 0.0;
          for (i_0 = 0; i_0 < 30; i_0++) {
            J_CoM_0[i] += J_CoM[3 * i_0 + i] * qp[i_0];
          }
        }

        memcpy(&Hd[0], &h[0], 28U * sizeof(real_T));
        Hd[28] = J_CoM_0[0];
        Hd[29] = J_CoM_0[1];
        for (i = 0; i < 30; i++) {
          Kp_ini_0[i] = ((Hpd[i] - Hd[i]) * Kd_ini[i] + static_cast<real_T>
                         (Kp_ini[i]) * Qd[i]) + Ki_ini[i] *
            walk_DW.accumulated_error2[i];
        }

        for (i = 0; i < 30; i++) {
          Tau[i] = 0.0;
          for (i_0 = 0; i_0 < 30; i_0++) {
            Tau[i] += walk_B.JQ[30 * i + i_0] * Kp_ini_0[i_0];
          }
        }
      }
    }

    //  for k=1:length(H)
    //      fprintf("error %f = %f \n",k,Hd(k)-H(k))
    //  end
    //  F=zeros(30,1);
    //  if init
    //      F=Kp_ini.*(Hd-H)+Kd_ini.*(Hpd-Hp);
    //      previous_time=t;
    //  else
    //      error=(Hd-H);
    //      accumulated_error=accumulated_error+error*(t-previous_time);
    //      F=Kp_ini.*error+Kd_ini.*(Hpd-Hp)+Ki_ini.*accumulated_error;
    //      previous_time=t;
    //  end
    //
    //  Tau=transpose(JQ)*F;
    // Tau=JQ*F;
  }
}

namespace renoir_controller
{
  // Model step function
  void walkModelClass::step(real_T (&arg_q)[32], real_T (&arg_qp)[32], real_T
    (&arg_torque)[32])
  {
    real_T q[30];
    real_T t;
    boolean_T update;
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T phi;
    real_T unusedU0;
    real_T unusedU1;
    real_T unusedU2;
    real_T unusedU3;
    real_T unusedU4;
    real_T Tau[30];
    real_T q_0[30];
    real_T qp[30];
    int32_T i;
    real_T qf[3];
    real_T CoM_0[2];
    real_T tmp;
    real_T tmp_0;
    real_T tmp_1;
    real_T tmp_2;
    int32_T i_0;

    // MATLAB Function: '<Root>/mapping' incorporates:
    //   Inport: '<Root>/q'
    //   Inport: '<Root>/qp'

    // MATLAB Function 'mapping': '<S5>:1'
    // '<S5>:1:3' q_new=map_joints_in(q);
    // 'map_joints_in:3' q_new=zeros(30,1);
    memset(&q_0[0], 0, 30U * sizeof(real_T));

    //  q_new(7:12)=[q(6);q(5);q(4);q(3);q(2);q(1)]; % leg left
    //  q_new(1:6)=q(7:12); % leg right
    // 'map_joints_in:7' q_new(7:12)=q(1:6);
    for (i = 0; i < 6; i++) {
      q_0[i + 6] = arg_q[i];
    }

    //  leg left
    // 'map_joints_in:8' q_new(1:6)=-[q(12);q(11);q(10);q(9);q(8);q(7)];
    q_0[0] = -arg_q[11];
    q_0[1] = -arg_q[10];
    q_0[2] = -arg_q[9];
    q_0[3] = -arg_q[8];
    q_0[4] = -arg_q[7];
    q_0[5] = -arg_q[6];

    //  leg right
    // 'map_joints_in:9' q_new(13:14)=q(13:14);
    q_0[12] = arg_q[12];
    q_0[13] = arg_q[13];

    //  torso
    // 'map_joints_in:10' q_new(24:30)=q(15:21);
    //  arm left
    // 'map_joints_in:11' q_new(17:23)=q(23:29);
    for (i = 0; i < 7; i++) {
      q_0[i + 23] = arg_q[i + 14];
      q_0[i + 16] = arg_q[i + 22];
    }

    //  arm right
    // 'map_joints_in:12' q_new(15:16)=q(31:32);
    q_0[14] = arg_q[30];
    q_0[15] = arg_q[31];

    //  head
    //  q_new(1:6)= -[q(12); q(11); q(10); q(9); q(8); q(7)];  %leg right
    //  q_new(7:12)= [q(1); q(2); q(3); q(4); q(5); q(6)];  %leg left
    // q_new(1:6)=[]; % leg right
    //  Ros : base ->torso bot
    // wrist zxy
    // shoulder zxz
    // ankle yx
    // hip zxy
    // head yz
    // torso zy
    // leg left : 1-6
    // right leg : 7-12
    // torso : 13-14
    // left arm : 15-21
    // left gripper : 22
    // right arm : 23-29
    // right gripper : 30
    // head : 31-32
    // '<S5>:1:4' qp_new=map_joints_in(qp);
    // 'map_joints_in:3' q_new=zeros(30,1);
    memset(&qp[0], 0, 30U * sizeof(real_T));

    //  q_new(7:12)=[q(6);q(5);q(4);q(3);q(2);q(1)]; % leg left
    //  q_new(1:6)=q(7:12); % leg right
    // 'map_joints_in:7' q_new(7:12)=q(1:6);
    for (i = 0; i < 6; i++) {
      qp[i + 6] = arg_qp[i];
    }

    //  leg left
    // 'map_joints_in:8' q_new(1:6)=-[q(12);q(11);q(10);q(9);q(8);q(7)];
    qp[0] = -arg_qp[11];
    qp[1] = -arg_qp[10];
    qp[2] = -arg_qp[9];
    qp[3] = -arg_qp[8];
    qp[4] = -arg_qp[7];
    qp[5] = -arg_qp[6];

    //  leg right
    // 'map_joints_in:9' q_new(13:14)=q(13:14);
    qp[12] = arg_qp[12];
    qp[13] = arg_qp[13];

    //  torso
    // 'map_joints_in:10' q_new(24:30)=q(15:21);
    //  arm left
    // 'map_joints_in:11' q_new(17:23)=q(23:29);
    for (i = 0; i < 7; i++) {
      qp[i + 23] = arg_qp[i + 14];
      qp[i + 16] = arg_qp[i + 22];
    }

    //  arm right
    // 'map_joints_in:12' q_new(15:16)=q(31:32);
    qp[14] = arg_qp[30];
    qp[15] = arg_qp[31];

    // End of MATLAB Function: '<Root>/mapping'

    // MATLAB Function: '<Root>/swapping'
    //  head
    //  q_new(1:6)= -[q(12); q(11); q(10); q(9); q(8); q(7)];  %leg right
    //  q_new(7:12)= [q(1); q(2); q(3); q(4); q(5); q(6)];  %leg left
    // q_new(1:6)=[]; % leg right
    //  Ros : base ->torso bot
    // wrist zxy
    // shoulder zxz
    // ankle yx
    // hip zxy
    // head yz
    // torso zy
    // leg left : 1-6
    // right leg : 7-12
    // torso : 13-14
    // left arm : 15-21
    // left gripper : 22
    // right arm : 23-29
    // right gripper : 30
    // head : 31-32
    // MATLAB Function 'swapping': '<S7>:1'
    memcpy(&Tau[0], &qp[0], 30U * sizeof(real_T));
    memcpy(&q[0], &q_0[0], 30U * sizeof(real_T));

    // '<S7>:1:5' if swap
    if (walk_DW.swap != 0.0) {
      // '<S7>:1:6' q=swap_joints(q);
      // 'swap_joints:3' q(1:12)=[q(12);-q(11);-q(10);-q(9);q(8);q(7);q(6);q(5);-q(4);-q(3);-q(2);q(1)]; 
      q[0] = q_0[11];
      q[1] = -q_0[10];
      q[2] = -q_0[9];
      q[3] = -q_0[8];
      q[4] = q_0[7];
      q[5] = q_0[6];
      q[6] = q_0[5];
      q[7] = q_0[4];
      q[8] = -q_0[3];
      q[9] = -q_0[2];
      q[10] = -q_0[1];
      q[11] = q_0[0];

      //  q+ = E*q-
      // 'swap_joints:4' q(13)=-q(13);
      q[12] = -q[12];

      //  The twist of the trunk change since the Y axis direction changed, i.e. Y(k+1) = -Y(k) 
      //  now the positive twist is from -Y to X instead of X to Y (or viceversa) 
      // 'swap_joints:6' q(16)=-q(16);
      q[15] = -q[15];

      //  Neck_yaw
      // 'swap_joints:7' q([18,25])=[q(25),q(18)];
      t = q[17];
      q[17] = q[24];
      q[24] = t;

      //  Swap Shoulders Pitch
      //  CHECK THIS SWAPING....
      // 'swap_joints:9' q([17,19,20,21,22,23,24,26,27,28,29,30])=[-q(24),-q(26),q(27),-q(28),-q(29),q(30),-q(17),-q(19),q(20),-q(21),-q(22),q(23)]; 
      t = q[25];
      phi = q[26];
      unusedU0 = q[27];
      unusedU1 = q[28];
      unusedU2 = q[29];
      unusedU3 = q[16];
      unusedU4 = q[18];
      tmp = q[19];
      tmp_0 = q[20];
      tmp_1 = q[21];
      tmp_2 = q[22];
      q[16] = -q[23];
      q[18] = -t;
      q[19] = phi;
      q[20] = -unusedU0;
      q[21] = -unusedU1;
      q[22] = unusedU2;
      q[23] = -unusedU3;
      q[25] = -unusedU4;
      q[26] = tmp;
      q[27] = -tmp_0;
      q[28] = -tmp_1;
      q[29] = tmp_2;

      //  Swap Shoulders Yaw and rest of the arm
      // '<S7>:1:7' qp=swap_joints(qp);
      // 'swap_joints:3' q(1:12)=[q(12);-q(11);-q(10);-q(9);q(8);q(7);q(6);q(5);-q(4);-q(3);-q(2);q(1)]; 
      Tau[0] = qp[11];
      Tau[1] = -qp[10];
      Tau[2] = -qp[9];
      Tau[3] = -qp[8];
      Tau[4] = qp[7];
      Tau[5] = qp[6];
      Tau[6] = qp[5];
      Tau[7] = qp[4];
      Tau[8] = -qp[3];
      Tau[9] = -qp[2];
      Tau[10] = -qp[1];
      Tau[11] = qp[0];

      //  q+ = E*q-
      // 'swap_joints:4' q(13)=-q(13);
      Tau[12] = -Tau[12];

      //  The twist of the trunk change since the Y axis direction changed, i.e. Y(k+1) = -Y(k) 
      //  now the positive twist is from -Y to X instead of X to Y (or viceversa) 
      // 'swap_joints:6' q(16)=-q(16);
      Tau[15] = -Tau[15];

      //  Neck_yaw
      // 'swap_joints:7' q([18,25])=[q(25),q(18)];
      t = Tau[17];
      Tau[17] = Tau[24];
      Tau[24] = t;

      //  Swap Shoulders Pitch
      //  CHECK THIS SWAPING....
      // 'swap_joints:9' q([17,19,20,21,22,23,24,26,27,28,29,30])=[-q(24),-q(26),q(27),-q(28),-q(29),q(30),-q(17),-q(19),q(20),-q(21),-q(22),q(23)]; 
      t = Tau[25];
      phi = Tau[26];
      unusedU0 = Tau[27];
      unusedU1 = Tau[28];
      unusedU2 = Tau[29];
      unusedU3 = Tau[16];
      unusedU4 = Tau[18];
      tmp = Tau[19];
      tmp_0 = Tau[20];
      tmp_1 = Tau[21];
      tmp_2 = Tau[22];
      Tau[16] = -Tau[23];
      Tau[18] = -t;
      Tau[19] = phi;
      Tau[20] = -unusedU0;
      Tau[21] = -unusedU1;
      Tau[22] = unusedU2;
      Tau[23] = -unusedU3;
      Tau[25] = -unusedU4;
      Tau[26] = tmp;
      Tau[27] = -tmp_0;
      Tau[28] = -tmp_1;
      Tau[29] = tmp_2;

      //  Swap Shoulders Yaw and rest of the arm
    }

    memcpy(&q_0[0], &q[0], 30U * sizeof(real_T));
    memcpy(&qp[0], &Tau[0], 30U * sizeof(real_T));

    // MATLAB Function: '<Root>/clock'
    // MATLAB Function 'clock': '<S2>:1'
    // '<S2>:1:5' if isempty(t)
    if (!walk_DW.t_not_empty) {
      // '<S2>:1:6' t=0;
      walk_DW.t = 0.0;
      walk_DW.t_not_empty = true;
    } else {
      // '<S2>:1:7' else
      // '<S2>:1:8' t=t+dt_;
      walk_DW.t += 0.001;
    }

    // MATLAB Function: '<Root>/gait_update' incorporates:
    //   MATLAB Function: '<Root>/clock'
    //   MATLAB Function: '<Root>/swapping'

    // '<S2>:1:11' t_out=t
    // MATLAB Function 'gait_update': '<S3>:1'
    t = walk_DW.t;

    // '<S3>:1:5' if isempty(count)
    // '<S3>:1:8' update=false;
    update = false;

    // '<S3>:1:9' if pos_init
    if (walk_DW.pos_init != 0.0) {
      // '<S3>:1:10' if robot_init
      if (walk_DW.robot_init != 0.0) {
        // '<S3>:1:11' set_h_init(q,qp);
        walk_set_h_init(q, Tau);

        // '<S3>:1:12' robot_init=0;
        walk_DW.robot_init = 0.0;
      }

      // '<S3>:1:14' if Initial_test(q,qp)||(t>20)
      if (walk_Initial_test(q, Tau) || (walk_DW.t > 20.0)) {
        // '<S3>:1:15' pos_init=0;
        walk_DW.pos_init = 0.0;

        // '<S3>:1:16' first=1;
        walk_DW.first = 1.0;

        // '<S3>:1:17' T0=t;
        walk_DW.T0 = walk_DW.t;
        walk_DW.T0_not_empty = true;
      }
    }

    // '<S3>:1:20' if ~isempty(T0)
    if (walk_DW.T0_not_empty) {
      // '<S3>:1:21' t=t-T0;
      t = walk_DW.t - walk_DW.T0;
    }

    // '<S3>:1:23' if first
    if ((walk_DW.first != 0.0) && (t / walk_DW.T_des >= 1.0)) {
      // '<S3>:1:24' phi=t/T_des;
      // '<S3>:1:25' if phi>=1
      // '<S3>:1:26' update=true;
      update = true;

      // '<S3>:1:27' first=0;
      walk_DW.first = 0.0;

      // '<S3>:1:28' cyclic=1;
      walk_DW.cyclic = 1.0;
    }

    // '<S3>:1:32' if cyclic
    if (walk_DW.cyclic != 0.0) {
      // '<S3>:1:33' T = DGM_TALOS_QY_xelo(q);
      // '<S3>:1:34' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T);
      walk_DGM_TALOS_QY_xelo(q, walk_B.dv0);
      walk_compute2_com_xelo(walk_B.dv0, CoM, J_CoM, J_Ankle, crossM,
        walk_B.J_CoMs);

      // '<S3>:1:35' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
      // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
      // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
      // '<S3>:1:36' [phi,~,~,~,~,~]=get_phi_and_diff_xelo(qf);
      CoM_0[0] = CoM[0];
      CoM_0[1] = CoM[1];
      walk_get_phi_and_diff_xelo(CoM_0, &phi, &unusedU0, &unusedU1, &unusedU2,
        &unusedU3, &unusedU4);

      // '<S3>:1:36' ~
      // '<S3>:1:37' if phi>=1
      if (phi >= 1.0) {
        // '<S3>:1:38' if count<10
        if (walk_DW.count < 10.0) {
          // '<S3>:1:39' update=true;
          update = true;

          // '<S3>:1:40' count=count+1;
          walk_DW.count++;
        } else {
          // '<S3>:1:41' else
          // '<S3>:1:42' cyclic=0;
          walk_DW.cyclic = 0.0;

          // '<S3>:1:43' last=1;
          walk_DW.last = 1.0;

          // '<S3>:1:44' set_trajectory_last_f(X)
          walk_set_trajectory_last_f(walk_ConstP.gait_update_X);

          // '<S3>:1:45' swap=1-swap;
          walk_DW.swap = 1.0 - walk_DW.swap;
        }
      }
    }

    // '<S3>:1:49' if last
    if ((walk_DW.last != 0.0) && (t / walk_DW.T_des >= 1.0)) {
      // '<S3>:1:50' phi=t/T_des;
      // '<S3>:1:51' if phi>=1
      // '<S3>:1:52' last=0;
      walk_DW.last = 0.0;

      // '<S3>:1:53' stop=1;
      walk_DW.stop = 1.0;
    }

    // '<S3>:1:57' if update
    if (update) {
      // data=load("XKNames2.mat");
      // '<S3>:1:59' Names=convert_data();
      // Correction_gait_K(data.X,data.K,data.Names,q,qp);
      // '<S3>:1:61' Correction_gait_K(X,K,Names,q,qp);
      walk_Correction_gait_K(walk_ConstP.gait_update_X,
        walk_ConstP.gait_update_K, q, Tau);
    }

    // MATLAB Function: '<Root>/update_phi_coeff' incorporates:
    //   MATLAB Function: '<Root>/gait_update'

    // MATLAB Function 'update_phi_coeff': '<S8>:1'
    // '<S8>:1:6' if update
    if (update) {
      // '<S8>:1:7' q=swap_joints(q);
      walk_swap_joints(q_0);

      // '<S8>:1:8' qp=swap_joints(qp);
      walk_swap_joints(qp);

      // '<S8>:1:9' T = DGM_TALOS_QY_xelo(q);
      // '<S8>:1:10' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T);
      walk_DGM_TALOS_QY_xelo(q_0, walk_B.dv0);
      walk_compute2_com_xelo(walk_B.dv0, CoM, J_CoM, J_Ankle, crossM,
        walk_B.J_CoMs);

      // '<S8>:1:11' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
      // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
      // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
      // '<S8>:1:13' y0=[qf(1); qf(2); qfp(1)];
      // '<S8>:1:14' phi_coeff=get_phi_coeff(y0);
      for (i = 0; i < 2; i++) {
        CoM_0[i] = 0.0;
        for (i_0 = 0; i_0 < 30; i_0++) {
          CoM_0[i] += J_CoM[3 * i_0 + i] * qp[i_0];
        }
      }

      qf[0] = CoM[0];
      qf[1] = CoM[1];
      qf[2] = CoM_0[0];
      walk_get_phi_coeff(qf, &phi, &unusedU0, &unusedU1, &unusedU2, &unusedU3,
                         &unusedU4);

      // '<S8>:1:15' swap=1-swap;
      walk_DW.swap = 1.0 - walk_DW.swap;
    }

    // End of MATLAB Function: '<Root>/update_phi_coeff'

    // MATLAB Function: '<Root>/Compute_Tau' incorporates:
    //   MATLAB Function: '<Root>/gait_update'

    // MATLAB Function 'Compute_Tau': '<S1>:1'
    // '<S1>:1:5' fprintf("time = %f s \n",t)
    printf("time = %f s \n", t);
    fflush(stdout);

    // '<S1>:1:6' if pos_init
    if (walk_DW.pos_init != 0.0) {
      // '<S1>:1:7' Tau = PID_control_init(q,qp,t);
      walk_PID_control_init(q_0, qp, t, Tau);
    } else if (walk_DW.first != 0.0) {
      // '<S1>:1:8' elseif first
      // '<S1>:1:9' Tau = Time_ZMP_control(q,qp,t);
      walk_Time_ZMP_control(q_0, qp, t, Tau);
    } else if (walk_DW.cyclic != 0.0) {
      // '<S1>:1:10' elseif cyclic
      // '<S1>:1:11' Tau = Phase_control(q,qp);
      walk_Phase_control(q_0, qp, Tau);
    } else if (walk_DW.last != 0.0) {
      // '<S1>:1:12' elseif last
      // '<S1>:1:13' Tau = Time_ZMP_control(q,qp,t);
      walk_Time_ZMP_control(q_0, qp, t, Tau);
    } else if (walk_DW.stop != 0.0) {
      // '<S1>:1:14' elseif stop
      // '<S1>:1:15' Tau = PID_control(q,qp,t,1,xyT_end(1:2));
      walk_PID_control(q_0, t, &walk_DW.xyT_end[0], Tau);
    } else {
      // '<S1>:1:16' else
      // '<S1>:1:17' Tau=zeros(30,1);
      memset(&Tau[0], 0, 30U * sizeof(real_T));
    }

    // End of MATLAB Function: '<Root>/Compute_Tau'

    // MATLAB Function: '<Root>/swap_torques'
    memcpy(&q_0[0], &Tau[0], 30U * sizeof(real_T));

    // MATLAB Function 'swap_torques': '<S6>:1'
    // '<S6>:1:5' if swap
    if (walk_DW.swap != 0.0) {
      // '<S6>:1:6' Tau=swap_joints(Tau);
      // 'swap_joints:3' q(1:12)=[q(12);-q(11);-q(10);-q(9);q(8);q(7);q(6);q(5);-q(4);-q(3);-q(2);q(1)]; 
      q_0[0] = Tau[11];
      q_0[1] = -Tau[10];
      q_0[2] = -Tau[9];
      q_0[3] = -Tau[8];
      q_0[4] = Tau[7];
      q_0[5] = Tau[6];
      q_0[6] = Tau[5];
      q_0[7] = Tau[4];
      q_0[8] = -Tau[3];
      q_0[9] = -Tau[2];
      q_0[10] = -Tau[1];
      q_0[11] = Tau[0];

      //  q+ = E*q-
      // 'swap_joints:4' q(13)=-q(13);
      q_0[12] = -q_0[12];

      //  The twist of the trunk change since the Y axis direction changed, i.e. Y(k+1) = -Y(k) 
      //  now the positive twist is from -Y to X instead of X to Y (or viceversa) 
      // 'swap_joints:6' q(16)=-q(16);
      q_0[15] = -q_0[15];

      //  Neck_yaw
      // 'swap_joints:7' q([18,25])=[q(25),q(18)];
      t = q_0[17];
      q_0[17] = q_0[24];
      q_0[24] = t;

      //  Swap Shoulders Pitch
      //  CHECK THIS SWAPING....
      // 'swap_joints:9' q([17,19,20,21,22,23,24,26,27,28,29,30])=[-q(24),-q(26),q(27),-q(28),-q(29),q(30),-q(17),-q(19),q(20),-q(21),-q(22),q(23)]; 
      t = q_0[25];
      phi = q_0[26];
      unusedU0 = q_0[27];
      unusedU1 = q_0[28];
      unusedU2 = q_0[29];
      unusedU3 = q_0[16];
      unusedU4 = q_0[18];
      tmp = q_0[19];
      tmp_0 = q_0[20];
      tmp_1 = q_0[21];
      tmp_2 = q_0[22];
      q_0[16] = -q_0[23];
      q_0[18] = -t;
      q_0[19] = phi;
      q_0[20] = -unusedU0;
      q_0[21] = -unusedU1;
      q_0[22] = unusedU2;
      q_0[23] = -unusedU3;
      q_0[25] = -unusedU4;
      q_0[26] = tmp;
      q_0[27] = -tmp_0;
      q_0[28] = -tmp_1;
      q_0[29] = tmp_2;

      //  Swap Shoulders Yaw and rest of the arm
    }

    // End of MATLAB Function: '<Root>/swap_torques'

    // MATLAB Function: '<Root>/map_torques'
    memcpy(&Tau[0], &q_0[0], 30U * sizeof(real_T));

    // MATLAB Function 'map_torques': '<S4>:1'
    // '<S4>:1:3' Tau(15)=0;
    Tau[14] = 0.0;

    // position control head
    // '<S4>:1:4' Tau(16)=0;
    Tau[15] = 0.0;

    // Outport: '<Root>/torque' incorporates:
    //   MATLAB Function: '<Root>/map_torques'

    // position control head
    // '<S4>:1:6' Tau_new=map_joints_out(Tau);
    // 'map_joints_out:3' q_new=zeros(32,1);
    memset(&arg_torque[0], 0, sizeof(real_T) << 5U);

    // MATLAB Function: '<Root>/map_torques' incorporates:
    //   Outport: '<Root>/torque'

    //  q_new(1:6)=[q(12);q(11);q(10);q(9);q(8);q(7)]; % leg left
    //  q_new(7:12)=q(1:6); % leg right
    // 'map_joints_out:7' q_new(1:6)=q(7:12);
    for (i = 0; i < 6; i++) {
      arg_torque[i] = Tau[i + 6];
    }

    //  leg left
    // 'map_joints_out:8' q_new(7:12)=-[q(6);q(5);q(4);q(3);q(2);q(1)];
    arg_torque[6] = -q_0[5];
    arg_torque[7] = -q_0[4];
    arg_torque[8] = -q_0[3];
    arg_torque[9] = -q_0[2];
    arg_torque[10] = -q_0[1];
    arg_torque[11] = -q_0[0];

    //  leg right
    // 'map_joints_out:9' q_new(13:14)=q(13:14);
    arg_torque[12] = Tau[12];
    arg_torque[13] = Tau[13];

    //  torso
    // 'map_joints_out:10' q_new(15:21)=q(24:30);
    //  arm left
    // 'map_joints_out:11' q_new(22)=0;
    arg_torque[21] = 0.0;

    //  gripper left
    // 'map_joints_out:12' q_new(23:29)=q(17:23);
    for (i = 0; i < 7; i++) {
      arg_torque[i + 14] = Tau[i + 23];
      arg_torque[i + 22] = Tau[i + 16];
    }

    //  arm right
    // 'map_joints_out:13' q_new(30)=0;
    arg_torque[29] = 0.0;

    //  gripper right
    // 'map_joints_out:14' q_new(31:32)=q(15:16);
    arg_torque[30] = 0.0;
    arg_torque[31] = 0.0;

    //  head
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

    {
      int32_T i;

      // Start for DataStoreMemory: '<Root>/Data Store Memory12'
      for (i = 0; i < 7; i++) {
        walk_DW.hd12[i] = walk_ConstP.DataStoreMemory12_InitialValue[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory12'
      for (i = 0; i < 6; i++) {
        // Start for DataStoreMemory: '<Root>/Data Store Memory15'
        walk_DW.hd15[i] = walk_ConstP.DataStoreMemory15_InitialValue[i];

        // Start for DataStoreMemory: '<Root>/Data Store Memory16'
        walk_DW.hd16[i] = walk_ConstP.DataStoreMemory16_InitialValue[i];
      }

      // Start for DataStoreMemory: '<Root>/Data Store Memory18'
      for (i = 0; i < 7; i++) {
        walk_DW.hd18[i] = walk_ConstP.pooled3[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory18'
      for (i = 0; i < 6; i++) {
        // Start for DataStoreMemory: '<Root>/Data Store Memory21'
        walk_DW.hd21[i] = walk_ConstP.pooled4[i];

        // Start for DataStoreMemory: '<Root>/Data Store Memory22'
        walk_DW.hd22[i] = walk_ConstP.DataStoreMemory22_InitialValue[i];

        // Start for DataStoreMemory: '<Root>/Data Store Memory23'
        walk_DW.hd23[i] = walk_ConstP.DataStoreMemory23_InitialValue[i];
      }

      // Start for DataStoreMemory: '<Root>/Data Store Memory25'
      for (i = 0; i < 7; i++) {
        walk_DW.hd25[i] = walk_ConstP.pooled3[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory25'

      // Start for DataStoreMemory: '<Root>/Data Store Memory28'
      for (i = 0; i < 6; i++) {
        walk_DW.hd28[i] = walk_ConstP.pooled4[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory28'

      // Start for DataStoreMemory: '<Root>/Data Store Memory29'
      for (i = 0; i < 7; i++) {
        walk_DW.hd4[i] = walk_ConstP.DataStoreMemory29_InitialValue[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory29'

      // Start for DataStoreMemory: '<Root>/Data Store Memory3'
      walk_DW.CC = 18.131077687499992;

      // Start for DataStoreMemory: '<Root>/Data Store Memory38'
      memcpy(&walk_DW.torso_f[0], &walk_ConstP.DataStoreMemory38_InitialValue[0],
             sizeof(real_T) << 4U);

      // Start for DataStoreMemory: '<Root>/Data Store Memory4'
      walk_DW.DD = -1.3054426875;

      // Start for DataStoreMemory: '<Root>/Data Store Memory39'
      memcpy(&walk_DW.ant[0], &walk_ConstP.DataStoreMemory39_InitialValue[0],
             49U * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory40'
      memcpy(&walk_DW.act[0], &walk_ConstP.DataStoreMemory40_InitialValue[0],
             49U * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory41'
      memcpy(&walk_DW.mass_stack[0],
             &walk_ConstP.DataStoreMemory41_InitialValue[0], 49U * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory42'
      memcpy(&walk_DW.I_stack[0], &walk_ConstP.DataStoreMemory42_InitialValue[0],
             441U * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory43'
      memcpy(&walk_DW.CoM_stack[0], &walk_ConstP.DataStoreMemory43_InitialValue
             [0], 147U * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory44'
      walk_DW.mass_tot = 94.999998;

      // Start for DataStoreMemory: '<Root>/Data Store Memory45'
      memcpy(&walk_DW.Ia[0], &walk_ConstP.DataStoreMemory45_InitialValue[0], 30U
             * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory46'
      walk_DW.Dx = 0.0079330887086876464;

      // Start for DataStoreMemory: '<Root>/Data Store Memory47'
      walk_DW.Dy = 3.9642144703714151E-5;

      // Start for DataStoreMemory: '<Root>/Data Store Memory48'
      walk_DW.S = 0.3;

      // Start for DataStoreMemory: '<Root>/Data Store Memory49'
      walk_DW.D = 0.2;

      // Start for DataStoreMemory: '<Root>/Data Store Memory50'
      walk_DW.C = 3.0;

      // Start for DataStoreMemory: '<Root>/Data Store Memory51'
      walk_DW.T_des = 1.7;

      // Start for DataStoreMemory: '<Root>/Data Store Memory52'
      memcpy(&walk_DW.Kp[0], &walk_ConstP.DataStoreMemory52_InitialValue[0], 28U
             * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory53'
      memcpy(&walk_DW.Kv[0], &walk_ConstP.DataStoreMemory53_InitialValue[0], 28U
             * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory57'
      walk_DW.pos_init = 1.0;

      // Start for DataStoreMemory: '<Root>/Data Store Memory58'
      for (i = 0; i < 5; i++) {
        walk_DW.x_coeff[i] = walk_ConstP.DataStoreMemory58_InitialValue[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory58'

      // Start for DataStoreMemory: '<Root>/Data Store Memory59'
      walk_DW.y_coeff[0] = 0.26375839089337633;
      walk_DW.y_coeff[1] = -0.19371874874867259;
      walk_DW.y_coeff[2] = 0.0;
      walk_DW.y_coeff[3] = 0.03;

      // Start for DataStoreMemory: '<Root>/Data Store Memory60'
      walk_DW.xyT_ini[0] = 0.0;

      // Start for DataStoreMemory: '<Root>/Data Store Memory63'
      walk_DW.xyT_end[0] = 0.035;

      // Start for DataStoreMemory: '<Root>/Data Store Memory60'
      walk_DW.xyT_ini[1] = 0.03;

      // Start for DataStoreMemory: '<Root>/Data Store Memory63'
      walk_DW.xyT_end[1] = 0.03;

      // Start for DataStoreMemory: '<Root>/Data Store Memory60'
      walk_DW.xyT_ini[2] = 1.7;

      // Start for DataStoreMemory: '<Root>/Data Store Memory63'
      walk_DW.xyT_end[2] = 1.7;

      // Start for DataStoreMemory: '<Root>/Data Store Memory64'
      walk_DW.robot_init = 1.0;

      // Start for DataStoreMemory: '<Root>/Data Store Memory7'
      memcpy(&walk_DW.hd1[0], &walk_ConstP.DataStoreMemory7_InitialValue[0],
             sizeof(real_T) << 3U);

      // Start for DataStoreMemory: '<Root>/Data Store Memory8'
      for (i = 0; i < 7; i++) {
        walk_DW.hd2[i] = walk_ConstP.DataStoreMemory8_InitialValue[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory8'

      // Start for DataStoreMemory: '<Root>/Data Store Memory9'
      for (i = 0; i < 6; i++) {
        walk_DW.hd3[i] = walk_ConstP.DataStoreMemory9_InitialValue[i];
      }

      // End of Start for DataStoreMemory: '<Root>/Data Store Memory9'

      // SystemInitialize for MATLAB Function: '<Root>/clock'
      walk_DW.t_not_empty = false;

      // SystemInitialize for MATLAB Function: '<Root>/gait_update'
      walk_DW.T0_not_empty = false;

      // '<S3>:1:6' count=1;
      walk_DW.count = 1.0;

      // SystemInitialize for MATLAB Function: '<Root>/Compute_Tau'
      walk_DW.previous_time_not_empty = false;
      walk_DW.previous_time_not_empty_a = false;
      walk_DW.previous_time = 0.0;
      walk_DW.previous_time_n = 0.0;
      memset(&walk_DW.accumulated_error[0], 0, 30U * sizeof(real_T));
      memset(&walk_DW.accumulated_error2[0], 0, 30U * sizeof(real_T));
      memset(&walk_DW.accumulated_error_b[0], 0, 30U * sizeof(real_T));
    }
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
