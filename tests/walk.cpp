//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: walk.cpp
//
// Code generated for Simulink model 'walk'.
//
// Model version                  : 1.269
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Fri May 21 14:07:02 2021
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
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval(const real_T p[8])
  {
    real_T y;
    int32_T k;
    y = p[0];
    for (k = 0; k < 7; k++) {
      y = p[k + 1];
    }

    return y;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval_i(const real_T p[7])
  {
    real_T y;
    int32_T k;
    y = p[0];
    for (k = 0; k < 6; k++) {
      y = p[k + 1];
    }

    return y;
  }

  // Function for MATLAB Function: '<Root>/Compute_Tau'
  real_T walkModelClass::walk_polyval_i3(const real_T p[6])
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
  // Function for MATLAB Function: '<Root>/Compute_Tau'
  // function [hd] = desired_h_xelo(phi)
  //
  void walkModelClass::walk_desired_h_xelo(real_T hd[28])
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
    hd[0] = walk_polyval(walk_DW.hd1);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[1] = walk_polyval_i(walk_DW.hd2);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[2] = walk_polyval_i3(walk_DW.hd3);

    // 'desired_h_xelo:12' hd(i) = polyval(hd_phi{i},phi);
    hd[3] = walk_polyval_i(walk_DW.hd4);

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

    // 'compute2_com_xelo:32' fprintf("mass_tot = %f \n",mass_tot)
    printf("mass_tot = %f \n", walk_DW.mass_tot);
    fflush(stdout);

    // 'compute2_com_xelo:33' for j = 1 : 49
    for (i = 0; i < 49; i++) {
      // 'compute2_com_xelo:34' fprintf("mass_stack %f = %f \n",j,mass_stack(j)) 
      printf("mass_stack %f = %f \n", 1.0 + static_cast<real_T>(i),
             walk_DW.mass_stack[i]);
      fflush(stdout);

      // 'compute2_com_xelo:35' fprintf("\n")
      printf("\n");
      fflush(stdout);

      // 'compute2_com_xelo:36' if mass_stack(j) ~=0
      if (walk_DW.mass_stack[i] != 0.0) {
        // Center of mass position (X,Y)
        // 'compute2_com_xelo:39' MS_j = T(1:3,:,j) * [CoM_stack(:,j);1];
        crossM_tmp_0 = walk_DW.CoM_stack[3 * i];
        crossM_tmp_1 = walk_DW.CoM_stack[3 * i + 1];
        tmp = walk_DW.CoM_stack[3 * i + 2];

        //  Este es el vector de posicion del CoM_stack respecto al marco 0
        // 'compute2_com_xelo:40' CoM = CoM + mass_stack(j) * MS_j;
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 3; MS_j_idx_0_tmp++) {
          F = (i << 4) + MS_j_idx_0_tmp;
          MS_j_0 = T[F + 12] + (T[F + 8] * tmp + (T[F + 4] * crossM_tmp_1 + T[F]
            * crossM_tmp_0));
          MS_j[MS_j_idx_0_tmp] = MS_j_0;
          CoM[MS_j_idx_0_tmp] += walk_DW.mass_stack[i] * MS_j_0;
        }

        //  De igual forma, aqu?se va calculando el CoM total del robot "Sum(j=1:36) m* ^0CoM_stack" 
        // Center of mass velocity (XD,YD)
        // 'compute2_com_xelo:42' J_X = zeros(3,30);
        memset(&J_X[0], 0, 90U * sizeof(real_T));

        //  Se crea una matriz de 3x36 para calcular J_CoM_stack
        // 'compute2_com_xelo:43' F = j;
        // 'compute2_com_xelo:44' while F~=1
        for (F = i; F + 1 != 1; F = c[F] - 1) {
          //  ¿Llegamos al marco 1? Si si, sale del "while", si no, continúa... (F nunca es menor que 1) 
          //  Aqui se va calculando cada columna de la matriz J_CoM_stack. Nótese que se "brinca" las columnas que 
          //  corresponden a los marcos que NO tienen asignada una masa.. Nótese que empieza de ADELANTE pa'trás 
          // 'compute2_com_xelo:47' if act(F)~=0
          if (b[F] != 0) {
            //  ¿El marco F tiene una articulacion (q)? Si si, entra al "if", si no no =P 
            // 'compute2_com_xelo:48' J_X(:,act(F)) =crossM(:,:,F)*(MS_j-T(1:3,4,F)); 
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

          // 'compute2_com_xelo:50' F = ant(F);
        }

        // 'compute2_com_xelo:52' J_CoMs(:,:,j)=J_X;
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 30; MS_j_idx_0_tmp++) {
          F = 3 * MS_j_idx_0_tmp + 90 * i;
          J_CoMs[F] = J_X[3 * MS_j_idx_0_tmp];
          J_CoMs[F + 1] = J_X[3 * MS_j_idx_0_tmp + 1];
          J_CoMs[F + 2] = J_X[3 * MS_j_idx_0_tmp + 2];
        }

        //  Se asigna
        // 'compute2_com_xelo:53' J_CoM = J_CoM+mass_stack(j)*J_X;
        for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 90; MS_j_idx_0_tmp++) {
          J_CoM[MS_j_idx_0_tmp] += walk_DW.mass_stack[i] * J_X[MS_j_idx_0_tmp];
        }
      }
    }

    // if mass_tot ~=0
    // 'compute2_com_xelo:57' CoM = CoM / mass_tot;
    CoM[0] /= walk_DW.mass_tot;
    CoM[1] /= walk_DW.mass_tot;
    CoM[2] /= walk_DW.mass_tot;

    //  = 1/mT Sum_{i=1}^n a_j X ^jCoM_stack   donde  jCoM_stack es el vector constante de CoM del del eslabon j 
    // CoM=CoM+[0;0.0241;0];                          % respecto al marco j, y a_j es el vector de la matriz "snap" del marco "j" 
    // 'compute2_com_xelo:59' J_CoM = J_CoM/mass_tot;
    // end
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
    // 'compute2_com_xelo:72' F = 12;
    F = 11;

    // 'compute2_com_xelo:73' J_Ankle = zeros(3,joints);
    for (MS_j_idx_0_tmp = 0; MS_j_idx_0_tmp < 90; MS_j_idx_0_tmp++) {
      J_Ankle[MS_j_idx_0_tmp] = 0.0;
      J_CoM[MS_j_idx_0_tmp] /= walk_DW.mass_tot;
    }

    // 'compute2_com_xelo:74' while F~=1
    while (F + 1 != 1) {
      // 'compute2_com_xelo:75' if act(F)~=0
      if (b[F] != 0) {
        // 'compute2_com_xelo:76' J = crossM(:,:,F)*(T(1:3,4,12)-T(1:3,4,F));
        // 'compute2_com_xelo:77' J_Ankle(1:2,act(F)) =J(1:2);
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

      // 'compute2_com_xelo:79' F = ant(F);
      F = c[F] - 1;
    }

    // 'compute2_com_xelo:81' F = 14;
    // 'compute2_com_xelo:82' while F~=1
    for (F = 13; F + 1 != 1; F = c[F] - 1) {
      // 'compute2_com_xelo:83' if act(F)~=0
      if (b[F] != 0) {
        // 'compute2_com_xelo:84' J = crossM(:,:,F)*(T(1:3,4,14)-T(1:3,4,F));
        // 'compute2_com_xelo:85' J_Ankle(3,act(F)) =J(3);
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

      // 'compute2_com_xelo:87' F = ant(F);
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
}

namespace renoir_controller
{
  // Model step function
  void walkModelClass::step(real_T (&arg_q)[32], real_T (&arg_qp)[32], real_T
    (&arg_torque)[32])
  {
    real_T q[30];
    boolean_T init;
    real_T hd[28];
    real_T h[28];
    real_T CoM[3];
    real_T J_CoM[90];
    real_T J_Ankle[90];
    real_T crossM[441];
    real_T b;
    real_T Tau[30];
    real_T q_0[30];
    real_T qp[30];
    int32_T i;
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
    real_T tmp_9[28];
    real_T tmp_a[2];
    int32_T i_0;

    // MATLAB Function: '<Root>/mapping' incorporates:
    //   Inport: '<Root>/q'
    //   Inport: '<Root>/qp'

    // MATLAB Function 'mapping': '<S4>:1'
    // '<S4>:1:3' q_new=map_joints_in(q);
    // 'map_joints_in:3' q_new=zeros(30,1);
    memset(&q_0[0], 0, 30U * sizeof(real_T));

    // 'map_joints_in:5' q_new(7:12)=[q(6);q(5);q(4);q(3);q(2);q(1)];
    q_0[6] = arg_q[5];
    q_0[7] = arg_q[4];
    q_0[8] = arg_q[3];
    q_0[9] = arg_q[2];
    q_0[10] = arg_q[1];
    q_0[11] = arg_q[0];

    //  leg left
    // 'map_joints_in:6' q_new(1:6)=q(7:12);
    for (i = 0; i < 6; i++) {
      q_0[i] = arg_q[i + 6];
    }

    //  leg right
    // 'map_joints_in:7' q_new(13:14)=q(13:14);
    q_0[12] = arg_q[12];
    q_0[13] = arg_q[13];

    //  torso
    // 'map_joints_in:8' q_new(24:30)=q(15:21);
    //  arm left
    // 'map_joints_in:9' q_new(17:23)=q(23:29);
    for (i = 0; i < 7; i++) {
      q_0[i + 23] = arg_q[i + 14];
      q_0[i + 16] = arg_q[i + 22];
    }

    //  arm right
    // 'map_joints_in:10' q_new(15:16)=q(31:32);
    q_0[14] = arg_q[30];
    q_0[15] = arg_q[31];

    //  head
    // '<S4>:1:4' qp_new=map_joints_in(qp);
    // 'map_joints_in:3' q_new=zeros(30,1);
    memset(&qp[0], 0, 30U * sizeof(real_T));

    // 'map_joints_in:5' q_new(7:12)=[q(6);q(5);q(4);q(3);q(2);q(1)];
    qp[6] = arg_qp[5];
    qp[7] = arg_qp[4];
    qp[8] = arg_qp[3];
    qp[9] = arg_qp[2];
    qp[10] = arg_qp[1];
    qp[11] = arg_qp[0];

    //  leg left
    // 'map_joints_in:6' q_new(1:6)=q(7:12);
    for (i = 0; i < 6; i++) {
      qp[i] = arg_qp[i + 6];
    }

    //  leg right
    // 'map_joints_in:7' q_new(13:14)=q(13:14);
    qp[12] = arg_qp[12];
    qp[13] = arg_qp[13];

    //  torso
    // 'map_joints_in:8' q_new(24:30)=q(15:21);
    //  arm left
    // 'map_joints_in:9' q_new(17:23)=q(23:29);
    for (i = 0; i < 7; i++) {
      qp[i + 23] = arg_qp[i + 14];
      qp[i + 16] = arg_qp[i + 22];
    }

    //  arm right
    // 'map_joints_in:10' q_new(15:16)=q(31:32);
    qp[14] = arg_qp[30];
    qp[15] = arg_qp[31];

    // End of MATLAB Function: '<Root>/mapping'

    // MATLAB Function: '<Root>/swapping'
    //  head
    // MATLAB Function 'swapping': '<S6>:1'
    memcpy(&Tau[0], &qp[0], 30U * sizeof(real_T));
    memcpy(&q[0], &q_0[0], 30U * sizeof(real_T));

    // '<S6>:1:5' if swap
    if (walk_DW.swap != 0.0) {
      // '<S6>:1:6' q=swap_joints(q);
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
      b = q[17];
      q[17] = q[24];
      q[24] = b;

      //  Swap Shoulders Pitch
      //  CHECK THIS SWAPING....
      // 'swap_joints:9' q([17,19,20,21,22,23,24,26,27,28,29,30])=[-q(24),-q(26),q(27),-q(28),-q(29),q(30),-q(17),-q(19),q(20),-q(21),-q(22),q(23)]; 
      b = q[25];
      tmp = q[26];
      tmp_0 = q[27];
      tmp_1 = q[28];
      tmp_2 = q[29];
      tmp_3 = q[16];
      tmp_4 = q[18];
      tmp_5 = q[19];
      tmp_6 = q[20];
      tmp_7 = q[21];
      tmp_8 = q[22];
      q[16] = -q[23];
      q[18] = -b;
      q[19] = tmp;
      q[20] = -tmp_0;
      q[21] = -tmp_1;
      q[22] = tmp_2;
      q[23] = -tmp_3;
      q[25] = -tmp_4;
      q[26] = tmp_5;
      q[27] = -tmp_6;
      q[28] = -tmp_7;
      q[29] = tmp_8;

      //  Swap Shoulders Yaw and rest of the arm
      // '<S6>:1:7' qp=swap_joints(qp);
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
      b = Tau[17];
      Tau[17] = Tau[24];
      Tau[24] = b;

      //  Swap Shoulders Pitch
      //  CHECK THIS SWAPING....
      // 'swap_joints:9' q([17,19,20,21,22,23,24,26,27,28,29,30])=[-q(24),-q(26),q(27),-q(28),-q(29),q(30),-q(17),-q(19),q(20),-q(21),-q(22),q(23)]; 
      b = Tau[25];
      tmp = Tau[26];
      tmp_0 = Tau[27];
      tmp_1 = Tau[28];
      tmp_2 = Tau[29];
      tmp_3 = Tau[16];
      tmp_4 = Tau[18];
      tmp_5 = Tau[19];
      tmp_6 = Tau[20];
      tmp_7 = Tau[21];
      tmp_8 = Tau[22];
      Tau[16] = -Tau[23];
      Tau[18] = -b;
      Tau[19] = tmp;
      Tau[20] = -tmp_0;
      Tau[21] = -tmp_1;
      Tau[22] = tmp_2;
      Tau[23] = -tmp_3;
      Tau[25] = -tmp_4;
      Tau[26] = tmp_5;
      Tau[27] = -tmp_6;
      Tau[28] = -tmp_7;
      Tau[29] = tmp_8;

      //  Swap Shoulders Yaw and rest of the arm
    }

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

    // MATLAB Function: '<Root>/Compute_Tau' incorporates:
    //   MATLAB Function: '<Root>/clock'
    //   MATLAB Function: '<Root>/swapping'

    // '<S2>:1:11' t_out=t
    // MATLAB Function 'Compute_Tau': '<S1>:1'
    // '<S1>:1:7' Tau = PID_control(q,qp,t,0,xyT_ini(1:2));
    // global Kp_ini Ki_ini Kd_ini
    // 'PID_control:3' Kp_ini=1000*ones(30,1);
    // 'PID_control:4' Kd_ini=100*ones(30,1);
    // 'PID_control:5' Ki_ini=1*ones(30,1);
    // 'PID_control:8' init=false;
    init = false;

    // 'PID_control:9' if isempty(previous_time)
    if (!walk_DW.previous_time_not_empty) {
      // 'PID_control:10' previous_time=0;
      walk_DW.previous_time_not_empty = true;

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
    walk_DGM_TALOS_QY_xelo(q, walk_B.T);

    // 'PID_control:22' [CoM,J_CoM,J_Ankle,crossM,J_CoMs] = compute2_com_xelo(T); 
    walk_compute2_com_xelo(walk_B.T, CoM, J_CoM, J_Ankle, crossM, walk_B.J_CoMs);

    // 'PID_control:23' [qf, qfp] = free_dof_xelo(qp,CoM,J_CoM);
    // 'free_dof_xelo:3' qf=[CoM(1);CoM(2)];
    // 'free_dof_xelo:4' qfp=J_CoM(1:2,:)*qp;
    // 'PID_control:24' J_h = J_state_v_TALOS_xelo(T,J_CoM,J_Ankle);
    walk_J_state_v_TALOS_xelo(walk_B.T, J_CoM, J_Ankle, walk_B.J_h);

    // 'PID_control:26' h = state_v_TALOS_xelo(q,T,CoM);
    walk_state_v_TALOS_xelo(q, walk_B.T, CoM, h);

    // 'PID_control:27' hp= J_h*qp;
    //  Torque Computation
    //  Qp=JQ.qp, Qp^T.F=qp^T.Tau -> qp^T.JQ^T.F=qp^T.Tau -> Tau=JQ^T.F
    // 'PID_control:31' JQ=zeros(30,30);
    memset(&walk_B.JQ[0], 0, 900U * sizeof(real_T));

    // 'PID_control:32' JQ(1:28,:)=J_h;
    // 'PID_control:33' JQ(29:30,:)=J_CoM(1:2,:);
    for (i = 0; i < 30; i++) {
      memcpy(&walk_B.JQ[i * 30], &walk_B.J_h[i * 28], 28U * sizeof(real_T));
      walk_B.JQ[28 + 30 * i] = J_CoM[3 * i];
      walk_B.JQ[29 + 30 * i] = J_CoM[3 * i + 1];
    }

    // 'PID_control:36' F=zeros(30,1);
    // 'PID_control:37' if init
    if (init) {
      // 'PID_control:38' F=Kp_ini.*[hd-h;qfd-qf]+Kd_ini.*[hpd-hp;qfpd-qfp];
      qp[28] = walk_DW.xyT_ini[0] - CoM[0];
      qp[29] = walk_DW.xyT_ini[1] - CoM[1];
      for (i = 0; i < 28; i++) {
        qp[i] = hd[i] - h[i];
        b = 0.0;
        for (i_0 = 0; i_0 < 30; i_0++) {
          b += walk_B.J_h[28 * i_0 + i] * Tau[i_0];
        }

        tmp_9[i] = 0.0 - b;
      }

      for (i = 0; i < 2; i++) {
        b = 0.0;
        for (i_0 = 0; i_0 < 30; i_0++) {
          b += J_CoM[3 * i_0 + i] * Tau[i_0];
        }

        tmp_a[i] = 0.0 - b;
      }

      memcpy(&q[0], &tmp_9[0], 28U * sizeof(real_T));
      q[28] = tmp_a[0];
      q[29] = tmp_a[1];
      for (i = 0; i < 30; i++) {
        q_0[i] = 1000.0 * qp[i] + 100.0 * q[i];
      }

      // 'PID_control:39' previous_time=t;
      walk_DW.previous_time = walk_DW.t;
    } else {
      // 'PID_control:40' else
      // 'PID_control:41' error=[hd-h;qfd-qf];
      for (i = 0; i < 28; i++) {
        qp[i] = hd[i] - h[i];
      }

      qp[28] = walk_DW.xyT_ini[0] - CoM[0];
      qp[29] = walk_DW.xyT_ini[1] - CoM[1];

      // 'PID_control:42' accumulated_error=accumulated_error+error*(t-previous_time); 
      b = walk_DW.t - walk_DW.previous_time;
      for (i = 0; i < 30; i++) {
        walk_DW.accumulated_error[i] += qp[i] * b;
      }

      // 'PID_control:43' F=Kp_ini.*error+Kd_ini.*[hpd-hp;qfpd-qfp]+Ki_ini.*accumulated_error; 
      for (i = 0; i < 28; i++) {
        b = 0.0;
        for (i_0 = 0; i_0 < 30; i_0++) {
          b += walk_B.J_h[28 * i_0 + i] * Tau[i_0];
        }

        tmp_9[i] = 0.0 - b;
      }

      for (i = 0; i < 2; i++) {
        b = 0.0;
        for (i_0 = 0; i_0 < 30; i_0++) {
          b += J_CoM[3 * i_0 + i] * Tau[i_0];
        }

        tmp_a[i] = 0.0 - b;
      }

      memcpy(&q[0], &tmp_9[0], 28U * sizeof(real_T));
      q[28] = tmp_a[0];
      q[29] = tmp_a[1];
      for (i = 0; i < 30; i++) {
        q_0[i] = (1000.0 * qp[i] + 100.0 * q[i]) + walk_DW.accumulated_error[i];
      }

      // 'PID_control:44' previous_time=t;
      walk_DW.previous_time = walk_DW.t;
    }

    // 'PID_control:49' Tau=transpose(JQ)*F;
    //  for k=1:length(Tau)
    //      %disp("Tau "+num2str(k)+" = "+num2str(Tau(k)));
    //      fprintf("Tau %f = %f \n",k,Tau(k))
    //  end
    //  fprintf("\n")
    for (i = 0; i < 30; i++) {
      Tau[i] = 0.0;
      for (i_0 = 0; i_0 < 30; i_0++) {
        Tau[i] += walk_B.JQ[30 * i + i_0] * q_0[i_0];
      }
    }

    // End of MATLAB Function: '<Root>/Compute_Tau'

    // MATLAB Function: '<Root>/swap_torques'
    memcpy(&q_0[0], &Tau[0], 30U * sizeof(real_T));

    // MATLAB Function 'swap_torques': '<S5>:1'
    // '<S5>:1:5' if swap
    if (walk_DW.swap != 0.0) {
      // '<S5>:1:6' Tau=swap_joints(Tau);
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
      b = q_0[17];
      q_0[17] = q_0[24];
      q_0[24] = b;

      //  Swap Shoulders Pitch
      //  CHECK THIS SWAPING....
      // 'swap_joints:9' q([17,19,20,21,22,23,24,26,27,28,29,30])=[-q(24),-q(26),q(27),-q(28),-q(29),q(30),-q(17),-q(19),q(20),-q(21),-q(22),q(23)]; 
      b = q_0[25];
      tmp = q_0[26];
      tmp_0 = q_0[27];
      tmp_1 = q_0[28];
      tmp_2 = q_0[29];
      tmp_3 = q_0[16];
      tmp_4 = q_0[18];
      tmp_5 = q_0[19];
      tmp_6 = q_0[20];
      tmp_7 = q_0[21];
      tmp_8 = q_0[22];
      q_0[16] = -q_0[23];
      q_0[18] = -b;
      q_0[19] = tmp;
      q_0[20] = -tmp_0;
      q_0[21] = -tmp_1;
      q_0[22] = tmp_2;
      q_0[23] = -tmp_3;
      q_0[25] = -tmp_4;
      q_0[26] = tmp_5;
      q_0[27] = -tmp_6;
      q_0[28] = -tmp_7;
      q_0[29] = tmp_8;

      //  Swap Shoulders Yaw and rest of the arm
    }

    // End of MATLAB Function: '<Root>/swap_torques'

    // MATLAB Function: '<Root>/map_torques'
    memcpy(&Tau[0], &q_0[0], 30U * sizeof(real_T));

    // MATLAB Function 'map_torques': '<S3>:1'
    // '<S3>:1:3' Tau(15)=0;
    Tau[14] = 0.0;

    // position control head
    // '<S3>:1:4' Tau(16)=0;
    Tau[15] = 0.0;

    // Outport: '<Root>/torque' incorporates:
    //   MATLAB Function: '<Root>/map_torques'

    // position control head
    // '<S3>:1:6' Tau_new=map_joints_out(Tau);
    // 'map_joints_out:3' q_new=zeros(32,1);
    memset(&arg_torque[0], 0, sizeof(real_T) << 5U);

    // MATLAB Function: '<Root>/map_torques' incorporates:
    //   Outport: '<Root>/torque'

    // 'map_joints_out:5' q_new(1:6)=[q(12);q(11);q(10);q(9);q(8);q(7)];
    arg_torque[0] = q_0[11];
    arg_torque[1] = q_0[10];
    arg_torque[2] = q_0[9];
    arg_torque[3] = q_0[8];
    arg_torque[4] = q_0[7];
    arg_torque[5] = q_0[6];

    //  leg left
    // 'map_joints_out:6' q_new(7:12)=q(1:6);
    for (i = 0; i < 6; i++) {
      arg_torque[i + 6] = Tau[i];
    }

    //  leg right
    // 'map_joints_out:7' q_new(13:14)=q(13:14);
    arg_torque[12] = Tau[12];
    arg_torque[13] = Tau[13];

    //  torso
    // 'map_joints_out:8' q_new(15:21)=q(24:30);
    //  arm left
    // 'map_joints_out:9' q_new(22)=0;
    arg_torque[21] = 0.0;

    //  gripper left
    // 'map_joints_out:10' q_new(23:29)=q(17:23);
    for (i = 0; i < 7; i++) {
      arg_torque[i + 14] = Tau[i + 23];
      arg_torque[i + 22] = Tau[i + 16];
    }

    //  arm right
    // 'map_joints_out:11' q_new(30)=0;
    arg_torque[29] = 0.0;

    //  gripper right
    // 'map_joints_out:12' q_new(31:32)=q(15:16);
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
      for (i = 0; i < 7; i++) {
        // Start for DataStoreMemory: '<Root>/Data Store Memory12'
        walk_DW.hd12[i] = walk_ConstP.DataStoreMemory12_InitialValue[i];

        // Start for DataStoreMemory: '<Root>/Data Store Memory18'
        walk_DW.hd18[i] = walk_ConstP.pooled3[i];

        // Start for DataStoreMemory: '<Root>/Data Store Memory25'
        walk_DW.hd25[i] = walk_ConstP.pooled3[i];

        // Start for DataStoreMemory: '<Root>/Data Store Memory29'
        walk_DW.hd4[i] = walk_ConstP.DataStoreMemory29_InitialValue[i];
      }

      // Start for DataStoreMemory: '<Root>/Data Store Memory38'
      memcpy(&walk_DW.torso_f[0], &walk_ConstP.DataStoreMemory38_InitialValue[0],
             sizeof(real_T) << 4U);

      // Start for DataStoreMemory: '<Root>/Data Store Memory41'
      memcpy(&walk_DW.mass_stack[0],
             &walk_ConstP.DataStoreMemory41_InitialValue[0], 49U * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory43'
      memcpy(&walk_DW.CoM_stack[0], &walk_ConstP.DataStoreMemory43_InitialValue
             [0], 147U * sizeof(real_T));

      // Start for DataStoreMemory: '<Root>/Data Store Memory44'
      walk_DW.mass_tot = 94.999998;

      // Start for DataStoreMemory: '<Root>/Data Store Memory60'
      walk_DW.xyT_ini[0] = 0.0;
      walk_DW.xyT_ini[1] = 0.03;
      walk_DW.xyT_ini[2] = 1.7;

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

      // SystemInitialize for MATLAB Function: '<Root>/Compute_Tau'
      walk_DW.previous_time_not_empty = false;
      walk_DW.previous_time = 0.0;
      memset(&walk_DW.accumulated_error[0], 0, 30U * sizeof(real_T));
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
