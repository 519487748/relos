/* Include files */

#include "untitled_sfun.h"
#include "c2_untitled.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtRSInfo c2_emlrtRSI = { 18, /* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\kan-polar\\test\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 19,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\kan-polar\\test\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 26,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\kan-polar\\test\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 28,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\kan-polar\\test\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 32,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\kan-polar\\test\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 6,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 7,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 15,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 16,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 17,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 18,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 20,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 27,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled:1"                        /* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 31,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled:1"                        /* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 132,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 170,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 133,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 103,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 288,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 306,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 13,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 221,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 211,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 149,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 140,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 128,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 122,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 121,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 1665,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 1681,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 1683,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 1684,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 18,/* lineNo */
  "insertionsort",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\insertionsort.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 41,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 58,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 55,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 49,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 47,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 44,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 42,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 34,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 20,/* lineNo */
  "heapsort",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 1692,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 14,/* lineNo */
  "max",                               /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 20,/* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 45,/* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 167,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 320,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 361,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 14,/* lineNo */
  "fillIn",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\fillIn.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 266,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 66,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 78,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 81,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 110,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 115,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 123,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 337,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 342,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 245,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 246,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 1482,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 156,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 287,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 307,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 310,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 322,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 329,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 334,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 453,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 351,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 380,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 410,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 417,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 1508,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 252,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 20,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 81,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c2_fd_emlrtRSI = { 93,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c2_gd_emlrtRSI = { 104,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c2_hd_emlrtRSI = { 178,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_id_emlrtRSI = { 1636,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_jd_emlrtRSI = { 277,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_kd_emlrtRSI = { 56,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_ld_emlrtRSI = { 132,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_md_emlrtRSI = { 174,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_nd_emlrtRSI = { 184,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_od_emlrtRSI = { 186,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_pd_emlrtRSI = { 198,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_qd_emlrtRSI = { 435,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_rd_emlrtRSI = { 102,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo c2_sd_emlrtRSI = { 232,/* lineNo */
  "mtimes",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled:1"                        /* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 91,/* lineNo */
  35,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 245,/* lineNo */
  30,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 246,/* lineNo */
  25,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 6,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 7,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 20,/* lineNo */
  10,                                  /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\kan-polar\\test\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 1,/* lineNo */
  41,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m"/* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 121,/* lineNo */
  5,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 122,/* lineNo */
  5,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 126,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 132,/* lineNo */
  13,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 132,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_q_emlrtRTEI = { 133,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_r_emlrtRTEI = { 134,/* lineNo */
  15,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 103,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 135,/* lineNo */
  15,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_u_emlrtRTEI = { 135,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_v_emlrtRTEI = { 137,/* lineNo */
  18,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_w_emlrtRTEI = { 137,/* lineNo */
  30,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_x_emlrtRTEI = { 137,/* lineNo */
  25,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_y_emlrtRTEI = { 124,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_ab_emlrtRTEI = { 1,/* lineNo */
  24,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c2_bb_emlrtRTEI = { 121,/* lineNo */
  43,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_cb_emlrtRTEI = { 122,/* lineNo */
  43,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_db_emlrtRTEI = { 13,/* lineNo */
  5,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_eb_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_fb_emlrtRTEI = { 121,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_gb_emlrtRTEI = { 122,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_hb_emlrtRTEI = { 127,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_ib_emlrtRTEI = { 1647,/* lineNo */
  17,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_jb_emlrtRTEI = { 1679,/* lineNo */
  22,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_kb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "insertionsort",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\insertionsort.m"/* pName */
};

static emlrtRTEInfo c2_lb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c2_mb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c2_nb_emlrtRTEI = { 40,/* lineNo */
  14,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c2_ob_emlrtRTEI = { 1689,/* lineNo */
  14,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_pb_emlrtRTEI = { 1,/* lineNo */
  17,                                  /* colNo */
  "fillIn",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\fillIn.m"/* pName */
};

static emlrtRTEInfo c2_qb_emlrtRTEI = { 256,/* lineNo */
  25,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_rb_emlrtRTEI = { 324,/* lineNo */
  17,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_sb_emlrtRTEI = { 310,/* lineNo */
  61,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c2_tb_emlrtRTEI = { 310,/* lineNo */
  63,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c2_ub_emlrtRTEI = { 1482,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_vb_emlrtRTEI = { 329,/* lineNo */
  32,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c2_wb_emlrtRTEI = { 417,/* lineNo */
  17,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c2_xb_emlrtRTEI = { 410,/* lineNo */
  49,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c2_yb_emlrtRTEI = { 1508,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_ac_emlrtRTEI = { 1508,/* lineNo */
  17,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_bc_emlrtRTEI = { 277,/* lineNo */
  34,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_cc_emlrtRTEI = { 21,/* lineNo */
  14,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c2_dc_emlrtRTEI = { 16,/* lineNo */
  25,                                  /* colNo */
  "anonymous_function",                /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\anonymous_function.m"/* pName */
};

static emlrtRTEInfo c2_ec_emlrtRTEI = { 1683,/* lineNo */
  23,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_fc_emlrtRTEI = { 1684,/* lineNo */
  23,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_gc_emlrtRTEI = { 1682,/* lineNo */
  36,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_hc_emlrtRTEI = { 20,/* lineNo */
  13,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c2_ic_emlrtRTEI = { 38,/* lineNo */
  14,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c2_jc_emlrtRTEI = { 39,/* lineNo */
  50,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c2_kc_emlrtRTEI = { 36,/* lineNo */
  13,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c2_lc_emlrtRTEI = { 34,/* lineNo */
  52,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c2_mc_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c2_nc_emlrtRTEI = { 47,/* lineNo */
  56,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c2_oc_emlrtRTEI = { 49,/* lineNo */
  51,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c2_pc_emlrtRTEI = { 35,/* lineNo */
  35,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c2_qc_emlrtRTEI = { 26,/* lineNo */
  58,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c2_rc_emlrtRTEI = { 1691,/* lineNo */
  5,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_sc_emlrtRTEI = { 266,/* lineNo */
  17,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c2_tc_emlrtRTEI = { 325,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_uc_emlrtRTEI = { 326,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_vc_emlrtRTEI = { 333,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c2_wc_emlrtRTEI = { 334,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { 1,  /* iFirst */
  20,                                  /* iLast */
  9,                                   /* lineNo */
  1,                                   /* colNo */
  "ind",                               /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 9,  /* lineNo */
  1,                                   /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { 1,/* iFirst */
  20,                                  /* iLast */
  10,                                  /* lineNo */
  1,                                   /* colNo */
  "ind",                               /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 10,/* lineNo */
  1,                                   /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { 1,/* iFirst */
  4,                                   /* iLast */
  13,                                  /* lineNo */
  10,                                  /* colNo */
  "I",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 13,/* lineNo */
  10,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { 1,/* iFirst */
  4,                                   /* iLast */
  14,                                  /* lineNo */
  10,                                  /* colNo */
  "I",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 14,/* lineNo */
  10,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { 1,/* iFirst */
  4,                                   /* iLast */
  15,                                  /* lineNo */
  11,                                  /* colNo */
  "M",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 15,/* lineNo */
  11,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { 1,/* iFirst */
  4,                                   /* iLast */
  16,                                  /* lineNo */
  11,                                  /* colNo */
  "M",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 16,/* lineNo */
  11,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\kan-polar\\test\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 13,/* lineNo */
  1,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 1508,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 48,/* lineNo */
  48,                                  /* colNo */
  "stack",                             /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\stack.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRSInfo c2_td_emlrtRSI = { 325,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_ud_emlrtRSI = { 1691,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c2_vd_emlrtRSI = { 122,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_wd_emlrtRSI = { 121,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_xd_emlrtRSI = { 326,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c2_yd_emlrtRSI = { 137,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_ae_emlrtRSI = { 126,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_be_emlrtRSI = { 135,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_ce_emlrtRSI = { 134,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c2_de_emlrtRSI = { 35,/* lineNo */
  "heapsort",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pathName */
};

static emlrtRSInfo c2_ee_emlrtRSI = { 26,/* lineNo */
  "heapsort",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pathName */
};

static const real_T c2_dv[3] = { -2.0, 4.0, -2.0 };

static const char_T c2_cv[36] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'p',
  'd', 'i', 'a', 'g', 's', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z',
  'e', 'B', 'F', 'o', 'u', 'r', 'I', 'n', 'p', 'u', 't' };

static const char_T c2_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
  'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

static const char_T c2_cv2[14] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'a',
  'm', 'e', 'l', 'e', 'n' };

static const char_T c2_cv3[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i',
  'l', 't', 'i', 'n', 's', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'B', 'o', 'u', 'n', 'd', 's' };

static const char_T c2_cv4[25] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
  'L', 'A', 'B', ':', 'b', 'a', 'd', 's', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't'
};

static const char_T c2_cv5[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i',
  'l', 't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
  'a', 'i', 'l', 'e', 'd' };

static const c2_szVgRoYADpv9jTouZDFZ3mB c2_r = { 1,/* idx */
  1,                                   /* col */
  1                                    /* row */
};

/* Function Declarations */
static void initialize_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void initialize_params_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance);
static void enable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void disable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void c2_update_jit_animation_state_c2_untitled
  (SFc2_untitledInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance);
static void ext_mode_exec_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance);
static void set_sim_state_c2_untitled(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_st);
static void finalize_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void sf_gateway_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void mdl_start_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void c2_chartstep_c2_untitled(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp);
static void initSimStructsc2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static real_T c2_Copy_of_modelKA_basisC(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_b_fnB[720], real_T
  c2_b_fnT[80]);
static void c2_splineMatrix(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_M[36]);
static void c2_b_splineMatrix(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_M[16]);
static void c2_basisFunc_spline(SFc2_untitledInstanceStruct *chartInstance,
  real_T c2_M[36], real_T c2_val[36], real_T c2_dval[36], real_T c2_ddval[36]);
static void c2_b_basisFunc_spline(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_xx[20], real_T c2_M[16], real_T c2_val[80],
  real_T c2_dval[80], real_T c2_ddval[80], real_T c2_dddval[80]);
static void c2_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1);
static void c2_check_forloop_overflow_error(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_sparse(SFc2_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c2_sp, c2_emxArray_int32_T *c2_varargin_1,
                      c2_emxArray_int32_T *c2_varargin_2, c2_emxArray_real_T
                      *c2_varargin_3, c2_coder_internal_sparse *c2_y);
static void c2_assertValidIndexArg(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_s, c2_emxArray_int32_T
  *c2_sint);
static void c2_locSortrows(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_a,
  c2_emxArray_int32_T *c2_b, c2_emxArray_int32_T *c2_b_idx, c2_emxArray_int32_T *
  c2_b_a, c2_emxArray_int32_T *c2_b_b);
static void c2_insertionsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp, c2_emxArray_int32_T
  *c2_b_x);
static void c2_introsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xend,
  c2_coder_internal_anonymous_function c2_cmp, c2_emxArray_int32_T *c2_b_x);
static void c2_heapsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp, c2_emxArray_int32_T
  *c2_b_x);
static void c2_heapify(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_idx, int32_T
  c2_xstart, int32_T c2_xend, c2_coder_internal_anonymous_function c2_cmp,
  c2_emxArray_int32_T *c2_b_x);
static void c2_permuteVector(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_y,
  c2_emxArray_int32_T *c2_b_y);
static void c2_sparse_fillIn(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, c2_coder_internal_sparse *
  c2_b_this);
static void c2_b_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1);
static void c2_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this);
static void c2_sparse_validateNumericIndex(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_sparse_locBsearch(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_int32_T *c2_x, int32_T c2_xi, int32_T c2_xstart, int32_T c2_xend,
  int32_T *c2_n, boolean_T *c2_found);
static void c2_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs, c2_coder_internal_sparse *c2_b_this);
static void c2_b_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this);
static void c2_b_sparse_validateNumericIndex(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_sparse_mldivide(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_A, c2_coder_internal_sparse
  c2_b, c2_coder_internal_sparse *c2_y);
static void c2_warning(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp);
static void c2_CXSparseAPI_iteratedQR(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_A,
  c2_coder_internal_sparse c2_b, c2_coder_internal_sparse *c2_out);
static void c2_sparse_spallocLike(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_s);
static void c2_b_sparse_spallocLike(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_nzmax, c2_coder_internal_sparse *c2_s);
static void c2_sparse_full(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, real_T c2_y[6]);
static int32_T c2_countNumnzInColumn(SFc2_untitledInstanceStruct *chartInstance,
  real_T c2_rhs[6], c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter);
static void c2_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter, int32_T c2_outStart, real_T c2_rhs[6],
  c2_coder_internal_sparse *c2_b_this, int32_T *c2_outIdx,
  c2_szVgRoYADpv9jTouZDFZ3mB *c2_b_rhsIter);
static void c2_c_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1);
static void c2_b_sparse(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_varargin_1, c2_emxArray_int32_T
  *c2_varargin_2, c2_emxArray_real_T *c2_varargin_3, c2_coder_internal_sparse
  *c2_y);
static void c2_d_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1);
static void c2_c_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this);
static void c2_b_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs, c2_coder_internal_sparse *c2_b_this);
static void c2_d_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this);
static void c2_c_sparse_validateNumericIndex(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_b_sparse_mldivide(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_A,
  c2_coder_internal_sparse c2_b, c2_coder_internal_sparse *c2_y);
static void c2_b_CXSparseAPI_iteratedQR(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_sparse c2_A,
  c2_coder_internal_sparse c2_b, c2_coder_internal_sparse *c2_out);
static void c2_c_sparse_spallocLike(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_s);
static void c2_b_sparse_full(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, real_T c2_y[4]);
static int32_T c2_b_countNumnzInColumn(SFc2_untitledInstanceStruct
  *chartInstance, real_T c2_rhs[4], c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter);
static void c2_b_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter, int32_T c2_outStart, real_T c2_rhs[4],
  c2_coder_internal_sparse *c2_b_this, int32_T *c2_outIdx,
  c2_szVgRoYADpv9jTouZDFZ3mB *c2_b_rhsIter);
static void c2_floor(SFc2_untitledInstanceStruct *chartInstance, real_T c2_x[20],
                     real_T c2_b_x[20]);
static void c2_eye(SFc2_untitledInstanceStruct *chartInstance, real_T c2_I[16]);
static void c2_repmat(SFc2_untitledInstanceStruct *chartInstance, real_T c2_a[20],
                      real_T c2_b[80]);
static real_T c2_sqrt(SFc2_untitledInstanceStruct *chartInstance, real_T c2_x);
static const mxArray *c2_emlrt_marshallOut(SFc2_untitledInstanceStruct
  *chartInstance, const char * c2_u);
static void c2_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_a__output_of_load_, const char_T *c2_identifier,
  c2_skehD9MZpZGlvdWw7AumsmD *c2_y);
static void c2_b_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  c2_skehD9MZpZGlvdWw7AumsmD *c2_y);
static void c2_c_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[720]);
static void c2_d_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[80]);
static void c2_e_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_netS, const char_T *c2_identifier, real_T c2_y_data[],
  int32_T c2_y_size[2]);
static void c2_f_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y_data[],
  int32_T c2_y_size[2]);
static real_T c2_g_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_relS, const char_T *c2_identifier);
static real_T c2_h_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_i_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_fnB, const char_T *c2_identifier, boolean_T *c2_svPtr,
  real_T c2_y[720]);
static void c2_j_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, real_T c2_y[720]);
static void c2_k_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_fnT, const char_T *c2_identifier, boolean_T *c2_svPtr,
  real_T c2_y[80]);
static void c2_l_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, real_T c2_y[80]);
static uint8_T c2_m_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled, const char_T *c2_identifier);
static uint8_T c2_n_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static const mxArray *c2_chart_data_browse_helper(SFc2_untitledInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber);
static void c2_b_locSortrows(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_a,
  c2_emxArray_int32_T *c2_b);
static void c2_b_insertionsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp);
static void c2_b_introsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xend,
  c2_coder_internal_anonymous_function c2_cmp);
static void c2_b_heapsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp);
static void c2_b_heapify(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_idx, int32_T
  c2_xstart, int32_T c2_xend, c2_coder_internal_anonymous_function c2_cmp);
static void c2_b_permuteVector(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_y);
static void c2_b_sparse_fillIn(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this);
static void c2_e_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this);
static void c2_c_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs);
static void c2_f_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this);
static int32_T c2_c_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  c2_coder_internal_sparse *c2_this, c2_szVgRoYADpv9jTouZDFZ3mB *c2_rhsIter,
  int32_T c2_outStart, real_T c2_rhs[6]);
static void c2_g_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this);
static void c2_d_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs);
static void c2_h_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this);
static int32_T c2_d_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  c2_coder_internal_sparse *c2_this, c2_szVgRoYADpv9jTouZDFZ3mB *c2_rhsIter,
  int32_T c2_outStart, real_T c2_rhs[4]);
static void c2_b_floor(SFc2_untitledInstanceStruct *chartInstance, real_T c2_x
  [20]);
static void c2_b_sqrt(SFc2_untitledInstanceStruct *chartInstance, real_T *c2_x);
static void c2_emxEnsureCapacity_int32_T(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_real_T(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_coder_internal_sp(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_pStruct,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_real_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_int32_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_real_T(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray);
static void c2_emxFreeStruct_coder_internal_sp(SFc2_untitledInstanceStruct
  *chartInstance, c2_coder_internal_sparse *c2_pStruct);
static void c2_emxFree_int32_T(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_int32_T **c2_pEmxArray);
static void c2_emxEnsureCapacity_real_T1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_int32_T1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_real_T1(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_int32_T1(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyStruct_coder_internal_an(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_anonymous_function *
  c2_dst, const c2_coder_internal_anonymous_function *c2_src, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxCopyMatrix_real_T(SFc2_untitledInstanceStruct *chartInstance);
static void c2_emxCopyMatrix_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 c2_dst[2], const
  c2_cell_wrap_1 c2_src[2], const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyStruct_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 *c2_dst, const
  c2_cell_wrap_1 *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopy_int32_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T **c2_dst, c2_emxArray_int32_T * const
  *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_coder_internal_an(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_anonymous_function *
  c2_pStruct, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitMatrix_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 c2_pMatrix[2], const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxFreeMatrix_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, c2_cell_wrap_1 c2_pMatrix[2]);
static void c2_emxFreeStruct_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, c2_cell_wrap_1 *c2_pStruct);
static void c2_emxFreeStruct_coder_internal_an(SFc2_untitledInstanceStruct
  *chartInstance, c2_coder_internal_anonymous_function *c2_pStruct);
static void c2_emxCopyStruct_coder_internal_sp(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_dst,
  const c2_coder_internal_sparse *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopy_real_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_dst, c2_emxArray_real_T * const
  *c2_src, const emlrtRTEInfo *c2_srcLocation);
static int32_T c2_div_nzp_s32(SFc2_untitledInstanceStruct *chartInstance,
  int32_T c2_numerator, int32_T c2_denominator, int32_T c2_EMLOvCount_src_loc,
  uint32_T c2_ssid_src_loc, int32_T c2_offset_src_loc, int32_T c2_length_src_loc);
static void init_dsm_address_info(SFc2_untitledInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_untitledInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_fnB_not_empty = false;
  chartInstance->c2_fnT_not_empty = false;
  chartInstance->c2_is_active_c2_untitled = 0U;
}

static void initialize_params_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_untitled
  (SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(5, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_netS_data, 0, 0U,
    1U, 0U, 2, (*chartInstance->c2_netS_sizes)[0],
    (*chartInstance->c2_netS_sizes)[1]), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_relS, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  if (!chartInstance->c2_fnB_not_empty) {
    sf_mex_assign(&c2_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_fnB, 0, 0U, 1U,
      0U, 2, 6, 120), false);
  }

  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  if (!chartInstance->c2_fnT_not_empty) {
    sf_mex_assign(&c2_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_e_y, sf_mex_create("y", chartInstance->c2_fnT, 0, 0U, 1U,
      0U, 2, 4, 20), false);
  }

  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_untitled, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 4, c2_f_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_untitled(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T c2_tmp_data[2];
  int32_T c2_tmp_size[2];
  int32_T c2_loop_ub;
  int32_T c2_i;
  real_T c2_b_dv[720];
  int32_T c2_i1;
  real_T c2_dv1[80];
  int32_T c2_i2;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)),
                        "netS", c2_tmp_data, c2_tmp_size);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 0, c2_tmp_size[0]);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 1, 1);
  c2_loop_ub = c2_tmp_size[0] * c2_tmp_size[1] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    (*chartInstance->c2_netS_data)[c2_i] = c2_tmp_data[c2_i];
  }

  *chartInstance->c2_relS = c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 1)), "relS");
  c2_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 2)),
                        "fnB", &chartInstance->c2_fnB_not_empty, c2_b_dv);
  for (c2_i1 = 0; c2_i1 < 720; c2_i1++) {
    chartInstance->c2_fnB[c2_i1] = c2_b_dv[c2_i1];
  }

  c2_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 3)),
                        "fnT", &chartInstance->c2_fnT_not_empty, c2_dv1);
  for (c2_i2 = 0; c2_i2 < 80; c2_i2++) {
    chartInstance->c2_fnT[c2_i2] = c2_dv1[c2_i2];
  }

  chartInstance->c2_is_active_c2_untitled = c2_m_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 4)), "is_active_c2_untitled");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void sf_gateway_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c2_loop_ub;
  int32_T c2_i;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_chartstep_c2_untitled(chartInstance, &c2_st);
  c2_do_animation_call_c2_untitled(chartInstance);
  c2_loop_ub = (*chartInstance->c2_netS_sizes)[0] *
    (*chartInstance->c2_netS_sizes)[1] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U,
                      (*chartInstance->c2_netS_data)[c2_i]);
  }

  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, *chartInstance->c2_relS);
}

static void mdl_start_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const int32_T c2_condTxtStartIdx[2] = { 84, 100 };

  static const int32_T c2_condTxtEndIdx[2] = { 96, 112 };

  static const int32_T c2_postfixPredicateTree[3] = { 0, 1, -2 };

  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    4U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 2U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 938);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 81, 112, -1,
                    211);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 84, 112, 2U,
                      0U, c2_condTxtStartIdx, c2_condTxtEndIdx, 3U,
                      c2_postfixPredicateTree);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance,
                  "D:/1/kan-polar/test/Copy_of_modelKA_basisC.m", 14U, 0U, 1U,
                  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U,
                     "Copy_of_modelKA_basisC", 0, -1, 997);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance,
                  "D:/1/kan-polar/test/splineMatrix.m", 14U, 1U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 0U,
                     "splineMatrix", 0, -1, 419);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance,
                  "D:/1/kan-polar/test/basisFunc_spline.m", 14U, 2U, 1U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 2U, 0U,
                     "basisFunc_spline", 0, -1, 699);
}

static void c2_chartstep_c2_untitled(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp)
{
  emlrtStack c2_st;
  c2_skehD9MZpZGlvdWw7AumsmD c2_data;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  real_T c2_b_dv[720];
  int32_T c2_i3;
  int32_T c2_netS_size[2];
  real_T c2_dv1[80];
  emlrtStack *c2_b_r;
  real_T c2_d;
  real_T c2_b_netS_data[2];
  real_T c2_b_relS;
  int32_T c2_loop_ub;
  int32_T c2_i4;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 0,
                       !chartInstance->c2_fnB_not_empty) || covrtEmlCondEval
      (chartInstance->c2_covrtInstance, 4U, 0, 1,
       !chartInstance->c2_fnT_not_empty)) {
    covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0, true);
    c2_emlrt_marshallIn(chartInstance, sf_mex_call(c2_sp, "load", 1U, 1U, 14,
      c2_emlrt_marshallOut(chartInstance, "trainedKAmodel.mat")),
                        "<output of load>", &c2_data);
    for (c2_i1 = 0; c2_i1 < 720; c2_i1++) {
      chartInstance->c2_fnB[c2_i1] = c2_data.fnB[c2_i1];
    }

    chartInstance->c2_fnB_not_empty = true;
    for (c2_i3 = 0; c2_i3 < 80; c2_i3++) {
      chartInstance->c2_fnT[c2_i3] = c2_data.fnT[c2_i3];
    }

    chartInstance->c2_fnT_not_empty = true;
  } else {
    covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0, false);
  }

  for (c2_i = 0; c2_i < 720; c2_i++) {
    c2_b_dv[c2_i] = chartInstance->c2_fnB[c2_i];
  }

  for (c2_i2 = 0; c2_i2 < 80; c2_i2++) {
    c2_dv1[c2_i2] = chartInstance->c2_fnT[c2_i2];
  }

  c2_netS_size[0] = 1;
  c2_netS_size[1] = 1;
  c2_st.site = &c2_m_emlrtRSI;
  c2_b_r = &c2_st;
  c2_d = c2_Copy_of_modelKA_basisC(chartInstance, c2_b_r, c2_b_dv, c2_dv1);
  c2_b_netS_data[0] = c2_d;
  c2_b_relS = 0.00020289153600000777;
  c2_b_sqrt(chartInstance, &c2_b_relS);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 0, c2_netS_size
    [0]);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 1, 1);
  c2_loop_ub = c2_netS_size[0] * c2_netS_size[1] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
    (*chartInstance->c2_netS_data)[c2_i4] = c2_b_netS_data[c2_i4];
  }

  *chartInstance->c2_relS = c2_b_relS;
}

static void initSimStructsc2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c2_Copy_of_modelKA_basisC(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_b_fnB[720], real_T
  c2_b_fnT[80])
{
  real_T c2_yhat_all;
  emlrtStack c2_st;
  real_T c2_Mn[36];
  real_T c2_Mq[16];
  int32_T c2_i;
  int32_T c2_i1;
  real_T c2_fnB_r[720];
  real_T c2_fnT_r[80];
  real_T c2_phi[36];
  real_T c2_dphi[36];
  real_T c2_ddphi[36];
  char_T c2_TRANSB1;
  char_T c2_TRANSA1;
  real_T c2_alpha1;
  real_T c2_beta1;
  ptrdiff_t c2_m_t;
  ptrdiff_t c2_n_t;
  ptrdiff_t c2_k_t;
  ptrdiff_t c2_lda_t;
  ptrdiff_t c2_ldb_t;
  ptrdiff_t c2_ldc_t;
  real_T c2_t[20];
  real_T c2_psi[80];
  real_T c2_dpsi[80];
  real_T c2_ddpsi[80];
  real_T c2_dddpsi[80];
  int32_T c2_k;
  int32_T c2_b_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 0, 0);
  c2_st.site = &c2_emlrtRSI;
  c2_splineMatrix(chartInstance, &c2_st, c2_Mn);
  c2_st.site = &c2_b_emlrtRSI;
  c2_b_splineMatrix(chartInstance, &c2_st, c2_Mq);
  for (c2_i = 0; c2_i < 720; c2_i++) {
    c2_fnB_r[c2_i] = c2_b_fnB[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 80; c2_i1++) {
    c2_fnT_r[c2_i1] = c2_b_fnT[c2_i1];
  }

  c2_st.site = &c2_c_emlrtRSI;
  c2_basisFunc_spline(chartInstance, c2_Mn, c2_phi, c2_dphi, c2_ddphi);
  c2_st.site = &c2_d_emlrtRSI;
  c2_TRANSB1 = 'N';
  c2_TRANSA1 = 'T';
  c2_alpha1 = 1.0;
  c2_beta1 = 0.0;
  c2_m_t = (ptrdiff_t)1;
  c2_n_t = (ptrdiff_t)20;
  c2_k_t = (ptrdiff_t)36;
  c2_lda_t = (ptrdiff_t)36;
  c2_ldb_t = (ptrdiff_t)36;
  c2_ldc_t = (ptrdiff_t)1;
  dgemm(&c2_TRANSA1, &c2_TRANSB1, &c2_m_t, &c2_n_t, &c2_k_t, &c2_alpha1,
        &c2_phi[0], &c2_lda_t, &c2_fnB_r[0], &c2_ldb_t, &c2_beta1, &c2_t[0],
        &c2_ldc_t);
  c2_st.site = &c2_e_emlrtRSI;
  c2_b_basisFunc_spline(chartInstance, &c2_st, c2_t, c2_Mq, c2_psi, c2_dpsi,
                        c2_ddpsi, c2_dddpsi);
  c2_yhat_all = 0.0;
  for (c2_k = 0; c2_k < 80; c2_k++) {
    c2_b_k = c2_k;
    c2_yhat_all += c2_psi[c2_b_k] * c2_fnT_r[c2_b_k];
  }

  return c2_yhat_all;
}

static void c2_splineMatrix(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_M[36])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  c2_coder_internal_sparse c2_A;
  c2_coder_internal_sparse c2_B;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  c2_emxArray_int32_T *c2_b_B;
  int32_T c2_cidx;
  int32_T c2_b_cidx;
  int32_T c2_k;
  real_T c2_nt;
  int32_T c2_col;
  int32_T c2_i;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_b_rhsIter;
  int32_T c2_loop_ub;
  c2_emxArray_int32_T *c2_c_B;
  int32_T c2_i1;
  int32_T c2_c_cidx;
  int32_T c2_vidx;
  boolean_T c2_found;
  int32_T c2_d_cidx;
  int32_T c2_b_k;
  real_T c2_thisv;
  real_T c2_b_nt;
  c2_coder_internal_sparse c2_this;
  int32_T c2_b_col;
  real_T c2_v;
  int32_T c2_i2;
  int32_T c2_c_y;
  int32_T c2_d_y;
  int32_T c2_b_loop_ub;
  real_T c2_rhsv;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_n;
  int32_T c2_b_vidx;
  boolean_T c2_b_found;
  real_T c2_b_n;
  int32_T c2_c;
  real_T c2_e_y[36];
  int32_T c2_nz;
  real_T c2_b_thisv;
  int32_T c2_b_c;
  int32_T c2_i5;
  int32_T c2_cend;
  real_T c2_b_v;
  int32_T c2_idx;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_f_y;
  int32_T c2_outstart;
  int32_T c2_g_y;
  int32_T c2_instart;
  int32_T c2_i8;
  int32_T c2_a;
  int32_T c2_nelem;
  int32_T c2_b_outstart;
  int32_T c2_i9;
  int32_T c2_b;
  real_T c2_b_rhsv;
  int32_T c2_b_instart;
  int32_T c2_b_a;
  int32_T c2_b_nelem;
  int32_T c2_b_b;
  int32_T c2_c_n;
  int32_T c2_c_col;
  int32_T c2_i10;
  real_T c2_d_n;
  int32_T c2_i11;
  int32_T c2_d_col;
  boolean_T c2_overflow;
  int32_T c2_b_nz;
  int32_T c2_c_k;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_c_loop_ub;
  int32_T c2_d_k;
  int32_T c2_i14;
  int32_T c2_b_idx;
  int32_T c2_d_loop_ub;
  int32_T c2_c_idx;
  int32_T c2_c_outstart;
  int32_T c2_d_outstart;
  int32_T c2_i15;
  int32_T c2_c_instart;
  int32_T c2_d_instart;
  int32_T c2_c_nelem;
  int32_T c2_e_outstart;
  int32_T c2_d_nelem;
  int32_T c2_f_outstart;
  int32_T c2_e_instart;
  int32_T c2_i16;
  int32_T c2_f_instart;
  int32_T c2_e_nelem;
  int32_T c2_f_nelem;
  int32_T c2_e_col;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_f_col;
  int32_T c2_e_loop_ub;
  int32_T c2_e_k;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_f_loop_ub;
  int32_T c2_f_k;
  int32_T c2_g_loop_ub;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_h_loop_ub;
  int32_T c2_g_outstart;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_g_instart;
  int32_T c2_g_nelem;
  int32_T c2_h_outstart;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_h_instart;
  int32_T c2_i_loop_ub;
  int32_T c2_h_nelem;
  int32_T c2_i29;
  int32_T c2_i30;
  int32_T c2_j_loop_ub;
  int32_T c2_k_loop_ub;
  int32_T c2_i_outstart;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i_instart;
  int32_T c2_l_loop_ub;
  int32_T c2_i_nelem;
  int32_T c2_j_outstart;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_j_instart;
  int32_T c2_j_nelem;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_m_loop_ub;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_n_loop_ub;
  int32_T c2_o_loop_ub;
  int32_T c2_i39;
  int32_T c2_i40;
  int32_T c2_p_loop_ub;
  int32_T c2_k_outstart;
  int32_T c2_i41;
  int32_T c2_k_instart;
  int32_T c2_k_nelem;
  int32_T c2_l_outstart;
  int32_T c2_i42;
  int32_T c2_l_instart;
  int32_T c2_l_nelem;
  int32_T c2_i43;
  int32_T c2_q_loop_ub;
  int32_T c2_i44;
  int32_T c2_r_loop_ub;
  int32_T c2_i45;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_A,
    &c2_g_emlrtRTEI);
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_B,
    &c2_h_emlrtRTEI);
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 1, 0);
  c2_st.site = &c2_f_emlrtRSI;
  c2_spdiags(chartInstance, &c2_st, &c2_A);
  c2_st.site = &c2_g_emlrtRSI;
  c2_b_spdiags(chartInstance, &c2_st, &c2_B);
  c2_st.site = &c2_h_emlrtRSI;
  c2_e_sparse_parenAssign(chartInstance, &c2_st, &c2_A);
  c2_st.site = &c2_i_emlrtRSI;
  c2_f_sparse_parenAssign(chartInstance, &c2_st, &c2_A);
  c2_st.site = &c2_j_emlrtRSI;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_c_st.site = &c2_dc_emlrtRSI;
  c2_d_st.site = &c2_ec_emlrtRSI;
  c2_sparse_validateNumericIndex(chartInstance, &c2_d_st);
  c2_d_st.site = &c2_fc_emlrtRSI;
  c2_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, &c2_d_st, &c2_b_y, 1, &c2_e_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_b_B, 1, &c2_b_emlrtRTEI);
  for (c2_cidx = 0; c2_cidx < 3; c2_cidx++) {
    c2_b_cidx = c2_cidx;
    c2_k = c2_b_cidx;
    c2_nt = 1.0 + (real_T)c2_k;
    c2_col = (int32_T)c2_nt;
    c2_i = c2_b_B->size[0];
    c2_b_B->size[0] = c2_B.rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_d_st, c2_b_B, c2_i,
      &c2_b_emlrtRTEI);
    c2_loop_ub = c2_B.rowidx->size[0] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
      c2_b_B->data[c2_i1] = c2_B.rowidx->data[c2_i1];
    }

    c2_sparse_locBsearch(chartInstance, c2_b_B, 1, c2_B.colidx->data[c2_col - 1],
                         c2_B.colidx->data[c2_col], &c2_vidx, &c2_found);
    if (c2_found) {
      c2_thisv = c2_B.d->data[c2_vidx - 1];
    } else {
      c2_thisv = 0.0;
    }

    c2_v = c2_dv[c2_rhsIter.idx - 1];
    c2_c_y = c2_rhsIter.idx;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter.idx = c2_d_y;
    c2_rhsv = c2_v;
    if ((c2_thisv == 0.0) && (c2_rhsv == 0.0)) {
    } else {
      c2_n = c2_B.colidx->data[c2_B.colidx->size[0] - 1];
      c2_b_n = (real_T)(c2_n - 1);
      c2_nz = (int32_T)c2_b_n;
      if ((c2_thisv != 0.0) && (c2_rhsv != 0.0)) {
        c2_B.d->data[c2_vidx - 1] = c2_rhsv;
      } else if (c2_thisv == 0.0) {
        c2_idx = c2_vidx;
        if (c2_nz == c2_B.maxnz) {
          c2_e_st.site = &c2_gc_emlrtRSI;
          c2_c_realloc(chartInstance, &c2_e_st, &c2_B, c2_nz + 10, c2_idx,
                       c2_idx + 1, c2_nz, 1);
          c2_B.rowidx->data[c2_idx] = 1;
          c2_B.d->data[c2_idx] = c2_rhsv;
        } else {
          c2_e_st.site = &c2_hc_emlrtRSI;
          c2_b_outstart = c2_idx + 2;
          c2_b_instart = c2_idx + 1;
          c2_b_nelem = c2_nz - c2_idx;
          if (!(c2_b_nelem <= 0)) {
            c2_f_st.site = &c2_lc_emlrtRSI;
            c2_i12 = c2_y->size[0];
            c2_y->size[0] = c2_B.rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i12,
              &c2_c_emlrtRTEI);
            c2_d_loop_ub = c2_B.rowidx->size[0] - 1;
            for (c2_i15 = 0; c2_i15 <= c2_d_loop_ub; c2_i15++) {
              c2_y->data[c2_i15] = c2_B.rowidx->data[c2_i15];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i18 = c2_B.rowidx->size[0];
            c2_B.rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
              c2_i18, &c2_d_emlrtRTEI);
            c2_g_loop_ub = c2_y->size[0] - 1;
            for (c2_i24 = 0; c2_i24 <= c2_g_loop_ub; c2_i24++) {
              c2_B.rowidx->data[c2_i24] = c2_y->data[c2_i24];
            }

            memmove((void *)&c2_B.rowidx->data[c2_f_outstart], (void *)
                    &c2_B.rowidx->data[c2_f_instart], (uint32_T)((size_t)
                     c2_f_nelem * sizeof(int32_T)));
            c2_f_st.site = &c2_mc_emlrtRSI;
            c2_i27 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_B.d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i27,
              &c2_e_emlrtRTEI);
            c2_j_loop_ub = c2_B.d->size[0] - 1;
            for (c2_i31 = 0; c2_i31 <= c2_j_loop_ub; c2_i31++) {
              c2_b_y->data[c2_i31] = c2_B.d->data[c2_i31];
            }

            c2_j_outstart = c2_b_outstart - 1;
            c2_j_instart = c2_b_instart - 1;
            c2_j_nelem = c2_b_nelem;
            c2_i36 = c2_B.d->size[0];
            c2_B.d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i36,
              &c2_d_emlrtRTEI);
            c2_o_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i40 = 0; c2_i40 <= c2_o_loop_ub; c2_i40++) {
              c2_B.d->data[c2_i40] = c2_b_y->data[c2_i40];
            }

            memmove((void *)&c2_B.d->data[c2_j_outstart], (void *)&c2_B.d->
                    data[c2_j_instart], (uint32_T)((size_t)c2_j_nelem * sizeof
                     (real_T)));
          }

          c2_B.d->data[c2_idx] = c2_rhsv;
          c2_B.rowidx->data[c2_idx] = 1;
        }

        c2_d_col = c2_col + 1;
        c2_i13 = c2_d_col;
        for (c2_d_k = c2_i13 - 1; c2_d_k + 1 < 8; c2_d_k++) {
          c2_B.colidx->data[c2_d_k]++;
        }
      } else {
        c2_e_st.site = &c2_ic_emlrtRSI;
        c2_outstart = c2_vidx;
        c2_instart = c2_vidx + 1;
        c2_nelem = c2_nz - c2_vidx;
        if (!(c2_nelem <= 0)) {
          c2_f_st.site = &c2_lc_emlrtRSI;
          c2_i10 = c2_y->size[0];
          c2_y->size[0] = c2_B.rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i10,
            &c2_c_emlrtRTEI);
          c2_c_loop_ub = c2_B.rowidx->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_c_loop_ub; c2_i14++) {
            c2_y->data[c2_i14] = c2_B.rowidx->data[c2_i14];
          }

          c2_d_outstart = c2_outstart - 1;
          c2_d_instart = c2_instart - 1;
          c2_d_nelem = c2_nelem;
          c2_i16 = c2_B.rowidx->size[0];
          c2_B.rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
            c2_i16, &c2_d_emlrtRTEI);
          c2_e_loop_ub = c2_y->size[0] - 1;
          for (c2_i22 = 0; c2_i22 <= c2_e_loop_ub; c2_i22++) {
            c2_B.rowidx->data[c2_i22] = c2_y->data[c2_i22];
          }

          memmove((void *)&c2_B.rowidx->data[c2_d_outstart], (void *)
                  &c2_B.rowidx->data[c2_d_instart], (uint32_T)((size_t)
                   c2_d_nelem * sizeof(int32_T)));
          c2_f_st.site = &c2_mc_emlrtRSI;
          c2_i26 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_B.d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i26,
            &c2_e_emlrtRTEI);
          c2_i_loop_ub = c2_B.d->size[0] - 1;
          for (c2_i29 = 0; c2_i29 <= c2_i_loop_ub; c2_i29++) {
            c2_b_y->data[c2_i29] = c2_B.d->data[c2_i29];
          }

          c2_i_outstart = c2_outstart - 1;
          c2_i_instart = c2_instart - 1;
          c2_i_nelem = c2_nelem;
          c2_i34 = c2_B.d->size[0];
          c2_B.d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i34,
            &c2_d_emlrtRTEI);
          c2_m_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i38 = 0; c2_i38 <= c2_m_loop_ub; c2_i38++) {
            c2_B.d->data[c2_i38] = c2_b_y->data[c2_i38];
          }

          memmove((void *)&c2_B.d->data[c2_i_outstart], (void *)&c2_B.d->
                  data[c2_i_instart], (uint32_T)((size_t)c2_i_nelem * sizeof
                   (real_T)));
        }

        c2_c_col = c2_col + 1;
        c2_i11 = c2_c_col;
        for (c2_c_k = c2_i11 - 1; c2_c_k + 1 < 8; c2_c_k++) {
          c2_B.colidx->data[c2_c_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_b_B);
  c2_st.site = &c2_k_emlrtRSI;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_c_st.site = &c2_dc_emlrtRSI;
  c2_d_st.site = &c2_ec_emlrtRSI;
  c2_b_sparse_validateNumericIndex(chartInstance, &c2_d_st);
  c2_d_st.site = &c2_fc_emlrtRSI;
  c2_b_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_c_B, 1, &c2_b_emlrtRTEI);
  for (c2_c_cidx = 0; c2_c_cidx < 3; c2_c_cidx++) {
    c2_d_cidx = c2_c_cidx;
    c2_b_k = c2_d_cidx;
    c2_b_nt = 4.0 + (real_T)c2_b_k;
    c2_b_col = (int32_T)c2_b_nt;
    c2_i2 = c2_c_B->size[0];
    c2_c_B->size[0] = c2_B.rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_d_st, c2_c_B, c2_i2,
      &c2_b_emlrtRTEI);
    c2_b_loop_ub = c2_B.rowidx->size[0] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
      c2_c_B->data[c2_i3] = c2_B.rowidx->data[c2_i3];
    }

    c2_sparse_locBsearch(chartInstance, c2_c_B, 6, c2_B.colidx->data[c2_b_col -
                         1], c2_B.colidx->data[c2_b_col], &c2_b_vidx,
                         &c2_b_found);
    if (c2_b_found) {
      c2_b_thisv = c2_B.d->data[c2_b_vidx - 1];
    } else {
      c2_b_thisv = 0.0;
    }

    c2_b_v = c2_dv[c2_b_rhsIter.idx - 1];
    c2_f_y = c2_b_rhsIter.idx;
    c2_g_y = c2_f_y + 1;
    c2_b_rhsIter.idx = c2_g_y;
    c2_b_rhsv = c2_b_v;
    if ((c2_b_thisv == 0.0) && (c2_b_rhsv == 0.0)) {
    } else {
      c2_c_n = c2_B.colidx->data[c2_B.colidx->size[0] - 1];
      c2_d_n = (real_T)(c2_c_n - 1);
      c2_b_nz = (int32_T)c2_d_n;
      if ((c2_b_thisv != 0.0) && (c2_b_rhsv != 0.0)) {
        c2_B.d->data[c2_b_vidx - 1] = c2_b_rhsv;
      } else if (c2_b_thisv == 0.0) {
        c2_b_idx = c2_b_vidx;
        if (c2_b_nz == c2_B.maxnz) {
          c2_e_st.site = &c2_gc_emlrtRSI;
          c2_c_realloc(chartInstance, &c2_e_st, &c2_B, c2_b_nz + 10, c2_b_idx,
                       c2_b_idx + 1, c2_b_nz, 1);
          c2_B.rowidx->data[c2_b_idx] = 6;
          c2_B.d->data[c2_b_idx] = c2_b_rhsv;
        } else {
          c2_e_st.site = &c2_hc_emlrtRSI;
          c2_e_outstart = c2_b_idx + 2;
          c2_e_instart = c2_b_idx + 1;
          c2_e_nelem = c2_b_nz - c2_b_idx;
          if (!(c2_e_nelem <= 0)) {
            c2_f_st.site = &c2_lc_emlrtRSI;
            c2_i20 = c2_y->size[0];
            c2_y->size[0] = c2_B.rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i20,
              &c2_c_emlrtRTEI);
            c2_h_loop_ub = c2_B.rowidx->size[0] - 1;
            for (c2_i25 = 0; c2_i25 <= c2_h_loop_ub; c2_i25++) {
              c2_y->data[c2_i25] = c2_B.rowidx->data[c2_i25];
            }

            c2_h_outstart = c2_e_outstart - 1;
            c2_h_instart = c2_e_instart - 1;
            c2_h_nelem = c2_e_nelem;
            c2_i30 = c2_B.rowidx->size[0];
            c2_B.rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
              c2_i30, &c2_f_emlrtRTEI);
            c2_l_loop_ub = c2_y->size[0] - 1;
            for (c2_i33 = 0; c2_i33 <= c2_l_loop_ub; c2_i33++) {
              c2_B.rowidx->data[c2_i33] = c2_y->data[c2_i33];
            }

            memmove((void *)&c2_B.rowidx->data[c2_h_outstart], (void *)
                    &c2_B.rowidx->data[c2_h_instart], (uint32_T)((size_t)
                     c2_h_nelem * sizeof(int32_T)));
            c2_f_st.site = &c2_mc_emlrtRSI;
            c2_i37 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_B.d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i37,
              &c2_e_emlrtRTEI);
            c2_p_loop_ub = c2_B.d->size[0] - 1;
            for (c2_i41 = 0; c2_i41 <= c2_p_loop_ub; c2_i41++) {
              c2_b_y->data[c2_i41] = c2_B.d->data[c2_i41];
            }

            c2_l_outstart = c2_e_outstart - 1;
            c2_l_instart = c2_e_instart - 1;
            c2_l_nelem = c2_e_nelem;
            c2_i43 = c2_B.d->size[0];
            c2_B.d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i43,
              &c2_f_emlrtRTEI);
            c2_r_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i45 = 0; c2_i45 <= c2_r_loop_ub; c2_i45++) {
              c2_B.d->data[c2_i45] = c2_b_y->data[c2_i45];
            }

            memmove((void *)&c2_B.d->data[c2_l_outstart], (void *)&c2_B.d->
                    data[c2_l_instart], (uint32_T)((size_t)c2_l_nelem * sizeof
                     (real_T)));
          }

          c2_B.d->data[c2_b_idx] = c2_b_rhsv;
          c2_B.rowidx->data[c2_b_idx] = 6;
        }

        c2_f_col = c2_b_col + 1;
        c2_i21 = c2_f_col;
        for (c2_f_k = c2_i21 - 1; c2_f_k + 1 < 8; c2_f_k++) {
          c2_B.colidx->data[c2_f_k]++;
        }
      } else {
        c2_e_st.site = &c2_ic_emlrtRSI;
        c2_c_outstart = c2_b_vidx;
        c2_c_instart = c2_b_vidx + 1;
        c2_c_nelem = c2_b_nz - c2_b_vidx;
        if (!(c2_c_nelem <= 0)) {
          c2_f_st.site = &c2_lc_emlrtRSI;
          c2_i17 = c2_y->size[0];
          c2_y->size[0] = c2_B.rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i17,
            &c2_c_emlrtRTEI);
          c2_f_loop_ub = c2_B.rowidx->size[0] - 1;
          for (c2_i23 = 0; c2_i23 <= c2_f_loop_ub; c2_i23++) {
            c2_y->data[c2_i23] = c2_B.rowidx->data[c2_i23];
          }

          c2_g_outstart = c2_c_outstart - 1;
          c2_g_instart = c2_c_instart - 1;
          c2_g_nelem = c2_c_nelem;
          c2_i28 = c2_B.rowidx->size[0];
          c2_B.rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
            c2_i28, &c2_f_emlrtRTEI);
          c2_k_loop_ub = c2_y->size[0] - 1;
          for (c2_i32 = 0; c2_i32 <= c2_k_loop_ub; c2_i32++) {
            c2_B.rowidx->data[c2_i32] = c2_y->data[c2_i32];
          }

          memmove((void *)&c2_B.rowidx->data[c2_g_outstart], (void *)
                  &c2_B.rowidx->data[c2_g_instart], (uint32_T)((size_t)
                   c2_g_nelem * sizeof(int32_T)));
          c2_f_st.site = &c2_mc_emlrtRSI;
          c2_i35 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_B.d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i35,
            &c2_e_emlrtRTEI);
          c2_n_loop_ub = c2_B.d->size[0] - 1;
          for (c2_i39 = 0; c2_i39 <= c2_n_loop_ub; c2_i39++) {
            c2_b_y->data[c2_i39] = c2_B.d->data[c2_i39];
          }

          c2_k_outstart = c2_c_outstart - 1;
          c2_k_instart = c2_c_instart - 1;
          c2_k_nelem = c2_c_nelem;
          c2_i42 = c2_B.d->size[0];
          c2_B.d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i42,
            &c2_f_emlrtRTEI);
          c2_q_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i44 = 0; c2_i44 <= c2_q_loop_ub; c2_i44++) {
            c2_B.d->data[c2_i44] = c2_b_y->data[c2_i44];
          }

          memmove((void *)&c2_B.d->data[c2_k_outstart], (void *)&c2_B.d->
                  data[c2_k_instart], (uint32_T)((size_t)c2_k_nelem * sizeof
                   (real_T)));
        }

        c2_e_col = c2_b_col + 1;
        c2_i19 = c2_e_col;
        for (c2_e_k = c2_i19 - 1; c2_e_k + 1 < 8; c2_e_k++) {
          c2_B.colidx->data[c2_e_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_c_B);
  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
  c2_emxInitStruct_coder_internal_sp(chartInstance, &c2_d_st, &c2_this,
    &c2_i_emlrtRTEI);
  c2_st.site = &c2_l_emlrtRSI;
  c2_b_st.site = &c2_l_emlrtRSI;
  c2_sparse_mldivide(chartInstance, &c2_b_st, c2_A, c2_B, &c2_this);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_B);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_A);
  for (c2_i4 = 0; c2_i4 < 36; c2_i4++) {
    c2_e_y[c2_i4] = 0.0;
  }

  for (c2_c = 0; c2_c < 6; c2_c++) {
    c2_b_c = c2_c;
    c2_cend = c2_this.colidx->data[c2_b_c + 1] - 1;
    c2_i7 = c2_this.colidx->data[c2_b_c];
    c2_b_st.site = &c2_jd_emlrtRSI;
    c2_a = c2_i7;
    c2_b = c2_cend;
    c2_b_a = c2_a;
    c2_b_b = c2_b;
    if (c2_b_a > c2_b_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_b_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_v_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_c_idx = c2_i7 - 1; c2_c_idx < c2_cend; c2_c_idx++) {
      c2_e_y[(c2_this.rowidx->data[c2_c_idx] + 6 * c2_b_c) - 1] =
        c2_this.d->data[c2_c_idx];
    }
  }

  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_this);
  c2_i5 = 0;
  for (c2_i6 = 0; c2_i6 < 6; c2_i6++) {
    c2_i8 = 0;
    for (c2_i9 = 0; c2_i9 < 6; c2_i9++) {
      c2_M[c2_i9 + c2_i5] = c2_e_y[c2_i8 + c2_i6];
      c2_i8 += 6;
    }

    c2_i5 += 6;
  }
}

static void c2_b_splineMatrix(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_M[16])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  c2_coder_internal_sparse c2_A;
  c2_coder_internal_sparse c2_B;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  c2_emxArray_int32_T *c2_b_B;
  int32_T c2_cidx;
  int32_T c2_b_cidx;
  int32_T c2_k;
  real_T c2_nt;
  int32_T c2_col;
  int32_T c2_i;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_b_rhsIter;
  int32_T c2_loop_ub;
  c2_emxArray_int32_T *c2_c_B;
  int32_T c2_i1;
  int32_T c2_c_cidx;
  int32_T c2_vidx;
  boolean_T c2_found;
  int32_T c2_d_cidx;
  int32_T c2_b_k;
  real_T c2_thisv;
  real_T c2_b_nt;
  c2_coder_internal_sparse c2_this;
  int32_T c2_b_col;
  real_T c2_v;
  int32_T c2_i2;
  int32_T c2_c_y;
  int32_T c2_d_y;
  int32_T c2_b_loop_ub;
  real_T c2_rhsv;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_n;
  int32_T c2_b_vidx;
  boolean_T c2_b_found;
  real_T c2_b_n;
  int32_T c2_c;
  real_T c2_e_y[16];
  int32_T c2_nz;
  real_T c2_b_thisv;
  int32_T c2_b_c;
  int32_T c2_i5;
  int32_T c2_cend;
  real_T c2_b_v;
  int32_T c2_idx;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_f_y;
  int32_T c2_outstart;
  int32_T c2_g_y;
  int32_T c2_instart;
  int32_T c2_i8;
  int32_T c2_a;
  int32_T c2_nelem;
  int32_T c2_b_outstart;
  int32_T c2_i9;
  int32_T c2_b;
  real_T c2_b_rhsv;
  int32_T c2_b_instart;
  int32_T c2_b_a;
  int32_T c2_b_nelem;
  int32_T c2_b_b;
  int32_T c2_c_n;
  int32_T c2_c_col;
  int32_T c2_i10;
  real_T c2_d_n;
  int32_T c2_i11;
  int32_T c2_d_col;
  boolean_T c2_overflow;
  int32_T c2_b_nz;
  int32_T c2_c_k;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_c_loop_ub;
  int32_T c2_d_k;
  int32_T c2_i14;
  int32_T c2_b_idx;
  int32_T c2_d_loop_ub;
  int32_T c2_c_idx;
  int32_T c2_c_outstart;
  int32_T c2_d_outstart;
  int32_T c2_i15;
  int32_T c2_c_instart;
  int32_T c2_d_instart;
  int32_T c2_c_nelem;
  int32_T c2_e_outstart;
  int32_T c2_d_nelem;
  int32_T c2_f_outstart;
  int32_T c2_e_instart;
  int32_T c2_i16;
  int32_T c2_f_instart;
  int32_T c2_e_nelem;
  int32_T c2_f_nelem;
  int32_T c2_e_col;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_f_col;
  int32_T c2_e_loop_ub;
  int32_T c2_e_k;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_f_loop_ub;
  int32_T c2_f_k;
  int32_T c2_g_loop_ub;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_h_loop_ub;
  int32_T c2_g_outstart;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_g_instart;
  int32_T c2_g_nelem;
  int32_T c2_h_outstart;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_h_instart;
  int32_T c2_i_loop_ub;
  int32_T c2_h_nelem;
  int32_T c2_i29;
  int32_T c2_i30;
  int32_T c2_j_loop_ub;
  int32_T c2_k_loop_ub;
  int32_T c2_i_outstart;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i_instart;
  int32_T c2_l_loop_ub;
  int32_T c2_i_nelem;
  int32_T c2_j_outstart;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_j_instart;
  int32_T c2_j_nelem;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_m_loop_ub;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_n_loop_ub;
  int32_T c2_o_loop_ub;
  int32_T c2_i39;
  int32_T c2_i40;
  int32_T c2_p_loop_ub;
  int32_T c2_k_outstart;
  int32_T c2_i41;
  int32_T c2_k_instart;
  int32_T c2_k_nelem;
  int32_T c2_l_outstart;
  int32_T c2_i42;
  int32_T c2_l_instart;
  int32_T c2_l_nelem;
  int32_T c2_i43;
  int32_T c2_q_loop_ub;
  int32_T c2_i44;
  int32_T c2_r_loop_ub;
  int32_T c2_i45;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_A,
    &c2_g_emlrtRTEI);
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_B,
    &c2_h_emlrtRTEI);
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 1, 0);
  c2_st.site = &c2_f_emlrtRSI;
  c2_c_spdiags(chartInstance, &c2_st, &c2_A);
  c2_st.site = &c2_g_emlrtRSI;
  c2_d_spdiags(chartInstance, &c2_st, &c2_B);
  c2_st.site = &c2_h_emlrtRSI;
  c2_g_sparse_parenAssign(chartInstance, &c2_st, &c2_A);
  c2_st.site = &c2_i_emlrtRSI;
  c2_h_sparse_parenAssign(chartInstance, &c2_st, &c2_A);
  c2_st.site = &c2_j_emlrtRSI;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_c_st.site = &c2_dc_emlrtRSI;
  c2_d_st.site = &c2_ec_emlrtRSI;
  c2_sparse_validateNumericIndex(chartInstance, &c2_d_st);
  c2_d_st.site = &c2_fc_emlrtRSI;
  c2_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, &c2_d_st, &c2_b_y, 1, &c2_e_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_b_B, 1, &c2_b_emlrtRTEI);
  for (c2_cidx = 0; c2_cidx < 3; c2_cidx++) {
    c2_b_cidx = c2_cidx;
    c2_k = c2_b_cidx;
    c2_nt = 1.0 + (real_T)c2_k;
    c2_col = (int32_T)c2_nt;
    c2_i = c2_b_B->size[0];
    c2_b_B->size[0] = c2_B.rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_d_st, c2_b_B, c2_i,
      &c2_b_emlrtRTEI);
    c2_loop_ub = c2_B.rowidx->size[0] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
      c2_b_B->data[c2_i1] = c2_B.rowidx->data[c2_i1];
    }

    c2_sparse_locBsearch(chartInstance, c2_b_B, 1, c2_B.colidx->data[c2_col - 1],
                         c2_B.colidx->data[c2_col], &c2_vidx, &c2_found);
    if (c2_found) {
      c2_thisv = c2_B.d->data[c2_vidx - 1];
    } else {
      c2_thisv = 0.0;
    }

    c2_v = c2_dv[c2_rhsIter.idx - 1];
    c2_c_y = c2_rhsIter.idx;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter.idx = c2_d_y;
    c2_rhsv = c2_v;
    if ((c2_thisv == 0.0) && (c2_rhsv == 0.0)) {
    } else {
      c2_n = c2_B.colidx->data[c2_B.colidx->size[0] - 1];
      c2_b_n = (real_T)(c2_n - 1);
      c2_nz = (int32_T)c2_b_n;
      if ((c2_thisv != 0.0) && (c2_rhsv != 0.0)) {
        c2_B.d->data[c2_vidx - 1] = c2_rhsv;
      } else if (c2_thisv == 0.0) {
        c2_idx = c2_vidx;
        if (c2_nz == c2_B.maxnz) {
          c2_e_st.site = &c2_gc_emlrtRSI;
          c2_d_realloc(chartInstance, &c2_e_st, &c2_B, c2_nz + 10, c2_idx,
                       c2_idx + 1, c2_nz, 1);
          c2_B.rowidx->data[c2_idx] = 1;
          c2_B.d->data[c2_idx] = c2_rhsv;
        } else {
          c2_e_st.site = &c2_hc_emlrtRSI;
          c2_b_outstart = c2_idx + 2;
          c2_b_instart = c2_idx + 1;
          c2_b_nelem = c2_nz - c2_idx;
          if (!(c2_b_nelem <= 0)) {
            c2_f_st.site = &c2_lc_emlrtRSI;
            c2_i12 = c2_y->size[0];
            c2_y->size[0] = c2_B.rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i12,
              &c2_c_emlrtRTEI);
            c2_d_loop_ub = c2_B.rowidx->size[0] - 1;
            for (c2_i15 = 0; c2_i15 <= c2_d_loop_ub; c2_i15++) {
              c2_y->data[c2_i15] = c2_B.rowidx->data[c2_i15];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i18 = c2_B.rowidx->size[0];
            c2_B.rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
              c2_i18, &c2_d_emlrtRTEI);
            c2_g_loop_ub = c2_y->size[0] - 1;
            for (c2_i24 = 0; c2_i24 <= c2_g_loop_ub; c2_i24++) {
              c2_B.rowidx->data[c2_i24] = c2_y->data[c2_i24];
            }

            memmove((void *)&c2_B.rowidx->data[c2_f_outstart], (void *)
                    &c2_B.rowidx->data[c2_f_instart], (uint32_T)((size_t)
                     c2_f_nelem * sizeof(int32_T)));
            c2_f_st.site = &c2_mc_emlrtRSI;
            c2_i27 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_B.d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i27,
              &c2_e_emlrtRTEI);
            c2_j_loop_ub = c2_B.d->size[0] - 1;
            for (c2_i31 = 0; c2_i31 <= c2_j_loop_ub; c2_i31++) {
              c2_b_y->data[c2_i31] = c2_B.d->data[c2_i31];
            }

            c2_j_outstart = c2_b_outstart - 1;
            c2_j_instart = c2_b_instart - 1;
            c2_j_nelem = c2_b_nelem;
            c2_i36 = c2_B.d->size[0];
            c2_B.d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i36,
              &c2_d_emlrtRTEI);
            c2_o_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i40 = 0; c2_i40 <= c2_o_loop_ub; c2_i40++) {
              c2_B.d->data[c2_i40] = c2_b_y->data[c2_i40];
            }

            memmove((void *)&c2_B.d->data[c2_j_outstart], (void *)&c2_B.d->
                    data[c2_j_instart], (uint32_T)((size_t)c2_j_nelem * sizeof
                     (real_T)));
          }

          c2_B.d->data[c2_idx] = c2_rhsv;
          c2_B.rowidx->data[c2_idx] = 1;
        }

        c2_d_col = c2_col + 1;
        c2_i13 = c2_d_col;
        for (c2_d_k = c2_i13 - 1; c2_d_k + 1 < 6; c2_d_k++) {
          c2_B.colidx->data[c2_d_k]++;
        }
      } else {
        c2_e_st.site = &c2_ic_emlrtRSI;
        c2_outstart = c2_vidx;
        c2_instart = c2_vidx + 1;
        c2_nelem = c2_nz - c2_vidx;
        if (!(c2_nelem <= 0)) {
          c2_f_st.site = &c2_lc_emlrtRSI;
          c2_i10 = c2_y->size[0];
          c2_y->size[0] = c2_B.rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i10,
            &c2_c_emlrtRTEI);
          c2_c_loop_ub = c2_B.rowidx->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_c_loop_ub; c2_i14++) {
            c2_y->data[c2_i14] = c2_B.rowidx->data[c2_i14];
          }

          c2_d_outstart = c2_outstart - 1;
          c2_d_instart = c2_instart - 1;
          c2_d_nelem = c2_nelem;
          c2_i16 = c2_B.rowidx->size[0];
          c2_B.rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
            c2_i16, &c2_d_emlrtRTEI);
          c2_e_loop_ub = c2_y->size[0] - 1;
          for (c2_i22 = 0; c2_i22 <= c2_e_loop_ub; c2_i22++) {
            c2_B.rowidx->data[c2_i22] = c2_y->data[c2_i22];
          }

          memmove((void *)&c2_B.rowidx->data[c2_d_outstart], (void *)
                  &c2_B.rowidx->data[c2_d_instart], (uint32_T)((size_t)
                   c2_d_nelem * sizeof(int32_T)));
          c2_f_st.site = &c2_mc_emlrtRSI;
          c2_i26 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_B.d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i26,
            &c2_e_emlrtRTEI);
          c2_i_loop_ub = c2_B.d->size[0] - 1;
          for (c2_i29 = 0; c2_i29 <= c2_i_loop_ub; c2_i29++) {
            c2_b_y->data[c2_i29] = c2_B.d->data[c2_i29];
          }

          c2_i_outstart = c2_outstart - 1;
          c2_i_instart = c2_instart - 1;
          c2_i_nelem = c2_nelem;
          c2_i34 = c2_B.d->size[0];
          c2_B.d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i34,
            &c2_d_emlrtRTEI);
          c2_m_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i38 = 0; c2_i38 <= c2_m_loop_ub; c2_i38++) {
            c2_B.d->data[c2_i38] = c2_b_y->data[c2_i38];
          }

          memmove((void *)&c2_B.d->data[c2_i_outstart], (void *)&c2_B.d->
                  data[c2_i_instart], (uint32_T)((size_t)c2_i_nelem * sizeof
                   (real_T)));
        }

        c2_c_col = c2_col + 1;
        c2_i11 = c2_c_col;
        for (c2_c_k = c2_i11 - 1; c2_c_k + 1 < 6; c2_c_k++) {
          c2_B.colidx->data[c2_c_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_b_B);
  c2_st.site = &c2_k_emlrtRSI;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_c_st.site = &c2_dc_emlrtRSI;
  c2_d_st.site = &c2_ec_emlrtRSI;
  c2_c_sparse_validateNumericIndex(chartInstance, &c2_d_st);
  c2_d_st.site = &c2_fc_emlrtRSI;
  c2_b_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_d_st, &c2_c_B, 1, &c2_b_emlrtRTEI);
  for (c2_c_cidx = 0; c2_c_cidx < 3; c2_c_cidx++) {
    c2_d_cidx = c2_c_cidx;
    c2_b_k = c2_d_cidx;
    c2_b_nt = 2.0 + (real_T)c2_b_k;
    c2_b_col = (int32_T)c2_b_nt;
    c2_i2 = c2_c_B->size[0];
    c2_c_B->size[0] = c2_B.rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_d_st, c2_c_B, c2_i2,
      &c2_b_emlrtRTEI);
    c2_b_loop_ub = c2_B.rowidx->size[0] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
      c2_c_B->data[c2_i3] = c2_B.rowidx->data[c2_i3];
    }

    c2_sparse_locBsearch(chartInstance, c2_c_B, 4, c2_B.colidx->data[c2_b_col -
                         1], c2_B.colidx->data[c2_b_col], &c2_b_vidx,
                         &c2_b_found);
    if (c2_b_found) {
      c2_b_thisv = c2_B.d->data[c2_b_vidx - 1];
    } else {
      c2_b_thisv = 0.0;
    }

    c2_b_v = c2_dv[c2_b_rhsIter.idx - 1];
    c2_f_y = c2_b_rhsIter.idx;
    c2_g_y = c2_f_y + 1;
    c2_b_rhsIter.idx = c2_g_y;
    c2_b_rhsv = c2_b_v;
    if ((c2_b_thisv == 0.0) && (c2_b_rhsv == 0.0)) {
    } else {
      c2_c_n = c2_B.colidx->data[c2_B.colidx->size[0] - 1];
      c2_d_n = (real_T)(c2_c_n - 1);
      c2_b_nz = (int32_T)c2_d_n;
      if ((c2_b_thisv != 0.0) && (c2_b_rhsv != 0.0)) {
        c2_B.d->data[c2_b_vidx - 1] = c2_b_rhsv;
      } else if (c2_b_thisv == 0.0) {
        c2_b_idx = c2_b_vidx;
        if (c2_b_nz == c2_B.maxnz) {
          c2_e_st.site = &c2_gc_emlrtRSI;
          c2_d_realloc(chartInstance, &c2_e_st, &c2_B, c2_b_nz + 10, c2_b_idx,
                       c2_b_idx + 1, c2_b_nz, 1);
          c2_B.rowidx->data[c2_b_idx] = 4;
          c2_B.d->data[c2_b_idx] = c2_b_rhsv;
        } else {
          c2_e_st.site = &c2_hc_emlrtRSI;
          c2_e_outstart = c2_b_idx + 2;
          c2_e_instart = c2_b_idx + 1;
          c2_e_nelem = c2_b_nz - c2_b_idx;
          if (!(c2_e_nelem <= 0)) {
            c2_f_st.site = &c2_lc_emlrtRSI;
            c2_i20 = c2_y->size[0];
            c2_y->size[0] = c2_B.rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i20,
              &c2_c_emlrtRTEI);
            c2_h_loop_ub = c2_B.rowidx->size[0] - 1;
            for (c2_i25 = 0; c2_i25 <= c2_h_loop_ub; c2_i25++) {
              c2_y->data[c2_i25] = c2_B.rowidx->data[c2_i25];
            }

            c2_h_outstart = c2_e_outstart - 1;
            c2_h_instart = c2_e_instart - 1;
            c2_h_nelem = c2_e_nelem;
            c2_i30 = c2_B.rowidx->size[0];
            c2_B.rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
              c2_i30, &c2_f_emlrtRTEI);
            c2_l_loop_ub = c2_y->size[0] - 1;
            for (c2_i33 = 0; c2_i33 <= c2_l_loop_ub; c2_i33++) {
              c2_B.rowidx->data[c2_i33] = c2_y->data[c2_i33];
            }

            memmove((void *)&c2_B.rowidx->data[c2_h_outstart], (void *)
                    &c2_B.rowidx->data[c2_h_instart], (uint32_T)((size_t)
                     c2_h_nelem * sizeof(int32_T)));
            c2_f_st.site = &c2_mc_emlrtRSI;
            c2_i37 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_B.d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i37,
              &c2_e_emlrtRTEI);
            c2_p_loop_ub = c2_B.d->size[0] - 1;
            for (c2_i41 = 0; c2_i41 <= c2_p_loop_ub; c2_i41++) {
              c2_b_y->data[c2_i41] = c2_B.d->data[c2_i41];
            }

            c2_l_outstart = c2_e_outstart - 1;
            c2_l_instart = c2_e_instart - 1;
            c2_l_nelem = c2_e_nelem;
            c2_i43 = c2_B.d->size[0];
            c2_B.d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i43,
              &c2_f_emlrtRTEI);
            c2_r_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i45 = 0; c2_i45 <= c2_r_loop_ub; c2_i45++) {
              c2_B.d->data[c2_i45] = c2_b_y->data[c2_i45];
            }

            memmove((void *)&c2_B.d->data[c2_l_outstart], (void *)&c2_B.d->
                    data[c2_l_instart], (uint32_T)((size_t)c2_l_nelem * sizeof
                     (real_T)));
          }

          c2_B.d->data[c2_b_idx] = c2_b_rhsv;
          c2_B.rowidx->data[c2_b_idx] = 4;
        }

        c2_f_col = c2_b_col + 1;
        c2_i21 = c2_f_col;
        for (c2_f_k = c2_i21 - 1; c2_f_k + 1 < 6; c2_f_k++) {
          c2_B.colidx->data[c2_f_k]++;
        }
      } else {
        c2_e_st.site = &c2_ic_emlrtRSI;
        c2_c_outstart = c2_b_vidx;
        c2_c_instart = c2_b_vidx + 1;
        c2_c_nelem = c2_b_nz - c2_b_vidx;
        if (!(c2_c_nelem <= 0)) {
          c2_f_st.site = &c2_lc_emlrtRSI;
          c2_i17 = c2_y->size[0];
          c2_y->size[0] = c2_B.rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_y, c2_i17,
            &c2_c_emlrtRTEI);
          c2_f_loop_ub = c2_B.rowidx->size[0] - 1;
          for (c2_i23 = 0; c2_i23 <= c2_f_loop_ub; c2_i23++) {
            c2_y->data[c2_i23] = c2_B.rowidx->data[c2_i23];
          }

          c2_g_outstart = c2_c_outstart - 1;
          c2_g_instart = c2_c_instart - 1;
          c2_g_nelem = c2_c_nelem;
          c2_i28 = c2_B.rowidx->size[0];
          c2_B.rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_f_st, c2_B.rowidx,
            c2_i28, &c2_f_emlrtRTEI);
          c2_k_loop_ub = c2_y->size[0] - 1;
          for (c2_i32 = 0; c2_i32 <= c2_k_loop_ub; c2_i32++) {
            c2_B.rowidx->data[c2_i32] = c2_y->data[c2_i32];
          }

          memmove((void *)&c2_B.rowidx->data[c2_g_outstart], (void *)
                  &c2_B.rowidx->data[c2_g_instart], (uint32_T)((size_t)
                   c2_g_nelem * sizeof(int32_T)));
          c2_f_st.site = &c2_mc_emlrtRSI;
          c2_i35 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_B.d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_b_y, c2_i35,
            &c2_e_emlrtRTEI);
          c2_n_loop_ub = c2_B.d->size[0] - 1;
          for (c2_i39 = 0; c2_i39 <= c2_n_loop_ub; c2_i39++) {
            c2_b_y->data[c2_i39] = c2_B.d->data[c2_i39];
          }

          c2_k_outstart = c2_c_outstart - 1;
          c2_k_instart = c2_c_instart - 1;
          c2_k_nelem = c2_c_nelem;
          c2_i42 = c2_B.d->size[0];
          c2_B.d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_f_st, c2_B.d, c2_i42,
            &c2_f_emlrtRTEI);
          c2_q_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i44 = 0; c2_i44 <= c2_q_loop_ub; c2_i44++) {
            c2_B.d->data[c2_i44] = c2_b_y->data[c2_i44];
          }

          memmove((void *)&c2_B.d->data[c2_k_outstart], (void *)&c2_B.d->
                  data[c2_k_instart], (uint32_T)((size_t)c2_k_nelem * sizeof
                   (real_T)));
        }

        c2_e_col = c2_b_col + 1;
        c2_i19 = c2_e_col;
        for (c2_e_k = c2_i19 - 1; c2_e_k + 1 < 6; c2_e_k++) {
          c2_B.colidx->data[c2_e_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_c_B);
  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
  c2_emxInitStruct_coder_internal_sp(chartInstance, &c2_d_st, &c2_this,
    &c2_i_emlrtRTEI);
  c2_st.site = &c2_l_emlrtRSI;
  c2_b_st.site = &c2_l_emlrtRSI;
  c2_b_sparse_mldivide(chartInstance, &c2_b_st, c2_A, c2_B, &c2_this);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_B);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_A);
  for (c2_i4 = 0; c2_i4 < 16; c2_i4++) {
    c2_e_y[c2_i4] = 0.0;
  }

  for (c2_c = 0; c2_c < 4; c2_c++) {
    c2_b_c = c2_c;
    c2_cend = c2_this.colidx->data[c2_b_c + 1] - 1;
    c2_i7 = c2_this.colidx->data[c2_b_c];
    c2_b_st.site = &c2_jd_emlrtRSI;
    c2_a = c2_i7;
    c2_b = c2_cend;
    c2_b_a = c2_a;
    c2_b_b = c2_b;
    if (c2_b_a > c2_b_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_b_b > 2147483646);
    }

    if (c2_overflow) {
      c2_c_st.site = &c2_v_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
    }

    for (c2_c_idx = c2_i7 - 1; c2_c_idx < c2_cend; c2_c_idx++) {
      c2_e_y[(c2_this.rowidx->data[c2_c_idx] + (c2_b_c << 2)) - 1] =
        c2_this.d->data[c2_c_idx];
    }
  }

  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_this);
  c2_i5 = 0;
  for (c2_i6 = 0; c2_i6 < 4; c2_i6++) {
    c2_i8 = 0;
    for (c2_i9 = 0; c2_i9 < 4; c2_i9++) {
      c2_M[c2_i9 + c2_i5] = c2_e_y[c2_i8 + c2_i6];
      c2_i8 += 4;
    }

    c2_i5 += 4;
  }
}

static void c2_basisFunc_spline(SFc2_untitledInstanceStruct *chartInstance,
  real_T c2_M[36], real_T c2_val[36], real_T c2_dval[36], real_T c2_ddval[36])
{
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  real_T c2_MQL[36];
  static int32_T c2_iv[6] = { 0, 4, 2, 2, 2, 1 };

  int32_T c2_i5;
  static real_T c2_QR[36] = { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 };

  static real_T c2_QL[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 };

  static int32_T c2_iv1[6] = { 1, 5, 3, 3, 3, 2 };

  int32_T c2_i6;
  int32_T c2_i7;
  real_T c2_ZI[36];
  static real_T c2_b_dv[36] = { 0.26, 0.26, 0.26, 0.26, 0.26, 0.26,
    0.094999999999999751, 0.094999999999999751, 0.094999999999999751,
    0.094999999999999751, 0.094999999999999751, 0.094999999999999751, 0.875,
    0.875, 0.875, 0.875, 0.875, 0.875, 0.45999999999999996, 0.45999999999999996,
    0.45999999999999996, 0.45999999999999996, 0.45999999999999996,
    0.45999999999999996, 0.12000000000000011, 0.12000000000000011,
    0.12000000000000011, 0.12000000000000011, 0.12000000000000011,
    0.12000000000000011, 0.2350000000000001, 0.2350000000000001,
    0.2350000000000001, 0.2350000000000001, 0.2350000000000001,
    0.2350000000000001 };

  static real_T c2_T[36] = { 0.74, 0.74, 0.74, 0.74, 0.74, 0.74,
    0.90500000000000025, 0.90500000000000025, 0.90500000000000025,
    0.90500000000000025, 0.90500000000000025, 0.90500000000000025, 0.125, 0.125,
    0.125, 0.125, 0.125, 0.125, 0.54, 0.54, 0.54, 0.54, 0.54, 0.54,
    0.87999999999999989, 0.87999999999999989, 0.87999999999999989,
    0.87999999999999989, 0.87999999999999989, 0.87999999999999989,
    0.7649999999999999, 0.7649999999999999, 0.7649999999999999,
    0.7649999999999999, 0.7649999999999999, 0.7649999999999999 };

  int32_T c2_i8;
  static real_T c2_dv1[36] = { 0.26, 0.74, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.094999999999999751, 0.90500000000000025, 0.0, 0.0, 0.875, 0.125, 0.0,
    0.0, 0.0, 0.0, 0.45999999999999996, 0.54, 0.0, 0.0, 0.0, 0.0,
    0.12000000000000011, 0.87999999999999989, 0.0, 0.0, 0.0, 0.2350000000000001,
    0.7649999999999999, 0.0, 0.0, 0.0 };

  static real_T c2_dv2[36] = { 0.19240000000000002, 0.19240000000000002,
    0.19240000000000002, 0.19240000000000002, 0.19240000000000002,
    0.19240000000000002, 0.0859749999999998, 0.0859749999999998,
    0.0859749999999998, 0.0859749999999998, 0.0859749999999998,
    0.0859749999999998, 0.109375, 0.109375, 0.109375, 0.109375, 0.109375,
    0.109375, 0.2484, 0.2484, 0.2484, 0.2484, 0.2484, 0.2484,
    0.10560000000000008, 0.10560000000000008, 0.10560000000000008,
    0.10560000000000008, 0.10560000000000008, 0.10560000000000008,
    0.17977500000000005, 0.17977500000000005, 0.17977500000000005,
    0.17977500000000005, 0.17977500000000005, 0.17977500000000005 };

  int32_T c2_i9;
  static real_T c2_b[36] = { -0.48, -0.48, -0.48, -0.48, -0.48, -0.48,
    -0.8100000000000005, -0.8100000000000005, -0.8100000000000005,
    -0.8100000000000005, -0.8100000000000005, -0.8100000000000005, 0.75, 0.75,
    0.75, 0.75, 0.75, 0.75, -0.080000000000000071, -0.080000000000000071,
    -0.080000000000000071, -0.080000000000000071, -0.080000000000000071,
    -0.080000000000000071, -0.75999999999999979, -0.75999999999999979,
    -0.75999999999999979, -0.75999999999999979, -0.75999999999999979,
    -0.75999999999999979, -0.5299999999999998, -0.5299999999999998,
    -0.5299999999999998, -0.5299999999999998, -0.5299999999999998,
    -0.5299999999999998 };

  int32_T c2_i10;
  int32_T c2_i11;
  static real_T c2_y[36] = { -0.96, -0.96, -0.96, -0.96, -0.96, -0.96,
    -1.620000000000001, -1.620000000000001, -1.620000000000001,
    -1.620000000000001, -1.620000000000001, -1.620000000000001, 1.5, 1.5, 1.5,
    1.5, 1.5, 1.5, -0.16000000000000014, -0.16000000000000014,
    -0.16000000000000014, -0.16000000000000014, -0.16000000000000014,
    -0.16000000000000014, -1.5199999999999996, -1.5199999999999996,
    -1.5199999999999996, -1.5199999999999996, -1.5199999999999996,
    -1.5199999999999996, -1.0599999999999996, -1.0599999999999996,
    -1.0599999999999996, -1.0599999999999996, -1.0599999999999996,
    -1.0599999999999996 };

  int32_T c2_i12;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 2, 0);
  for (c2_i = 0; c2_i < 6; c2_i++) {
    for (c2_i2 = 0; c2_i2 < 6; c2_i2++) {
      c2_MQL[c2_i2 + 6 * c2_i] = c2_M[c2_i2 + 6 * c2_iv[c2_i]];
    }
  }

  for (c2_i1 = 0; c2_i1 < 6; c2_i1++) {
    for (c2_i4 = 0; c2_i4 < 6; c2_i4++) {
      c2_ddval[c2_i4 + 6 * c2_i1] = c2_M[c2_i4 + 6 * c2_iv1[c2_i1]];
    }
  }

  for (c2_i3 = 0; c2_i3 < 36; c2_i3++) {
    c2_MQL[c2_i3] = (c2_MQL[c2_i3] - c2_QR[c2_i3]) + c2_QL[c2_i3];
  }

  for (c2_i5 = 0; c2_i5 < 36; c2_i5++) {
    c2_ddval[c2_i5] = (-c2_ddval[c2_i5] + c2_QR[c2_i5]) - c2_QL[c2_i5];
  }

  for (c2_i6 = 0; c2_i6 < 36; c2_i6++) {
    c2_ZI[c2_i6] = c2_b_dv[c2_i6] * c2_MQL[c2_i6] + c2_T[c2_i6] * c2_ddval[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 36; c2_i7++) {
    c2_val[c2_i7] = c2_dv1[c2_i7] + c2_dv2[c2_i7] * c2_ZI[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 36; c2_i8++) {
    c2_dval[c2_i8] = ((c2_b[c2_i8] * c2_ZI[c2_i8] + c2_dv2[c2_i8] *
                       (c2_ddval[c2_i8] - c2_MQL[c2_i8])) + c2_QR[c2_i8]) -
      c2_QL[c2_i8];
  }

  for (c2_i9 = 0; c2_i9 < 36; c2_i9++) {
    c2_ZI[c2_i9] *= 2.0;
  }

  for (c2_i10 = 0; c2_i10 < 36; c2_i10++) {
    c2_ddval[c2_i10] = c2_y[c2_i10] * (c2_ddval[c2_i10] - c2_MQL[c2_i10]) -
      c2_ZI[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 36; c2_i11++) {
    c2_dval[c2_i11] *= 5.0;
  }

  for (c2_i12 = 0; c2_i12 < 36; c2_i12++) {
    c2_ddval[c2_i12] *= 25.0;
  }
}

static void c2_b_basisFunc_spline(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_xx[20], real_T c2_M[16], real_T c2_val[80],
  real_T c2_dval[80], real_T c2_ddval[80], real_T c2_dddval[80])
{
  int32_T c2_i;
  int32_T c2_i1;
  real_T c2_tt[20];
  int32_T c2_i2;
  real_T c2_ind[20];
  int32_T c2_i3;
  int32_T c2_b_i;
  int32_T c2_c_i;
  int32_T c2_trueCount;
  int32_T c2_d_i;
  real_T c2_d;
  int32_T c2_i4;
  int32_T c2_tmp_size[2];
  int32_T c2_partialTrueCount;
  int32_T c2_e_i;
  int32_T c2_loop_ub;
  int32_T c2_i5;
  int32_T c2_tmp_data[20];
  real_T c2_I[16];
  real_T c2_d1;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  real_T c2_QL[80];
  int32_T c2_i13;
  int32_T c2_i14;
  real_T c2_d2;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  real_T c2_QR[80];
  real_T c2_MQL[80];
  real_T c2_b_tt[20];
  real_T c2_d3;
  int32_T c2_i19;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  real_T c2_ZI[80];
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 2, 0);
  for (c2_i = 0; c2_i < 20; c2_i++) {
    c2_tt[c2_i] = 3.0 * c2_xx[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 20; c2_i1++) {
    c2_tt[c2_i1] /= 0.5;
  }

  for (c2_i2 = 0; c2_i2 < 20; c2_i2++) {
    c2_ind[c2_i2] = c2_tt[c2_i2];
  }

  c2_b_floor(chartInstance, c2_ind);
  for (c2_i3 = 0; c2_i3 < 20; c2_i3++) {
    c2_ind[c2_i3]++;
  }

  c2_b_i = 0;
  while (c2_b_i <= 19) {
    c2_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_c_i = 0;
  while (c2_c_i <= 19) {
    if (c2_ind[c2_c_i] <= 0.0) {
      c2_d = (real_T)(c2_c_i + 1);
      c2_i4 = (int32_T)emlrtIntegerCheckR2012b(c2_d, &c2_emlrtDCI, c2_sp);
      c2_ind[emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 20, &c2_emlrtBCI, c2_sp) -
        1] = 1.0;
    }

    c2_c_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_trueCount = 0;
  c2_d_i = 0;
  while (c2_d_i <= 19) {
    if (c2_ind[c2_d_i] >= 4.0) {
      c2_trueCount++;
    }

    c2_d_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_tmp_size[0] = 1;
  c2_tmp_size[1] = c2_trueCount;
  c2_partialTrueCount = 0;
  c2_e_i = 0;
  while (c2_e_i <= 19) {
    if (c2_ind[c2_e_i] >= 4.0) {
      c2_tmp_data[c2_partialTrueCount] = c2_e_i + 1;
      c2_partialTrueCount++;
    }

    c2_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_loop_ub = c2_tmp_size[0] * c2_tmp_size[1] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
    c2_d1 = (real_T)c2_tmp_data[c2_i5];
    c2_i7 = (int32_T)emlrtIntegerCheckR2012b(c2_d1, &c2_b_emlrtDCI, c2_sp);
    c2_ind[emlrtDynamicBoundsCheckR2012b(c2_i7, 1, 20, &c2_b_emlrtBCI, c2_sp) -
      1] = 3.0;
  }

  c2_eye(chartInstance, c2_I);
  for (c2_i6 = 0; c2_i6 < 20; c2_i6++) {
    for (c2_i9 = 0; c2_i9 < 4; c2_i9++) {
      c2_i12 = (int32_T)emlrtIntegerCheckR2012b(c2_ind[c2_i6], &c2_c_emlrtDCI,
        c2_sp);
      c2_QL[c2_i9 + (c2_i6 << 2)] = c2_I[c2_i9 + ((emlrtDynamicBoundsCheckR2012b
        (c2_i12, 1, 4, &c2_c_emlrtBCI, c2_sp) - 1) << 2)];
    }
  }

  for (c2_i8 = 0; c2_i8 < 20; c2_i8++) {
    for (c2_i11 = 0; c2_i11 < 4; c2_i11++) {
      c2_d2 = c2_ind[c2_i8] + 1.0;
      c2_i15 = (int32_T)emlrtIntegerCheckR2012b(c2_d2, &c2_d_emlrtDCI, c2_sp);
      c2_QR[c2_i11 + (c2_i8 << 2)] = c2_I[c2_i11 +
        ((emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 4, &c2_d_emlrtBCI, c2_sp) - 1)
         << 2)];
    }
  }

  for (c2_i10 = 0; c2_i10 < 20; c2_i10++) {
    for (c2_i14 = 0; c2_i14 < 4; c2_i14++) {
      c2_i18 = (int32_T)emlrtIntegerCheckR2012b(c2_ind[c2_i10], &c2_e_emlrtDCI,
        c2_sp);
      c2_MQL[c2_i14 + (c2_i10 << 2)] = c2_M[c2_i14 +
        ((emlrtDynamicBoundsCheckR2012b(c2_i18, 1, 4, &c2_e_emlrtBCI, c2_sp) - 1)
         << 2)];
    }
  }

  for (c2_i13 = 0; c2_i13 < 20; c2_i13++) {
    for (c2_i17 = 0; c2_i17 < 4; c2_i17++) {
      c2_d3 = c2_ind[c2_i13] + 1.0;
      c2_i20 = (int32_T)emlrtIntegerCheckR2012b(c2_d3, &c2_f_emlrtDCI, c2_sp);
      c2_dddval[c2_i17 + (c2_i13 << 2)] = c2_M[c2_i17 +
        ((emlrtDynamicBoundsCheckR2012b(c2_i20, 1, 4, &c2_f_emlrtBCI, c2_sp) - 1)
         << 2)];
    }
  }

  for (c2_i16 = 0; c2_i16 < 20; c2_i16++) {
    c2_b_tt[c2_i16] = (c2_tt[c2_i16] - c2_ind[c2_i16]) + 1.0;
  }

  c2_repmat(chartInstance, c2_b_tt, c2_ddval);
  for (c2_i19 = 0; c2_i19 < 80; c2_i19++) {
    c2_MQL[c2_i19] = (c2_MQL[c2_i19] - c2_QR[c2_i19]) + c2_QL[c2_i19];
  }

  for (c2_i21 = 0; c2_i21 < 80; c2_i21++) {
    c2_dddval[c2_i21] = (-c2_dddval[c2_i21] + c2_QR[c2_i21]) - c2_QL[c2_i21];
  }

  for (c2_i22 = 0; c2_i22 < 80; c2_i22++) {
    c2_ZI[c2_i22] = (1.0 - c2_ddval[c2_i22]) * c2_MQL[c2_i22] + c2_ddval[c2_i22]
      * c2_dddval[c2_i22];
  }

  for (c2_i23 = 0; c2_i23 < 80; c2_i23++) {
    c2_val[c2_i23] = ((1.0 - c2_ddval[c2_i23]) * c2_QL[c2_i23] + c2_ddval[c2_i23]
                      * c2_QR[c2_i23]) + c2_ddval[c2_i23] * (1.0 -
      c2_ddval[c2_i23]) * c2_ZI[c2_i23];
  }

  for (c2_i24 = 0; c2_i24 < 80; c2_i24++) {
    c2_dval[c2_i24] = 2.0 * c2_ddval[c2_i24];
  }

  for (c2_i25 = 0; c2_i25 < 80; c2_i25++) {
    c2_dval[c2_i25] = (((1.0 - c2_dval[c2_i25]) * c2_ZI[c2_i25] +
                        c2_ddval[c2_i25] * (1.0 - c2_ddval[c2_i25]) *
                        (c2_dddval[c2_i25] - c2_MQL[c2_i25])) + c2_QR[c2_i25]) -
      c2_QL[c2_i25];
  }

  for (c2_i26 = 0; c2_i26 < 80; c2_i26++) {
    c2_ddval[c2_i26] *= 2.0;
  }

  for (c2_i27 = 0; c2_i27 < 80; c2_i27++) {
    c2_ddval[c2_i27] = 1.0 - c2_ddval[c2_i27];
  }

  for (c2_i28 = 0; c2_i28 < 80; c2_i28++) {
    c2_ddval[c2_i28] *= 2.0;
  }

  for (c2_i29 = 0; c2_i29 < 80; c2_i29++) {
    c2_ZI[c2_i29] *= 2.0;
  }

  for (c2_i30 = 0; c2_i30 < 80; c2_i30++) {
    c2_ddval[c2_i30] = c2_ddval[c2_i30] * (c2_dddval[c2_i30] - c2_MQL[c2_i30]) -
      c2_ZI[c2_i30];
  }

  for (c2_i31 = 0; c2_i31 < 80; c2_i31++) {
    c2_dddval[c2_i31] -= c2_MQL[c2_i31];
  }

  for (c2_i32 = 0; c2_i32 < 80; c2_i32++) {
    c2_dddval[c2_i32] *= -6.0;
  }

  for (c2_i33 = 0; c2_i33 < 80; c2_i33++) {
    c2_dval[c2_i33] *= 3.0;
  }

  for (c2_i34 = 0; c2_i34 < 80; c2_i34++) {
    c2_dval[c2_i34] /= 0.5;
  }

  for (c2_i35 = 0; c2_i35 < 80; c2_i35++) {
    c2_ddval[c2_i35] *= 9.0;
  }

  for (c2_i36 = 0; c2_i36 < 80; c2_i36++) {
    c2_ddval[c2_i36] /= 0.25;
  }

  for (c2_i37 = 0; c2_i37 < 80; c2_i37++) {
    c2_dddval[c2_i37] *= 27.0;
  }

  for (c2_i38 = 0; c2_i38 < 80; c2_i38++) {
    c2_dddval[c2_i38] /= 0.125;
  }
}

const mxArray *sf_c2_untitled_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  const char * c2_data[5] = {
    "789c6360f4f465646060e06380800a0108cd0be543b90c4c0ca8005d9e114a33a3f16180958105451f23d4cc7e283f393faf24b5a204c2c94bcc4d85eb4cc9cf"
    "cdcc4bcc2b09a92c4865284a2dcecf294b4d01cba465e6a48664e6a6fae423713c32819c5c37242938072405623b67a426670797e632146514235c9883cc8187",
    "47020effb210080f74801e1ee8eaf8a06a2ac8b40f66be1801fb60f2cef90595f1f969f1b9f929a939de8ef14989c599c5ce08772450e80e369cee80c8a4e497"
    "26e5a422ec9b40a17dfa38ed43958f768d75b1d237d4cf4eccd32dc8cf492cd22f492d2ed1c71e1c7ab904c303e64f42ee43a76180938103ca6a787274e94d47",
    "fad9070123c53e7ae52bbf8cc00813a7b482f452cb92e2ca8c9464c7c2206f37843b0208d843c81d0c38f8f4327fb0e7d3020addc743c07d30f9e2829cccbc54"
    "dfc492a24c70d21aa872b38342fb5471da872a8f233e908301180bf4ccdf0d7ddef346cbcba15e5e4666f99bf858781b14bb1617e59ae618b9675bfa18bb8f96",
    "9743a5bcc4151e026834d862b7d2bce47848913154db999a38ed4395c7111fe8c1002e334160b4dc1c1ef6d1abdcccce4e74344a29c8f20f290f71f4f3b3488f"
    "48ad0c721dfae52600da0bccdd", "" };

  c2_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c2_data[0], 4240U, &c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static void c2_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  real_T c2_len[4];
  int32_T c2_i;
  c2_emxArray_int32_T *c2_aRows;
  real_T c2_b_i;
  real_T c2_dataLen;
  real_T c2_maxNegD[3];
  int32_T c2_c_i;
  real_T c2_minAdjustedDim[3];
  real_T c2_maxIndex;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  int32_T c2_i1;
  c2_emxArray_int32_T *c2_aCols;
  const mxArray *c2_y = NULL;
  int32_T c2_i2;
  const mxArray *c2_b_y = NULL;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  c2_emxArray_real_T *c2_aDat;
  int32_T c2_i4;
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  c2_emxArray_real_T *c2_idx;
  c2_emxArray_int32_T *c2_b_r;
  c2_emxArray_real_T *c2_x;
  c2_emxArray_real_T *c2_b_idx;
  int32_T c2_k;
  real_T c2_b_k;
  real_T c2_a;
  real_T c2_d;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_x;
  boolean_T c2_c_b;
  boolean_T c2_guard1 = false;
  boolean_T c2_guard2 = false;
  int32_T c2_i6;
  real_T c2_c_x;
  boolean_T c2_d_b;
  int32_T c2_d_loop_ub;
  int32_T c2_i7;
  int32_T c2_i8;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_c_a;
  real_T c2_b_d;
  int32_T c2_i9;
  real_T c2_d_a;
  real_T c2_e_a;
  real_T c2_e_b;
  real_T c2_f_b;
  real_T c2_f_a;
  real_T c2_f_x;
  real_T c2_g_b;
  int32_T c2_e_loop_ub;
  boolean_T c2_h_b;
  real_T c2_anew;
  int32_T c2_i10;
  real_T c2_g_x;
  int32_T c2_i11;
  real_T c2_ndbl;
  real_T c2_h_x;
  real_T c2_apnd;
  boolean_T c2_i_b;
  real_T c2_cdiff;
  int32_T c2_f_loop_ub;
  real_T c2_g_a;
  int32_T c2_i12;
  real_T c2_j_b;
  int32_T c2_i13;
  real_T c2_i_x;
  real_T c2_j_x;
  int32_T c2_i_size[1];
  real_T c2_k_x;
  real_T c2_l_x;
  int32_T c2_g_loop_ub;
  real_T c2_m_x;
  int32_T c2_i14;
  real_T c2_absa;
  real_T c2_n_x;
  int32_T c2_i15;
  real_T c2_i_data[6];
  real_T c2_o_x;
  real_T c2_h_a;
  real_T c2_i_a;
  real_T c2_p_x;
  real_T c2_k_b;
  real_T c2_c_d;
  real_T c2_absb;
  real_T c2_j_a;
  real_T c2_l_b;
  int32_T c2_h_loop_ub;
  real_T c2_k_a;
  real_T c2_c;
  real_T c2_b_anew;
  int32_T c2_i16;
  real_T c2_m_b;
  real_T c2_q_x;
  real_T c2_thresh;
  real_T c2_b_ndbl;
  real_T c2_r_x;
  real_T c2_s_x;
  boolean_T c2_n_b;
  real_T c2_t_x;
  real_T c2_b_apnd;
  real_T c2_u_x;
  real_T c2_b_cdiff;
  int32_T c2_i17;
  real_T c2_c_y;
  real_T c2_l_a;
  real_T c2_o_b;
  real_T c2_v_x;
  real_T c2_w_x;
  boolean_T c2_p_b;
  real_T c2_bnew;
  real_T c2_x_x;
  real_T c2_y_x;
  int32_T c2_i_loop_ub;
  boolean_T c2_n_too_large;
  real_T c2_b_absa;
  int32_T c2_i18;
  int32_T c2_i19;
  real_T c2_ab_x;
  real_T c2_bb_x;
  int32_T c2_n;
  real_T c2_cb_x;
  real_T c2_db_x;
  int32_T c2_j_loop_ub;
  real_T c2_eb_x;
  int32_T c2_i20;
  real_T c2_b_absb;
  boolean_T c2_p;
  int32_T c2_i21;
  int32_T c2_i22;
  real_T c2_b_c;
  real_T c2_m_a;
  const mxArray *c2_d_y = NULL;
  real_T c2_q_b;
  int32_T c2_i23;
  real_T c2_b_thresh;
  real_T c2_n_a;
  const mxArray *c2_e_y = NULL;
  real_T c2_fb_x;
  real_T c2_r_b;
  int32_T c2_k_loop_ub;
  real_T c2_gb_x;
  real_T c2_c_anew;
  int32_T c2_i24;
  int32_T c2_l_loop_ub;
  real_T c2_hb_x;
  real_T c2_ib_x;
  int32_T c2_i25;
  real_T c2_f_y;
  real_T c2_c_ndbl;
  real_T c2_d_d;
  real_T c2_c_apnd;
  int32_T c2_m_loop_ub;
  real_T c2_b_bnew;
  real_T c2_c_cdiff;
  int32_T c2_i26;
  int32_T c2_nm1;
  real_T c2_o_a;
  int32_T c2_p_a;
  boolean_T c2_b_n_too_large;
  real_T c2_s_b;
  int32_T c2_n_loop_ub;
  int32_T c2_tmp_data[6];
  int32_T c2_nm1d2;
  real_T c2_jb_x;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_b_n;
  real_T c2_kb_x;
  real_T c2_lb_x;
  int32_T c2_i29;
  int32_T c2_t_b;
  real_T c2_c_absa;
  int32_T c2_u_b;
  boolean_T c2_b_p;
  real_T c2_mb_x;
  real_T c2_nb_x;
  boolean_T c2_overflow;
  const mxArray *c2_g_y = NULL;
  real_T c2_ob_x;
  int32_T c2_i30;
  real_T c2_c_absb;
  int32_T c2_o_loop_ub;
  const mxArray *c2_h_y = NULL;
  int32_T c2_i31;
  real_T c2_c_c;
  int32_T c2_c_k;
  real_T c2_d1;
  real_T c2_c_thresh;
  int32_T c2_d_k;
  real_T c2_pb_x;
  int32_T c2_i32;
  int32_T c2_v_b;
  int32_T c2_e_k;
  real_T c2_qb_x;
  int32_T c2_i_y;
  real_T c2_kd;
  real_T c2_rb_x;
  int32_T c2_b_nm1;
  real_T c2_j_y;
  int32_T c2_q_a;
  int32_T c2_p_loop_ub;
  int32_T c2_b_nm1d2;
  int32_T c2_i33;
  int32_T c2_i34;
  real_T c2_c_bnew;
  int32_T c2_q_loop_ub;
  static real_T c2_B[18] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 4.0, 4.0, 4.0, 4.0,
    4.0, 4.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  int32_T c2_w_b;
  boolean_T c2_c_n_too_large;
  int32_T c2_i35;
  int32_T c2_x_b;
  int32_T c2_c_n;
  int32_T c2_r_loop_ub;
  boolean_T c2_b_overflow;
  int32_T c2_i36;
  boolean_T c2_c_p;
  int32_T c2_f_k;
  const mxArray *c2_k_y = NULL;
  int32_T c2_i37;
  const mxArray *c2_l_y = NULL;
  int32_T c2_y_b;
  int32_T c2_g_k;
  int32_T c2_m_y;
  real_T c2_b_kd;
  int32_T c2_c_nm1;
  int32_T c2_r_a;
  int32_T c2_c_nm1d2;
  int32_T c2_i38;
  int32_T c2_ab_b;
  int32_T c2_bb_b;
  boolean_T c2_c_overflow;
  int32_T c2_h_k;
  int32_T c2_cb_b;
  int32_T c2_i_k;
  int32_T c2_n_y;
  real_T c2_c_kd;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_len[0] = 0.0;
  for (c2_i = 0; c2_i < 3; c2_i++) {
    c2_b_i = (real_T)c2_i + 1.0;
    c2_maxNegD[(int32_T)c2_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 +
      (real_T)((int32_T)c2_b_i - 1)));
    c2_minAdjustedDim[(int32_T)c2_b_i - 1] = muDoubleScalarMin(6.0, 6.0 - (-1.0
      + (real_T)((int32_T)c2_b_i - 1)));
    c2_maxIndex = c2_minAdjustedDim[(int32_T)c2_b_i - 1];
    c2_maxIndex += -1.0 + (real_T)((int32_T)c2_b_i - 1);
    if (c2_maxIndex > 6.0) {
      c2_b = true;
    } else {
      c2_b = false;
    }

    if (c2_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_b_y)));
    }

    c2_len[(int32_T)(c2_b_i + 1.0) - 1] = ((c2_len[(int32_T)c2_b_i - 1] +
      c2_minAdjustedDim[(int32_T)c2_b_i - 1]) - c2_maxNegD[(int32_T)c2_b_i - 1])
      + 1.0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aRows, 1, &c2_k_emlrtRTEI);
  c2_dataLen = c2_len[3];
  c2_c_i = c2_aRows->size[0];
  c2_aRows->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_wd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aRows, c2_c_i,
    &c2_k_emlrtRTEI);
  c2_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_aRows->data[c2_i1] = 0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aCols, 1, &c2_l_emlrtRTEI);
  c2_i2 = c2_aCols->size[0];
  c2_aCols->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_vd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aCols, c2_i2,
    &c2_l_emlrtRTEI);
  c2_b_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_aCols->data[c2_i3] = 0;
  }

  c2_emxInit_real_T(chartInstance, c2_sp, &c2_aDat, 1, &c2_y_emlrtRTEI);
  c2_i4 = c2_aDat->size[0];
  c2_aDat->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_ae_emlrtRSI;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_aDat, c2_i4,
    &c2_m_emlrtRTEI);
  c2_c_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_aDat->data[c2_i5] = 0.0;
  }

  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_idx, 2, &c2_q_emlrtRTEI);
  c2_emxInit_int32_T1(chartInstance, c2_sp, &c2_b_r, 2, &c2_ab_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_x, 1, &c2_w_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_b_idx, 1, &c2_o_emlrtRTEI);
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_st.site = &c2_o_emlrtRSI;
    c2_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_b_a = c2_a;
    c2_b_b = c2_d;
    if (c2_b_b < c2_b_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_b_x = c2_b_a;
      c2_c_b = muDoubleScalarIsInf(c2_b_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_c_b) {
        c2_guard2 = true;
      } else {
        c2_c_x = c2_b_b;
        c2_d_b = muDoubleScalarIsInf(c2_c_x);
        if (c2_d_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_b_a == c2_b_b) {
          c2_i8 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i8,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_d_x = c2_b_a;
        c2_e_x = c2_d_x;
        c2_e_x = muDoubleScalarFloor(c2_e_x);
        if (c2_e_x == c2_b_a) {
          c2_i9 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i9,
            &c2_n_emlrtRTEI);
          c2_e_loop_ub = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a);
          for (c2_i10 = 0; c2_i10 <= c2_e_loop_ub; c2_i10++) {
            c2_idx->data[c2_i10] = c2_b_a + (real_T)c2_i10;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_e_a = c2_b_a;
          c2_f_b = c2_b_b;
          c2_f_a = c2_e_a;
          c2_g_b = c2_f_b;
          c2_anew = c2_f_a;
          c2_g_x = (c2_g_b - c2_f_a) + 0.5;
          c2_ndbl = c2_g_x;
          c2_ndbl = muDoubleScalarFloor(c2_ndbl);
          c2_apnd = c2_f_a + c2_ndbl;
          c2_cdiff = c2_apnd - c2_g_b;
          c2_g_a = c2_f_a;
          c2_j_b = c2_g_b;
          c2_i_x = c2_g_a;
          c2_k_x = c2_i_x;
          c2_m_x = c2_k_x;
          c2_absa = muDoubleScalarAbs(c2_m_x);
          c2_n_x = c2_j_b;
          c2_o_x = c2_n_x;
          c2_p_x = c2_o_x;
          c2_absb = muDoubleScalarAbs(c2_p_x);
          if (c2_absa > c2_absb) {
            c2_c = c2_absa;
          } else {
            c2_c = c2_absb;
          }

          c2_thresh = 4.4408920985006262E-16 * c2_c;
          c2_s_x = c2_cdiff;
          c2_t_x = c2_s_x;
          c2_u_x = c2_t_x;
          c2_c_y = muDoubleScalarAbs(c2_u_x);
          if (c2_c_y < c2_thresh) {
            c2_ndbl++;
            c2_bnew = c2_g_b;
          } else if (c2_cdiff > 0.0) {
            c2_bnew = c2_f_a + (c2_ndbl - 1.0);
          } else {
            c2_ndbl++;
            c2_bnew = c2_apnd;
          }

          c2_n_too_large = (c2_ndbl > 2.147483647E+9);
          if (c2_ndbl >= 0.0) {
            c2_n = (int32_T)muDoubleScalarFloor(c2_ndbl);
          } else {
            c2_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_p = !c2_n_too_large;
          if (!c2_p) {
            c2_d_y = NULL;
            sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_e_y = NULL;
            sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_e_y)));
          }

          c2_i23 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i23,
            &c2_s_emlrtRTEI);
          if (c2_n > 0) {
            c2_idx->data[0] = c2_anew;
            if (c2_n > 1) {
              c2_idx->data[c2_n - 1] = c2_bnew;
              c2_nm1 = c2_n - 1;
              c2_p_a = c2_nm1;
              c2_nm1d2 = c2_div_nzp_s32(chartInstance, c2_p_a, 2, 0, 1U, 0, 0);
              c2_i28 = c2_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_t_b = c2_i28 + 1;
              c2_u_b = c2_t_b;
              if (1 > c2_u_b) {
                c2_overflow = false;
              } else {
                c2_overflow = (c2_u_b > 2147483646);
              }

              if (c2_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_c_k = 1; c2_c_k - 1 <= c2_i28; c2_c_k++) {
                c2_e_k = c2_c_k;
                c2_kd = (real_T)c2_e_k;
                c2_idx->data[c2_e_k] = c2_anew + c2_kd;
                c2_idx->data[(c2_n - c2_e_k) - 1] = c2_bnew - c2_kd;
              }

              c2_v_b = c2_nm1d2;
              c2_i_y = c2_v_b << 1;
              if (c2_i_y == c2_nm1) {
                c2_idx->data[c2_nm1d2] = (c2_anew + c2_bnew) / 2.0;
              } else {
                c2_kd = (real_T)c2_nm1d2;
                c2_idx->data[c2_nm1d2] = c2_anew + c2_kd;
                c2_idx->data[c2_nm1d2 + 1] = c2_bnew - c2_kd;
              }
            }
          }
        }
      }
    }

    c2_i6 = c2_x->size[0];
    c2_x->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i6,
      &c2_o_emlrtRTEI);
    c2_d_loop_ub = c2_idx->size[1] - 1;
    for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
      c2_x->data[c2_i7] = c2_idx->data[c2_i7];
    }

    c2_st.site = &c2_o_emlrtRSI;
    c2_c_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_b_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_d_a = c2_c_a;
    c2_e_b = c2_b_d;
    if (c2_e_b < c2_d_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_f_x = c2_d_a;
      c2_h_b = muDoubleScalarIsInf(c2_f_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_h_b) {
        c2_guard2 = true;
      } else {
        c2_h_x = c2_e_b;
        c2_i_b = muDoubleScalarIsInf(c2_h_x);
        if (c2_i_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_d_a == c2_e_b) {
          c2_i13 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i13,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_j_x = c2_d_a;
        c2_l_x = c2_j_x;
        c2_l_x = muDoubleScalarFloor(c2_l_x);
        if (c2_l_x == c2_d_a) {
          c2_i15 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i15,
            &c2_n_emlrtRTEI);
          c2_h_loop_ub = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a);
          for (c2_i16 = 0; c2_i16 <= c2_h_loop_ub; c2_i16++) {
            c2_idx->data[c2_i16] = c2_d_a + (real_T)c2_i16;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_h_a = c2_d_a;
          c2_k_b = c2_e_b;
          c2_j_a = c2_h_a;
          c2_l_b = c2_k_b;
          c2_b_anew = c2_j_a;
          c2_q_x = (c2_l_b - c2_j_a) + 0.5;
          c2_b_ndbl = c2_q_x;
          c2_b_ndbl = muDoubleScalarFloor(c2_b_ndbl);
          c2_b_apnd = c2_j_a + c2_b_ndbl;
          c2_b_cdiff = c2_b_apnd - c2_l_b;
          c2_l_a = c2_j_a;
          c2_o_b = c2_l_b;
          c2_w_x = c2_l_a;
          c2_x_x = c2_w_x;
          c2_y_x = c2_x_x;
          c2_b_absa = muDoubleScalarAbs(c2_y_x);
          c2_ab_x = c2_o_b;
          c2_cb_x = c2_ab_x;
          c2_eb_x = c2_cb_x;
          c2_b_absb = muDoubleScalarAbs(c2_eb_x);
          if (c2_b_absa > c2_b_absb) {
            c2_b_c = c2_b_absa;
          } else {
            c2_b_c = c2_b_absb;
          }

          c2_b_thresh = 4.4408920985006262E-16 * c2_b_c;
          c2_fb_x = c2_b_cdiff;
          c2_gb_x = c2_fb_x;
          c2_hb_x = c2_gb_x;
          c2_f_y = muDoubleScalarAbs(c2_hb_x);
          if (c2_f_y < c2_b_thresh) {
            c2_b_ndbl++;
            c2_b_bnew = c2_l_b;
          } else if (c2_b_cdiff > 0.0) {
            c2_b_bnew = c2_j_a + (c2_b_ndbl - 1.0);
          } else {
            c2_b_ndbl++;
            c2_b_bnew = c2_b_apnd;
          }

          c2_b_n_too_large = (c2_b_ndbl > 2.147483647E+9);
          if (c2_b_ndbl >= 0.0) {
            c2_b_n = (int32_T)muDoubleScalarFloor(c2_b_ndbl);
          } else {
            c2_b_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_b_p = !c2_b_n_too_large;
          if (!c2_b_p) {
            c2_g_y = NULL;
            sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_h_y = NULL;
            sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_h_y)));
          }

          c2_i30 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_b_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i30,
            &c2_s_emlrtRTEI);
          if (c2_b_n > 0) {
            c2_idx->data[0] = c2_b_anew;
            if (c2_b_n > 1) {
              c2_idx->data[c2_b_n - 1] = c2_b_bnew;
              c2_b_nm1 = c2_b_n - 1;
              c2_q_a = c2_b_nm1;
              c2_b_nm1d2 = c2_div_nzp_s32(chartInstance, c2_q_a, 2, 0, 1U, 0, 0);
              c2_i34 = c2_b_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_w_b = c2_i34 + 1;
              c2_x_b = c2_w_b;
              if (1 > c2_x_b) {
                c2_b_overflow = false;
              } else {
                c2_b_overflow = (c2_x_b > 2147483646);
              }

              if (c2_b_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_f_k = 1; c2_f_k - 1 <= c2_i34; c2_f_k++) {
                c2_g_k = c2_f_k;
                c2_b_kd = (real_T)c2_g_k;
                c2_idx->data[c2_g_k] = c2_b_anew + c2_b_kd;
                c2_idx->data[(c2_b_n - c2_g_k) - 1] = c2_b_bnew - c2_b_kd;
              }

              c2_y_b = c2_b_nm1d2;
              c2_m_y = c2_y_b << 1;
              if (c2_m_y == c2_b_nm1) {
                c2_idx->data[c2_b_nm1d2] = (c2_b_anew + c2_b_bnew) / 2.0;
              } else {
                c2_b_kd = (real_T)c2_b_nm1d2;
                c2_idx->data[c2_b_nm1d2] = c2_b_anew + c2_b_kd;
                c2_idx->data[c2_b_nm1d2 + 1] = c2_b_bnew - c2_b_kd;
              }
            }
          }
        }
      }
    }

    c2_i11 = c2_b_idx->size[0];
    c2_b_idx->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_b_idx, c2_i11,
      &c2_o_emlrtRTEI);
    c2_f_loop_ub = c2_idx->size[1] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_f_loop_ub; c2_i12++) {
      c2_b_idx->data[c2_i12] = c2_idx->data[c2_i12];
    }

    c2_i_size[0] = c2_x->size[0];
    c2_g_loop_ub = c2_x->size[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_g_loop_ub; c2_i14++) {
      c2_i_data[c2_i14] = c2_b_idx->data[c2_i14];
    }

    c2_st.site = &c2_q_emlrtRSI;
    c2_i_a = c2_len[(int32_T)c2_b_k - 1] + 1.0;
    c2_c_d = c2_len[(int32_T)(c2_b_k + 1.0) - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_k_a = c2_i_a;
    c2_m_b = c2_c_d;
    if (c2_m_b < c2_k_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_r_x = c2_k_a;
      c2_n_b = muDoubleScalarIsInf(c2_r_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_n_b) {
        c2_guard2 = true;
      } else {
        c2_v_x = c2_m_b;
        c2_p_b = muDoubleScalarIsInf(c2_v_x);
        if (c2_p_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_k_a == c2_m_b) {
          c2_i18 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i18,
            &c2_q_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_bb_x = c2_k_a;
        c2_db_x = c2_bb_x;
        c2_db_x = muDoubleScalarFloor(c2_db_x);
        if (c2_db_x == c2_k_a) {
          c2_i21 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i21,
            &c2_q_emlrtRTEI);
          c2_k_loop_ub = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a);
          for (c2_i24 = 0; c2_i24 <= c2_k_loop_ub; c2_i24++) {
            c2_idx->data[c2_i24] = c2_k_a + (real_T)c2_i24;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_m_a = c2_k_a;
          c2_q_b = c2_m_b;
          c2_n_a = c2_m_a;
          c2_r_b = c2_q_b;
          c2_c_anew = c2_n_a;
          c2_ib_x = (c2_r_b - c2_n_a) + 0.5;
          c2_c_ndbl = c2_ib_x;
          c2_c_ndbl = muDoubleScalarFloor(c2_c_ndbl);
          c2_c_apnd = c2_n_a + c2_c_ndbl;
          c2_c_cdiff = c2_c_apnd - c2_r_b;
          c2_o_a = c2_n_a;
          c2_s_b = c2_r_b;
          c2_jb_x = c2_o_a;
          c2_kb_x = c2_jb_x;
          c2_lb_x = c2_kb_x;
          c2_c_absa = muDoubleScalarAbs(c2_lb_x);
          c2_mb_x = c2_s_b;
          c2_nb_x = c2_mb_x;
          c2_ob_x = c2_nb_x;
          c2_c_absb = muDoubleScalarAbs(c2_ob_x);
          if (c2_c_absa > c2_c_absb) {
            c2_c_c = c2_c_absa;
          } else {
            c2_c_c = c2_c_absb;
          }

          c2_c_thresh = 4.4408920985006262E-16 * c2_c_c;
          c2_pb_x = c2_c_cdiff;
          c2_qb_x = c2_pb_x;
          c2_rb_x = c2_qb_x;
          c2_j_y = muDoubleScalarAbs(c2_rb_x);
          if (c2_j_y < c2_c_thresh) {
            c2_c_ndbl++;
            c2_c_bnew = c2_r_b;
          } else if (c2_c_cdiff > 0.0) {
            c2_c_bnew = c2_n_a + (c2_c_ndbl - 1.0);
          } else {
            c2_c_ndbl++;
            c2_c_bnew = c2_c_apnd;
          }

          c2_c_n_too_large = (c2_c_ndbl > 2.147483647E+9);
          if (c2_c_ndbl >= 0.0) {
            c2_c_n = (int32_T)muDoubleScalarFloor(c2_c_ndbl);
          } else {
            c2_c_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_c_p = !c2_c_n_too_large;
          if (!c2_c_p) {
            c2_k_y = NULL;
            sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_l_y = NULL;
            sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_k_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_l_y)));
          }

          c2_i37 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_c_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i37,
            &c2_s_emlrtRTEI);
          if (c2_c_n > 0) {
            c2_idx->data[0] = c2_c_anew;
            if (c2_c_n > 1) {
              c2_idx->data[c2_c_n - 1] = c2_c_bnew;
              c2_c_nm1 = c2_c_n - 1;
              c2_r_a = c2_c_nm1;
              c2_c_nm1d2 = c2_div_nzp_s32(chartInstance, c2_r_a, 2, 0, 1U, 0, 0);
              c2_i38 = c2_c_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_ab_b = c2_i38 + 1;
              c2_bb_b = c2_ab_b;
              if (1 > c2_bb_b) {
                c2_c_overflow = false;
              } else {
                c2_c_overflow = (c2_bb_b > 2147483646);
              }

              if (c2_c_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_h_k = 1; c2_h_k - 1 <= c2_i38; c2_h_k++) {
                c2_i_k = c2_h_k;
                c2_c_kd = (real_T)c2_i_k;
                c2_idx->data[c2_i_k] = c2_c_anew + c2_c_kd;
                c2_idx->data[(c2_c_n - c2_i_k) - 1] = c2_c_bnew - c2_c_kd;
              }

              c2_cb_b = c2_c_nm1d2;
              c2_n_y = c2_cb_b << 1;
              if (c2_n_y == c2_c_nm1) {
                c2_idx->data[c2_c_nm1d2] = (c2_c_anew + c2_c_bnew) / 2.0;
              } else {
                c2_c_kd = (real_T)c2_c_nm1d2;
                c2_idx->data[c2_c_nm1d2] = c2_c_anew + c2_c_kd;
                c2_idx->data[c2_c_nm1d2 + 1] = c2_c_bnew - c2_c_kd;
              }
            }
          }
        }
      }
    }

    c2_i17 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_ce_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i17,
      &c2_r_emlrtRTEI);
    c2_i_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
      c2_b_r->data[c2_i19] = (int32_T)c2_idx->data[c2_i19];
    }

    c2_j_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_j_loop_ub; c2_i20++) {
      c2_aRows->data[c2_b_r->data[c2_i20] - 1] = (int32_T)c2_i_data[c2_i20];
    }

    c2_i22 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_be_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i22,
      &c2_t_emlrtRTEI);
    c2_l_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i25 = 0; c2_i25 <= c2_l_loop_ub; c2_i25++) {
      c2_b_r->data[c2_i25] = (int32_T)c2_idx->data[c2_i25];
    }

    c2_d_d = -1.0 + (real_T)((int32_T)c2_b_k - 1);
    c2_m_loop_ub = c2_i_size[0] - 1;
    for (c2_i26 = 0; c2_i26 <= c2_m_loop_ub; c2_i26++) {
      c2_tmp_data[c2_i26] = (int32_T)(c2_i_data[c2_i26] + c2_d_d);
    }

    c2_n_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i27 = 0; c2_i27 <= c2_n_loop_ub; c2_i27++) {
      c2_aCols->data[c2_b_r->data[c2_i27] - 1] = c2_tmp_data[c2_i27];
    }

    c2_i29 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i29,
      &c2_v_emlrtRTEI);
    c2_o_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_o_loop_ub; c2_i31++) {
      c2_b_r->data[c2_i31] = (int32_T)c2_idx->data[c2_i31];
    }

    c2_d1 = -1.0 + (real_T)((int32_T)c2_b_k - 1);
    c2_d_k = (int32_T)c2_b_k - 1;
    c2_i32 = c2_x->size[0];
    c2_x->size[0] = c2_i_size[0];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i32,
      &c2_w_emlrtRTEI);
    c2_p_loop_ub = c2_i_size[0] - 1;
    for (c2_i33 = 0; c2_i33 <= c2_p_loop_ub; c2_i33++) {
      c2_x->data[c2_i33] = c2_B[((int32_T)(c2_i_data[c2_i33] + c2_d1) + 6 *
        c2_d_k) - 1];
    }

    c2_q_loop_ub = c2_x->size[0] - 1;
    for (c2_i35 = 0; c2_i35 <= c2_q_loop_ub; c2_i35++) {
      c2_i_data[c2_i35] = c2_x->data[c2_i35];
    }

    c2_r_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i36 = 0; c2_i36 <= c2_r_loop_ub; c2_i36++) {
      c2_aDat->data[c2_b_r->data[c2_i36] - 1] = c2_i_data[c2_i36];
    }
  }

  c2_emxFree_real_T(chartInstance, &c2_b_idx);
  c2_emxFree_real_T(chartInstance, &c2_x);
  c2_emxFree_int32_T(chartInstance, &c2_b_r);
  c2_emxFree_real_T(chartInstance, &c2_idx);
  c2_st.site = &c2_p_emlrtRSI;
  c2_sparse(chartInstance, &c2_st, c2_aRows, c2_aCols, c2_aDat, c2_res1);
  c2_emxFree_real_T(chartInstance, &c2_aDat);
  c2_emxFree_int32_T(chartInstance, &c2_aCols);
  c2_emxFree_int32_T(chartInstance, &c2_aRows);
}

static void c2_check_forloop_overflow_error(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  static char_T c2_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
    "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 2U, 14, c2_b_y,
    14, c2_c_y)));
}

static void c2_sparse(SFc2_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c2_sp, c2_emxArray_int32_T *c2_varargin_1,
                      c2_emxArray_int32_T *c2_varargin_2, c2_emxArray_real_T
                      *c2_varargin_3, c2_coder_internal_sparse *c2_y)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_i_st;
  int32_T c2_nc;
  int32_T c2_nr;
  int32_T c2_ny;
  boolean_T c2_b;
  const mxArray *c2_b_y = NULL;
  boolean_T c2_b1;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  c2_emxArray_int32_T *c2_b_varargin_1;
  int32_T c2_i;
  const mxArray *c2_e_y = NULL;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxArray_int32_T *c2_ridxInt;
  c2_emxArray_int32_T *c2_b_varargin_2;
  int32_T c2_i2;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  c2_emxArray_int32_T *c2_cidxInt;
  c2_emxArray_int32_T *c2_sortedIndices;
  int32_T c2_i4;
  int32_T c2_b_b;
  int32_T c2_c_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  int32_T c2_b_k;
  int32_T c2_istop;
  int32_T c2_b_istop;
  int32_T c2_maxr;
  int32_T c2_d_b;
  int32_T c2_e_b;
  boolean_T c2_b_overflow;
  int32_T c2_c_k;
  const mxArray *c2_f_y = NULL;
  int32_T c2_maxc;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  int32_T c2_a;
  int32_T c2_u;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  int32_T c2_numalloc;
  const mxArray *c2_k_y = NULL;
  int32_T c2_b_u;
  int32_T c2_i5;
  const mxArray *c2_l_y = NULL;
  real_T c2_d;
  int32_T c2_c_u;
  const mxArray *c2_m_y = NULL;
  int32_T c2_d_u;
  const mxArray *c2_n_y = NULL;
  real_T c2_d1;
  int32_T c2_e_u;
  int32_T c2_c_loop_ub;
  const mxArray *c2_o_y = NULL;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  real_T c2_d2;
  real_T c2_d3;
  int32_T c2_d_loop_ub;
  int32_T c2_i9;
  int32_T c2_cptr;
  int32_T c2_c;
  int32_T c2_b_c;
  int32_T c2_f_b;
  int32_T c2_g_b;
  boolean_T c2_c_overflow;
  int32_T c2_d_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_i_st.prev = &c2_h_st;
  c2_i_st.tls = c2_h_st.tls;
  c2_st.site = &c2_w_emlrtRSI;
  c2_nc = c2_varargin_2->size[0];
  c2_nr = c2_varargin_1->size[0];
  c2_ny = c2_varargin_3->size[0];
  if ((c2_nr == c2_nc) && (c2_ny == c2_nc)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_c_y)));
  }

  if ((c2_ny == c2_nc) || (c2_ny == c2_nr)) {
    c2_b1 = true;
  } else {
    c2_b1 = false;
  }

  if (!c2_b1) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_b_varargin_1, 1,
                     &c2_bb_emlrtRTEI);
  c2_i = c2_b_varargin_1->size[0];
  c2_b_varargin_1->size[0] = c2_varargin_1->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_b_varargin_1, c2_i,
    &c2_bb_emlrtRTEI);
  c2_loop_ub = c2_varargin_1->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_varargin_1->data[c2_i1] = c2_varargin_1->data[c2_i1];
  }

  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_ridxInt, 1, &c2_fb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_b_varargin_2, 1,
                     &c2_cb_emlrtRTEI);
  c2_b_st.site = &c2_eb_emlrtRSI;
  c2_assertValidIndexArg(chartInstance, &c2_b_st, c2_b_varargin_1, c2_ridxInt);
  c2_i2 = c2_b_varargin_2->size[0];
  c2_b_varargin_2->size[0] = c2_varargin_2->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_b_varargin_2, c2_i2,
    &c2_cb_emlrtRTEI);
  c2_b_loop_ub = c2_varargin_2->size[0] - 1;
  c2_emxFree_int32_T(chartInstance, &c2_b_varargin_1);
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_b_varargin_2->data[c2_i3] = c2_varargin_2->data[c2_i3];
  }

  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_cidxInt, 1, &c2_gb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_sortedIndices, 1,
                     &c2_hb_emlrtRTEI);
  c2_b_st.site = &c2_db_emlrtRSI;
  c2_assertValidIndexArg(chartInstance, &c2_b_st, c2_b_varargin_2, c2_cidxInt);
  c2_i4 = c2_sortedIndices->size[0];
  c2_sortedIndices->size[0] = c2_nc;
  c2_b_st.site = &c2_w_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_sortedIndices, c2_i4,
    &c2_db_emlrtRTEI);
  c2_b_st.site = &c2_cb_emlrtRSI;
  c2_b_b = c2_nc;
  c2_c_b = c2_b_b;
  c2_emxFree_int32_T(chartInstance, &c2_b_varargin_2);
  if (1 > c2_c_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_c_b > 2147483646);
  }

  if (c2_overflow) {
    c2_c_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
  }

  for (c2_k = 1; c2_k - 1 < c2_nc; c2_k++) {
    c2_b_k = c2_k;
    c2_sortedIndices->data[c2_b_k - 1] = c2_b_k;
  }

  c2_b_st.site = &c2_bb_emlrtRSI;
  c2_b_locSortrows(chartInstance, &c2_b_st, c2_sortedIndices, c2_cidxInt,
                   c2_ridxInt);
  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_c_st.site = &c2_ub_emlrtRSI;
  c2_d_st.site = &c2_vb_emlrtRSI;
  c2_e_st.site = &c2_wb_emlrtRSI;
  c2_f_st.site = &c2_xb_emlrtRSI;
  c2_istop = c2_ridxInt->size[0];
  c2_g_st.site = &c2_yb_emlrtRSI;
  c2_b_istop = c2_istop;
  c2_maxr = c2_ridxInt->data[0];
  c2_h_st.site = &c2_ac_emlrtRSI;
  c2_d_b = c2_b_istop;
  c2_e_b = c2_d_b;
  c2_b_overflow = (c2_e_b > 2147483646);
  if (c2_b_overflow) {
    c2_i_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_i_st);
  }

  for (c2_c_k = 1; c2_c_k < c2_b_istop; c2_c_k++) {
    if (c2_maxr < c2_ridxInt->data[c2_c_k]) {
      c2_maxr = c2_ridxInt->data[c2_c_k];
    }
  }

  if (!(c2_maxr <= 6)) {
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_u = 7;
    c2_j_y = NULL;
    sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), false);
    c2_b_u = 1;
    c2_l_y = NULL;
    sf_mex_assign(&c2_l_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0U, 0U, 0), false);
    c2_d_u = 6;
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_d_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_f_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 4U, 14, c2_g_y,
      14, c2_j_y, 14, c2_l_y, 14, c2_n_y)));
  }

  c2_maxc = c2_cidxInt->data[c2_cidxInt->size[0] - 1];
  if (!(c2_maxc <= 6)) {
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_k_y = NULL;
    sf_mex_assign(&c2_k_y, sf_mex_create("y", &c2_maxc, 6, 0U, 0U, 0U, 0), false);
    c2_c_u = 1;
    c2_m_y = NULL;
    sf_mex_assign(&c2_m_y, sf_mex_create("y", &c2_c_u, 6, 0U, 0U, 0U, 0), false);
    c2_e_u = 6;
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", &c2_e_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_h_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 4U, 14, c2_i_y,
      14, c2_k_y, 14, c2_m_y, 14, c2_o_y)));
  }

  c2_a = c2_nc;
  if (c2_a >= 1) {
    c2_numalloc = c2_a;
  } else {
    c2_numalloc = 1;
  }

  c2_i5 = c2_y->d->size[0];
  c2_d = (real_T)c2_numalloc;
  c2_y->d->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c2_d, &c2_g_emlrtDCI,
    &c2_st);
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_y->d, c2_i5,
    &c2_eb_emlrtRTEI);
  c2_d1 = (real_T)c2_numalloc;
  c2_c_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c2_d1, &c2_g_emlrtDCI,
    &c2_st) - 1;
  for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
    c2_y->d->data[c2_i6] = 0.0;
  }

  c2_y->maxnz = c2_numalloc;
  c2_i7 = c2_y->colidx->size[0];
  c2_y->colidx->size[0] = 7;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_y->colidx, c2_i7,
    &c2_db_emlrtRTEI);
  c2_y->colidx->data[0] = 1;
  c2_i8 = c2_y->rowidx->size[0];
  c2_d2 = (real_T)c2_numalloc;
  c2_y->rowidx->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c2_d2,
    &c2_g_emlrtDCI, &c2_st);
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_y->rowidx, c2_i8,
    &c2_eb_emlrtRTEI);
  c2_d3 = (real_T)c2_numalloc;
  c2_d_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c2_d3, &c2_g_emlrtDCI,
    &c2_st) - 1;
  for (c2_i9 = 0; c2_i9 <= c2_d_loop_ub; c2_i9++) {
    c2_y->rowidx->data[c2_i9] = 0;
  }

  c2_cptr = 0;
  for (c2_c = 0; c2_c < 6; c2_c++) {
    c2_b_c = c2_c + 1;
    while ((c2_cptr + 1 <= c2_nc) && (c2_cidxInt->data[c2_cptr] == c2_b_c)) {
      c2_y->rowidx->data[c2_cptr] = c2_ridxInt->data[c2_cptr];
      c2_cptr++;
    }

    c2_y->colidx->data[c2_b_c] = c2_cptr + 1;
  }

  c2_emxFree_int32_T(chartInstance, &c2_cidxInt);
  c2_emxFree_int32_T(chartInstance, &c2_ridxInt);
  c2_b_st.site = &c2_y_emlrtRSI;
  c2_f_b = c2_nc;
  c2_g_b = c2_f_b;
  if (1 > c2_g_b) {
    c2_c_overflow = false;
  } else {
    c2_c_overflow = (c2_g_b > 2147483646);
  }

  if (c2_c_overflow) {
    c2_c_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
  }

  for (c2_d_k = 1; c2_d_k - 1 < c2_nc; c2_d_k++) {
    c2_b_k = c2_d_k - 1;
    c2_y->d->data[c2_b_k] = c2_varargin_3->data[c2_sortedIndices->data[c2_b_k] -
      1];
  }

  c2_emxFree_int32_T(chartInstance, &c2_sortedIndices);
  c2_b_st.site = &c2_x_emlrtRSI;
  c2_b_sparse_fillIn(chartInstance, &c2_b_st, c2_y);
}

static void c2_assertValidIndexArg(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_s, c2_emxArray_int32_T
  *c2_sint)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_ns;
  int32_T c2_i;
  int32_T c2_b;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  int32_T c2_b_k;
  int32_T c2_sk;
  int32_T c2_x;
  int32_T c2_b_x;
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'p', 'a',
    'r', 's', 'f', 'c', 'n', ':', 'n', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e',
    'r', 'I', 'n', 'd', 'e', 'x' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  static char_T c2_b_cv1[27] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'p',
    'a', 'r', 's', 'f', 'c', 'n', ':', 'n', 'o', 'n', 'P', 'o', 's', 'I', 'n',
    'd', 'e', 'x' };

  const mxArray *c2_d_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_ns = c2_s->size[0];
  c2_i = c2_sint->size[0];
  c2_sint->size[0] = c2_ns;
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_sint, c2_i,
    &c2_ib_emlrtRTEI);
  c2_st.site = &c2_fb_emlrtRSI;
  c2_b = c2_ns;
  c2_b_b = c2_b;
  if (1 > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_k = 1; c2_k - 1 < c2_ns; c2_k++) {
    c2_b_k = c2_k - 1;
    c2_sk = c2_s->data[c2_b_k];
    c2_x = c2_sk;
    c2_b_x = c2_x;
    if (c2_b_x != c2_sk) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        31), false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_c_y)));
    }

    if (!(0 < c2_sk)) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        27), false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        27), false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_d_y)));
    }

    c2_sint->data[c2_b_k] = c2_sk;
  }
}

static void c2_locSortrows(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_a,
  c2_emxArray_int32_T *c2_b, c2_emxArray_int32_T *c2_b_idx, c2_emxArray_int32_T *
  c2_b_a, c2_emxArray_int32_T *c2_b_b)
{
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  c2_i = c2_b_idx->size[0];
  c2_b_idx->size[0] = c2_idx->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_idx, c2_i,
    &c2_jb_emlrtRTEI);
  c2_loop_ub = c2_idx->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_idx->data[c2_i1] = c2_idx->data[c2_i1];
  }

  c2_i2 = c2_b_a->size[0];
  c2_b_a->size[0] = c2_a->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_a, c2_i2,
    &c2_jb_emlrtRTEI);
  c2_b_loop_ub = c2_a->size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_b_a->data[c2_i3] = c2_a->data[c2_i3];
  }

  c2_i4 = c2_b_b->size[0];
  c2_b_b->size[0] = c2_b->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_b, c2_i4,
    &c2_jb_emlrtRTEI);
  c2_c_loop_ub = c2_b->size[0] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_b_b->data[c2_i5] = c2_b->data[c2_i5];
  }

  c2_b_locSortrows(chartInstance, c2_sp, c2_b_idx, c2_b_a, c2_b_b);
}

static void c2_insertionsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp, c2_emxArray_int32_T
  *c2_b_x)
{
  c2_coder_internal_anonymous_function c2_b_cmp;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp,
    &c2_kb_emlrtRTEI);
  c2_i = c2_b_x->size[0];
  c2_b_x->size[0] = c2_x->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_x, c2_i,
    &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_x->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_x->data[c2_i1] = c2_x->data[c2_i1];
  }

  c2_emxCopyStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp, &c2_cmp,
    &c2_kb_emlrtRTEI);
  c2_b_insertionsort(chartInstance, c2_sp, c2_b_x, c2_xstart, c2_xend, c2_b_cmp);
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_b_cmp);
}

static void c2_introsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xend,
  c2_coder_internal_anonymous_function c2_cmp, c2_emxArray_int32_T *c2_b_x)
{
  c2_coder_internal_anonymous_function c2_b_cmp;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp,
    &c2_lb_emlrtRTEI);
  c2_i = c2_b_x->size[0];
  c2_b_x->size[0] = c2_x->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_x, c2_i,
    &c2_lb_emlrtRTEI);
  c2_loop_ub = c2_x->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_x->data[c2_i1] = c2_x->data[c2_i1];
  }

  c2_emxCopyStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp, &c2_cmp,
    &c2_lb_emlrtRTEI);
  c2_b_introsort(chartInstance, c2_sp, c2_b_x, c2_xend, c2_b_cmp);
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_b_cmp);
}

static void c2_heapsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp, c2_emxArray_int32_T
  *c2_b_x)
{
  c2_coder_internal_anonymous_function c2_b_cmp;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp,
    &c2_mb_emlrtRTEI);
  c2_i = c2_b_x->size[0];
  c2_b_x->size[0] = c2_x->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_x, c2_i,
    &c2_mb_emlrtRTEI);
  c2_loop_ub = c2_x->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_x->data[c2_i1] = c2_x->data[c2_i1];
  }

  c2_emxCopyStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp, &c2_cmp,
    &c2_mb_emlrtRTEI);
  c2_b_heapsort(chartInstance, c2_sp, c2_b_x, c2_xstart, c2_xend, c2_b_cmp);
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_b_cmp);
}

static void c2_heapify(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_idx, int32_T
  c2_xstart, int32_T c2_xend, c2_coder_internal_anonymous_function c2_cmp,
  c2_emxArray_int32_T *c2_b_x)
{
  c2_coder_internal_anonymous_function c2_b_cmp;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp,
    &c2_nb_emlrtRTEI);
  c2_i = c2_b_x->size[0];
  c2_b_x->size[0] = c2_x->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_x, c2_i,
    &c2_nb_emlrtRTEI);
  c2_loop_ub = c2_x->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_x->data[c2_i1] = c2_x->data[c2_i1];
  }

  c2_emxCopyStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp, &c2_cmp,
    &c2_nb_emlrtRTEI);
  c2_b_heapify(chartInstance, c2_sp, c2_b_x, c2_idx, c2_xstart, c2_xend,
               c2_b_cmp);
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_b_cmp);
}

static void c2_permuteVector(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_y,
  c2_emxArray_int32_T *c2_b_y)
{
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxArray_int32_T *c2_b_idx;
  int32_T c2_i2;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  c2_i = c2_b_y->size[0];
  c2_b_y->size[0] = c2_y->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_y, c2_i,
    &c2_ob_emlrtRTEI);
  c2_loop_ub = c2_y->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_y->data[c2_i1] = c2_y->data[c2_i1];
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_b_idx, 1, &c2_ob_emlrtRTEI);
  c2_i2 = c2_b_idx->size[0];
  c2_b_idx->size[0] = c2_idx->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_idx, c2_i2,
    &c2_ob_emlrtRTEI);
  c2_b_loop_ub = c2_idx->size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_b_idx->data[c2_i3] = c2_idx->data[c2_i3];
  }

  c2_b_permuteVector(chartInstance, c2_sp, c2_b_idx, c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_b_idx);
}

static void c2_sparse_fillIn(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, c2_coder_internal_sparse *
  c2_b_this)
{
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_pb_emlrtRTEI);
  c2_b_sparse_fillIn(chartInstance, c2_sp, c2_b_this);
}

static void c2_b_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  real_T c2_len[3];
  int32_T c2_i;
  c2_emxArray_int32_T *c2_aRows;
  real_T c2_b_i;
  real_T c2_dataLen;
  real_T c2_maxNegD[2];
  int32_T c2_c_i;
  real_T c2_minAdjustedDim[2];
  real_T c2_maxIndex;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  int32_T c2_i1;
  c2_emxArray_int32_T *c2_aCols;
  const mxArray *c2_y = NULL;
  int32_T c2_i2;
  const mxArray *c2_b_y = NULL;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  c2_emxArray_real_T *c2_aDat;
  int32_T c2_i4;
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  c2_emxArray_real_T *c2_idx;
  c2_emxArray_int32_T *c2_b_r;
  c2_emxArray_real_T *c2_x;
  c2_emxArray_real_T *c2_b_idx;
  int32_T c2_k;
  real_T c2_b_k;
  real_T c2_a;
  real_T c2_d;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_x;
  boolean_T c2_c_b;
  boolean_T c2_guard1 = false;
  boolean_T c2_guard2 = false;
  int32_T c2_i6;
  real_T c2_c_x;
  boolean_T c2_d_b;
  int32_T c2_d_loop_ub;
  int32_T c2_i7;
  int32_T c2_i8;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_c_a;
  real_T c2_b_d;
  int32_T c2_i9;
  real_T c2_d_a;
  real_T c2_e_a;
  real_T c2_e_b;
  real_T c2_f_b;
  real_T c2_f_a;
  real_T c2_f_x;
  real_T c2_g_b;
  int32_T c2_e_loop_ub;
  boolean_T c2_h_b;
  real_T c2_anew;
  int32_T c2_i10;
  real_T c2_g_x;
  int32_T c2_i11;
  real_T c2_ndbl;
  real_T c2_h_x;
  real_T c2_apnd;
  boolean_T c2_i_b;
  real_T c2_cdiff;
  int32_T c2_f_loop_ub;
  real_T c2_g_a;
  int32_T c2_i12;
  real_T c2_j_b;
  int32_T c2_i13;
  real_T c2_i_x;
  real_T c2_j_x;
  int32_T c2_i_size[1];
  real_T c2_k_x;
  real_T c2_l_x;
  int32_T c2_g_loop_ub;
  real_T c2_m_x;
  int32_T c2_i14;
  real_T c2_absa;
  real_T c2_n_x;
  int32_T c2_i15;
  real_T c2_i_data[6];
  real_T c2_o_x;
  real_T c2_h_a;
  real_T c2_i_a;
  real_T c2_p_x;
  real_T c2_k_b;
  real_T c2_c_d;
  real_T c2_absb;
  real_T c2_j_a;
  real_T c2_l_b;
  int32_T c2_h_loop_ub;
  real_T c2_k_a;
  real_T c2_c;
  real_T c2_b_anew;
  int32_T c2_i16;
  real_T c2_m_b;
  real_T c2_q_x;
  real_T c2_thresh;
  real_T c2_b_ndbl;
  real_T c2_r_x;
  real_T c2_s_x;
  boolean_T c2_n_b;
  real_T c2_t_x;
  real_T c2_b_apnd;
  real_T c2_u_x;
  real_T c2_b_cdiff;
  int32_T c2_i17;
  real_T c2_c_y;
  real_T c2_l_a;
  real_T c2_o_b;
  real_T c2_v_x;
  real_T c2_w_x;
  boolean_T c2_p_b;
  real_T c2_bnew;
  real_T c2_x_x;
  real_T c2_y_x;
  int32_T c2_i_loop_ub;
  boolean_T c2_n_too_large;
  real_T c2_b_absa;
  int32_T c2_i18;
  int32_T c2_i19;
  real_T c2_ab_x;
  real_T c2_bb_x;
  int32_T c2_n;
  real_T c2_cb_x;
  real_T c2_db_x;
  int32_T c2_j_loop_ub;
  real_T c2_eb_x;
  int32_T c2_i20;
  real_T c2_b_absb;
  boolean_T c2_p;
  int32_T c2_i21;
  int32_T c2_i22;
  real_T c2_b_c;
  real_T c2_m_a;
  const mxArray *c2_d_y = NULL;
  real_T c2_q_b;
  int32_T c2_i23;
  real_T c2_b_thresh;
  real_T c2_n_a;
  const mxArray *c2_e_y = NULL;
  real_T c2_fb_x;
  real_T c2_r_b;
  int32_T c2_k_loop_ub;
  real_T c2_gb_x;
  real_T c2_c_anew;
  int32_T c2_i24;
  int32_T c2_l_loop_ub;
  real_T c2_hb_x;
  real_T c2_ib_x;
  int32_T c2_i25;
  real_T c2_f_y;
  real_T c2_c_ndbl;
  real_T c2_d_d;
  real_T c2_c_apnd;
  int32_T c2_m_loop_ub;
  real_T c2_b_bnew;
  real_T c2_c_cdiff;
  int32_T c2_i26;
  int32_T c2_nm1;
  real_T c2_o_a;
  int32_T c2_p_a;
  boolean_T c2_b_n_too_large;
  real_T c2_s_b;
  int32_T c2_n_loop_ub;
  int32_T c2_tmp_data[6];
  int32_T c2_nm1d2;
  real_T c2_jb_x;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_b_n;
  real_T c2_kb_x;
  real_T c2_lb_x;
  int32_T c2_i29;
  int32_T c2_t_b;
  real_T c2_c_absa;
  int32_T c2_u_b;
  boolean_T c2_b_p;
  real_T c2_mb_x;
  real_T c2_nb_x;
  boolean_T c2_overflow;
  const mxArray *c2_g_y = NULL;
  real_T c2_ob_x;
  int32_T c2_i30;
  real_T c2_c_absb;
  int32_T c2_o_loop_ub;
  const mxArray *c2_h_y = NULL;
  int32_T c2_i31;
  real_T c2_c_c;
  int32_T c2_c_k;
  real_T c2_d1;
  real_T c2_c_thresh;
  int32_T c2_d_k;
  real_T c2_pb_x;
  int32_T c2_i32;
  int32_T c2_v_b;
  int32_T c2_e_k;
  real_T c2_qb_x;
  int32_T c2_i_y;
  real_T c2_kd;
  real_T c2_rb_x;
  int32_T c2_b_nm1;
  real_T c2_j_y;
  int32_T c2_q_a;
  int32_T c2_p_loop_ub;
  int32_T c2_b_nm1d2;
  int32_T c2_i33;
  int32_T c2_i34;
  real_T c2_c_bnew;
  int32_T c2_q_loop_ub;
  static real_T c2_B[12] = { -3.0, -3.0, -3.0, -3.0, -3.0, -3.0, 3.0, 3.0, 3.0,
    3.0, 3.0, 3.0 };

  int32_T c2_w_b;
  boolean_T c2_c_n_too_large;
  int32_T c2_i35;
  int32_T c2_x_b;
  int32_T c2_c_n;
  int32_T c2_r_loop_ub;
  boolean_T c2_b_overflow;
  int32_T c2_i36;
  boolean_T c2_c_p;
  int32_T c2_f_k;
  const mxArray *c2_k_y = NULL;
  int32_T c2_i37;
  const mxArray *c2_l_y = NULL;
  int32_T c2_y_b;
  int32_T c2_g_k;
  int32_T c2_m_y;
  real_T c2_b_kd;
  int32_T c2_c_nm1;
  int32_T c2_r_a;
  int32_T c2_c_nm1d2;
  int32_T c2_i38;
  int32_T c2_ab_b;
  int32_T c2_bb_b;
  boolean_T c2_c_overflow;
  int32_T c2_h_k;
  int32_T c2_cb_b;
  int32_T c2_i_k;
  int32_T c2_n_y;
  real_T c2_c_kd;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_len[0] = 0.0;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_b_i = (real_T)c2_i + 1.0;
    c2_maxNegD[(int32_T)c2_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 + 2.0 *
      (real_T)((int32_T)c2_b_i - 1)));
    c2_minAdjustedDim[(int32_T)c2_b_i - 1] = muDoubleScalarMin(6.0, 6.0 - (-1.0
      + 2.0 * (real_T)((int32_T)c2_b_i - 1)));
    c2_maxIndex = c2_minAdjustedDim[(int32_T)c2_b_i - 1];
    c2_maxIndex += -1.0 + 2.0 * (real_T)((int32_T)c2_b_i - 1);
    if (c2_maxIndex > 6.0) {
      c2_b = true;
    } else {
      c2_b = false;
    }

    if (c2_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_b_y)));
    }

    c2_len[(int32_T)(c2_b_i + 1.0) - 1] = ((c2_len[(int32_T)c2_b_i - 1] +
      c2_minAdjustedDim[(int32_T)c2_b_i - 1]) - c2_maxNegD[(int32_T)c2_b_i - 1])
      + 1.0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aRows, 1, &c2_k_emlrtRTEI);
  c2_dataLen = c2_len[2];
  c2_c_i = c2_aRows->size[0];
  c2_aRows->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_wd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aRows, c2_c_i,
    &c2_k_emlrtRTEI);
  c2_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_aRows->data[c2_i1] = 0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aCols, 1, &c2_l_emlrtRTEI);
  c2_i2 = c2_aCols->size[0];
  c2_aCols->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_vd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aCols, c2_i2,
    &c2_l_emlrtRTEI);
  c2_b_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_aCols->data[c2_i3] = 0;
  }

  c2_emxInit_real_T(chartInstance, c2_sp, &c2_aDat, 1, &c2_y_emlrtRTEI);
  c2_i4 = c2_aDat->size[0];
  c2_aDat->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_ae_emlrtRSI;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_aDat, c2_i4,
    &c2_m_emlrtRTEI);
  c2_c_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_aDat->data[c2_i5] = 0.0;
  }

  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_idx, 2, &c2_q_emlrtRTEI);
  c2_emxInit_int32_T1(chartInstance, c2_sp, &c2_b_r, 2, &c2_ab_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_x, 1, &c2_w_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_b_idx, 1, &c2_o_emlrtRTEI);
  for (c2_k = 0; c2_k < 2; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_st.site = &c2_o_emlrtRSI;
    c2_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_b_a = c2_a;
    c2_b_b = c2_d;
    if (c2_b_b < c2_b_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_b_x = c2_b_a;
      c2_c_b = muDoubleScalarIsInf(c2_b_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_c_b) {
        c2_guard2 = true;
      } else {
        c2_c_x = c2_b_b;
        c2_d_b = muDoubleScalarIsInf(c2_c_x);
        if (c2_d_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_b_a == c2_b_b) {
          c2_i8 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i8,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_d_x = c2_b_a;
        c2_e_x = c2_d_x;
        c2_e_x = muDoubleScalarFloor(c2_e_x);
        if (c2_e_x == c2_b_a) {
          c2_i9 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i9,
            &c2_n_emlrtRTEI);
          c2_e_loop_ub = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a);
          for (c2_i10 = 0; c2_i10 <= c2_e_loop_ub; c2_i10++) {
            c2_idx->data[c2_i10] = c2_b_a + (real_T)c2_i10;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_e_a = c2_b_a;
          c2_f_b = c2_b_b;
          c2_f_a = c2_e_a;
          c2_g_b = c2_f_b;
          c2_anew = c2_f_a;
          c2_g_x = (c2_g_b - c2_f_a) + 0.5;
          c2_ndbl = c2_g_x;
          c2_ndbl = muDoubleScalarFloor(c2_ndbl);
          c2_apnd = c2_f_a + c2_ndbl;
          c2_cdiff = c2_apnd - c2_g_b;
          c2_g_a = c2_f_a;
          c2_j_b = c2_g_b;
          c2_i_x = c2_g_a;
          c2_k_x = c2_i_x;
          c2_m_x = c2_k_x;
          c2_absa = muDoubleScalarAbs(c2_m_x);
          c2_n_x = c2_j_b;
          c2_o_x = c2_n_x;
          c2_p_x = c2_o_x;
          c2_absb = muDoubleScalarAbs(c2_p_x);
          if (c2_absa > c2_absb) {
            c2_c = c2_absa;
          } else {
            c2_c = c2_absb;
          }

          c2_thresh = 4.4408920985006262E-16 * c2_c;
          c2_s_x = c2_cdiff;
          c2_t_x = c2_s_x;
          c2_u_x = c2_t_x;
          c2_c_y = muDoubleScalarAbs(c2_u_x);
          if (c2_c_y < c2_thresh) {
            c2_ndbl++;
            c2_bnew = c2_g_b;
          } else if (c2_cdiff > 0.0) {
            c2_bnew = c2_f_a + (c2_ndbl - 1.0);
          } else {
            c2_ndbl++;
            c2_bnew = c2_apnd;
          }

          c2_n_too_large = (c2_ndbl > 2.147483647E+9);
          if (c2_ndbl >= 0.0) {
            c2_n = (int32_T)muDoubleScalarFloor(c2_ndbl);
          } else {
            c2_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_p = !c2_n_too_large;
          if (!c2_p) {
            c2_d_y = NULL;
            sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_e_y = NULL;
            sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_e_y)));
          }

          c2_i23 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i23,
            &c2_s_emlrtRTEI);
          if (c2_n > 0) {
            c2_idx->data[0] = c2_anew;
            if (c2_n > 1) {
              c2_idx->data[c2_n - 1] = c2_bnew;
              c2_nm1 = c2_n - 1;
              c2_p_a = c2_nm1;
              c2_nm1d2 = c2_div_nzp_s32(chartInstance, c2_p_a, 2, 0, 1U, 0, 0);
              c2_i28 = c2_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_t_b = c2_i28 + 1;
              c2_u_b = c2_t_b;
              if (1 > c2_u_b) {
                c2_overflow = false;
              } else {
                c2_overflow = (c2_u_b > 2147483646);
              }

              if (c2_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_c_k = 1; c2_c_k - 1 <= c2_i28; c2_c_k++) {
                c2_e_k = c2_c_k;
                c2_kd = (real_T)c2_e_k;
                c2_idx->data[c2_e_k] = c2_anew + c2_kd;
                c2_idx->data[(c2_n - c2_e_k) - 1] = c2_bnew - c2_kd;
              }

              c2_v_b = c2_nm1d2;
              c2_i_y = c2_v_b << 1;
              if (c2_i_y == c2_nm1) {
                c2_idx->data[c2_nm1d2] = (c2_anew + c2_bnew) / 2.0;
              } else {
                c2_kd = (real_T)c2_nm1d2;
                c2_idx->data[c2_nm1d2] = c2_anew + c2_kd;
                c2_idx->data[c2_nm1d2 + 1] = c2_bnew - c2_kd;
              }
            }
          }
        }
      }
    }

    c2_i6 = c2_x->size[0];
    c2_x->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i6,
      &c2_o_emlrtRTEI);
    c2_d_loop_ub = c2_idx->size[1] - 1;
    for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
      c2_x->data[c2_i7] = c2_idx->data[c2_i7];
    }

    c2_st.site = &c2_o_emlrtRSI;
    c2_c_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_b_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_d_a = c2_c_a;
    c2_e_b = c2_b_d;
    if (c2_e_b < c2_d_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_f_x = c2_d_a;
      c2_h_b = muDoubleScalarIsInf(c2_f_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_h_b) {
        c2_guard2 = true;
      } else {
        c2_h_x = c2_e_b;
        c2_i_b = muDoubleScalarIsInf(c2_h_x);
        if (c2_i_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_d_a == c2_e_b) {
          c2_i13 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i13,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_j_x = c2_d_a;
        c2_l_x = c2_j_x;
        c2_l_x = muDoubleScalarFloor(c2_l_x);
        if (c2_l_x == c2_d_a) {
          c2_i15 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i15,
            &c2_n_emlrtRTEI);
          c2_h_loop_ub = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a);
          for (c2_i16 = 0; c2_i16 <= c2_h_loop_ub; c2_i16++) {
            c2_idx->data[c2_i16] = c2_d_a + (real_T)c2_i16;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_h_a = c2_d_a;
          c2_k_b = c2_e_b;
          c2_j_a = c2_h_a;
          c2_l_b = c2_k_b;
          c2_b_anew = c2_j_a;
          c2_q_x = (c2_l_b - c2_j_a) + 0.5;
          c2_b_ndbl = c2_q_x;
          c2_b_ndbl = muDoubleScalarFloor(c2_b_ndbl);
          c2_b_apnd = c2_j_a + c2_b_ndbl;
          c2_b_cdiff = c2_b_apnd - c2_l_b;
          c2_l_a = c2_j_a;
          c2_o_b = c2_l_b;
          c2_w_x = c2_l_a;
          c2_x_x = c2_w_x;
          c2_y_x = c2_x_x;
          c2_b_absa = muDoubleScalarAbs(c2_y_x);
          c2_ab_x = c2_o_b;
          c2_cb_x = c2_ab_x;
          c2_eb_x = c2_cb_x;
          c2_b_absb = muDoubleScalarAbs(c2_eb_x);
          if (c2_b_absa > c2_b_absb) {
            c2_b_c = c2_b_absa;
          } else {
            c2_b_c = c2_b_absb;
          }

          c2_b_thresh = 4.4408920985006262E-16 * c2_b_c;
          c2_fb_x = c2_b_cdiff;
          c2_gb_x = c2_fb_x;
          c2_hb_x = c2_gb_x;
          c2_f_y = muDoubleScalarAbs(c2_hb_x);
          if (c2_f_y < c2_b_thresh) {
            c2_b_ndbl++;
            c2_b_bnew = c2_l_b;
          } else if (c2_b_cdiff > 0.0) {
            c2_b_bnew = c2_j_a + (c2_b_ndbl - 1.0);
          } else {
            c2_b_ndbl++;
            c2_b_bnew = c2_b_apnd;
          }

          c2_b_n_too_large = (c2_b_ndbl > 2.147483647E+9);
          if (c2_b_ndbl >= 0.0) {
            c2_b_n = (int32_T)muDoubleScalarFloor(c2_b_ndbl);
          } else {
            c2_b_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_b_p = !c2_b_n_too_large;
          if (!c2_b_p) {
            c2_g_y = NULL;
            sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_h_y = NULL;
            sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_h_y)));
          }

          c2_i30 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_b_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i30,
            &c2_s_emlrtRTEI);
          if (c2_b_n > 0) {
            c2_idx->data[0] = c2_b_anew;
            if (c2_b_n > 1) {
              c2_idx->data[c2_b_n - 1] = c2_b_bnew;
              c2_b_nm1 = c2_b_n - 1;
              c2_q_a = c2_b_nm1;
              c2_b_nm1d2 = c2_div_nzp_s32(chartInstance, c2_q_a, 2, 0, 1U, 0, 0);
              c2_i34 = c2_b_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_w_b = c2_i34 + 1;
              c2_x_b = c2_w_b;
              if (1 > c2_x_b) {
                c2_b_overflow = false;
              } else {
                c2_b_overflow = (c2_x_b > 2147483646);
              }

              if (c2_b_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_f_k = 1; c2_f_k - 1 <= c2_i34; c2_f_k++) {
                c2_g_k = c2_f_k;
                c2_b_kd = (real_T)c2_g_k;
                c2_idx->data[c2_g_k] = c2_b_anew + c2_b_kd;
                c2_idx->data[(c2_b_n - c2_g_k) - 1] = c2_b_bnew - c2_b_kd;
              }

              c2_y_b = c2_b_nm1d2;
              c2_m_y = c2_y_b << 1;
              if (c2_m_y == c2_b_nm1) {
                c2_idx->data[c2_b_nm1d2] = (c2_b_anew + c2_b_bnew) / 2.0;
              } else {
                c2_b_kd = (real_T)c2_b_nm1d2;
                c2_idx->data[c2_b_nm1d2] = c2_b_anew + c2_b_kd;
                c2_idx->data[c2_b_nm1d2 + 1] = c2_b_bnew - c2_b_kd;
              }
            }
          }
        }
      }
    }

    c2_i11 = c2_b_idx->size[0];
    c2_b_idx->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_b_idx, c2_i11,
      &c2_o_emlrtRTEI);
    c2_f_loop_ub = c2_idx->size[1] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_f_loop_ub; c2_i12++) {
      c2_b_idx->data[c2_i12] = c2_idx->data[c2_i12];
    }

    c2_i_size[0] = c2_x->size[0];
    c2_g_loop_ub = c2_x->size[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_g_loop_ub; c2_i14++) {
      c2_i_data[c2_i14] = c2_b_idx->data[c2_i14];
    }

    c2_st.site = &c2_q_emlrtRSI;
    c2_i_a = c2_len[(int32_T)c2_b_k - 1] + 1.0;
    c2_c_d = c2_len[(int32_T)(c2_b_k + 1.0) - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_k_a = c2_i_a;
    c2_m_b = c2_c_d;
    if (c2_m_b < c2_k_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_r_x = c2_k_a;
      c2_n_b = muDoubleScalarIsInf(c2_r_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_n_b) {
        c2_guard2 = true;
      } else {
        c2_v_x = c2_m_b;
        c2_p_b = muDoubleScalarIsInf(c2_v_x);
        if (c2_p_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_k_a == c2_m_b) {
          c2_i18 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i18,
            &c2_q_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_bb_x = c2_k_a;
        c2_db_x = c2_bb_x;
        c2_db_x = muDoubleScalarFloor(c2_db_x);
        if (c2_db_x == c2_k_a) {
          c2_i21 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i21,
            &c2_q_emlrtRTEI);
          c2_k_loop_ub = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a);
          for (c2_i24 = 0; c2_i24 <= c2_k_loop_ub; c2_i24++) {
            c2_idx->data[c2_i24] = c2_k_a + (real_T)c2_i24;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_m_a = c2_k_a;
          c2_q_b = c2_m_b;
          c2_n_a = c2_m_a;
          c2_r_b = c2_q_b;
          c2_c_anew = c2_n_a;
          c2_ib_x = (c2_r_b - c2_n_a) + 0.5;
          c2_c_ndbl = c2_ib_x;
          c2_c_ndbl = muDoubleScalarFloor(c2_c_ndbl);
          c2_c_apnd = c2_n_a + c2_c_ndbl;
          c2_c_cdiff = c2_c_apnd - c2_r_b;
          c2_o_a = c2_n_a;
          c2_s_b = c2_r_b;
          c2_jb_x = c2_o_a;
          c2_kb_x = c2_jb_x;
          c2_lb_x = c2_kb_x;
          c2_c_absa = muDoubleScalarAbs(c2_lb_x);
          c2_mb_x = c2_s_b;
          c2_nb_x = c2_mb_x;
          c2_ob_x = c2_nb_x;
          c2_c_absb = muDoubleScalarAbs(c2_ob_x);
          if (c2_c_absa > c2_c_absb) {
            c2_c_c = c2_c_absa;
          } else {
            c2_c_c = c2_c_absb;
          }

          c2_c_thresh = 4.4408920985006262E-16 * c2_c_c;
          c2_pb_x = c2_c_cdiff;
          c2_qb_x = c2_pb_x;
          c2_rb_x = c2_qb_x;
          c2_j_y = muDoubleScalarAbs(c2_rb_x);
          if (c2_j_y < c2_c_thresh) {
            c2_c_ndbl++;
            c2_c_bnew = c2_r_b;
          } else if (c2_c_cdiff > 0.0) {
            c2_c_bnew = c2_n_a + (c2_c_ndbl - 1.0);
          } else {
            c2_c_ndbl++;
            c2_c_bnew = c2_c_apnd;
          }

          c2_c_n_too_large = (c2_c_ndbl > 2.147483647E+9);
          if (c2_c_ndbl >= 0.0) {
            c2_c_n = (int32_T)muDoubleScalarFloor(c2_c_ndbl);
          } else {
            c2_c_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_c_p = !c2_c_n_too_large;
          if (!c2_c_p) {
            c2_k_y = NULL;
            sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_l_y = NULL;
            sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_k_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_l_y)));
          }

          c2_i37 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_c_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i37,
            &c2_s_emlrtRTEI);
          if (c2_c_n > 0) {
            c2_idx->data[0] = c2_c_anew;
            if (c2_c_n > 1) {
              c2_idx->data[c2_c_n - 1] = c2_c_bnew;
              c2_c_nm1 = c2_c_n - 1;
              c2_r_a = c2_c_nm1;
              c2_c_nm1d2 = c2_div_nzp_s32(chartInstance, c2_r_a, 2, 0, 1U, 0, 0);
              c2_i38 = c2_c_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_ab_b = c2_i38 + 1;
              c2_bb_b = c2_ab_b;
              if (1 > c2_bb_b) {
                c2_c_overflow = false;
              } else {
                c2_c_overflow = (c2_bb_b > 2147483646);
              }

              if (c2_c_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_h_k = 1; c2_h_k - 1 <= c2_i38; c2_h_k++) {
                c2_i_k = c2_h_k;
                c2_c_kd = (real_T)c2_i_k;
                c2_idx->data[c2_i_k] = c2_c_anew + c2_c_kd;
                c2_idx->data[(c2_c_n - c2_i_k) - 1] = c2_c_bnew - c2_c_kd;
              }

              c2_cb_b = c2_c_nm1d2;
              c2_n_y = c2_cb_b << 1;
              if (c2_n_y == c2_c_nm1) {
                c2_idx->data[c2_c_nm1d2] = (c2_c_anew + c2_c_bnew) / 2.0;
              } else {
                c2_c_kd = (real_T)c2_c_nm1d2;
                c2_idx->data[c2_c_nm1d2] = c2_c_anew + c2_c_kd;
                c2_idx->data[c2_c_nm1d2 + 1] = c2_c_bnew - c2_c_kd;
              }
            }
          }
        }
      }
    }

    c2_i17 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_ce_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i17,
      &c2_r_emlrtRTEI);
    c2_i_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
      c2_b_r->data[c2_i19] = (int32_T)c2_idx->data[c2_i19];
    }

    c2_j_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_j_loop_ub; c2_i20++) {
      c2_aRows->data[c2_b_r->data[c2_i20] - 1] = (int32_T)c2_i_data[c2_i20];
    }

    c2_i22 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_be_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i22,
      &c2_t_emlrtRTEI);
    c2_l_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i25 = 0; c2_i25 <= c2_l_loop_ub; c2_i25++) {
      c2_b_r->data[c2_i25] = (int32_T)c2_idx->data[c2_i25];
    }

    c2_d_d = -1.0 + 2.0 * (real_T)((int32_T)c2_b_k - 1);
    c2_m_loop_ub = c2_i_size[0] - 1;
    for (c2_i26 = 0; c2_i26 <= c2_m_loop_ub; c2_i26++) {
      c2_tmp_data[c2_i26] = (int32_T)(c2_i_data[c2_i26] + c2_d_d);
    }

    c2_n_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i27 = 0; c2_i27 <= c2_n_loop_ub; c2_i27++) {
      c2_aCols->data[c2_b_r->data[c2_i27] - 1] = c2_tmp_data[c2_i27];
    }

    c2_i29 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i29,
      &c2_v_emlrtRTEI);
    c2_o_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_o_loop_ub; c2_i31++) {
      c2_b_r->data[c2_i31] = (int32_T)c2_idx->data[c2_i31];
    }

    c2_d1 = -1.0 + 2.0 * (real_T)((int32_T)c2_b_k - 1);
    c2_d_k = (int32_T)c2_b_k - 1;
    c2_i32 = c2_x->size[0];
    c2_x->size[0] = c2_i_size[0];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i32,
      &c2_w_emlrtRTEI);
    c2_p_loop_ub = c2_i_size[0] - 1;
    for (c2_i33 = 0; c2_i33 <= c2_p_loop_ub; c2_i33++) {
      c2_x->data[c2_i33] = c2_B[((int32_T)(c2_i_data[c2_i33] + c2_d1) + 6 *
        c2_d_k) - 1];
    }

    c2_q_loop_ub = c2_x->size[0] - 1;
    for (c2_i35 = 0; c2_i35 <= c2_q_loop_ub; c2_i35++) {
      c2_i_data[c2_i35] = c2_x->data[c2_i35];
    }

    c2_r_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i36 = 0; c2_i36 <= c2_r_loop_ub; c2_i36++) {
      c2_aDat->data[c2_b_r->data[c2_i36] - 1] = c2_i_data[c2_i36];
    }
  }

  c2_emxFree_real_T(chartInstance, &c2_b_idx);
  c2_emxFree_real_T(chartInstance, &c2_x);
  c2_emxFree_int32_T(chartInstance, &c2_b_r);
  c2_emxFree_real_T(chartInstance, &c2_idx);
  c2_st.site = &c2_p_emlrtRSI;
  c2_sparse(chartInstance, &c2_st, c2_aRows, c2_aCols, c2_aDat, c2_res1);
  c2_emxFree_real_T(chartInstance, &c2_aDat);
  c2_emxFree_int32_T(chartInstance, &c2_aCols);
  c2_emxFree_int32_T(chartInstance, &c2_aRows);
}

static void c2_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this)
{
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_qb_emlrtRTEI);
  c2_e_sparse_parenAssign(chartInstance, c2_sp, c2_b_this);
}

static void c2_sparse_validateNumericIndex(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  int32_T c2_k;
  real_T c2_b_k;
  real_T c2_idxk;
  real_T c2_x;
  real_T c2_b_x;
  boolean_T c2_b;
  real_T c2_c_x;
  boolean_T c2_b_b;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_idxk = 1.0 + (real_T)((int32_T)c2_b_k - 1);
    c2_x = c2_idxk;
    c2_b_x = c2_x;
    c2_b_x = muDoubleScalarFloor(c2_b_x);
    if (c2_b_x == c2_idxk) {
      c2_c_x = c2_idxk;
      c2_b_b = muDoubleScalarIsInf(c2_c_x);
      if (!c2_b_b) {
        c2_b = true;
      } else {
        c2_b = false;
      }
    } else {
      c2_b = false;
    }

    if (!c2_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_b_y)));
    }
  }
}

static void c2_sparse_locBsearch(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_int32_T *c2_x, int32_T c2_xi, int32_T c2_xstart, int32_T c2_xend,
  int32_T *c2_n, boolean_T *c2_found)
{
  int32_T c2_b_xi;
  int32_T c2_b_xstart;
  int32_T c2_b_xend;
  int32_T c2_low_i;
  int32_T c2_low_ip1;
  int32_T c2_high_i;
  int32_T c2_b_low_i;
  int32_T c2_b_high_i;
  int32_T c2_mid_i;
  (void)chartInstance;
  if (c2_xstart < c2_xend) {
    if (c2_xi < c2_x->data[c2_xstart - 1]) {
      *c2_n = c2_xstart - 1;
      *c2_found = false;
    } else {
      c2_b_xi = c2_xi;
      c2_b_xstart = c2_xstart;
      c2_b_xend = c2_xend;
      c2_low_i = c2_b_xstart;
      c2_low_ip1 = c2_b_xstart;
      c2_high_i = c2_b_xend;
      while (c2_high_i > c2_low_ip1 + 1) {
        c2_b_low_i = c2_low_i;
        c2_b_high_i = c2_high_i;
        c2_mid_i = (c2_b_low_i >> 1) + (c2_b_high_i >> 1);
        if (((c2_b_low_i & 1) == 1) && ((c2_b_high_i & 1) == 1)) {
          c2_mid_i++;
        }

        if (c2_b_xi >= c2_x->data[c2_mid_i - 1]) {
          c2_low_i = c2_mid_i;
          c2_low_ip1 = c2_mid_i;
        } else {
          c2_high_i = c2_mid_i;
        }
      }

      *c2_n = c2_low_i;
      *c2_found = (c2_x->data[*c2_n - 1] == c2_xi);
    }
  } else if (c2_xstart == c2_xend) {
    *c2_n = c2_xstart - 1;
    *c2_found = false;
  } else {
    *c2_n = 0;
    *c2_found = false;
  }
}

static void c2_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs, c2_coder_internal_sparse *c2_b_this)
{
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_rb_emlrtRTEI);
  c2_c_realloc(chartInstance, c2_sp, c2_b_this, c2_numAllocRequested, c2_ub1,
               c2_lb2, c2_ub2, c2_offs);
}

static void c2_b_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this)
{
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_qb_emlrtRTEI);
  c2_f_sparse_parenAssign(chartInstance, c2_sp, c2_b_this);
}

static void c2_b_sparse_validateNumericIndex(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  int32_T c2_k;
  real_T c2_b_k;
  real_T c2_idxk;
  real_T c2_x;
  real_T c2_b_x;
  boolean_T c2_b;
  real_T c2_c_x;
  boolean_T c2_b_b;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_idxk = 4.0 + (real_T)((int32_T)c2_b_k - 1);
    c2_x = c2_idxk;
    c2_b_x = c2_x;
    c2_b_x = muDoubleScalarFloor(c2_b_x);
    if (c2_b_x == c2_idxk) {
      c2_c_x = c2_idxk;
      c2_b_b = muDoubleScalarIsInf(c2_c_x);
      if (!c2_b_b) {
        c2_b = true;
      } else {
        c2_b = false;
      }
    } else {
      c2_b = false;
    }

    if (!c2_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_b_y)));
    }
  }
}

static void c2_sparse_mldivide(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_A, c2_coder_internal_sparse
  c2_b, c2_coder_internal_sparse *c2_y)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  c2_coder_internal_sparse c2_b_A;
  c2_coder_internal_sparse c2_b_b;
  int32_T c2_n;
  cs_di* c2_cxA;
  cs_dis * c2_S;
  cs_din * c2_N;
  c2_coder_internal_sparse c2_s;
  c2_emxArray_int32_T *c2_b_y;
  c2_emxArray_real_T *c2_c_y;
  int32_T c2_i;
  int32_T c2_b_i;
  int32_T c2_varargin_2;
  int32_T c2_c;
  int32_T c2_b_c;
  int32_T c2_idx;
  int32_T c2_x;
  int32_T c2_b_x;
  boolean_T c2_c_b;
  const mxArray *c2_d_y = NULL;
  int32_T c2_nd;
  const mxArray *c2_e_y = NULL;
  boolean_T c2_b1;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  int32_T c2_outIdx;
  int32_T c2_colstart;
  real_T c2_tmp[6];
  int32_T c2_colend;
  int32_T c2_colNnz;
  int32_T c2_b_varargin_2;
  int32_T c2_d_b;
  int32_T c2_e_b;
  int32_T c2_c_c;
  boolean_T c2_overflow;
  int32_T c2_d_c;
  int32_T c2_b_idx;
  int32_T c2_c_x;
  int32_T c2_k;
  int32_T c2_d_x;
  boolean_T c2_b2;
  int32_T c2_b_k;
  const mxArray *c2_h_y = NULL;
  int32_T c2_b_n;
  real_T c2_c_n;
  const mxArray *c2_i_y = NULL;
  int32_T c2_nz;
  int32_T c2_nzColAlloc;
  int32_T c2_c_idx;
  int32_T c2_c_i;
  real_T c2_b_tmp[6];
  int32_T c2_nzRhs;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  int32_T c2_extraCol;
  int32_T c2_b_outIdx;
  real_T c2_d_n;
  int32_T c2_extraSpace;
  int32_T c2_numAlloc;
  int32_T c2_extraAlloc;
  int32_T c2_start;
  int32_T c2_outstart;
  int32_T c2_num2Alloc;
  int32_T c2_instart;
  int32_T c2_b_outstart;
  int32_T c2_nelem;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_col;
  int32_T c2_i1;
  int32_T c2_offs;
  int32_T c2_i2;
  int32_T c2_b_col;
  int32_T c2_i3;
  int32_T c2_b_offs;
  int32_T c2_c_k;
  int32_T c2_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_d_k;
  int32_T c2_i6;
  int32_T c2_c_outstart;
  int32_T c2_c_instart;
  int32_T c2_d_outstart;
  int32_T c2_c_nelem;
  int32_T c2_d_instart;
  int32_T c2_i7;
  int32_T c2_d_nelem;
  int32_T c2_i8;
  int32_T c2_c_loop_ub;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_e_loop_ub;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_e_outstart;
  int32_T c2_e_instart;
  int32_T c2_f_outstart;
  int32_T c2_e_nelem;
  int32_T c2_f_instart;
  int32_T c2_i15;
  int32_T c2_f_nelem;
  int32_T c2_i16;
  int32_T c2_g_loop_ub;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_b_A,
    &c2_sb_emlrtRTEI);
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_b_b,
    &c2_tb_emlrtRTEI);
  c2_st.site = &c2_nc_emlrtRSI;
  c2_b_st.site = &c2_oc_emlrtRSI;
  c2_c_st.site = &c2_pc_emlrtRSI;
  c2_d_st.site = &c2_vc_emlrtRSI;
  c2_n = c2_A.colidx->data[c2_A.colidx->size[0] - 1];
  c2_cxA = makeCXSparseMatrix(c2_n - 1, 6, 6, &c2_A.colidx->data[0],
    &c2_A.rowidx->data[0], &c2_A.d->data[0]);
  c2_S = cs_di_sqr(2, c2_cxA, 0);
  c2_N = cs_di_lu(c2_cxA, c2_S, 1);
  cs_di_spfree(c2_cxA);
  if (c2_N == NULL) {
    c2_c_st.site = &c2_qc_emlrtRSI;
    c2_warning(chartInstance, &c2_c_st);
    cs_di_sfree(c2_S);
    cs_di_nfree(c2_N);
    c2_emxCopyStruct_coder_internal_sp(chartInstance, &c2_b_st, &c2_b_A, &c2_A,
      &c2_sb_emlrtRTEI);
    c2_emxCopyStruct_coder_internal_sp(chartInstance, &c2_b_st, &c2_b_b, &c2_b,
      &c2_tb_emlrtRTEI);
    c2_c_st.site = &c2_rc_emlrtRSI;
    c2_CXSparseAPI_iteratedQR(chartInstance, &c2_c_st, c2_b_A, c2_b_b, c2_y);
  } else {
    c2_c_st.site = &c2_sc_emlrtRSI;
    c2_sparse_spallocLike(chartInstance, &c2_c_st, c2_y);
    c2_emxInitStruct_coder_internal_sp(chartInstance, &c2_b_st, &c2_s,
      &c2_vb_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, &c2_b_st, &c2_b_y, 1, &c2_c_emlrtRTEI);
    c2_emxInit_real_T(chartInstance, &c2_b_st, &c2_c_y, 1, &c2_e_emlrtRTEI);
    for (c2_i = 0; c2_i < 6; c2_i++) {
      c2_b_i = c2_i + 1;
      c2_c_st.site = &c2_tc_emlrtRSI;
      c2_varargin_2 = c2_b_i;
      c2_d_st.site = &c2_cd_emlrtRSI;
      c2_c = c2_varargin_2;
      c2_e_st.site = &c2_dd_emlrtRSI;
      c2_b_c = c2_c;
      c2_f_st.site = &c2_ed_emlrtRSI;
      c2_idx = c2_b_c;
      c2_x = c2_idx;
      c2_b_x = c2_x;
      if (c2_b_x == c2_idx) {
        c2_c_b = true;
      } else {
        c2_c_b = false;
      }

      if (!c2_c_b) {
        c2_d_y = NULL;
        sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c2_f_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call
                    (&c2_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_f_st,
          "message", 1U, 1U, 14, c2_e_y)));
      }

      c2_nd = c2_b.colidx->data[c2_b_c] - c2_b.colidx->data[c2_b_c - 1];
      if (c2_nd <= 6) {
        c2_b1 = true;
      } else {
        c2_b1 = false;
      }

      if (!c2_b1) {
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c2_g_y = NULL;
        sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c2_e_st, "error", 0U, 2U, 14, c2_f_y, 14, sf_mex_call
                    (&c2_e_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_e_st,
          "message", 1U, 1U, 14, c2_g_y)));
      }

      c2_f_st.site = &c2_fd_emlrtRSI;
      c2_b_sparse_spallocLike(chartInstance, &c2_f_st, c2_nd, &c2_s);
      if (c2_nd != 0) {
        c2_outIdx = 0;
        c2_colstart = c2_b.colidx->data[c2_b_c - 1] - 2;
        c2_colend = c2_b.colidx->data[c2_b_c];
        c2_colNnz = (c2_colend - c2_colstart) - 2;
        c2_f_st.site = &c2_gd_emlrtRSI;
        c2_d_b = c2_colNnz;
        c2_e_b = c2_d_b;
        if (1 > c2_e_b) {
          c2_overflow = false;
        } else {
          c2_overflow = (c2_e_b > 2147483646);
        }

        if (c2_overflow) {
          c2_g_st.site = &c2_v_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_g_st);
        }

        for (c2_k = 1; c2_k - 1 < c2_colNnz; c2_k++) {
          c2_b_k = c2_k;
          c2_s.d->data[c2_outIdx] = c2_b.d->data[c2_colstart + c2_b_k];
          c2_s.rowidx->data[c2_outIdx] = c2_b.rowidx->data[c2_colstart + c2_b_k];
          c2_outIdx++;
        }

        c2_s.colidx->data[1] = c2_s.colidx->data[0] + c2_colNnz;
      }

      c2_c_st.site = &c2_tc_emlrtRSI;
      c2_sparse_full(chartInstance, &c2_c_st, c2_s, c2_tmp);
      solve_from_lu_di(c2_N, c2_S, (double *)&c2_tmp[0], 6);
      c2_c_st.site = &c2_uc_emlrtRSI;
      c2_b_varargin_2 = c2_b_i;
      c2_d_st.site = &c2_cc_emlrtRSI;
      c2_c_c = c2_b_varargin_2;
      c2_e_st.site = &c2_kd_emlrtRSI;
      c2_d_c = c2_c_c;
      c2_f_st.site = &c2_ld_emlrtRSI;
      c2_b_idx = c2_d_c;
      c2_c_x = c2_b_idx;
      c2_d_x = c2_c_x;
      if (c2_d_x == c2_b_idx) {
        c2_b2 = true;
      } else {
        c2_b2 = false;
      }

      if (!c2_b2) {
        c2_h_y = NULL;
        sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c2_f_st, "error", 0U, 2U, 14, c2_h_y, 14, sf_mex_call
                    (&c2_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_f_st,
          "message", 1U, 1U, 14, c2_i_y)));
      }

      c2_b_n = c2_y->colidx->data[c2_y->colidx->size[0] - 1];
      c2_c_n = (real_T)(c2_b_n - 1);
      c2_nz = (int32_T)c2_c_n;
      c2_nzColAlloc = c2_y->colidx->data[c2_d_c] - c2_y->colidx->data[c2_d_c - 1];
      c2_c_idx = c2_y->colidx->data[c2_d_c - 1];
      for (c2_c_i = 0; c2_c_i < 6; c2_c_i++) {
        c2_b_tmp[c2_c_i] = c2_tmp[c2_c_i];
      }

      c2_f_st.site = &c2_md_emlrtRSI;
      c2_nzRhs = c2_countNumnzInColumn(chartInstance, c2_b_tmp, c2_r);
      if (c2_nzColAlloc < c2_nzRhs) {
        c2_extraCol = c2_nzRhs - c2_nzColAlloc;
        c2_d_n = (real_T)c2_y->maxnz;
        c2_numAlloc = (int32_T)c2_d_n;
        c2_extraAlloc = c2_numAlloc - c2_nz;
        c2_start = c2_y->colidx->data[c2_d_c];
        if (c2_extraAlloc < c2_extraCol) {
          c2_num2Alloc = c2_extraCol - c2_extraAlloc;
          c2_f_st.site = &c2_nd_emlrtRSI;
          c2_c_realloc(chartInstance, &c2_f_st, c2_y, c2_numAlloc + c2_num2Alloc,
                       c2_c_idx - 1, c2_start, c2_nz, c2_extraCol);
        } else {
          c2_f_st.site = &c2_od_emlrtRSI;
          c2_b_outstart = c2_start + c2_extraCol;
          c2_b_instart = c2_start;
          c2_b_nelem = (c2_nz - c2_start) + 1;
          if (!(c2_b_nelem <= 0)) {
            c2_g_st.site = &c2_lc_emlrtRSI;
            c2_i2 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_y->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_b_y, c2_i2,
              &c2_c_emlrtRTEI);
            c2_b_loop_ub = c2_y->rowidx->size[0] - 1;
            for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
              c2_b_y->data[c2_i6] = c2_y->rowidx->data[c2_i6];
            }

            c2_d_outstart = c2_b_outstart - 1;
            c2_d_instart = c2_b_instart - 1;
            c2_d_nelem = c2_b_nelem;
            c2_i8 = c2_y->rowidx->size[0];
            c2_y->rowidx->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_y->rowidx,
              c2_i8, &c2_ub_emlrtRTEI);
            c2_d_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
              c2_y->rowidx->data[c2_i10] = c2_b_y->data[c2_i10];
            }

            memmove((void *)&c2_y->rowidx->data[c2_d_outstart], (void *)
                    &c2_y->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                     c2_d_nelem * sizeof(int32_T)));
            c2_g_st.site = &c2_mc_emlrtRSI;
            c2_i12 = c2_c_y->size[0];
            c2_c_y->size[0] = c2_y->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_c_y, c2_i12,
              &c2_e_emlrtRTEI);
            c2_f_loop_ub = c2_y->d->size[0] - 1;
            for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
              c2_c_y->data[c2_i14] = c2_y->d->data[c2_i14];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i16 = c2_y->d->size[0];
            c2_y->d->size[0] = c2_c_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_y->d, c2_i16,
              &c2_ub_emlrtRTEI);
            c2_h_loop_ub = c2_c_y->size[0] - 1;
            for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
              c2_y->d->data[c2_i18] = c2_c_y->data[c2_i18];
            }

            memmove((void *)&c2_y->d->data[c2_f_outstart], (void *)&c2_y->
                    d->data[c2_f_instart], (uint32_T)((size_t)c2_f_nelem *
                     sizeof(real_T)));
          }
        }

        c2_rhsIter = c2_r;
        c2_c_copyNonzeroValues(chartInstance, c2_y, &c2_rhsIter, c2_c_idx,
          c2_tmp);
        c2_b_col = c2_d_c + 1;
        c2_b_offs = c2_extraCol;
        c2_i4 = c2_b_col;
        for (c2_d_k = c2_i4 - 1; c2_d_k + 1 < 8; c2_d_k++) {
          c2_y->colidx->data[c2_d_k] += c2_b_offs;
        }
      } else {
        c2_rhsIter = c2_r;
        c2_b_outIdx = c2_c_copyNonzeroValues(chartInstance, c2_y, &c2_rhsIter,
          c2_c_idx, c2_tmp);
        c2_extraSpace = c2_nzColAlloc - c2_nzRhs;
        if (c2_extraSpace > 0) {
          c2_start = c2_y->colidx->data[c2_d_c];
          c2_f_st.site = &c2_pd_emlrtRSI;
          c2_outstart = c2_b_outIdx;
          c2_instart = c2_start;
          c2_nelem = (c2_nz - c2_start) + 1;
          if (!(c2_nelem <= 0)) {
            c2_g_st.site = &c2_lc_emlrtRSI;
            c2_i1 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_y->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_b_y, c2_i1,
              &c2_c_emlrtRTEI);
            c2_loop_ub = c2_y->rowidx->size[0] - 1;
            for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
              c2_b_y->data[c2_i5] = c2_y->rowidx->data[c2_i5];
            }

            c2_c_outstart = c2_outstart - 1;
            c2_c_instart = c2_instart - 1;
            c2_c_nelem = c2_nelem;
            c2_i7 = c2_y->rowidx->size[0];
            c2_y->rowidx->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_y->rowidx,
              c2_i7, &c2_ub_emlrtRTEI);
            c2_c_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i9 = 0; c2_i9 <= c2_c_loop_ub; c2_i9++) {
              c2_y->rowidx->data[c2_i9] = c2_b_y->data[c2_i9];
            }

            memmove((void *)&c2_y->rowidx->data[c2_c_outstart], (void *)
                    &c2_y->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                     c2_c_nelem * sizeof(int32_T)));
            c2_g_st.site = &c2_mc_emlrtRSI;
            c2_i11 = c2_c_y->size[0];
            c2_c_y->size[0] = c2_y->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_c_y, c2_i11,
              &c2_e_emlrtRTEI);
            c2_e_loop_ub = c2_y->d->size[0] - 1;
            for (c2_i13 = 0; c2_i13 <= c2_e_loop_ub; c2_i13++) {
              c2_c_y->data[c2_i13] = c2_y->d->data[c2_i13];
            }

            c2_e_outstart = c2_outstart - 1;
            c2_e_instart = c2_instart - 1;
            c2_e_nelem = c2_nelem;
            c2_i15 = c2_y->d->size[0];
            c2_y->d->size[0] = c2_c_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_y->d, c2_i15,
              &c2_ub_emlrtRTEI);
            c2_g_loop_ub = c2_c_y->size[0] - 1;
            for (c2_i17 = 0; c2_i17 <= c2_g_loop_ub; c2_i17++) {
              c2_y->d->data[c2_i17] = c2_c_y->data[c2_i17];
            }

            memmove((void *)&c2_y->d->data[c2_e_outstart], (void *)&c2_y->
                    d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem *
                     sizeof(real_T)));
          }

          c2_col = c2_d_c + 1;
          c2_offs = c2_extraSpace;
          c2_i3 = c2_col;
          for (c2_c_k = c2_i3 - 1; c2_c_k + 1 < 8; c2_c_k++) {
            c2_y->colidx->data[c2_c_k] -= c2_offs;
          }
        }
      }
    }

    c2_emxFree_real_T(chartInstance, &c2_c_y);
    c2_emxFree_int32_T(chartInstance, &c2_b_y);
    c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_s);
    cs_di_sfree(c2_S);
    cs_di_nfree(c2_N);
  }

  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_b_b);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_b_A);
}

static void c2_warning(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp)
{
  const mxArray *c2_y = NULL;
  static char_T c2_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c2_b_y = NULL;
  static char_T c2_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c2_c_y = NULL;
  static char_T c2_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_msgID, 10, 0U, 1U, 0U, 2, 1, 21),
                false);
  sf_mex_call(c2_sp, "feval", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp, "feval",
    1U, 2U, 14, c2_b_y, 14, c2_c_y));
}

static void c2_CXSparseAPI_iteratedQR(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_A,
  c2_coder_internal_sparse c2_b, c2_coder_internal_sparse *c2_out)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  int32_T c2_n;
  cs_di* c2_cxA;
  cs_dis * c2_S;
  cs_din * c2_N;
  real_T c2_tol;
  c2_coder_internal_sparse c2_s;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  int32_T c2_i;
  real_T c2_b_i;
  real_T c2_varargin_2;
  real_T c2_c;
  real_T c2_b_c;
  real_T c2_idx;
  real_T c2_x;
  real_T c2_b_x;
  boolean_T c2_b_b;
  real_T c2_c_x;
  boolean_T c2_c_b;
  const mxArray *c2_c_y = NULL;
  int32_T c2_col;
  int32_T c2_nd;
  const mxArray *c2_d_y = NULL;
  boolean_T c2_b1;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  int32_T c2_outIdx;
  int32_T c2_colstart;
  real_T c2_outBuff[6];
  int32_T c2_colend;
  int32_T c2_colNnz;
  real_T c2_b_varargin_2;
  int32_T c2_d_b;
  int32_T c2_e_b;
  real_T c2_c_c;
  boolean_T c2_overflow;
  real_T c2_d_c;
  real_T c2_b_idx;
  real_T c2_d_x;
  int32_T c2_k;
  real_T c2_e_x;
  int32_T c2_b_k;
  boolean_T c2_b2;
  real_T c2_f_x;
  boolean_T c2_f_b;
  const mxArray *c2_g_y = NULL;
  int32_T c2_b_col;
  int32_T c2_b_n;
  const mxArray *c2_h_y = NULL;
  real_T c2_c_n;
  int32_T c2_nz;
  int32_T c2_nzColAlloc;
  int32_T c2_c_idx;
  int32_T c2_c_i;
  real_T c2_b_outBuff[6];
  int32_T c2_nzRhs;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  int32_T c2_extraCol;
  int32_T c2_b_outIdx;
  real_T c2_d_n;
  int32_T c2_extraSpace;
  int32_T c2_numAlloc;
  int32_T c2_extraAlloc;
  int32_T c2_start;
  int32_T c2_outstart;
  int32_T c2_num2Alloc;
  int32_T c2_instart;
  int32_T c2_b_outstart;
  int32_T c2_nelem;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_c_col;
  int32_T c2_i1;
  int32_T c2_offs;
  int32_T c2_i2;
  int32_T c2_d_col;
  int32_T c2_i3;
  int32_T c2_b_offs;
  int32_T c2_c_k;
  int32_T c2_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_d_k;
  int32_T c2_i6;
  int32_T c2_c_outstart;
  int32_T c2_c_instart;
  int32_T c2_d_outstart;
  int32_T c2_c_nelem;
  int32_T c2_d_instart;
  int32_T c2_i7;
  int32_T c2_d_nelem;
  int32_T c2_i8;
  int32_T c2_c_loop_ub;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_e_loop_ub;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_e_outstart;
  int32_T c2_e_instart;
  int32_T c2_f_outstart;
  int32_T c2_e_nelem;
  int32_T c2_f_instart;
  int32_T c2_i15;
  int32_T c2_f_nelem;
  int32_T c2_i16;
  int32_T c2_g_loop_ub;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_wc_emlrtRSI;
  c2_b_st.site = &c2_vc_emlrtRSI;
  c2_n = c2_A.colidx->data[c2_A.colidx->size[0] - 1];
  c2_cxA = makeCXSparseMatrix(c2_n - 1, 6, 6, &c2_A.colidx->data[0],
    &c2_A.rowidx->data[0], &c2_A.d->data[0]);
  c2_S = cs_di_sqr(2, c2_cxA, 1);
  c2_N = cs_di_qr(c2_cxA, c2_S);
  cs_di_spfree(c2_cxA);
  qr_rank_di(c2_N, &c2_tol);
  c2_st.site = &c2_xc_emlrtRSI;
  c2_sparse_spallocLike(chartInstance, &c2_st, c2_out);
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_s,
    &c2_xb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_b_y, 1, &c2_e_emlrtRTEI);
  for (c2_i = 0; c2_i < 6; c2_i++) {
    c2_b_i = (real_T)c2_i + 1.0;
    c2_st.site = &c2_yc_emlrtRSI;
    c2_varargin_2 = c2_b_i;
    c2_b_st.site = &c2_cd_emlrtRSI;
    c2_c = c2_varargin_2;
    c2_c_st.site = &c2_dd_emlrtRSI;
    c2_b_c = c2_c;
    c2_d_st.site = &c2_ed_emlrtRSI;
    c2_idx = c2_b_c;
    c2_x = c2_idx;
    c2_b_x = c2_x;
    c2_b_x = muDoubleScalarFloor(c2_b_x);
    if (c2_b_x == c2_idx) {
      c2_c_x = c2_idx;
      c2_c_b = muDoubleScalarIsInf(c2_c_x);
      if (!c2_c_b) {
        c2_b_b = true;
      } else {
        c2_b_b = false;
      }
    } else {
      c2_b_b = false;
    }

    if (!c2_b_b) {
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_c_y, 14, sf_mex_call
                  (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
        "message", 1U, 1U, 14, c2_d_y)));
    }

    c2_col = (int32_T)c2_b_c;
    c2_nd = c2_b.colidx->data[c2_col] - c2_b.colidx->data[c2_col - 1];
    if (c2_nd <= 6) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }

    if (!c2_b1) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_c_st, "error", 0U, 2U, 14, c2_e_y, 14, sf_mex_call
                  (&c2_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_c_st,
        "message", 1U, 1U, 14, c2_f_y)));
    }

    c2_d_st.site = &c2_fd_emlrtRSI;
    c2_b_sparse_spallocLike(chartInstance, &c2_d_st, c2_nd, &c2_s);
    if (c2_nd != 0) {
      c2_outIdx = 0;
      c2_colstart = c2_b.colidx->data[c2_col - 1] - 2;
      c2_colend = c2_b.colidx->data[c2_col];
      c2_colNnz = (c2_colend - c2_colstart) - 2;
      c2_d_st.site = &c2_gd_emlrtRSI;
      c2_d_b = c2_colNnz;
      c2_e_b = c2_d_b;
      if (1 > c2_e_b) {
        c2_overflow = false;
      } else {
        c2_overflow = (c2_e_b > 2147483646);
      }

      if (c2_overflow) {
        c2_e_st.site = &c2_v_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
      }

      for (c2_k = 1; c2_k - 1 < c2_colNnz; c2_k++) {
        c2_b_k = c2_k;
        c2_s.d->data[c2_outIdx] = c2_b.d->data[c2_colstart + c2_b_k];
        c2_s.rowidx->data[c2_outIdx] = c2_b.rowidx->data[c2_colstart + c2_b_k];
        c2_outIdx++;
      }

      c2_s.colidx->data[1] = c2_s.colidx->data[0] + c2_colNnz;
    }

    c2_st.site = &c2_yc_emlrtRSI;
    c2_sparse_full(chartInstance, &c2_st, c2_s, c2_outBuff);
    solve_from_qr_di(c2_N, c2_S, (double *)&c2_outBuff[0], 6, 6);
    c2_st.site = &c2_ad_emlrtRSI;
    c2_b_varargin_2 = c2_b_i;
    c2_b_st.site = &c2_cc_emlrtRSI;
    c2_c_c = c2_b_varargin_2;
    c2_c_st.site = &c2_kd_emlrtRSI;
    c2_d_c = c2_c_c;
    c2_d_st.site = &c2_ld_emlrtRSI;
    c2_b_idx = c2_d_c;
    c2_d_x = c2_b_idx;
    c2_e_x = c2_d_x;
    c2_e_x = muDoubleScalarFloor(c2_e_x);
    if (c2_e_x == c2_b_idx) {
      c2_f_x = c2_b_idx;
      c2_f_b = muDoubleScalarIsInf(c2_f_x);
      if (!c2_f_b) {
        c2_b2 = true;
      } else {
        c2_b2 = false;
      }
    } else {
      c2_b2 = false;
    }

    if (!c2_b2) {
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call
                  (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
        "message", 1U, 1U, 14, c2_h_y)));
    }

    c2_b_col = (int32_T)c2_d_c;
    c2_b_n = c2_out->colidx->data[c2_out->colidx->size[0] - 1];
    c2_c_n = (real_T)(c2_b_n - 1);
    c2_nz = (int32_T)c2_c_n;
    c2_nzColAlloc = c2_out->colidx->data[c2_b_col] - c2_out->colidx->
      data[c2_b_col - 1];
    c2_c_idx = c2_out->colidx->data[c2_b_col - 1];
    for (c2_c_i = 0; c2_c_i < 6; c2_c_i++) {
      c2_b_outBuff[c2_c_i] = c2_outBuff[c2_c_i];
    }

    c2_d_st.site = &c2_md_emlrtRSI;
    c2_nzRhs = c2_countNumnzInColumn(chartInstance, c2_b_outBuff, c2_r);
    if (c2_nzColAlloc < c2_nzRhs) {
      c2_extraCol = c2_nzRhs - c2_nzColAlloc;
      c2_d_n = (real_T)c2_out->maxnz;
      c2_numAlloc = (int32_T)c2_d_n;
      c2_extraAlloc = c2_numAlloc - c2_nz;
      c2_start = c2_out->colidx->data[c2_b_col];
      if (c2_extraAlloc < c2_extraCol) {
        c2_num2Alloc = c2_extraCol - c2_extraAlloc;
        c2_d_st.site = &c2_nd_emlrtRSI;
        c2_c_realloc(chartInstance, &c2_d_st, c2_out, c2_numAlloc + c2_num2Alloc,
                     c2_c_idx - 1, c2_start, c2_nz, c2_extraCol);
      } else {
        c2_d_st.site = &c2_od_emlrtRSI;
        c2_b_outstart = c2_start + c2_extraCol;
        c2_b_instart = c2_start;
        c2_b_nelem = (c2_nz - c2_start) + 1;
        if (!(c2_b_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i2 = c2_y->size[0];
          c2_y->size[0] = c2_out->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i2,
            &c2_c_emlrtRTEI);
          c2_b_loop_ub = c2_out->rowidx->size[0] - 1;
          for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
            c2_y->data[c2_i6] = c2_out->rowidx->data[c2_i6];
          }

          c2_d_outstart = c2_b_outstart - 1;
          c2_d_instart = c2_b_instart - 1;
          c2_d_nelem = c2_b_nelem;
          c2_i8 = c2_out->rowidx->size[0];
          c2_out->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_out->rowidx,
            c2_i8, &c2_wb_emlrtRTEI);
          c2_d_loop_ub = c2_y->size[0] - 1;
          for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
            c2_out->rowidx->data[c2_i10] = c2_y->data[c2_i10];
          }

          memmove((void *)&c2_out->rowidx->data[c2_d_outstart], (void *)
                  &c2_out->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                   c2_d_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i12 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_out->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i12,
            &c2_e_emlrtRTEI);
          c2_f_loop_ub = c2_out->d->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
            c2_b_y->data[c2_i14] = c2_out->d->data[c2_i14];
          }

          c2_f_outstart = c2_b_outstart - 1;
          c2_f_instart = c2_b_instart - 1;
          c2_f_nelem = c2_b_nelem;
          c2_i16 = c2_out->d->size[0];
          c2_out->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_out->d, c2_i16,
            &c2_wb_emlrtRTEI);
          c2_h_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
            c2_out->d->data[c2_i18] = c2_b_y->data[c2_i18];
          }

          memmove((void *)&c2_out->d->data[c2_f_outstart], (void *)&c2_out->
                  d->data[c2_f_instart], (uint32_T)((size_t)c2_f_nelem * sizeof
                   (real_T)));
        }
      }

      c2_rhsIter = c2_r;
      c2_c_copyNonzeroValues(chartInstance, c2_out, &c2_rhsIter, c2_c_idx,
        c2_outBuff);
      c2_d_col = c2_b_col + 1;
      c2_b_offs = c2_extraCol;
      c2_i4 = c2_d_col;
      for (c2_d_k = c2_i4 - 1; c2_d_k + 1 < 8; c2_d_k++) {
        c2_out->colidx->data[c2_d_k] += c2_b_offs;
      }
    } else {
      c2_rhsIter = c2_r;
      c2_b_outIdx = c2_c_copyNonzeroValues(chartInstance, c2_out, &c2_rhsIter,
        c2_c_idx, c2_outBuff);
      c2_extraSpace = c2_nzColAlloc - c2_nzRhs;
      if (c2_extraSpace > 0) {
        c2_start = c2_out->colidx->data[c2_b_col];
        c2_d_st.site = &c2_pd_emlrtRSI;
        c2_outstart = c2_b_outIdx;
        c2_instart = c2_start;
        c2_nelem = (c2_nz - c2_start) + 1;
        if (!(c2_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i1 = c2_y->size[0];
          c2_y->size[0] = c2_out->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i1,
            &c2_c_emlrtRTEI);
          c2_loop_ub = c2_out->rowidx->size[0] - 1;
          for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
            c2_y->data[c2_i5] = c2_out->rowidx->data[c2_i5];
          }

          c2_c_outstart = c2_outstart - 1;
          c2_c_instart = c2_instart - 1;
          c2_c_nelem = c2_nelem;
          c2_i7 = c2_out->rowidx->size[0];
          c2_out->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_out->rowidx,
            c2_i7, &c2_wb_emlrtRTEI);
          c2_c_loop_ub = c2_y->size[0] - 1;
          for (c2_i9 = 0; c2_i9 <= c2_c_loop_ub; c2_i9++) {
            c2_out->rowidx->data[c2_i9] = c2_y->data[c2_i9];
          }

          memmove((void *)&c2_out->rowidx->data[c2_c_outstart], (void *)
                  &c2_out->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                   c2_c_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i11 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_out->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i11,
            &c2_e_emlrtRTEI);
          c2_e_loop_ub = c2_out->d->size[0] - 1;
          for (c2_i13 = 0; c2_i13 <= c2_e_loop_ub; c2_i13++) {
            c2_b_y->data[c2_i13] = c2_out->d->data[c2_i13];
          }

          c2_e_outstart = c2_outstart - 1;
          c2_e_instart = c2_instart - 1;
          c2_e_nelem = c2_nelem;
          c2_i15 = c2_out->d->size[0];
          c2_out->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_out->d, c2_i15,
            &c2_wb_emlrtRTEI);
          c2_g_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i17 = 0; c2_i17 <= c2_g_loop_ub; c2_i17++) {
            c2_out->d->data[c2_i17] = c2_b_y->data[c2_i17];
          }

          memmove((void *)&c2_out->d->data[c2_e_outstart], (void *)&c2_out->
                  d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem * sizeof
                   (real_T)));
        }

        c2_c_col = c2_b_col + 1;
        c2_offs = c2_extraSpace;
        c2_i3 = c2_c_col;
        for (c2_c_k = c2_i3 - 1; c2_c_k + 1 < 8; c2_c_k++) {
          c2_out->colidx->data[c2_c_k] -= c2_offs;
        }
      }
    }
  }

  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_s);
  cs_di_sfree(c2_S);
  cs_di_nfree(c2_N);
}

static void c2_sparse_spallocLike(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_s)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_c;
  int32_T c2_b_c;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_bd_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_i = c2_s->d->size[0];
  c2_s->d->size[0] = 1;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_s->d, c2_i,
    &c2_yb_emlrtRTEI);
  c2_s->d->data[0] = 0.0;
  c2_s->maxnz = 1;
  c2_i1 = c2_s->colidx->size[0];
  c2_s->colidx->size[0] = 7;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_s->colidx, c2_i1,
    &c2_ac_emlrtRTEI);
  c2_s->colidx->data[0] = 1;
  c2_i2 = c2_s->rowidx->size[0];
  c2_s->rowidx->size[0] = 1;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_s->rowidx, c2_i2,
    &c2_yb_emlrtRTEI);
  c2_s->rowidx->data[0] = 0;
  for (c2_c = 0; c2_c < 6; c2_c++) {
    c2_b_c = c2_c;
    c2_s->colidx->data[c2_b_c + 1] = 1;
  }

  c2_b_st.site = &c2_x_emlrtRSI;
  c2_b_sparse_fillIn(chartInstance, &c2_b_st, c2_s);
}

static void c2_b_sparse_spallocLike(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_nzmax, c2_coder_internal_sparse *c2_s)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  int32_T c2_nzmaxval;
  int32_T c2_b_s;
  int32_T c2_x;
  int32_T c2_fs;
  const mxArray *c2_y = NULL;
  int32_T c2_b_x;
  static char_T c2_b_cv[32] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'S', 'p', 'a', 'r', 's', 'e', 'N', 'e', 'g', 'a', 't',
    'i', 'v', 'e', 'S', 'i', 'z', 'e' };

  int32_T c2_nzmaxvalFull;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  int32_T c2_a;
  static char_T c2_b_cv1[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 'p', 'a', 'r', 's', 'e', 'N', 'z', 'm', 'a',
    'x', 'T', 'o', 'o', 'S', 'm', 'a', 'l', 'l' };

  const mxArray *c2_d_y = NULL;
  int32_T c2_numalloc;
  int32_T c2_i;
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  real_T c2_d2;
  real_T c2_d3;
  int32_T c2_b_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_c;
  int32_T c2_b_c;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_bd_emlrtRSI;
  c2_nzmaxval = c2_nzmax;
  c2_b_st.site = &c2_hd_emlrtRSI;
  c2_b_s = c2_nzmaxval;
  c2_x = c2_b_s;
  c2_fs = c2_x;
  c2_c_st.site = &c2_id_emlrtRSI;
  if (!(c2_fs >= 0)) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    sf_mex_call(&c2_b_st, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(&c2_b_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_b_st, "message", 1U, 1U, 14,
      c2_b_y)));
  }

  c2_b_x = c2_nzmaxval;
  c2_nzmaxvalFull = c2_b_x;
  if (!(0 <= c2_nzmaxvalFull)) {
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_c_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_d_y)));
  }

  c2_a = c2_nzmaxvalFull;
  if (c2_a >= 1) {
    c2_numalloc = c2_a;
  } else {
    c2_numalloc = 1;
  }

  c2_i = c2_s->d->size[0];
  c2_d = (real_T)c2_numalloc;
  c2_s->d->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c2_d, &c2_h_emlrtDCI,
    &c2_st);
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_s->d, c2_i,
    &c2_yb_emlrtRTEI);
  c2_d1 = (real_T)c2_numalloc;
  c2_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c2_d1, &c2_h_emlrtDCI,
    &c2_st) - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_s->d->data[c2_i1] = 0.0;
  }

  c2_s->maxnz = c2_numalloc;
  c2_i2 = c2_s->colidx->size[0];
  c2_s->colidx->size[0] = 2;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_s->colidx, c2_i2,
    &c2_ac_emlrtRTEI);
  c2_s->colidx->data[0] = 1;
  c2_i3 = c2_s->rowidx->size[0];
  c2_d2 = (real_T)c2_numalloc;
  c2_s->rowidx->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c2_d2,
    &c2_h_emlrtDCI, &c2_st);
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_s->rowidx, c2_i3,
    &c2_yb_emlrtRTEI);
  c2_d3 = (real_T)c2_numalloc;
  c2_b_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c2_d3, &c2_h_emlrtDCI,
    &c2_st) - 1;
  for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
    c2_s->rowidx->data[c2_i4] = 0;
  }

  c2_s->colidx->data[1] = 1;
  c2_b_st.site = &c2_x_emlrtRSI;
  c2_i5 = c2_s->colidx->size[0] - 2;
  c2_c_st.site = &c2_bc_emlrtRSI;
  c2_b = c2_i5 + 1;
  c2_b_b = c2_b;
  if (1 > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_d_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
  }

  for (c2_c = 1; c2_c - 1 <= c2_i5; c2_c++) {
    c2_b_c = c2_c - 1;
    c2_s->colidx->data[c2_b_c] = 1;
  }

  c2_s->colidx->data[c2_s->colidx->size[0] - 1] = 1;
}

static void c2_sparse_full(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, real_T c2_y[6])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_cend;
  int32_T c2_i1;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_a;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_idx;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  for (c2_i = 0; c2_i < 6; c2_i++) {
    c2_y[c2_i] = 0.0;
  }

  c2_cend = c2_this.colidx->data[1] - 1;
  c2_i1 = c2_this.colidx->data[0];
  c2_st.site = &c2_jd_emlrtRSI;
  c2_a = c2_i1;
  c2_b = c2_cend;
  c2_b_a = c2_a;
  c2_b_b = c2_b;
  if (c2_b_a > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_idx = c2_i1 - 1; c2_idx < c2_cend; c2_idx++) {
    c2_y[c2_this.rowidx->data[c2_idx] - 1] = c2_this.d->data[c2_idx];
  }
}

static int32_T c2_countNumnzInColumn(SFc2_untitledInstanceStruct *chartInstance,
  real_T c2_rhs[6], c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter)
{
  int32_T c2_nz;
  int32_T c2_k;
  real_T c2_rhsv;
  int32_T c2_y;
  int32_T c2_b_y;
  (void)chartInstance;
  c2_nz = 0;
  for (c2_k = 0; c2_k < 6; c2_k++) {
    c2_rhsv = c2_rhs[c2_rhsIter.idx - 1];
    c2_y = c2_rhsIter.idx;
    c2_b_y = c2_y + 1;
    c2_rhsIter.idx = c2_b_y;
    if (!(c2_rhsv == 0.0)) {
      c2_nz++;
    }
  }

  return c2_nz;
}

static void c2_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter, int32_T c2_outStart, real_T c2_rhs[6],
  c2_coder_internal_sparse *c2_b_this, int32_T *c2_outIdx,
  c2_szVgRoYADpv9jTouZDFZ3mB *c2_b_rhsIter)
{
  int32_T c2_i;
  int32_T c2_b_outIdx;
  real_T c2_b_rhs[6];
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_bc_emlrtRTEI);
  *c2_b_rhsIter = c2_rhsIter;
  for (c2_i = 0; c2_i < 6; c2_i++) {
    c2_b_rhs[c2_i] = c2_rhs[c2_i];
  }

  c2_b_outIdx = c2_c_copyNonzeroValues(chartInstance, c2_b_this, c2_b_rhsIter,
    c2_outStart, c2_b_rhs);
  *c2_outIdx = c2_b_outIdx;
}

static void c2_c_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  real_T c2_len[4];
  int32_T c2_i;
  c2_emxArray_int32_T *c2_aRows;
  real_T c2_b_i;
  real_T c2_dataLen;
  real_T c2_maxNegD[3];
  int32_T c2_c_i;
  real_T c2_minAdjustedDim[3];
  real_T c2_maxIndex;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  int32_T c2_i1;
  c2_emxArray_int32_T *c2_aCols;
  const mxArray *c2_y = NULL;
  int32_T c2_i2;
  const mxArray *c2_b_y = NULL;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  c2_emxArray_real_T *c2_aDat;
  int32_T c2_i4;
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  c2_emxArray_real_T *c2_idx;
  c2_emxArray_int32_T *c2_b_r;
  c2_emxArray_real_T *c2_x;
  c2_emxArray_real_T *c2_b_idx;
  int32_T c2_k;
  real_T c2_b_k;
  real_T c2_a;
  real_T c2_d;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_x;
  boolean_T c2_c_b;
  boolean_T c2_guard1 = false;
  boolean_T c2_guard2 = false;
  int32_T c2_i6;
  real_T c2_c_x;
  boolean_T c2_d_b;
  int32_T c2_d_loop_ub;
  int32_T c2_i7;
  int32_T c2_i8;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_c_a;
  real_T c2_b_d;
  int32_T c2_i9;
  real_T c2_d_a;
  real_T c2_e_a;
  real_T c2_e_b;
  real_T c2_f_b;
  real_T c2_f_a;
  real_T c2_f_x;
  real_T c2_g_b;
  int32_T c2_e_loop_ub;
  boolean_T c2_h_b;
  real_T c2_anew;
  int32_T c2_i10;
  real_T c2_g_x;
  int32_T c2_i11;
  real_T c2_ndbl;
  real_T c2_h_x;
  real_T c2_apnd;
  boolean_T c2_i_b;
  real_T c2_cdiff;
  int32_T c2_f_loop_ub;
  real_T c2_g_a;
  int32_T c2_i12;
  real_T c2_j_b;
  int32_T c2_i13;
  real_T c2_i_x;
  real_T c2_j_x;
  int32_T c2_i_size[1];
  real_T c2_k_x;
  real_T c2_l_x;
  int32_T c2_g_loop_ub;
  real_T c2_m_x;
  int32_T c2_i14;
  real_T c2_absa;
  real_T c2_n_x;
  int32_T c2_i15;
  real_T c2_i_data[6];
  real_T c2_o_x;
  real_T c2_h_a;
  real_T c2_i_a;
  real_T c2_p_x;
  real_T c2_k_b;
  real_T c2_c_d;
  real_T c2_absb;
  real_T c2_j_a;
  real_T c2_l_b;
  int32_T c2_h_loop_ub;
  real_T c2_k_a;
  real_T c2_c;
  real_T c2_b_anew;
  int32_T c2_i16;
  real_T c2_m_b;
  real_T c2_q_x;
  real_T c2_thresh;
  real_T c2_b_ndbl;
  real_T c2_r_x;
  real_T c2_s_x;
  boolean_T c2_n_b;
  real_T c2_t_x;
  real_T c2_b_apnd;
  real_T c2_u_x;
  real_T c2_b_cdiff;
  int32_T c2_i17;
  real_T c2_c_y;
  real_T c2_l_a;
  real_T c2_o_b;
  real_T c2_v_x;
  real_T c2_w_x;
  boolean_T c2_p_b;
  real_T c2_bnew;
  real_T c2_x_x;
  real_T c2_y_x;
  int32_T c2_i_loop_ub;
  boolean_T c2_n_too_large;
  real_T c2_b_absa;
  int32_T c2_i18;
  int32_T c2_i19;
  real_T c2_ab_x;
  real_T c2_bb_x;
  int32_T c2_n;
  real_T c2_cb_x;
  real_T c2_db_x;
  int32_T c2_j_loop_ub;
  real_T c2_eb_x;
  int32_T c2_i20;
  real_T c2_b_absb;
  boolean_T c2_p;
  int32_T c2_i21;
  int32_T c2_i22;
  real_T c2_b_c;
  real_T c2_m_a;
  const mxArray *c2_d_y = NULL;
  real_T c2_q_b;
  int32_T c2_i23;
  real_T c2_b_thresh;
  real_T c2_n_a;
  const mxArray *c2_e_y = NULL;
  real_T c2_fb_x;
  real_T c2_r_b;
  int32_T c2_k_loop_ub;
  real_T c2_gb_x;
  real_T c2_c_anew;
  int32_T c2_i24;
  int32_T c2_l_loop_ub;
  real_T c2_hb_x;
  real_T c2_ib_x;
  int32_T c2_i25;
  real_T c2_f_y;
  real_T c2_c_ndbl;
  real_T c2_d_d;
  real_T c2_c_apnd;
  int32_T c2_m_loop_ub;
  real_T c2_b_bnew;
  real_T c2_c_cdiff;
  int32_T c2_i26;
  int32_T c2_nm1;
  real_T c2_o_a;
  int32_T c2_p_a;
  boolean_T c2_b_n_too_large;
  real_T c2_s_b;
  int32_T c2_n_loop_ub;
  int32_T c2_tmp_data[6];
  int32_T c2_nm1d2;
  real_T c2_jb_x;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_b_n;
  real_T c2_kb_x;
  real_T c2_lb_x;
  int32_T c2_i29;
  int32_T c2_t_b;
  real_T c2_c_absa;
  int32_T c2_u_b;
  boolean_T c2_b_p;
  real_T c2_mb_x;
  real_T c2_nb_x;
  boolean_T c2_overflow;
  const mxArray *c2_g_y = NULL;
  real_T c2_ob_x;
  int32_T c2_i30;
  real_T c2_c_absb;
  int32_T c2_o_loop_ub;
  const mxArray *c2_h_y = NULL;
  int32_T c2_i31;
  real_T c2_c_c;
  int32_T c2_c_k;
  real_T c2_d1;
  real_T c2_c_thresh;
  int32_T c2_d_k;
  real_T c2_pb_x;
  int32_T c2_i32;
  int32_T c2_v_b;
  int32_T c2_e_k;
  real_T c2_qb_x;
  int32_T c2_i_y;
  real_T c2_kd;
  real_T c2_rb_x;
  int32_T c2_b_nm1;
  real_T c2_j_y;
  int32_T c2_q_a;
  int32_T c2_p_loop_ub;
  int32_T c2_b_nm1d2;
  int32_T c2_i33;
  int32_T c2_i34;
  real_T c2_c_bnew;
  int32_T c2_q_loop_ub;
  static real_T c2_B[12] = { 1.0, 1.0, 1.0, 1.0, 4.0, 4.0, 4.0, 4.0, 1.0, 1.0,
    1.0, 1.0 };

  int32_T c2_w_b;
  boolean_T c2_c_n_too_large;
  int32_T c2_i35;
  int32_T c2_x_b;
  int32_T c2_c_n;
  int32_T c2_r_loop_ub;
  boolean_T c2_b_overflow;
  int32_T c2_i36;
  boolean_T c2_c_p;
  int32_T c2_f_k;
  const mxArray *c2_k_y = NULL;
  int32_T c2_i37;
  const mxArray *c2_l_y = NULL;
  int32_T c2_y_b;
  int32_T c2_g_k;
  int32_T c2_m_y;
  real_T c2_b_kd;
  int32_T c2_c_nm1;
  int32_T c2_r_a;
  int32_T c2_c_nm1d2;
  int32_T c2_i38;
  int32_T c2_ab_b;
  int32_T c2_bb_b;
  boolean_T c2_c_overflow;
  int32_T c2_h_k;
  int32_T c2_cb_b;
  int32_T c2_i_k;
  int32_T c2_n_y;
  real_T c2_c_kd;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_len[0] = 0.0;
  for (c2_i = 0; c2_i < 3; c2_i++) {
    c2_b_i = (real_T)c2_i + 1.0;
    c2_maxNegD[(int32_T)c2_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 +
      (real_T)((int32_T)c2_b_i - 1)));
    c2_minAdjustedDim[(int32_T)c2_b_i - 1] = muDoubleScalarMin(4.0, 4.0 - (-1.0
      + (real_T)((int32_T)c2_b_i - 1)));
    c2_maxIndex = c2_minAdjustedDim[(int32_T)c2_b_i - 1];
    c2_maxIndex += -1.0 + (real_T)((int32_T)c2_b_i - 1);
    if (c2_maxIndex > 4.0) {
      c2_b = true;
    } else {
      c2_b = false;
    }

    if (c2_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_b_y)));
    }

    c2_len[(int32_T)(c2_b_i + 1.0) - 1] = ((c2_len[(int32_T)c2_b_i - 1] +
      c2_minAdjustedDim[(int32_T)c2_b_i - 1]) - c2_maxNegD[(int32_T)c2_b_i - 1])
      + 1.0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aRows, 1, &c2_k_emlrtRTEI);
  c2_dataLen = c2_len[3];
  c2_c_i = c2_aRows->size[0];
  c2_aRows->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_wd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aRows, c2_c_i,
    &c2_k_emlrtRTEI);
  c2_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_aRows->data[c2_i1] = 0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aCols, 1, &c2_l_emlrtRTEI);
  c2_i2 = c2_aCols->size[0];
  c2_aCols->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_vd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aCols, c2_i2,
    &c2_l_emlrtRTEI);
  c2_b_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_aCols->data[c2_i3] = 0;
  }

  c2_emxInit_real_T(chartInstance, c2_sp, &c2_aDat, 1, &c2_y_emlrtRTEI);
  c2_i4 = c2_aDat->size[0];
  c2_aDat->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_ae_emlrtRSI;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_aDat, c2_i4,
    &c2_m_emlrtRTEI);
  c2_c_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_aDat->data[c2_i5] = 0.0;
  }

  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_idx, 2, &c2_q_emlrtRTEI);
  c2_emxInit_int32_T1(chartInstance, c2_sp, &c2_b_r, 2, &c2_ab_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_x, 1, &c2_w_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_b_idx, 1, &c2_o_emlrtRTEI);
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_st.site = &c2_o_emlrtRSI;
    c2_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_b_a = c2_a;
    c2_b_b = c2_d;
    if (c2_b_b < c2_b_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_b_x = c2_b_a;
      c2_c_b = muDoubleScalarIsInf(c2_b_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_c_b) {
        c2_guard2 = true;
      } else {
        c2_c_x = c2_b_b;
        c2_d_b = muDoubleScalarIsInf(c2_c_x);
        if (c2_d_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_b_a == c2_b_b) {
          c2_i8 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i8,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_d_x = c2_b_a;
        c2_e_x = c2_d_x;
        c2_e_x = muDoubleScalarFloor(c2_e_x);
        if (c2_e_x == c2_b_a) {
          c2_i9 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i9,
            &c2_n_emlrtRTEI);
          c2_e_loop_ub = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a);
          for (c2_i10 = 0; c2_i10 <= c2_e_loop_ub; c2_i10++) {
            c2_idx->data[c2_i10] = c2_b_a + (real_T)c2_i10;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_e_a = c2_b_a;
          c2_f_b = c2_b_b;
          c2_f_a = c2_e_a;
          c2_g_b = c2_f_b;
          c2_anew = c2_f_a;
          c2_g_x = (c2_g_b - c2_f_a) + 0.5;
          c2_ndbl = c2_g_x;
          c2_ndbl = muDoubleScalarFloor(c2_ndbl);
          c2_apnd = c2_f_a + c2_ndbl;
          c2_cdiff = c2_apnd - c2_g_b;
          c2_g_a = c2_f_a;
          c2_j_b = c2_g_b;
          c2_i_x = c2_g_a;
          c2_k_x = c2_i_x;
          c2_m_x = c2_k_x;
          c2_absa = muDoubleScalarAbs(c2_m_x);
          c2_n_x = c2_j_b;
          c2_o_x = c2_n_x;
          c2_p_x = c2_o_x;
          c2_absb = muDoubleScalarAbs(c2_p_x);
          if (c2_absa > c2_absb) {
            c2_c = c2_absa;
          } else {
            c2_c = c2_absb;
          }

          c2_thresh = 4.4408920985006262E-16 * c2_c;
          c2_s_x = c2_cdiff;
          c2_t_x = c2_s_x;
          c2_u_x = c2_t_x;
          c2_c_y = muDoubleScalarAbs(c2_u_x);
          if (c2_c_y < c2_thresh) {
            c2_ndbl++;
            c2_bnew = c2_g_b;
          } else if (c2_cdiff > 0.0) {
            c2_bnew = c2_f_a + (c2_ndbl - 1.0);
          } else {
            c2_ndbl++;
            c2_bnew = c2_apnd;
          }

          c2_n_too_large = (c2_ndbl > 2.147483647E+9);
          if (c2_ndbl >= 0.0) {
            c2_n = (int32_T)muDoubleScalarFloor(c2_ndbl);
          } else {
            c2_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_p = !c2_n_too_large;
          if (!c2_p) {
            c2_d_y = NULL;
            sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_e_y = NULL;
            sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_e_y)));
          }

          c2_i23 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i23,
            &c2_s_emlrtRTEI);
          if (c2_n > 0) {
            c2_idx->data[0] = c2_anew;
            if (c2_n > 1) {
              c2_idx->data[c2_n - 1] = c2_bnew;
              c2_nm1 = c2_n - 1;
              c2_p_a = c2_nm1;
              c2_nm1d2 = c2_div_nzp_s32(chartInstance, c2_p_a, 2, 0, 1U, 0, 0);
              c2_i28 = c2_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_t_b = c2_i28 + 1;
              c2_u_b = c2_t_b;
              if (1 > c2_u_b) {
                c2_overflow = false;
              } else {
                c2_overflow = (c2_u_b > 2147483646);
              }

              if (c2_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_c_k = 1; c2_c_k - 1 <= c2_i28; c2_c_k++) {
                c2_e_k = c2_c_k;
                c2_kd = (real_T)c2_e_k;
                c2_idx->data[c2_e_k] = c2_anew + c2_kd;
                c2_idx->data[(c2_n - c2_e_k) - 1] = c2_bnew - c2_kd;
              }

              c2_v_b = c2_nm1d2;
              c2_i_y = c2_v_b << 1;
              if (c2_i_y == c2_nm1) {
                c2_idx->data[c2_nm1d2] = (c2_anew + c2_bnew) / 2.0;
              } else {
                c2_kd = (real_T)c2_nm1d2;
                c2_idx->data[c2_nm1d2] = c2_anew + c2_kd;
                c2_idx->data[c2_nm1d2 + 1] = c2_bnew - c2_kd;
              }
            }
          }
        }
      }
    }

    c2_i6 = c2_x->size[0];
    c2_x->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i6,
      &c2_o_emlrtRTEI);
    c2_d_loop_ub = c2_idx->size[1] - 1;
    for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
      c2_x->data[c2_i7] = c2_idx->data[c2_i7];
    }

    c2_st.site = &c2_o_emlrtRSI;
    c2_c_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_b_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_d_a = c2_c_a;
    c2_e_b = c2_b_d;
    if (c2_e_b < c2_d_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_f_x = c2_d_a;
      c2_h_b = muDoubleScalarIsInf(c2_f_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_h_b) {
        c2_guard2 = true;
      } else {
        c2_h_x = c2_e_b;
        c2_i_b = muDoubleScalarIsInf(c2_h_x);
        if (c2_i_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_d_a == c2_e_b) {
          c2_i13 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i13,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_j_x = c2_d_a;
        c2_l_x = c2_j_x;
        c2_l_x = muDoubleScalarFloor(c2_l_x);
        if (c2_l_x == c2_d_a) {
          c2_i15 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i15,
            &c2_n_emlrtRTEI);
          c2_h_loop_ub = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a);
          for (c2_i16 = 0; c2_i16 <= c2_h_loop_ub; c2_i16++) {
            c2_idx->data[c2_i16] = c2_d_a + (real_T)c2_i16;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_h_a = c2_d_a;
          c2_k_b = c2_e_b;
          c2_j_a = c2_h_a;
          c2_l_b = c2_k_b;
          c2_b_anew = c2_j_a;
          c2_q_x = (c2_l_b - c2_j_a) + 0.5;
          c2_b_ndbl = c2_q_x;
          c2_b_ndbl = muDoubleScalarFloor(c2_b_ndbl);
          c2_b_apnd = c2_j_a + c2_b_ndbl;
          c2_b_cdiff = c2_b_apnd - c2_l_b;
          c2_l_a = c2_j_a;
          c2_o_b = c2_l_b;
          c2_w_x = c2_l_a;
          c2_x_x = c2_w_x;
          c2_y_x = c2_x_x;
          c2_b_absa = muDoubleScalarAbs(c2_y_x);
          c2_ab_x = c2_o_b;
          c2_cb_x = c2_ab_x;
          c2_eb_x = c2_cb_x;
          c2_b_absb = muDoubleScalarAbs(c2_eb_x);
          if (c2_b_absa > c2_b_absb) {
            c2_b_c = c2_b_absa;
          } else {
            c2_b_c = c2_b_absb;
          }

          c2_b_thresh = 4.4408920985006262E-16 * c2_b_c;
          c2_fb_x = c2_b_cdiff;
          c2_gb_x = c2_fb_x;
          c2_hb_x = c2_gb_x;
          c2_f_y = muDoubleScalarAbs(c2_hb_x);
          if (c2_f_y < c2_b_thresh) {
            c2_b_ndbl++;
            c2_b_bnew = c2_l_b;
          } else if (c2_b_cdiff > 0.0) {
            c2_b_bnew = c2_j_a + (c2_b_ndbl - 1.0);
          } else {
            c2_b_ndbl++;
            c2_b_bnew = c2_b_apnd;
          }

          c2_b_n_too_large = (c2_b_ndbl > 2.147483647E+9);
          if (c2_b_ndbl >= 0.0) {
            c2_b_n = (int32_T)muDoubleScalarFloor(c2_b_ndbl);
          } else {
            c2_b_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_b_p = !c2_b_n_too_large;
          if (!c2_b_p) {
            c2_g_y = NULL;
            sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_h_y = NULL;
            sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_h_y)));
          }

          c2_i30 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_b_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i30,
            &c2_s_emlrtRTEI);
          if (c2_b_n > 0) {
            c2_idx->data[0] = c2_b_anew;
            if (c2_b_n > 1) {
              c2_idx->data[c2_b_n - 1] = c2_b_bnew;
              c2_b_nm1 = c2_b_n - 1;
              c2_q_a = c2_b_nm1;
              c2_b_nm1d2 = c2_div_nzp_s32(chartInstance, c2_q_a, 2, 0, 1U, 0, 0);
              c2_i34 = c2_b_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_w_b = c2_i34 + 1;
              c2_x_b = c2_w_b;
              if (1 > c2_x_b) {
                c2_b_overflow = false;
              } else {
                c2_b_overflow = (c2_x_b > 2147483646);
              }

              if (c2_b_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_f_k = 1; c2_f_k - 1 <= c2_i34; c2_f_k++) {
                c2_g_k = c2_f_k;
                c2_b_kd = (real_T)c2_g_k;
                c2_idx->data[c2_g_k] = c2_b_anew + c2_b_kd;
                c2_idx->data[(c2_b_n - c2_g_k) - 1] = c2_b_bnew - c2_b_kd;
              }

              c2_y_b = c2_b_nm1d2;
              c2_m_y = c2_y_b << 1;
              if (c2_m_y == c2_b_nm1) {
                c2_idx->data[c2_b_nm1d2] = (c2_b_anew + c2_b_bnew) / 2.0;
              } else {
                c2_b_kd = (real_T)c2_b_nm1d2;
                c2_idx->data[c2_b_nm1d2] = c2_b_anew + c2_b_kd;
                c2_idx->data[c2_b_nm1d2 + 1] = c2_b_bnew - c2_b_kd;
              }
            }
          }
        }
      }
    }

    c2_i11 = c2_b_idx->size[0];
    c2_b_idx->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_b_idx, c2_i11,
      &c2_o_emlrtRTEI);
    c2_f_loop_ub = c2_idx->size[1] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_f_loop_ub; c2_i12++) {
      c2_b_idx->data[c2_i12] = c2_idx->data[c2_i12];
    }

    c2_i_size[0] = c2_x->size[0];
    c2_g_loop_ub = c2_x->size[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_g_loop_ub; c2_i14++) {
      c2_i_data[c2_i14] = c2_b_idx->data[c2_i14];
    }

    c2_st.site = &c2_q_emlrtRSI;
    c2_i_a = c2_len[(int32_T)c2_b_k - 1] + 1.0;
    c2_c_d = c2_len[(int32_T)(c2_b_k + 1.0) - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_k_a = c2_i_a;
    c2_m_b = c2_c_d;
    if (c2_m_b < c2_k_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_r_x = c2_k_a;
      c2_n_b = muDoubleScalarIsInf(c2_r_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_n_b) {
        c2_guard2 = true;
      } else {
        c2_v_x = c2_m_b;
        c2_p_b = muDoubleScalarIsInf(c2_v_x);
        if (c2_p_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_k_a == c2_m_b) {
          c2_i18 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i18,
            &c2_q_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_bb_x = c2_k_a;
        c2_db_x = c2_bb_x;
        c2_db_x = muDoubleScalarFloor(c2_db_x);
        if (c2_db_x == c2_k_a) {
          c2_i21 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i21,
            &c2_q_emlrtRTEI);
          c2_k_loop_ub = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a);
          for (c2_i24 = 0; c2_i24 <= c2_k_loop_ub; c2_i24++) {
            c2_idx->data[c2_i24] = c2_k_a + (real_T)c2_i24;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_m_a = c2_k_a;
          c2_q_b = c2_m_b;
          c2_n_a = c2_m_a;
          c2_r_b = c2_q_b;
          c2_c_anew = c2_n_a;
          c2_ib_x = (c2_r_b - c2_n_a) + 0.5;
          c2_c_ndbl = c2_ib_x;
          c2_c_ndbl = muDoubleScalarFloor(c2_c_ndbl);
          c2_c_apnd = c2_n_a + c2_c_ndbl;
          c2_c_cdiff = c2_c_apnd - c2_r_b;
          c2_o_a = c2_n_a;
          c2_s_b = c2_r_b;
          c2_jb_x = c2_o_a;
          c2_kb_x = c2_jb_x;
          c2_lb_x = c2_kb_x;
          c2_c_absa = muDoubleScalarAbs(c2_lb_x);
          c2_mb_x = c2_s_b;
          c2_nb_x = c2_mb_x;
          c2_ob_x = c2_nb_x;
          c2_c_absb = muDoubleScalarAbs(c2_ob_x);
          if (c2_c_absa > c2_c_absb) {
            c2_c_c = c2_c_absa;
          } else {
            c2_c_c = c2_c_absb;
          }

          c2_c_thresh = 4.4408920985006262E-16 * c2_c_c;
          c2_pb_x = c2_c_cdiff;
          c2_qb_x = c2_pb_x;
          c2_rb_x = c2_qb_x;
          c2_j_y = muDoubleScalarAbs(c2_rb_x);
          if (c2_j_y < c2_c_thresh) {
            c2_c_ndbl++;
            c2_c_bnew = c2_r_b;
          } else if (c2_c_cdiff > 0.0) {
            c2_c_bnew = c2_n_a + (c2_c_ndbl - 1.0);
          } else {
            c2_c_ndbl++;
            c2_c_bnew = c2_c_apnd;
          }

          c2_c_n_too_large = (c2_c_ndbl > 2.147483647E+9);
          if (c2_c_ndbl >= 0.0) {
            c2_c_n = (int32_T)muDoubleScalarFloor(c2_c_ndbl);
          } else {
            c2_c_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_c_p = !c2_c_n_too_large;
          if (!c2_c_p) {
            c2_k_y = NULL;
            sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_l_y = NULL;
            sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_k_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_l_y)));
          }

          c2_i37 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_c_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i37,
            &c2_s_emlrtRTEI);
          if (c2_c_n > 0) {
            c2_idx->data[0] = c2_c_anew;
            if (c2_c_n > 1) {
              c2_idx->data[c2_c_n - 1] = c2_c_bnew;
              c2_c_nm1 = c2_c_n - 1;
              c2_r_a = c2_c_nm1;
              c2_c_nm1d2 = c2_div_nzp_s32(chartInstance, c2_r_a, 2, 0, 1U, 0, 0);
              c2_i38 = c2_c_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_ab_b = c2_i38 + 1;
              c2_bb_b = c2_ab_b;
              if (1 > c2_bb_b) {
                c2_c_overflow = false;
              } else {
                c2_c_overflow = (c2_bb_b > 2147483646);
              }

              if (c2_c_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_h_k = 1; c2_h_k - 1 <= c2_i38; c2_h_k++) {
                c2_i_k = c2_h_k;
                c2_c_kd = (real_T)c2_i_k;
                c2_idx->data[c2_i_k] = c2_c_anew + c2_c_kd;
                c2_idx->data[(c2_c_n - c2_i_k) - 1] = c2_c_bnew - c2_c_kd;
              }

              c2_cb_b = c2_c_nm1d2;
              c2_n_y = c2_cb_b << 1;
              if (c2_n_y == c2_c_nm1) {
                c2_idx->data[c2_c_nm1d2] = (c2_c_anew + c2_c_bnew) / 2.0;
              } else {
                c2_c_kd = (real_T)c2_c_nm1d2;
                c2_idx->data[c2_c_nm1d2] = c2_c_anew + c2_c_kd;
                c2_idx->data[c2_c_nm1d2 + 1] = c2_c_bnew - c2_c_kd;
              }
            }
          }
        }
      }
    }

    c2_i17 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_ce_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i17,
      &c2_r_emlrtRTEI);
    c2_i_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
      c2_b_r->data[c2_i19] = (int32_T)c2_idx->data[c2_i19];
    }

    c2_j_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_j_loop_ub; c2_i20++) {
      c2_aRows->data[c2_b_r->data[c2_i20] - 1] = (int32_T)c2_i_data[c2_i20];
    }

    c2_i22 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_be_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i22,
      &c2_t_emlrtRTEI);
    c2_l_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i25 = 0; c2_i25 <= c2_l_loop_ub; c2_i25++) {
      c2_b_r->data[c2_i25] = (int32_T)c2_idx->data[c2_i25];
    }

    c2_d_d = -1.0 + (real_T)((int32_T)c2_b_k - 1);
    c2_m_loop_ub = c2_i_size[0] - 1;
    for (c2_i26 = 0; c2_i26 <= c2_m_loop_ub; c2_i26++) {
      c2_tmp_data[c2_i26] = (int32_T)(c2_i_data[c2_i26] + c2_d_d);
    }

    c2_n_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i27 = 0; c2_i27 <= c2_n_loop_ub; c2_i27++) {
      c2_aCols->data[c2_b_r->data[c2_i27] - 1] = c2_tmp_data[c2_i27];
    }

    c2_i29 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i29,
      &c2_v_emlrtRTEI);
    c2_o_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_o_loop_ub; c2_i31++) {
      c2_b_r->data[c2_i31] = (int32_T)c2_idx->data[c2_i31];
    }

    c2_d1 = -1.0 + (real_T)((int32_T)c2_b_k - 1);
    c2_d_k = (int32_T)c2_b_k - 1;
    c2_i32 = c2_x->size[0];
    c2_x->size[0] = c2_i_size[0];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i32,
      &c2_w_emlrtRTEI);
    c2_p_loop_ub = c2_i_size[0] - 1;
    for (c2_i33 = 0; c2_i33 <= c2_p_loop_ub; c2_i33++) {
      c2_x->data[c2_i33] = c2_B[((int32_T)(c2_i_data[c2_i33] + c2_d1) + (c2_d_k <<
        2)) - 1];
    }

    c2_q_loop_ub = c2_x->size[0] - 1;
    for (c2_i35 = 0; c2_i35 <= c2_q_loop_ub; c2_i35++) {
      c2_i_data[c2_i35] = c2_x->data[c2_i35];
    }

    c2_r_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i36 = 0; c2_i36 <= c2_r_loop_ub; c2_i36++) {
      c2_aDat->data[c2_b_r->data[c2_i36] - 1] = c2_i_data[c2_i36];
    }
  }

  c2_emxFree_real_T(chartInstance, &c2_b_idx);
  c2_emxFree_real_T(chartInstance, &c2_x);
  c2_emxFree_int32_T(chartInstance, &c2_b_r);
  c2_emxFree_real_T(chartInstance, &c2_idx);
  c2_st.site = &c2_p_emlrtRSI;
  c2_b_sparse(chartInstance, &c2_st, c2_aRows, c2_aCols, c2_aDat, c2_res1);
  c2_emxFree_real_T(chartInstance, &c2_aDat);
  c2_emxFree_int32_T(chartInstance, &c2_aCols);
  c2_emxFree_int32_T(chartInstance, &c2_aRows);
}

static void c2_b_sparse(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_varargin_1, c2_emxArray_int32_T
  *c2_varargin_2, c2_emxArray_real_T *c2_varargin_3, c2_coder_internal_sparse
  *c2_y)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_i_st;
  int32_T c2_nc;
  int32_T c2_nr;
  int32_T c2_ny;
  boolean_T c2_b;
  const mxArray *c2_b_y = NULL;
  boolean_T c2_b1;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  c2_emxArray_int32_T *c2_b_varargin_1;
  int32_T c2_i;
  const mxArray *c2_e_y = NULL;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxArray_int32_T *c2_ridxInt;
  c2_emxArray_int32_T *c2_b_varargin_2;
  int32_T c2_i2;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  c2_emxArray_int32_T *c2_cidxInt;
  c2_emxArray_int32_T *c2_sortedIndices;
  int32_T c2_i4;
  int32_T c2_b_b;
  int32_T c2_c_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  int32_T c2_b_k;
  int32_T c2_istop;
  int32_T c2_b_istop;
  int32_T c2_maxr;
  int32_T c2_d_b;
  int32_T c2_e_b;
  boolean_T c2_b_overflow;
  int32_T c2_c_k;
  const mxArray *c2_f_y = NULL;
  int32_T c2_maxc;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  int32_T c2_a;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  int32_T c2_numalloc;
  int32_T c2_u;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  int32_T c2_i5;
  real_T c2_d;
  int32_T c2_b_u;
  int32_T c2_c_u;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  real_T c2_d1;
  int32_T c2_d_u;
  int32_T c2_c_loop_ub;
  const mxArray *c2_o_y = NULL;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  real_T c2_d2;
  real_T c2_d3;
  int32_T c2_d_loop_ub;
  int32_T c2_i9;
  int32_T c2_cptr;
  int32_T c2_c;
  int32_T c2_b_c;
  int32_T c2_f_b;
  int32_T c2_g_b;
  boolean_T c2_c_overflow;
  int32_T c2_d_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_i_st.prev = &c2_h_st;
  c2_i_st.tls = c2_h_st.tls;
  c2_st.site = &c2_w_emlrtRSI;
  c2_nc = c2_varargin_2->size[0];
  c2_nr = c2_varargin_1->size[0];
  c2_ny = c2_varargin_3->size[0];
  if ((c2_nr == c2_nc) && (c2_ny == c2_nc)) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_c_y)));
  }

  if ((c2_ny == c2_nc) || (c2_ny == c2_nr)) {
    c2_b1 = true;
  } else {
    c2_b1 = false;
  }

  if (!c2_b1) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_b_varargin_1, 1,
                     &c2_bb_emlrtRTEI);
  c2_i = c2_b_varargin_1->size[0];
  c2_b_varargin_1->size[0] = c2_varargin_1->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_b_varargin_1, c2_i,
    &c2_bb_emlrtRTEI);
  c2_loop_ub = c2_varargin_1->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_varargin_1->data[c2_i1] = c2_varargin_1->data[c2_i1];
  }

  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_ridxInt, 1, &c2_fb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_b_varargin_2, 1,
                     &c2_cb_emlrtRTEI);
  c2_b_st.site = &c2_eb_emlrtRSI;
  c2_assertValidIndexArg(chartInstance, &c2_b_st, c2_b_varargin_1, c2_ridxInt);
  c2_i2 = c2_b_varargin_2->size[0];
  c2_b_varargin_2->size[0] = c2_varargin_2->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_b_varargin_2, c2_i2,
    &c2_cb_emlrtRTEI);
  c2_b_loop_ub = c2_varargin_2->size[0] - 1;
  c2_emxFree_int32_T(chartInstance, &c2_b_varargin_1);
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_b_varargin_2->data[c2_i3] = c2_varargin_2->data[c2_i3];
  }

  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_cidxInt, 1, &c2_gb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_st, &c2_sortedIndices, 1,
                     &c2_hb_emlrtRTEI);
  c2_b_st.site = &c2_db_emlrtRSI;
  c2_assertValidIndexArg(chartInstance, &c2_b_st, c2_b_varargin_2, c2_cidxInt);
  c2_i4 = c2_sortedIndices->size[0];
  c2_sortedIndices->size[0] = c2_nc;
  c2_b_st.site = &c2_w_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_b_st, c2_sortedIndices, c2_i4,
    &c2_db_emlrtRTEI);
  c2_b_st.site = &c2_cb_emlrtRSI;
  c2_b_b = c2_nc;
  c2_c_b = c2_b_b;
  c2_emxFree_int32_T(chartInstance, &c2_b_varargin_2);
  if (1 > c2_c_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_c_b > 2147483646);
  }

  if (c2_overflow) {
    c2_c_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
  }

  for (c2_k = 1; c2_k - 1 < c2_nc; c2_k++) {
    c2_b_k = c2_k;
    c2_sortedIndices->data[c2_b_k - 1] = c2_b_k;
  }

  c2_b_st.site = &c2_bb_emlrtRSI;
  c2_b_locSortrows(chartInstance, &c2_b_st, c2_sortedIndices, c2_cidxInt,
                   c2_ridxInt);
  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_c_st.site = &c2_ub_emlrtRSI;
  c2_d_st.site = &c2_vb_emlrtRSI;
  c2_e_st.site = &c2_wb_emlrtRSI;
  c2_f_st.site = &c2_xb_emlrtRSI;
  c2_istop = c2_ridxInt->size[0];
  c2_g_st.site = &c2_yb_emlrtRSI;
  c2_b_istop = c2_istop;
  c2_maxr = c2_ridxInt->data[0];
  c2_h_st.site = &c2_ac_emlrtRSI;
  c2_d_b = c2_b_istop;
  c2_e_b = c2_d_b;
  c2_b_overflow = (c2_e_b > 2147483646);
  if (c2_b_overflow) {
    c2_i_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_i_st);
  }

  for (c2_c_k = 1; c2_c_k < c2_b_istop; c2_c_k++) {
    if (c2_maxr < c2_ridxInt->data[c2_c_k]) {
      c2_maxr = c2_ridxInt->data[c2_c_k];
    }
  }

  if (!(c2_maxr <= 4)) {
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_maxr, 6, 0U, 0U, 0U, 0), false);
    c2_u = 1;
    c2_l_y = NULL;
    sf_mex_assign(&c2_l_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), false);
    c2_c_u = 4;
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_c_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_f_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 4U, 14, c2_g_y,
      14, c2_i_y, 14, c2_l_y, 14, c2_n_y)));
  }

  c2_maxc = c2_cidxInt->data[c2_cidxInt->size[0] - 1];
  if (!(c2_maxc <= 4)) {
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_j_y = NULL;
    sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_k_y = NULL;
    sf_mex_assign(&c2_k_y, sf_mex_create("y", &c2_maxc, 6, 0U, 0U, 0U, 0), false);
    c2_b_u = 1;
    c2_m_y = NULL;
    sf_mex_assign(&c2_m_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0U, 0U, 0), false);
    c2_d_u = 4;
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", &c2_d_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_h_y, 14, sf_mex_call(&c2_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 4U, 14, c2_j_y,
      14, c2_k_y, 14, c2_m_y, 14, c2_o_y)));
  }

  c2_a = c2_nc;
  if (c2_a >= 1) {
    c2_numalloc = c2_a;
  } else {
    c2_numalloc = 1;
  }

  c2_i5 = c2_y->d->size[0];
  c2_d = (real_T)c2_numalloc;
  c2_y->d->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c2_d, &c2_g_emlrtDCI,
    &c2_st);
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_y->d, c2_i5,
    &c2_eb_emlrtRTEI);
  c2_d1 = (real_T)c2_numalloc;
  c2_c_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c2_d1, &c2_g_emlrtDCI,
    &c2_st) - 1;
  for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
    c2_y->d->data[c2_i6] = 0.0;
  }

  c2_y->maxnz = c2_numalloc;
  c2_i7 = c2_y->colidx->size[0];
  c2_y->colidx->size[0] = 5;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_y->colidx, c2_i7,
    &c2_db_emlrtRTEI);
  c2_y->colidx->data[0] = 1;
  c2_i8 = c2_y->rowidx->size[0];
  c2_d2 = (real_T)c2_numalloc;
  c2_y->rowidx->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c2_d2,
    &c2_g_emlrtDCI, &c2_st);
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_y->rowidx, c2_i8,
    &c2_eb_emlrtRTEI);
  c2_d3 = (real_T)c2_numalloc;
  c2_d_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c2_d3, &c2_g_emlrtDCI,
    &c2_st) - 1;
  for (c2_i9 = 0; c2_i9 <= c2_d_loop_ub; c2_i9++) {
    c2_y->rowidx->data[c2_i9] = 0;
  }

  c2_cptr = 0;
  for (c2_c = 0; c2_c < 4; c2_c++) {
    c2_b_c = c2_c + 1;
    while ((c2_cptr + 1 <= c2_nc) && (c2_cidxInt->data[c2_cptr] == c2_b_c)) {
      c2_y->rowidx->data[c2_cptr] = c2_ridxInt->data[c2_cptr];
      c2_cptr++;
    }

    c2_y->colidx->data[c2_b_c] = c2_cptr + 1;
  }

  c2_emxFree_int32_T(chartInstance, &c2_cidxInt);
  c2_emxFree_int32_T(chartInstance, &c2_ridxInt);
  c2_b_st.site = &c2_y_emlrtRSI;
  c2_f_b = c2_nc;
  c2_g_b = c2_f_b;
  if (1 > c2_g_b) {
    c2_c_overflow = false;
  } else {
    c2_c_overflow = (c2_g_b > 2147483646);
  }

  if (c2_c_overflow) {
    c2_c_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_c_st);
  }

  for (c2_d_k = 1; c2_d_k - 1 < c2_nc; c2_d_k++) {
    c2_b_k = c2_d_k - 1;
    c2_y->d->data[c2_b_k] = c2_varargin_3->data[c2_sortedIndices->data[c2_b_k] -
      1];
  }

  c2_emxFree_int32_T(chartInstance, &c2_sortedIndices);
  c2_b_st.site = &c2_x_emlrtRSI;
  c2_b_sparse_fillIn(chartInstance, &c2_b_st, c2_y);
}

static void c2_d_spdiags(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_res1)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  real_T c2_len[3];
  int32_T c2_i;
  c2_emxArray_int32_T *c2_aRows;
  real_T c2_b_i;
  real_T c2_dataLen;
  real_T c2_maxNegD[2];
  int32_T c2_c_i;
  real_T c2_minAdjustedDim[2];
  real_T c2_maxIndex;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  int32_T c2_i1;
  c2_emxArray_int32_T *c2_aCols;
  const mxArray *c2_y = NULL;
  int32_T c2_i2;
  const mxArray *c2_b_y = NULL;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  c2_emxArray_real_T *c2_aDat;
  int32_T c2_i4;
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  c2_emxArray_real_T *c2_idx;
  c2_emxArray_int32_T *c2_b_r;
  c2_emxArray_real_T *c2_x;
  c2_emxArray_real_T *c2_b_idx;
  int32_T c2_k;
  real_T c2_b_k;
  real_T c2_a;
  real_T c2_d;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_x;
  boolean_T c2_c_b;
  boolean_T c2_guard1 = false;
  boolean_T c2_guard2 = false;
  int32_T c2_i6;
  real_T c2_c_x;
  boolean_T c2_d_b;
  int32_T c2_d_loop_ub;
  int32_T c2_i7;
  int32_T c2_i8;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_c_a;
  real_T c2_b_d;
  int32_T c2_i9;
  real_T c2_d_a;
  real_T c2_e_a;
  real_T c2_e_b;
  real_T c2_f_b;
  real_T c2_f_a;
  real_T c2_f_x;
  real_T c2_g_b;
  int32_T c2_e_loop_ub;
  boolean_T c2_h_b;
  real_T c2_anew;
  int32_T c2_i10;
  real_T c2_g_x;
  int32_T c2_i11;
  real_T c2_ndbl;
  real_T c2_h_x;
  real_T c2_apnd;
  boolean_T c2_i_b;
  real_T c2_cdiff;
  int32_T c2_f_loop_ub;
  real_T c2_g_a;
  int32_T c2_i12;
  real_T c2_j_b;
  int32_T c2_i13;
  real_T c2_i_x;
  real_T c2_j_x;
  int32_T c2_i_size[1];
  real_T c2_k_x;
  real_T c2_l_x;
  int32_T c2_g_loop_ub;
  real_T c2_m_x;
  int32_T c2_i14;
  real_T c2_absa;
  real_T c2_n_x;
  int32_T c2_i15;
  real_T c2_i_data[6];
  real_T c2_o_x;
  real_T c2_h_a;
  real_T c2_i_a;
  real_T c2_p_x;
  real_T c2_k_b;
  real_T c2_c_d;
  real_T c2_absb;
  real_T c2_j_a;
  real_T c2_l_b;
  int32_T c2_h_loop_ub;
  real_T c2_k_a;
  real_T c2_c;
  real_T c2_b_anew;
  int32_T c2_i16;
  real_T c2_m_b;
  real_T c2_q_x;
  real_T c2_thresh;
  real_T c2_b_ndbl;
  real_T c2_r_x;
  real_T c2_s_x;
  boolean_T c2_n_b;
  real_T c2_t_x;
  real_T c2_b_apnd;
  real_T c2_u_x;
  real_T c2_b_cdiff;
  int32_T c2_i17;
  real_T c2_c_y;
  real_T c2_l_a;
  real_T c2_o_b;
  real_T c2_v_x;
  real_T c2_w_x;
  boolean_T c2_p_b;
  real_T c2_bnew;
  real_T c2_x_x;
  real_T c2_y_x;
  int32_T c2_i_loop_ub;
  boolean_T c2_n_too_large;
  real_T c2_b_absa;
  int32_T c2_i18;
  int32_T c2_i19;
  real_T c2_ab_x;
  real_T c2_bb_x;
  int32_T c2_n;
  real_T c2_cb_x;
  real_T c2_db_x;
  int32_T c2_j_loop_ub;
  real_T c2_eb_x;
  int32_T c2_i20;
  real_T c2_b_absb;
  boolean_T c2_p;
  int32_T c2_i21;
  int32_T c2_i22;
  real_T c2_b_c;
  real_T c2_m_a;
  const mxArray *c2_d_y = NULL;
  real_T c2_q_b;
  int32_T c2_i23;
  real_T c2_b_thresh;
  real_T c2_n_a;
  const mxArray *c2_e_y = NULL;
  real_T c2_fb_x;
  real_T c2_r_b;
  int32_T c2_k_loop_ub;
  real_T c2_gb_x;
  real_T c2_c_anew;
  int32_T c2_i24;
  int32_T c2_l_loop_ub;
  real_T c2_hb_x;
  real_T c2_ib_x;
  int32_T c2_i25;
  real_T c2_f_y;
  real_T c2_c_ndbl;
  real_T c2_d_d;
  real_T c2_c_apnd;
  int32_T c2_m_loop_ub;
  real_T c2_b_bnew;
  real_T c2_c_cdiff;
  int32_T c2_i26;
  int32_T c2_nm1;
  real_T c2_o_a;
  int32_T c2_p_a;
  boolean_T c2_b_n_too_large;
  real_T c2_s_b;
  int32_T c2_n_loop_ub;
  int32_T c2_tmp_data[6];
  int32_T c2_nm1d2;
  real_T c2_jb_x;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_b_n;
  real_T c2_kb_x;
  real_T c2_lb_x;
  int32_T c2_i29;
  int32_T c2_t_b;
  real_T c2_c_absa;
  int32_T c2_u_b;
  boolean_T c2_b_p;
  real_T c2_mb_x;
  real_T c2_nb_x;
  boolean_T c2_overflow;
  const mxArray *c2_g_y = NULL;
  real_T c2_ob_x;
  int32_T c2_i30;
  real_T c2_c_absb;
  int32_T c2_o_loop_ub;
  const mxArray *c2_h_y = NULL;
  int32_T c2_i31;
  real_T c2_c_c;
  int32_T c2_c_k;
  real_T c2_d1;
  real_T c2_c_thresh;
  int32_T c2_d_k;
  real_T c2_pb_x;
  int32_T c2_i32;
  int32_T c2_v_b;
  int32_T c2_e_k;
  real_T c2_qb_x;
  int32_T c2_i_y;
  real_T c2_kd;
  real_T c2_rb_x;
  int32_T c2_b_nm1;
  real_T c2_j_y;
  int32_T c2_q_a;
  int32_T c2_p_loop_ub;
  int32_T c2_b_nm1d2;
  int32_T c2_i33;
  int32_T c2_i34;
  real_T c2_c_bnew;
  int32_T c2_q_loop_ub;
  static real_T c2_B[8] = { -3.0, -3.0, -3.0, -3.0, 3.0, 3.0, 3.0, 3.0 };

  int32_T c2_w_b;
  boolean_T c2_c_n_too_large;
  int32_T c2_i35;
  int32_T c2_x_b;
  int32_T c2_c_n;
  int32_T c2_r_loop_ub;
  boolean_T c2_b_overflow;
  int32_T c2_i36;
  boolean_T c2_c_p;
  int32_T c2_f_k;
  const mxArray *c2_k_y = NULL;
  int32_T c2_i37;
  const mxArray *c2_l_y = NULL;
  int32_T c2_y_b;
  int32_T c2_g_k;
  int32_T c2_m_y;
  real_T c2_b_kd;
  int32_T c2_c_nm1;
  int32_T c2_r_a;
  int32_T c2_c_nm1d2;
  int32_T c2_i38;
  int32_T c2_ab_b;
  int32_T c2_bb_b;
  boolean_T c2_c_overflow;
  int32_T c2_h_k;
  int32_T c2_cb_b;
  int32_T c2_i_k;
  int32_T c2_n_y;
  real_T c2_c_kd;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_len[0] = 0.0;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_b_i = (real_T)c2_i + 1.0;
    c2_maxNegD[(int32_T)c2_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 + 2.0 *
      (real_T)((int32_T)c2_b_i - 1)));
    c2_minAdjustedDim[(int32_T)c2_b_i - 1] = muDoubleScalarMin(4.0, 4.0 - (-1.0
      + 2.0 * (real_T)((int32_T)c2_b_i - 1)));
    c2_maxIndex = c2_minAdjustedDim[(int32_T)c2_b_i - 1];
    c2_maxIndex += -1.0 + 2.0 * (real_T)((int32_T)c2_b_i - 1);
    if (c2_maxIndex > 4.0) {
      c2_b = true;
    } else {
      c2_b = false;
    }

    if (c2_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_b_y)));
    }

    c2_len[(int32_T)(c2_b_i + 1.0) - 1] = ((c2_len[(int32_T)c2_b_i - 1] +
      c2_minAdjustedDim[(int32_T)c2_b_i - 1]) - c2_maxNegD[(int32_T)c2_b_i - 1])
      + 1.0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aRows, 1, &c2_k_emlrtRTEI);
  c2_dataLen = c2_len[2];
  c2_c_i = c2_aRows->size[0];
  c2_aRows->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_wd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aRows, c2_c_i,
    &c2_k_emlrtRTEI);
  c2_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_aRows->data[c2_i1] = 0;
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_aCols, 1, &c2_l_emlrtRTEI);
  c2_i2 = c2_aCols->size[0];
  c2_aCols->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_vd_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_aCols, c2_i2,
    &c2_l_emlrtRTEI);
  c2_b_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_aCols->data[c2_i3] = 0;
  }

  c2_emxInit_real_T(chartInstance, c2_sp, &c2_aDat, 1, &c2_y_emlrtRTEI);
  c2_i4 = c2_aDat->size[0];
  c2_aDat->size[0] = (int32_T)c2_dataLen;
  c2_st.site = &c2_ae_emlrtRSI;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_aDat, c2_i4,
    &c2_m_emlrtRTEI);
  c2_c_loop_ub = (int32_T)c2_dataLen - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_aDat->data[c2_i5] = 0.0;
  }

  c2_emxInit_real_T1(chartInstance, c2_sp, &c2_idx, 2, &c2_q_emlrtRTEI);
  c2_emxInit_int32_T1(chartInstance, c2_sp, &c2_b_r, 2, &c2_ab_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_x, 1, &c2_w_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_b_idx, 1, &c2_o_emlrtRTEI);
  for (c2_k = 0; c2_k < 2; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_st.site = &c2_o_emlrtRSI;
    c2_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_b_a = c2_a;
    c2_b_b = c2_d;
    if (c2_b_b < c2_b_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_b_x = c2_b_a;
      c2_c_b = muDoubleScalarIsInf(c2_b_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_c_b) {
        c2_guard2 = true;
      } else {
        c2_c_x = c2_b_b;
        c2_d_b = muDoubleScalarIsInf(c2_c_x);
        if (c2_d_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_b_a == c2_b_b) {
          c2_i8 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i8,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_d_x = c2_b_a;
        c2_e_x = c2_d_x;
        c2_e_x = muDoubleScalarFloor(c2_e_x);
        if (c2_e_x == c2_b_a) {
          c2_i9 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i9,
            &c2_n_emlrtRTEI);
          c2_e_loop_ub = (int32_T)muDoubleScalarFloor(c2_b_b - c2_b_a);
          for (c2_i10 = 0; c2_i10 <= c2_e_loop_ub; c2_i10++) {
            c2_idx->data[c2_i10] = c2_b_a + (real_T)c2_i10;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_e_a = c2_b_a;
          c2_f_b = c2_b_b;
          c2_f_a = c2_e_a;
          c2_g_b = c2_f_b;
          c2_anew = c2_f_a;
          c2_g_x = (c2_g_b - c2_f_a) + 0.5;
          c2_ndbl = c2_g_x;
          c2_ndbl = muDoubleScalarFloor(c2_ndbl);
          c2_apnd = c2_f_a + c2_ndbl;
          c2_cdiff = c2_apnd - c2_g_b;
          c2_g_a = c2_f_a;
          c2_j_b = c2_g_b;
          c2_i_x = c2_g_a;
          c2_k_x = c2_i_x;
          c2_m_x = c2_k_x;
          c2_absa = muDoubleScalarAbs(c2_m_x);
          c2_n_x = c2_j_b;
          c2_o_x = c2_n_x;
          c2_p_x = c2_o_x;
          c2_absb = muDoubleScalarAbs(c2_p_x);
          if (c2_absa > c2_absb) {
            c2_c = c2_absa;
          } else {
            c2_c = c2_absb;
          }

          c2_thresh = 4.4408920985006262E-16 * c2_c;
          c2_s_x = c2_cdiff;
          c2_t_x = c2_s_x;
          c2_u_x = c2_t_x;
          c2_c_y = muDoubleScalarAbs(c2_u_x);
          if (c2_c_y < c2_thresh) {
            c2_ndbl++;
            c2_bnew = c2_g_b;
          } else if (c2_cdiff > 0.0) {
            c2_bnew = c2_f_a + (c2_ndbl - 1.0);
          } else {
            c2_ndbl++;
            c2_bnew = c2_apnd;
          }

          c2_n_too_large = (c2_ndbl > 2.147483647E+9);
          if (c2_ndbl >= 0.0) {
            c2_n = (int32_T)muDoubleScalarFloor(c2_ndbl);
          } else {
            c2_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_p = !c2_n_too_large;
          if (!c2_p) {
            c2_d_y = NULL;
            sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_e_y = NULL;
            sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_e_y)));
          }

          c2_i23 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i23,
            &c2_s_emlrtRTEI);
          if (c2_n > 0) {
            c2_idx->data[0] = c2_anew;
            if (c2_n > 1) {
              c2_idx->data[c2_n - 1] = c2_bnew;
              c2_nm1 = c2_n - 1;
              c2_p_a = c2_nm1;
              c2_nm1d2 = c2_div_nzp_s32(chartInstance, c2_p_a, 2, 0, 1U, 0, 0);
              c2_i28 = c2_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_t_b = c2_i28 + 1;
              c2_u_b = c2_t_b;
              if (1 > c2_u_b) {
                c2_overflow = false;
              } else {
                c2_overflow = (c2_u_b > 2147483646);
              }

              if (c2_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_c_k = 1; c2_c_k - 1 <= c2_i28; c2_c_k++) {
                c2_e_k = c2_c_k;
                c2_kd = (real_T)c2_e_k;
                c2_idx->data[c2_e_k] = c2_anew + c2_kd;
                c2_idx->data[(c2_n - c2_e_k) - 1] = c2_bnew - c2_kd;
              }

              c2_v_b = c2_nm1d2;
              c2_i_y = c2_v_b << 1;
              if (c2_i_y == c2_nm1) {
                c2_idx->data[c2_nm1d2] = (c2_anew + c2_bnew) / 2.0;
              } else {
                c2_kd = (real_T)c2_nm1d2;
                c2_idx->data[c2_nm1d2] = c2_anew + c2_kd;
                c2_idx->data[c2_nm1d2 + 1] = c2_bnew - c2_kd;
              }
            }
          }
        }
      }
    }

    c2_i6 = c2_x->size[0];
    c2_x->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i6,
      &c2_o_emlrtRTEI);
    c2_d_loop_ub = c2_idx->size[1] - 1;
    for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
      c2_x->data[c2_i7] = c2_idx->data[c2_i7];
    }

    c2_st.site = &c2_o_emlrtRSI;
    c2_c_a = c2_maxNegD[(int32_T)c2_b_k - 1];
    c2_b_d = c2_minAdjustedDim[(int32_T)c2_b_k - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_d_a = c2_c_a;
    c2_e_b = c2_b_d;
    if (c2_e_b < c2_d_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_f_x = c2_d_a;
      c2_h_b = muDoubleScalarIsInf(c2_f_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_h_b) {
        c2_guard2 = true;
      } else {
        c2_h_x = c2_e_b;
        c2_i_b = muDoubleScalarIsInf(c2_h_x);
        if (c2_i_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_d_a == c2_e_b) {
          c2_i13 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i13,
            &c2_n_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_j_x = c2_d_a;
        c2_l_x = c2_j_x;
        c2_l_x = muDoubleScalarFloor(c2_l_x);
        if (c2_l_x == c2_d_a) {
          c2_i15 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i15,
            &c2_n_emlrtRTEI);
          c2_h_loop_ub = (int32_T)muDoubleScalarFloor(c2_e_b - c2_d_a);
          for (c2_i16 = 0; c2_i16 <= c2_h_loop_ub; c2_i16++) {
            c2_idx->data[c2_i16] = c2_d_a + (real_T)c2_i16;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_h_a = c2_d_a;
          c2_k_b = c2_e_b;
          c2_j_a = c2_h_a;
          c2_l_b = c2_k_b;
          c2_b_anew = c2_j_a;
          c2_q_x = (c2_l_b - c2_j_a) + 0.5;
          c2_b_ndbl = c2_q_x;
          c2_b_ndbl = muDoubleScalarFloor(c2_b_ndbl);
          c2_b_apnd = c2_j_a + c2_b_ndbl;
          c2_b_cdiff = c2_b_apnd - c2_l_b;
          c2_l_a = c2_j_a;
          c2_o_b = c2_l_b;
          c2_w_x = c2_l_a;
          c2_x_x = c2_w_x;
          c2_y_x = c2_x_x;
          c2_b_absa = muDoubleScalarAbs(c2_y_x);
          c2_ab_x = c2_o_b;
          c2_cb_x = c2_ab_x;
          c2_eb_x = c2_cb_x;
          c2_b_absb = muDoubleScalarAbs(c2_eb_x);
          if (c2_b_absa > c2_b_absb) {
            c2_b_c = c2_b_absa;
          } else {
            c2_b_c = c2_b_absb;
          }

          c2_b_thresh = 4.4408920985006262E-16 * c2_b_c;
          c2_fb_x = c2_b_cdiff;
          c2_gb_x = c2_fb_x;
          c2_hb_x = c2_gb_x;
          c2_f_y = muDoubleScalarAbs(c2_hb_x);
          if (c2_f_y < c2_b_thresh) {
            c2_b_ndbl++;
            c2_b_bnew = c2_l_b;
          } else if (c2_b_cdiff > 0.0) {
            c2_b_bnew = c2_j_a + (c2_b_ndbl - 1.0);
          } else {
            c2_b_ndbl++;
            c2_b_bnew = c2_b_apnd;
          }

          c2_b_n_too_large = (c2_b_ndbl > 2.147483647E+9);
          if (c2_b_ndbl >= 0.0) {
            c2_b_n = (int32_T)muDoubleScalarFloor(c2_b_ndbl);
          } else {
            c2_b_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_b_p = !c2_b_n_too_large;
          if (!c2_b_p) {
            c2_g_y = NULL;
            sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_h_y = NULL;
            sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_h_y)));
          }

          c2_i30 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_b_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i30,
            &c2_s_emlrtRTEI);
          if (c2_b_n > 0) {
            c2_idx->data[0] = c2_b_anew;
            if (c2_b_n > 1) {
              c2_idx->data[c2_b_n - 1] = c2_b_bnew;
              c2_b_nm1 = c2_b_n - 1;
              c2_q_a = c2_b_nm1;
              c2_b_nm1d2 = c2_div_nzp_s32(chartInstance, c2_q_a, 2, 0, 1U, 0, 0);
              c2_i34 = c2_b_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_w_b = c2_i34 + 1;
              c2_x_b = c2_w_b;
              if (1 > c2_x_b) {
                c2_b_overflow = false;
              } else {
                c2_b_overflow = (c2_x_b > 2147483646);
              }

              if (c2_b_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_f_k = 1; c2_f_k - 1 <= c2_i34; c2_f_k++) {
                c2_g_k = c2_f_k;
                c2_b_kd = (real_T)c2_g_k;
                c2_idx->data[c2_g_k] = c2_b_anew + c2_b_kd;
                c2_idx->data[(c2_b_n - c2_g_k) - 1] = c2_b_bnew - c2_b_kd;
              }

              c2_y_b = c2_b_nm1d2;
              c2_m_y = c2_y_b << 1;
              if (c2_m_y == c2_b_nm1) {
                c2_idx->data[c2_b_nm1d2] = (c2_b_anew + c2_b_bnew) / 2.0;
              } else {
                c2_b_kd = (real_T)c2_b_nm1d2;
                c2_idx->data[c2_b_nm1d2] = c2_b_anew + c2_b_kd;
                c2_idx->data[c2_b_nm1d2 + 1] = c2_b_bnew - c2_b_kd;
              }
            }
          }
        }
      }
    }

    c2_i11 = c2_b_idx->size[0];
    c2_b_idx->size[0] = c2_idx->size[1];
    c2_st.site = &c2_o_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_b_idx, c2_i11,
      &c2_o_emlrtRTEI);
    c2_f_loop_ub = c2_idx->size[1] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_f_loop_ub; c2_i12++) {
      c2_b_idx->data[c2_i12] = c2_idx->data[c2_i12];
    }

    c2_i_size[0] = c2_x->size[0];
    c2_g_loop_ub = c2_x->size[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_g_loop_ub; c2_i14++) {
      c2_i_data[c2_i14] = c2_b_idx->data[c2_i14];
    }

    c2_st.site = &c2_q_emlrtRSI;
    c2_i_a = c2_len[(int32_T)c2_b_k - 1] + 1.0;
    c2_c_d = c2_len[(int32_T)(c2_b_k + 1.0) - 1];
    c2_b_st.site = &c2_r_emlrtRSI;
    c2_k_a = c2_i_a;
    c2_m_b = c2_c_d;
    if (c2_m_b < c2_k_a) {
      c2_idx->size[0] = 1;
      c2_idx->size[1] = 0;
    } else {
      c2_r_x = c2_k_a;
      c2_n_b = muDoubleScalarIsInf(c2_r_x);
      c2_guard1 = false;
      c2_guard2 = false;
      if (c2_n_b) {
        c2_guard2 = true;
      } else {
        c2_v_x = c2_m_b;
        c2_p_b = muDoubleScalarIsInf(c2_v_x);
        if (c2_p_b) {
          c2_guard2 = true;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard2) {
        if (c2_k_a == c2_m_b) {
          c2_i18 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i18,
            &c2_q_emlrtRTEI);
          c2_idx->data[0] = rtNaN;
        } else {
          c2_guard1 = true;
        }
      }

      if (c2_guard1) {
        c2_bb_x = c2_k_a;
        c2_db_x = c2_bb_x;
        c2_db_x = muDoubleScalarFloor(c2_db_x);
        if (c2_db_x == c2_k_a) {
          c2_i21 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a) + 1;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_b_st, c2_idx, c2_i21,
            &c2_q_emlrtRTEI);
          c2_k_loop_ub = (int32_T)muDoubleScalarFloor(c2_m_b - c2_k_a);
          for (c2_i24 = 0; c2_i24 <= c2_k_loop_ub; c2_i24++) {
            c2_idx->data[c2_i24] = c2_k_a + (real_T)c2_i24;
          }
        } else {
          c2_c_st.site = &c2_s_emlrtRSI;
          c2_m_a = c2_k_a;
          c2_q_b = c2_m_b;
          c2_n_a = c2_m_a;
          c2_r_b = c2_q_b;
          c2_c_anew = c2_n_a;
          c2_ib_x = (c2_r_b - c2_n_a) + 0.5;
          c2_c_ndbl = c2_ib_x;
          c2_c_ndbl = muDoubleScalarFloor(c2_c_ndbl);
          c2_c_apnd = c2_n_a + c2_c_ndbl;
          c2_c_cdiff = c2_c_apnd - c2_r_b;
          c2_o_a = c2_n_a;
          c2_s_b = c2_r_b;
          c2_jb_x = c2_o_a;
          c2_kb_x = c2_jb_x;
          c2_lb_x = c2_kb_x;
          c2_c_absa = muDoubleScalarAbs(c2_lb_x);
          c2_mb_x = c2_s_b;
          c2_nb_x = c2_mb_x;
          c2_ob_x = c2_nb_x;
          c2_c_absb = muDoubleScalarAbs(c2_ob_x);
          if (c2_c_absa > c2_c_absb) {
            c2_c_c = c2_c_absa;
          } else {
            c2_c_c = c2_c_absb;
          }

          c2_c_thresh = 4.4408920985006262E-16 * c2_c_c;
          c2_pb_x = c2_c_cdiff;
          c2_qb_x = c2_pb_x;
          c2_rb_x = c2_qb_x;
          c2_j_y = muDoubleScalarAbs(c2_rb_x);
          if (c2_j_y < c2_c_thresh) {
            c2_c_ndbl++;
            c2_c_bnew = c2_r_b;
          } else if (c2_c_cdiff > 0.0) {
            c2_c_bnew = c2_n_a + (c2_c_ndbl - 1.0);
          } else {
            c2_c_ndbl++;
            c2_c_bnew = c2_c_apnd;
          }

          c2_c_n_too_large = (c2_c_ndbl > 2.147483647E+9);
          if (c2_c_ndbl >= 0.0) {
            c2_c_n = (int32_T)muDoubleScalarFloor(c2_c_ndbl);
          } else {
            c2_c_n = 0;
          }

          c2_d_st.site = &c2_t_emlrtRSI;
          c2_c_p = !c2_c_n_too_large;
          if (!c2_c_p) {
            c2_k_y = NULL;
            sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            c2_l_y = NULL;
            sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2,
              1, 21), false);
            sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_k_y, 14, sf_mex_call
                        (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
              "message", 1U, 1U, 14, c2_l_y)));
          }

          c2_i37 = c2_idx->size[0] * c2_idx->size[1];
          c2_idx->size[0] = 1;
          c2_idx->size[1] = c2_c_n;
          c2_emxEnsureCapacity_real_T1(chartInstance, &c2_c_st, c2_idx, c2_i37,
            &c2_s_emlrtRTEI);
          if (c2_c_n > 0) {
            c2_idx->data[0] = c2_c_anew;
            if (c2_c_n > 1) {
              c2_idx->data[c2_c_n - 1] = c2_c_bnew;
              c2_c_nm1 = c2_c_n - 1;
              c2_r_a = c2_c_nm1;
              c2_c_nm1d2 = c2_div_nzp_s32(chartInstance, c2_r_a, 2, 0, 1U, 0, 0);
              c2_i38 = c2_c_nm1d2 - 2;
              c2_d_st.site = &c2_u_emlrtRSI;
              c2_ab_b = c2_i38 + 1;
              c2_bb_b = c2_ab_b;
              if (1 > c2_bb_b) {
                c2_c_overflow = false;
              } else {
                c2_c_overflow = (c2_bb_b > 2147483646);
              }

              if (c2_c_overflow) {
                c2_e_st.site = &c2_v_emlrtRSI;
                c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
              }

              for (c2_h_k = 1; c2_h_k - 1 <= c2_i38; c2_h_k++) {
                c2_i_k = c2_h_k;
                c2_c_kd = (real_T)c2_i_k;
                c2_idx->data[c2_i_k] = c2_c_anew + c2_c_kd;
                c2_idx->data[(c2_c_n - c2_i_k) - 1] = c2_c_bnew - c2_c_kd;
              }

              c2_cb_b = c2_c_nm1d2;
              c2_n_y = c2_cb_b << 1;
              if (c2_n_y == c2_c_nm1) {
                c2_idx->data[c2_c_nm1d2] = (c2_c_anew + c2_c_bnew) / 2.0;
              } else {
                c2_c_kd = (real_T)c2_c_nm1d2;
                c2_idx->data[c2_c_nm1d2] = c2_c_anew + c2_c_kd;
                c2_idx->data[c2_c_nm1d2 + 1] = c2_c_bnew - c2_c_kd;
              }
            }
          }
        }
      }
    }

    c2_i17 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_ce_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i17,
      &c2_r_emlrtRTEI);
    c2_i_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
      c2_b_r->data[c2_i19] = (int32_T)c2_idx->data[c2_i19];
    }

    c2_j_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_j_loop_ub; c2_i20++) {
      c2_aRows->data[c2_b_r->data[c2_i20] - 1] = (int32_T)c2_i_data[c2_i20];
    }

    c2_i22 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_be_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i22,
      &c2_t_emlrtRTEI);
    c2_l_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i25 = 0; c2_i25 <= c2_l_loop_ub; c2_i25++) {
      c2_b_r->data[c2_i25] = (int32_T)c2_idx->data[c2_i25];
    }

    c2_d_d = -1.0 + 2.0 * (real_T)((int32_T)c2_b_k - 1);
    c2_m_loop_ub = c2_i_size[0] - 1;
    for (c2_i26 = 0; c2_i26 <= c2_m_loop_ub; c2_i26++) {
      c2_tmp_data[c2_i26] = (int32_T)(c2_i_data[c2_i26] + c2_d_d);
    }

    c2_n_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i27 = 0; c2_i27 <= c2_n_loop_ub; c2_i27++) {
      c2_aCols->data[c2_b_r->data[c2_i27] - 1] = c2_tmp_data[c2_i27];
    }

    c2_i29 = c2_b_r->size[0] * c2_b_r->size[1];
    c2_b_r->size[0] = 1;
    c2_b_r->size[1] = c2_idx->size[1];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_int32_T1(chartInstance, &c2_st, c2_b_r, c2_i29,
      &c2_v_emlrtRTEI);
    c2_o_loop_ub = c2_idx->size[0] * c2_idx->size[1] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_o_loop_ub; c2_i31++) {
      c2_b_r->data[c2_i31] = (int32_T)c2_idx->data[c2_i31];
    }

    c2_d1 = -1.0 + 2.0 * (real_T)((int32_T)c2_b_k - 1);
    c2_d_k = (int32_T)c2_b_k - 1;
    c2_i32 = c2_x->size[0];
    c2_x->size[0] = c2_i_size[0];
    c2_st.site = &c2_yd_emlrtRSI;
    c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_x, c2_i32,
      &c2_w_emlrtRTEI);
    c2_p_loop_ub = c2_i_size[0] - 1;
    for (c2_i33 = 0; c2_i33 <= c2_p_loop_ub; c2_i33++) {
      c2_x->data[c2_i33] = c2_B[((int32_T)(c2_i_data[c2_i33] + c2_d1) + (c2_d_k <<
        2)) - 1];
    }

    c2_q_loop_ub = c2_x->size[0] - 1;
    for (c2_i35 = 0; c2_i35 <= c2_q_loop_ub; c2_i35++) {
      c2_i_data[c2_i35] = c2_x->data[c2_i35];
    }

    c2_r_loop_ub = c2_b_r->size[0] * c2_b_r->size[1] - 1;
    for (c2_i36 = 0; c2_i36 <= c2_r_loop_ub; c2_i36++) {
      c2_aDat->data[c2_b_r->data[c2_i36] - 1] = c2_i_data[c2_i36];
    }
  }

  c2_emxFree_real_T(chartInstance, &c2_b_idx);
  c2_emxFree_real_T(chartInstance, &c2_x);
  c2_emxFree_int32_T(chartInstance, &c2_b_r);
  c2_emxFree_real_T(chartInstance, &c2_idx);
  c2_st.site = &c2_p_emlrtRSI;
  c2_b_sparse(chartInstance, &c2_st, c2_aRows, c2_aCols, c2_aDat, c2_res1);
  c2_emxFree_real_T(chartInstance, &c2_aDat);
  c2_emxFree_int32_T(chartInstance, &c2_aCols);
  c2_emxFree_int32_T(chartInstance, &c2_aRows);
}

static void c2_c_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this)
{
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_qb_emlrtRTEI);
  c2_g_sparse_parenAssign(chartInstance, c2_sp, c2_b_this);
}

static void c2_b_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs, c2_coder_internal_sparse *c2_b_this)
{
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_rb_emlrtRTEI);
  c2_d_realloc(chartInstance, c2_sp, c2_b_this, c2_numAllocRequested, c2_ub1,
               c2_lb2, c2_ub2, c2_offs);
}

static void c2_d_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_coder_internal_sparse *c2_b_this)
{
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_qb_emlrtRTEI);
  c2_h_sparse_parenAssign(chartInstance, c2_sp, c2_b_this);
}

static void c2_c_sparse_validateNumericIndex(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  int32_T c2_k;
  real_T c2_b_k;
  real_T c2_idxk;
  real_T c2_x;
  real_T c2_b_x;
  boolean_T c2_b;
  real_T c2_c_x;
  boolean_T c2_b_b;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 3; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_idxk = 2.0 + (real_T)((int32_T)c2_b_k - 1);
    c2_x = c2_idxk;
    c2_b_x = c2_x;
    c2_b_x = muDoubleScalarFloor(c2_b_x);
    if (c2_b_x == c2_idxk) {
      c2_c_x = c2_idxk;
      c2_b_b = muDoubleScalarIsInf(c2_c_x);
      if (!c2_b_b) {
        c2_b = true;
      } else {
        c2_b = false;
      }
    } else {
      c2_b = false;
    }

    if (!c2_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      sf_mex_call(c2_sp, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call(c2_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c2_sp, "message", 1U, 1U, 14,
        c2_b_y)));
    }
  }
}

static void c2_b_sparse_mldivide(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_A,
  c2_coder_internal_sparse c2_b, c2_coder_internal_sparse *c2_y)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  c2_coder_internal_sparse c2_b_A;
  c2_coder_internal_sparse c2_b_b;
  int32_T c2_n;
  cs_di* c2_cxA;
  cs_dis * c2_S;
  cs_din * c2_N;
  c2_coder_internal_sparse c2_s;
  c2_emxArray_int32_T *c2_b_y;
  c2_emxArray_real_T *c2_c_y;
  int32_T c2_i;
  int32_T c2_b_i;
  int32_T c2_varargin_2;
  int32_T c2_c;
  int32_T c2_b_c;
  int32_T c2_idx;
  int32_T c2_x;
  int32_T c2_b_x;
  boolean_T c2_c_b;
  const mxArray *c2_d_y = NULL;
  int32_T c2_nd;
  const mxArray *c2_e_y = NULL;
  boolean_T c2_b1;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  int32_T c2_outIdx;
  int32_T c2_colstart;
  real_T c2_tmp[4];
  int32_T c2_colend;
  int32_T c2_colNnz;
  int32_T c2_b_varargin_2;
  int32_T c2_d_b;
  int32_T c2_e_b;
  int32_T c2_c_c;
  boolean_T c2_overflow;
  int32_T c2_d_c;
  int32_T c2_b_idx;
  int32_T c2_c_x;
  int32_T c2_k;
  int32_T c2_d_x;
  boolean_T c2_b2;
  int32_T c2_b_k;
  const mxArray *c2_h_y = NULL;
  int32_T c2_b_n;
  real_T c2_c_n;
  const mxArray *c2_i_y = NULL;
  int32_T c2_nz;
  int32_T c2_nzColAlloc;
  int32_T c2_c_idx;
  int32_T c2_c_i;
  real_T c2_b_tmp[4];
  int32_T c2_nzRhs;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  int32_T c2_extraCol;
  int32_T c2_b_outIdx;
  real_T c2_d_n;
  int32_T c2_extraSpace;
  int32_T c2_numAlloc;
  int32_T c2_extraAlloc;
  int32_T c2_start;
  int32_T c2_outstart;
  int32_T c2_num2Alloc;
  int32_T c2_instart;
  int32_T c2_b_outstart;
  int32_T c2_nelem;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_col;
  int32_T c2_i1;
  int32_T c2_offs;
  int32_T c2_i2;
  int32_T c2_b_col;
  int32_T c2_i3;
  int32_T c2_b_offs;
  int32_T c2_c_k;
  int32_T c2_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_d_k;
  int32_T c2_i6;
  int32_T c2_c_outstart;
  int32_T c2_c_instart;
  int32_T c2_d_outstart;
  int32_T c2_c_nelem;
  int32_T c2_d_instart;
  int32_T c2_i7;
  int32_T c2_d_nelem;
  int32_T c2_i8;
  int32_T c2_c_loop_ub;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_e_loop_ub;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_e_outstart;
  int32_T c2_e_instart;
  int32_T c2_f_outstart;
  int32_T c2_e_nelem;
  int32_T c2_f_instart;
  int32_T c2_i15;
  int32_T c2_f_nelem;
  int32_T c2_i16;
  int32_T c2_g_loop_ub;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_b_A,
    &c2_sb_emlrtRTEI);
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_b_b,
    &c2_tb_emlrtRTEI);
  c2_st.site = &c2_nc_emlrtRSI;
  c2_b_st.site = &c2_oc_emlrtRSI;
  c2_c_st.site = &c2_pc_emlrtRSI;
  c2_d_st.site = &c2_vc_emlrtRSI;
  c2_n = c2_A.colidx->data[c2_A.colidx->size[0] - 1];
  c2_cxA = makeCXSparseMatrix(c2_n - 1, 4, 4, &c2_A.colidx->data[0],
    &c2_A.rowidx->data[0], &c2_A.d->data[0]);
  c2_S = cs_di_sqr(2, c2_cxA, 0);
  c2_N = cs_di_lu(c2_cxA, c2_S, 1);
  cs_di_spfree(c2_cxA);
  if (c2_N == NULL) {
    c2_c_st.site = &c2_qc_emlrtRSI;
    c2_warning(chartInstance, &c2_c_st);
    cs_di_sfree(c2_S);
    cs_di_nfree(c2_N);
    c2_emxCopyStruct_coder_internal_sp(chartInstance, &c2_b_st, &c2_b_A, &c2_A,
      &c2_sb_emlrtRTEI);
    c2_emxCopyStruct_coder_internal_sp(chartInstance, &c2_b_st, &c2_b_b, &c2_b,
      &c2_tb_emlrtRTEI);
    c2_c_st.site = &c2_rc_emlrtRSI;
    c2_b_CXSparseAPI_iteratedQR(chartInstance, &c2_c_st, c2_b_A, c2_b_b, c2_y);
  } else {
    c2_c_st.site = &c2_sc_emlrtRSI;
    c2_c_sparse_spallocLike(chartInstance, &c2_c_st, c2_y);
    c2_emxInitStruct_coder_internal_sp(chartInstance, &c2_b_st, &c2_s,
      &c2_vb_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, &c2_b_st, &c2_b_y, 1, &c2_c_emlrtRTEI);
    c2_emxInit_real_T(chartInstance, &c2_b_st, &c2_c_y, 1, &c2_e_emlrtRTEI);
    for (c2_i = 0; c2_i < 4; c2_i++) {
      c2_b_i = c2_i + 1;
      c2_c_st.site = &c2_tc_emlrtRSI;
      c2_varargin_2 = c2_b_i;
      c2_d_st.site = &c2_cd_emlrtRSI;
      c2_c = c2_varargin_2;
      c2_e_st.site = &c2_dd_emlrtRSI;
      c2_b_c = c2_c;
      c2_f_st.site = &c2_ed_emlrtRSI;
      c2_idx = c2_b_c;
      c2_x = c2_idx;
      c2_b_x = c2_x;
      if (c2_b_x == c2_idx) {
        c2_c_b = true;
      } else {
        c2_c_b = false;
      }

      if (!c2_c_b) {
        c2_d_y = NULL;
        sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c2_f_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call
                    (&c2_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_f_st,
          "message", 1U, 1U, 14, c2_e_y)));
      }

      c2_nd = c2_b.colidx->data[c2_b_c] - c2_b.colidx->data[c2_b_c - 1];
      if (c2_nd <= 4) {
        c2_b1 = true;
      } else {
        c2_b1 = false;
      }

      if (!c2_b1) {
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c2_g_y = NULL;
        sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c2_e_st, "error", 0U, 2U, 14, c2_f_y, 14, sf_mex_call
                    (&c2_e_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_e_st,
          "message", 1U, 1U, 14, c2_g_y)));
      }

      c2_f_st.site = &c2_fd_emlrtRSI;
      c2_b_sparse_spallocLike(chartInstance, &c2_f_st, c2_nd, &c2_s);
      if (c2_nd != 0) {
        c2_outIdx = 0;
        c2_colstart = c2_b.colidx->data[c2_b_c - 1] - 2;
        c2_colend = c2_b.colidx->data[c2_b_c];
        c2_colNnz = (c2_colend - c2_colstart) - 2;
        c2_f_st.site = &c2_gd_emlrtRSI;
        c2_d_b = c2_colNnz;
        c2_e_b = c2_d_b;
        if (1 > c2_e_b) {
          c2_overflow = false;
        } else {
          c2_overflow = (c2_e_b > 2147483646);
        }

        if (c2_overflow) {
          c2_g_st.site = &c2_v_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_g_st);
        }

        for (c2_k = 1; c2_k - 1 < c2_colNnz; c2_k++) {
          c2_b_k = c2_k;
          c2_s.d->data[c2_outIdx] = c2_b.d->data[c2_colstart + c2_b_k];
          c2_s.rowidx->data[c2_outIdx] = c2_b.rowidx->data[c2_colstart + c2_b_k];
          c2_outIdx++;
        }

        c2_s.colidx->data[1] = c2_s.colidx->data[0] + c2_colNnz;
      }

      c2_c_st.site = &c2_tc_emlrtRSI;
      c2_b_sparse_full(chartInstance, &c2_c_st, c2_s, c2_tmp);
      solve_from_lu_di(c2_N, c2_S, (double *)&c2_tmp[0], 4);
      c2_c_st.site = &c2_uc_emlrtRSI;
      c2_b_varargin_2 = c2_b_i;
      c2_d_st.site = &c2_cc_emlrtRSI;
      c2_c_c = c2_b_varargin_2;
      c2_e_st.site = &c2_kd_emlrtRSI;
      c2_d_c = c2_c_c;
      c2_f_st.site = &c2_ld_emlrtRSI;
      c2_b_idx = c2_d_c;
      c2_c_x = c2_b_idx;
      c2_d_x = c2_c_x;
      if (c2_d_x == c2_b_idx) {
        c2_b2 = true;
      } else {
        c2_b2 = false;
      }

      if (!c2_b2) {
        c2_h_y = NULL;
        sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c2_f_st, "error", 0U, 2U, 14, c2_h_y, 14, sf_mex_call
                    (&c2_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_f_st,
          "message", 1U, 1U, 14, c2_i_y)));
      }

      c2_b_n = c2_y->colidx->data[c2_y->colidx->size[0] - 1];
      c2_c_n = (real_T)(c2_b_n - 1);
      c2_nz = (int32_T)c2_c_n;
      c2_nzColAlloc = c2_y->colidx->data[c2_d_c] - c2_y->colidx->data[c2_d_c - 1];
      c2_c_idx = c2_y->colidx->data[c2_d_c - 1];
      for (c2_c_i = 0; c2_c_i < 4; c2_c_i++) {
        c2_b_tmp[c2_c_i] = c2_tmp[c2_c_i];
      }

      c2_f_st.site = &c2_md_emlrtRSI;
      c2_nzRhs = c2_b_countNumnzInColumn(chartInstance, c2_b_tmp, c2_r);
      if (c2_nzColAlloc < c2_nzRhs) {
        c2_extraCol = c2_nzRhs - c2_nzColAlloc;
        c2_d_n = (real_T)c2_y->maxnz;
        c2_numAlloc = (int32_T)c2_d_n;
        c2_extraAlloc = c2_numAlloc - c2_nz;
        c2_start = c2_y->colidx->data[c2_d_c];
        if (c2_extraAlloc < c2_extraCol) {
          c2_num2Alloc = c2_extraCol - c2_extraAlloc;
          c2_f_st.site = &c2_nd_emlrtRSI;
          c2_d_realloc(chartInstance, &c2_f_st, c2_y, c2_numAlloc + c2_num2Alloc,
                       c2_c_idx - 1, c2_start, c2_nz, c2_extraCol);
        } else {
          c2_f_st.site = &c2_od_emlrtRSI;
          c2_b_outstart = c2_start + c2_extraCol;
          c2_b_instart = c2_start;
          c2_b_nelem = (c2_nz - c2_start) + 1;
          if (!(c2_b_nelem <= 0)) {
            c2_g_st.site = &c2_lc_emlrtRSI;
            c2_i2 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_y->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_b_y, c2_i2,
              &c2_c_emlrtRTEI);
            c2_b_loop_ub = c2_y->rowidx->size[0] - 1;
            for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
              c2_b_y->data[c2_i6] = c2_y->rowidx->data[c2_i6];
            }

            c2_d_outstart = c2_b_outstart - 1;
            c2_d_instart = c2_b_instart - 1;
            c2_d_nelem = c2_b_nelem;
            c2_i8 = c2_y->rowidx->size[0];
            c2_y->rowidx->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_y->rowidx,
              c2_i8, &c2_ub_emlrtRTEI);
            c2_d_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
              c2_y->rowidx->data[c2_i10] = c2_b_y->data[c2_i10];
            }

            memmove((void *)&c2_y->rowidx->data[c2_d_outstart], (void *)
                    &c2_y->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                     c2_d_nelem * sizeof(int32_T)));
            c2_g_st.site = &c2_mc_emlrtRSI;
            c2_i12 = c2_c_y->size[0];
            c2_c_y->size[0] = c2_y->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_c_y, c2_i12,
              &c2_e_emlrtRTEI);
            c2_f_loop_ub = c2_y->d->size[0] - 1;
            for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
              c2_c_y->data[c2_i14] = c2_y->d->data[c2_i14];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i16 = c2_y->d->size[0];
            c2_y->d->size[0] = c2_c_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_y->d, c2_i16,
              &c2_ub_emlrtRTEI);
            c2_h_loop_ub = c2_c_y->size[0] - 1;
            for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
              c2_y->d->data[c2_i18] = c2_c_y->data[c2_i18];
            }

            memmove((void *)&c2_y->d->data[c2_f_outstart], (void *)&c2_y->
                    d->data[c2_f_instart], (uint32_T)((size_t)c2_f_nelem *
                     sizeof(real_T)));
          }
        }

        c2_rhsIter = c2_r;
        c2_d_copyNonzeroValues(chartInstance, c2_y, &c2_rhsIter, c2_c_idx,
          c2_tmp);
        c2_b_col = c2_d_c + 1;
        c2_b_offs = c2_extraCol;
        c2_i4 = c2_b_col;
        for (c2_d_k = c2_i4 - 1; c2_d_k + 1 < 6; c2_d_k++) {
          c2_y->colidx->data[c2_d_k] += c2_b_offs;
        }
      } else {
        c2_rhsIter = c2_r;
        c2_b_outIdx = c2_d_copyNonzeroValues(chartInstance, c2_y, &c2_rhsIter,
          c2_c_idx, c2_tmp);
        c2_extraSpace = c2_nzColAlloc - c2_nzRhs;
        if (c2_extraSpace > 0) {
          c2_start = c2_y->colidx->data[c2_d_c];
          c2_f_st.site = &c2_pd_emlrtRSI;
          c2_outstart = c2_b_outIdx;
          c2_instart = c2_start;
          c2_nelem = (c2_nz - c2_start) + 1;
          if (!(c2_nelem <= 0)) {
            c2_g_st.site = &c2_lc_emlrtRSI;
            c2_i1 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_y->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_b_y, c2_i1,
              &c2_c_emlrtRTEI);
            c2_loop_ub = c2_y->rowidx->size[0] - 1;
            for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
              c2_b_y->data[c2_i5] = c2_y->rowidx->data[c2_i5];
            }

            c2_c_outstart = c2_outstart - 1;
            c2_c_instart = c2_instart - 1;
            c2_c_nelem = c2_nelem;
            c2_i7 = c2_y->rowidx->size[0];
            c2_y->rowidx->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_g_st, c2_y->rowidx,
              c2_i7, &c2_ub_emlrtRTEI);
            c2_c_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i9 = 0; c2_i9 <= c2_c_loop_ub; c2_i9++) {
              c2_y->rowidx->data[c2_i9] = c2_b_y->data[c2_i9];
            }

            memmove((void *)&c2_y->rowidx->data[c2_c_outstart], (void *)
                    &c2_y->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                     c2_c_nelem * sizeof(int32_T)));
            c2_g_st.site = &c2_mc_emlrtRSI;
            c2_i11 = c2_c_y->size[0];
            c2_c_y->size[0] = c2_y->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_c_y, c2_i11,
              &c2_e_emlrtRTEI);
            c2_e_loop_ub = c2_y->d->size[0] - 1;
            for (c2_i13 = 0; c2_i13 <= c2_e_loop_ub; c2_i13++) {
              c2_c_y->data[c2_i13] = c2_y->d->data[c2_i13];
            }

            c2_e_outstart = c2_outstart - 1;
            c2_e_instart = c2_instart - 1;
            c2_e_nelem = c2_nelem;
            c2_i15 = c2_y->d->size[0];
            c2_y->d->size[0] = c2_c_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_g_st, c2_y->d, c2_i15,
              &c2_ub_emlrtRTEI);
            c2_g_loop_ub = c2_c_y->size[0] - 1;
            for (c2_i17 = 0; c2_i17 <= c2_g_loop_ub; c2_i17++) {
              c2_y->d->data[c2_i17] = c2_c_y->data[c2_i17];
            }

            memmove((void *)&c2_y->d->data[c2_e_outstart], (void *)&c2_y->
                    d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem *
                     sizeof(real_T)));
          }

          c2_col = c2_d_c + 1;
          c2_offs = c2_extraSpace;
          c2_i3 = c2_col;
          for (c2_c_k = c2_i3 - 1; c2_c_k + 1 < 6; c2_c_k++) {
            c2_y->colidx->data[c2_c_k] -= c2_offs;
          }
        }
      }
    }

    c2_emxFree_real_T(chartInstance, &c2_c_y);
    c2_emxFree_int32_T(chartInstance, &c2_b_y);
    c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_s);
    cs_di_sfree(c2_S);
    cs_di_nfree(c2_N);
  }

  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_b_b);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_b_A);
}

static void c2_b_CXSparseAPI_iteratedQR(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_sparse c2_A,
  c2_coder_internal_sparse c2_b, c2_coder_internal_sparse *c2_out)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  int32_T c2_n;
  cs_di* c2_cxA;
  cs_dis * c2_S;
  cs_din * c2_N;
  real_T c2_tol;
  c2_coder_internal_sparse c2_s;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  int32_T c2_i;
  real_T c2_b_i;
  real_T c2_varargin_2;
  real_T c2_c;
  real_T c2_b_c;
  real_T c2_idx;
  real_T c2_x;
  real_T c2_b_x;
  boolean_T c2_b_b;
  real_T c2_c_x;
  boolean_T c2_c_b;
  const mxArray *c2_c_y = NULL;
  int32_T c2_col;
  int32_T c2_nd;
  const mxArray *c2_d_y = NULL;
  boolean_T c2_b1;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  int32_T c2_outIdx;
  int32_T c2_colstart;
  real_T c2_outBuff[4];
  int32_T c2_colend;
  int32_T c2_colNnz;
  real_T c2_b_varargin_2;
  int32_T c2_d_b;
  int32_T c2_e_b;
  real_T c2_c_c;
  boolean_T c2_overflow;
  real_T c2_d_c;
  real_T c2_b_idx;
  real_T c2_d_x;
  int32_T c2_k;
  real_T c2_e_x;
  int32_T c2_b_k;
  boolean_T c2_b2;
  real_T c2_f_x;
  boolean_T c2_f_b;
  const mxArray *c2_g_y = NULL;
  int32_T c2_b_col;
  int32_T c2_b_n;
  const mxArray *c2_h_y = NULL;
  real_T c2_c_n;
  int32_T c2_nz;
  int32_T c2_nzColAlloc;
  int32_T c2_c_idx;
  int32_T c2_c_i;
  real_T c2_b_outBuff[4];
  int32_T c2_nzRhs;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  int32_T c2_extraCol;
  int32_T c2_b_outIdx;
  real_T c2_d_n;
  int32_T c2_extraSpace;
  int32_T c2_numAlloc;
  int32_T c2_extraAlloc;
  int32_T c2_start;
  int32_T c2_outstart;
  int32_T c2_num2Alloc;
  int32_T c2_instart;
  int32_T c2_b_outstart;
  int32_T c2_nelem;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_c_col;
  int32_T c2_i1;
  int32_T c2_offs;
  int32_T c2_i2;
  int32_T c2_d_col;
  int32_T c2_i3;
  int32_T c2_b_offs;
  int32_T c2_c_k;
  int32_T c2_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_d_k;
  int32_T c2_i6;
  int32_T c2_c_outstart;
  int32_T c2_c_instart;
  int32_T c2_d_outstart;
  int32_T c2_c_nelem;
  int32_T c2_d_instart;
  int32_T c2_i7;
  int32_T c2_d_nelem;
  int32_T c2_i8;
  int32_T c2_c_loop_ub;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_e_loop_ub;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_e_outstart;
  int32_T c2_e_instart;
  int32_T c2_f_outstart;
  int32_T c2_e_nelem;
  int32_T c2_f_instart;
  int32_T c2_i15;
  int32_T c2_f_nelem;
  int32_T c2_i16;
  int32_T c2_g_loop_ub;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_wc_emlrtRSI;
  c2_b_st.site = &c2_vc_emlrtRSI;
  c2_n = c2_A.colidx->data[c2_A.colidx->size[0] - 1];
  c2_cxA = makeCXSparseMatrix(c2_n - 1, 4, 4, &c2_A.colidx->data[0],
    &c2_A.rowidx->data[0], &c2_A.d->data[0]);
  c2_S = cs_di_sqr(2, c2_cxA, 1);
  c2_N = cs_di_qr(c2_cxA, c2_S);
  cs_di_spfree(c2_cxA);
  qr_rank_di(c2_N, &c2_tol);
  c2_st.site = &c2_xc_emlrtRSI;
  c2_c_sparse_spallocLike(chartInstance, &c2_st, c2_out);
  c2_emxInitStruct_coder_internal_sp(chartInstance, c2_sp, &c2_s,
    &c2_xb_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_b_y, 1, &c2_e_emlrtRTEI);
  for (c2_i = 0; c2_i < 4; c2_i++) {
    c2_b_i = (real_T)c2_i + 1.0;
    c2_st.site = &c2_yc_emlrtRSI;
    c2_varargin_2 = c2_b_i;
    c2_b_st.site = &c2_cd_emlrtRSI;
    c2_c = c2_varargin_2;
    c2_c_st.site = &c2_dd_emlrtRSI;
    c2_b_c = c2_c;
    c2_d_st.site = &c2_ed_emlrtRSI;
    c2_idx = c2_b_c;
    c2_x = c2_idx;
    c2_b_x = c2_x;
    c2_b_x = muDoubleScalarFloor(c2_b_x);
    if (c2_b_x == c2_idx) {
      c2_c_x = c2_idx;
      c2_c_b = muDoubleScalarIsInf(c2_c_x);
      if (!c2_c_b) {
        c2_b_b = true;
      } else {
        c2_b_b = false;
      }
    } else {
      c2_b_b = false;
    }

    if (!c2_b_b) {
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_c_y, 14, sf_mex_call
                  (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
        "message", 1U, 1U, 14, c2_d_y)));
    }

    c2_col = (int32_T)c2_b_c;
    c2_nd = c2_b.colidx->data[c2_col] - c2_b.colidx->data[c2_col - 1];
    if (c2_nd <= 4) {
      c2_b1 = true;
    } else {
      c2_b1 = false;
    }

    if (!c2_b1) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_c_st, "error", 0U, 2U, 14, c2_e_y, 14, sf_mex_call
                  (&c2_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_c_st,
        "message", 1U, 1U, 14, c2_f_y)));
    }

    c2_d_st.site = &c2_fd_emlrtRSI;
    c2_b_sparse_spallocLike(chartInstance, &c2_d_st, c2_nd, &c2_s);
    if (c2_nd != 0) {
      c2_outIdx = 0;
      c2_colstart = c2_b.colidx->data[c2_col - 1] - 2;
      c2_colend = c2_b.colidx->data[c2_col];
      c2_colNnz = (c2_colend - c2_colstart) - 2;
      c2_d_st.site = &c2_gd_emlrtRSI;
      c2_d_b = c2_colNnz;
      c2_e_b = c2_d_b;
      if (1 > c2_e_b) {
        c2_overflow = false;
      } else {
        c2_overflow = (c2_e_b > 2147483646);
      }

      if (c2_overflow) {
        c2_e_st.site = &c2_v_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_e_st);
      }

      for (c2_k = 1; c2_k - 1 < c2_colNnz; c2_k++) {
        c2_b_k = c2_k;
        c2_s.d->data[c2_outIdx] = c2_b.d->data[c2_colstart + c2_b_k];
        c2_s.rowidx->data[c2_outIdx] = c2_b.rowidx->data[c2_colstart + c2_b_k];
        c2_outIdx++;
      }

      c2_s.colidx->data[1] = c2_s.colidx->data[0] + c2_colNnz;
    }

    c2_st.site = &c2_yc_emlrtRSI;
    c2_b_sparse_full(chartInstance, &c2_st, c2_s, c2_outBuff);
    solve_from_qr_di(c2_N, c2_S, (double *)&c2_outBuff[0], 4, 4);
    c2_st.site = &c2_ad_emlrtRSI;
    c2_b_varargin_2 = c2_b_i;
    c2_b_st.site = &c2_cc_emlrtRSI;
    c2_c_c = c2_b_varargin_2;
    c2_c_st.site = &c2_kd_emlrtRSI;
    c2_d_c = c2_c_c;
    c2_d_st.site = &c2_ld_emlrtRSI;
    c2_b_idx = c2_d_c;
    c2_d_x = c2_b_idx;
    c2_e_x = c2_d_x;
    c2_e_x = muDoubleScalarFloor(c2_e_x);
    if (c2_e_x == c2_b_idx) {
      c2_f_x = c2_b_idx;
      c2_f_b = muDoubleScalarIsInf(c2_f_x);
      if (!c2_f_b) {
        c2_b2 = true;
      } else {
        c2_b2 = false;
      }
    } else {
      c2_b2 = false;
    }

    if (!c2_b2) {
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      sf_mex_call(&c2_d_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call
                  (&c2_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_d_st,
        "message", 1U, 1U, 14, c2_h_y)));
    }

    c2_b_col = (int32_T)c2_d_c;
    c2_b_n = c2_out->colidx->data[c2_out->colidx->size[0] - 1];
    c2_c_n = (real_T)(c2_b_n - 1);
    c2_nz = (int32_T)c2_c_n;
    c2_nzColAlloc = c2_out->colidx->data[c2_b_col] - c2_out->colidx->
      data[c2_b_col - 1];
    c2_c_idx = c2_out->colidx->data[c2_b_col - 1];
    for (c2_c_i = 0; c2_c_i < 4; c2_c_i++) {
      c2_b_outBuff[c2_c_i] = c2_outBuff[c2_c_i];
    }

    c2_d_st.site = &c2_md_emlrtRSI;
    c2_nzRhs = c2_b_countNumnzInColumn(chartInstance, c2_b_outBuff, c2_r);
    if (c2_nzColAlloc < c2_nzRhs) {
      c2_extraCol = c2_nzRhs - c2_nzColAlloc;
      c2_d_n = (real_T)c2_out->maxnz;
      c2_numAlloc = (int32_T)c2_d_n;
      c2_extraAlloc = c2_numAlloc - c2_nz;
      c2_start = c2_out->colidx->data[c2_b_col];
      if (c2_extraAlloc < c2_extraCol) {
        c2_num2Alloc = c2_extraCol - c2_extraAlloc;
        c2_d_st.site = &c2_nd_emlrtRSI;
        c2_d_realloc(chartInstance, &c2_d_st, c2_out, c2_numAlloc + c2_num2Alloc,
                     c2_c_idx - 1, c2_start, c2_nz, c2_extraCol);
      } else {
        c2_d_st.site = &c2_od_emlrtRSI;
        c2_b_outstart = c2_start + c2_extraCol;
        c2_b_instart = c2_start;
        c2_b_nelem = (c2_nz - c2_start) + 1;
        if (!(c2_b_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i2 = c2_y->size[0];
          c2_y->size[0] = c2_out->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i2,
            &c2_c_emlrtRTEI);
          c2_b_loop_ub = c2_out->rowidx->size[0] - 1;
          for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
            c2_y->data[c2_i6] = c2_out->rowidx->data[c2_i6];
          }

          c2_d_outstart = c2_b_outstart - 1;
          c2_d_instart = c2_b_instart - 1;
          c2_d_nelem = c2_b_nelem;
          c2_i8 = c2_out->rowidx->size[0];
          c2_out->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_out->rowidx,
            c2_i8, &c2_wb_emlrtRTEI);
          c2_d_loop_ub = c2_y->size[0] - 1;
          for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
            c2_out->rowidx->data[c2_i10] = c2_y->data[c2_i10];
          }

          memmove((void *)&c2_out->rowidx->data[c2_d_outstart], (void *)
                  &c2_out->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                   c2_d_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i12 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_out->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i12,
            &c2_e_emlrtRTEI);
          c2_f_loop_ub = c2_out->d->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
            c2_b_y->data[c2_i14] = c2_out->d->data[c2_i14];
          }

          c2_f_outstart = c2_b_outstart - 1;
          c2_f_instart = c2_b_instart - 1;
          c2_f_nelem = c2_b_nelem;
          c2_i16 = c2_out->d->size[0];
          c2_out->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_out->d, c2_i16,
            &c2_wb_emlrtRTEI);
          c2_h_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
            c2_out->d->data[c2_i18] = c2_b_y->data[c2_i18];
          }

          memmove((void *)&c2_out->d->data[c2_f_outstart], (void *)&c2_out->
                  d->data[c2_f_instart], (uint32_T)((size_t)c2_f_nelem * sizeof
                   (real_T)));
        }
      }

      c2_rhsIter = c2_r;
      c2_d_copyNonzeroValues(chartInstance, c2_out, &c2_rhsIter, c2_c_idx,
        c2_outBuff);
      c2_d_col = c2_b_col + 1;
      c2_b_offs = c2_extraCol;
      c2_i4 = c2_d_col;
      for (c2_d_k = c2_i4 - 1; c2_d_k + 1 < 6; c2_d_k++) {
        c2_out->colidx->data[c2_d_k] += c2_b_offs;
      }
    } else {
      c2_rhsIter = c2_r;
      c2_b_outIdx = c2_d_copyNonzeroValues(chartInstance, c2_out, &c2_rhsIter,
        c2_c_idx, c2_outBuff);
      c2_extraSpace = c2_nzColAlloc - c2_nzRhs;
      if (c2_extraSpace > 0) {
        c2_start = c2_out->colidx->data[c2_b_col];
        c2_d_st.site = &c2_pd_emlrtRSI;
        c2_outstart = c2_b_outIdx;
        c2_instart = c2_start;
        c2_nelem = (c2_nz - c2_start) + 1;
        if (!(c2_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i1 = c2_y->size[0];
          c2_y->size[0] = c2_out->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i1,
            &c2_c_emlrtRTEI);
          c2_loop_ub = c2_out->rowidx->size[0] - 1;
          for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
            c2_y->data[c2_i5] = c2_out->rowidx->data[c2_i5];
          }

          c2_c_outstart = c2_outstart - 1;
          c2_c_instart = c2_instart - 1;
          c2_c_nelem = c2_nelem;
          c2_i7 = c2_out->rowidx->size[0];
          c2_out->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_out->rowidx,
            c2_i7, &c2_wb_emlrtRTEI);
          c2_c_loop_ub = c2_y->size[0] - 1;
          for (c2_i9 = 0; c2_i9 <= c2_c_loop_ub; c2_i9++) {
            c2_out->rowidx->data[c2_i9] = c2_y->data[c2_i9];
          }

          memmove((void *)&c2_out->rowidx->data[c2_c_outstart], (void *)
                  &c2_out->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                   c2_c_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i11 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_out->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i11,
            &c2_e_emlrtRTEI);
          c2_e_loop_ub = c2_out->d->size[0] - 1;
          for (c2_i13 = 0; c2_i13 <= c2_e_loop_ub; c2_i13++) {
            c2_b_y->data[c2_i13] = c2_out->d->data[c2_i13];
          }

          c2_e_outstart = c2_outstart - 1;
          c2_e_instart = c2_instart - 1;
          c2_e_nelem = c2_nelem;
          c2_i15 = c2_out->d->size[0];
          c2_out->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_out->d, c2_i15,
            &c2_wb_emlrtRTEI);
          c2_g_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i17 = 0; c2_i17 <= c2_g_loop_ub; c2_i17++) {
            c2_out->d->data[c2_i17] = c2_b_y->data[c2_i17];
          }

          memmove((void *)&c2_out->d->data[c2_e_outstart], (void *)&c2_out->
                  d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem * sizeof
                   (real_T)));
        }

        c2_c_col = c2_b_col + 1;
        c2_offs = c2_extraSpace;
        c2_i3 = c2_c_col;
        for (c2_c_k = c2_i3 - 1; c2_c_k + 1 < 6; c2_c_k++) {
          c2_out->colidx->data[c2_c_k] -= c2_offs;
        }
      }
    }
  }

  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
  c2_emxFreeStruct_coder_internal_sp(chartInstance, &c2_s);
  cs_di_sfree(c2_S);
  cs_di_nfree(c2_N);
}

static void c2_c_sparse_spallocLike(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_s)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_c;
  int32_T c2_b_c;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_bd_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_i = c2_s->d->size[0];
  c2_s->d->size[0] = 1;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_s->d, c2_i,
    &c2_yb_emlrtRTEI);
  c2_s->d->data[0] = 0.0;
  c2_s->maxnz = 1;
  c2_i1 = c2_s->colidx->size[0];
  c2_s->colidx->size[0] = 5;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_s->colidx, c2_i1,
    &c2_ac_emlrtRTEI);
  c2_s->colidx->data[0] = 1;
  c2_i2 = c2_s->rowidx->size[0];
  c2_s->rowidx->size[0] = 1;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_s->rowidx, c2_i2,
    &c2_yb_emlrtRTEI);
  c2_s->rowidx->data[0] = 0;
  for (c2_c = 0; c2_c < 4; c2_c++) {
    c2_b_c = c2_c;
    c2_s->colidx->data[c2_b_c + 1] = 1;
  }

  c2_b_st.site = &c2_x_emlrtRSI;
  c2_b_sparse_fillIn(chartInstance, &c2_b_st, c2_s);
}

static void c2_b_sparse_full(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse c2_this, real_T c2_y[4])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_cend;
  int32_T c2_i1;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_a;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_idx;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  for (c2_i = 0; c2_i < 4; c2_i++) {
    c2_y[c2_i] = 0.0;
  }

  c2_cend = c2_this.colidx->data[1] - 1;
  c2_i1 = c2_this.colidx->data[0];
  c2_st.site = &c2_jd_emlrtRSI;
  c2_a = c2_i1;
  c2_b = c2_cend;
  c2_b_a = c2_a;
  c2_b_b = c2_b;
  if (c2_b_a > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_idx = c2_i1 - 1; c2_idx < c2_cend; c2_idx++) {
    c2_y[c2_this.rowidx->data[c2_idx] - 1] = c2_this.d->data[c2_idx];
  }
}

static int32_T c2_b_countNumnzInColumn(SFc2_untitledInstanceStruct
  *chartInstance, real_T c2_rhs[4], c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter)
{
  int32_T c2_nz;
  int32_T c2_k;
  real_T c2_rhsv;
  int32_T c2_y;
  int32_T c2_b_y;
  (void)chartInstance;
  c2_nz = 0;
  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_rhsv = c2_rhs[c2_rhsIter.idx - 1];
    c2_y = c2_rhsIter.idx;
    c2_b_y = c2_y + 1;
    c2_rhsIter.idx = c2_b_y;
    if (!(c2_rhsv == 0.0)) {
      c2_nz++;
    }
  }

  return c2_nz;
}

static void c2_b_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse c2_this,
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter, int32_T c2_outStart, real_T c2_rhs[4],
  c2_coder_internal_sparse *c2_b_this, int32_T *c2_outIdx,
  c2_szVgRoYADpv9jTouZDFZ3mB *c2_b_rhsIter)
{
  int32_T c2_i;
  int32_T c2_b_outIdx;
  real_T c2_b_rhs[4];
  c2_emxCopyStruct_coder_internal_sp(chartInstance, c2_sp, c2_b_this, &c2_this,
    &c2_bc_emlrtRTEI);
  *c2_b_rhsIter = c2_rhsIter;
  for (c2_i = 0; c2_i < 4; c2_i++) {
    c2_b_rhs[c2_i] = c2_rhs[c2_i];
  }

  c2_b_outIdx = c2_d_copyNonzeroValues(chartInstance, c2_b_this, c2_b_rhsIter,
    c2_outStart, c2_b_rhs);
  *c2_outIdx = c2_b_outIdx;
}

static void c2_floor(SFc2_untitledInstanceStruct *chartInstance, real_T c2_x[20],
                     real_T c2_b_x[20])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 20; c2_i++) {
    c2_b_x[c2_i] = c2_x[c2_i];
  }

  c2_b_floor(chartInstance, c2_b_x);
}

static void c2_eye(SFc2_untitledInstanceStruct *chartInstance, real_T c2_I[16])
{
  int32_T c2_i;
  int32_T c2_k;
  int32_T c2_b_k;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 16; c2_i++) {
    c2_I[c2_i] = 0.0;
  }

  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_b_k = c2_k;
    c2_I[c2_b_k + (c2_b_k << 2)] = 1.0;
  }
}

static void c2_repmat(SFc2_untitledInstanceStruct *chartInstance, real_T c2_a[20],
                      real_T c2_b[80])
{
  int32_T c2_jcol;
  int32_T c2_b_jcol;
  int32_T c2_iacol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_b_itilerow;
  int32_T c2_ibcol;
  (void)chartInstance;
  for (c2_jcol = 0; c2_jcol < 20; c2_jcol++) {
    c2_b_jcol = c2_jcol;
    c2_iacol = c2_b_jcol;
    c2_ibmat = (c2_b_jcol << 2) - 1;
    for (c2_itilerow = 0; c2_itilerow < 4; c2_itilerow++) {
      c2_b_itilerow = c2_itilerow;
      c2_ibcol = c2_ibmat + c2_b_itilerow;
      c2_b[c2_ibcol + 1] = c2_a[c2_iacol];
    }
  }
}

static real_T c2_sqrt(SFc2_untitledInstanceStruct *chartInstance, real_T c2_x)
{
  real_T c2_b_x;
  c2_b_x = c2_x;
  c2_b_sqrt(chartInstance, &c2_b_x);
  return c2_b_x;
}

static const mxArray *c2_emlrt_marshallOut(SFc2_untitledInstanceStruct
  *chartInstance, const char * c2_u)
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c2_u)), false);
  return c2_y;
}

static void c2_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_a__output_of_load_, const char_T *c2_identifier,
  c2_skehD9MZpZGlvdWw7AumsmD *c2_y)
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_a__output_of_load_),
                        &c2_thisId, c2_y);
  sf_mex_destroy(&c2_a__output_of_load_);
}

static void c2_b_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  c2_skehD9MZpZGlvdWw7AumsmD *c2_y)
{
  emlrtMsgIdentifier c2_thisId;
  static const char * c2_fieldNames[2] = { "fnB", "fnT" };

  c2_thisId.fParent = c2_parentId;
  c2_thisId.bParentIsCell = false;
  sf_mex_check_struct(c2_parentId, c2_u, 2, c2_fieldNames, 0U, NULL);
  c2_thisId.fIdentifier = "fnB";
  c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c2_u, "fnB",
    "fnB", 0)), &c2_thisId, c2_y->fnB);
  c2_thisId.fIdentifier = "fnT";
  c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c2_u, "fnT",
    "fnT", 0)), &c2_thisId, c2_y->fnT);
  sf_mex_destroy(&c2_u);
}

static void c2_c_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[720])
{
  real_T c2_b_dv[720];
  int32_T c2_i;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_b_dv, 1, 0, 0U, 1, 0U, 2, 6,
                120);
  for (c2_i = 0; c2_i < 720; c2_i++) {
    c2_y[c2_i] = c2_b_dv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_d_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[80])
{
  real_T c2_b_dv[80];
  int32_T c2_i;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_b_dv, 1, 0, 0U, 1, 0U, 2, 4,
                20);
  for (c2_i = 0; c2_i < 80; c2_i++) {
    c2_y[c2_i] = c2_b_dv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_e_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_netS, const char_T *c2_identifier, real_T c2_y_data[],
  int32_T c2_y_size[2])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_netS), &c2_thisId,
                        c2_y_data, c2_y_size);
  sf_mex_destroy(&c2_netS);
}

static void c2_f_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y_data[],
  int32_T c2_y_size[2])
{
  int32_T c2_i;
  int32_T c2_tmp_size[2];
  uint32_T c2_uv[2];
  int32_T c2_i1;
  real_T c2_tmp_data[2];
  boolean_T c2_bv[2];
  static boolean_T c2_bv1[2] = { true, false };

  int32_T c2_loop_ub;
  int32_T c2_i2;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_uv[c2_i] = 2U - (uint32_T)c2_i;
  }

  c2_tmp_size[0] = sf_mex_get_dimension(c2_u, 0);
  c2_tmp_size[1] = sf_mex_get_dimension(c2_u, 1);
  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_bv[c2_i1] = c2_bv1[c2_i1];
  }

  sf_mex_import_vs(c2_parentId, sf_mex_dup(c2_u), &c2_tmp_data, 1, 0, 0U, 1, 0U,
                   2, c2_bv, c2_uv, c2_tmp_size);
  c2_y_size[0] = c2_tmp_size[0];
  c2_y_size[1] = 1;
  c2_loop_ub = c2_tmp_size[0] * c2_tmp_size[1] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_y_data[c2_i2] = c2_tmp_data[c2_i2];
  }

  sf_mex_destroy(&c2_u);
}

static real_T c2_g_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_relS, const char_T *c2_identifier)
{
  real_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_relS), &c2_thisId);
  sf_mex_destroy(&c2_b_relS);
  return c2_y;
}

static real_T c2_h_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_i_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_fnB, const char_T *c2_identifier, boolean_T *c2_svPtr,
  real_T c2_y[720])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_fnB), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_b_fnB);
}

static void c2_j_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, real_T c2_y[720])
{
  real_T c2_b_dv[720];
  int32_T c2_i;
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_b_dv, 1, 0, 0U, 1, 0U, 2, 6,
                  120);
    for (c2_i = 0; c2_i < 720; c2_i++) {
      c2_y[c2_i] = c2_b_dv[c2_i];
    }
  }

  sf_mex_destroy(&c2_u);
}

static void c2_k_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_fnT, const char_T *c2_identifier, boolean_T *c2_svPtr,
  real_T c2_y[80])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_fnT), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_b_fnT);
}

static void c2_l_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, real_T c2_y[80])
{
  real_T c2_b_dv[80];
  int32_T c2_i;
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_b_dv, 1, 0, 0U, 1, 0U, 2, 4,
                  20);
    for (c2_i = 0; c2_i < 80; c2_i++) {
      c2_y[c2_i] = c2_b_dv[c2_i];
    }
  }

  sf_mex_destroy(&c2_u);
}

static uint8_T c2_m_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled, const char_T *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_n_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_untitled), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_untitled);
  return c2_y;
}

static uint8_T c2_n_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_b_u;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static const mxArray *c2_chart_data_browse_helper(SFc2_untitledInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber)
{
  const mxArray *c2_mxData = NULL;
  real_T c2_d;
  c2_mxData = NULL;
  switch (c2_ssIdNumber) {
   case 5U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData",
      chartInstance->c2_netS_data, 0, 0U, 1U, 0U, 2,
      (*chartInstance->c2_netS_sizes)[0], (*chartInstance->c2_netS_sizes)[1]),
                  false);
    break;

   case 7U:
    c2_d = *chartInstance->c2_relS;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c2_mxData;
}

static void c2_b_locSortrows(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_a,
  c2_emxArray_int32_T *c2_b)
{
  emlrtStack c2_st;
  c2_coder_internal_anonymous_function c2_this;
  c2_cell_wrap_1 c2_tunableEnvironment[2];
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  int32_T c2_i4;
  c2_emxArray_int32_T *c2_b_idx;
  int32_T c2_i5;
  int32_T c2_c_loop_ub;
  int32_T c2_i6;
  c2_emxArray_int32_T *c2_c_idx;
  int32_T c2_i7;
  int32_T c2_d_loop_ub;
  int32_T c2_i8;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_this,
    &c2_gc_emlrtRTEI);
  c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_tunableEnvironment,
    &c2_hc_emlrtRTEI);
  c2_i = c2_tunableEnvironment[0].f1->size[0];
  c2_tunableEnvironment[0].f1->size[0] = c2_a->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_tunableEnvironment[0].f1,
    c2_i, &c2_cc_emlrtRTEI);
  c2_loop_ub = c2_a->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_tunableEnvironment[0].f1->data[c2_i1] = c2_a->data[c2_i1];
  }

  c2_i2 = c2_tunableEnvironment[1].f1->size[0];
  c2_tunableEnvironment[1].f1->size[0] = c2_b->size[0];
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_tunableEnvironment[1].f1,
    c2_i2, &c2_cc_emlrtRTEI);
  c2_b_loop_ub = c2_b->size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_tunableEnvironment[1].f1->data[c2_i3] = c2_b->data[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_emxCopyStruct_cell_wrap_1(chartInstance, c2_sp,
      &c2_this.tunableEnvironment[c2_i4], &c2_tunableEnvironment[c2_i4],
      &c2_dc_emlrtRTEI);
  }

  c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_tunableEnvironment);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_b_idx, 1, &c2_ec_emlrtRTEI);
  c2_st.site = &c2_gb_emlrtRSI;
  c2_b_introsort(chartInstance, &c2_st, c2_idx, c2_a->size[0], c2_this);
  c2_i5 = c2_b_idx->size[0];
  c2_b_idx->size[0] = c2_idx->size[0];
  c2_st.site = &c2_hb_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_b_idx, c2_i5,
    &c2_ec_emlrtRTEI);
  c2_c_loop_ub = c2_idx->size[0] - 1;
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_this);
  for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
    c2_b_idx->data[c2_i6] = c2_idx->data[c2_i6];
  }

  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_c_idx, 1, &c2_fc_emlrtRTEI);
  c2_st.site = &c2_hb_emlrtRSI;
  c2_b_permuteVector(chartInstance, &c2_st, c2_b_idx, c2_a);
  c2_i7 = c2_c_idx->size[0];
  c2_c_idx->size[0] = c2_idx->size[0];
  c2_st.site = &c2_ib_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_c_idx, c2_i7,
    &c2_fc_emlrtRTEI);
  c2_d_loop_ub = c2_idx->size[0] - 1;
  c2_emxFree_int32_T(chartInstance, &c2_b_idx);
  for (c2_i8 = 0; c2_i8 <= c2_d_loop_ub; c2_i8++) {
    c2_c_idx->data[c2_i8] = c2_idx->data[c2_i8];
  }

  c2_st.site = &c2_ib_emlrtRSI;
  c2_b_permuteVector(chartInstance, &c2_st, c2_c_idx, c2_b);
  c2_emxFree_int32_T(chartInstance, &c2_c_idx);
}

static void c2_b_insertionsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_i;
  int32_T c2_a;
  int32_T c2_b;
  int32_T c2_b_a;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  c2_cell_wrap_1 c2_environment[2];
  c2_emxArray_int32_T *c2_c_a;
  c2_emxArray_int32_T *c2_c_b;
  int32_T c2_xc;
  int32_T c2_idx;
  boolean_T c2_exitg1;
  int32_T c2_varargin_1;
  int32_T c2_varargin_2;
  int32_T c2_i1;
  int32_T c2_loop_ub;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_b_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_c_loop_ub;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_d_loop_ub;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_e_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_f_loop_ub;
  int32_T c2_i12;
  int32_T c2_b_i;
  int32_T c2_j;
  int32_T c2_c_i;
  int32_T c2_b_j;
  int32_T c2_ai;
  int32_T c2_aj;
  boolean_T c2_varargout_1;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_i = c2_xstart + 1;
  c2_st.site = &c2_jb_emlrtRSI;
  c2_a = c2_i;
  c2_b = c2_xend;
  c2_b_a = c2_a;
  c2_b_b = c2_b;
  if (c2_b_a > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  c2_k = c2_i - 1;
  c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_environment,
    &c2_kc_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_c_a, 1, &c2_jc_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_c_b, 1, &c2_jc_emlrtRTEI);
  while (c2_k + 1 <= c2_xend) {
    c2_xc = c2_x->data[c2_k];
    c2_idx = c2_k;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_idx >= c2_xstart)) {
      c2_varargin_1 = c2_xc;
      c2_varargin_2 = c2_x->data[c2_idx - 1];
      c2_i1 = c2_c_a->size[0];
      c2_c_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
      c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_a, c2_i1,
        &c2_ic_emlrtRTEI);
      c2_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
      for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
        c2_c_a->data[c2_i2] = c2_cmp.tunableEnvironment[0].f1->data[c2_i2];
      }

      c2_i3 = c2_c_b->size[0];
      c2_c_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
      c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i3,
        &c2_ic_emlrtRTEI);
      c2_b_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
      for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
        c2_c_b->data[c2_i4] = c2_cmp.tunableEnvironment[1].f1->data[c2_i4];
      }

      c2_i5 = c2_environment[0].f1->size[0];
      c2_environment[0].f1->size[0] = c2_c_a->size[0];
      c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_environment[0].f1,
        c2_i5, &c2_ic_emlrtRTEI);
      c2_c_loop_ub = c2_c_a->size[0] - 1;
      for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
        c2_environment[0].f1->data[c2_i6] = c2_c_a->data[c2_i6];
      }

      c2_i7 = c2_environment[1].f1->size[0];
      c2_environment[1].f1->size[0] = c2_c_b->size[0];
      c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_environment[1].f1,
        c2_i7, &c2_ic_emlrtRTEI);
      c2_d_loop_ub = c2_c_b->size[0] - 1;
      for (c2_i8 = 0; c2_i8 <= c2_d_loop_ub; c2_i8++) {
        c2_environment[1].f1->data[c2_i8] = c2_c_b->data[c2_i8];
      }

      c2_i9 = c2_c_a->size[0];
      c2_c_a->size[0] = c2_environment[0].f1->size[0];
      c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_a, c2_i9,
        &c2_jc_emlrtRTEI);
      c2_e_loop_ub = c2_environment[0].f1->size[0] - 1;
      for (c2_i10 = 0; c2_i10 <= c2_e_loop_ub; c2_i10++) {
        c2_c_a->data[c2_i10] = c2_environment[0].f1->data[c2_i10];
      }

      c2_i11 = c2_c_b->size[0];
      c2_c_b->size[0] = c2_environment[1].f1->size[0];
      c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i11,
        &c2_jc_emlrtRTEI);
      c2_f_loop_ub = c2_environment[1].f1->size[0] - 1;
      for (c2_i12 = 0; c2_i12 <= c2_f_loop_ub; c2_i12++) {
        c2_c_b->data[c2_i12] = c2_environment[1].f1->data[c2_i12];
      }

      c2_b_i = c2_varargin_1;
      c2_j = c2_varargin_2;
      c2_c_i = c2_b_i - 1;
      c2_b_j = c2_j - 1;
      c2_ai = c2_c_a->data[c2_c_i];
      c2_aj = c2_c_a->data[c2_b_j];
      if (c2_ai < c2_aj) {
        c2_varargout_1 = true;
      } else if (c2_ai == c2_aj) {
        c2_varargout_1 = (c2_c_b->data[c2_c_i] < c2_c_b->data[c2_b_j]);
      } else {
        c2_varargout_1 = false;
      }

      if (c2_varargout_1) {
        c2_x->data[c2_idx] = c2_x->data[c2_idx - 1];
        c2_idx--;
      } else {
        c2_exitg1 = true;
      }
    }

    c2_x->data[c2_idx] = c2_xc;
    c2_k++;
  }

  c2_emxFree_int32_T(chartInstance, &c2_c_b);
  c2_emxFree_int32_T(chartInstance, &c2_c_a);
  c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_environment);
}

static void c2_b_introsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xend,
  c2_coder_internal_anonymous_function c2_cmp)
{
  emlrtStack c2_st;
  c2_coder_internal_anonymous_function c2_b_cmp;
  c2_coder_internal_anonymous_function c2_c_cmp;
  c2_coder_internal_anonymous_function c2_d_cmp;
  int32_T c2_n;
  int32_T c2_b_x;
  int32_T c2_p;
  int32_T c2_b_n;
  int32_T c2_c_n;
  int32_T c2_pmax;
  int32_T c2_pmin;
  boolean_T c2_exitg1;
  int32_T c2_b;
  int32_T c2_pow2p;
  int32_T c2_MAXDEPTH;
  c2_sBaHy6MF1FZJsDHxMqvBaiH c2_frame;
  int32_T c2_b_b;
  int32_T c2_y;
  int32_T c2_d_n;
  c2_coder_internal_stack c2_b_st;
  real_T c2_d;
  int32_T c2_iv[2];
  real_T c2_d1;
  int32_T c2_loop_ub;
  int32_T c2_i;
  int32_T c2_nd;
  const mxArray *c2_b_y = NULL;
  static char_T c2_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'u', 's', 'h', 'L', 'i',
    'm', 'i', 't' };

  const mxArray *c2_c_y = NULL;
  c2_cell_wrap_1 c2_environment[2];
  c2_cell_wrap_1 c2_b_environment[2];
  c2_cell_wrap_1 c2_c_environment[2];
  c2_cell_wrap_1 c2_d_environment[2];
  c2_cell_wrap_1 c2_e_environment[2];
  c2_emxArray_int32_T *c2_a;
  c2_emxArray_int32_T *c2_c_b;
  int32_T c2_exitg2;
  int32_T c2_e_n;
  const mxArray *c2_d_y = NULL;
  static char_T c2_b_cv1[27] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'o', 'p', 'E', 'm',
    'p', 't', 'y' };

  const mxArray *c2_e_y = NULL;
  int32_T c2_xstart;
  int32_T c2_depth;
  int32_T c2_b_xstart;
  int32_T c2_b_xend;
  int32_T c2_b_a;
  int32_T c2_c;
  int32_T c2_xmid;
  int32_T c2_varargin_1;
  int32_T c2_varargin_2;
  int32_T c2_i1;
  int32_T c2_b_loop_ub;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_c_loop_ub;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_d_loop_ub;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_e_loop_ub;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_f_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_g_loop_ub;
  int32_T c2_i12;
  int32_T c2_b_i;
  int32_T c2_j;
  int32_T c2_c_i;
  int32_T c2_b_j;
  int32_T c2_ai;
  int32_T c2_aj;
  boolean_T c2_varargout_1;
  int32_T c2_t;
  int32_T c2_b_varargin_1;
  int32_T c2_b_varargin_2;
  int32_T c2_i13;
  int32_T c2_h_loop_ub;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i_loop_ub;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_j_loop_ub;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_k_loop_ub;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_l_loop_ub;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_m_loop_ub;
  int32_T c2_i24;
  int32_T c2_d_i;
  int32_T c2_c_j;
  int32_T c2_e_i;
  int32_T c2_d_j;
  int32_T c2_b_ai;
  int32_T c2_b_aj;
  boolean_T c2_b_varargout_1;
  int32_T c2_c_varargin_1;
  int32_T c2_c_varargin_2;
  int32_T c2_i25;
  int32_T c2_n_loop_ub;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_o_loop_ub;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_p_loop_ub;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_q_loop_ub;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_r_loop_ub;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_s_loop_ub;
  int32_T c2_i36;
  int32_T c2_f_i;
  int32_T c2_e_j;
  int32_T c2_g_i;
  int32_T c2_f_j;
  int32_T c2_c_ai;
  int32_T c2_c_aj;
  boolean_T c2_c_varargout_1;
  int32_T c2_pivot;
  int32_T c2_h_i;
  int32_T c2_g_j;
  int32_T c2_exitg3;
  int32_T c2_exitg4;
  int32_T c2_d_varargin_1;
  int32_T c2_d_varargin_2;
  int32_T c2_i37;
  int32_T c2_t_loop_ub;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_u_loop_ub;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_v_loop_ub;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_w_loop_ub;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_x_loop_ub;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_y_loop_ub;
  int32_T c2_i48;
  int32_T c2_i_i;
  int32_T c2_h_j;
  int32_T c2_j_i;
  int32_T c2_i_j;
  int32_T c2_d_ai;
  int32_T c2_d_aj;
  boolean_T c2_d_varargout_1;
  int32_T c2_e_varargin_1;
  int32_T c2_e_varargin_2;
  int32_T c2_i49;
  int32_T c2_ab_loop_ub;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_bb_loop_ub;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_cb_loop_ub;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_db_loop_ub;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_eb_loop_ub;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_fb_loop_ub;
  int32_T c2_i60;
  int32_T c2_k_i;
  int32_T c2_j_j;
  int32_T c2_l_i;
  int32_T c2_k_j;
  int32_T c2_e_ai;
  int32_T c2_e_aj;
  boolean_T c2_e_varargout_1;
  int32_T c2_b_p;
  c2_sBaHy6MF1FZJsDHxMqvBaiH c2_c_x;
  c2_sBaHy6MF1FZJsDHxMqvBaiH c2_d_x;
  int32_T c2_b_nd;
  int32_T c2_c_nd;
  const mxArray *c2_f_y = NULL;
  static char_T c2_b_cv2[28] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'u', 's', 'h', 'L',
    'i', 'm', 'i', 't' };

  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  static char_T c2_b_cv3[28] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'u', 's', 'h', 'L',
    'i', 'm', 'i', 't' };

  const mxArray *c2_i_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp,
    &c2_oc_emlrtRTEI);
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_c_cmp,
    &c2_nc_emlrtRTEI);
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_d_cmp,
    &c2_lc_emlrtRTEI);
  if (c2_xend <= 32) {
    c2_st.site = &c2_rb_emlrtRSI;
    c2_emxCopyStruct_coder_internal_an(chartInstance, &c2_st, &c2_d_cmp, &c2_cmp,
      &c2_lc_emlrtRTEI);
    c2_st.site = &c2_rb_emlrtRSI;
    c2_b_insertionsort(chartInstance, &c2_st, c2_x, 1, c2_xend, c2_d_cmp);
  } else {
    c2_n = c2_xend;
    c2_b_x = c2_n;
    c2_p = c2_b_x;
    c2_b_n = c2_p;
    c2_c_n = c2_b_n;
    c2_pmax = 31;
    c2_pmin = 0;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_pmax - c2_pmin > 1)) {
      c2_p = (c2_pmin + c2_pmax) >> 1;
      c2_pow2p = 1 << c2_p;
      if (c2_pow2p == c2_c_n) {
        c2_pmax = c2_p;
        c2_exitg1 = true;
      } else if (c2_pow2p > c2_c_n) {
        c2_pmax = c2_p;
      } else {
        c2_pmin = c2_p;
      }
    }

    c2_p = c2_pmax - 1;
    c2_b = c2_p;
    c2_MAXDEPTH = c2_b << 1;
    c2_frame.xstart = 1;
    c2_frame.xend = c2_xend;
    c2_frame.depth = 0;
    c2_b_b = c2_MAXDEPTH;
    c2_y = c2_b_b << 1;
    c2_st.site = &c2_kb_emlrtRSI;
    c2_d_n = c2_y;
    c2_b_st.n = 0;
    c2_d = (real_T)c2_d_n;
    c2_iv[0] = (int32_T)emlrtNonNegativeCheckR2012b(c2_d, &c2_i_emlrtDCI, &c2_st);
    c2_d1 = 1.0;
    emlrtNonNegativeCheckR2012b(c2_d1, &c2_i_emlrtDCI, &c2_st);
    c2_b_st.d.size[0] = c2_iv[0];
    c2_loop_ub = c2_iv[0] - 1;
    for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
      c2_b_st.d.data[c2_i] = c2_frame;
    }

    c2_st.site = &c2_qb_emlrtRSI;
    c2_nd = c2_b_st.d.size[0];
    if (!(c2_b_st.n < c2_nd)) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        28), false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        28), false);
      sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call(&c2_st,
        "getString", 1U, 1U, 14, sf_mex_call(&c2_st, "message", 1U, 1U, 14,
        c2_c_y)));
    }

    c2_b_st.d.data[c2_b_st.n] = c2_frame;
    c2_b_st.n++;
    c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_environment,
      &c2_kc_emlrtRTEI);
    c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_b_environment,
      &c2_kc_emlrtRTEI);
    c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_c_environment,
      &c2_kc_emlrtRTEI);
    c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_d_environment,
      &c2_kc_emlrtRTEI);
    c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_e_environment,
      &c2_kc_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_a, 1, &c2_jc_emlrtRTEI);
    c2_emxInit_int32_T(chartInstance, c2_sp, &c2_c_b, 1, &c2_jc_emlrtRTEI);
    do {
      c2_exitg2 = 0;
      c2_e_n = c2_b_st.n;
      if (c2_e_n > 0) {
        c2_st.site = &c2_pb_emlrtRSI;
        if (!(c2_b_st.n > 0)) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 27), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 27), false);
          sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_d_y, 14, sf_mex_call
                      (&c2_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_st,
            "message", 1U, 1U, 14, c2_e_y)));
        }

        c2_frame = c2_b_st.d.data[c2_b_st.n - 1];
        c2_b_st.n--;
        c2_xstart = c2_frame.xstart;
        c2_xend = c2_frame.xend;
        c2_depth = c2_frame.depth + 1;
        if ((c2_xend - c2_xstart) + 1 <= 32) {
          c2_st.site = &c2_ob_emlrtRSI;
          c2_emxCopyStruct_coder_internal_an(chartInstance, &c2_st, &c2_c_cmp,
            &c2_cmp, &c2_nc_emlrtRTEI);
          c2_st.site = &c2_ob_emlrtRSI;
          c2_b_insertionsort(chartInstance, &c2_st, c2_x, c2_xstart, c2_xend,
                             c2_c_cmp);
        } else if (c2_depth - 1 == c2_MAXDEPTH) {
          c2_st.site = &c2_nb_emlrtRSI;
          c2_emxCopyStruct_coder_internal_an(chartInstance, &c2_st, &c2_b_cmp,
            &c2_cmp, &c2_oc_emlrtRTEI);
          c2_st.site = &c2_nb_emlrtRSI;
          c2_b_heapsort(chartInstance, &c2_st, c2_x, c2_xstart, c2_xend,
                        c2_b_cmp);
        } else {
          c2_b_xstart = c2_xstart - 1;
          c2_b_xend = c2_xend - 1;
          c2_b_a = c2_b_xend - c2_b_xstart;
          c2_c = c2_div_nzp_s32(chartInstance, c2_b_a, 2, 0, 1U, 0, 0);
          c2_xmid = c2_b_xstart + c2_c;
          c2_varargin_1 = c2_x->data[c2_xmid];
          c2_varargin_2 = c2_x->data[c2_b_xstart];
          c2_i1 = c2_a->size[0];
          c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i1,
            &c2_ic_emlrtRTEI);
          c2_b_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
          for (c2_i2 = 0; c2_i2 <= c2_b_loop_ub; c2_i2++) {
            c2_a->data[c2_i2] = c2_cmp.tunableEnvironment[0].f1->data[c2_i2];
          }

          c2_i3 = c2_c_b->size[0];
          c2_c_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i3,
            &c2_ic_emlrtRTEI);
          c2_c_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
          for (c2_i4 = 0; c2_i4 <= c2_c_loop_ub; c2_i4++) {
            c2_c_b->data[c2_i4] = c2_cmp.tunableEnvironment[1].f1->data[c2_i4];
          }

          c2_i5 = c2_environment[0].f1->size[0];
          c2_environment[0].f1->size[0] = c2_a->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_environment[0].
            f1, c2_i5, &c2_ic_emlrtRTEI);
          c2_d_loop_ub = c2_a->size[0] - 1;
          for (c2_i6 = 0; c2_i6 <= c2_d_loop_ub; c2_i6++) {
            c2_environment[0].f1->data[c2_i6] = c2_a->data[c2_i6];
          }

          c2_i7 = c2_environment[1].f1->size[0];
          c2_environment[1].f1->size[0] = c2_c_b->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_environment[1].
            f1, c2_i7, &c2_ic_emlrtRTEI);
          c2_e_loop_ub = c2_c_b->size[0] - 1;
          for (c2_i8 = 0; c2_i8 <= c2_e_loop_ub; c2_i8++) {
            c2_environment[1].f1->data[c2_i8] = c2_c_b->data[c2_i8];
          }

          c2_i9 = c2_a->size[0];
          c2_a->size[0] = c2_environment[0].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i9,
            &c2_jc_emlrtRTEI);
          c2_f_loop_ub = c2_environment[0].f1->size[0] - 1;
          for (c2_i10 = 0; c2_i10 <= c2_f_loop_ub; c2_i10++) {
            c2_a->data[c2_i10] = c2_environment[0].f1->data[c2_i10];
          }

          c2_i11 = c2_c_b->size[0];
          c2_c_b->size[0] = c2_environment[1].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i11,
            &c2_jc_emlrtRTEI);
          c2_g_loop_ub = c2_environment[1].f1->size[0] - 1;
          for (c2_i12 = 0; c2_i12 <= c2_g_loop_ub; c2_i12++) {
            c2_c_b->data[c2_i12] = c2_environment[1].f1->data[c2_i12];
          }

          c2_b_i = c2_varargin_1;
          c2_j = c2_varargin_2;
          c2_c_i = c2_b_i - 1;
          c2_b_j = c2_j - 1;
          c2_ai = c2_a->data[c2_c_i];
          c2_aj = c2_a->data[c2_b_j];
          if (c2_ai < c2_aj) {
            c2_varargout_1 = true;
          } else if (c2_ai == c2_aj) {
            c2_varargout_1 = (c2_c_b->data[c2_c_i] < c2_c_b->data[c2_b_j]);
          } else {
            c2_varargout_1 = false;
          }

          if (c2_varargout_1) {
            c2_t = c2_x->data[c2_b_xstart];
            c2_x->data[c2_b_xstart] = c2_x->data[c2_xmid];
            c2_x->data[c2_xmid] = c2_t;
          }

          c2_b_varargin_1 = c2_x->data[c2_b_xend];
          c2_b_varargin_2 = c2_x->data[c2_b_xstart];
          c2_i13 = c2_a->size[0];
          c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i13,
            &c2_ic_emlrtRTEI);
          c2_h_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_h_loop_ub; c2_i14++) {
            c2_a->data[c2_i14] = c2_cmp.tunableEnvironment[0].f1->data[c2_i14];
          }

          c2_i15 = c2_c_b->size[0];
          c2_c_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i15,
            &c2_ic_emlrtRTEI);
          c2_i_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
          for (c2_i16 = 0; c2_i16 <= c2_i_loop_ub; c2_i16++) {
            c2_c_b->data[c2_i16] = c2_cmp.tunableEnvironment[1].f1->data[c2_i16];
          }

          c2_i17 = c2_b_environment[0].f1->size[0];
          c2_b_environment[0].f1->size[0] = c2_a->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_environment[0]
            .f1, c2_i17, &c2_ic_emlrtRTEI);
          c2_j_loop_ub = c2_a->size[0] - 1;
          for (c2_i18 = 0; c2_i18 <= c2_j_loop_ub; c2_i18++) {
            c2_b_environment[0].f1->data[c2_i18] = c2_a->data[c2_i18];
          }

          c2_i19 = c2_b_environment[1].f1->size[0];
          c2_b_environment[1].f1->size[0] = c2_c_b->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_environment[1]
            .f1, c2_i19, &c2_ic_emlrtRTEI);
          c2_k_loop_ub = c2_c_b->size[0] - 1;
          for (c2_i20 = 0; c2_i20 <= c2_k_loop_ub; c2_i20++) {
            c2_b_environment[1].f1->data[c2_i20] = c2_c_b->data[c2_i20];
          }

          c2_i21 = c2_a->size[0];
          c2_a->size[0] = c2_b_environment[0].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i21,
            &c2_jc_emlrtRTEI);
          c2_l_loop_ub = c2_b_environment[0].f1->size[0] - 1;
          for (c2_i22 = 0; c2_i22 <= c2_l_loop_ub; c2_i22++) {
            c2_a->data[c2_i22] = c2_b_environment[0].f1->data[c2_i22];
          }

          c2_i23 = c2_c_b->size[0];
          c2_c_b->size[0] = c2_b_environment[1].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i23,
            &c2_jc_emlrtRTEI);
          c2_m_loop_ub = c2_b_environment[1].f1->size[0] - 1;
          for (c2_i24 = 0; c2_i24 <= c2_m_loop_ub; c2_i24++) {
            c2_c_b->data[c2_i24] = c2_b_environment[1].f1->data[c2_i24];
          }

          c2_d_i = c2_b_varargin_1;
          c2_c_j = c2_b_varargin_2;
          c2_e_i = c2_d_i - 1;
          c2_d_j = c2_c_j - 1;
          c2_b_ai = c2_a->data[c2_e_i];
          c2_b_aj = c2_a->data[c2_d_j];
          if (c2_b_ai < c2_b_aj) {
            c2_b_varargout_1 = true;
          } else if (c2_b_ai == c2_b_aj) {
            c2_b_varargout_1 = (c2_c_b->data[c2_e_i] < c2_c_b->data[c2_d_j]);
          } else {
            c2_b_varargout_1 = false;
          }

          if (c2_b_varargout_1) {
            c2_t = c2_x->data[c2_b_xstart];
            c2_x->data[c2_b_xstart] = c2_x->data[c2_b_xend];
            c2_x->data[c2_b_xend] = c2_t;
          }

          c2_c_varargin_1 = c2_x->data[c2_b_xend];
          c2_c_varargin_2 = c2_x->data[c2_xmid];
          c2_i25 = c2_a->size[0];
          c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i25,
            &c2_ic_emlrtRTEI);
          c2_n_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
          for (c2_i26 = 0; c2_i26 <= c2_n_loop_ub; c2_i26++) {
            c2_a->data[c2_i26] = c2_cmp.tunableEnvironment[0].f1->data[c2_i26];
          }

          c2_i27 = c2_c_b->size[0];
          c2_c_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i27,
            &c2_ic_emlrtRTEI);
          c2_o_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
          for (c2_i28 = 0; c2_i28 <= c2_o_loop_ub; c2_i28++) {
            c2_c_b->data[c2_i28] = c2_cmp.tunableEnvironment[1].f1->data[c2_i28];
          }

          c2_i29 = c2_c_environment[0].f1->size[0];
          c2_c_environment[0].f1->size[0] = c2_a->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_environment[0]
            .f1, c2_i29, &c2_ic_emlrtRTEI);
          c2_p_loop_ub = c2_a->size[0] - 1;
          for (c2_i30 = 0; c2_i30 <= c2_p_loop_ub; c2_i30++) {
            c2_c_environment[0].f1->data[c2_i30] = c2_a->data[c2_i30];
          }

          c2_i31 = c2_c_environment[1].f1->size[0];
          c2_c_environment[1].f1->size[0] = c2_c_b->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_environment[1]
            .f1, c2_i31, &c2_ic_emlrtRTEI);
          c2_q_loop_ub = c2_c_b->size[0] - 1;
          for (c2_i32 = 0; c2_i32 <= c2_q_loop_ub; c2_i32++) {
            c2_c_environment[1].f1->data[c2_i32] = c2_c_b->data[c2_i32];
          }

          c2_i33 = c2_a->size[0];
          c2_a->size[0] = c2_c_environment[0].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i33,
            &c2_jc_emlrtRTEI);
          c2_r_loop_ub = c2_c_environment[0].f1->size[0] - 1;
          for (c2_i34 = 0; c2_i34 <= c2_r_loop_ub; c2_i34++) {
            c2_a->data[c2_i34] = c2_c_environment[0].f1->data[c2_i34];
          }

          c2_i35 = c2_c_b->size[0];
          c2_c_b->size[0] = c2_c_environment[1].f1->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i35,
            &c2_jc_emlrtRTEI);
          c2_s_loop_ub = c2_c_environment[1].f1->size[0] - 1;
          for (c2_i36 = 0; c2_i36 <= c2_s_loop_ub; c2_i36++) {
            c2_c_b->data[c2_i36] = c2_c_environment[1].f1->data[c2_i36];
          }

          c2_f_i = c2_c_varargin_1;
          c2_e_j = c2_c_varargin_2;
          c2_g_i = c2_f_i - 1;
          c2_f_j = c2_e_j - 1;
          c2_c_ai = c2_a->data[c2_g_i];
          c2_c_aj = c2_a->data[c2_f_j];
          if (c2_c_ai < c2_c_aj) {
            c2_c_varargout_1 = true;
          } else if (c2_c_ai == c2_c_aj) {
            c2_c_varargout_1 = (c2_c_b->data[c2_g_i] < c2_c_b->data[c2_f_j]);
          } else {
            c2_c_varargout_1 = false;
          }

          if (c2_c_varargout_1) {
            c2_t = c2_x->data[c2_xmid];
            c2_x->data[c2_xmid] = c2_x->data[c2_b_xend];
            c2_x->data[c2_b_xend] = c2_t;
          }

          c2_pivot = c2_x->data[c2_xmid];
          c2_x->data[c2_xmid] = c2_x->data[c2_b_xend - 1];
          c2_x->data[c2_b_xend - 1] = c2_pivot;
          c2_h_i = c2_b_xstart;
          c2_g_j = c2_b_xend - 1;
          do {
            c2_exitg3 = 0;
            c2_h_i++;
            do {
              c2_exitg4 = 0;
              c2_d_varargin_1 = c2_x->data[c2_h_i];
              c2_d_varargin_2 = c2_pivot;
              c2_i37 = c2_a->size[0];
              c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i37,
                &c2_ic_emlrtRTEI);
              c2_t_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
              for (c2_i38 = 0; c2_i38 <= c2_t_loop_ub; c2_i38++) {
                c2_a->data[c2_i38] = c2_cmp.tunableEnvironment[0].f1->
                  data[c2_i38];
              }

              c2_i39 = c2_c_b->size[0];
              c2_c_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i39,
                &c2_ic_emlrtRTEI);
              c2_u_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
              for (c2_i40 = 0; c2_i40 <= c2_u_loop_ub; c2_i40++) {
                c2_c_b->data[c2_i40] = c2_cmp.tunableEnvironment[1].f1->
                  data[c2_i40];
              }

              c2_i41 = c2_d_environment[0].f1->size[0];
              c2_d_environment[0].f1->size[0] = c2_a->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp,
                c2_d_environment[0].f1, c2_i41, &c2_ic_emlrtRTEI);
              c2_v_loop_ub = c2_a->size[0] - 1;
              for (c2_i42 = 0; c2_i42 <= c2_v_loop_ub; c2_i42++) {
                c2_d_environment[0].f1->data[c2_i42] = c2_a->data[c2_i42];
              }

              c2_i43 = c2_d_environment[1].f1->size[0];
              c2_d_environment[1].f1->size[0] = c2_c_b->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp,
                c2_d_environment[1].f1, c2_i43, &c2_ic_emlrtRTEI);
              c2_w_loop_ub = c2_c_b->size[0] - 1;
              for (c2_i44 = 0; c2_i44 <= c2_w_loop_ub; c2_i44++) {
                c2_d_environment[1].f1->data[c2_i44] = c2_c_b->data[c2_i44];
              }

              c2_i45 = c2_a->size[0];
              c2_a->size[0] = c2_d_environment[0].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i45,
                &c2_jc_emlrtRTEI);
              c2_x_loop_ub = c2_d_environment[0].f1->size[0] - 1;
              for (c2_i46 = 0; c2_i46 <= c2_x_loop_ub; c2_i46++) {
                c2_a->data[c2_i46] = c2_d_environment[0].f1->data[c2_i46];
              }

              c2_i47 = c2_c_b->size[0];
              c2_c_b->size[0] = c2_d_environment[1].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i47,
                &c2_jc_emlrtRTEI);
              c2_y_loop_ub = c2_d_environment[1].f1->size[0] - 1;
              for (c2_i48 = 0; c2_i48 <= c2_y_loop_ub; c2_i48++) {
                c2_c_b->data[c2_i48] = c2_d_environment[1].f1->data[c2_i48];
              }

              c2_i_i = c2_d_varargin_1;
              c2_h_j = c2_d_varargin_2;
              c2_j_i = c2_i_i - 1;
              c2_i_j = c2_h_j - 1;
              c2_d_ai = c2_a->data[c2_j_i];
              c2_d_aj = c2_a->data[c2_i_j];
              if (c2_d_ai < c2_d_aj) {
                c2_d_varargout_1 = true;
              } else if (c2_d_ai == c2_d_aj) {
                c2_d_varargout_1 = (c2_c_b->data[c2_j_i] < c2_c_b->data[c2_i_j]);
              } else {
                c2_d_varargout_1 = false;
              }

              if (c2_d_varargout_1) {
                c2_h_i++;
              } else {
                c2_exitg4 = 1;
              }
            } while (c2_exitg4 == 0);

            c2_g_j--;
            do {
              c2_exitg4 = 0;
              c2_e_varargin_1 = c2_pivot;
              c2_e_varargin_2 = c2_x->data[c2_g_j];
              c2_i49 = c2_a->size[0];
              c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i49,
                &c2_ic_emlrtRTEI);
              c2_ab_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
              for (c2_i50 = 0; c2_i50 <= c2_ab_loop_ub; c2_i50++) {
                c2_a->data[c2_i50] = c2_cmp.tunableEnvironment[0].f1->
                  data[c2_i50];
              }

              c2_i51 = c2_c_b->size[0];
              c2_c_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i51,
                &c2_ic_emlrtRTEI);
              c2_bb_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
              for (c2_i52 = 0; c2_i52 <= c2_bb_loop_ub; c2_i52++) {
                c2_c_b->data[c2_i52] = c2_cmp.tunableEnvironment[1].f1->
                  data[c2_i52];
              }

              c2_i53 = c2_e_environment[0].f1->size[0];
              c2_e_environment[0].f1->size[0] = c2_a->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp,
                c2_e_environment[0].f1, c2_i53, &c2_ic_emlrtRTEI);
              c2_cb_loop_ub = c2_a->size[0] - 1;
              for (c2_i54 = 0; c2_i54 <= c2_cb_loop_ub; c2_i54++) {
                c2_e_environment[0].f1->data[c2_i54] = c2_a->data[c2_i54];
              }

              c2_i55 = c2_e_environment[1].f1->size[0];
              c2_e_environment[1].f1->size[0] = c2_c_b->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp,
                c2_e_environment[1].f1, c2_i55, &c2_ic_emlrtRTEI);
              c2_db_loop_ub = c2_c_b->size[0] - 1;
              for (c2_i56 = 0; c2_i56 <= c2_db_loop_ub; c2_i56++) {
                c2_e_environment[1].f1->data[c2_i56] = c2_c_b->data[c2_i56];
              }

              c2_i57 = c2_a->size[0];
              c2_a->size[0] = c2_e_environment[0].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i57,
                &c2_jc_emlrtRTEI);
              c2_eb_loop_ub = c2_e_environment[0].f1->size[0] - 1;
              for (c2_i58 = 0; c2_i58 <= c2_eb_loop_ub; c2_i58++) {
                c2_a->data[c2_i58] = c2_e_environment[0].f1->data[c2_i58];
              }

              c2_i59 = c2_c_b->size[0];
              c2_c_b->size[0] = c2_e_environment[1].f1->size[0];
              c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_b, c2_i59,
                &c2_jc_emlrtRTEI);
              c2_fb_loop_ub = c2_e_environment[1].f1->size[0] - 1;
              for (c2_i60 = 0; c2_i60 <= c2_fb_loop_ub; c2_i60++) {
                c2_c_b->data[c2_i60] = c2_e_environment[1].f1->data[c2_i60];
              }

              c2_k_i = c2_e_varargin_1;
              c2_j_j = c2_e_varargin_2;
              c2_l_i = c2_k_i - 1;
              c2_k_j = c2_j_j - 1;
              c2_e_ai = c2_a->data[c2_l_i];
              c2_e_aj = c2_a->data[c2_k_j];
              if (c2_e_ai < c2_e_aj) {
                c2_e_varargout_1 = true;
              } else if (c2_e_ai == c2_e_aj) {
                c2_e_varargout_1 = (c2_c_b->data[c2_l_i] < c2_c_b->data[c2_k_j]);
              } else {
                c2_e_varargout_1 = false;
              }

              if (c2_e_varargout_1) {
                c2_g_j--;
              } else {
                c2_exitg4 = 1;
              }
            } while (c2_exitg4 == 0);

            if (c2_h_i + 1 >= c2_g_j + 1) {
              c2_exitg3 = 1;
            } else {
              c2_t = c2_x->data[c2_h_i];
              c2_x->data[c2_h_i] = c2_x->data[c2_g_j];
              c2_x->data[c2_g_j] = c2_t;
            }
          } while (c2_exitg3 == 0);

          c2_b_p = c2_h_i + 1;
          c2_x->data[c2_b_xend - 1] = c2_x->data[c2_h_i];
          c2_x->data[c2_h_i] = c2_pivot;
          if (c2_b_p + 1 < c2_xend) {
            c2_c_x.xstart = c2_b_p + 1;
            c2_c_x.xend = c2_xend;
            c2_c_x.depth = c2_depth;
            c2_st.site = &c2_mb_emlrtRSI;
            c2_b_nd = c2_b_st.d.size[0];
            if (!(c2_b_st.n < c2_b_nd)) {
              c2_f_y = NULL;
              sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U,
                2, 1, 28), false);
              c2_h_y = NULL;
              sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U,
                2, 1, 28), false);
              sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_f_y, 14, sf_mex_call
                          (&c2_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_st,
                "message", 1U, 1U, 14, c2_h_y)));
            }

            c2_b_st.d.data[c2_b_st.n] = c2_c_x;
            c2_b_st.n++;
          }

          if (c2_xstart < c2_b_p) {
            c2_d_x.xstart = c2_xstart;
            c2_d_x.xend = c2_b_p;
            c2_d_x.depth = c2_depth;
            c2_st.site = &c2_lb_emlrtRSI;
            c2_c_nd = c2_b_st.d.size[0];
            if (!(c2_b_st.n < c2_c_nd)) {
              c2_g_y = NULL;
              sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U,
                2, 1, 28), false);
              c2_i_y = NULL;
              sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U,
                2, 1, 28), false);
              sf_mex_call(&c2_st, "error", 0U, 2U, 14, c2_g_y, 14, sf_mex_call
                          (&c2_st, "getString", 1U, 1U, 14, sf_mex_call(&c2_st,
                "message", 1U, 1U, 14, c2_i_y)));
            }

            c2_b_st.d.data[c2_b_st.n] = c2_d_x;
            c2_b_st.n++;
          }
        }
      } else {
        c2_exitg2 = 1;
      }
    } while (c2_exitg2 == 0);

    c2_emxFree_int32_T(chartInstance, &c2_c_b);
    c2_emxFree_int32_T(chartInstance, &c2_a);
    c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_e_environment);
    c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_d_environment);
    c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_c_environment);
    c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_b_environment);
    c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_environment);
  }

  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_d_cmp);
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_c_cmp);
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_b_cmp);
}

static void c2_b_heapsort(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_xstart, int32_T
  c2_xend, c2_coder_internal_anonymous_function c2_cmp)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  c2_coder_internal_anonymous_function c2_b_cmp;
  c2_coder_internal_anonymous_function c2_c_cmp;
  int32_T c2_n;
  int32_T c2_b_xstart;
  int32_T c2_b_xend;
  int32_T c2_b_n;
  int32_T c2_idx;
  int32_T c2_i;
  int32_T c2_b;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  int32_T c2_t;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp,
    &c2_pc_emlrtRTEI);
  c2_emxInitStruct_coder_internal_an(chartInstance, c2_sp, &c2_c_cmp,
    &c2_qc_emlrtRTEI);
  c2_n = c2_xend - c2_xstart;
  c2_b_xstart = c2_xstart;
  c2_b_xend = c2_xend;
  c2_b_n = c2_n + 1;
  for (c2_idx = c2_b_n; c2_idx > 0; c2_idx--) {
    c2_emxCopyStruct_coder_internal_an(chartInstance, c2_sp, &c2_b_cmp, &c2_cmp,
      &c2_pc_emlrtRTEI);
    c2_st.site = &c2_de_emlrtRSI;
    c2_b_heapify(chartInstance, &c2_st, c2_x, c2_idx, c2_b_xstart, c2_b_xend,
                 c2_b_cmp);
  }

  c2_i = c2_n;
  c2_st.site = &c2_sb_emlrtRSI;
  c2_b = c2_i;
  c2_b_b = c2_b;
  if (1 > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_k = 0; c2_k < c2_i; c2_k++) {
    c2_t = c2_x->data[c2_xend - 1];
    c2_x->data[c2_xend - 1] = c2_x->data[c2_xstart - 1];
    c2_x->data[c2_xstart - 1] = c2_t;
    c2_xend--;
    c2_st.site = &c2_ee_emlrtRSI;
    c2_emxCopyStruct_coder_internal_an(chartInstance, &c2_st, &c2_c_cmp, &c2_cmp,
      &c2_qc_emlrtRTEI);
    c2_st.site = &c2_ee_emlrtRSI;
    c2_b_heapify(chartInstance, &c2_st, c2_x, 1, c2_xstart, c2_xend, c2_c_cmp);
  }

  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_c_cmp);
  c2_emxFreeStruct_coder_internal_an(chartInstance, &c2_b_cmp);
}

static void c2_b_heapify(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_x, int32_T c2_idx, int32_T
  c2_xstart, int32_T c2_xend, c2_coder_internal_anonymous_function c2_cmp)
{
  boolean_T c2_changed;
  int32_T c2_xoff;
  int32_T c2_extremumIdx;
  int32_T c2_b;
  int32_T c2_y;
  int32_T c2_leftIdx;
  c2_cell_wrap_1 c2_environment[2];
  c2_cell_wrap_1 c2_b_environment[2];
  c2_emxArray_int32_T *c2_a;
  c2_emxArray_int32_T *c2_b_b;
  int32_T c2_rightIdx;
  c2_cell_wrap_1 c2_c_environment[2];
  int32_T c2_extremum;
  int32_T c2_cmpIdx;
  int32_T c2_xcmp;
  int32_T c2_xr;
  int32_T c2_varargin_1;
  int32_T c2_b_varargin_1;
  int32_T c2_varargin_2;
  int32_T c2_b_varargin_2;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_loop_ub;
  int32_T c2_b_loop_ub;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_e_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_b_i;
  int32_T c2_c_i;
  int32_T c2_j;
  int32_T c2_b_j;
  int32_T c2_d_i;
  int32_T c2_e_i;
  int32_T c2_c_j;
  int32_T c2_d_j;
  int32_T c2_ai;
  int32_T c2_b_ai;
  int32_T c2_aj;
  int32_T c2_b_aj;
  boolean_T c2_varargout_1;
  boolean_T c2_b_varargout_1;
  int32_T c2_c_varargin_1;
  int32_T c2_c_varargin_2;
  int32_T c2_i24;
  int32_T c2_m_loop_ub;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_n_loop_ub;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_o_loop_ub;
  int32_T c2_i29;
  int32_T c2_i30;
  int32_T c2_p_loop_ub;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_q_loop_ub;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_r_loop_ub;
  int32_T c2_i35;
  int32_T c2_f_i;
  int32_T c2_e_j;
  int32_T c2_g_i;
  int32_T c2_f_j;
  int32_T c2_c_ai;
  int32_T c2_c_aj;
  boolean_T c2_c_varargout_1;
  int32_T c2_c_b;
  int32_T c2_b_y;
  c2_changed = true;
  c2_xoff = c2_xstart - 1;
  c2_extremumIdx = (c2_idx + c2_xoff) - 1;
  c2_b = c2_idx;
  c2_y = c2_b << 1;
  c2_leftIdx = c2_y + c2_xoff;
  c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_environment,
    &c2_kc_emlrtRTEI);
  c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_b_environment,
    &c2_kc_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_a, 1, &c2_jc_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_b_b, 1, &c2_jc_emlrtRTEI);
  while (c2_changed && (c2_leftIdx < c2_xend)) {
    c2_changed = false;
    c2_rightIdx = c2_leftIdx;
    c2_extremum = c2_x->data[c2_extremumIdx];
    c2_cmpIdx = c2_leftIdx;
    c2_xcmp = c2_x->data[c2_leftIdx - 1];
    c2_xr = c2_x->data[c2_rightIdx];
    c2_b_varargin_1 = c2_xcmp;
    c2_b_varargin_2 = c2_xr;
    c2_i1 = c2_a->size[0];
    c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i1,
      &c2_ic_emlrtRTEI);
    c2_b_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
      c2_a->data[c2_i3] = c2_cmp.tunableEnvironment[0].f1->data[c2_i3];
    }

    c2_i5 = c2_b_b->size[0];
    c2_b_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_b, c2_i5,
      &c2_ic_emlrtRTEI);
    c2_d_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
    for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
      c2_b_b->data[c2_i7] = c2_cmp.tunableEnvironment[1].f1->data[c2_i7];
    }

    c2_i9 = c2_environment[0].f1->size[0];
    c2_environment[0].f1->size[0] = c2_a->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_environment[0].f1,
      c2_i9, &c2_ic_emlrtRTEI);
    c2_f_loop_ub = c2_a->size[0] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_f_loop_ub; c2_i11++) {
      c2_environment[0].f1->data[c2_i11] = c2_a->data[c2_i11];
    }

    c2_i13 = c2_environment[1].f1->size[0];
    c2_environment[1].f1->size[0] = c2_b_b->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_environment[1].f1,
      c2_i13, &c2_ic_emlrtRTEI);
    c2_h_loop_ub = c2_b_b->size[0] - 1;
    for (c2_i15 = 0; c2_i15 <= c2_h_loop_ub; c2_i15++) {
      c2_environment[1].f1->data[c2_i15] = c2_b_b->data[c2_i15];
    }

    c2_i17 = c2_a->size[0];
    c2_a->size[0] = c2_environment[0].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i17,
      &c2_jc_emlrtRTEI);
    c2_j_loop_ub = c2_environment[0].f1->size[0] - 1;
    for (c2_i19 = 0; c2_i19 <= c2_j_loop_ub; c2_i19++) {
      c2_a->data[c2_i19] = c2_environment[0].f1->data[c2_i19];
    }

    c2_i21 = c2_b_b->size[0];
    c2_b_b->size[0] = c2_environment[1].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_b, c2_i21,
      &c2_jc_emlrtRTEI);
    c2_l_loop_ub = c2_environment[1].f1->size[0] - 1;
    for (c2_i23 = 0; c2_i23 <= c2_l_loop_ub; c2_i23++) {
      c2_b_b->data[c2_i23] = c2_environment[1].f1->data[c2_i23];
    }

    c2_c_i = c2_b_varargin_1;
    c2_b_j = c2_b_varargin_2;
    c2_e_i = c2_c_i - 1;
    c2_d_j = c2_b_j - 1;
    c2_b_ai = c2_a->data[c2_e_i];
    c2_b_aj = c2_a->data[c2_d_j];
    if (c2_b_ai < c2_b_aj) {
      c2_b_varargout_1 = true;
    } else if (c2_b_ai == c2_b_aj) {
      c2_b_varargout_1 = (c2_b_b->data[c2_e_i] < c2_b_b->data[c2_d_j]);
    } else {
      c2_b_varargout_1 = false;
    }

    if (c2_b_varargout_1) {
      c2_cmpIdx = c2_leftIdx + 1;
      c2_xcmp = c2_xr;
    }

    c2_c_varargin_1 = c2_extremum;
    c2_c_varargin_2 = c2_xcmp;
    c2_i24 = c2_a->size[0];
    c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i24,
      &c2_ic_emlrtRTEI);
    c2_m_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
    for (c2_i25 = 0; c2_i25 <= c2_m_loop_ub; c2_i25++) {
      c2_a->data[c2_i25] = c2_cmp.tunableEnvironment[0].f1->data[c2_i25];
    }

    c2_i26 = c2_b_b->size[0];
    c2_b_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_b, c2_i26,
      &c2_ic_emlrtRTEI);
    c2_n_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
    for (c2_i27 = 0; c2_i27 <= c2_n_loop_ub; c2_i27++) {
      c2_b_b->data[c2_i27] = c2_cmp.tunableEnvironment[1].f1->data[c2_i27];
    }

    c2_i28 = c2_b_environment[0].f1->size[0];
    c2_b_environment[0].f1->size[0] = c2_a->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_environment[0].f1,
      c2_i28, &c2_ic_emlrtRTEI);
    c2_o_loop_ub = c2_a->size[0] - 1;
    for (c2_i29 = 0; c2_i29 <= c2_o_loop_ub; c2_i29++) {
      c2_b_environment[0].f1->data[c2_i29] = c2_a->data[c2_i29];
    }

    c2_i30 = c2_b_environment[1].f1->size[0];
    c2_b_environment[1].f1->size[0] = c2_b_b->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_environment[1].f1,
      c2_i30, &c2_ic_emlrtRTEI);
    c2_p_loop_ub = c2_b_b->size[0] - 1;
    for (c2_i31 = 0; c2_i31 <= c2_p_loop_ub; c2_i31++) {
      c2_b_environment[1].f1->data[c2_i31] = c2_b_b->data[c2_i31];
    }

    c2_i32 = c2_a->size[0];
    c2_a->size[0] = c2_b_environment[0].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i32,
      &c2_jc_emlrtRTEI);
    c2_q_loop_ub = c2_b_environment[0].f1->size[0] - 1;
    for (c2_i33 = 0; c2_i33 <= c2_q_loop_ub; c2_i33++) {
      c2_a->data[c2_i33] = c2_b_environment[0].f1->data[c2_i33];
    }

    c2_i34 = c2_b_b->size[0];
    c2_b_b->size[0] = c2_b_environment[1].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_b, c2_i34,
      &c2_jc_emlrtRTEI);
    c2_r_loop_ub = c2_b_environment[1].f1->size[0] - 1;
    for (c2_i35 = 0; c2_i35 <= c2_r_loop_ub; c2_i35++) {
      c2_b_b->data[c2_i35] = c2_b_environment[1].f1->data[c2_i35];
    }

    c2_f_i = c2_c_varargin_1;
    c2_e_j = c2_c_varargin_2;
    c2_g_i = c2_f_i - 1;
    c2_f_j = c2_e_j - 1;
    c2_c_ai = c2_a->data[c2_g_i];
    c2_c_aj = c2_a->data[c2_f_j];
    if (c2_c_ai < c2_c_aj) {
      c2_c_varargout_1 = true;
    } else if (c2_c_ai == c2_c_aj) {
      c2_c_varargout_1 = (c2_b_b->data[c2_g_i] < c2_b_b->data[c2_f_j]);
    } else {
      c2_c_varargout_1 = false;
    }

    if (c2_c_varargout_1) {
      c2_x->data[c2_extremumIdx] = c2_xcmp;
      c2_x->data[c2_cmpIdx - 1] = c2_extremum;
      c2_extremumIdx = c2_cmpIdx - 1;
      c2_c_b = c2_cmpIdx - c2_xoff;
      c2_b_y = c2_c_b << 1;
      c2_leftIdx = c2_b_y + c2_xoff;
      c2_changed = true;
    }
  }

  c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_b_environment);
  c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_environment);
  c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp, c2_c_environment,
    &c2_kc_emlrtRTEI);
  if (c2_changed && (c2_leftIdx <= c2_xend)) {
    c2_extremum = c2_x->data[c2_extremumIdx];
    c2_xcmp = c2_x->data[c2_leftIdx - 1];
    c2_varargin_1 = c2_extremum;
    c2_varargin_2 = c2_xcmp;
    c2_i = c2_a->size[0];
    c2_a->size[0] = c2_cmp.tunableEnvironment[0].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i,
      &c2_ic_emlrtRTEI);
    c2_loop_ub = c2_cmp.tunableEnvironment[0].f1->size[0] - 1;
    for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
      c2_a->data[c2_i2] = c2_cmp.tunableEnvironment[0].f1->data[c2_i2];
    }

    c2_i4 = c2_b_b->size[0];
    c2_b_b->size[0] = c2_cmp.tunableEnvironment[1].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_b, c2_i4,
      &c2_ic_emlrtRTEI);
    c2_c_loop_ub = c2_cmp.tunableEnvironment[1].f1->size[0] - 1;
    for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
      c2_b_b->data[c2_i6] = c2_cmp.tunableEnvironment[1].f1->data[c2_i6];
    }

    c2_i8 = c2_c_environment[0].f1->size[0];
    c2_c_environment[0].f1->size[0] = c2_a->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_environment[0].f1,
      c2_i8, &c2_ic_emlrtRTEI);
    c2_e_loop_ub = c2_a->size[0] - 1;
    for (c2_i10 = 0; c2_i10 <= c2_e_loop_ub; c2_i10++) {
      c2_c_environment[0].f1->data[c2_i10] = c2_a->data[c2_i10];
    }

    c2_i12 = c2_c_environment[1].f1->size[0];
    c2_c_environment[1].f1->size[0] = c2_b_b->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_c_environment[1].f1,
      c2_i12, &c2_ic_emlrtRTEI);
    c2_g_loop_ub = c2_b_b->size[0] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_g_loop_ub; c2_i14++) {
      c2_c_environment[1].f1->data[c2_i14] = c2_b_b->data[c2_i14];
    }

    c2_i16 = c2_a->size[0];
    c2_a->size[0] = c2_c_environment[0].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_a, c2_i16,
      &c2_jc_emlrtRTEI);
    c2_i_loop_ub = c2_c_environment[0].f1->size[0] - 1;
    for (c2_i18 = 0; c2_i18 <= c2_i_loop_ub; c2_i18++) {
      c2_a->data[c2_i18] = c2_c_environment[0].f1->data[c2_i18];
    }

    c2_i20 = c2_b_b->size[0];
    c2_b_b->size[0] = c2_c_environment[1].f1->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_b_b, c2_i20,
      &c2_jc_emlrtRTEI);
    c2_k_loop_ub = c2_c_environment[1].f1->size[0] - 1;
    for (c2_i22 = 0; c2_i22 <= c2_k_loop_ub; c2_i22++) {
      c2_b_b->data[c2_i22] = c2_c_environment[1].f1->data[c2_i22];
    }

    c2_b_i = c2_varargin_1;
    c2_j = c2_varargin_2;
    c2_d_i = c2_b_i - 1;
    c2_c_j = c2_j - 1;
    c2_ai = c2_a->data[c2_d_i];
    c2_aj = c2_a->data[c2_c_j];
    if (c2_ai < c2_aj) {
      c2_varargout_1 = true;
    } else if (c2_ai == c2_aj) {
      c2_varargout_1 = (c2_b_b->data[c2_d_i] < c2_b_b->data[c2_c_j]);
    } else {
      c2_varargout_1 = false;
    }

    if (c2_varargout_1) {
      c2_x->data[c2_extremumIdx] = c2_xcmp;
      c2_x->data[c2_leftIdx - 1] = c2_extremum;
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_b_b);
  c2_emxFree_int32_T(chartInstance, &c2_a);
  c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_c_environment);
}

static void c2_b_permuteVector(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T *c2_idx, c2_emxArray_int32_T *c2_y)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  c2_emxArray_int32_T *c2_t;
  int32_T c2_ny;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_b;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  int32_T c2_b_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_t, 1, &c2_rc_emlrtRTEI);
  c2_ny = c2_y->size[0];
  c2_i = c2_t->size[0];
  c2_t->size[0] = c2_y->size[0];
  c2_st.site = &c2_ud_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_t, c2_i,
    &c2_rc_emlrtRTEI);
  c2_loop_ub = c2_y->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_t->data[c2_i1] = c2_y->data[c2_i1];
  }

  c2_st.site = &c2_tb_emlrtRSI;
  c2_b = c2_ny;
  c2_b_b = c2_b;
  if (1 > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_k = 1; c2_k - 1 < c2_ny; c2_k++) {
    c2_b_k = c2_k - 1;
    c2_y->data[c2_b_k] = c2_t->data[c2_idx->data[c2_b_k] - 1];
  }

  c2_emxFree_int32_T(chartInstance, &c2_t);
}

static void c2_b_sparse_fillIn(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  int32_T c2_idx;
  int32_T c2_i;
  int32_T c2_b;
  int32_T c2_b_b;
  boolean_T c2_overflow;
  int32_T c2_c;
  int32_T c2_b_c;
  int32_T c2_ridx;
  real_T c2_val;
  int32_T c2_currRowIdx;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_idx = 0;
  c2_i = c2_this->colidx->size[0] - 2;
  c2_st.site = &c2_bc_emlrtRSI;
  c2_b = c2_i + 1;
  c2_b_b = c2_b;
  if (1 > c2_b_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_c = 1; c2_c - 1 <= c2_i; c2_c++) {
    c2_b_c = c2_c;
    c2_ridx = c2_this->colidx->data[c2_b_c - 1] - 1;
    c2_this->colidx->data[c2_b_c - 1] = c2_idx + 1;
    while (c2_ridx + 1 < c2_this->colidx->data[c2_b_c]) {
      c2_val = 0.0;
      c2_currRowIdx = c2_this->rowidx->data[c2_ridx];
      while ((c2_ridx + 1 < c2_this->colidx->data[c2_b_c]) && (c2_this->
              rowidx->data[c2_ridx] == c2_currRowIdx)) {
        c2_val += c2_this->d->data[c2_ridx];
        c2_ridx++;
      }

      if (c2_val != 0.0) {
        c2_this->d->data[c2_idx] = c2_val;
        c2_this->rowidx->data[c2_idx] = c2_currRowIdx;
        c2_idx++;
      }
    }
  }

  c2_this->colidx->data[c2_this->colidx->size[0] - 1] = c2_idx + 1;
}

static void c2_e_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  c2_emxArray_int32_T *c2_b_this;
  int32_T c2_cidx;
  int32_T c2_b_cidx;
  int32_T c2_k;
  real_T c2_nt;
  int32_T c2_col;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_vidx;
  boolean_T c2_found;
  real_T c2_thisv;
  real_T c2_v;
  int32_T c2_c_y;
  int32_T c2_d_y;
  real_T c2_rhsv;
  int32_T c2_n;
  real_T c2_b_n;
  int32_T c2_nz;
  int32_T c2_idx;
  int32_T c2_outstart;
  int32_T c2_instart;
  int32_T c2_nelem;
  int32_T c2_b_outstart;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_b_col;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_c_col;
  int32_T c2_b_k;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_c_k;
  int32_T c2_i6;
  int32_T c2_c_loop_ub;
  int32_T c2_c_outstart;
  int32_T c2_i7;
  int32_T c2_c_instart;
  int32_T c2_c_nelem;
  int32_T c2_d_outstart;
  int32_T c2_i8;
  int32_T c2_d_instart;
  int32_T c2_d_nelem;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_e_loop_ub;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_g_loop_ub;
  int32_T c2_e_outstart;
  int32_T c2_i15;
  int32_T c2_e_instart;
  int32_T c2_e_nelem;
  int32_T c2_f_outstart;
  int32_T c2_i16;
  int32_T c2_f_instart;
  int32_T c2_f_nelem;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  int32_T c2_i_loop_ub;
  int32_T c2_i19;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_cc_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_st.site = &c2_dc_emlrtRSI;
  c2_c_st.site = &c2_ec_emlrtRSI;
  c2_sparse_validateNumericIndex(chartInstance, &c2_c_st);
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, &c2_c_st, &c2_b_y, 1, &c2_e_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_b_this, 1, &c2_b_emlrtRTEI);
  for (c2_cidx = 0; c2_cidx < 3; c2_cidx++) {
    c2_b_cidx = c2_cidx;
    c2_k = c2_b_cidx;
    c2_nt = 1.0 + (real_T)c2_k;
    c2_col = (int32_T)c2_nt;
    c2_i = c2_b_this->size[0];
    c2_b_this->size[0] = c2_this->rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_c_st, c2_b_this, c2_i,
      &c2_b_emlrtRTEI);
    c2_loop_ub = c2_this->rowidx->size[0] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
      c2_b_this->data[c2_i1] = c2_this->rowidx->data[c2_i1];
    }

    c2_sparse_locBsearch(chartInstance, c2_b_this, 1, c2_this->colidx->
                         data[c2_col - 1], c2_this->colidx->data[c2_col],
                         &c2_vidx, &c2_found);
    if (c2_found) {
      c2_thisv = c2_this->d->data[c2_vidx - 1];
    } else {
      c2_thisv = 0.0;
    }

    c2_v = 1.0 + -(real_T)(c2_rhsIter.idx - 1);
    c2_c_y = c2_rhsIter.idx;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter.idx = c2_d_y;
    c2_rhsv = c2_v;
    if ((c2_thisv == 0.0) && (c2_rhsv == 0.0)) {
    } else {
      c2_n = c2_this->colidx->data[c2_this->colidx->size[0] - 1];
      c2_b_n = (real_T)(c2_n - 1);
      c2_nz = (int32_T)c2_b_n;
      if ((c2_thisv != 0.0) && (c2_rhsv != 0.0)) {
        c2_this->d->data[c2_vidx - 1] = c2_rhsv;
      } else if (c2_thisv == 0.0) {
        c2_idx = c2_vidx;
        if (c2_nz == c2_this->maxnz) {
          c2_d_st.site = &c2_gc_emlrtRSI;
          c2_c_realloc(chartInstance, &c2_d_st, c2_this, c2_nz + 10, c2_idx,
                       c2_idx + 1, c2_nz, 1);
          c2_this->rowidx->data[c2_idx] = 1;
          c2_this->d->data[c2_idx] = c2_rhsv;
        } else {
          c2_d_st.site = &c2_hc_emlrtRSI;
          c2_b_outstart = c2_idx + 2;
          c2_b_instart = c2_idx + 1;
          c2_b_nelem = c2_nz - c2_idx;
          if (!(c2_b_nelem <= 0)) {
            c2_e_st.site = &c2_lc_emlrtRSI;
            c2_i4 = c2_y->size[0];
            c2_y->size[0] = c2_this->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i4,
              &c2_c_emlrtRTEI);
            c2_c_loop_ub = c2_this->rowidx->size[0] - 1;
            for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
              c2_y->data[c2_i7] = c2_this->rowidx->data[c2_i7];
            }

            c2_d_outstart = c2_b_outstart - 1;
            c2_d_instart = c2_b_instart - 1;
            c2_d_nelem = c2_b_nelem;
            c2_i9 = c2_this->rowidx->size[0];
            c2_this->rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st,
              c2_this->rowidx, c2_i9, &c2_sc_emlrtRTEI);
            c2_e_loop_ub = c2_y->size[0] - 1;
            for (c2_i11 = 0; c2_i11 <= c2_e_loop_ub; c2_i11++) {
              c2_this->rowidx->data[c2_i11] = c2_y->data[c2_i11];
            }

            memmove((void *)&c2_this->rowidx->data[c2_d_outstart], (void *)
                    &c2_this->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                     c2_d_nelem * sizeof(int32_T)));
            c2_e_st.site = &c2_mc_emlrtRSI;
            c2_i13 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_this->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i13,
              &c2_e_emlrtRTEI);
            c2_g_loop_ub = c2_this->d->size[0] - 1;
            for (c2_i15 = 0; c2_i15 <= c2_g_loop_ub; c2_i15++) {
              c2_b_y->data[c2_i15] = c2_this->d->data[c2_i15];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i17 = c2_this->d->size[0];
            c2_this->d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
              c2_i17, &c2_sc_emlrtRTEI);
            c2_i_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
              c2_this->d->data[c2_i19] = c2_b_y->data[c2_i19];
            }

            memmove((void *)&c2_this->d->data[c2_f_outstart], (void *)
                    &c2_this->d->data[c2_f_instart], (uint32_T)((size_t)
                     c2_f_nelem * sizeof(real_T)));
          }

          c2_this->d->data[c2_idx] = c2_rhsv;
          c2_this->rowidx->data[c2_idx] = 1;
        }

        c2_c_col = c2_col + 1;
        c2_i5 = c2_c_col;
        for (c2_c_k = c2_i5 - 1; c2_c_k + 1 < 8; c2_c_k++) {
          c2_this->colidx->data[c2_c_k]++;
        }
      } else {
        c2_d_st.site = &c2_ic_emlrtRSI;
        c2_outstart = c2_vidx;
        c2_instart = c2_vidx + 1;
        c2_nelem = c2_nz - c2_vidx;
        if (!(c2_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i2 = c2_y->size[0];
          c2_y->size[0] = c2_this->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i2,
            &c2_c_emlrtRTEI);
          c2_b_loop_ub = c2_this->rowidx->size[0] - 1;
          for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
            c2_y->data[c2_i6] = c2_this->rowidx->data[c2_i6];
          }

          c2_c_outstart = c2_outstart - 1;
          c2_c_instart = c2_instart - 1;
          c2_c_nelem = c2_nelem;
          c2_i8 = c2_this->rowidx->size[0];
          c2_this->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_this->rowidx,
            c2_i8, &c2_sc_emlrtRTEI);
          c2_d_loop_ub = c2_y->size[0] - 1;
          for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
            c2_this->rowidx->data[c2_i10] = c2_y->data[c2_i10];
          }

          memmove((void *)&c2_this->rowidx->data[c2_c_outstart], (void *)
                  &c2_this->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                   c2_c_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i12 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_this->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i12,
            &c2_e_emlrtRTEI);
          c2_f_loop_ub = c2_this->d->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
            c2_b_y->data[c2_i14] = c2_this->d->data[c2_i14];
          }

          c2_e_outstart = c2_outstart - 1;
          c2_e_instart = c2_instart - 1;
          c2_e_nelem = c2_nelem;
          c2_i16 = c2_this->d->size[0];
          c2_this->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
            c2_i16, &c2_sc_emlrtRTEI);
          c2_h_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
            c2_this->d->data[c2_i18] = c2_b_y->data[c2_i18];
          }

          memmove((void *)&c2_this->d->data[c2_e_outstart], (void *)&c2_this->
                  d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem * sizeof
                   (real_T)));
        }

        c2_b_col = c2_col + 1;
        c2_i3 = c2_b_col;
        for (c2_b_k = c2_i3 - 1; c2_b_k + 1 < 8; c2_b_k++) {
          c2_this->colidx->data[c2_b_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_b_this);
  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
}

static void c2_c_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  c2_emxArray_int32_T *c2_rowidxt;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxArray_real_T *c2_dt;
  int32_T c2_i2;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  int32_T c2_a;
  int32_T c2_y;
  int32_T c2_b;
  int32_T c2_numAlloc;
  int32_T c2_i4;
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_d_loop_ub;
  int32_T c2_i7;
  int32_T c2_b_b;
  int32_T c2_c_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  int32_T c2_b_k;
  int32_T c2_b_a;
  int32_T c2_d_b;
  int32_T c2_c_a;
  int32_T c2_e_b;
  boolean_T c2_b_overflow;
  int32_T c2_c_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_rowidxt, 1, &c2_tc_emlrtRTEI);
  c2_i = c2_rowidxt->size[0];
  c2_rowidxt->size[0] = c2_this->rowidx->size[0];
  c2_st.site = &c2_td_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_rowidxt, c2_i,
    &c2_tc_emlrtRTEI);
  c2_loop_ub = c2_this->rowidx->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_rowidxt->data[c2_i1] = c2_this->rowidx->data[c2_i1];
  }

  c2_emxInit_real_T(chartInstance, c2_sp, &c2_dt, 1, &c2_uc_emlrtRTEI);
  c2_i2 = c2_dt->size[0];
  c2_dt->size[0] = c2_this->d->size[0];
  c2_st.site = &c2_xd_emlrtRSI;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_dt, c2_i2,
    &c2_uc_emlrtRTEI);
  c2_b_loop_ub = c2_this->d->size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_dt->data[c2_i3] = c2_this->d->data[c2_i3];
  }

  c2_a = c2_numAllocRequested;
  if (c2_a <= 36) {
    c2_y = c2_a;
  } else {
    c2_y = 36;
  }

  c2_b = c2_y;
  if (1 >= c2_b) {
    c2_numAlloc = 1;
  } else {
    c2_numAlloc = c2_b;
  }

  c2_i4 = c2_this->rowidx->size[0];
  c2_this->rowidx->size[0] = c2_numAlloc;
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_this->rowidx, c2_i4,
    &c2_vc_emlrtRTEI);
  c2_c_loop_ub = c2_numAlloc - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_this->rowidx->data[c2_i5] = 0;
  }

  c2_i6 = c2_this->d->size[0];
  c2_this->d->size[0] = c2_numAlloc;
  c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_this->d, c2_i6,
    &c2_wc_emlrtRTEI);
  c2_d_loop_ub = c2_numAlloc - 1;
  for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
    c2_this->d->data[c2_i7] = 0.0;
  }

  c2_this->maxnz = c2_numAlloc;
  c2_st.site = &c2_jc_emlrtRSI;
  c2_b_b = c2_ub1;
  c2_c_b = c2_b_b;
  if (1 > c2_c_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_c_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_k = 1; c2_k - 1 < c2_ub1; c2_k++) {
    c2_b_k = c2_k - 1;
    c2_this->rowidx->data[c2_b_k] = c2_rowidxt->data[c2_b_k];
    c2_this->d->data[c2_b_k] = c2_dt->data[c2_b_k];
  }

  c2_st.site = &c2_kc_emlrtRSI;
  c2_b_a = c2_lb2;
  c2_d_b = c2_ub2;
  c2_c_a = c2_b_a;
  c2_e_b = c2_d_b;
  if (c2_c_a > c2_e_b) {
    c2_b_overflow = false;
  } else {
    c2_b_overflow = (c2_e_b > 2147483646);
  }

  if (c2_b_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_c_k = c2_lb2 - 1; c2_c_k < c2_ub2; c2_c_k++) {
    c2_this->rowidx->data[c2_c_k + c2_offs] = c2_rowidxt->data[c2_c_k];
    c2_this->d->data[c2_c_k + c2_offs] = c2_dt->data[c2_c_k];
  }

  c2_emxFree_real_T(chartInstance, &c2_dt);
  c2_emxFree_int32_T(chartInstance, &c2_rowidxt);
}

static void c2_f_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  c2_emxArray_int32_T *c2_b_this;
  int32_T c2_cidx;
  int32_T c2_b_cidx;
  int32_T c2_k;
  real_T c2_nt;
  int32_T c2_col;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_vidx;
  boolean_T c2_found;
  real_T c2_thisv;
  real_T c2_v;
  int32_T c2_c_y;
  int32_T c2_d_y;
  real_T c2_rhsv;
  int32_T c2_n;
  real_T c2_b_n;
  int32_T c2_nz;
  int32_T c2_idx;
  int32_T c2_outstart;
  int32_T c2_instart;
  int32_T c2_nelem;
  int32_T c2_b_outstart;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_b_col;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_c_col;
  int32_T c2_b_k;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_c_k;
  int32_T c2_i6;
  int32_T c2_c_loop_ub;
  int32_T c2_c_outstart;
  int32_T c2_i7;
  int32_T c2_c_instart;
  int32_T c2_c_nelem;
  int32_T c2_d_outstart;
  int32_T c2_i8;
  int32_T c2_d_instart;
  int32_T c2_d_nelem;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_e_loop_ub;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_g_loop_ub;
  int32_T c2_e_outstart;
  int32_T c2_i15;
  int32_T c2_e_instart;
  int32_T c2_e_nelem;
  int32_T c2_f_outstart;
  int32_T c2_i16;
  int32_T c2_f_instart;
  int32_T c2_f_nelem;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  int32_T c2_i_loop_ub;
  int32_T c2_i19;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_cc_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_st.site = &c2_dc_emlrtRSI;
  c2_c_st.site = &c2_ec_emlrtRSI;
  c2_b_sparse_validateNumericIndex(chartInstance, &c2_c_st);
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, &c2_c_st, &c2_b_y, 1, &c2_e_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_b_this, 1, &c2_b_emlrtRTEI);
  for (c2_cidx = 0; c2_cidx < 3; c2_cidx++) {
    c2_b_cidx = c2_cidx;
    c2_k = c2_b_cidx;
    c2_nt = 4.0 + (real_T)c2_k;
    c2_col = (int32_T)c2_nt;
    c2_i = c2_b_this->size[0];
    c2_b_this->size[0] = c2_this->rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_c_st, c2_b_this, c2_i,
      &c2_b_emlrtRTEI);
    c2_loop_ub = c2_this->rowidx->size[0] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
      c2_b_this->data[c2_i1] = c2_this->rowidx->data[c2_i1];
    }

    c2_sparse_locBsearch(chartInstance, c2_b_this, 6, c2_this->colidx->
                         data[c2_col - 1], c2_this->colidx->data[c2_col],
                         &c2_vidx, &c2_found);
    if (c2_found) {
      c2_thisv = c2_this->d->data[c2_vidx - 1];
    } else {
      c2_thisv = 0.0;
    }

    c2_v = 1.0 + -(real_T)(c2_rhsIter.idx - 1);
    c2_c_y = c2_rhsIter.idx;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter.idx = c2_d_y;
    c2_rhsv = c2_v;
    if ((c2_thisv == 0.0) && (c2_rhsv == 0.0)) {
    } else {
      c2_n = c2_this->colidx->data[c2_this->colidx->size[0] - 1];
      c2_b_n = (real_T)(c2_n - 1);
      c2_nz = (int32_T)c2_b_n;
      if ((c2_thisv != 0.0) && (c2_rhsv != 0.0)) {
        c2_this->d->data[c2_vidx - 1] = c2_rhsv;
      } else if (c2_thisv == 0.0) {
        c2_idx = c2_vidx;
        if (c2_nz == c2_this->maxnz) {
          c2_d_st.site = &c2_gc_emlrtRSI;
          c2_c_realloc(chartInstance, &c2_d_st, c2_this, c2_nz + 10, c2_idx,
                       c2_idx + 1, c2_nz, 1);
          c2_this->rowidx->data[c2_idx] = 6;
          c2_this->d->data[c2_idx] = c2_rhsv;
        } else {
          c2_d_st.site = &c2_hc_emlrtRSI;
          c2_b_outstart = c2_idx + 2;
          c2_b_instart = c2_idx + 1;
          c2_b_nelem = c2_nz - c2_idx;
          if (!(c2_b_nelem <= 0)) {
            c2_e_st.site = &c2_lc_emlrtRSI;
            c2_i4 = c2_y->size[0];
            c2_y->size[0] = c2_this->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i4,
              &c2_c_emlrtRTEI);
            c2_c_loop_ub = c2_this->rowidx->size[0] - 1;
            for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
              c2_y->data[c2_i7] = c2_this->rowidx->data[c2_i7];
            }

            c2_d_outstart = c2_b_outstart - 1;
            c2_d_instart = c2_b_instart - 1;
            c2_d_nelem = c2_b_nelem;
            c2_i9 = c2_this->rowidx->size[0];
            c2_this->rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st,
              c2_this->rowidx, c2_i9, &c2_sc_emlrtRTEI);
            c2_e_loop_ub = c2_y->size[0] - 1;
            for (c2_i11 = 0; c2_i11 <= c2_e_loop_ub; c2_i11++) {
              c2_this->rowidx->data[c2_i11] = c2_y->data[c2_i11];
            }

            memmove((void *)&c2_this->rowidx->data[c2_d_outstart], (void *)
                    &c2_this->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                     c2_d_nelem * sizeof(int32_T)));
            c2_e_st.site = &c2_mc_emlrtRSI;
            c2_i13 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_this->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i13,
              &c2_e_emlrtRTEI);
            c2_g_loop_ub = c2_this->d->size[0] - 1;
            for (c2_i15 = 0; c2_i15 <= c2_g_loop_ub; c2_i15++) {
              c2_b_y->data[c2_i15] = c2_this->d->data[c2_i15];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i17 = c2_this->d->size[0];
            c2_this->d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
              c2_i17, &c2_sc_emlrtRTEI);
            c2_i_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
              c2_this->d->data[c2_i19] = c2_b_y->data[c2_i19];
            }

            memmove((void *)&c2_this->d->data[c2_f_outstart], (void *)
                    &c2_this->d->data[c2_f_instart], (uint32_T)((size_t)
                     c2_f_nelem * sizeof(real_T)));
          }

          c2_this->d->data[c2_idx] = c2_rhsv;
          c2_this->rowidx->data[c2_idx] = 6;
        }

        c2_c_col = c2_col + 1;
        c2_i5 = c2_c_col;
        for (c2_c_k = c2_i5 - 1; c2_c_k + 1 < 8; c2_c_k++) {
          c2_this->colidx->data[c2_c_k]++;
        }
      } else {
        c2_d_st.site = &c2_ic_emlrtRSI;
        c2_outstart = c2_vidx;
        c2_instart = c2_vidx + 1;
        c2_nelem = c2_nz - c2_vidx;
        if (!(c2_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i2 = c2_y->size[0];
          c2_y->size[0] = c2_this->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i2,
            &c2_c_emlrtRTEI);
          c2_b_loop_ub = c2_this->rowidx->size[0] - 1;
          for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
            c2_y->data[c2_i6] = c2_this->rowidx->data[c2_i6];
          }

          c2_c_outstart = c2_outstart - 1;
          c2_c_instart = c2_instart - 1;
          c2_c_nelem = c2_nelem;
          c2_i8 = c2_this->rowidx->size[0];
          c2_this->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_this->rowidx,
            c2_i8, &c2_sc_emlrtRTEI);
          c2_d_loop_ub = c2_y->size[0] - 1;
          for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
            c2_this->rowidx->data[c2_i10] = c2_y->data[c2_i10];
          }

          memmove((void *)&c2_this->rowidx->data[c2_c_outstart], (void *)
                  &c2_this->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                   c2_c_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i12 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_this->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i12,
            &c2_e_emlrtRTEI);
          c2_f_loop_ub = c2_this->d->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
            c2_b_y->data[c2_i14] = c2_this->d->data[c2_i14];
          }

          c2_e_outstart = c2_outstart - 1;
          c2_e_instart = c2_instart - 1;
          c2_e_nelem = c2_nelem;
          c2_i16 = c2_this->d->size[0];
          c2_this->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
            c2_i16, &c2_sc_emlrtRTEI);
          c2_h_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
            c2_this->d->data[c2_i18] = c2_b_y->data[c2_i18];
          }

          memmove((void *)&c2_this->d->data[c2_e_outstart], (void *)&c2_this->
                  d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem * sizeof
                   (real_T)));
        }

        c2_b_col = c2_col + 1;
        c2_i3 = c2_b_col;
        for (c2_b_k = c2_i3 - 1; c2_b_k + 1 < 8; c2_b_k++) {
          c2_this->colidx->data[c2_b_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_b_this);
  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
}

static int32_T c2_c_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  c2_coder_internal_sparse *c2_this, c2_szVgRoYADpv9jTouZDFZ3mB *c2_rhsIter,
  int32_T c2_outStart, real_T c2_rhs[6])
{
  int32_T c2_outIdx;
  int32_T c2_k;
  int32_T c2_b_k;
  real_T c2_rhsv;
  int32_T c2_y;
  int32_T c2_b_y;
  int32_T c2_c_y;
  int32_T c2_d_y;
  (void)chartInstance;
  c2_outIdx = c2_outStart;
  for (c2_k = 0; c2_k < 6; c2_k++) {
    c2_b_k = c2_k;
    c2_rhsv = c2_rhs[c2_rhsIter->idx - 1];
    c2_y = c2_rhsIter->idx;
    c2_b_y = c2_y + 1;
    c2_rhsIter->idx = c2_b_y;
    c2_c_y = c2_rhsIter->row;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter->row = c2_d_y;
    if (c2_rhsv != 0.0) {
      c2_this->rowidx->data[c2_outIdx - 1] = c2_b_k + 1;
      c2_this->d->data[c2_outIdx - 1] = c2_rhsv;
      c2_outIdx++;
    }
  }

  return c2_outIdx;
}

static void c2_g_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  c2_emxArray_int32_T *c2_b_this;
  int32_T c2_cidx;
  int32_T c2_b_cidx;
  int32_T c2_k;
  real_T c2_nt;
  int32_T c2_col;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_vidx;
  boolean_T c2_found;
  real_T c2_thisv;
  real_T c2_v;
  int32_T c2_c_y;
  int32_T c2_d_y;
  real_T c2_rhsv;
  int32_T c2_n;
  real_T c2_b_n;
  int32_T c2_nz;
  int32_T c2_idx;
  int32_T c2_outstart;
  int32_T c2_instart;
  int32_T c2_nelem;
  int32_T c2_b_outstart;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_b_col;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_c_col;
  int32_T c2_b_k;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_c_k;
  int32_T c2_i6;
  int32_T c2_c_loop_ub;
  int32_T c2_c_outstart;
  int32_T c2_i7;
  int32_T c2_c_instart;
  int32_T c2_c_nelem;
  int32_T c2_d_outstart;
  int32_T c2_i8;
  int32_T c2_d_instart;
  int32_T c2_d_nelem;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_e_loop_ub;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_g_loop_ub;
  int32_T c2_e_outstart;
  int32_T c2_i15;
  int32_T c2_e_instart;
  int32_T c2_e_nelem;
  int32_T c2_f_outstart;
  int32_T c2_i16;
  int32_T c2_f_instart;
  int32_T c2_f_nelem;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  int32_T c2_i_loop_ub;
  int32_T c2_i19;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_cc_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_st.site = &c2_dc_emlrtRSI;
  c2_c_st.site = &c2_ec_emlrtRSI;
  c2_sparse_validateNumericIndex(chartInstance, &c2_c_st);
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, &c2_c_st, &c2_b_y, 1, &c2_e_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_b_this, 1, &c2_b_emlrtRTEI);
  for (c2_cidx = 0; c2_cidx < 3; c2_cidx++) {
    c2_b_cidx = c2_cidx;
    c2_k = c2_b_cidx;
    c2_nt = 1.0 + (real_T)c2_k;
    c2_col = (int32_T)c2_nt;
    c2_i = c2_b_this->size[0];
    c2_b_this->size[0] = c2_this->rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_c_st, c2_b_this, c2_i,
      &c2_b_emlrtRTEI);
    c2_loop_ub = c2_this->rowidx->size[0] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
      c2_b_this->data[c2_i1] = c2_this->rowidx->data[c2_i1];
    }

    c2_sparse_locBsearch(chartInstance, c2_b_this, 1, c2_this->colidx->
                         data[c2_col - 1], c2_this->colidx->data[c2_col],
                         &c2_vidx, &c2_found);
    if (c2_found) {
      c2_thisv = c2_this->d->data[c2_vidx - 1];
    } else {
      c2_thisv = 0.0;
    }

    c2_v = 1.0 + -(real_T)(c2_rhsIter.idx - 1);
    c2_c_y = c2_rhsIter.idx;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter.idx = c2_d_y;
    c2_rhsv = c2_v;
    if ((c2_thisv == 0.0) && (c2_rhsv == 0.0)) {
    } else {
      c2_n = c2_this->colidx->data[c2_this->colidx->size[0] - 1];
      c2_b_n = (real_T)(c2_n - 1);
      c2_nz = (int32_T)c2_b_n;
      if ((c2_thisv != 0.0) && (c2_rhsv != 0.0)) {
        c2_this->d->data[c2_vidx - 1] = c2_rhsv;
      } else if (c2_thisv == 0.0) {
        c2_idx = c2_vidx;
        if (c2_nz == c2_this->maxnz) {
          c2_d_st.site = &c2_gc_emlrtRSI;
          c2_d_realloc(chartInstance, &c2_d_st, c2_this, c2_nz + 10, c2_idx,
                       c2_idx + 1, c2_nz, 1);
          c2_this->rowidx->data[c2_idx] = 1;
          c2_this->d->data[c2_idx] = c2_rhsv;
        } else {
          c2_d_st.site = &c2_hc_emlrtRSI;
          c2_b_outstart = c2_idx + 2;
          c2_b_instart = c2_idx + 1;
          c2_b_nelem = c2_nz - c2_idx;
          if (!(c2_b_nelem <= 0)) {
            c2_e_st.site = &c2_lc_emlrtRSI;
            c2_i4 = c2_y->size[0];
            c2_y->size[0] = c2_this->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i4,
              &c2_c_emlrtRTEI);
            c2_c_loop_ub = c2_this->rowidx->size[0] - 1;
            for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
              c2_y->data[c2_i7] = c2_this->rowidx->data[c2_i7];
            }

            c2_d_outstart = c2_b_outstart - 1;
            c2_d_instart = c2_b_instart - 1;
            c2_d_nelem = c2_b_nelem;
            c2_i9 = c2_this->rowidx->size[0];
            c2_this->rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st,
              c2_this->rowidx, c2_i9, &c2_sc_emlrtRTEI);
            c2_e_loop_ub = c2_y->size[0] - 1;
            for (c2_i11 = 0; c2_i11 <= c2_e_loop_ub; c2_i11++) {
              c2_this->rowidx->data[c2_i11] = c2_y->data[c2_i11];
            }

            memmove((void *)&c2_this->rowidx->data[c2_d_outstart], (void *)
                    &c2_this->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                     c2_d_nelem * sizeof(int32_T)));
            c2_e_st.site = &c2_mc_emlrtRSI;
            c2_i13 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_this->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i13,
              &c2_e_emlrtRTEI);
            c2_g_loop_ub = c2_this->d->size[0] - 1;
            for (c2_i15 = 0; c2_i15 <= c2_g_loop_ub; c2_i15++) {
              c2_b_y->data[c2_i15] = c2_this->d->data[c2_i15];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i17 = c2_this->d->size[0];
            c2_this->d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
              c2_i17, &c2_sc_emlrtRTEI);
            c2_i_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
              c2_this->d->data[c2_i19] = c2_b_y->data[c2_i19];
            }

            memmove((void *)&c2_this->d->data[c2_f_outstart], (void *)
                    &c2_this->d->data[c2_f_instart], (uint32_T)((size_t)
                     c2_f_nelem * sizeof(real_T)));
          }

          c2_this->d->data[c2_idx] = c2_rhsv;
          c2_this->rowidx->data[c2_idx] = 1;
        }

        c2_c_col = c2_col + 1;
        c2_i5 = c2_c_col;
        for (c2_c_k = c2_i5 - 1; c2_c_k + 1 < 6; c2_c_k++) {
          c2_this->colidx->data[c2_c_k]++;
        }
      } else {
        c2_d_st.site = &c2_ic_emlrtRSI;
        c2_outstart = c2_vidx;
        c2_instart = c2_vidx + 1;
        c2_nelem = c2_nz - c2_vidx;
        if (!(c2_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i2 = c2_y->size[0];
          c2_y->size[0] = c2_this->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i2,
            &c2_c_emlrtRTEI);
          c2_b_loop_ub = c2_this->rowidx->size[0] - 1;
          for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
            c2_y->data[c2_i6] = c2_this->rowidx->data[c2_i6];
          }

          c2_c_outstart = c2_outstart - 1;
          c2_c_instart = c2_instart - 1;
          c2_c_nelem = c2_nelem;
          c2_i8 = c2_this->rowidx->size[0];
          c2_this->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_this->rowidx,
            c2_i8, &c2_sc_emlrtRTEI);
          c2_d_loop_ub = c2_y->size[0] - 1;
          for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
            c2_this->rowidx->data[c2_i10] = c2_y->data[c2_i10];
          }

          memmove((void *)&c2_this->rowidx->data[c2_c_outstart], (void *)
                  &c2_this->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                   c2_c_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i12 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_this->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i12,
            &c2_e_emlrtRTEI);
          c2_f_loop_ub = c2_this->d->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
            c2_b_y->data[c2_i14] = c2_this->d->data[c2_i14];
          }

          c2_e_outstart = c2_outstart - 1;
          c2_e_instart = c2_instart - 1;
          c2_e_nelem = c2_nelem;
          c2_i16 = c2_this->d->size[0];
          c2_this->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
            c2_i16, &c2_sc_emlrtRTEI);
          c2_h_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
            c2_this->d->data[c2_i18] = c2_b_y->data[c2_i18];
          }

          memmove((void *)&c2_this->d->data[c2_e_outstart], (void *)&c2_this->
                  d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem * sizeof
                   (real_T)));
        }

        c2_b_col = c2_col + 1;
        c2_i3 = c2_b_col;
        for (c2_b_k = c2_i3 - 1; c2_b_k + 1 < 6; c2_b_k++) {
          c2_this->colidx->data[c2_b_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_b_this);
  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
}

static void c2_d_realloc(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this, int32_T
  c2_numAllocRequested, int32_T c2_ub1, int32_T c2_lb2, int32_T c2_ub2, int32_T
  c2_offs)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  c2_emxArray_int32_T *c2_rowidxt;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  c2_emxArray_real_T *c2_dt;
  int32_T c2_i2;
  int32_T c2_b_loop_ub;
  int32_T c2_i3;
  int32_T c2_a;
  int32_T c2_y;
  int32_T c2_b;
  int32_T c2_numAlloc;
  int32_T c2_i4;
  int32_T c2_c_loop_ub;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_d_loop_ub;
  int32_T c2_i7;
  int32_T c2_b_b;
  int32_T c2_c_b;
  boolean_T c2_overflow;
  int32_T c2_k;
  int32_T c2_b_k;
  int32_T c2_b_a;
  int32_T c2_d_b;
  int32_T c2_c_a;
  int32_T c2_e_b;
  boolean_T c2_b_overflow;
  int32_T c2_c_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_rowidxt, 1, &c2_tc_emlrtRTEI);
  c2_i = c2_rowidxt->size[0];
  c2_rowidxt->size[0] = c2_this->rowidx->size[0];
  c2_st.site = &c2_td_emlrtRSI;
  c2_emxEnsureCapacity_int32_T(chartInstance, &c2_st, c2_rowidxt, c2_i,
    &c2_tc_emlrtRTEI);
  c2_loop_ub = c2_this->rowidx->size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_rowidxt->data[c2_i1] = c2_this->rowidx->data[c2_i1];
  }

  c2_emxInit_real_T(chartInstance, c2_sp, &c2_dt, 1, &c2_uc_emlrtRTEI);
  c2_i2 = c2_dt->size[0];
  c2_dt->size[0] = c2_this->d->size[0];
  c2_st.site = &c2_xd_emlrtRSI;
  c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_dt, c2_i2,
    &c2_uc_emlrtRTEI);
  c2_b_loop_ub = c2_this->d->size[0] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_dt->data[c2_i3] = c2_this->d->data[c2_i3];
  }

  c2_a = c2_numAllocRequested;
  if (c2_a <= 16) {
    c2_y = c2_a;
  } else {
    c2_y = 16;
  }

  c2_b = c2_y;
  if (1 >= c2_b) {
    c2_numAlloc = 1;
  } else {
    c2_numAlloc = c2_b;
  }

  c2_i4 = c2_this->rowidx->size[0];
  c2_this->rowidx->size[0] = c2_numAlloc;
  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, c2_this->rowidx, c2_i4,
    &c2_vc_emlrtRTEI);
  c2_c_loop_ub = c2_numAlloc - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_this->rowidx->data[c2_i5] = 0;
  }

  c2_i6 = c2_this->d->size[0];
  c2_this->d->size[0] = c2_numAlloc;
  c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_this->d, c2_i6,
    &c2_wc_emlrtRTEI);
  c2_d_loop_ub = c2_numAlloc - 1;
  for (c2_i7 = 0; c2_i7 <= c2_d_loop_ub; c2_i7++) {
    c2_this->d->data[c2_i7] = 0.0;
  }

  c2_this->maxnz = c2_numAlloc;
  c2_st.site = &c2_jc_emlrtRSI;
  c2_b_b = c2_ub1;
  c2_c_b = c2_b_b;
  if (1 > c2_c_b) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_c_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_k = 1; c2_k - 1 < c2_ub1; c2_k++) {
    c2_b_k = c2_k - 1;
    c2_this->rowidx->data[c2_b_k] = c2_rowidxt->data[c2_b_k];
    c2_this->d->data[c2_b_k] = c2_dt->data[c2_b_k];
  }

  c2_st.site = &c2_kc_emlrtRSI;
  c2_b_a = c2_lb2;
  c2_d_b = c2_ub2;
  c2_c_a = c2_b_a;
  c2_e_b = c2_d_b;
  if (c2_c_a > c2_e_b) {
    c2_b_overflow = false;
  } else {
    c2_b_overflow = (c2_e_b > 2147483646);
  }

  if (c2_b_overflow) {
    c2_b_st.site = &c2_v_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_c_k = c2_lb2 - 1; c2_c_k < c2_ub2; c2_c_k++) {
    c2_this->rowidx->data[c2_c_k + c2_offs] = c2_rowidxt->data[c2_c_k];
    c2_this->d->data[c2_c_k + c2_offs] = c2_dt->data[c2_c_k];
  }

  c2_emxFree_real_T(chartInstance, &c2_dt);
  c2_emxFree_int32_T(chartInstance, &c2_rowidxt);
}

static void c2_h_sparse_parenAssign(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_this)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  c2_szVgRoYADpv9jTouZDFZ3mB c2_rhsIter;
  c2_emxArray_int32_T *c2_y;
  c2_emxArray_real_T *c2_b_y;
  c2_emxArray_int32_T *c2_b_this;
  int32_T c2_cidx;
  int32_T c2_b_cidx;
  int32_T c2_k;
  real_T c2_nt;
  int32_T c2_col;
  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_vidx;
  boolean_T c2_found;
  real_T c2_thisv;
  real_T c2_v;
  int32_T c2_c_y;
  int32_T c2_d_y;
  real_T c2_rhsv;
  int32_T c2_n;
  real_T c2_b_n;
  int32_T c2_nz;
  int32_T c2_idx;
  int32_T c2_outstart;
  int32_T c2_instart;
  int32_T c2_nelem;
  int32_T c2_b_outstart;
  int32_T c2_b_instart;
  int32_T c2_b_nelem;
  int32_T c2_b_col;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_c_col;
  int32_T c2_b_k;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_b_loop_ub;
  int32_T c2_c_k;
  int32_T c2_i6;
  int32_T c2_c_loop_ub;
  int32_T c2_c_outstart;
  int32_T c2_i7;
  int32_T c2_c_instart;
  int32_T c2_c_nelem;
  int32_T c2_d_outstart;
  int32_T c2_i8;
  int32_T c2_d_instart;
  int32_T c2_d_nelem;
  int32_T c2_i9;
  int32_T c2_d_loop_ub;
  int32_T c2_i10;
  int32_T c2_e_loop_ub;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_f_loop_ub;
  int32_T c2_i14;
  int32_T c2_g_loop_ub;
  int32_T c2_e_outstart;
  int32_T c2_i15;
  int32_T c2_e_instart;
  int32_T c2_e_nelem;
  int32_T c2_f_outstart;
  int32_T c2_i16;
  int32_T c2_f_instart;
  int32_T c2_f_nelem;
  int32_T c2_i17;
  int32_T c2_h_loop_ub;
  int32_T c2_i18;
  int32_T c2_i_loop_ub;
  int32_T c2_i19;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_cc_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_st.site = &c2_dc_emlrtRSI;
  c2_c_st.site = &c2_ec_emlrtRSI;
  c2_c_sparse_validateNumericIndex(chartInstance, &c2_c_st);
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_rhsIter.idx = 1;
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_y, 1, &c2_c_emlrtRTEI);
  c2_emxInit_real_T(chartInstance, &c2_c_st, &c2_b_y, 1, &c2_e_emlrtRTEI);
  c2_emxInit_int32_T(chartInstance, &c2_c_st, &c2_b_this, 1, &c2_b_emlrtRTEI);
  for (c2_cidx = 0; c2_cidx < 3; c2_cidx++) {
    c2_b_cidx = c2_cidx;
    c2_k = c2_b_cidx;
    c2_nt = 2.0 + (real_T)c2_k;
    c2_col = (int32_T)c2_nt;
    c2_i = c2_b_this->size[0];
    c2_b_this->size[0] = c2_this->rowidx->size[0];
    c2_emxEnsureCapacity_int32_T(chartInstance, &c2_c_st, c2_b_this, c2_i,
      &c2_b_emlrtRTEI);
    c2_loop_ub = c2_this->rowidx->size[0] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
      c2_b_this->data[c2_i1] = c2_this->rowidx->data[c2_i1];
    }

    c2_sparse_locBsearch(chartInstance, c2_b_this, 4, c2_this->colidx->
                         data[c2_col - 1], c2_this->colidx->data[c2_col],
                         &c2_vidx, &c2_found);
    if (c2_found) {
      c2_thisv = c2_this->d->data[c2_vidx - 1];
    } else {
      c2_thisv = 0.0;
    }

    c2_v = 1.0 + -(real_T)(c2_rhsIter.idx - 1);
    c2_c_y = c2_rhsIter.idx;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter.idx = c2_d_y;
    c2_rhsv = c2_v;
    if ((c2_thisv == 0.0) && (c2_rhsv == 0.0)) {
    } else {
      c2_n = c2_this->colidx->data[c2_this->colidx->size[0] - 1];
      c2_b_n = (real_T)(c2_n - 1);
      c2_nz = (int32_T)c2_b_n;
      if ((c2_thisv != 0.0) && (c2_rhsv != 0.0)) {
        c2_this->d->data[c2_vidx - 1] = c2_rhsv;
      } else if (c2_thisv == 0.0) {
        c2_idx = c2_vidx;
        if (c2_nz == c2_this->maxnz) {
          c2_d_st.site = &c2_gc_emlrtRSI;
          c2_d_realloc(chartInstance, &c2_d_st, c2_this, c2_nz + 10, c2_idx,
                       c2_idx + 1, c2_nz, 1);
          c2_this->rowidx->data[c2_idx] = 4;
          c2_this->d->data[c2_idx] = c2_rhsv;
        } else {
          c2_d_st.site = &c2_hc_emlrtRSI;
          c2_b_outstart = c2_idx + 2;
          c2_b_instart = c2_idx + 1;
          c2_b_nelem = c2_nz - c2_idx;
          if (!(c2_b_nelem <= 0)) {
            c2_e_st.site = &c2_lc_emlrtRSI;
            c2_i4 = c2_y->size[0];
            c2_y->size[0] = c2_this->rowidx->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i4,
              &c2_c_emlrtRTEI);
            c2_c_loop_ub = c2_this->rowidx->size[0] - 1;
            for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
              c2_y->data[c2_i7] = c2_this->rowidx->data[c2_i7];
            }

            c2_d_outstart = c2_b_outstart - 1;
            c2_d_instart = c2_b_instart - 1;
            c2_d_nelem = c2_b_nelem;
            c2_i9 = c2_this->rowidx->size[0];
            c2_this->rowidx->size[0] = c2_y->size[0];
            c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st,
              c2_this->rowidx, c2_i9, &c2_sc_emlrtRTEI);
            c2_e_loop_ub = c2_y->size[0] - 1;
            for (c2_i11 = 0; c2_i11 <= c2_e_loop_ub; c2_i11++) {
              c2_this->rowidx->data[c2_i11] = c2_y->data[c2_i11];
            }

            memmove((void *)&c2_this->rowidx->data[c2_d_outstart], (void *)
                    &c2_this->rowidx->data[c2_d_instart], (uint32_T)((size_t)
                     c2_d_nelem * sizeof(int32_T)));
            c2_e_st.site = &c2_mc_emlrtRSI;
            c2_i13 = c2_b_y->size[0];
            c2_b_y->size[0] = c2_this->d->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i13,
              &c2_e_emlrtRTEI);
            c2_g_loop_ub = c2_this->d->size[0] - 1;
            for (c2_i15 = 0; c2_i15 <= c2_g_loop_ub; c2_i15++) {
              c2_b_y->data[c2_i15] = c2_this->d->data[c2_i15];
            }

            c2_f_outstart = c2_b_outstart - 1;
            c2_f_instart = c2_b_instart - 1;
            c2_f_nelem = c2_b_nelem;
            c2_i17 = c2_this->d->size[0];
            c2_this->d->size[0] = c2_b_y->size[0];
            c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
              c2_i17, &c2_sc_emlrtRTEI);
            c2_i_loop_ub = c2_b_y->size[0] - 1;
            for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
              c2_this->d->data[c2_i19] = c2_b_y->data[c2_i19];
            }

            memmove((void *)&c2_this->d->data[c2_f_outstart], (void *)
                    &c2_this->d->data[c2_f_instart], (uint32_T)((size_t)
                     c2_f_nelem * sizeof(real_T)));
          }

          c2_this->d->data[c2_idx] = c2_rhsv;
          c2_this->rowidx->data[c2_idx] = 4;
        }

        c2_c_col = c2_col + 1;
        c2_i5 = c2_c_col;
        for (c2_c_k = c2_i5 - 1; c2_c_k + 1 < 6; c2_c_k++) {
          c2_this->colidx->data[c2_c_k]++;
        }
      } else {
        c2_d_st.site = &c2_ic_emlrtRSI;
        c2_outstart = c2_vidx;
        c2_instart = c2_vidx + 1;
        c2_nelem = c2_nz - c2_vidx;
        if (!(c2_nelem <= 0)) {
          c2_e_st.site = &c2_lc_emlrtRSI;
          c2_i2 = c2_y->size[0];
          c2_y->size[0] = c2_this->rowidx->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_y, c2_i2,
            &c2_c_emlrtRTEI);
          c2_b_loop_ub = c2_this->rowidx->size[0] - 1;
          for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
            c2_y->data[c2_i6] = c2_this->rowidx->data[c2_i6];
          }

          c2_c_outstart = c2_outstart - 1;
          c2_c_instart = c2_instart - 1;
          c2_c_nelem = c2_nelem;
          c2_i8 = c2_this->rowidx->size[0];
          c2_this->rowidx->size[0] = c2_y->size[0];
          c2_emxEnsureCapacity_int32_T(chartInstance, &c2_e_st, c2_this->rowidx,
            c2_i8, &c2_sc_emlrtRTEI);
          c2_d_loop_ub = c2_y->size[0] - 1;
          for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
            c2_this->rowidx->data[c2_i10] = c2_y->data[c2_i10];
          }

          memmove((void *)&c2_this->rowidx->data[c2_c_outstart], (void *)
                  &c2_this->rowidx->data[c2_c_instart], (uint32_T)((size_t)
                   c2_c_nelem * sizeof(int32_T)));
          c2_e_st.site = &c2_mc_emlrtRSI;
          c2_i12 = c2_b_y->size[0];
          c2_b_y->size[0] = c2_this->d->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_b_y, c2_i12,
            &c2_e_emlrtRTEI);
          c2_f_loop_ub = c2_this->d->size[0] - 1;
          for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
            c2_b_y->data[c2_i14] = c2_this->d->data[c2_i14];
          }

          c2_e_outstart = c2_outstart - 1;
          c2_e_instart = c2_instart - 1;
          c2_e_nelem = c2_nelem;
          c2_i16 = c2_this->d->size[0];
          c2_this->d->size[0] = c2_b_y->size[0];
          c2_emxEnsureCapacity_real_T(chartInstance, &c2_e_st, c2_this->d,
            c2_i16, &c2_sc_emlrtRTEI);
          c2_h_loop_ub = c2_b_y->size[0] - 1;
          for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
            c2_this->d->data[c2_i18] = c2_b_y->data[c2_i18];
          }

          memmove((void *)&c2_this->d->data[c2_e_outstart], (void *)&c2_this->
                  d->data[c2_e_instart], (uint32_T)((size_t)c2_e_nelem * sizeof
                   (real_T)));
        }

        c2_b_col = c2_col + 1;
        c2_i3 = c2_b_col;
        for (c2_b_k = c2_i3 - 1; c2_b_k + 1 < 6; c2_b_k++) {
          c2_this->colidx->data[c2_b_k]--;
        }
      }
    }
  }

  c2_emxFree_int32_T(chartInstance, &c2_b_this);
  c2_emxFree_real_T(chartInstance, &c2_b_y);
  c2_emxFree_int32_T(chartInstance, &c2_y);
}

static int32_T c2_d_copyNonzeroValues(SFc2_untitledInstanceStruct *chartInstance,
  c2_coder_internal_sparse *c2_this, c2_szVgRoYADpv9jTouZDFZ3mB *c2_rhsIter,
  int32_T c2_outStart, real_T c2_rhs[4])
{
  int32_T c2_outIdx;
  int32_T c2_k;
  int32_T c2_b_k;
  real_T c2_rhsv;
  int32_T c2_y;
  int32_T c2_b_y;
  int32_T c2_c_y;
  int32_T c2_d_y;
  (void)chartInstance;
  c2_outIdx = c2_outStart;
  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_b_k = c2_k;
    c2_rhsv = c2_rhs[c2_rhsIter->idx - 1];
    c2_y = c2_rhsIter->idx;
    c2_b_y = c2_y + 1;
    c2_rhsIter->idx = c2_b_y;
    c2_c_y = c2_rhsIter->row;
    c2_d_y = c2_c_y + 1;
    c2_rhsIter->row = c2_d_y;
    if (c2_rhsv != 0.0) {
      c2_this->rowidx->data[c2_outIdx - 1] = c2_b_k + 1;
      c2_this->d->data[c2_outIdx - 1] = c2_rhsv;
      c2_outIdx++;
    }
  }

  return c2_outIdx;
}

static void c2_b_floor(SFc2_untitledInstanceStruct *chartInstance, real_T c2_x
  [20])
{
  int32_T c2_k;
  int32_T c2_b_k;
  real_T c2_b_x;
  real_T c2_c_x;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 20; c2_k++) {
    c2_b_k = c2_k;
    c2_b_x = c2_x[c2_b_k];
    c2_c_x = c2_b_x;
    c2_c_x = muDoubleScalarFloor(c2_c_x);
    c2_x[c2_b_k] = c2_c_x;
  }
}

static void c2_b_sqrt(SFc2_untitledInstanceStruct *chartInstance, real_T *c2_x)
{
  (void)chartInstance;
  *c2_x = 0.014244000000000272;
}

static void c2_emxEnsureCapacity_int32_T(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  int32_T c2_i;
  int32_T c2_newCapacity;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c2_newNumel, (uint32_T)
      c2_emxArray->size[c2_i], c2_srcLocation, c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(int32_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(int32_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (int32_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxEnsureCapacity_real_T(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  int32_T c2_i;
  int32_T c2_newCapacity;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c2_newNumel, (uint32_T)
      c2_emxArray->size[c2_i], c2_srcLocation, c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(real_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(real_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (real_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInitStruct_coder_internal_sp(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_pStruct,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_pStruct->d, 1, c2_srcLocation);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_pStruct->colidx, 1,
                     c2_srcLocation);
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_pStruct->rowidx, 1,
                     c2_srcLocation);
}

static void c2_emxInit_real_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_real_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_real_T *)emlrtMallocMex(sizeof(c2_emxArray_real_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (real_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInit_int32_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_int32_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c2_emxArray_int32_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (int32_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_real_T(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_real_T *)NULL) {
    if (((*c2_pEmxArray)->data != (real_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_real_T *)NULL;
  }
}

static void c2_emxFreeStruct_coder_internal_sp(SFc2_untitledInstanceStruct
  *chartInstance, c2_coder_internal_sparse *c2_pStruct)
{
  c2_emxFree_real_T(chartInstance, &c2_pStruct->d);
  c2_emxFree_int32_T(chartInstance, &c2_pStruct->colidx);
  c2_emxFree_int32_T(chartInstance, &c2_pStruct->rowidx);
}

static void c2_emxFree_int32_T(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_int32_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_int32_T *)NULL) {
    if (((*c2_pEmxArray)->data != (int32_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_int32_T *)NULL;
  }
}

static void c2_emxEnsureCapacity_real_T1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  int32_T c2_i;
  int32_T c2_newCapacity;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c2_newNumel, (uint32_T)
      c2_emxArray->size[c2_i], c2_srcLocation, c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(real_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(real_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (real_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxEnsureCapacity_int32_T1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_int32_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  int32_T c2_i;
  int32_T c2_newCapacity;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c2_newNumel, (uint32_T)
      c2_emxArray->size[c2_i], c2_srcLocation, c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(int32_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(int32_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (int32_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInit_real_T1(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_real_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_real_T *)emlrtMallocMex(sizeof(c2_emxArray_real_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (real_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInit_int32_T1(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_int32_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_int32_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c2_emxArray_int32_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (int32_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxCopyStruct_coder_internal_an(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_anonymous_function *
  c2_dst, const c2_coder_internal_anonymous_function *c2_src, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_emxCopyMatrix_real_T(chartInstance);
  c2_emxCopyMatrix_cell_wrap_1(chartInstance, c2_sp, c2_dst->tunableEnvironment,
    c2_src->tunableEnvironment, c2_srcLocation);
}

static void c2_emxCopyMatrix_real_T(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_emxCopyMatrix_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 c2_dst[2], const
  c2_cell_wrap_1 c2_src[2], const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_emxCopyStruct_cell_wrap_1(chartInstance, c2_sp, &c2_dst[c2_i],
      &c2_src[c2_i], c2_srcLocation);
  }
}

static void c2_emxCopyStruct_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 *c2_dst, const
  c2_cell_wrap_1 *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxCopy_int32_T(chartInstance, c2_sp, &c2_dst->f1, &c2_src->f1,
                     c2_srcLocation);
}

static void c2_emxCopy_int32_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_int32_T **c2_dst, c2_emxArray_int32_T * const
  *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_numElDst;
  int32_T c2_numElSrc;
  int32_T c2_i;
  c2_numElDst = 1;
  c2_numElSrc = 1;
  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    c2_numElDst *= (*c2_dst)->size[c2_i];
    c2_numElSrc *= (*c2_src)->size[c2_i];
  }

  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    (*c2_dst)->size[c2_i] = (*c2_src)->size[c2_i];
  }

  c2_emxEnsureCapacity_int32_T(chartInstance, c2_sp, *c2_dst, c2_numElDst,
    c2_srcLocation);
  for (c2_i = 0; c2_i < c2_numElSrc; c2_i++) {
    (*c2_dst)->data[c2_i] = (*c2_src)->data[c2_i];
  }
}

static void c2_emxInitStruct_coder_internal_an(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_anonymous_function *
  c2_pStruct, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInitMatrix_cell_wrap_1(chartInstance, c2_sp,
    c2_pStruct->tunableEnvironment, c2_srcLocation);
}

static void c2_emxInitMatrix_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 c2_pMatrix[2], const
  emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_emxInitStruct_cell_wrap_1(chartInstance, c2_sp, &c2_pMatrix[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxInitStruct_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_1 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_int32_T(chartInstance, c2_sp, &c2_pStruct->f1, 1, c2_srcLocation);
}

static void c2_emxFreeMatrix_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, c2_cell_wrap_1 c2_pMatrix[2])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_emxFreeStruct_cell_wrap_1(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_emxFreeStruct_cell_wrap_1(SFc2_untitledInstanceStruct
  *chartInstance, c2_cell_wrap_1 *c2_pStruct)
{
  c2_emxFree_int32_T(chartInstance, &c2_pStruct->f1);
}

static void c2_emxFreeStruct_coder_internal_an(SFc2_untitledInstanceStruct
  *chartInstance, c2_coder_internal_anonymous_function *c2_pStruct)
{
  c2_emxFreeMatrix_cell_wrap_1(chartInstance, c2_pStruct->tunableEnvironment);
}

static void c2_emxCopyStruct_coder_internal_sp(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_internal_sparse *c2_dst,
  const c2_coder_internal_sparse *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxCopy_real_T(chartInstance, c2_sp, &c2_dst->d, &c2_src->d, c2_srcLocation);
  c2_emxCopy_int32_T(chartInstance, c2_sp, &c2_dst->colidx, &c2_src->colidx,
                     c2_srcLocation);
  c2_emxCopy_int32_T(chartInstance, c2_sp, &c2_dst->rowidx, &c2_src->rowidx,
                     c2_srcLocation);
  c2_dst->maxnz = c2_src->maxnz;
}

static void c2_emxCopy_real_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_dst, c2_emxArray_real_T * const
  *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_numElDst;
  int32_T c2_numElSrc;
  int32_T c2_i;
  c2_numElDst = 1;
  c2_numElSrc = 1;
  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    c2_numElDst *= (*c2_dst)->size[c2_i];
    c2_numElSrc *= (*c2_src)->size[c2_i];
  }

  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    (*c2_dst)->size[c2_i] = (*c2_src)->size[c2_i];
  }

  c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, *c2_dst, c2_numElDst,
    c2_srcLocation);
  for (c2_i = 0; c2_i < c2_numElSrc; c2_i++) {
    (*c2_dst)->data[c2_i] = (*c2_src)->data[c2_i];
  }
}

static int32_T c2_div_nzp_s32(SFc2_untitledInstanceStruct *chartInstance,
  int32_T c2_numerator, int32_T c2_denominator, int32_T c2_EMLOvCount_src_loc,
  uint32_T c2_ssid_src_loc, int32_T c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_quotient;
  uint32_T c2_absNumerator;
  uint32_T c2_absDenominator;
  boolean_T c2_quotientNeedsNegation;
  uint32_T c2_tempAbsQuotient;
  (void)chartInstance;
  (void)c2_EMLOvCount_src_loc;
  (void)c2_ssid_src_loc;
  (void)c2_offset_src_loc;
  (void)c2_length_src_loc;
  if (c2_numerator < 0) {
    c2_absNumerator = ~(uint32_T)c2_numerator + 1U;
  } else {
    c2_absNumerator = (uint32_T)c2_numerator;
  }

  if (c2_denominator < 0) {
    c2_absDenominator = ~(uint32_T)c2_denominator + 1U;
  } else {
    c2_absDenominator = (uint32_T)c2_denominator;
  }

  c2_quotientNeedsNegation = ((c2_numerator < 0) != (c2_denominator < 0));
  c2_tempAbsQuotient = c2_absNumerator / c2_absDenominator;
  if (c2_quotientNeedsNegation) {
    c2_quotient = -(int32_T)c2_tempAbsQuotient;
  } else {
    c2_quotient = (int32_T)c2_tempAbsQuotient;
  }

  return c2_quotient;
}

static void init_dsm_address_info(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_untitledInstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_netS_data = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_netS_sizes = (int32_T (*)[2])
    ssGetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1);
  chartInstance->c2_relS = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_untitled_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1265524227U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3395162458U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(270993489U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2886325773U);
}

mxArray *sf_c2_untitled_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.CXSparseAPI"));
  mxSetCell(mxcell3p, 1, mxCreateString("coder.internal.blas.BLASApi"));
  return(mxcell3p);
}

mxArray *sf_c2_untitled_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_functions");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("CXSparseAPI_passToCX");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_untitled_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_untitled(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiC+wMrAwAakOYCYiQECWKF8RiibES7OAhdXAOKSyoJUkHhxUbJnCpDOS8wF8xN"
    "LKzzz0vLB5lswIMxnw2I+I5L5nFBxCPhgT5l+EQeQfgMk/SxY9LMg6RcA8vJSS4L5oPyBdb8MWe"
    "4vSs2hkvsFHCjTD7GfkPuZUdzPzJCW5wRJlwz40yUjWrpkgvJBenIYMhkKoPY7EHA/E5r7BeCuD"
    "3QAUwcCqRIOQzc+QgZJfARB4yNokMSHAlXc4UEgPkRR4gPCzyyOT0wuySxLjU82ii/NK8ksyUlN"
    "QfIXAE3ZLg0="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_untitled_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sMCbMp6zyGzNnUZMRpYspNG";
}

static void sf_opaque_initialize_c2_untitled(void *chartInstanceVar)
{
  initialize_params_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
  initialize_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_untitled(void *chartInstanceVar)
{
  enable_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_untitled(void *chartInstanceVar)
{
  disable_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_untitled(void *chartInstanceVar)
{
  sf_gateway_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_untitled(SimStruct* S)
{
  return get_sim_state_c2_untitled((SFc2_untitledInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_untitled(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_untitled((SFc2_untitledInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c2_untitled(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_untitledInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_optimization_info();
    }

    finalize_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_untitled(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_untitled((SFc2_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_untitled((SFc2_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_untitled_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [17] = {
    "eNrtV8tu00AUnYS0AgmqSFCxYYHYgFghFogdJS+I1LSlbnltqql9E48ynjHzSB9iwY4VC34B/oI",
    "Vn8Cn8AlcO04aHNshpEARWHIm45x75tzHXE9Iqd0heK3g/fwyIcs4nse7TIbXUjIvTdzD5xVyM5",
    "l/RJCwwRZVNNCk8BI0gG3QklvDpGiLrsyEMdEFBcJFbCiVyWPTLLCciX7LCjfi08985vqOLy33a",
    "mhLvU3Bj5AttGYLeRpMgWtaAJ7xlbQ9v8Vpb6xYmYO6D25f26DIBQ3GsWEkS3csNyzk0DwEty20",
    "oahYn2hzDDVQN4e5bkaeamcElEHIGRWZ3vpUOxBigA3shh5+blqDTqVhrk+VqYFPB6DXWT/mlAL",
    "SnEzjD/tMUCMVo7wZ8HpkOK1ti6OejvSAFwQEtdUU0H4omTD5+Xda6GlT0H0ODdi3vXw2B17ZKP",
    "lPGRyAyo1bty4HoGgPNkXuonFAmodxtsZVMg0zLICnVD10MX8avNzqxcrRDsU8wQ5a5MEgdrKtd",
    "xQbYHhz2WzQjipz1paxwTDZehYsZmsOoCgLY7aWK+qUc50L25HhOgyAx6wNamgxbMiajQuVDGkP",
    "q9bDIEclXpfCY1O5cK02MqhjuTXW1zewU2SLO4G1hQHVpS5k7Vvt+uBZDugodiYTL5dB6jEdZWs",
    "GKsnpLBTRXSsaB1L10dGCbX/iQpSDXGCgexh9rN1djWVeBIuiPxM36vN3yEmfv/gDfX5klx5vTf",
    "CUMnjIxJhe90K5eN0yfisldmsTdpdS61RSdhGuiveNw/dHzdfv3jaPP9Q+3b99d5H13yzP915cS",
    "ebXRg1oXJ6DqaqIsI8ndFUy+K9O8FeTue7U9zvhveOjR8cbYvdlZzt8ocONRzHfl6VivUspvaPn",
    "16NOeBTGfU0rt+0lL+xoTu3wNRbx35/QuzwjHheS58Pr64PF7K+spfOYFa/Kd/GqYNs2zmTd/jn",
    "9135KvwJ+Svqra4vZT+/jLP3nvtN/jnRFbViXZL59VE7mkQ0njIQZ/SBLfzmlvzpW/2QtHj4/OZ",
    "U4/L352Dkj+dhO8rF9RvJx/VR0zOrnq6l+vhqfZ/conk4HsOfe3bMCjxg8PoeunML7c1478t/uT",
    "NiV/kH/5jmPzmtX/s3rkT/k37zn8kXO8en+RlL46gLr/Gr8ov9n5sF/A6ZacbA=",
    ""
  };

  static char newstr [1189] = "";
  newstr[0] = '\0';
  for (i = 0; i < 17; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_untitled(SimStruct *S)
{
  const char* newstr = sf_c2_untitled_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2039576610U));
  ssSetChecksum1(S,(2274196549U));
  ssSetChecksum2(S,(1117944389U));
  ssSetChecksum3(S,(841627834U));
}

static void mdlRTW_c2_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_untitled(SimStruct *S)
{
  SFc2_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc2_untitledInstanceStruct *)utMalloc(sizeof
    (SFc2_untitledInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_untitledInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_untitled;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_untitled;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_untitled;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_untitled;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_untitled;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_untitled;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_untitled;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_untitled;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_untitled;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_untitled;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_untitled;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_start_c2_untitled(chartInstance);
}

void c2_untitled_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_untitled(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_untitled(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_untitled(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_untitled_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
