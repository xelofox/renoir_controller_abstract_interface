//
// File: walk_2017a_types.h
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
#ifndef RTW_HEADER_walk_2017a_types_h_
#define RTW_HEADER_walk_2017a_types_h_
#include "rtwtypes.h"

// Custom Type definition for MATLAB Function: '<S3>/gait_update'
#ifndef typedef_b_struct_T_walk_2017a_T
#define typedef_b_struct_T_walk_2017a_T

typedef struct {
  int32_T f1;
  int32_T f2;
} b_struct_T_walk_2017a_T;

#endif                                 //typedef_b_struct_T_walk_2017a_T

#ifndef struct_tag_sKLpTDgVdadEcWmkZEqDlEH
#define struct_tag_sKLpTDgVdadEcWmkZEqDlEH

struct tag_sKLpTDgVdadEcWmkZEqDlEH
{
  uint32_T LT;
  uint32_T UT;
  uint32_T UHESS;
  uint32_T SYM;
  uint32_T POSDEF;
  uint32_T RECT;
  uint32_T TRANSA;
};

#endif                                 //struct_tag_sKLpTDgVdadEcWmkZEqDlEH

#ifndef typedef_sKLpTDgVdadEcWmkZEqDlEH_walk__T
#define typedef_sKLpTDgVdadEcWmkZEqDlEH_walk__T

typedef struct tag_sKLpTDgVdadEcWmkZEqDlEH sKLpTDgVdadEcWmkZEqDlEH_walk__T;

#endif                                 //typedef_sKLpTDgVdadEcWmkZEqDlEH_walk__T

#ifndef struct_tag_s9s8BC13iTohZXRbLMSIDHE
#define struct_tag_s9s8BC13iTohZXRbLMSIDHE

struct tag_s9s8BC13iTohZXRbLMSIDHE
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  boolean_T PartialMatching;
};

#endif                                 //struct_tag_s9s8BC13iTohZXRbLMSIDHE

#ifndef typedef_s9s8BC13iTohZXRbLMSIDHE_walk__T
#define typedef_s9s8BC13iTohZXRbLMSIDHE_walk__T

typedef struct tag_s9s8BC13iTohZXRbLMSIDHE s9s8BC13iTohZXRbLMSIDHE_walk__T;

#endif                                 //typedef_s9s8BC13iTohZXRbLMSIDHE_walk__T

#ifndef typedef_struct_T_walk_2017a_T
#define typedef_struct_T_walk_2017a_T

typedef struct {
  char_T f1[15];
  char_T f2[15];
  char_T f3[16];
  char_T f4[16];
  char_T f5[16];
  char_T f6[15];
  char_T f7[15];
} struct_T_walk_2017a_T;

#endif                                 //typedef_struct_T_walk_2017a_T

#ifndef struct_emxArray_real_T_8
#define struct_emxArray_real_T_8

struct emxArray_real_T_8
{
  real_T data[8];
  int32_T size;
};

#endif                                 //struct_emxArray_real_T_8

#ifndef typedef_emxArray_real_T_8_walk_2017a_T
#define typedef_emxArray_real_T_8_walk_2017a_T

typedef struct emxArray_real_T_8 emxArray_real_T_8_walk_2017a_T;

#endif                                 //typedef_emxArray_real_T_8_walk_2017a_T

#ifndef struct_sOVqDEbGPI4hOoZ8iW9JfLF
#define struct_sOVqDEbGPI4hOoZ8iW9JfLF

struct sOVqDEbGPI4hOoZ8iW9JfLF
{
  emxArray_real_T_8_walk_2017a_T f1;
};

#endif                                 //struct_sOVqDEbGPI4hOoZ8iW9JfLF

#ifndef typedef_b_cell_wrap_1_walk_2017a_T
#define typedef_b_cell_wrap_1_walk_2017a_T

typedef struct sOVqDEbGPI4hOoZ8iW9JfLF b_cell_wrap_1_walk_2017a_T;

#endif                                 //typedef_b_cell_wrap_1_walk_2017a_T

// Forward declaration for rtModel
typedef struct tag_RTM_walk_2017a_T RT_MODEL_walk_2017a_T;

#endif                                 // RTW_HEADER_walk_2017a_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
