//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: walk_data.cpp
//
// Code generated for Simulink model 'walk'.
//
// Model version                  : 1.268
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Tue Jun  1 19:18:10 2021
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
  // Expression: K
  //  Referenced by: '<Root>/gait_update'

  { -0.13852992226658942, 0.00019233128558741359, -0.000432494743177385,
    -0.00076869885334463644, 0.00028585542608468859, 0.016621168909141951,
    -0.011522779413361987, -0.28778990718959679, 0.49783527166882841,
    -0.019488276502093844, 0.000578577412428175, -0.00055737174361463469,
    -0.000273805518882891, -0.00013227366449093225, 0.016705780213155025,
    0.0117128005553453, -0.32172849407121784, 0.170116709205879,
    -0.0011879082124126969, -0.00016263975946417364, -0.00058843627037021722,
    -0.00023779763637349778, -0.00016952005540125503, 0.01780116496221602,
    0.033458593757065412, -0.40215835142829548, 0.29744820619592316 },

  // Expression: X
  //  Referenced by: '<Root>/gait_update'

  { 0.6068920154846863, 0.25073161824442219, 0.0077778081527067333,
    -7.2796096210162042E-5 },

  // Pooled Parameter (Expression: B)
  //  Referenced by:
  //    '<S11>/butter q'
  //    '<S12>/butter q'
  //    '<S13>/butter q'
  //    '<S14>/butter q'
  //    '<S15>/butter q'
  //    '<S16>/butter q'
  //    '<S17>/butter q'
  //    '<S18>/butter q'
  //    '<S19>/butter q'
  //    '<S20>/butter q'
  //    '<S21>/butter q'
  //    '<S22>/butter q'
  //    '<S23>/butter q'
  //    '<S24>/butter q'
  //    '<S25>/butter q'
  //    '<S26>/butter q'
  //    '<S27>/butter q'
  //    '<S28>/butter q'
  //    '<S29>/butter q'
  //    '<S30>/butter q'
  //    '<S31>/butter q'
  //    '<S32>/butter q'
  //    '<S33>/butter q'
  //    '<S34>/butter q'
  //    '<S35>/butter q'
  //    '<S36>/butter q'
  //    '<S37>/butter q'
  //    '<S38>/butter q'
  //    '<S39>/butter q'
  //    '<S40>/butter q'
  //    '<S41>/butter q'
  //    '<S42>/butter q'
  //    '<S43>/butter q'
  //    '<S44>/butter q'
  //    '<S45>/butter q'
  //    '<S46>/butter q'
  //    '<S47>/butter q'
  //    '<S48>/butter q'
  //    '<S49>/butter q'
  //    '<S50>/butter q'
  //    '<S51>/butter q'
  //    '<S52>/butter q'
  //    '<S53>/butter q'
  //    '<S54>/butter q'
  //    '<S55>/butter q'
  //    '<S56>/butter q'
  //    '<S57>/butter q'
  //    '<S58>/butter q'
  //    '<S59>/butter q'
  //    '<S60>/butter q'
  //    '<S61>/butter q'
  //    '<S62>/butter q'
  //    '<S63>/butter q'
  //    '<S64>/butter q'
  //    '<S65>/butter q'
  //    '<S66>/butter q'
  //    '<S67>/butter q'
  //    '<S68>/butter q'
  //    '<S69>/butter q'
  //    '<S70>/butter q'
  //    '<S71>/butter q'
  //    '<S72>/butter q'
  //    '<S73>/butter q'
  //    '<S74>/butter q'

  { 6.5003558091802915E-13, 6.5003558091802915E-12, 2.9251601141311312E-11,
    7.80042697101635E-11, 1.3650747199278612E-10, 1.6380896639134335E-10,
    1.3650747199278612E-10, 7.80042697101635E-11, 2.9251601141311312E-11,
    6.5003558091802915E-12, 6.5003558091802915E-13 },

  // Pooled Parameter (Expression: A)
  //  Referenced by:
  //    '<S11>/butter q'
  //    '<S12>/butter q'
  //    '<S13>/butter q'
  //    '<S14>/butter q'
  //    '<S15>/butter q'
  //    '<S16>/butter q'
  //    '<S17>/butter q'
  //    '<S18>/butter q'
  //    '<S19>/butter q'
  //    '<S20>/butter q'
  //    '<S21>/butter q'
  //    '<S22>/butter q'
  //    '<S23>/butter q'
  //    '<S24>/butter q'
  //    '<S25>/butter q'
  //    '<S26>/butter q'
  //    '<S27>/butter q'
  //    '<S28>/butter q'
  //    '<S29>/butter q'
  //    '<S30>/butter q'
  //    '<S31>/butter q'
  //    '<S32>/butter q'
  //    '<S33>/butter q'
  //    '<S34>/butter q'
  //    '<S35>/butter q'
  //    '<S36>/butter q'
  //    '<S37>/butter q'
  //    '<S38>/butter q'
  //    '<S39>/butter q'
  //    '<S40>/butter q'
  //    '<S41>/butter q'
  //    '<S42>/butter q'
  //    '<S43>/butter q'
  //    '<S44>/butter q'
  //    '<S45>/butter q'
  //    '<S46>/butter q'
  //    '<S47>/butter q'
  //    '<S48>/butter q'
  //    '<S49>/butter q'
  //    '<S50>/butter q'
  //    '<S51>/butter q'
  //    '<S52>/butter q'
  //    '<S53>/butter q'
  //    '<S54>/butter q'
  //    '<S55>/butter q'
  //    '<S56>/butter q'
  //    '<S57>/butter q'
  //    '<S58>/butter q'
  //    '<S59>/butter q'
  //    '<S60>/butter q'
  //    '<S61>/butter q'
  //    '<S62>/butter q'
  //    '<S63>/butter q'
  //    '<S64>/butter q'
  //    '<S65>/butter q'
  //    '<S66>/butter q'
  //    '<S67>/butter q'
  //    '<S68>/butter q'
  //    '<S69>/butter q'
  //    '<S70>/butter q'
  //    '<S71>/butter q'
  //    '<S72>/butter q'
  //    '<S73>/butter q'
  //    '<S74>/butter q'

  { 1.0, -9.1967361675507089, 38.091058836959668, -93.562780857963233,
    150.93116636525005, -167.07697325459634, 128.52956805510962,
    -67.847975695495421, 23.520009455848495, -4.8348751090021356,
    0.44753837210564384 },

  // Expression: hd12
  //  Referenced by: '<Root>/Data Store Memory12'

  { 2.331468351712852E-16, -6.9944050551385491E-16, 6.9944050551385412E-16,
    -2.3314683517128436E-16, 0.0, -0.0, 0.1 },

  // Expression: hd15
  //  Referenced by: '<Root>/Data Store Memory15'

  { 0.0, 0.0, 0.0, 0.0, 0.0, -0.26 },

  // Expression: hd16
  //  Referenced by: '<Root>/Data Store Memory16'

  { 0.0, 0.0, 0.0, 0.0, 0.0, -0.17 },

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<Root>/Data Store Memory18'
  //    '<Root>/Data Store Memory25'

  { -9.325873406851408E-16, 2.7977620220554196E-15, -2.7977620220554165E-15,
    9.3258734068513745E-16, 0.0, 0.0, -0.4 },

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<Root>/Data Store Memory21'
  //    '<Root>/Data Store Memory28'

  { 0.0, 0.0, 0.0, -0.0, 0.0, 0.1 },

  // Expression: hd22
  //  Referenced by: '<Root>/Data Store Memory22'

  { 0.0, 0.0, 0.0, -0.0, 0.0, 0.26 },

  // Expression: hd23
  //  Referenced by: '<Root>/Data Store Memory23'

  { 0.0, 0.0, 0.0, -0.0, 0.0, 0.17 },

  // Expression: hd4
  //  Referenced by: '<Root>/Data Store Memory29'

  { -3.6168981481482074, 10.850694444444615, -10.850694444444605,
    3.6168981481481963, 0.0, 0.0, -0.0 },

  // Expression: torso_f
  //  Referenced by: '<Root>/Data Store Memory38'

  { 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },

  // Expression: ant
  //  Referenced by: '<Root>/Data Store Memory39'

  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0,
    7.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0, 17.0, 22.0, 23.0, 24.0, 25.0, 26.0,
    27.0, 28.0, 29.0, 30.0, 31.0, 32.0, 33.0, 34.0, 17.0, 36.0, 37.0, 38.0, 39.0,
    40.0, 41.0, 42.0, 43.0, 44.0, 45.0, 46.0, 47.0, 48.0 },

  // Expression: act
  //  Referenced by: '<Root>/Data Store Memory40'

  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 0.0, 0.0,
    13.0, 14.0, 0.0, 15.0, 16.0, 0.0, 0.0, 17.0, 0.0, 0.0, 18.0, 0.0, 19.0, 0.0,
    20.0, 21.0, 0.0, 22.0, 23.0, 0.0, 0.0, 24.0, 0.0, 0.0, 25.0, 0.0, 26.0, 0.0,
    27.0, 28.0, 0.0, 29.0, 30.0, 0.0 },

  // Expression: mass_stack
  //  Referenced by: '<Root>/Data Store Memory41'

  { 1.597773, 1.29096, 3.759951, 6.239871, 1.490952, 1.845591, 18.96974,
    1.845591, 1.490952, 6.239871, 3.759951, 1.29096, 1.597773, 0.0, 0.0, 3.02433,
    17.55011, 0.0, 0.73746, 1.443954, 0.0, 0.0, 2.714567, 0.0, 0.0, 2.425086,
    0.0, 2.208741, 0.0, 0.877346, 1.877923, 0.0, 0.0, 0.308441, 0.0, 0.0,
    2.714567, 0.0, 0.0, 2.425086, 0.0, 2.208741, 0.0, 0.877346, 1.877923, 0.0,
    0.0, 0.308441, 0.0 },

  // Expression: I_stack
  //  Referenced by: '<Root>/Data Store Memory42'

  { 0.0079386604506571888, 6.743674E-5, 0.0079234844202507159, 6.743674E-5,
    0.034120081128710136, 3.943143E-5, 0.0079234844202507159, 3.943143E-5,
    0.028650130048052946, 0.008083100546, -0.003550580093328,
    0.00058123941369600009, -0.003550580093328, 0.009256204965992,
    0.0016419917986080002, 0.00058123941369600009, 0.0016419917986080002,
    0.01450430208268, 0.0165596070305911, -0.010897078345224, 0.0175347209026297,
    -0.010897078345224, 0.201962004907803, 0.0017692497287120001,
    0.0175347209026297, 0.0017692497287120001, 0.19390000654529194,
    0.055546499642611408, -0.0054991751374019338, 0.056265855447385923,
    -0.0054991751374019338, 0.41988232381208246, 0.0030151843842249337,
    0.056265855447385923, 0.0030151843842249337, 0.37788655119594106,
    0.0051165135616328, 0.0001509614372904, -4.585381E-5, 0.0001509614372904,
    0.0050286500559272, 0.0001311358, -4.585381E-5, 0.0001311358,
    0.0023362534175600004, 0.011227685412128, 8.07323132070529E-5,
    0.00019856811673819191, 8.07323132070529E-5, 0.0056797886357919805,
    -0.0026149279742354184, 0.00019856811673819191, -0.0026149279742354184,
    0.0072263132426320558, 0.8171471722712792, -0.043919875223901,
    -0.31306764564000006, -0.043919875223901, 1.0572137408066002,
    -0.096053135541123838, -0.31306764564000006, -0.096053135541123838,
    0.382872806684679, 0.011227685412128, 0.00019856811673819191,
    -8.07323132070529E-5, 0.00019856811673819191, 0.0072263132426320558,
    0.0026149279742354184, -8.07323132070529E-5, 0.0026149279742354184,
    0.0056797886357919805, 0.0051165135616328, 4.585381E-5, 0.0001509614372904,
    4.585381E-5, 0.0023362534175600004, -0.0001311358, 0.0001509614372904,
    -0.0001311358, 0.0050286500559272, 0.055546499642611408,
    0.0083775117428520687, 0.094768637180380061, 0.0083775117428520687,
    0.38856245443953685, -0.0030151843842249337, 0.094768637180380061,
    -0.0030151843842249337, 0.34656668182339545, 0.0165596070305911,
    0.007677079594776, 0.0109497278856203, 0.007677079594776, 0.099633058467303,
    -0.0017692497287120001, 0.0109497278856203, -0.0017692497287120001,
    0.091571060104791907, 0.008083100546, 0.00058123941369600009,
    -0.003550580093328, 0.00058123941369600009, 0.01450430208268,
    0.0013582090686080001, -0.003550580093328, 0.0016419917986080002,
    0.009256204965992, 0.0061705248593249412, -3.943143E-5,
    -0.0030846391078747657, -3.943143E-5, 0.013819991570368293, -6.743674E-5,
    -0.0030846391078747657, -6.743674E-5, 0.010118176081043352, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.070405840612388, -0.000117, 0.000235134707474, -0.000117,
    0.040497891723564994, 0.001325, 0.000235134707474, 0.001325,
    0.082345051111177, 0.54111220149095607, -0.13110588422954603, 0.000117,
    -0.13110588422954603, 0.118694087582611, 0.001325, 0.000117, 0.001325,
    0.547553289073567, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.00259789660447566, -0.0001107808515874554, 4.69375E-6,
    -0.0001107808515874554, 0.0020540818644047294, 4.132536E-5, 4.69375E-6,
    4.132536E-5, 0.0014625183388803904, 0.039700547810765, -1.050889E-5,
    -0.002462549137031764, -1.050889E-5, 0.039956385757301441, -2.367831E-5,
    -0.002462549137031764, -2.367831E-5, 0.0058621526865364412, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.045196969106012751, 3.625571E-5, -7.14472E-5, 3.625571E-5,
    0.00953654101733019, 0.012354604468135811, -7.14472E-5, 0.012354604468135811,
    0.041055224348682563, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0052927105770134309,
    0.00032342891714771472, -0.0062338963362651816, 0.00032342891714771472,
    0.032599904911538309, 4.45166633132641E-5, -0.0062338963362651816,
    4.45166633132641E-5, 0.031269468096933734, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.14546515747038707, 0.000488834284510845, 0.00827106136596997,
    0.000488834284510845, 0.14528065768361653, -0.0072746529640649871,
    0.00827106136596997, -0.0072746529640649871, 0.0046331270454754133, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0038762446344704554,
    -0.00054357308299819468, -0.00023997017969046845, -0.00054357308299819468,
    0.0016570762629244174, -0.0010218750387923116, -0.00023997017969046845,
    -0.0010218750387923116, 0.00376978700420488, 0.015421351043024287,
    1.265489E-5, -1.038286E-5, 1.265489E-5, 0.016274596622921876,
    0.00058512603677025009, -1.038286E-5, 0.00058512603677025009,
    0.0023026160101024119, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.00015398658, 4.1702E-7, 4.392E-8, 4.1702E-7, 0.00014101316, -8.899E-8,
    4.392E-8, -8.899E-8, 0.00010700023, 0.00049664055575274408,
    -5.890086627075E-5, -4.7852335274499995E-6, -5.890086627075E-5,
    0.000193246278080469, -2.268020072174E-5, -4.7852335274499995E-6,
    -2.268020072174E-5, 0.000423439166473525, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.045196969106012751,
    -3.625571E-5, -7.14472E-5, -3.625571E-5, 0.00953654101733019,
    -0.012354604468135811, -7.14472E-5, -0.012354604468135811,
    0.041055224348682563, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0052927105770134309,
    -0.00032342891714771472, -0.0062338963362651816, -0.00032342891714771472,
    0.032599904911538309, -4.45166633132641E-5, -0.0062338963362651816,
    -4.45166633132641E-5, 0.031269468096933734, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.14546515747038707, -0.000488834284510845,
    0.00827106136596997, -0.000488834284510845, 0.14528065768361653,
    0.0072746529640649871, 0.00827106136596997, 0.0072746529640649871,
    0.0046331270454754133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0038762446344704554, -0.00054357308299819468, 0.00023997017969046845,
    -0.00054357308299819468, 0.0016570762629244174, 0.0010218750387923116,
    0.00023997017969046845, 0.0010218750387923116, 0.00376978700420488,
    0.015421351043024287, -1.265489E-5, -1.038286E-5, -1.265489E-5,
    0.016274596622921876, -0.00058512603677025009, -1.038286E-55,
    -0.00058512603677025009, 0.0023026160101024119, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.00015398658, 4.1702E-7, 4.392E-8, 4.1702E-7, 0.00014101316,
    -8.899E-8, 4.392E-8, -8.899E-8, 0.00010700023, 0.00049664055575274408,
    -5.890086627075E-5, -4.7852335274499995E-6, -5.890086627075E-5,
    0.000193246278080469, -2.268020072174E-5, -4.7852335274499995E-6,
    -2.268020072174E-5, 0.000423439166473525, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0 },

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

  // Expression: Ia
  //  Referenced by: '<Root>/Data Store Memory45'

  { 0.39535523275, 0.85034759879159993, 0.31275, 0.82576060397439988,
    0.35783549378560003, 1.4470371955835999, 1.4470371955835999,
    0.35783549378560003, 0.82576060397439988, 0.31275, 0.85034759879159993,
    0.39535523275, 0.028462103999999995, 0.018829273499999997, 0.00699743376,
    0.01657337121, 0.084172621499999989, 0.018829273499999997,
    0.028462103999999995, 0.018829273499999997, 0.01657337121, 0.004939795791,
    0.0023728607839999995, 0.084172621499999989, 0.018829273499999997,
    0.028462103999999995, 0.018829273499999997, 0.01657337121, 0.004939795791,
    0.0023728607839999995 },

  // Expression: Kp
  //  Referenced by: '<Root>/Data Store Memory52'

  { 100000.0, 15000.0, 15000.0, 15000.0, 100.0, 100.0, 100.0, 1000.0, 1000.0,
    1000.0, 800.0, 800.0, 150.0, 150.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0,
    80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0 },

  // Expression: Kv
  //  Referenced by: '<Root>/Data Store Memory53'

  { 1000.0, 150.0, 150.0, 150.0, 1.0, 1.0, 1.0, 10.0, 10.0, 10.0, 8.0, 8.0, 1.5,
    1.5, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8 },

  // Expression: x_coeff
  //  Referenced by: '<Root>/Data Store Memory58'

  { 1.1798771269927755, -1.6435934439669979, 0.62149412512692914, -0.0, 0.0 },

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
