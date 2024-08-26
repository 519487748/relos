#ifndef __c12_PID_Cdelta_U_h__
#define __c12_PID_Cdelta_U_h__

/* Type Definitions */
#ifndef struct_tag_sBaHy6MF1FZJsDHxMqvBaiH
#define struct_tag_sBaHy6MF1FZJsDHxMqvBaiH

struct tag_sBaHy6MF1FZJsDHxMqvBaiH
{
  int32_T xstart;
  int32_T xend;
  int32_T depth;
};

#endif                                 /*struct_tag_sBaHy6MF1FZJsDHxMqvBaiH*/

#ifndef typedef_c12_sBaHy6MF1FZJsDHxMqvBaiH
#define typedef_c12_sBaHy6MF1FZJsDHxMqvBaiH

typedef struct tag_sBaHy6MF1FZJsDHxMqvBaiH c12_sBaHy6MF1FZJsDHxMqvBaiH;

#endif                                 /*typedef_c12_sBaHy6MF1FZJsDHxMqvBaiH*/

#include "cs.h"
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_c12_emxArray_real_T
#define typedef_c12_emxArray_real_T

typedef struct emxArray_real_T c12_emxArray_real_T;

#endif                                 /*typedef_c12_emxArray_real_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_c12_emxArray_int32_T
#define typedef_c12_emxArray_int32_T

typedef struct emxArray_int32_T c12_emxArray_int32_T;

#endif                                 /*typedef_c12_emxArray_int32_T*/

#ifndef typedef_c12_coder_internal_sparse
#define typedef_c12_coder_internal_sparse

typedef struct {
  c12_emxArray_real_T *d;
  c12_emxArray_int32_T *colidx;
  c12_emxArray_int32_T *rowidx;
  int32_T maxnz;
} c12_coder_internal_sparse;

#endif                                 /*typedef_c12_coder_internal_sparse*/

#ifndef typedef_c12_cell_wrap_1
#define typedef_c12_cell_wrap_1

typedef struct {
  c12_emxArray_int32_T *f1;
} c12_cell_wrap_1;

#endif                                 /*typedef_c12_cell_wrap_1*/

#ifndef struct_emxArray_tag_sBaHy6MF1FZJsDHxMq
#define struct_emxArray_tag_sBaHy6MF1FZJsDHxMq

struct emxArray_tag_sBaHy6MF1FZJsDHxMq
{
  c12_sBaHy6MF1FZJsDHxMqvBaiH data[120];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_tag_sBaHy6MF1FZJsDHxMq*/

#ifndef typedef_c12_emxArray_sBaHy6MF1FZJsDHxMqvBai
#define typedef_c12_emxArray_sBaHy6MF1FZJsDHxMqvBai

typedef struct emxArray_tag_sBaHy6MF1FZJsDHxMq
  c12_emxArray_sBaHy6MF1FZJsDHxMqvBai;

#endif                                 /*typedef_c12_emxArray_sBaHy6MF1FZJsDHxMqvBai*/

#ifndef struct_sOopC9hsRAEdoU49fCImioD_tag
#define struct_sOopC9hsRAEdoU49fCImioD_tag

struct sOopC9hsRAEdoU49fCImioD_tag
{
  c12_emxArray_sBaHy6MF1FZJsDHxMqvBai d;
  int32_T n;
};

#endif                                 /*struct_sOopC9hsRAEdoU49fCImioD_tag*/

#ifndef typedef_c12_coder_internal_stack
#define typedef_c12_coder_internal_stack

typedef struct sOopC9hsRAEdoU49fCImioD_tag c12_coder_internal_stack;

#endif                                 /*typedef_c12_coder_internal_stack*/

#ifndef struct_tag_szVgRoYADpv9jTouZDFZ3mB
#define struct_tag_szVgRoYADpv9jTouZDFZ3mB

struct tag_szVgRoYADpv9jTouZDFZ3mB
{
  int32_T idx;
  int32_T col;
  int32_T row;
};

#endif                                 /*struct_tag_szVgRoYADpv9jTouZDFZ3mB*/

#ifndef typedef_c12_szVgRoYADpv9jTouZDFZ3mB
#define typedef_c12_szVgRoYADpv9jTouZDFZ3mB

typedef struct tag_szVgRoYADpv9jTouZDFZ3mB c12_szVgRoYADpv9jTouZDFZ3mB;

#endif                                 /*typedef_c12_szVgRoYADpv9jTouZDFZ3mB*/

#ifndef struct_tag_s8y97FVnhK2Wl5Axo3qD8BH
#define struct_tag_s8y97FVnhK2Wl5Axo3qD8BH

struct tag_s8y97FVnhK2Wl5Axo3qD8BH
{
  real_T fnB[1440];
  real_T fnT[600];
};

#endif                                 /*struct_tag_s8y97FVnhK2Wl5Axo3qD8BH*/

#ifndef typedef_c12_s8y97FVnhK2Wl5Axo3qD8BH
#define typedef_c12_s8y97FVnhK2Wl5Axo3qD8BH

typedef struct tag_s8y97FVnhK2Wl5Axo3qD8BH c12_s8y97FVnhK2Wl5Axo3qD8BH;

#endif                                 /*typedef_c12_s8y97FVnhK2Wl5Axo3qD8BH*/

#ifndef typedef_c12_coder_internal_anonymous_function
#define typedef_c12_coder_internal_anonymous_function

typedef struct {
  c12_cell_wrap_1 tunableEnvironment[2];
} c12_coder_internal_anonymous_function;

#endif                                 /*typedef_c12_coder_internal_anonymous_function*/

#ifndef typedef_SFc12_PID_Cdelta_UInstanceStruct
#define typedef_SFc12_PID_Cdelta_UInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c12_sfEvent;
  boolean_T c12_doneDoubleBufferReInit;
  uint8_T c12_is_active_c12_PID_Cdelta_U;
  uint8_T c12_JITStateAnimation[1];
  uint8_T c12_JITTransitionAnimation[1];
  void *c12_RuntimeVar;
  real_T c12_fnB[1440];
  boolean_T c12_fnB_not_empty;
  real_T c12_fnT[600];
  boolean_T c12_fnT_not_empty;
  uint32_T c12_mlFcnLineNumber;
  void *c12_fcnDataPtrs[31];
  char_T *c12_dataNames[31];
  uint32_T c12_numFcnVars;
  uint32_T c12_ssIds[31];
  uint32_T c12_statuses[31];
  void *c12_outMexFcns[31];
  void *c12_inMexFcns[31];
  CovrtStateflowInstance *c12_covrtInstance;
  void *c12_fEmlrtCtx;
  real_T *c12_netS;
  real_T *c12_Dyaw;
  real_T *c12_yaw;
} SFc12_PID_Cdelta_UInstanceStruct;

#endif                                 /*typedef_SFc12_PID_Cdelta_UInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c12_PID_Cdelta_U_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c12_PID_Cdelta_U_get_check_sum(mxArray *plhs[]);
extern void c12_PID_Cdelta_U_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
