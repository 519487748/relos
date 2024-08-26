#ifndef __c2_untitled_h__
#define __c2_untitled_h__

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

#ifndef typedef_c2_sBaHy6MF1FZJsDHxMqvBaiH
#define typedef_c2_sBaHy6MF1FZJsDHxMqvBaiH

typedef struct tag_sBaHy6MF1FZJsDHxMqvBaiH c2_sBaHy6MF1FZJsDHxMqvBaiH;

#endif                                 /*typedef_c2_sBaHy6MF1FZJsDHxMqvBaiH*/

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

#ifndef typedef_c2_emxArray_real_T
#define typedef_c2_emxArray_real_T

typedef struct emxArray_real_T c2_emxArray_real_T;

#endif                                 /*typedef_c2_emxArray_real_T*/

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

#ifndef typedef_c2_emxArray_int32_T
#define typedef_c2_emxArray_int32_T

typedef struct emxArray_int32_T c2_emxArray_int32_T;

#endif                                 /*typedef_c2_emxArray_int32_T*/

#ifndef typedef_c2_coder_internal_sparse
#define typedef_c2_coder_internal_sparse

typedef struct {
  c2_emxArray_real_T *d;
  c2_emxArray_int32_T *colidx;
  c2_emxArray_int32_T *rowidx;
  int32_T maxnz;
} c2_coder_internal_sparse;

#endif                                 /*typedef_c2_coder_internal_sparse*/

#ifndef typedef_c2_cell_wrap_1
#define typedef_c2_cell_wrap_1

typedef struct {
  c2_emxArray_int32_T *f1;
} c2_cell_wrap_1;

#endif                                 /*typedef_c2_cell_wrap_1*/

#ifndef struct_emxArray_tag_sBaHy6MF1FZJsDHxMq
#define struct_emxArray_tag_sBaHy6MF1FZJsDHxMq

struct emxArray_tag_sBaHy6MF1FZJsDHxMq
{
  c2_sBaHy6MF1FZJsDHxMqvBaiH data[120];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_tag_sBaHy6MF1FZJsDHxMq*/

#ifndef typedef_c2_emxArray_sBaHy6MF1FZJsDHxMqvBai
#define typedef_c2_emxArray_sBaHy6MF1FZJsDHxMqvBai

typedef struct emxArray_tag_sBaHy6MF1FZJsDHxMq
  c2_emxArray_sBaHy6MF1FZJsDHxMqvBai;

#endif                                 /*typedef_c2_emxArray_sBaHy6MF1FZJsDHxMqvBai*/

#ifndef struct_sOopC9hsRAEdoU49fCImioD_tag
#define struct_sOopC9hsRAEdoU49fCImioD_tag

struct sOopC9hsRAEdoU49fCImioD_tag
{
  c2_emxArray_sBaHy6MF1FZJsDHxMqvBai d;
  int32_T n;
};

#endif                                 /*struct_sOopC9hsRAEdoU49fCImioD_tag*/

#ifndef typedef_c2_coder_internal_stack
#define typedef_c2_coder_internal_stack

typedef struct sOopC9hsRAEdoU49fCImioD_tag c2_coder_internal_stack;

#endif                                 /*typedef_c2_coder_internal_stack*/

#ifndef struct_tag_szVgRoYADpv9jTouZDFZ3mB
#define struct_tag_szVgRoYADpv9jTouZDFZ3mB

struct tag_szVgRoYADpv9jTouZDFZ3mB
{
  int32_T idx;
  int32_T col;
  int32_T row;
};

#endif                                 /*struct_tag_szVgRoYADpv9jTouZDFZ3mB*/

#ifndef typedef_c2_szVgRoYADpv9jTouZDFZ3mB
#define typedef_c2_szVgRoYADpv9jTouZDFZ3mB

typedef struct tag_szVgRoYADpv9jTouZDFZ3mB c2_szVgRoYADpv9jTouZDFZ3mB;

#endif                                 /*typedef_c2_szVgRoYADpv9jTouZDFZ3mB*/

#ifndef struct_tag_skehD9MZpZGlvdWw7AumsmD
#define struct_tag_skehD9MZpZGlvdWw7AumsmD

struct tag_skehD9MZpZGlvdWw7AumsmD
{
  real_T fnB[720];
  real_T fnT[80];
};

#endif                                 /*struct_tag_skehD9MZpZGlvdWw7AumsmD*/

#ifndef typedef_c2_skehD9MZpZGlvdWw7AumsmD
#define typedef_c2_skehD9MZpZGlvdWw7AumsmD

typedef struct tag_skehD9MZpZGlvdWw7AumsmD c2_skehD9MZpZGlvdWw7AumsmD;

#endif                                 /*typedef_c2_skehD9MZpZGlvdWw7AumsmD*/

#ifndef typedef_c2_coder_internal_anonymous_function
#define typedef_c2_coder_internal_anonymous_function

typedef struct {
  c2_cell_wrap_1 tunableEnvironment[2];
} c2_coder_internal_anonymous_function;

#endif                                 /*typedef_c2_coder_internal_anonymous_function*/

#ifndef typedef_SFc2_untitledInstanceStruct
#define typedef_SFc2_untitledInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_untitled;
  uint8_T c2_JITStateAnimation[1];
  uint8_T c2_JITTransitionAnimation[1];
  void *c2_RuntimeVar;
  real_T c2_fnB[720];
  boolean_T c2_fnB_not_empty;
  real_T c2_fnT[80];
  boolean_T c2_fnT_not_empty;
  uint32_T c2_mlFcnLineNumber;
  void *c2_fcnDataPtrs[31];
  char_T *c2_dataNames[31];
  uint32_T c2_numFcnVars;
  uint32_T c2_ssIds[31];
  uint32_T c2_statuses[31];
  void *c2_outMexFcns[31];
  void *c2_inMexFcns[31];
  CovrtStateflowInstance *c2_covrtInstance;
  void *c2_fEmlrtCtx;
  real_T (*c2_netS_data)[2];
  int32_T (*c2_netS_sizes)[2];
  real_T *c2_relS;
} SFc2_untitledInstanceStruct;

#endif                                 /*typedef_SFc2_untitledInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_untitled_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_untitled_get_check_sum(mxArray *plhs[]);
extern void c2_untitled_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
