/* Include files */

#include "PID_Cdelta_U_sfun.h"
#include "c12_PID_Cdelta_U.h"
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
static emlrtRSInfo c12_emlrtRSI = { 18,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c12_b_emlrtRSI = { 19,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c12_c_emlrtRSI = { 26,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c12_d_emlrtRSI = { 28,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c12_e_emlrtRSI = { 32,/* lineNo */
  "Copy_of_modelKA_basisC",            /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\Copy_of_modelKA_basisC.m"/* pathName */
};

static emlrtRSInfo c12_f_emlrtRSI = { 6,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c12_g_emlrtRSI = { 7,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c12_h_emlrtRSI = { 15,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c12_i_emlrtRSI = { 16,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c12_j_emlrtRSI = { 17,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c12_k_emlrtRSI = { 18,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c12_l_emlrtRSI = { 20,/* lineNo */
  "splineMatrix",                      /* fcnName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pathName */
};

static emlrtRSInfo c12_m_emlrtRSI = { 28,/* lineNo */
  "Heading Autopilot/MATLAB Function", /* fcnName */
  "#PID_Cdelta_U:807"                  /* pathName */
};

static emlrtRSInfo c12_n_emlrtRSI = { 132,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_o_emlrtRSI = { 170,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_p_emlrtRSI = { 133,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_q_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c12_r_emlrtRSI = { 103,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c12_s_emlrtRSI = { 288,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c12_t_emlrtRSI = { 306,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c12_u_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c12_v_emlrtRSI = { 13,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_w_emlrtRSI = { 221,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_x_emlrtRSI = { 211,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_y_emlrtRSI = { 149,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_ab_emlrtRSI = { 140,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_bb_emlrtRSI = { 128,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_cb_emlrtRSI = { 122,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_db_emlrtRSI = { 121,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_eb_emlrtRSI = { 1665,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_fb_emlrtRSI = { 1681,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_gb_emlrtRSI = { 1683,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_hb_emlrtRSI = { 1684,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_ib_emlrtRSI = { 18,/* lineNo */
  "insertionsort",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\insertionsort.m"/* pathName */
};

static emlrtRSInfo c12_jb_emlrtRSI = { 41,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_kb_emlrtRSI = { 58,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_lb_emlrtRSI = { 55,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_mb_emlrtRSI = { 49,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_nb_emlrtRSI = { 47,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_ob_emlrtRSI = { 44,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_pb_emlrtRSI = { 42,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_qb_emlrtRSI = { 34,/* lineNo */
  "introsort",                         /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pathName */
};

static emlrtRSInfo c12_rb_emlrtRSI = { 20,/* lineNo */
  "heapsort",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pathName */
};

static emlrtRSInfo c12_sb_emlrtRSI = { 1692,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_tb_emlrtRSI = { 14,/* lineNo */
  "max",                               /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c12_ub_emlrtRSI = { 20,/* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c12_vb_emlrtRSI = { 45,/* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c12_wb_emlrtRSI = { 167,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c12_xb_emlrtRSI = { 320,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c12_yb_emlrtRSI = { 361,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c12_ac_emlrtRSI = { 14,/* lineNo */
  "fillIn",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\fillIn.m"/* pathName */
};

static emlrtRSInfo c12_bc_emlrtRSI = { 266,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_cc_emlrtRSI = { 66,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_dc_emlrtRSI = { 78,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_ec_emlrtRSI = { 81,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_fc_emlrtRSI = { 110,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_gc_emlrtRSI = { 115,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_hc_emlrtRSI = { 123,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_ic_emlrtRSI = { 337,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_jc_emlrtRSI = { 342,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_kc_emlrtRSI = { 245,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_lc_emlrtRSI = { 246,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_mc_emlrtRSI = { 1482,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_nc_emlrtRSI = { 156,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_oc_emlrtRSI = { 287,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_pc_emlrtRSI = { 307,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_qc_emlrtRSI = { 310,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_rc_emlrtRSI = { 322,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_sc_emlrtRSI = { 329,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_tc_emlrtRSI = { 334,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_uc_emlrtRSI = { 453,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_vc_emlrtRSI = { 351,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_wc_emlrtRSI = { 380,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_xc_emlrtRSI = { 410,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_yc_emlrtRSI = { 417,/* lineNo */
  "CXSparseAPI",                       /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo c12_ad_emlrtRSI = { 1508,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_bd_emlrtRSI = { 252,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_cd_emlrtRSI = { 20,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c12_dd_emlrtRSI = { 81,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c12_ed_emlrtRSI = { 93,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c12_fd_emlrtRSI = { 104,/* lineNo */
  "parenReference2D",                  /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenReference2D.m"/* pathName */
};

static emlrtRSInfo c12_gd_emlrtRSI = { 178,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_hd_emlrtRSI = { 1636,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_id_emlrtRSI = { 277,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_jd_emlrtRSI = { 56,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_kd_emlrtRSI = { 132,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_ld_emlrtRSI = { 174,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_md_emlrtRSI = { 184,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_nd_emlrtRSI = { 186,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_od_emlrtRSI = { 198,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_pd_emlrtRSI = { 435,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_qd_emlrtRSI = { 102,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo c12_rd_emlrtRSI = { 232,/* lineNo */
  "mtimes",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRTEInfo c12_emlrtRTEI = { 91,/* lineNo */
  35,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_b_emlrtRTEI = { 245,/* lineNo */
  30,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_c_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c12_d_emlrtRTEI = { 246,/* lineNo */
  25,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_e_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c12_f_emlrtRTEI = { 6,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c12_g_emlrtRTEI = { 7,/* lineNo */
  1,                                   /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c12_h_emlrtRTEI = { 20,/* lineNo */
  10,                                  /* colNo */
  "splineMatrix",                      /* fName */
  "D:\\1\\deep_sdy_v1.6\\splineMatrix.m"/* pName */
};

static emlrtRTEInfo c12_i_emlrtRTEI = { 1,/* lineNo */
  41,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m"/* pName */
};

static emlrtRTEInfo c12_j_emlrtRTEI = { 121,/* lineNo */
  5,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_k_emlrtRTEI = { 122,/* lineNo */
  5,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_l_emlrtRTEI = { 126,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_m_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c12_n_emlrtRTEI = { 132,/* lineNo */
  13,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_o_emlrtRTEI = { 132,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_p_emlrtRTEI = { 133,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_q_emlrtRTEI = { 134,/* lineNo */
  15,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_r_emlrtRTEI = { 103,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c12_s_emlrtRTEI = { 135,/* lineNo */
  15,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_t_emlrtRTEI = { 135,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_u_emlrtRTEI = { 137,/* lineNo */
  18,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_v_emlrtRTEI = { 137,/* lineNo */
  30,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_w_emlrtRTEI = { 137,/* lineNo */
  25,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_x_emlrtRTEI = { 124,/* lineNo */
  9,                                   /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_y_emlrtRTEI = { 1,/* lineNo */
  24,                                  /* colNo */
  "spdiags",                           /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pName */
};

static emlrtRTEInfo c12_ab_emlrtRTEI = { 121,/* lineNo */
  43,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_bb_emlrtRTEI = { 122,/* lineNo */
  43,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_cb_emlrtRTEI = { 13,/* lineNo */
  5,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_db_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_eb_emlrtRTEI = { 121,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_fb_emlrtRTEI = { 122,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_gb_emlrtRTEI = { 127,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_hb_emlrtRTEI = { 1647,/* lineNo */
  17,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_ib_emlrtRTEI = { 1679,/* lineNo */
  22,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_jb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "insertionsort",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\insertionsort.m"/* pName */
};

static emlrtRTEInfo c12_kb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c12_lb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c12_mb_emlrtRTEI = { 40,/* lineNo */
  14,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c12_nb_emlrtRTEI = { 1689,/* lineNo */
  14,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_ob_emlrtRTEI = { 1,/* lineNo */
  17,                                  /* colNo */
  "fillIn",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\fillIn.m"/* pName */
};

static emlrtRTEInfo c12_pb_emlrtRTEI = { 256,/* lineNo */
  25,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_qb_emlrtRTEI = { 324,/* lineNo */
  17,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_rb_emlrtRTEI = { 310,/* lineNo */
  61,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c12_sb_emlrtRTEI = { 310,/* lineNo */
  63,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c12_tb_emlrtRTEI = { 1482,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_ub_emlrtRTEI = { 329,/* lineNo */
  32,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c12_vb_emlrtRTEI = { 417,/* lineNo */
  17,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c12_wb_emlrtRTEI = { 410,/* lineNo */
  49,                                  /* colNo */
  "CXSparseAPI",                       /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\CXSparseAPI.m"/* pName */
};

static emlrtRTEInfo c12_xb_emlrtRTEI = { 1508,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_yb_emlrtRTEI = { 1508,/* lineNo */
  17,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_ac_emlrtRTEI = { 277,/* lineNo */
  34,                                  /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_bc_emlrtRTEI = { 21,/* lineNo */
  14,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c12_cc_emlrtRTEI = { 16,/* lineNo */
  25,                                  /* colNo */
  "anonymous_function",                /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\anonymous_function.m"/* pName */
};

static emlrtRTEInfo c12_dc_emlrtRTEI = { 1683,/* lineNo */
  23,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_ec_emlrtRTEI = { 1684,/* lineNo */
  23,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_fc_emlrtRTEI = { 1682,/* lineNo */
  36,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_gc_emlrtRTEI = { 20,/* lineNo */
  13,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c12_hc_emlrtRTEI = { 38,/* lineNo */
  14,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c12_ic_emlrtRTEI = { 39,/* lineNo */
  50,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c12_jc_emlrtRTEI = { 36,/* lineNo */
  13,                                  /* colNo */
  "function_handle",                   /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pName */
};

static emlrtRTEInfo c12_kc_emlrtRTEI = { 34,/* lineNo */
  52,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c12_lc_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c12_mc_emlrtRTEI = { 47,/* lineNo */
  56,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c12_nc_emlrtRTEI = { 49,/* lineNo */
  51,                                  /* colNo */
  "introsort",                         /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\introsort.m"/* pName */
};

static emlrtRTEInfo c12_oc_emlrtRTEI = { 35,/* lineNo */
  35,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c12_pc_emlrtRTEI = { 26,/* lineNo */
  58,                                  /* colNo */
  "heapsort",                          /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pName */
};

static emlrtRTEInfo c12_qc_emlrtRTEI = { 1691,/* lineNo */
  5,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_rc_emlrtRTEI = { 266,/* lineNo */
  17,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pName */
};

static emlrtRTEInfo c12_sc_emlrtRTEI = { 325,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_tc_emlrtRTEI = { 326,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_uc_emlrtRTEI = { 333,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtRTEInfo c12_vc_emlrtRTEI = { 334,/* lineNo */
  1,                                   /* colNo */
  "parenAssign2D",                     /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pName */
};

static emlrtBCInfo c12_emlrtBCI = { 1, /* iFirst */
  2,                                   /* iLast */
  9,                                   /* lineNo */
  1,                                   /* colNo */
  "ind",                               /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c12_emlrtDCI = { 9, /* lineNo */
  1,                                   /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c12_b_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  10,                                  /* lineNo */
  1,                                   /* colNo */
  "ind",                               /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c12_b_emlrtDCI = { 10,/* lineNo */
  1,                                   /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c12_c_emlrtBCI = { 1,/* iFirst */
  12,                                  /* iLast */
  13,                                  /* lineNo */
  10,                                  /* colNo */
  "I",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c12_c_emlrtDCI = { 13,/* lineNo */
  10,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c12_d_emlrtBCI = { 1,/* iFirst */
  12,                                  /* iLast */
  14,                                  /* lineNo */
  10,                                  /* colNo */
  "I",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c12_d_emlrtDCI = { 14,/* lineNo */
  10,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c12_e_emlrtBCI = { 1,/* iFirst */
  12,                                  /* iLast */
  15,                                  /* lineNo */
  11,                                  /* colNo */
  "M",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c12_e_emlrtDCI = { 15,/* lineNo */
  11,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c12_f_emlrtBCI = { 1,/* iFirst */
  12,                                  /* iLast */
  16,                                  /* lineNo */
  11,                                  /* colNo */
  "M",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c12_f_emlrtDCI = { 16,/* lineNo */
  11,                                  /* colNo */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c12_g_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  9,                                   /* lineNo */
  1,                                   /* colNo */
  "ind",                               /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c12_h_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  10,                                  /* lineNo */
  1,                                   /* colNo */
  "ind",                               /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c12_i_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  13,                                  /* lineNo */
  10,                                  /* colNo */
  "I",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c12_j_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  14,                                  /* lineNo */
  10,                                  /* colNo */
  "I",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c12_k_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  15,                                  /* lineNo */
  11,                                  /* colNo */
  "M",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c12_l_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  16,                                  /* lineNo */
  11,                                  /* colNo */
  "M",                                 /* aName */
  "basisFunc_spline",                  /* fName */
  "D:\\1\\deep_sdy_v1.6\\basisFunc_spline.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c12_g_emlrtDCI = { 13,/* lineNo */
  1,                                   /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c12_h_emlrtDCI = { 1508,/* lineNo */
  13,                                  /* colNo */
  "sparse",                            /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c12_i_emlrtDCI = { 48,/* lineNo */
  48,                                  /* colNo */
  "stack",                             /* fName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\stack.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRSInfo c12_sd_emlrtRSI = { 325,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_td_emlrtRSI = { 1691,/* lineNo */
  "sparse",                            /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\sparse.m"/* pathName */
};

static emlrtRSInfo c12_ud_emlrtRSI = { 122,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_vd_emlrtRSI = { 121,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_wd_emlrtRSI = { 326,/* lineNo */
  "parenAssign2D",                     /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@sparse\\parenAssign2D.m"/* pathName */
};

static emlrtRSInfo c12_xd_emlrtRSI = { 137,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_yd_emlrtRSI = { 126,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_ae_emlrtRSI = { 135,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_be_emlrtRSI = { 134,/* lineNo */
  "spdiags",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m"/* pathName */
};

static emlrtRSInfo c12_ce_emlrtRSI = { 35,/* lineNo */
  "heapsort",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pathName */
};

static emlrtRSInfo c12_de_emlrtRSI = { 26,/* lineNo */
  "heapsort",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\heapsort.m"/* pathName */
};

static const real_T c12_dv[3] = { -2.0, 4.0, -2.0 };

static const char_T c12_cv[36] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'p',
  'd', 'i', 'a', 'g', 's', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z',
  'e', 'B', 'F', 'o', 'u', 'r', 'I', 'n', 'p', 'u', 't' };

static const char_T c12_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
  'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

static const char_T c12_cv2[14] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'a',
  'm', 'e', 'l', 'e', 'n' };

static const char_T c12_cv3[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i',
  'l', 't', 'i', 'n', 's', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'B', 'o', 'u', 'n', 'd', 's' };

static const char_T c12_cv4[25] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
  'L', 'A', 'B', ':', 'b', 'a', 'd', 's', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't'
};

static const char_T c12_cv5[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i',
  'l', 't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
  'a', 'i', 'l', 'e', 'd' };

static const c12_szVgRoYADpv9jTouZDFZ3mB c12_r = { 1,/* idx */
  1,                                   /* col */
  1                                    /* row */
};

/* Function Declarations */
static void initialize_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void initialize_params_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct *
  chartInstance);
static void enable_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void disable_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void c12_update_jit_animation_state_c12_PID_Cdelta_U
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance);
static void c12_do_animation_call_c12_PID_Cdelta_U
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance);
static void ext_mode_exec_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c12_PID_Cdelta_U
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance);
static void set_sim_state_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_st);
static void finalize_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void sf_gateway_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void mdl_start_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void c12_chartstep_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp);
static void initSimStructsc12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static real_T c12_Copy_of_modelKA_basisC(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, real_T c12_x[2], real_T c12_b_fnB
  [1440], real_T c12_b_fnT[600]);
static void c12_splineMatrix(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, real_T c12_M[144]);
static void c12_b_splineMatrix(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, real_T c12_M[100]);
static void c12_basisFunc_spline(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, real_T c12_xx[2], real_T c12_M[144], real_T c12_val
  [24], real_T c12_dval[24], real_T c12_ddval[24]);
static void c12_b_basisFunc_spline(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, real_T c12_xx[60], real_T c12_M[100],
  real_T c12_val[600], real_T c12_dval[600], real_T c12_ddval[600], real_T
  c12_dddval[600]);
static const mxArray *c12_emlrt_marshallOut(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const char * c12_u);
static void c12_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const mxArray *c12_a__output_of_load_, const char_T *c12_identifier,
  c12_s8y97FVnhK2Wl5Axo3qD8BH *c12_y);
static void c12_b_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  c12_s8y97FVnhK2Wl5Axo3qD8BH *c12_y);
static void c12_c_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  real_T c12_y[1440]);
static void c12_d_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  real_T c12_y[600]);
static void c12_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1);
static void c12_check_forloop_overflow_error(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp);
static void c12_sparse(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_varargin_1, c12_emxArray_int32_T
  *c12_varargin_2, c12_emxArray_real_T *c12_varargin_3,
  c12_coder_internal_sparse *c12_y);
static void c12_assertValidIndexArg(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_s,
  c12_emxArray_int32_T *c12_sint);
static void c12_locSortrows(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_a, c12_emxArray_int32_T *c12_b, c12_emxArray_int32_T *c12_b_idx,
  c12_emxArray_int32_T *c12_b_a, c12_emxArray_int32_T *c12_b_b);
static void c12_insertionsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart,
  int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp,
  c12_emxArray_int32_T *c12_b_x);
static void c12_introsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xend,
  c12_coder_internal_anonymous_function c12_cmp, c12_emxArray_int32_T *c12_b_x);
static void c12_heapsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart, int32_T
  c12_xend, c12_coder_internal_anonymous_function c12_cmp, c12_emxArray_int32_T *
  c12_b_x);
static void c12_heapify(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_idx, int32_T
  c12_xstart, int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp,
  c12_emxArray_int32_T *c12_b_x);
static void c12_permuteVector(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_y, c12_emxArray_int32_T *c12_b_y);
static void c12_sparse_fillIn(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this);
static void c12_b_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1);
static void c12_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this);
static void c12_sparse_validateNumericIndex(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp);
static void c12_sparse_locBsearch(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_emxArray_int32_T *c12_x, int32_T c12_xi, int32_T
  c12_xstart, int32_T c12_xend, int32_T *c12_n, boolean_T *c12_found);
static void c12_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs, c12_coder_internal_sparse *c12_b_this);
static void c12_b_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this);
static void c12_b_sparse_validateNumericIndex(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp);
static void c12_sparse_mldivide(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_y);
static void c12_warning(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp);
static void c12_CXSparseAPI_iteratedQR(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_out);
static void c12_sparse_spallocLike(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_s);
static void c12_b_sparse_spallocLike(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, int32_T c12_nzmax,
  c12_coder_internal_sparse *c12_s);
static void c12_sparse_full(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, real_T c12_y[12]);
static int32_T c12_countNumnzInColumn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, real_T c12_rhs[12], c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter);
static void c12_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter, int32_T c12_outStart, real_T c12_rhs
  [12], c12_coder_internal_sparse *c12_b_this, int32_T *c12_outIdx,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_b_rhsIter);
static void c12_c_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1);
static void c12_b_sparse(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_varargin_1, c12_emxArray_int32_T
  *c12_varargin_2, c12_emxArray_real_T *c12_varargin_3,
  c12_coder_internal_sparse *c12_y);
static void c12_d_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1);
static void c12_c_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this);
static void c12_b_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs, c12_coder_internal_sparse *c12_b_this);
static void c12_d_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this);
static void c12_c_sparse_validateNumericIndex(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp);
static void c12_b_sparse_mldivide(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_y);
static void c12_b_CXSparseAPI_iteratedQR(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_out);
static void c12_c_sparse_spallocLike(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_s);
static void c12_b_sparse_full(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, real_T c12_y[10]);
static int32_T c12_b_countNumnzInColumn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, real_T c12_rhs[10], c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter);
static void c12_b_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter, int32_T c12_outStart, real_T c12_rhs
  [10], c12_coder_internal_sparse *c12_b_this, int32_T *c12_outIdx,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_b_rhsIter);
static void c12_floor(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
                      c12_x[60], real_T c12_b_x[60]);
static void c12_eye(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
                    c12_I[100]);
static void c12_repmat(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
  c12_a[60], real_T c12_b[600]);
static real_T c12_xdotu(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
  c12_x[600], real_T c12_y[600]);
static real_T c12_e_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_netS, const char_T *c12_identifier);
static real_T c12_f_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_g_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_fnB, const char_T *c12_identifier,
  boolean_T *c12_svPtr, real_T c12_y[1440]);
static void c12_h_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T *c12_svPtr, real_T c12_y[1440]);
static void c12_i_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_fnT, const char_T *c12_identifier,
  boolean_T *c12_svPtr, real_T c12_y[600]);
static void c12_j_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T *c12_svPtr, real_T c12_y[600]);
static uint8_T c12_k_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_is_active_c12_PID_Cdelta_U, const char_T *
  c12_identifier);
static uint8_T c12_l_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static const mxArray *c12_chart_data_browse_helper
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance, int32_T c12_ssIdNumber);
static void c12_b_locSortrows(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_a, c12_emxArray_int32_T *c12_b);
static void c12_b_insertionsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart,
  int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp);
static void c12_b_introsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xend,
  c12_coder_internal_anonymous_function c12_cmp);
static void c12_b_heapsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart,
  int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp);
static void c12_b_heapify(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_idx, int32_T
  c12_xstart, int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp);
static void c12_b_permuteVector(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_y);
static void c12_b_sparse_fillIn(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this);
static void c12_e_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this);
static void c12_c_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs);
static void c12_f_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this);
static int32_T c12_c_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_sparse *c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_rhsIter, int32_T c12_outStart, real_T
  c12_rhs[12]);
static void c12_g_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this);
static void c12_d_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs);
static void c12_h_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this);
static int32_T c12_d_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_sparse *c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_rhsIter, int32_T c12_outStart, real_T
  c12_rhs[10]);
static void c12_b_floor(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
  c12_x[60]);
static void c12_emxEnsureCapacity_int32_T(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxEnsureCapacity_real_T(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_real_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxInitStruct_coder_internal_sp(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse
  *c12_pStruct, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxInit_real_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_real_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxInit_int32_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxFree_real_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  c12_emxArray_real_T **c12_pEmxArray);
static void c12_emxFreeStruct_coder_internal_sp(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_sparse *c12_pStruct);
static void c12_emxFree_int32_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  c12_emxArray_int32_T **c12_pEmxArray);
static void c12_emxEnsureCapacity_real_T1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_real_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxEnsureCapacity_int32_T1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxInit_real_T1(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_real_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxInit_int32_T1(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxCopyStruct_coder_internal_an(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp,
  c12_coder_internal_anonymous_function *c12_dst, const
  c12_coder_internal_anonymous_function *c12_src, const emlrtRTEInfo
  *c12_srcLocation);
static void c12_emxCopyMatrix_real_T(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void c12_emxCopyMatrix_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 c12_dst[2], const
  c12_cell_wrap_1 c12_src[2], const emlrtRTEInfo *c12_srcLocation);
static void c12_emxCopyStruct_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 *c12_dst, const
  c12_cell_wrap_1 *c12_src, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxCopy_int32_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T **c12_dst, c12_emxArray_int32_T
  * const *c12_src, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxInitStruct_coder_internal_an(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp,
  c12_coder_internal_anonymous_function *c12_pStruct, const emlrtRTEInfo
  *c12_srcLocation);
static void c12_emxInitMatrix_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 c12_pMatrix[2],
  const emlrtRTEInfo *c12_srcLocation);
static void c12_emxInitStruct_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 *c12_pStruct, const
  emlrtRTEInfo *c12_srcLocation);
static void c12_emxFreeMatrix_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_cell_wrap_1 c12_pMatrix[2]);
static void c12_emxFreeStruct_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_cell_wrap_1 *c12_pStruct);
static void c12_emxFreeStruct_coder_internal_an(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_anonymous_function *c12_pStruct);
static void c12_emxCopyStruct_coder_internal_sp(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_dst,
  const c12_coder_internal_sparse *c12_src, const emlrtRTEInfo *c12_srcLocation);
static void c12_emxCopy_real_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_real_T **c12_dst, c12_emxArray_real_T *
  const *c12_src, const emlrtRTEInfo *c12_srcLocation);
static int32_T c12_div_nzp_s32(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  int32_T c12_numerator, int32_T c12_denominator, int32_T c12_EMLOvCount_src_loc,
  uint32_T c12_ssid_src_loc, int32_T c12_offset_src_loc, int32_T
  c12_length_src_loc);
static void init_dsm_address_info(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c12_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c12_fnB_not_empty = false;
  chartInstance->c12_fnT_not_empty = false;
  chartInstance->c12_is_active_c12_PID_Cdelta_U = 0U;
}

static void initialize_params_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void enable_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c12_update_jit_animation_state_c12_PID_Cdelta_U
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c12_do_animation_call_c12_PID_Cdelta_U
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c12_PID_Cdelta_U
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance)
{
  const mxArray *c12_st;
  const mxArray *c12_y = NULL;
  const mxArray *c12_b_y = NULL;
  const mxArray *c12_c_y = NULL;
  const mxArray *c12_d_y = NULL;
  const mxArray *c12_e_y = NULL;
  c12_st = NULL;
  c12_st = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_createcellmatrix(4, 1), false);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", chartInstance->c12_netS, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c12_y, 0, c12_b_y);
  c12_c_y = NULL;
  if (!chartInstance->c12_fnB_not_empty) {
    sf_mex_assign(&c12_c_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c12_c_y, sf_mex_create("y", chartInstance->c12_fnB, 0, 0U, 1U,
      0U, 2, 12, 120), false);
  }

  sf_mex_setcell(c12_y, 1, c12_c_y);
  c12_d_y = NULL;
  if (!chartInstance->c12_fnT_not_empty) {
    sf_mex_assign(&c12_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c12_d_y, sf_mex_create("y", chartInstance->c12_fnT, 0, 0U, 1U,
      0U, 2, 10, 60), false);
  }

  sf_mex_setcell(c12_y, 2, c12_d_y);
  c12_e_y = NULL;
  sf_mex_assign(&c12_e_y, sf_mex_create("y",
    &chartInstance->c12_is_active_c12_PID_Cdelta_U, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c12_y, 3, c12_e_y);
  sf_mex_assign(&c12_st, c12_y, false);
  return c12_st;
}

static void set_sim_state_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_st)
{
  const mxArray *c12_u;
  real_T c12_b_dv[1440];
  int32_T c12_i;
  real_T c12_dv1[600];
  int32_T c12_i1;
  chartInstance->c12_doneDoubleBufferReInit = true;
  c12_u = sf_mex_dup(c12_st);
  *chartInstance->c12_netS = c12_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 0)), "netS");
  c12_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 1)),
    "fnB", &chartInstance->c12_fnB_not_empty, c12_b_dv);
  for (c12_i = 0; c12_i < 1440; c12_i++) {
    chartInstance->c12_fnB[c12_i] = c12_b_dv[c12_i];
  }

  c12_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 2)),
    "fnT", &chartInstance->c12_fnT_not_empty, c12_dv1);
  for (c12_i1 = 0; c12_i1 < 600; c12_i1++) {
    chartInstance->c12_fnT[c12_i1] = c12_dv1[c12_i1];
  }

  chartInstance->c12_is_active_c12_PID_Cdelta_U = c12_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 3)),
     "is_active_c12_PID_Cdelta_U");
  sf_mex_destroy(&c12_u);
  sf_mex_destroy(&c12_st);
}

static void finalize_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c12_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c12_covrtInstance);
}

static void sf_gateway_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  emlrtStack c12_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c12_st.tls = chartInstance->c12_fEmlrtCtx;
  chartInstance->c12_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c12_covrtInstance, 1U,
                    *chartInstance->c12_yaw);
  covrtSigUpdateFcn(chartInstance->c12_covrtInstance, 0U,
                    *chartInstance->c12_Dyaw);
  chartInstance->c12_sfEvent = CALL_EVENT;
  c12_chartstep_c12_PID_Cdelta_U(chartInstance, &c12_st);
  c12_do_animation_call_c12_PID_Cdelta_U(chartInstance);
  covrtSigUpdateFcn(chartInstance->c12_covrtInstance, 2U,
                    *chartInstance->c12_netS);
}

static void mdl_start_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  static const uint32_T c12_decisionTxtStartIdx = 0U;
  static const uint32_T c12_decisionTxtEndIdx = 0U;
  static const int32_T c12_condTxtStartIdx[2] = { 85, 101 };

  static const int32_T c12_condTxtEndIdx[2] = { 97, 113 };

  static const int32_T c12_postfixPredicateTree[3] = { 0, 1, -2 };

  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c12_chart_data_browse_helper);
  chartInstance->c12_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c12_covrtInstance, 1U, 0U, 1U,
    73U);
  covrtChartInitFcn(chartInstance->c12_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c12_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c12_decisionTxtStartIdx, &c12_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c12_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c12_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 2U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c12_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 532);
  covrtEmlIfInitFcn(chartInstance->c12_covrtInstance, 4U, 0U, 0U, 82, 113, -1,
                    212);
  covrtEmlMCDCInitFcn(chartInstance->c12_covrtInstance, 4U, 0U, 0U, 85, 113, 2U,
                      0U, c12_condTxtStartIdx, c12_condTxtEndIdx, 3U,
                      c12_postfixPredicateTree);
  covrtEmlInitFcn(chartInstance->c12_covrtInstance,
                  "D:/1/deep_sdy_v1.6/Copy_of_modelKA_basisC.m", 14U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c12_covrtInstance, 14U, 0U, 0U,
                     "Copy_of_modelKA_basisC", 0, -1, 997);
  covrtEmlInitFcn(chartInstance->c12_covrtInstance,
                  "D:/1/deep_sdy_v1.6/splineMatrix.m", 14U, 1U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c12_covrtInstance, 14U, 1U, 0U,
                     "splineMatrix", 0, -1, 419);
  covrtEmlInitFcn(chartInstance->c12_covrtInstance,
                  "D:/1/deep_sdy_v1.6/basisFunc_spline.m", 14U, 2U, 1U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c12_covrtInstance, 14U, 2U, 0U,
                     "basisFunc_spline", 0, -1, 699);
}

static void c12_chartstep_c12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp)
{
  emlrtStack c12_st;
  real_T c12_b_Dyaw;
  real_T c12_b_yaw;
  c12_s8y97FVnhK2Wl5Axo3qD8BH c12_data;
  real_T c12_dd[2];
  int32_T c12_i;
  int32_T c12_i1;
  int32_T c12_i2;
  int32_T c12_i3;
  real_T c12_b_dv[1440];
  real_T c12_dv1[600];
  real_T c12_b_netS;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_Dyaw = *chartInstance->c12_Dyaw;
  c12_b_yaw = *chartInstance->c12_yaw;
  covrtEmlFcnEval(chartInstance->c12_covrtInstance, 4U, 0, 0);
  if (covrtEmlCondEval(chartInstance->c12_covrtInstance, 4U, 0, 0,
                       !chartInstance->c12_fnB_not_empty) || covrtEmlCondEval
      (chartInstance->c12_covrtInstance, 4U, 0, 1,
       !chartInstance->c12_fnT_not_empty)) {
    covrtEmlMcdcEval(chartInstance->c12_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c12_covrtInstance, 4U, 0, 0, true);
    c12_emlrt_marshallIn(chartInstance, sf_mex_call(c12_sp, "load", 1U, 1U, 14,
      c12_emlrt_marshallOut(chartInstance, "trainedKAmodel.mat")),
                         "<output of load>", &c12_data);
    for (c12_i = 0; c12_i < 1440; c12_i++) {
      chartInstance->c12_fnB[c12_i] = c12_data.fnB[c12_i];
    }

    chartInstance->c12_fnB_not_empty = true;
    for (c12_i2 = 0; c12_i2 < 600; c12_i2++) {
      chartInstance->c12_fnT[c12_i2] = c12_data.fnT[c12_i2];
    }

    chartInstance->c12_fnT_not_empty = true;
  } else {
    covrtEmlMcdcEval(chartInstance->c12_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c12_covrtInstance, 4U, 0, 0, false);
  }

  c12_dd[0] = c12_b_yaw;
  c12_dd[1] = c12_b_Dyaw;
  for (c12_i1 = 0; c12_i1 < 1440; c12_i1++) {
    c12_b_dv[c12_i1] = chartInstance->c12_fnB[c12_i1];
  }

  for (c12_i3 = 0; c12_i3 < 600; c12_i3++) {
    c12_dv1[c12_i3] = chartInstance->c12_fnT[c12_i3];
  }

  c12_st.site = &c12_m_emlrtRSI;
  c12_b_netS = c12_Copy_of_modelKA_basisC(chartInstance, &c12_st, c12_dd,
    c12_b_dv, c12_dv1);
  *chartInstance->c12_netS = c12_b_netS;
}

static void initSimStructsc12_PID_Cdelta_U(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static real_T c12_Copy_of_modelKA_basisC(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, real_T c12_x[2], real_T c12_b_fnB
  [1440], real_T c12_b_fnT[600])
{
  emlrtStack c12_st;
  real_T c12_Mn[144];
  real_T c12_Mq[100];
  int32_T c12_i;
  int32_T c12_i1;
  real_T c12_fnB_r[1440];
  int32_T c12_i2;
  real_T c12_fnT_r[600];
  real_T c12_xr[2];
  real_T c12_phi[24];
  real_T c12_dphi[24];
  real_T c12_ddphi[24];
  char_T c12_TRANSB1;
  char_T c12_TRANSA1;
  real_T c12_alpha1;
  real_T c12_beta1;
  ptrdiff_t c12_m_t;
  ptrdiff_t c12_n_t;
  ptrdiff_t c12_k_t;
  ptrdiff_t c12_lda_t;
  ptrdiff_t c12_ldb_t;
  ptrdiff_t c12_ldc_t;
  real_T c12_t[60];
  real_T c12_psi[600];
  real_T c12_dpsi[600];
  real_T c12_ddpsi[600];
  real_T c12_dddpsi[600];
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  covrtEmlFcnEval(chartInstance->c12_covrtInstance, 14U, 0, 0);
  c12_st.site = &c12_emlrtRSI;
  c12_splineMatrix(chartInstance, &c12_st, c12_Mn);
  c12_st.site = &c12_b_emlrtRSI;
  c12_b_splineMatrix(chartInstance, &c12_st, c12_Mq);
  for (c12_i = 0; c12_i < 1440; c12_i++) {
    c12_fnB_r[c12_i] = c12_b_fnB[c12_i];
  }

  for (c12_i1 = 0; c12_i1 < 600; c12_i1++) {
    c12_fnT_r[c12_i1] = c12_b_fnT[c12_i1];
  }

  for (c12_i2 = 0; c12_i2 < 2; c12_i2++) {
    c12_xr[c12_i2] = c12_x[c12_i2];
  }

  c12_st.site = &c12_c_emlrtRSI;
  c12_basisFunc_spline(chartInstance, &c12_st, c12_xr, c12_Mn, c12_phi, c12_dphi,
                       c12_ddphi);
  c12_st.site = &c12_d_emlrtRSI;
  c12_TRANSB1 = 'N';
  c12_TRANSA1 = 'T';
  c12_alpha1 = 1.0;
  c12_beta1 = 0.0;
  c12_m_t = (ptrdiff_t)1;
  c12_n_t = (ptrdiff_t)60;
  c12_k_t = (ptrdiff_t)24;
  c12_lda_t = (ptrdiff_t)24;
  c12_ldb_t = (ptrdiff_t)24;
  c12_ldc_t = (ptrdiff_t)1;
  dgemm(&c12_TRANSA1, &c12_TRANSB1, &c12_m_t, &c12_n_t, &c12_k_t, &c12_alpha1,
        &c12_phi[0], &c12_lda_t, &c12_fnB_r[0], &c12_ldb_t, &c12_beta1, &c12_t[0],
        &c12_ldc_t);
  c12_st.site = &c12_e_emlrtRSI;
  c12_b_basisFunc_spline(chartInstance, &c12_st, c12_t, c12_Mq, c12_psi,
    c12_dpsi, c12_ddpsi, c12_dddpsi);
  return c12_xdotu(chartInstance, c12_psi, c12_fnT_r);
}

static void c12_splineMatrix(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, real_T c12_M[144])
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  emlrtStack c12_f_st;
  c12_coder_internal_sparse c12_A;
  c12_coder_internal_sparse c12_B;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  c12_emxArray_int32_T *c12_b_B;
  int32_T c12_cidx;
  int32_T c12_b_cidx;
  int32_T c12_k;
  real_T c12_nt;
  int32_T c12_col;
  int32_T c12_i;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_b_rhsIter;
  int32_T c12_loop_ub;
  c12_emxArray_int32_T *c12_c_B;
  int32_T c12_i1;
  int32_T c12_c_cidx;
  int32_T c12_vidx;
  boolean_T c12_found;
  int32_T c12_d_cidx;
  int32_T c12_b_k;
  real_T c12_thisv;
  real_T c12_b_nt;
  c12_coder_internal_sparse c12_this;
  int32_T c12_b_col;
  real_T c12_v;
  int32_T c12_i2;
  int32_T c12_c_y;
  int32_T c12_d_y;
  int32_T c12_b_loop_ub;
  real_T c12_rhsv;
  int32_T c12_i3;
  int32_T c12_i4;
  int32_T c12_n;
  int32_T c12_b_vidx;
  boolean_T c12_b_found;
  real_T c12_b_n;
  int32_T c12_c;
  real_T c12_e_y[144];
  int32_T c12_nz;
  real_T c12_b_thisv;
  int32_T c12_b_c;
  int32_T c12_i5;
  int32_T c12_cend;
  real_T c12_b_v;
  int32_T c12_idx;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_f_y;
  int32_T c12_outstart;
  int32_T c12_g_y;
  int32_T c12_instart;
  int32_T c12_i8;
  int32_T c12_a;
  int32_T c12_nelem;
  int32_T c12_b_outstart;
  int32_T c12_i9;
  int32_T c12_b;
  real_T c12_b_rhsv;
  int32_T c12_b_instart;
  int32_T c12_b_a;
  int32_T c12_b_nelem;
  int32_T c12_b_b;
  int32_T c12_c_n;
  int32_T c12_c_col;
  int32_T c12_i10;
  real_T c12_d_n;
  int32_T c12_i11;
  int32_T c12_d_col;
  boolean_T c12_overflow;
  int32_T c12_b_nz;
  int32_T c12_c_k;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_c_loop_ub;
  int32_T c12_d_k;
  int32_T c12_i14;
  int32_T c12_b_idx;
  int32_T c12_d_loop_ub;
  int32_T c12_c_idx;
  int32_T c12_c_outstart;
  int32_T c12_d_outstart;
  int32_T c12_i15;
  int32_T c12_c_instart;
  int32_T c12_d_instart;
  int32_T c12_c_nelem;
  int32_T c12_e_outstart;
  int32_T c12_d_nelem;
  int32_T c12_f_outstart;
  int32_T c12_e_instart;
  int32_T c12_i16;
  int32_T c12_f_instart;
  int32_T c12_e_nelem;
  int32_T c12_f_nelem;
  int32_T c12_e_col;
  int32_T c12_i17;
  int32_T c12_i18;
  int32_T c12_i19;
  int32_T c12_f_col;
  int32_T c12_e_loop_ub;
  int32_T c12_e_k;
  int32_T c12_i20;
  int32_T c12_i21;
  int32_T c12_i22;
  int32_T c12_f_loop_ub;
  int32_T c12_f_k;
  int32_T c12_g_loop_ub;
  int32_T c12_i23;
  int32_T c12_i24;
  int32_T c12_h_loop_ub;
  int32_T c12_g_outstart;
  int32_T c12_i25;
  int32_T c12_i26;
  int32_T c12_g_instart;
  int32_T c12_g_nelem;
  int32_T c12_h_outstart;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_h_instart;
  int32_T c12_i_loop_ub;
  int32_T c12_h_nelem;
  int32_T c12_i29;
  int32_T c12_i30;
  int32_T c12_j_loop_ub;
  int32_T c12_k_loop_ub;
  int32_T c12_i_outstart;
  int32_T c12_i31;
  int32_T c12_i32;
  int32_T c12_i_instart;
  int32_T c12_l_loop_ub;
  int32_T c12_i_nelem;
  int32_T c12_j_outstart;
  int32_T c12_i33;
  int32_T c12_i34;
  int32_T c12_j_instart;
  int32_T c12_j_nelem;
  int32_T c12_i35;
  int32_T c12_i36;
  int32_T c12_m_loop_ub;
  int32_T c12_i37;
  int32_T c12_i38;
  int32_T c12_n_loop_ub;
  int32_T c12_o_loop_ub;
  int32_T c12_i39;
  int32_T c12_i40;
  int32_T c12_p_loop_ub;
  int32_T c12_k_outstart;
  int32_T c12_i41;
  int32_T c12_k_instart;
  int32_T c12_k_nelem;
  int32_T c12_l_outstart;
  int32_T c12_i42;
  int32_T c12_l_instart;
  int32_T c12_l_nelem;
  int32_T c12_i43;
  int32_T c12_q_loop_ub;
  int32_T c12_i44;
  int32_T c12_r_loop_ub;
  int32_T c12_i45;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_f_st.prev = &c12_e_st;
  c12_f_st.tls = c12_e_st.tls;
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_A,
    &c12_f_emlrtRTEI);
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_B,
    &c12_g_emlrtRTEI);
  covrtEmlFcnEval(chartInstance->c12_covrtInstance, 14U, 1, 0);
  c12_st.site = &c12_f_emlrtRSI;
  c12_spdiags(chartInstance, &c12_st, &c12_A);
  c12_st.site = &c12_g_emlrtRSI;
  c12_b_spdiags(chartInstance, &c12_st, &c12_B);
  c12_st.site = &c12_h_emlrtRSI;
  c12_e_sparse_parenAssign(chartInstance, &c12_st, &c12_A);
  c12_st.site = &c12_i_emlrtRSI;
  c12_f_sparse_parenAssign(chartInstance, &c12_st, &c12_A);
  c12_st.site = &c12_j_emlrtRSI;
  c12_b_st.site = &c12_bc_emlrtRSI;
  c12_c_st.site = &c12_cc_emlrtRSI;
  c12_d_st.site = &c12_dc_emlrtRSI;
  c12_sparse_validateNumericIndex(chartInstance, &c12_d_st);
  c12_d_st.site = &c12_ec_emlrtRSI;
  c12_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_d_st, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, &c12_d_st, &c12_b_y, 1, &c12_d_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_d_st, &c12_b_B, 1, &c12_emlrtRTEI);
  for (c12_cidx = 0; c12_cidx < 3; c12_cidx++) {
    c12_b_cidx = c12_cidx;
    c12_k = c12_b_cidx;
    c12_nt = 1.0 + (real_T)c12_k;
    c12_col = (int32_T)c12_nt;
    c12_i = c12_b_B->size[0];
    c12_b_B->size[0] = c12_B.rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_d_st, c12_b_B, c12_i,
      &c12_emlrtRTEI);
    c12_loop_ub = c12_B.rowidx->size[0] - 1;
    for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
      c12_b_B->data[c12_i1] = c12_B.rowidx->data[c12_i1];
    }

    c12_sparse_locBsearch(chartInstance, c12_b_B, 1, c12_B.colidx->data[c12_col
                          - 1], c12_B.colidx->data[c12_col], &c12_vidx,
                          &c12_found);
    if (c12_found) {
      c12_thisv = c12_B.d->data[c12_vidx - 1];
    } else {
      c12_thisv = 0.0;
    }

    c12_v = c12_dv[c12_rhsIter.idx - 1];
    c12_c_y = c12_rhsIter.idx;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter.idx = c12_d_y;
    c12_rhsv = c12_v;
    if ((c12_thisv == 0.0) && (c12_rhsv == 0.0)) {
    } else {
      c12_n = c12_B.colidx->data[c12_B.colidx->size[0] - 1];
      c12_b_n = (real_T)(c12_n - 1);
      c12_nz = (int32_T)c12_b_n;
      if ((c12_thisv != 0.0) && (c12_rhsv != 0.0)) {
        c12_B.d->data[c12_vidx - 1] = c12_rhsv;
      } else if (c12_thisv == 0.0) {
        c12_idx = c12_vidx;
        if (c12_nz == c12_B.maxnz) {
          c12_e_st.site = &c12_fc_emlrtRSI;
          c12_c_realloc(chartInstance, &c12_e_st, &c12_B, c12_nz + 10, c12_idx,
                        c12_idx + 1, c12_nz, 1);
          c12_B.rowidx->data[c12_idx] = 1;
          c12_B.d->data[c12_idx] = c12_rhsv;
        } else {
          c12_e_st.site = &c12_gc_emlrtRSI;
          c12_b_outstart = c12_idx + 2;
          c12_b_instart = c12_idx + 1;
          c12_b_nelem = c12_nz - c12_idx;
          if (!(c12_b_nelem <= 0)) {
            c12_f_st.site = &c12_kc_emlrtRSI;
            c12_i12 = c12_y->size[0];
            c12_y->size[0] = c12_B.rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y,
              c12_i12, &c12_b_emlrtRTEI);
            c12_d_loop_ub = c12_B.rowidx->size[0] - 1;
            for (c12_i15 = 0; c12_i15 <= c12_d_loop_ub; c12_i15++) {
              c12_y->data[c12_i15] = c12_B.rowidx->data[c12_i15];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i18 = c12_B.rowidx->size[0];
            c12_B.rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
              c12_i18, &c12_c_emlrtRTEI);
            c12_g_loop_ub = c12_y->size[0] - 1;
            for (c12_i24 = 0; c12_i24 <= c12_g_loop_ub; c12_i24++) {
              c12_B.rowidx->data[c12_i24] = c12_y->data[c12_i24];
            }

            memmove((void *)&c12_B.rowidx->data[c12_f_outstart], (void *)
                    &c12_B.rowidx->data[c12_f_instart], (uint32_T)((size_t)
                     c12_f_nelem * sizeof(int32_T)));
            c12_f_st.site = &c12_lc_emlrtRSI;
            c12_i27 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_B.d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
              c12_i27, &c12_d_emlrtRTEI);
            c12_j_loop_ub = c12_B.d->size[0] - 1;
            for (c12_i31 = 0; c12_i31 <= c12_j_loop_ub; c12_i31++) {
              c12_b_y->data[c12_i31] = c12_B.d->data[c12_i31];
            }

            c12_j_outstart = c12_b_outstart - 1;
            c12_j_instart = c12_b_instart - 1;
            c12_j_nelem = c12_b_nelem;
            c12_i36 = c12_B.d->size[0];
            c12_B.d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
              c12_i36, &c12_c_emlrtRTEI);
            c12_o_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i40 = 0; c12_i40 <= c12_o_loop_ub; c12_i40++) {
              c12_B.d->data[c12_i40] = c12_b_y->data[c12_i40];
            }

            memmove((void *)&c12_B.d->data[c12_j_outstart], (void *)
                    &c12_B.d->data[c12_j_instart], (uint32_T)((size_t)
                     c12_j_nelem * sizeof(real_T)));
          }

          c12_B.d->data[c12_idx] = c12_rhsv;
          c12_B.rowidx->data[c12_idx] = 1;
        }

        c12_d_col = c12_col + 1;
        c12_i13 = c12_d_col;
        for (c12_d_k = c12_i13 - 1; c12_d_k + 1 < 14; c12_d_k++) {
          c12_B.colidx->data[c12_d_k]++;
        }
      } else {
        c12_e_st.site = &c12_hc_emlrtRSI;
        c12_outstart = c12_vidx;
        c12_instart = c12_vidx + 1;
        c12_nelem = c12_nz - c12_vidx;
        if (!(c12_nelem <= 0)) {
          c12_f_st.site = &c12_kc_emlrtRSI;
          c12_i10 = c12_y->size[0];
          c12_y->size[0] = c12_B.rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y, c12_i10,
            &c12_b_emlrtRTEI);
          c12_c_loop_ub = c12_B.rowidx->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_c_loop_ub; c12_i14++) {
            c12_y->data[c12_i14] = c12_B.rowidx->data[c12_i14];
          }

          c12_d_outstart = c12_outstart - 1;
          c12_d_instart = c12_instart - 1;
          c12_d_nelem = c12_nelem;
          c12_i16 = c12_B.rowidx->size[0];
          c12_B.rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
            c12_i16, &c12_c_emlrtRTEI);
          c12_e_loop_ub = c12_y->size[0] - 1;
          for (c12_i22 = 0; c12_i22 <= c12_e_loop_ub; c12_i22++) {
            c12_B.rowidx->data[c12_i22] = c12_y->data[c12_i22];
          }

          memmove((void *)&c12_B.rowidx->data[c12_d_outstart], (void *)
                  &c12_B.rowidx->data[c12_d_instart], (uint32_T)((size_t)
                   c12_d_nelem * sizeof(int32_T)));
          c12_f_st.site = &c12_lc_emlrtRSI;
          c12_i26 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_B.d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
            c12_i26, &c12_d_emlrtRTEI);
          c12_i_loop_ub = c12_B.d->size[0] - 1;
          for (c12_i29 = 0; c12_i29 <= c12_i_loop_ub; c12_i29++) {
            c12_b_y->data[c12_i29] = c12_B.d->data[c12_i29];
          }

          c12_i_outstart = c12_outstart - 1;
          c12_i_instart = c12_instart - 1;
          c12_i_nelem = c12_nelem;
          c12_i34 = c12_B.d->size[0];
          c12_B.d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
            c12_i34, &c12_c_emlrtRTEI);
          c12_m_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i38 = 0; c12_i38 <= c12_m_loop_ub; c12_i38++) {
            c12_B.d->data[c12_i38] = c12_b_y->data[c12_i38];
          }

          memmove((void *)&c12_B.d->data[c12_i_outstart], (void *)&c12_B.d->
                  data[c12_i_instart], (uint32_T)((size_t)c12_i_nelem * sizeof
                   (real_T)));
        }

        c12_c_col = c12_col + 1;
        c12_i11 = c12_c_col;
        for (c12_c_k = c12_i11 - 1; c12_c_k + 1 < 14; c12_c_k++) {
          c12_B.colidx->data[c12_c_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_b_B);
  c12_st.site = &c12_k_emlrtRSI;
  c12_b_st.site = &c12_bc_emlrtRSI;
  c12_c_st.site = &c12_cc_emlrtRSI;
  c12_d_st.site = &c12_dc_emlrtRSI;
  c12_b_sparse_validateNumericIndex(chartInstance, &c12_d_st);
  c12_d_st.site = &c12_ec_emlrtRSI;
  c12_b_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_d_st, &c12_c_B, 1, &c12_emlrtRTEI);
  for (c12_c_cidx = 0; c12_c_cidx < 3; c12_c_cidx++) {
    c12_d_cidx = c12_c_cidx;
    c12_b_k = c12_d_cidx;
    c12_b_nt = 10.0 + (real_T)c12_b_k;
    c12_b_col = (int32_T)c12_b_nt;
    c12_i2 = c12_c_B->size[0];
    c12_c_B->size[0] = c12_B.rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_d_st, c12_c_B, c12_i2,
      &c12_emlrtRTEI);
    c12_b_loop_ub = c12_B.rowidx->size[0] - 1;
    for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
      c12_c_B->data[c12_i3] = c12_B.rowidx->data[c12_i3];
    }

    c12_sparse_locBsearch(chartInstance, c12_c_B, 12, c12_B.colidx->
                          data[c12_b_col - 1], c12_B.colidx->data[c12_b_col],
                          &c12_b_vidx, &c12_b_found);
    if (c12_b_found) {
      c12_b_thisv = c12_B.d->data[c12_b_vidx - 1];
    } else {
      c12_b_thisv = 0.0;
    }

    c12_b_v = c12_dv[c12_b_rhsIter.idx - 1];
    c12_f_y = c12_b_rhsIter.idx;
    c12_g_y = c12_f_y + 1;
    c12_b_rhsIter.idx = c12_g_y;
    c12_b_rhsv = c12_b_v;
    if ((c12_b_thisv == 0.0) && (c12_b_rhsv == 0.0)) {
    } else {
      c12_c_n = c12_B.colidx->data[c12_B.colidx->size[0] - 1];
      c12_d_n = (real_T)(c12_c_n - 1);
      c12_b_nz = (int32_T)c12_d_n;
      if ((c12_b_thisv != 0.0) && (c12_b_rhsv != 0.0)) {
        c12_B.d->data[c12_b_vidx - 1] = c12_b_rhsv;
      } else if (c12_b_thisv == 0.0) {
        c12_b_idx = c12_b_vidx;
        if (c12_b_nz == c12_B.maxnz) {
          c12_e_st.site = &c12_fc_emlrtRSI;
          c12_c_realloc(chartInstance, &c12_e_st, &c12_B, c12_b_nz + 10,
                        c12_b_idx, c12_b_idx + 1, c12_b_nz, 1);
          c12_B.rowidx->data[c12_b_idx] = 12;
          c12_B.d->data[c12_b_idx] = c12_b_rhsv;
        } else {
          c12_e_st.site = &c12_gc_emlrtRSI;
          c12_e_outstart = c12_b_idx + 2;
          c12_e_instart = c12_b_idx + 1;
          c12_e_nelem = c12_b_nz - c12_b_idx;
          if (!(c12_e_nelem <= 0)) {
            c12_f_st.site = &c12_kc_emlrtRSI;
            c12_i20 = c12_y->size[0];
            c12_y->size[0] = c12_B.rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y,
              c12_i20, &c12_b_emlrtRTEI);
            c12_h_loop_ub = c12_B.rowidx->size[0] - 1;
            for (c12_i25 = 0; c12_i25 <= c12_h_loop_ub; c12_i25++) {
              c12_y->data[c12_i25] = c12_B.rowidx->data[c12_i25];
            }

            c12_h_outstart = c12_e_outstart - 1;
            c12_h_instart = c12_e_instart - 1;
            c12_h_nelem = c12_e_nelem;
            c12_i30 = c12_B.rowidx->size[0];
            c12_B.rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
              c12_i30, &c12_e_emlrtRTEI);
            c12_l_loop_ub = c12_y->size[0] - 1;
            for (c12_i33 = 0; c12_i33 <= c12_l_loop_ub; c12_i33++) {
              c12_B.rowidx->data[c12_i33] = c12_y->data[c12_i33];
            }

            memmove((void *)&c12_B.rowidx->data[c12_h_outstart], (void *)
                    &c12_B.rowidx->data[c12_h_instart], (uint32_T)((size_t)
                     c12_h_nelem * sizeof(int32_T)));
            c12_f_st.site = &c12_lc_emlrtRSI;
            c12_i37 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_B.d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
              c12_i37, &c12_d_emlrtRTEI);
            c12_p_loop_ub = c12_B.d->size[0] - 1;
            for (c12_i41 = 0; c12_i41 <= c12_p_loop_ub; c12_i41++) {
              c12_b_y->data[c12_i41] = c12_B.d->data[c12_i41];
            }

            c12_l_outstart = c12_e_outstart - 1;
            c12_l_instart = c12_e_instart - 1;
            c12_l_nelem = c12_e_nelem;
            c12_i43 = c12_B.d->size[0];
            c12_B.d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
              c12_i43, &c12_e_emlrtRTEI);
            c12_r_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i45 = 0; c12_i45 <= c12_r_loop_ub; c12_i45++) {
              c12_B.d->data[c12_i45] = c12_b_y->data[c12_i45];
            }

            memmove((void *)&c12_B.d->data[c12_l_outstart], (void *)
                    &c12_B.d->data[c12_l_instart], (uint32_T)((size_t)
                     c12_l_nelem * sizeof(real_T)));
          }

          c12_B.d->data[c12_b_idx] = c12_b_rhsv;
          c12_B.rowidx->data[c12_b_idx] = 12;
        }

        c12_f_col = c12_b_col + 1;
        c12_i21 = c12_f_col;
        for (c12_f_k = c12_i21 - 1; c12_f_k + 1 < 14; c12_f_k++) {
          c12_B.colidx->data[c12_f_k]++;
        }
      } else {
        c12_e_st.site = &c12_hc_emlrtRSI;
        c12_c_outstart = c12_b_vidx;
        c12_c_instart = c12_b_vidx + 1;
        c12_c_nelem = c12_b_nz - c12_b_vidx;
        if (!(c12_c_nelem <= 0)) {
          c12_f_st.site = &c12_kc_emlrtRSI;
          c12_i17 = c12_y->size[0];
          c12_y->size[0] = c12_B.rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y, c12_i17,
            &c12_b_emlrtRTEI);
          c12_f_loop_ub = c12_B.rowidx->size[0] - 1;
          for (c12_i23 = 0; c12_i23 <= c12_f_loop_ub; c12_i23++) {
            c12_y->data[c12_i23] = c12_B.rowidx->data[c12_i23];
          }

          c12_g_outstart = c12_c_outstart - 1;
          c12_g_instart = c12_c_instart - 1;
          c12_g_nelem = c12_c_nelem;
          c12_i28 = c12_B.rowidx->size[0];
          c12_B.rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
            c12_i28, &c12_e_emlrtRTEI);
          c12_k_loop_ub = c12_y->size[0] - 1;
          for (c12_i32 = 0; c12_i32 <= c12_k_loop_ub; c12_i32++) {
            c12_B.rowidx->data[c12_i32] = c12_y->data[c12_i32];
          }

          memmove((void *)&c12_B.rowidx->data[c12_g_outstart], (void *)
                  &c12_B.rowidx->data[c12_g_instart], (uint32_T)((size_t)
                   c12_g_nelem * sizeof(int32_T)));
          c12_f_st.site = &c12_lc_emlrtRSI;
          c12_i35 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_B.d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
            c12_i35, &c12_d_emlrtRTEI);
          c12_n_loop_ub = c12_B.d->size[0] - 1;
          for (c12_i39 = 0; c12_i39 <= c12_n_loop_ub; c12_i39++) {
            c12_b_y->data[c12_i39] = c12_B.d->data[c12_i39];
          }

          c12_k_outstart = c12_c_outstart - 1;
          c12_k_instart = c12_c_instart - 1;
          c12_k_nelem = c12_c_nelem;
          c12_i42 = c12_B.d->size[0];
          c12_B.d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
            c12_i42, &c12_e_emlrtRTEI);
          c12_q_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i44 = 0; c12_i44 <= c12_q_loop_ub; c12_i44++) {
            c12_B.d->data[c12_i44] = c12_b_y->data[c12_i44];
          }

          memmove((void *)&c12_B.d->data[c12_k_outstart], (void *)&c12_B.d->
                  data[c12_k_instart], (uint32_T)((size_t)c12_k_nelem * sizeof
                   (real_T)));
        }

        c12_e_col = c12_b_col + 1;
        c12_i19 = c12_e_col;
        for (c12_e_k = c12_i19 - 1; c12_e_k + 1 < 14; c12_e_k++) {
          c12_B.colidx->data[c12_e_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_c_B);
  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
  c12_emxInitStruct_coder_internal_sp(chartInstance, &c12_d_st, &c12_this,
    &c12_h_emlrtRTEI);
  c12_st.site = &c12_l_emlrtRSI;
  c12_b_st.site = &c12_l_emlrtRSI;
  c12_sparse_mldivide(chartInstance, &c12_b_st, c12_A, c12_B, &c12_this);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_B);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_A);
  for (c12_i4 = 0; c12_i4 < 144; c12_i4++) {
    c12_e_y[c12_i4] = 0.0;
  }

  for (c12_c = 0; c12_c < 12; c12_c++) {
    c12_b_c = c12_c;
    c12_cend = c12_this.colidx->data[c12_b_c + 1] - 1;
    c12_i7 = c12_this.colidx->data[c12_b_c];
    c12_b_st.site = &c12_id_emlrtRSI;
    c12_a = c12_i7;
    c12_b = c12_cend;
    c12_b_a = c12_a;
    c12_b_b = c12_b;
    if (c12_b_a > c12_b_b) {
      c12_overflow = false;
    } else {
      c12_overflow = (c12_b_b > 2147483646);
    }

    if (c12_overflow) {
      c12_c_st.site = &c12_u_emlrtRSI;
      c12_check_forloop_overflow_error(chartInstance, &c12_c_st);
    }

    for (c12_c_idx = c12_i7 - 1; c12_c_idx < c12_cend; c12_c_idx++) {
      c12_e_y[(c12_this.rowidx->data[c12_c_idx] + 12 * c12_b_c) - 1] =
        c12_this.d->data[c12_c_idx];
    }
  }

  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_this);
  c12_i5 = 0;
  for (c12_i6 = 0; c12_i6 < 12; c12_i6++) {
    c12_i8 = 0;
    for (c12_i9 = 0; c12_i9 < 12; c12_i9++) {
      c12_M[c12_i9 + c12_i5] = c12_e_y[c12_i8 + c12_i6];
      c12_i8 += 12;
    }

    c12_i5 += 12;
  }
}

static void c12_b_splineMatrix(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, real_T c12_M[100])
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  emlrtStack c12_f_st;
  c12_coder_internal_sparse c12_A;
  c12_coder_internal_sparse c12_B;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  c12_emxArray_int32_T *c12_b_B;
  int32_T c12_cidx;
  int32_T c12_b_cidx;
  int32_T c12_k;
  real_T c12_nt;
  int32_T c12_col;
  int32_T c12_i;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_b_rhsIter;
  int32_T c12_loop_ub;
  c12_emxArray_int32_T *c12_c_B;
  int32_T c12_i1;
  int32_T c12_c_cidx;
  int32_T c12_vidx;
  boolean_T c12_found;
  int32_T c12_d_cidx;
  int32_T c12_b_k;
  real_T c12_thisv;
  real_T c12_b_nt;
  c12_coder_internal_sparse c12_this;
  int32_T c12_b_col;
  real_T c12_v;
  int32_T c12_i2;
  int32_T c12_c_y;
  int32_T c12_d_y;
  int32_T c12_b_loop_ub;
  real_T c12_rhsv;
  int32_T c12_i3;
  int32_T c12_i4;
  int32_T c12_n;
  int32_T c12_b_vidx;
  boolean_T c12_b_found;
  real_T c12_b_n;
  int32_T c12_c;
  real_T c12_e_y[100];
  int32_T c12_nz;
  real_T c12_b_thisv;
  int32_T c12_b_c;
  int32_T c12_i5;
  int32_T c12_cend;
  real_T c12_b_v;
  int32_T c12_idx;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_f_y;
  int32_T c12_outstart;
  int32_T c12_g_y;
  int32_T c12_instart;
  int32_T c12_i8;
  int32_T c12_a;
  int32_T c12_nelem;
  int32_T c12_b_outstart;
  int32_T c12_i9;
  int32_T c12_b;
  real_T c12_b_rhsv;
  int32_T c12_b_instart;
  int32_T c12_b_a;
  int32_T c12_b_nelem;
  int32_T c12_b_b;
  int32_T c12_c_n;
  int32_T c12_c_col;
  int32_T c12_i10;
  real_T c12_d_n;
  int32_T c12_i11;
  int32_T c12_d_col;
  boolean_T c12_overflow;
  int32_T c12_b_nz;
  int32_T c12_c_k;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_c_loop_ub;
  int32_T c12_d_k;
  int32_T c12_i14;
  int32_T c12_b_idx;
  int32_T c12_d_loop_ub;
  int32_T c12_c_idx;
  int32_T c12_c_outstart;
  int32_T c12_d_outstart;
  int32_T c12_i15;
  int32_T c12_c_instart;
  int32_T c12_d_instart;
  int32_T c12_c_nelem;
  int32_T c12_e_outstart;
  int32_T c12_d_nelem;
  int32_T c12_f_outstart;
  int32_T c12_e_instart;
  int32_T c12_i16;
  int32_T c12_f_instart;
  int32_T c12_e_nelem;
  int32_T c12_f_nelem;
  int32_T c12_e_col;
  int32_T c12_i17;
  int32_T c12_i18;
  int32_T c12_i19;
  int32_T c12_f_col;
  int32_T c12_e_loop_ub;
  int32_T c12_e_k;
  int32_T c12_i20;
  int32_T c12_i21;
  int32_T c12_i22;
  int32_T c12_f_loop_ub;
  int32_T c12_f_k;
  int32_T c12_g_loop_ub;
  int32_T c12_i23;
  int32_T c12_i24;
  int32_T c12_h_loop_ub;
  int32_T c12_g_outstart;
  int32_T c12_i25;
  int32_T c12_i26;
  int32_T c12_g_instart;
  int32_T c12_g_nelem;
  int32_T c12_h_outstart;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_h_instart;
  int32_T c12_i_loop_ub;
  int32_T c12_h_nelem;
  int32_T c12_i29;
  int32_T c12_i30;
  int32_T c12_j_loop_ub;
  int32_T c12_k_loop_ub;
  int32_T c12_i_outstart;
  int32_T c12_i31;
  int32_T c12_i32;
  int32_T c12_i_instart;
  int32_T c12_l_loop_ub;
  int32_T c12_i_nelem;
  int32_T c12_j_outstart;
  int32_T c12_i33;
  int32_T c12_i34;
  int32_T c12_j_instart;
  int32_T c12_j_nelem;
  int32_T c12_i35;
  int32_T c12_i36;
  int32_T c12_m_loop_ub;
  int32_T c12_i37;
  int32_T c12_i38;
  int32_T c12_n_loop_ub;
  int32_T c12_o_loop_ub;
  int32_T c12_i39;
  int32_T c12_i40;
  int32_T c12_p_loop_ub;
  int32_T c12_k_outstart;
  int32_T c12_i41;
  int32_T c12_k_instart;
  int32_T c12_k_nelem;
  int32_T c12_l_outstart;
  int32_T c12_i42;
  int32_T c12_l_instart;
  int32_T c12_l_nelem;
  int32_T c12_i43;
  int32_T c12_q_loop_ub;
  int32_T c12_i44;
  int32_T c12_r_loop_ub;
  int32_T c12_i45;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_f_st.prev = &c12_e_st;
  c12_f_st.tls = c12_e_st.tls;
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_A,
    &c12_f_emlrtRTEI);
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_B,
    &c12_g_emlrtRTEI);
  covrtEmlFcnEval(chartInstance->c12_covrtInstance, 14U, 1, 0);
  c12_st.site = &c12_f_emlrtRSI;
  c12_c_spdiags(chartInstance, &c12_st, &c12_A);
  c12_st.site = &c12_g_emlrtRSI;
  c12_d_spdiags(chartInstance, &c12_st, &c12_B);
  c12_st.site = &c12_h_emlrtRSI;
  c12_g_sparse_parenAssign(chartInstance, &c12_st, &c12_A);
  c12_st.site = &c12_i_emlrtRSI;
  c12_h_sparse_parenAssign(chartInstance, &c12_st, &c12_A);
  c12_st.site = &c12_j_emlrtRSI;
  c12_b_st.site = &c12_bc_emlrtRSI;
  c12_c_st.site = &c12_cc_emlrtRSI;
  c12_d_st.site = &c12_dc_emlrtRSI;
  c12_sparse_validateNumericIndex(chartInstance, &c12_d_st);
  c12_d_st.site = &c12_ec_emlrtRSI;
  c12_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_d_st, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, &c12_d_st, &c12_b_y, 1, &c12_d_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_d_st, &c12_b_B, 1, &c12_emlrtRTEI);
  for (c12_cidx = 0; c12_cidx < 3; c12_cidx++) {
    c12_b_cidx = c12_cidx;
    c12_k = c12_b_cidx;
    c12_nt = 1.0 + (real_T)c12_k;
    c12_col = (int32_T)c12_nt;
    c12_i = c12_b_B->size[0];
    c12_b_B->size[0] = c12_B.rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_d_st, c12_b_B, c12_i,
      &c12_emlrtRTEI);
    c12_loop_ub = c12_B.rowidx->size[0] - 1;
    for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
      c12_b_B->data[c12_i1] = c12_B.rowidx->data[c12_i1];
    }

    c12_sparse_locBsearch(chartInstance, c12_b_B, 1, c12_B.colidx->data[c12_col
                          - 1], c12_B.colidx->data[c12_col], &c12_vidx,
                          &c12_found);
    if (c12_found) {
      c12_thisv = c12_B.d->data[c12_vidx - 1];
    } else {
      c12_thisv = 0.0;
    }

    c12_v = c12_dv[c12_rhsIter.idx - 1];
    c12_c_y = c12_rhsIter.idx;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter.idx = c12_d_y;
    c12_rhsv = c12_v;
    if ((c12_thisv == 0.0) && (c12_rhsv == 0.0)) {
    } else {
      c12_n = c12_B.colidx->data[c12_B.colidx->size[0] - 1];
      c12_b_n = (real_T)(c12_n - 1);
      c12_nz = (int32_T)c12_b_n;
      if ((c12_thisv != 0.0) && (c12_rhsv != 0.0)) {
        c12_B.d->data[c12_vidx - 1] = c12_rhsv;
      } else if (c12_thisv == 0.0) {
        c12_idx = c12_vidx;
        if (c12_nz == c12_B.maxnz) {
          c12_e_st.site = &c12_fc_emlrtRSI;
          c12_d_realloc(chartInstance, &c12_e_st, &c12_B, c12_nz + 10, c12_idx,
                        c12_idx + 1, c12_nz, 1);
          c12_B.rowidx->data[c12_idx] = 1;
          c12_B.d->data[c12_idx] = c12_rhsv;
        } else {
          c12_e_st.site = &c12_gc_emlrtRSI;
          c12_b_outstart = c12_idx + 2;
          c12_b_instart = c12_idx + 1;
          c12_b_nelem = c12_nz - c12_idx;
          if (!(c12_b_nelem <= 0)) {
            c12_f_st.site = &c12_kc_emlrtRSI;
            c12_i12 = c12_y->size[0];
            c12_y->size[0] = c12_B.rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y,
              c12_i12, &c12_b_emlrtRTEI);
            c12_d_loop_ub = c12_B.rowidx->size[0] - 1;
            for (c12_i15 = 0; c12_i15 <= c12_d_loop_ub; c12_i15++) {
              c12_y->data[c12_i15] = c12_B.rowidx->data[c12_i15];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i18 = c12_B.rowidx->size[0];
            c12_B.rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
              c12_i18, &c12_c_emlrtRTEI);
            c12_g_loop_ub = c12_y->size[0] - 1;
            for (c12_i24 = 0; c12_i24 <= c12_g_loop_ub; c12_i24++) {
              c12_B.rowidx->data[c12_i24] = c12_y->data[c12_i24];
            }

            memmove((void *)&c12_B.rowidx->data[c12_f_outstart], (void *)
                    &c12_B.rowidx->data[c12_f_instart], (uint32_T)((size_t)
                     c12_f_nelem * sizeof(int32_T)));
            c12_f_st.site = &c12_lc_emlrtRSI;
            c12_i27 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_B.d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
              c12_i27, &c12_d_emlrtRTEI);
            c12_j_loop_ub = c12_B.d->size[0] - 1;
            for (c12_i31 = 0; c12_i31 <= c12_j_loop_ub; c12_i31++) {
              c12_b_y->data[c12_i31] = c12_B.d->data[c12_i31];
            }

            c12_j_outstart = c12_b_outstart - 1;
            c12_j_instart = c12_b_instart - 1;
            c12_j_nelem = c12_b_nelem;
            c12_i36 = c12_B.d->size[0];
            c12_B.d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
              c12_i36, &c12_c_emlrtRTEI);
            c12_o_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i40 = 0; c12_i40 <= c12_o_loop_ub; c12_i40++) {
              c12_B.d->data[c12_i40] = c12_b_y->data[c12_i40];
            }

            memmove((void *)&c12_B.d->data[c12_j_outstart], (void *)
                    &c12_B.d->data[c12_j_instart], (uint32_T)((size_t)
                     c12_j_nelem * sizeof(real_T)));
          }

          c12_B.d->data[c12_idx] = c12_rhsv;
          c12_B.rowidx->data[c12_idx] = 1;
        }

        c12_d_col = c12_col + 1;
        c12_i13 = c12_d_col;
        for (c12_d_k = c12_i13 - 1; c12_d_k + 1 < 12; c12_d_k++) {
          c12_B.colidx->data[c12_d_k]++;
        }
      } else {
        c12_e_st.site = &c12_hc_emlrtRSI;
        c12_outstart = c12_vidx;
        c12_instart = c12_vidx + 1;
        c12_nelem = c12_nz - c12_vidx;
        if (!(c12_nelem <= 0)) {
          c12_f_st.site = &c12_kc_emlrtRSI;
          c12_i10 = c12_y->size[0];
          c12_y->size[0] = c12_B.rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y, c12_i10,
            &c12_b_emlrtRTEI);
          c12_c_loop_ub = c12_B.rowidx->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_c_loop_ub; c12_i14++) {
            c12_y->data[c12_i14] = c12_B.rowidx->data[c12_i14];
          }

          c12_d_outstart = c12_outstart - 1;
          c12_d_instart = c12_instart - 1;
          c12_d_nelem = c12_nelem;
          c12_i16 = c12_B.rowidx->size[0];
          c12_B.rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
            c12_i16, &c12_c_emlrtRTEI);
          c12_e_loop_ub = c12_y->size[0] - 1;
          for (c12_i22 = 0; c12_i22 <= c12_e_loop_ub; c12_i22++) {
            c12_B.rowidx->data[c12_i22] = c12_y->data[c12_i22];
          }

          memmove((void *)&c12_B.rowidx->data[c12_d_outstart], (void *)
                  &c12_B.rowidx->data[c12_d_instart], (uint32_T)((size_t)
                   c12_d_nelem * sizeof(int32_T)));
          c12_f_st.site = &c12_lc_emlrtRSI;
          c12_i26 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_B.d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
            c12_i26, &c12_d_emlrtRTEI);
          c12_i_loop_ub = c12_B.d->size[0] - 1;
          for (c12_i29 = 0; c12_i29 <= c12_i_loop_ub; c12_i29++) {
            c12_b_y->data[c12_i29] = c12_B.d->data[c12_i29];
          }

          c12_i_outstart = c12_outstart - 1;
          c12_i_instart = c12_instart - 1;
          c12_i_nelem = c12_nelem;
          c12_i34 = c12_B.d->size[0];
          c12_B.d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
            c12_i34, &c12_c_emlrtRTEI);
          c12_m_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i38 = 0; c12_i38 <= c12_m_loop_ub; c12_i38++) {
            c12_B.d->data[c12_i38] = c12_b_y->data[c12_i38];
          }

          memmove((void *)&c12_B.d->data[c12_i_outstart], (void *)&c12_B.d->
                  data[c12_i_instart], (uint32_T)((size_t)c12_i_nelem * sizeof
                   (real_T)));
        }

        c12_c_col = c12_col + 1;
        c12_i11 = c12_c_col;
        for (c12_c_k = c12_i11 - 1; c12_c_k + 1 < 12; c12_c_k++) {
          c12_B.colidx->data[c12_c_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_b_B);
  c12_st.site = &c12_k_emlrtRSI;
  c12_b_st.site = &c12_bc_emlrtRSI;
  c12_c_st.site = &c12_cc_emlrtRSI;
  c12_d_st.site = &c12_dc_emlrtRSI;
  c12_c_sparse_validateNumericIndex(chartInstance, &c12_d_st);
  c12_d_st.site = &c12_ec_emlrtRSI;
  c12_b_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_d_st, &c12_c_B, 1, &c12_emlrtRTEI);
  for (c12_c_cidx = 0; c12_c_cidx < 3; c12_c_cidx++) {
    c12_d_cidx = c12_c_cidx;
    c12_b_k = c12_d_cidx;
    c12_b_nt = 8.0 + (real_T)c12_b_k;
    c12_b_col = (int32_T)c12_b_nt;
    c12_i2 = c12_c_B->size[0];
    c12_c_B->size[0] = c12_B.rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_d_st, c12_c_B, c12_i2,
      &c12_emlrtRTEI);
    c12_b_loop_ub = c12_B.rowidx->size[0] - 1;
    for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
      c12_c_B->data[c12_i3] = c12_B.rowidx->data[c12_i3];
    }

    c12_sparse_locBsearch(chartInstance, c12_c_B, 10, c12_B.colidx->
                          data[c12_b_col - 1], c12_B.colidx->data[c12_b_col],
                          &c12_b_vidx, &c12_b_found);
    if (c12_b_found) {
      c12_b_thisv = c12_B.d->data[c12_b_vidx - 1];
    } else {
      c12_b_thisv = 0.0;
    }

    c12_b_v = c12_dv[c12_b_rhsIter.idx - 1];
    c12_f_y = c12_b_rhsIter.idx;
    c12_g_y = c12_f_y + 1;
    c12_b_rhsIter.idx = c12_g_y;
    c12_b_rhsv = c12_b_v;
    if ((c12_b_thisv == 0.0) && (c12_b_rhsv == 0.0)) {
    } else {
      c12_c_n = c12_B.colidx->data[c12_B.colidx->size[0] - 1];
      c12_d_n = (real_T)(c12_c_n - 1);
      c12_b_nz = (int32_T)c12_d_n;
      if ((c12_b_thisv != 0.0) && (c12_b_rhsv != 0.0)) {
        c12_B.d->data[c12_b_vidx - 1] = c12_b_rhsv;
      } else if (c12_b_thisv == 0.0) {
        c12_b_idx = c12_b_vidx;
        if (c12_b_nz == c12_B.maxnz) {
          c12_e_st.site = &c12_fc_emlrtRSI;
          c12_d_realloc(chartInstance, &c12_e_st, &c12_B, c12_b_nz + 10,
                        c12_b_idx, c12_b_idx + 1, c12_b_nz, 1);
          c12_B.rowidx->data[c12_b_idx] = 10;
          c12_B.d->data[c12_b_idx] = c12_b_rhsv;
        } else {
          c12_e_st.site = &c12_gc_emlrtRSI;
          c12_e_outstart = c12_b_idx + 2;
          c12_e_instart = c12_b_idx + 1;
          c12_e_nelem = c12_b_nz - c12_b_idx;
          if (!(c12_e_nelem <= 0)) {
            c12_f_st.site = &c12_kc_emlrtRSI;
            c12_i20 = c12_y->size[0];
            c12_y->size[0] = c12_B.rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y,
              c12_i20, &c12_b_emlrtRTEI);
            c12_h_loop_ub = c12_B.rowidx->size[0] - 1;
            for (c12_i25 = 0; c12_i25 <= c12_h_loop_ub; c12_i25++) {
              c12_y->data[c12_i25] = c12_B.rowidx->data[c12_i25];
            }

            c12_h_outstart = c12_e_outstart - 1;
            c12_h_instart = c12_e_instart - 1;
            c12_h_nelem = c12_e_nelem;
            c12_i30 = c12_B.rowidx->size[0];
            c12_B.rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
              c12_i30, &c12_e_emlrtRTEI);
            c12_l_loop_ub = c12_y->size[0] - 1;
            for (c12_i33 = 0; c12_i33 <= c12_l_loop_ub; c12_i33++) {
              c12_B.rowidx->data[c12_i33] = c12_y->data[c12_i33];
            }

            memmove((void *)&c12_B.rowidx->data[c12_h_outstart], (void *)
                    &c12_B.rowidx->data[c12_h_instart], (uint32_T)((size_t)
                     c12_h_nelem * sizeof(int32_T)));
            c12_f_st.site = &c12_lc_emlrtRSI;
            c12_i37 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_B.d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
              c12_i37, &c12_d_emlrtRTEI);
            c12_p_loop_ub = c12_B.d->size[0] - 1;
            for (c12_i41 = 0; c12_i41 <= c12_p_loop_ub; c12_i41++) {
              c12_b_y->data[c12_i41] = c12_B.d->data[c12_i41];
            }

            c12_l_outstart = c12_e_outstart - 1;
            c12_l_instart = c12_e_instart - 1;
            c12_l_nelem = c12_e_nelem;
            c12_i43 = c12_B.d->size[0];
            c12_B.d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
              c12_i43, &c12_e_emlrtRTEI);
            c12_r_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i45 = 0; c12_i45 <= c12_r_loop_ub; c12_i45++) {
              c12_B.d->data[c12_i45] = c12_b_y->data[c12_i45];
            }

            memmove((void *)&c12_B.d->data[c12_l_outstart], (void *)
                    &c12_B.d->data[c12_l_instart], (uint32_T)((size_t)
                     c12_l_nelem * sizeof(real_T)));
          }

          c12_B.d->data[c12_b_idx] = c12_b_rhsv;
          c12_B.rowidx->data[c12_b_idx] = 10;
        }

        c12_f_col = c12_b_col + 1;
        c12_i21 = c12_f_col;
        for (c12_f_k = c12_i21 - 1; c12_f_k + 1 < 12; c12_f_k++) {
          c12_B.colidx->data[c12_f_k]++;
        }
      } else {
        c12_e_st.site = &c12_hc_emlrtRSI;
        c12_c_outstart = c12_b_vidx;
        c12_c_instart = c12_b_vidx + 1;
        c12_c_nelem = c12_b_nz - c12_b_vidx;
        if (!(c12_c_nelem <= 0)) {
          c12_f_st.site = &c12_kc_emlrtRSI;
          c12_i17 = c12_y->size[0];
          c12_y->size[0] = c12_B.rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_y, c12_i17,
            &c12_b_emlrtRTEI);
          c12_f_loop_ub = c12_B.rowidx->size[0] - 1;
          for (c12_i23 = 0; c12_i23 <= c12_f_loop_ub; c12_i23++) {
            c12_y->data[c12_i23] = c12_B.rowidx->data[c12_i23];
          }

          c12_g_outstart = c12_c_outstart - 1;
          c12_g_instart = c12_c_instart - 1;
          c12_g_nelem = c12_c_nelem;
          c12_i28 = c12_B.rowidx->size[0];
          c12_B.rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_f_st, c12_B.rowidx,
            c12_i28, &c12_e_emlrtRTEI);
          c12_k_loop_ub = c12_y->size[0] - 1;
          for (c12_i32 = 0; c12_i32 <= c12_k_loop_ub; c12_i32++) {
            c12_B.rowidx->data[c12_i32] = c12_y->data[c12_i32];
          }

          memmove((void *)&c12_B.rowidx->data[c12_g_outstart], (void *)
                  &c12_B.rowidx->data[c12_g_instart], (uint32_T)((size_t)
                   c12_g_nelem * sizeof(int32_T)));
          c12_f_st.site = &c12_lc_emlrtRSI;
          c12_i35 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_B.d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_b_y,
            c12_i35, &c12_d_emlrtRTEI);
          c12_n_loop_ub = c12_B.d->size[0] - 1;
          for (c12_i39 = 0; c12_i39 <= c12_n_loop_ub; c12_i39++) {
            c12_b_y->data[c12_i39] = c12_B.d->data[c12_i39];
          }

          c12_k_outstart = c12_c_outstart - 1;
          c12_k_instart = c12_c_instart - 1;
          c12_k_nelem = c12_c_nelem;
          c12_i42 = c12_B.d->size[0];
          c12_B.d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_f_st, c12_B.d,
            c12_i42, &c12_e_emlrtRTEI);
          c12_q_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i44 = 0; c12_i44 <= c12_q_loop_ub; c12_i44++) {
            c12_B.d->data[c12_i44] = c12_b_y->data[c12_i44];
          }

          memmove((void *)&c12_B.d->data[c12_k_outstart], (void *)&c12_B.d->
                  data[c12_k_instart], (uint32_T)((size_t)c12_k_nelem * sizeof
                   (real_T)));
        }

        c12_e_col = c12_b_col + 1;
        c12_i19 = c12_e_col;
        for (c12_e_k = c12_i19 - 1; c12_e_k + 1 < 12; c12_e_k++) {
          c12_B.colidx->data[c12_e_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_c_B);
  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
  c12_emxInitStruct_coder_internal_sp(chartInstance, &c12_d_st, &c12_this,
    &c12_h_emlrtRTEI);
  c12_st.site = &c12_l_emlrtRSI;
  c12_b_st.site = &c12_l_emlrtRSI;
  c12_b_sparse_mldivide(chartInstance, &c12_b_st, c12_A, c12_B, &c12_this);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_B);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_A);
  for (c12_i4 = 0; c12_i4 < 100; c12_i4++) {
    c12_e_y[c12_i4] = 0.0;
  }

  for (c12_c = 0; c12_c < 10; c12_c++) {
    c12_b_c = c12_c;
    c12_cend = c12_this.colidx->data[c12_b_c + 1] - 1;
    c12_i7 = c12_this.colidx->data[c12_b_c];
    c12_b_st.site = &c12_id_emlrtRSI;
    c12_a = c12_i7;
    c12_b = c12_cend;
    c12_b_a = c12_a;
    c12_b_b = c12_b;
    if (c12_b_a > c12_b_b) {
      c12_overflow = false;
    } else {
      c12_overflow = (c12_b_b > 2147483646);
    }

    if (c12_overflow) {
      c12_c_st.site = &c12_u_emlrtRSI;
      c12_check_forloop_overflow_error(chartInstance, &c12_c_st);
    }

    for (c12_c_idx = c12_i7 - 1; c12_c_idx < c12_cend; c12_c_idx++) {
      c12_e_y[(c12_this.rowidx->data[c12_c_idx] + 10 * c12_b_c) - 1] =
        c12_this.d->data[c12_c_idx];
    }
  }

  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_this);
  c12_i5 = 0;
  for (c12_i6 = 0; c12_i6 < 10; c12_i6++) {
    c12_i8 = 0;
    for (c12_i9 = 0; c12_i9 < 10; c12_i9++) {
      c12_M[c12_i9 + c12_i5] = c12_e_y[c12_i8 + c12_i6];
      c12_i8 += 10;
    }

    c12_i5 += 10;
  }
}

static void c12_basisFunc_spline(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, real_T c12_xx[2], real_T c12_M[144], real_T c12_val
  [24], real_T c12_dval[24], real_T c12_ddval[24])
{
  int32_T c12_i;
  int32_T c12_i1;
  real_T c12_tt[2];
  int32_T c12_i2;
  int32_T c12_k;
  real_T c12_ind[2];
  int32_T c12_i3;
  int32_T c12_b_k;
  real_T c12_x;
  int32_T c12_b_i;
  real_T c12_b_x;
  int32_T c12_c_i;
  int32_T c12_trueCount;
  int32_T c12_d_i;
  real_T c12_d;
  int32_T c12_i4;
  int32_T c12_tmp_size[2];
  int32_T c12_partialTrueCount;
  int32_T c12_e_i;
  int32_T c12_loop_ub;
  int32_T c12_i5;
  int32_T c12_tmp_data[2];
  int32_T c12_i6;
  real_T c12_d1;
  int32_T c12_i7;
  int32_T c12_c_k;
  real_T c12_I[144];
  int32_T c12_i8;
  int32_T c12_d_k;
  int32_T c12_i9;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  real_T c12_QL[24];
  int32_T c12_i14;
  int32_T c12_i15;
  real_T c12_d2;
  int32_T c12_i16;
  int32_T c12_i17;
  int32_T c12_i18;
  int32_T c12_i19;
  real_T c12_QR[24];
  real_T c12_MQL[24];
  int32_T c12_jcol;
  real_T c12_d3;
  int32_T c12_i20;
  int32_T c12_i21;
  int32_T c12_b_jcol;
  real_T c12_MQR[24];
  int32_T c12_iacol;
  int32_T c12_i22;
  int32_T c12_ibmat;
  int32_T c12_itilerow;
  int32_T c12_i23;
  int32_T c12_b_itilerow;
  int32_T c12_i24;
  real_T c12_ZI[24];
  int32_T c12_ibcol;
  int32_T c12_i25;
  int32_T c12_i26;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_i29;
  int32_T c12_i30;
  int32_T c12_i31;
  int32_T c12_i32;
  int32_T c12_i33;
  int32_T c12_i34;
  int32_T c12_i35;
  covrtEmlFcnEval(chartInstance->c12_covrtInstance, 14U, 2, 0);
  for (c12_i = 0; c12_i < 2; c12_i++) {
    c12_tt[c12_i] = 11.0 * c12_xx[c12_i];
  }

  for (c12_i1 = 0; c12_i1 < 2; c12_i1++) {
    c12_tt[c12_i1] /= 360.0;
  }

  for (c12_i2 = 0; c12_i2 < 2; c12_i2++) {
    c12_ind[c12_i2] = c12_tt[c12_i2];
  }

  for (c12_k = 0; c12_k < 2; c12_k++) {
    c12_b_k = c12_k;
    c12_x = c12_ind[c12_b_k];
    c12_b_x = c12_x;
    c12_b_x = muDoubleScalarFloor(c12_b_x);
    c12_ind[c12_b_k] = c12_b_x;
  }

  for (c12_i3 = 0; c12_i3 < 2; c12_i3++) {
    c12_ind[c12_i3]++;
  }

  c12_b_i = 0;
  while (c12_b_i <= 1) {
    c12_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_c_i = 0;
  while (c12_c_i <= 1) {
    if (c12_ind[c12_c_i] <= 0.0) {
      c12_d = (real_T)(c12_c_i + 1);
      c12_i4 = (int32_T)emlrtIntegerCheckR2012b(c12_d, &c12_emlrtDCI, c12_sp);
      c12_ind[emlrtDynamicBoundsCheckR2012b(c12_i4, 1, 2, &c12_emlrtBCI, c12_sp)
        - 1] = 1.0;
    }

    c12_c_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_trueCount = 0;
  c12_d_i = 0;
  while (c12_d_i <= 1) {
    if (c12_ind[c12_d_i] >= 12.0) {
      c12_trueCount++;
    }

    c12_d_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_tmp_size[0] = 1;
  c12_tmp_size[1] = c12_trueCount;
  c12_partialTrueCount = 0;
  c12_e_i = 0;
  while (c12_e_i <= 1) {
    if (c12_ind[c12_e_i] >= 12.0) {
      c12_tmp_data[c12_partialTrueCount] = c12_e_i + 1;
      c12_partialTrueCount++;
    }

    c12_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_loop_ub = c12_tmp_size[0] * c12_tmp_size[1] - 1;
  for (c12_i5 = 0; c12_i5 <= c12_loop_ub; c12_i5++) {
    c12_d1 = (real_T)c12_tmp_data[c12_i5];
    c12_i7 = (int32_T)emlrtIntegerCheckR2012b(c12_d1, &c12_b_emlrtDCI, c12_sp);
    c12_ind[emlrtDynamicBoundsCheckR2012b(c12_i7, 1, 2, &c12_b_emlrtBCI, c12_sp)
      - 1] = 11.0;
  }

  for (c12_i6 = 0; c12_i6 < 144; c12_i6++) {
    c12_I[c12_i6] = 0.0;
  }

  for (c12_c_k = 0; c12_c_k < 12; c12_c_k++) {
    c12_d_k = c12_c_k;
    c12_I[c12_d_k + 12 * c12_d_k] = 1.0;
  }

  for (c12_i8 = 0; c12_i8 < 2; c12_i8++) {
    for (c12_i10 = 0; c12_i10 < 12; c12_i10++) {
      c12_i13 = (int32_T)emlrtIntegerCheckR2012b(c12_ind[c12_i8],
        &c12_c_emlrtDCI, c12_sp);
      c12_QL[c12_i10 + 12 * c12_i8] = c12_I[c12_i10 + 12 *
        (emlrtDynamicBoundsCheckR2012b(c12_i13, 1, 12, &c12_c_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i9 = 0; c12_i9 < 2; c12_i9++) {
    for (c12_i12 = 0; c12_i12 < 12; c12_i12++) {
      c12_d2 = c12_ind[c12_i9] + 1.0;
      c12_i16 = (int32_T)emlrtIntegerCheckR2012b(c12_d2, &c12_d_emlrtDCI, c12_sp);
      c12_QR[c12_i12 + 12 * c12_i9] = c12_I[c12_i12 + 12 *
        (emlrtDynamicBoundsCheckR2012b(c12_i16, 1, 12, &c12_d_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i11 = 0; c12_i11 < 2; c12_i11++) {
    for (c12_i15 = 0; c12_i15 < 12; c12_i15++) {
      c12_i19 = (int32_T)emlrtIntegerCheckR2012b(c12_ind[c12_i11],
        &c12_e_emlrtDCI, c12_sp);
      c12_MQL[c12_i15 + 12 * c12_i11] = c12_M[c12_i15 + 12 *
        (emlrtDynamicBoundsCheckR2012b(c12_i19, 1, 12, &c12_e_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i14 = 0; c12_i14 < 2; c12_i14++) {
    for (c12_i18 = 0; c12_i18 < 12; c12_i18++) {
      c12_d3 = c12_ind[c12_i14] + 1.0;
      c12_i20 = (int32_T)emlrtIntegerCheckR2012b(c12_d3, &c12_f_emlrtDCI, c12_sp);
      c12_MQR[c12_i18 + 12 * c12_i14] = c12_M[c12_i18 + 12 *
        (emlrtDynamicBoundsCheckR2012b(c12_i20, 1, 12, &c12_f_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i17 = 0; c12_i17 < 2; c12_i17++) {
    c12_tt[c12_i17] = (c12_tt[c12_i17] - c12_ind[c12_i17]) + 1.0;
  }

  for (c12_jcol = 0; c12_jcol < 2; c12_jcol++) {
    c12_b_jcol = c12_jcol;
    c12_iacol = c12_b_jcol;
    c12_ibmat = c12_b_jcol * 12 - 1;
    for (c12_itilerow = 0; c12_itilerow < 12; c12_itilerow++) {
      c12_b_itilerow = c12_itilerow;
      c12_ibcol = c12_ibmat + c12_b_itilerow;
      c12_ddval[c12_ibcol + 1] = c12_tt[c12_iacol];
    }
  }

  for (c12_i21 = 0; c12_i21 < 24; c12_i21++) {
    c12_MQL[c12_i21] = (c12_MQL[c12_i21] - c12_QR[c12_i21]) + c12_QL[c12_i21];
  }

  for (c12_i22 = 0; c12_i22 < 24; c12_i22++) {
    c12_MQR[c12_i22] = (-c12_MQR[c12_i22] + c12_QR[c12_i22]) - c12_QL[c12_i22];
  }

  for (c12_i23 = 0; c12_i23 < 24; c12_i23++) {
    c12_ZI[c12_i23] = (1.0 - c12_ddval[c12_i23]) * c12_MQL[c12_i23] +
      c12_ddval[c12_i23] * c12_MQR[c12_i23];
  }

  for (c12_i24 = 0; c12_i24 < 24; c12_i24++) {
    c12_val[c12_i24] = ((1.0 - c12_ddval[c12_i24]) * c12_QL[c12_i24] +
                        c12_ddval[c12_i24] * c12_QR[c12_i24]) +
      c12_ddval[c12_i24] * (1.0 - c12_ddval[c12_i24]) * c12_ZI[c12_i24];
  }

  for (c12_i25 = 0; c12_i25 < 24; c12_i25++) {
    c12_dval[c12_i25] = 2.0 * c12_ddval[c12_i25];
  }

  for (c12_i26 = 0; c12_i26 < 24; c12_i26++) {
    c12_dval[c12_i26] = (((1.0 - c12_dval[c12_i26]) * c12_ZI[c12_i26] +
                          c12_ddval[c12_i26] * (1.0 - c12_ddval[c12_i26]) *
                          (c12_MQR[c12_i26] - c12_MQL[c12_i26])) +
                         c12_QR[c12_i26]) - c12_QL[c12_i26];
  }

  for (c12_i27 = 0; c12_i27 < 24; c12_i27++) {
    c12_ddval[c12_i27] *= 2.0;
  }

  for (c12_i28 = 0; c12_i28 < 24; c12_i28++) {
    c12_ddval[c12_i28] = 1.0 - c12_ddval[c12_i28];
  }

  for (c12_i29 = 0; c12_i29 < 24; c12_i29++) {
    c12_ddval[c12_i29] *= 2.0;
  }

  for (c12_i30 = 0; c12_i30 < 24; c12_i30++) {
    c12_ZI[c12_i30] *= 2.0;
  }

  for (c12_i31 = 0; c12_i31 < 24; c12_i31++) {
    c12_ddval[c12_i31] = c12_ddval[c12_i31] * (c12_MQR[c12_i31] -
      c12_MQL[c12_i31]) - c12_ZI[c12_i31];
  }

  for (c12_i32 = 0; c12_i32 < 24; c12_i32++) {
    c12_dval[c12_i32] *= 11.0;
  }

  for (c12_i33 = 0; c12_i33 < 24; c12_i33++) {
    c12_dval[c12_i33] /= 360.0;
  }

  for (c12_i34 = 0; c12_i34 < 24; c12_i34++) {
    c12_ddval[c12_i34] *= 121.0;
  }

  for (c12_i35 = 0; c12_i35 < 24; c12_i35++) {
    c12_ddval[c12_i35] /= 129600.0;
  }
}

static void c12_b_basisFunc_spline(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, real_T c12_xx[60], real_T c12_M[100],
  real_T c12_val[600], real_T c12_dval[600], real_T c12_ddval[600], real_T
  c12_dddval[600])
{
  int32_T c12_i;
  int32_T c12_i1;
  real_T c12_tt[60];
  int32_T c12_i2;
  int32_T c12_i3;
  real_T c12_ind[60];
  int32_T c12_i4;
  int32_T c12_b_i;
  int32_T c12_c_i;
  int32_T c12_trueCount;
  int32_T c12_d_i;
  real_T c12_d;
  int32_T c12_i5;
  int32_T c12_tmp_size[2];
  int32_T c12_partialTrueCount;
  int32_T c12_e_i;
  int32_T c12_loop_ub;
  int32_T c12_i6;
  int32_T c12_tmp_data[60];
  real_T c12_I[100];
  real_T c12_d1;
  int32_T c12_i7;
  int32_T c12_i8;
  int32_T c12_i9;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  real_T c12_QL[600];
  int32_T c12_i14;
  int32_T c12_i15;
  real_T c12_d2;
  int32_T c12_i16;
  int32_T c12_i17;
  int32_T c12_i18;
  int32_T c12_i19;
  real_T c12_QR[600];
  real_T c12_MQL[600];
  real_T c12_b_tt[60];
  real_T c12_d3;
  int32_T c12_i20;
  int32_T c12_i21;
  int32_T c12_i22;
  int32_T c12_i23;
  int32_T c12_i24;
  real_T c12_ZI[600];
  int32_T c12_i25;
  int32_T c12_i26;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_i29;
  int32_T c12_i30;
  int32_T c12_i31;
  int32_T c12_i32;
  int32_T c12_i33;
  int32_T c12_i34;
  int32_T c12_i35;
  int32_T c12_i36;
  int32_T c12_i37;
  int32_T c12_i38;
  int32_T c12_i39;
  covrtEmlFcnEval(chartInstance->c12_covrtInstance, 14U, 2, 0);
  for (c12_i = 0; c12_i < 60; c12_i++) {
    c12_tt[c12_i] = c12_xx[c12_i] - -30.0;
  }

  for (c12_i1 = 0; c12_i1 < 60; c12_i1++) {
    c12_tt[c12_i1] *= 9.0;
  }

  for (c12_i2 = 0; c12_i2 < 60; c12_i2++) {
    c12_tt[c12_i2] /= 60.0;
  }

  for (c12_i3 = 0; c12_i3 < 60; c12_i3++) {
    c12_ind[c12_i3] = c12_tt[c12_i3];
  }

  c12_b_floor(chartInstance, c12_ind);
  for (c12_i4 = 0; c12_i4 < 60; c12_i4++) {
    c12_ind[c12_i4]++;
  }

  c12_b_i = 0;
  while (c12_b_i <= 59) {
    c12_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_c_i = 0;
  while (c12_c_i <= 59) {
    if (c12_ind[c12_c_i] <= 0.0) {
      c12_d = (real_T)(c12_c_i + 1);
      c12_i5 = (int32_T)emlrtIntegerCheckR2012b(c12_d, &c12_emlrtDCI, c12_sp);
      c12_ind[emlrtDynamicBoundsCheckR2012b(c12_i5, 1, 60, &c12_g_emlrtBCI,
        c12_sp) - 1] = 1.0;
    }

    c12_c_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_trueCount = 0;
  c12_d_i = 0;
  while (c12_d_i <= 59) {
    if (c12_ind[c12_d_i] >= 10.0) {
      c12_trueCount++;
    }

    c12_d_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_tmp_size[0] = 1;
  c12_tmp_size[1] = c12_trueCount;
  c12_partialTrueCount = 0;
  c12_e_i = 0;
  while (c12_e_i <= 59) {
    if (c12_ind[c12_e_i] >= 10.0) {
      c12_tmp_data[c12_partialTrueCount] = c12_e_i + 1;
      c12_partialTrueCount++;
    }

    c12_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c12_loop_ub = c12_tmp_size[0] * c12_tmp_size[1] - 1;
  for (c12_i6 = 0; c12_i6 <= c12_loop_ub; c12_i6++) {
    c12_d1 = (real_T)c12_tmp_data[c12_i6];
    c12_i8 = (int32_T)emlrtIntegerCheckR2012b(c12_d1, &c12_b_emlrtDCI, c12_sp);
    c12_ind[emlrtDynamicBoundsCheckR2012b(c12_i8, 1, 60, &c12_h_emlrtBCI, c12_sp)
      - 1] = 9.0;
  }

  c12_eye(chartInstance, c12_I);
  for (c12_i7 = 0; c12_i7 < 60; c12_i7++) {
    for (c12_i10 = 0; c12_i10 < 10; c12_i10++) {
      c12_i13 = (int32_T)emlrtIntegerCheckR2012b(c12_ind[c12_i7],
        &c12_c_emlrtDCI, c12_sp);
      c12_QL[c12_i10 + 10 * c12_i7] = c12_I[c12_i10 + 10 *
        (emlrtDynamicBoundsCheckR2012b(c12_i13, 1, 10, &c12_i_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i9 = 0; c12_i9 < 60; c12_i9++) {
    for (c12_i12 = 0; c12_i12 < 10; c12_i12++) {
      c12_d2 = c12_ind[c12_i9] + 1.0;
      c12_i16 = (int32_T)emlrtIntegerCheckR2012b(c12_d2, &c12_d_emlrtDCI, c12_sp);
      c12_QR[c12_i12 + 10 * c12_i9] = c12_I[c12_i12 + 10 *
        (emlrtDynamicBoundsCheckR2012b(c12_i16, 1, 10, &c12_j_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i11 = 0; c12_i11 < 60; c12_i11++) {
    for (c12_i15 = 0; c12_i15 < 10; c12_i15++) {
      c12_i19 = (int32_T)emlrtIntegerCheckR2012b(c12_ind[c12_i11],
        &c12_e_emlrtDCI, c12_sp);
      c12_MQL[c12_i15 + 10 * c12_i11] = c12_M[c12_i15 + 10 *
        (emlrtDynamicBoundsCheckR2012b(c12_i19, 1, 10, &c12_k_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i14 = 0; c12_i14 < 60; c12_i14++) {
    for (c12_i18 = 0; c12_i18 < 10; c12_i18++) {
      c12_d3 = c12_ind[c12_i14] + 1.0;
      c12_i21 = (int32_T)emlrtIntegerCheckR2012b(c12_d3, &c12_f_emlrtDCI, c12_sp);
      c12_dddval[c12_i18 + 10 * c12_i14] = c12_M[c12_i18 + 10 *
        (emlrtDynamicBoundsCheckR2012b(c12_i21, 1, 10, &c12_l_emlrtBCI, c12_sp)
         - 1)];
    }
  }

  for (c12_i17 = 0; c12_i17 < 60; c12_i17++) {
    c12_b_tt[c12_i17] = (c12_tt[c12_i17] - c12_ind[c12_i17]) + 1.0;
  }

  c12_repmat(chartInstance, c12_b_tt, c12_ddval);
  for (c12_i20 = 0; c12_i20 < 600; c12_i20++) {
    c12_MQL[c12_i20] = (c12_MQL[c12_i20] - c12_QR[c12_i20]) + c12_QL[c12_i20];
  }

  for (c12_i22 = 0; c12_i22 < 600; c12_i22++) {
    c12_dddval[c12_i22] = (-c12_dddval[c12_i22] + c12_QR[c12_i22]) -
      c12_QL[c12_i22];
  }

  for (c12_i23 = 0; c12_i23 < 600; c12_i23++) {
    c12_ZI[c12_i23] = (1.0 - c12_ddval[c12_i23]) * c12_MQL[c12_i23] +
      c12_ddval[c12_i23] * c12_dddval[c12_i23];
  }

  for (c12_i24 = 0; c12_i24 < 600; c12_i24++) {
    c12_val[c12_i24] = ((1.0 - c12_ddval[c12_i24]) * c12_QL[c12_i24] +
                        c12_ddval[c12_i24] * c12_QR[c12_i24]) +
      c12_ddval[c12_i24] * (1.0 - c12_ddval[c12_i24]) * c12_ZI[c12_i24];
  }

  for (c12_i25 = 0; c12_i25 < 600; c12_i25++) {
    c12_dval[c12_i25] = 2.0 * c12_ddval[c12_i25];
  }

  for (c12_i26 = 0; c12_i26 < 600; c12_i26++) {
    c12_dval[c12_i26] = (((1.0 - c12_dval[c12_i26]) * c12_ZI[c12_i26] +
                          c12_ddval[c12_i26] * (1.0 - c12_ddval[c12_i26]) *
                          (c12_dddval[c12_i26] - c12_MQL[c12_i26])) +
                         c12_QR[c12_i26]) - c12_QL[c12_i26];
  }

  for (c12_i27 = 0; c12_i27 < 600; c12_i27++) {
    c12_ddval[c12_i27] *= 2.0;
  }

  for (c12_i28 = 0; c12_i28 < 600; c12_i28++) {
    c12_ddval[c12_i28] = 1.0 - c12_ddval[c12_i28];
  }

  for (c12_i29 = 0; c12_i29 < 600; c12_i29++) {
    c12_ddval[c12_i29] *= 2.0;
  }

  for (c12_i30 = 0; c12_i30 < 600; c12_i30++) {
    c12_ZI[c12_i30] *= 2.0;
  }

  for (c12_i31 = 0; c12_i31 < 600; c12_i31++) {
    c12_ddval[c12_i31] = c12_ddval[c12_i31] * (c12_dddval[c12_i31] -
      c12_MQL[c12_i31]) - c12_ZI[c12_i31];
  }

  for (c12_i32 = 0; c12_i32 < 600; c12_i32++) {
    c12_dddval[c12_i32] -= c12_MQL[c12_i32];
  }

  for (c12_i33 = 0; c12_i33 < 600; c12_i33++) {
    c12_dddval[c12_i33] *= -6.0;
  }

  for (c12_i34 = 0; c12_i34 < 600; c12_i34++) {
    c12_dval[c12_i34] *= 9.0;
  }

  for (c12_i35 = 0; c12_i35 < 600; c12_i35++) {
    c12_dval[c12_i35] /= 60.0;
  }

  for (c12_i36 = 0; c12_i36 < 600; c12_i36++) {
    c12_ddval[c12_i36] *= 81.0;
  }

  for (c12_i37 = 0; c12_i37 < 600; c12_i37++) {
    c12_ddval[c12_i37] /= 3600.0;
  }

  for (c12_i38 = 0; c12_i38 < 600; c12_i38++) {
    c12_dddval[c12_i38] *= 729.0;
  }

  for (c12_i39 = 0; c12_i39 < 600; c12_i39++) {
    c12_dddval[c12_i39] /= 216000.0;
  }
}

static const mxArray *c12_emlrt_marshallOut(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const char * c12_u)
{
  const mxArray *c12_y = NULL;
  (void)chartInstance;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", c12_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c12_u)), false);
  return c12_y;
}

static void c12_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const mxArray *c12_a__output_of_load_, const char_T *c12_identifier,
  c12_s8y97FVnhK2Wl5Axo3qD8BH *c12_y)
{
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_a__output_of_load_),
    &c12_thisId, c12_y);
  sf_mex_destroy(&c12_a__output_of_load_);
}

static void c12_b_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  c12_s8y97FVnhK2Wl5Axo3qD8BH *c12_y)
{
  emlrtMsgIdentifier c12_thisId;
  static const char * c12_fieldNames[2] = { "fnB", "fnT" };

  c12_thisId.fParent = c12_parentId;
  c12_thisId.bParentIsCell = false;
  sf_mex_check_struct(c12_parentId, c12_u, 2, c12_fieldNames, 0U, NULL);
  c12_thisId.fIdentifier = "fnB";
  c12_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c12_u, "fnB",
    "fnB", 0)), &c12_thisId, c12_y->fnB);
  c12_thisId.fIdentifier = "fnT";
  c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c12_u, "fnT",
    "fnT", 0)), &c12_thisId, c12_y->fnT);
  sf_mex_destroy(&c12_u);
}

static void c12_c_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  real_T c12_y[1440])
{
  real_T c12_b_dv[1440];
  int32_T c12_i;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), c12_b_dv, 1, 0, 0U, 1, 0U, 2,
                12, 120);
  for (c12_i = 0; c12_i < 1440; c12_i++) {
    c12_y[c12_i] = c12_b_dv[c12_i];
  }

  sf_mex_destroy(&c12_u);
}

static void c12_d_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  real_T c12_y[600])
{
  real_T c12_b_dv[600];
  int32_T c12_i;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), c12_b_dv, 1, 0, 0U, 1, 0U, 2,
                10, 60);
  for (c12_i = 0; c12_i < 600; c12_i++) {
    c12_y[c12_i] = c12_b_dv[c12_i];
  }

  sf_mex_destroy(&c12_u);
}

const mxArray *sf_c12_PID_Cdelta_U_get_eml_resolved_functions_info(void)
{
  const mxArray *c12_nameCaptureInfo = NULL;
  const char * c12_data[5] = {
    "789ced545f4f82501cbd96b5daaaf9d427e8a1274db3a6bd91a935fc53e683ad3544b80ac205f282c95b8f3d559fa0b73e4a1fa2f73e482120c2646cb15196bf"
    "8d5dce0e700ee7c201b1b36a0c00b005cc5112e6ba69610b8225e01e2f1fb3d6650fb66705c45df7c5ace3c9c28c2ca970a49a40a2119cdcc9ca889768496dea",
    "0a040388657108d931d3e545d8e411acc853e094ff02a834454d804119e7050e32c2a586c080c38e43711a4cf268fbbc6f3c200fef78f3f05e67e819d98dbea9"
    "673f7f3b40cfe60bb2a253729742320b4592a03a34e671c1f1d10ee963d5d787c9b0b2d611a1a3f71c522fe9abe7e6af8b372747a9748a8550a130ab53c374f2",
    "30353b8d240acec37ecf207fded59e75b0669ddd7fbcbdbe13d1e999f35ff4a2faaf6adc452b7bdc557a5a5ec53ac732c46d832c393ece0374827c001f1cd5f3"
    "7ffb7faa84f4b711e0cfe6b122f212acd2ea801f7f5a3fd59b0f21f5767cf5dcfcecfd984ec1d88548fbf2917c59f4e5bcf7e555bf9eade4c83d5cc403742066",
    "ca42beb25f5ef4e5bcf4a55f1e09cf3a562e691243999d31af7db9ebabe7e667ef873785245af4e5dfd08baa2f05812632acd2af37ef9a44ad96ebb5a0de28ce"
    "7f5f7e02e85dc951", "" };

  c12_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c12_data[0], 4232U, &c12_nameCaptureInfo);
  return c12_nameCaptureInfo;
}

static void c12_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  real_T c12_len[4];
  int32_T c12_i;
  c12_emxArray_int32_T *c12_aRows;
  real_T c12_b_i;
  real_T c12_dataLen;
  real_T c12_maxNegD[3];
  int32_T c12_c_i;
  real_T c12_minAdjustedDim[3];
  real_T c12_maxIndex;
  int32_T c12_loop_ub;
  boolean_T c12_b;
  int32_T c12_i1;
  c12_emxArray_int32_T *c12_aCols;
  const mxArray *c12_y = NULL;
  int32_T c12_i2;
  const mxArray *c12_b_y = NULL;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  c12_emxArray_real_T *c12_aDat;
  int32_T c12_i4;
  int32_T c12_c_loop_ub;
  int32_T c12_i5;
  c12_emxArray_real_T *c12_idx;
  c12_emxArray_int32_T *c12_b_r;
  c12_emxArray_real_T *c12_x;
  c12_emxArray_real_T *c12_b_idx;
  int32_T c12_k;
  real_T c12_b_k;
  real_T c12_a;
  real_T c12_d;
  real_T c12_b_a;
  real_T c12_b_b;
  real_T c12_b_x;
  boolean_T c12_c_b;
  boolean_T c12_guard1 = false;
  boolean_T c12_guard2 = false;
  int32_T c12_i6;
  real_T c12_c_x;
  boolean_T c12_d_b;
  int32_T c12_d_loop_ub;
  int32_T c12_i7;
  int32_T c12_i8;
  real_T c12_d_x;
  real_T c12_e_x;
  real_T c12_c_a;
  real_T c12_b_d;
  int32_T c12_i9;
  real_T c12_d_a;
  real_T c12_e_a;
  real_T c12_e_b;
  real_T c12_f_b;
  real_T c12_f_a;
  real_T c12_f_x;
  real_T c12_g_b;
  int32_T c12_e_loop_ub;
  boolean_T c12_h_b;
  real_T c12_anew;
  int32_T c12_i10;
  real_T c12_g_x;
  int32_T c12_i11;
  real_T c12_ndbl;
  real_T c12_h_x;
  real_T c12_apnd;
  boolean_T c12_i_b;
  real_T c12_cdiff;
  int32_T c12_f_loop_ub;
  real_T c12_g_a;
  int32_T c12_i12;
  real_T c12_j_b;
  int32_T c12_i13;
  real_T c12_i_x;
  real_T c12_j_x;
  int32_T c12_i_size[1];
  real_T c12_k_x;
  real_T c12_l_x;
  int32_T c12_g_loop_ub;
  real_T c12_m_x;
  int32_T c12_i14;
  real_T c12_absa;
  real_T c12_n_x;
  int32_T c12_i15;
  real_T c12_i_data[12];
  real_T c12_o_x;
  real_T c12_h_a;
  real_T c12_i_a;
  real_T c12_p_x;
  real_T c12_k_b;
  real_T c12_c_d;
  real_T c12_absb;
  real_T c12_j_a;
  real_T c12_l_b;
  int32_T c12_h_loop_ub;
  real_T c12_k_a;
  real_T c12_c;
  real_T c12_b_anew;
  int32_T c12_i16;
  real_T c12_m_b;
  real_T c12_q_x;
  real_T c12_thresh;
  real_T c12_b_ndbl;
  real_T c12_r_x;
  real_T c12_s_x;
  boolean_T c12_n_b;
  real_T c12_t_x;
  real_T c12_b_apnd;
  real_T c12_u_x;
  real_T c12_b_cdiff;
  int32_T c12_i17;
  real_T c12_c_y;
  real_T c12_l_a;
  real_T c12_o_b;
  real_T c12_v_x;
  real_T c12_w_x;
  boolean_T c12_p_b;
  real_T c12_bnew;
  real_T c12_x_x;
  real_T c12_y_x;
  int32_T c12_i_loop_ub;
  boolean_T c12_n_too_large;
  real_T c12_b_absa;
  int32_T c12_i18;
  int32_T c12_i19;
  real_T c12_ab_x;
  real_T c12_bb_x;
  int32_T c12_n;
  real_T c12_cb_x;
  real_T c12_db_x;
  int32_T c12_j_loop_ub;
  real_T c12_eb_x;
  int32_T c12_i20;
  real_T c12_b_absb;
  boolean_T c12_p;
  int32_T c12_i21;
  int32_T c12_i22;
  real_T c12_b_c;
  real_T c12_m_a;
  const mxArray *c12_d_y = NULL;
  real_T c12_q_b;
  int32_T c12_i23;
  real_T c12_b_thresh;
  real_T c12_n_a;
  const mxArray *c12_e_y = NULL;
  real_T c12_fb_x;
  real_T c12_r_b;
  int32_T c12_k_loop_ub;
  real_T c12_gb_x;
  real_T c12_c_anew;
  int32_T c12_i24;
  int32_T c12_l_loop_ub;
  real_T c12_hb_x;
  real_T c12_ib_x;
  int32_T c12_i25;
  real_T c12_f_y;
  real_T c12_c_ndbl;
  real_T c12_d_d;
  real_T c12_c_apnd;
  int32_T c12_m_loop_ub;
  real_T c12_b_bnew;
  real_T c12_c_cdiff;
  int32_T c12_i26;
  int32_T c12_nm1;
  real_T c12_o_a;
  int32_T c12_p_a;
  boolean_T c12_b_n_too_large;
  real_T c12_s_b;
  int32_T c12_n_loop_ub;
  int32_T c12_tmp_data[12];
  int32_T c12_nm1d2;
  real_T c12_jb_x;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_b_n;
  real_T c12_kb_x;
  real_T c12_lb_x;
  int32_T c12_i29;
  int32_T c12_t_b;
  real_T c12_c_absa;
  int32_T c12_u_b;
  boolean_T c12_b_p;
  real_T c12_mb_x;
  real_T c12_nb_x;
  boolean_T c12_overflow;
  const mxArray *c12_g_y = NULL;
  real_T c12_ob_x;
  int32_T c12_i30;
  real_T c12_c_absb;
  int32_T c12_o_loop_ub;
  const mxArray *c12_h_y = NULL;
  int32_T c12_i31;
  real_T c12_c_c;
  int32_T c12_c_k;
  real_T c12_d1;
  real_T c12_c_thresh;
  int32_T c12_d_k;
  real_T c12_pb_x;
  int32_T c12_i32;
  int32_T c12_v_b;
  int32_T c12_e_k;
  real_T c12_qb_x;
  int32_T c12_i_y;
  real_T c12_kd;
  real_T c12_rb_x;
  int32_T c12_b_nm1;
  real_T c12_j_y;
  int32_T c12_q_a;
  int32_T c12_p_loop_ub;
  int32_T c12_b_nm1d2;
  int32_T c12_i33;
  int32_T c12_i34;
  real_T c12_c_bnew;
  int32_T c12_q_loop_ub;
  static real_T c12_B[36] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  int32_T c12_w_b;
  boolean_T c12_c_n_too_large;
  int32_T c12_i35;
  int32_T c12_x_b;
  int32_T c12_c_n;
  int32_T c12_r_loop_ub;
  boolean_T c12_b_overflow;
  int32_T c12_i36;
  boolean_T c12_c_p;
  int32_T c12_f_k;
  const mxArray *c12_k_y = NULL;
  int32_T c12_i37;
  const mxArray *c12_l_y = NULL;
  int32_T c12_y_b;
  int32_T c12_g_k;
  int32_T c12_m_y;
  real_T c12_b_kd;
  int32_T c12_c_nm1;
  int32_T c12_r_a;
  int32_T c12_c_nm1d2;
  int32_T c12_i38;
  int32_T c12_ab_b;
  int32_T c12_bb_b;
  boolean_T c12_c_overflow;
  int32_T c12_h_k;
  int32_T c12_cb_b;
  int32_T c12_i_k;
  int32_T c12_n_y;
  real_T c12_c_kd;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_len[0] = 0.0;
  for (c12_i = 0; c12_i < 3; c12_i++) {
    c12_b_i = (real_T)c12_i + 1.0;
    c12_maxNegD[(int32_T)c12_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 +
      (real_T)((int32_T)c12_b_i - 1)));
    c12_minAdjustedDim[(int32_T)c12_b_i - 1] = muDoubleScalarMin(12.0, 12.0 -
      (-1.0 + (real_T)((int32_T)c12_b_i - 1)));
    c12_maxIndex = c12_minAdjustedDim[(int32_T)c12_b_i - 1];
    c12_maxIndex += -1.0 + (real_T)((int32_T)c12_b_i - 1);
    if (c12_maxIndex > 12.0) {
      c12_b = true;
    } else {
      c12_b = false;
    }

    if (c12_b) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1,
        36), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_b_y)));
    }

    c12_len[(int32_T)(c12_b_i + 1.0) - 1] = ((c12_len[(int32_T)c12_b_i - 1] +
      c12_minAdjustedDim[(int32_T)c12_b_i - 1]) - c12_maxNegD[(int32_T)c12_b_i -
      1]) + 1.0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aRows, 1, &c12_j_emlrtRTEI);
  c12_dataLen = c12_len[3];
  c12_c_i = c12_aRows->size[0];
  c12_aRows->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_vd_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aRows, c12_c_i,
    &c12_j_emlrtRTEI);
  c12_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_aRows->data[c12_i1] = 0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aCols, 1, &c12_k_emlrtRTEI);
  c12_i2 = c12_aCols->size[0];
  c12_aCols->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_ud_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aCols, c12_i2,
    &c12_k_emlrtRTEI);
  c12_b_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_aCols->data[c12_i3] = 0;
  }

  c12_emxInit_real_T(chartInstance, c12_sp, &c12_aDat, 1, &c12_x_emlrtRTEI);
  c12_i4 = c12_aDat->size[0];
  c12_aDat->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_yd_emlrtRSI;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_aDat, c12_i4,
    &c12_l_emlrtRTEI);
  c12_c_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i5 = 0; c12_i5 <= c12_c_loop_ub; c12_i5++) {
    c12_aDat->data[c12_i5] = 0.0;
  }

  c12_emxInit_real_T1(chartInstance, c12_sp, &c12_idx, 2, &c12_p_emlrtRTEI);
  c12_emxInit_int32_T1(chartInstance, c12_sp, &c12_b_r, 2, &c12_y_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_x, 1, &c12_v_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_b_idx, 1, &c12_n_emlrtRTEI);
  for (c12_k = 0; c12_k < 3; c12_k++) {
    c12_b_k = (real_T)c12_k + 1.0;
    c12_st.site = &c12_n_emlrtRSI;
    c12_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_b_a = c12_a;
    c12_b_b = c12_d;
    if (c12_b_b < c12_b_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_b_x = c12_b_a;
      c12_c_b = muDoubleScalarIsInf(c12_b_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_c_b) {
        c12_guard2 = true;
      } else {
        c12_c_x = c12_b_b;
        c12_d_b = muDoubleScalarIsInf(c12_c_x);
        if (c12_d_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_b_a == c12_b_b) {
          c12_i8 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i8, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_d_x = c12_b_a;
        c12_e_x = c12_d_x;
        c12_e_x = muDoubleScalarFloor(c12_e_x);
        if (c12_e_x == c12_b_a) {
          c12_i9 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i9, &c12_m_emlrtRTEI);
          c12_e_loop_ub = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a);
          for (c12_i10 = 0; c12_i10 <= c12_e_loop_ub; c12_i10++) {
            c12_idx->data[c12_i10] = c12_b_a + (real_T)c12_i10;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_e_a = c12_b_a;
          c12_f_b = c12_b_b;
          c12_f_a = c12_e_a;
          c12_g_b = c12_f_b;
          c12_anew = c12_f_a;
          c12_g_x = (c12_g_b - c12_f_a) + 0.5;
          c12_ndbl = c12_g_x;
          c12_ndbl = muDoubleScalarFloor(c12_ndbl);
          c12_apnd = c12_f_a + c12_ndbl;
          c12_cdiff = c12_apnd - c12_g_b;
          c12_g_a = c12_f_a;
          c12_j_b = c12_g_b;
          c12_i_x = c12_g_a;
          c12_k_x = c12_i_x;
          c12_m_x = c12_k_x;
          c12_absa = muDoubleScalarAbs(c12_m_x);
          c12_n_x = c12_j_b;
          c12_o_x = c12_n_x;
          c12_p_x = c12_o_x;
          c12_absb = muDoubleScalarAbs(c12_p_x);
          if (c12_absa > c12_absb) {
            c12_c = c12_absa;
          } else {
            c12_c = c12_absb;
          }

          c12_thresh = 4.4408920985006262E-16 * c12_c;
          c12_s_x = c12_cdiff;
          c12_t_x = c12_s_x;
          c12_u_x = c12_t_x;
          c12_c_y = muDoubleScalarAbs(c12_u_x);
          if (c12_c_y < c12_thresh) {
            c12_ndbl++;
            c12_bnew = c12_g_b;
          } else if (c12_cdiff > 0.0) {
            c12_bnew = c12_f_a + (c12_ndbl - 1.0);
          } else {
            c12_ndbl++;
            c12_bnew = c12_apnd;
          }

          c12_n_too_large = (c12_ndbl > 2.147483647E+9);
          if (c12_ndbl >= 0.0) {
            c12_n = (int32_T)muDoubleScalarFloor(c12_ndbl);
          } else {
            c12_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_p = !c12_n_too_large;
          if (!c12_p) {
            c12_d_y = NULL;
            sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_e_y = NULL;
            sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_e_y)));
          }

          c12_i23 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i23, &c12_r_emlrtRTEI);
          if (c12_n > 0) {
            c12_idx->data[0] = c12_anew;
            if (c12_n > 1) {
              c12_idx->data[c12_n - 1] = c12_bnew;
              c12_nm1 = c12_n - 1;
              c12_p_a = c12_nm1;
              c12_nm1d2 = c12_div_nzp_s32(chartInstance, c12_p_a, 2, 0, 1U, 0, 0);
              c12_i28 = c12_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_t_b = c12_i28 + 1;
              c12_u_b = c12_t_b;
              if (1 > c12_u_b) {
                c12_overflow = false;
              } else {
                c12_overflow = (c12_u_b > 2147483646);
              }

              if (c12_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_c_k = 1; c12_c_k - 1 <= c12_i28; c12_c_k++) {
                c12_e_k = c12_c_k;
                c12_kd = (real_T)c12_e_k;
                c12_idx->data[c12_e_k] = c12_anew + c12_kd;
                c12_idx->data[(c12_n - c12_e_k) - 1] = c12_bnew - c12_kd;
              }

              c12_v_b = c12_nm1d2;
              c12_i_y = c12_v_b << 1;
              if (c12_i_y == c12_nm1) {
                c12_idx->data[c12_nm1d2] = (c12_anew + c12_bnew) / 2.0;
              } else {
                c12_kd = (real_T)c12_nm1d2;
                c12_idx->data[c12_nm1d2] = c12_anew + c12_kd;
                c12_idx->data[c12_nm1d2 + 1] = c12_bnew - c12_kd;
              }
            }
          }
        }
      }
    }

    c12_i6 = c12_x->size[0];
    c12_x->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i6,
      &c12_n_emlrtRTEI);
    c12_d_loop_ub = c12_idx->size[1] - 1;
    for (c12_i7 = 0; c12_i7 <= c12_d_loop_ub; c12_i7++) {
      c12_x->data[c12_i7] = c12_idx->data[c12_i7];
    }

    c12_st.site = &c12_n_emlrtRSI;
    c12_c_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_b_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_d_a = c12_c_a;
    c12_e_b = c12_b_d;
    if (c12_e_b < c12_d_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_f_x = c12_d_a;
      c12_h_b = muDoubleScalarIsInf(c12_f_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_h_b) {
        c12_guard2 = true;
      } else {
        c12_h_x = c12_e_b;
        c12_i_b = muDoubleScalarIsInf(c12_h_x);
        if (c12_i_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_d_a == c12_e_b) {
          c12_i13 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i13, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_j_x = c12_d_a;
        c12_l_x = c12_j_x;
        c12_l_x = muDoubleScalarFloor(c12_l_x);
        if (c12_l_x == c12_d_a) {
          c12_i15 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i15, &c12_m_emlrtRTEI);
          c12_h_loop_ub = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a);
          for (c12_i16 = 0; c12_i16 <= c12_h_loop_ub; c12_i16++) {
            c12_idx->data[c12_i16] = c12_d_a + (real_T)c12_i16;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_h_a = c12_d_a;
          c12_k_b = c12_e_b;
          c12_j_a = c12_h_a;
          c12_l_b = c12_k_b;
          c12_b_anew = c12_j_a;
          c12_q_x = (c12_l_b - c12_j_a) + 0.5;
          c12_b_ndbl = c12_q_x;
          c12_b_ndbl = muDoubleScalarFloor(c12_b_ndbl);
          c12_b_apnd = c12_j_a + c12_b_ndbl;
          c12_b_cdiff = c12_b_apnd - c12_l_b;
          c12_l_a = c12_j_a;
          c12_o_b = c12_l_b;
          c12_w_x = c12_l_a;
          c12_x_x = c12_w_x;
          c12_y_x = c12_x_x;
          c12_b_absa = muDoubleScalarAbs(c12_y_x);
          c12_ab_x = c12_o_b;
          c12_cb_x = c12_ab_x;
          c12_eb_x = c12_cb_x;
          c12_b_absb = muDoubleScalarAbs(c12_eb_x);
          if (c12_b_absa > c12_b_absb) {
            c12_b_c = c12_b_absa;
          } else {
            c12_b_c = c12_b_absb;
          }

          c12_b_thresh = 4.4408920985006262E-16 * c12_b_c;
          c12_fb_x = c12_b_cdiff;
          c12_gb_x = c12_fb_x;
          c12_hb_x = c12_gb_x;
          c12_f_y = muDoubleScalarAbs(c12_hb_x);
          if (c12_f_y < c12_b_thresh) {
            c12_b_ndbl++;
            c12_b_bnew = c12_l_b;
          } else if (c12_b_cdiff > 0.0) {
            c12_b_bnew = c12_j_a + (c12_b_ndbl - 1.0);
          } else {
            c12_b_ndbl++;
            c12_b_bnew = c12_b_apnd;
          }

          c12_b_n_too_large = (c12_b_ndbl > 2.147483647E+9);
          if (c12_b_ndbl >= 0.0) {
            c12_b_n = (int32_T)muDoubleScalarFloor(c12_b_ndbl);
          } else {
            c12_b_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_b_p = !c12_b_n_too_large;
          if (!c12_b_p) {
            c12_g_y = NULL;
            sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_h_y = NULL;
            sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_g_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_h_y)));
          }

          c12_i30 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_b_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i30, &c12_r_emlrtRTEI);
          if (c12_b_n > 0) {
            c12_idx->data[0] = c12_b_anew;
            if (c12_b_n > 1) {
              c12_idx->data[c12_b_n - 1] = c12_b_bnew;
              c12_b_nm1 = c12_b_n - 1;
              c12_q_a = c12_b_nm1;
              c12_b_nm1d2 = c12_div_nzp_s32(chartInstance, c12_q_a, 2, 0, 1U, 0,
                0);
              c12_i34 = c12_b_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_w_b = c12_i34 + 1;
              c12_x_b = c12_w_b;
              if (1 > c12_x_b) {
                c12_b_overflow = false;
              } else {
                c12_b_overflow = (c12_x_b > 2147483646);
              }

              if (c12_b_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_f_k = 1; c12_f_k - 1 <= c12_i34; c12_f_k++) {
                c12_g_k = c12_f_k;
                c12_b_kd = (real_T)c12_g_k;
                c12_idx->data[c12_g_k] = c12_b_anew + c12_b_kd;
                c12_idx->data[(c12_b_n - c12_g_k) - 1] = c12_b_bnew - c12_b_kd;
              }

              c12_y_b = c12_b_nm1d2;
              c12_m_y = c12_y_b << 1;
              if (c12_m_y == c12_b_nm1) {
                c12_idx->data[c12_b_nm1d2] = (c12_b_anew + c12_b_bnew) / 2.0;
              } else {
                c12_b_kd = (real_T)c12_b_nm1d2;
                c12_idx->data[c12_b_nm1d2] = c12_b_anew + c12_b_kd;
                c12_idx->data[c12_b_nm1d2 + 1] = c12_b_bnew - c12_b_kd;
              }
            }
          }
        }
      }
    }

    c12_i11 = c12_b_idx->size[0];
    c12_b_idx->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_b_idx, c12_i11,
      &c12_n_emlrtRTEI);
    c12_f_loop_ub = c12_idx->size[1] - 1;
    for (c12_i12 = 0; c12_i12 <= c12_f_loop_ub; c12_i12++) {
      c12_b_idx->data[c12_i12] = c12_idx->data[c12_i12];
    }

    c12_i_size[0] = c12_x->size[0];
    c12_g_loop_ub = c12_x->size[0] - 1;
    for (c12_i14 = 0; c12_i14 <= c12_g_loop_ub; c12_i14++) {
      c12_i_data[c12_i14] = c12_b_idx->data[c12_i14];
    }

    c12_st.site = &c12_p_emlrtRSI;
    c12_i_a = c12_len[(int32_T)c12_b_k - 1] + 1.0;
    c12_c_d = c12_len[(int32_T)(c12_b_k + 1.0) - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_k_a = c12_i_a;
    c12_m_b = c12_c_d;
    if (c12_m_b < c12_k_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_r_x = c12_k_a;
      c12_n_b = muDoubleScalarIsInf(c12_r_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_n_b) {
        c12_guard2 = true;
      } else {
        c12_v_x = c12_m_b;
        c12_p_b = muDoubleScalarIsInf(c12_v_x);
        if (c12_p_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_k_a == c12_m_b) {
          c12_i18 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i18, &c12_p_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_bb_x = c12_k_a;
        c12_db_x = c12_bb_x;
        c12_db_x = muDoubleScalarFloor(c12_db_x);
        if (c12_db_x == c12_k_a) {
          c12_i21 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i21, &c12_p_emlrtRTEI);
          c12_k_loop_ub = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a);
          for (c12_i24 = 0; c12_i24 <= c12_k_loop_ub; c12_i24++) {
            c12_idx->data[c12_i24] = c12_k_a + (real_T)c12_i24;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_m_a = c12_k_a;
          c12_q_b = c12_m_b;
          c12_n_a = c12_m_a;
          c12_r_b = c12_q_b;
          c12_c_anew = c12_n_a;
          c12_ib_x = (c12_r_b - c12_n_a) + 0.5;
          c12_c_ndbl = c12_ib_x;
          c12_c_ndbl = muDoubleScalarFloor(c12_c_ndbl);
          c12_c_apnd = c12_n_a + c12_c_ndbl;
          c12_c_cdiff = c12_c_apnd - c12_r_b;
          c12_o_a = c12_n_a;
          c12_s_b = c12_r_b;
          c12_jb_x = c12_o_a;
          c12_kb_x = c12_jb_x;
          c12_lb_x = c12_kb_x;
          c12_c_absa = muDoubleScalarAbs(c12_lb_x);
          c12_mb_x = c12_s_b;
          c12_nb_x = c12_mb_x;
          c12_ob_x = c12_nb_x;
          c12_c_absb = muDoubleScalarAbs(c12_ob_x);
          if (c12_c_absa > c12_c_absb) {
            c12_c_c = c12_c_absa;
          } else {
            c12_c_c = c12_c_absb;
          }

          c12_c_thresh = 4.4408920985006262E-16 * c12_c_c;
          c12_pb_x = c12_c_cdiff;
          c12_qb_x = c12_pb_x;
          c12_rb_x = c12_qb_x;
          c12_j_y = muDoubleScalarAbs(c12_rb_x);
          if (c12_j_y < c12_c_thresh) {
            c12_c_ndbl++;
            c12_c_bnew = c12_r_b;
          } else if (c12_c_cdiff > 0.0) {
            c12_c_bnew = c12_n_a + (c12_c_ndbl - 1.0);
          } else {
            c12_c_ndbl++;
            c12_c_bnew = c12_c_apnd;
          }

          c12_c_n_too_large = (c12_c_ndbl > 2.147483647E+9);
          if (c12_c_ndbl >= 0.0) {
            c12_c_n = (int32_T)muDoubleScalarFloor(c12_c_ndbl);
          } else {
            c12_c_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_c_p = !c12_c_n_too_large;
          if (!c12_c_p) {
            c12_k_y = NULL;
            sf_mex_assign(&c12_k_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_l_y = NULL;
            sf_mex_assign(&c12_l_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_k_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_l_y)));
          }

          c12_i37 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_c_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i37, &c12_r_emlrtRTEI);
          if (c12_c_n > 0) {
            c12_idx->data[0] = c12_c_anew;
            if (c12_c_n > 1) {
              c12_idx->data[c12_c_n - 1] = c12_c_bnew;
              c12_c_nm1 = c12_c_n - 1;
              c12_r_a = c12_c_nm1;
              c12_c_nm1d2 = c12_div_nzp_s32(chartInstance, c12_r_a, 2, 0, 1U, 0,
                0);
              c12_i38 = c12_c_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_ab_b = c12_i38 + 1;
              c12_bb_b = c12_ab_b;
              if (1 > c12_bb_b) {
                c12_c_overflow = false;
              } else {
                c12_c_overflow = (c12_bb_b > 2147483646);
              }

              if (c12_c_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_h_k = 1; c12_h_k - 1 <= c12_i38; c12_h_k++) {
                c12_i_k = c12_h_k;
                c12_c_kd = (real_T)c12_i_k;
                c12_idx->data[c12_i_k] = c12_c_anew + c12_c_kd;
                c12_idx->data[(c12_c_n - c12_i_k) - 1] = c12_c_bnew - c12_c_kd;
              }

              c12_cb_b = c12_c_nm1d2;
              c12_n_y = c12_cb_b << 1;
              if (c12_n_y == c12_c_nm1) {
                c12_idx->data[c12_c_nm1d2] = (c12_c_anew + c12_c_bnew) / 2.0;
              } else {
                c12_c_kd = (real_T)c12_c_nm1d2;
                c12_idx->data[c12_c_nm1d2] = c12_c_anew + c12_c_kd;
                c12_idx->data[c12_c_nm1d2 + 1] = c12_c_bnew - c12_c_kd;
              }
            }
          }
        }
      }
    }

    c12_i17 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_be_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i17,
      &c12_q_emlrtRTEI);
    c12_i_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
      c12_b_r->data[c12_i19] = (int32_T)c12_idx->data[c12_i19];
    }

    c12_j_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i20 = 0; c12_i20 <= c12_j_loop_ub; c12_i20++) {
      c12_aRows->data[c12_b_r->data[c12_i20] - 1] = (int32_T)c12_i_data[c12_i20];
    }

    c12_i22 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_ae_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i22,
      &c12_s_emlrtRTEI);
    c12_l_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i25 = 0; c12_i25 <= c12_l_loop_ub; c12_i25++) {
      c12_b_r->data[c12_i25] = (int32_T)c12_idx->data[c12_i25];
    }

    c12_d_d = -1.0 + (real_T)((int32_T)c12_b_k - 1);
    c12_m_loop_ub = c12_i_size[0] - 1;
    for (c12_i26 = 0; c12_i26 <= c12_m_loop_ub; c12_i26++) {
      c12_tmp_data[c12_i26] = (int32_T)(c12_i_data[c12_i26] + c12_d_d);
    }

    c12_n_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i27 = 0; c12_i27 <= c12_n_loop_ub; c12_i27++) {
      c12_aCols->data[c12_b_r->data[c12_i27] - 1] = c12_tmp_data[c12_i27];
    }

    c12_i29 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i29,
      &c12_u_emlrtRTEI);
    c12_o_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i31 = 0; c12_i31 <= c12_o_loop_ub; c12_i31++) {
      c12_b_r->data[c12_i31] = (int32_T)c12_idx->data[c12_i31];
    }

    c12_d1 = -1.0 + (real_T)((int32_T)c12_b_k - 1);
    c12_d_k = (int32_T)c12_b_k - 1;
    c12_i32 = c12_x->size[0];
    c12_x->size[0] = c12_i_size[0];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i32,
      &c12_v_emlrtRTEI);
    c12_p_loop_ub = c12_i_size[0] - 1;
    for (c12_i33 = 0; c12_i33 <= c12_p_loop_ub; c12_i33++) {
      c12_x->data[c12_i33] = c12_B[((int32_T)(c12_i_data[c12_i33] + c12_d1) + 12
        * c12_d_k) - 1];
    }

    c12_q_loop_ub = c12_x->size[0] - 1;
    for (c12_i35 = 0; c12_i35 <= c12_q_loop_ub; c12_i35++) {
      c12_i_data[c12_i35] = c12_x->data[c12_i35];
    }

    c12_r_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i36 = 0; c12_i36 <= c12_r_loop_ub; c12_i36++) {
      c12_aDat->data[c12_b_r->data[c12_i36] - 1] = c12_i_data[c12_i36];
    }
  }

  c12_emxFree_real_T(chartInstance, &c12_b_idx);
  c12_emxFree_real_T(chartInstance, &c12_x);
  c12_emxFree_int32_T(chartInstance, &c12_b_r);
  c12_emxFree_real_T(chartInstance, &c12_idx);
  c12_st.site = &c12_o_emlrtRSI;
  c12_sparse(chartInstance, &c12_st, c12_aRows, c12_aCols, c12_aDat, c12_res1);
  c12_emxFree_real_T(chartInstance, &c12_aDat);
  c12_emxFree_int32_T(chartInstance, &c12_aCols);
  c12_emxFree_int32_T(chartInstance, &c12_aRows);
}

static void c12_check_forloop_overflow_error(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp)
{
  const mxArray *c12_y = NULL;
  static char_T c12_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c12_b_y = NULL;
  const mxArray *c12_c_y = NULL;
  static char_T c12_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
    "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 2U, 14, c12_b_y,
    14, c12_c_y)));
}

static void c12_sparse(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_varargin_1, c12_emxArray_int32_T
  *c12_varargin_2, c12_emxArray_real_T *c12_varargin_3,
  c12_coder_internal_sparse *c12_y)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  emlrtStack c12_f_st;
  emlrtStack c12_g_st;
  emlrtStack c12_h_st;
  emlrtStack c12_i_st;
  int32_T c12_nc;
  int32_T c12_nr;
  int32_T c12_ny;
  boolean_T c12_b;
  const mxArray *c12_b_y = NULL;
  boolean_T c12_b1;
  const mxArray *c12_c_y = NULL;
  const mxArray *c12_d_y = NULL;
  c12_emxArray_int32_T *c12_b_varargin_1;
  int32_T c12_i;
  const mxArray *c12_e_y = NULL;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxArray_int32_T *c12_ridxInt;
  c12_emxArray_int32_T *c12_b_varargin_2;
  int32_T c12_i2;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  c12_emxArray_int32_T *c12_cidxInt;
  c12_emxArray_int32_T *c12_sortedIndices;
  int32_T c12_i4;
  int32_T c12_b_b;
  int32_T c12_c_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  int32_T c12_b_k;
  int32_T c12_istop;
  int32_T c12_b_istop;
  int32_T c12_maxr;
  int32_T c12_d_b;
  int32_T c12_e_b;
  boolean_T c12_b_overflow;
  int32_T c12_c_k;
  const mxArray *c12_f_y = NULL;
  int32_T c12_maxc;
  const mxArray *c12_g_y = NULL;
  const mxArray *c12_h_y = NULL;
  int32_T c12_a;
  int32_T c12_u;
  const mxArray *c12_i_y = NULL;
  const mxArray *c12_j_y = NULL;
  int32_T c12_numalloc;
  const mxArray *c12_k_y = NULL;
  int32_T c12_b_u;
  int32_T c12_i5;
  const mxArray *c12_l_y = NULL;
  real_T c12_d;
  int32_T c12_c_u;
  const mxArray *c12_m_y = NULL;
  int32_T c12_d_u;
  const mxArray *c12_n_y = NULL;
  real_T c12_d1;
  int32_T c12_e_u;
  int32_T c12_c_loop_ub;
  const mxArray *c12_o_y = NULL;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_i8;
  real_T c12_d2;
  real_T c12_d3;
  int32_T c12_d_loop_ub;
  int32_T c12_i9;
  int32_T c12_cptr;
  int32_T c12_c;
  int32_T c12_b_c;
  int32_T c12_f_b;
  int32_T c12_g_b;
  boolean_T c12_c_overflow;
  int32_T c12_d_k;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_f_st.prev = &c12_e_st;
  c12_f_st.tls = c12_e_st.tls;
  c12_g_st.prev = &c12_f_st;
  c12_g_st.tls = c12_f_st.tls;
  c12_h_st.prev = &c12_g_st;
  c12_h_st.tls = c12_g_st.tls;
  c12_i_st.prev = &c12_h_st;
  c12_i_st.tls = c12_h_st.tls;
  c12_st.site = &c12_v_emlrtRSI;
  c12_nc = c12_varargin_2->size[0];
  c12_nr = c12_varargin_1->size[0];
  c12_ny = c12_varargin_3->size[0];
  if ((c12_nr == c12_nc) && (c12_ny == c12_nc)) {
    c12_b = true;
  } else {
    c12_b = false;
  }

  if (!c12_b) {
    c12_b_y = NULL;
    sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c12_c_y = NULL;
    sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_b_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 1U, 14,
      c12_c_y)));
  }

  if ((c12_ny == c12_nc) || (c12_ny == c12_nr)) {
    c12_b1 = true;
  } else {
    c12_b1 = false;
  }

  if (!c12_b1) {
    c12_d_y = NULL;
    sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c12_e_y = NULL;
    sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 1U, 14,
      c12_e_y)));
  }

  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_b_varargin_1, 1,
                      &c12_ab_emlrtRTEI);
  c12_i = c12_b_varargin_1->size[0];
  c12_b_varargin_1->size[0] = c12_varargin_1->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_b_varargin_1, c12_i,
    &c12_ab_emlrtRTEI);
  c12_loop_ub = c12_varargin_1->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_varargin_1->data[c12_i1] = c12_varargin_1->data[c12_i1];
  }

  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_ridxInt, 1, &c12_eb_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_b_varargin_2, 1,
                      &c12_bb_emlrtRTEI);
  c12_b_st.site = &c12_db_emlrtRSI;
  c12_assertValidIndexArg(chartInstance, &c12_b_st, c12_b_varargin_1,
    c12_ridxInt);
  c12_i2 = c12_b_varargin_2->size[0];
  c12_b_varargin_2->size[0] = c12_varargin_2->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_b_varargin_2, c12_i2,
    &c12_bb_emlrtRTEI);
  c12_b_loop_ub = c12_varargin_2->size[0] - 1;
  c12_emxFree_int32_T(chartInstance, &c12_b_varargin_1);
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_b_varargin_2->data[c12_i3] = c12_varargin_2->data[c12_i3];
  }

  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_cidxInt, 1, &c12_fb_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_sortedIndices, 1,
                      &c12_gb_emlrtRTEI);
  c12_b_st.site = &c12_cb_emlrtRSI;
  c12_assertValidIndexArg(chartInstance, &c12_b_st, c12_b_varargin_2,
    c12_cidxInt);
  c12_i4 = c12_sortedIndices->size[0];
  c12_sortedIndices->size[0] = c12_nc;
  c12_b_st.site = &c12_v_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_b_st, c12_sortedIndices,
    c12_i4, &c12_cb_emlrtRTEI);
  c12_b_st.site = &c12_bb_emlrtRSI;
  c12_b_b = c12_nc;
  c12_c_b = c12_b_b;
  c12_emxFree_int32_T(chartInstance, &c12_b_varargin_2);
  if (1 > c12_c_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_c_b > 2147483646);
  }

  if (c12_overflow) {
    c12_c_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_c_st);
  }

  for (c12_k = 1; c12_k - 1 < c12_nc; c12_k++) {
    c12_b_k = c12_k;
    c12_sortedIndices->data[c12_b_k - 1] = c12_b_k;
  }

  c12_b_st.site = &c12_ab_emlrtRSI;
  c12_b_locSortrows(chartInstance, &c12_b_st, c12_sortedIndices, c12_cidxInt,
                    c12_ridxInt);
  c12_b_st.site = &c12_y_emlrtRSI;
  c12_c_st.site = &c12_tb_emlrtRSI;
  c12_d_st.site = &c12_ub_emlrtRSI;
  c12_e_st.site = &c12_vb_emlrtRSI;
  c12_f_st.site = &c12_wb_emlrtRSI;
  c12_istop = c12_ridxInt->size[0];
  c12_g_st.site = &c12_xb_emlrtRSI;
  c12_b_istop = c12_istop;
  c12_maxr = c12_ridxInt->data[0];
  c12_h_st.site = &c12_yb_emlrtRSI;
  c12_d_b = c12_b_istop;
  c12_e_b = c12_d_b;
  c12_b_overflow = (c12_e_b > 2147483646);
  if (c12_b_overflow) {
    c12_i_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_i_st);
  }

  for (c12_c_k = 1; c12_c_k < c12_b_istop; c12_c_k++) {
    if (c12_maxr < c12_ridxInt->data[c12_c_k]) {
      c12_maxr = c12_ridxInt->data[c12_c_k];
    }
  }

  if (!(c12_maxr <= 12)) {
    c12_f_y = NULL;
    sf_mex_assign(&c12_f_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_g_y = NULL;
    sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_u = 13;
    c12_j_y = NULL;
    sf_mex_assign(&c12_j_y, sf_mex_create("y", &c12_u, 6, 0U, 0U, 0U, 0), false);
    c12_b_u = 1;
    c12_l_y = NULL;
    sf_mex_assign(&c12_l_y, sf_mex_create("y", &c12_b_u, 6, 0U, 0U, 0U, 0),
                  false);
    c12_d_u = 12;
    c12_n_y = NULL;
    sf_mex_assign(&c12_n_y, sf_mex_create("y", &c12_d_u, 6, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_f_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 4U, 14,
      c12_g_y, 14, c12_j_y, 14, c12_l_y, 14, c12_n_y)));
  }

  c12_maxc = c12_cidxInt->data[c12_cidxInt->size[0] - 1];
  if (!(c12_maxc <= 12)) {
    c12_h_y = NULL;
    sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_i_y = NULL;
    sf_mex_assign(&c12_i_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_k_y = NULL;
    sf_mex_assign(&c12_k_y, sf_mex_create("y", &c12_maxc, 6, 0U, 0U, 0U, 0),
                  false);
    c12_c_u = 1;
    c12_m_y = NULL;
    sf_mex_assign(&c12_m_y, sf_mex_create("y", &c12_c_u, 6, 0U, 0U, 0U, 0),
                  false);
    c12_e_u = 12;
    c12_o_y = NULL;
    sf_mex_assign(&c12_o_y, sf_mex_create("y", &c12_e_u, 6, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_h_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 4U, 14,
      c12_i_y, 14, c12_k_y, 14, c12_m_y, 14, c12_o_y)));
  }

  c12_a = c12_nc;
  if (c12_a >= 1) {
    c12_numalloc = c12_a;
  } else {
    c12_numalloc = 1;
  }

  c12_i5 = c12_y->d->size[0];
  c12_d = (real_T)c12_numalloc;
  c12_y->d->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c12_d,
    &c12_g_emlrtDCI, &c12_st);
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_y->d, c12_i5,
    &c12_db_emlrtRTEI);
  c12_d1 = (real_T)c12_numalloc;
  c12_c_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c12_d1, &c12_g_emlrtDCI,
    &c12_st) - 1;
  for (c12_i6 = 0; c12_i6 <= c12_c_loop_ub; c12_i6++) {
    c12_y->d->data[c12_i6] = 0.0;
  }

  c12_y->maxnz = c12_numalloc;
  c12_i7 = c12_y->colidx->size[0];
  c12_y->colidx->size[0] = 13;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_y->colidx, c12_i7,
    &c12_cb_emlrtRTEI);
  c12_y->colidx->data[0] = 1;
  c12_i8 = c12_y->rowidx->size[0];
  c12_d2 = (real_T)c12_numalloc;
  c12_y->rowidx->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c12_d2,
    &c12_g_emlrtDCI, &c12_st);
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_y->rowidx, c12_i8,
    &c12_db_emlrtRTEI);
  c12_d3 = (real_T)c12_numalloc;
  c12_d_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c12_d3, &c12_g_emlrtDCI,
    &c12_st) - 1;
  for (c12_i9 = 0; c12_i9 <= c12_d_loop_ub; c12_i9++) {
    c12_y->rowidx->data[c12_i9] = 0;
  }

  c12_cptr = 0;
  for (c12_c = 0; c12_c < 12; c12_c++) {
    c12_b_c = c12_c + 1;
    while ((c12_cptr + 1 <= c12_nc) && (c12_cidxInt->data[c12_cptr] == c12_b_c))
    {
      c12_y->rowidx->data[c12_cptr] = c12_ridxInt->data[c12_cptr];
      c12_cptr++;
    }

    c12_y->colidx->data[c12_b_c] = c12_cptr + 1;
  }

  c12_emxFree_int32_T(chartInstance, &c12_cidxInt);
  c12_emxFree_int32_T(chartInstance, &c12_ridxInt);
  c12_b_st.site = &c12_x_emlrtRSI;
  c12_f_b = c12_nc;
  c12_g_b = c12_f_b;
  if (1 > c12_g_b) {
    c12_c_overflow = false;
  } else {
    c12_c_overflow = (c12_g_b > 2147483646);
  }

  if (c12_c_overflow) {
    c12_c_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_c_st);
  }

  for (c12_d_k = 1; c12_d_k - 1 < c12_nc; c12_d_k++) {
    c12_b_k = c12_d_k - 1;
    c12_y->d->data[c12_b_k] = c12_varargin_3->data[c12_sortedIndices->
      data[c12_b_k] - 1];
  }

  c12_emxFree_int32_T(chartInstance, &c12_sortedIndices);
  c12_b_st.site = &c12_w_emlrtRSI;
  c12_b_sparse_fillIn(chartInstance, &c12_b_st, c12_y);
}

static void c12_assertValidIndexArg(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_s,
  c12_emxArray_int32_T *c12_sint)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  int32_T c12_ns;
  int32_T c12_i;
  int32_T c12_b;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  int32_T c12_b_k;
  int32_T c12_sk;
  int32_T c12_x;
  int32_T c12_b_x;
  const mxArray *c12_y = NULL;
  static char_T c12_b_cv[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'p',
    'a', 'r', 's', 'f', 'c', 'n', ':', 'n', 'o', 'n', 'I', 'n', 't', 'e', 'g',
    'e', 'r', 'I', 'n', 'd', 'e', 'x' };

  const mxArray *c12_b_y = NULL;
  const mxArray *c12_c_y = NULL;
  static char_T c12_b_cv1[27] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'p',
    'a', 'r', 's', 'f', 'c', 'n', ':', 'n', 'o', 'n', 'P', 'o', 's', 'I', 'n',
    'd', 'e', 'x' };

  const mxArray *c12_d_y = NULL;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_ns = c12_s->size[0];
  c12_i = c12_sint->size[0];
  c12_sint->size[0] = c12_ns;
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_sint, c12_i,
    &c12_hb_emlrtRTEI);
  c12_st.site = &c12_eb_emlrtRSI;
  c12_b = c12_ns;
  c12_b_b = c12_b;
  if (1 > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_k = 1; c12_k - 1 < c12_ns; c12_k++) {
    c12_b_k = c12_k - 1;
    c12_sk = c12_s->data[c12_b_k];
    c12_x = c12_sk;
    c12_b_x = c12_x;
    if (c12_b_x != c12_sk) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1,
        31), false);
      c12_c_y = NULL;
      sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1,
        31), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_c_y)));
    }

    if (!(0 < c12_sk)) {
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        27), false);
      c12_d_y = NULL;
      sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        27), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_b_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_d_y)));
    }

    c12_sint->data[c12_b_k] = c12_sk;
  }
}

static void c12_locSortrows(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_a, c12_emxArray_int32_T *c12_b, c12_emxArray_int32_T *c12_b_idx,
  c12_emxArray_int32_T *c12_b_a, c12_emxArray_int32_T *c12_b_b)
{
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_i2;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  int32_T c12_i4;
  int32_T c12_c_loop_ub;
  int32_T c12_i5;
  c12_i = c12_b_idx->size[0];
  c12_b_idx->size[0] = c12_idx->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_idx, c12_i,
    &c12_ib_emlrtRTEI);
  c12_loop_ub = c12_idx->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_idx->data[c12_i1] = c12_idx->data[c12_i1];
  }

  c12_i2 = c12_b_a->size[0];
  c12_b_a->size[0] = c12_a->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_a, c12_i2,
    &c12_ib_emlrtRTEI);
  c12_b_loop_ub = c12_a->size[0] - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_b_a->data[c12_i3] = c12_a->data[c12_i3];
  }

  c12_i4 = c12_b_b->size[0];
  c12_b_b->size[0] = c12_b->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_b, c12_i4,
    &c12_ib_emlrtRTEI);
  c12_c_loop_ub = c12_b->size[0] - 1;
  for (c12_i5 = 0; c12_i5 <= c12_c_loop_ub; c12_i5++) {
    c12_b_b->data[c12_i5] = c12_b->data[c12_i5];
  }

  c12_b_locSortrows(chartInstance, c12_sp, c12_b_idx, c12_b_a, c12_b_b);
}

static void c12_insertionsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart,
  int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp,
  c12_emxArray_int32_T *c12_b_x)
{
  c12_coder_internal_anonymous_function c12_b_cmp;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_jb_emlrtRTEI);
  c12_i = c12_b_x->size[0];
  c12_b_x->size[0] = c12_x->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_x, c12_i,
    &c12_jb_emlrtRTEI);
  c12_loop_ub = c12_x->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_x->data[c12_i1] = c12_x->data[c12_i1];
  }

  c12_emxCopyStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_cmp, &c12_jb_emlrtRTEI);
  c12_b_insertionsort(chartInstance, c12_sp, c12_b_x, c12_xstart, c12_xend,
                      c12_b_cmp);
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_b_cmp);
}

static void c12_introsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xend,
  c12_coder_internal_anonymous_function c12_cmp, c12_emxArray_int32_T *c12_b_x)
{
  c12_coder_internal_anonymous_function c12_b_cmp;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_kb_emlrtRTEI);
  c12_i = c12_b_x->size[0];
  c12_b_x->size[0] = c12_x->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_x, c12_i,
    &c12_kb_emlrtRTEI);
  c12_loop_ub = c12_x->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_x->data[c12_i1] = c12_x->data[c12_i1];
  }

  c12_emxCopyStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_cmp, &c12_kb_emlrtRTEI);
  c12_b_introsort(chartInstance, c12_sp, c12_b_x, c12_xend, c12_b_cmp);
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_b_cmp);
}

static void c12_heapsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart, int32_T
  c12_xend, c12_coder_internal_anonymous_function c12_cmp, c12_emxArray_int32_T *
  c12_b_x)
{
  c12_coder_internal_anonymous_function c12_b_cmp;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_lb_emlrtRTEI);
  c12_i = c12_b_x->size[0];
  c12_b_x->size[0] = c12_x->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_x, c12_i,
    &c12_lb_emlrtRTEI);
  c12_loop_ub = c12_x->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_x->data[c12_i1] = c12_x->data[c12_i1];
  }

  c12_emxCopyStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_cmp, &c12_lb_emlrtRTEI);
  c12_b_heapsort(chartInstance, c12_sp, c12_b_x, c12_xstart, c12_xend, c12_b_cmp);
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_b_cmp);
}

static void c12_heapify(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_idx, int32_T
  c12_xstart, int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp,
  c12_emxArray_int32_T *c12_b_x)
{
  c12_coder_internal_anonymous_function c12_b_cmp;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_mb_emlrtRTEI);
  c12_i = c12_b_x->size[0];
  c12_b_x->size[0] = c12_x->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_x, c12_i,
    &c12_mb_emlrtRTEI);
  c12_loop_ub = c12_x->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_x->data[c12_i1] = c12_x->data[c12_i1];
  }

  c12_emxCopyStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_cmp, &c12_mb_emlrtRTEI);
  c12_b_heapify(chartInstance, c12_sp, c12_b_x, c12_idx, c12_xstart, c12_xend,
                c12_b_cmp);
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_b_cmp);
}

static void c12_permuteVector(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_y, c12_emxArray_int32_T *c12_b_y)
{
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxArray_int32_T *c12_b_idx;
  int32_T c12_i2;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  c12_i = c12_b_y->size[0];
  c12_b_y->size[0] = c12_y->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_y, c12_i,
    &c12_nb_emlrtRTEI);
  c12_loop_ub = c12_y->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_y->data[c12_i1] = c12_y->data[c12_i1];
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_b_idx, 1, &c12_nb_emlrtRTEI);
  c12_i2 = c12_b_idx->size[0];
  c12_b_idx->size[0] = c12_idx->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_idx, c12_i2,
    &c12_nb_emlrtRTEI);
  c12_b_loop_ub = c12_idx->size[0] - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_b_idx->data[c12_i3] = c12_idx->data[c12_i3];
  }

  c12_b_permuteVector(chartInstance, c12_sp, c12_b_idx, c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_b_idx);
}

static void c12_sparse_fillIn(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this)
{
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_ob_emlrtRTEI);
  c12_b_sparse_fillIn(chartInstance, c12_sp, c12_b_this);
}

static void c12_b_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  real_T c12_len[3];
  int32_T c12_i;
  c12_emxArray_int32_T *c12_aRows;
  real_T c12_b_i;
  real_T c12_dataLen;
  real_T c12_maxNegD[2];
  int32_T c12_c_i;
  real_T c12_minAdjustedDim[2];
  real_T c12_maxIndex;
  int32_T c12_loop_ub;
  boolean_T c12_b;
  int32_T c12_i1;
  c12_emxArray_int32_T *c12_aCols;
  const mxArray *c12_y = NULL;
  int32_T c12_i2;
  const mxArray *c12_b_y = NULL;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  c12_emxArray_real_T *c12_aDat;
  int32_T c12_i4;
  int32_T c12_c_loop_ub;
  int32_T c12_i5;
  c12_emxArray_real_T *c12_idx;
  c12_emxArray_int32_T *c12_b_r;
  c12_emxArray_real_T *c12_x;
  c12_emxArray_real_T *c12_b_idx;
  int32_T c12_k;
  real_T c12_b_k;
  real_T c12_a;
  real_T c12_d;
  real_T c12_b_a;
  real_T c12_b_b;
  real_T c12_b_x;
  boolean_T c12_c_b;
  boolean_T c12_guard1 = false;
  boolean_T c12_guard2 = false;
  int32_T c12_i6;
  real_T c12_c_x;
  boolean_T c12_d_b;
  int32_T c12_d_loop_ub;
  int32_T c12_i7;
  int32_T c12_i8;
  real_T c12_d_x;
  real_T c12_e_x;
  real_T c12_c_a;
  real_T c12_b_d;
  int32_T c12_i9;
  real_T c12_d_a;
  real_T c12_e_a;
  real_T c12_e_b;
  real_T c12_f_b;
  real_T c12_f_a;
  real_T c12_f_x;
  real_T c12_g_b;
  int32_T c12_e_loop_ub;
  boolean_T c12_h_b;
  real_T c12_anew;
  int32_T c12_i10;
  real_T c12_g_x;
  int32_T c12_i11;
  real_T c12_ndbl;
  real_T c12_h_x;
  real_T c12_apnd;
  boolean_T c12_i_b;
  real_T c12_cdiff;
  int32_T c12_f_loop_ub;
  real_T c12_g_a;
  int32_T c12_i12;
  real_T c12_j_b;
  int32_T c12_i13;
  real_T c12_i_x;
  real_T c12_j_x;
  int32_T c12_i_size[1];
  real_T c12_k_x;
  real_T c12_l_x;
  int32_T c12_g_loop_ub;
  real_T c12_m_x;
  int32_T c12_i14;
  real_T c12_absa;
  real_T c12_n_x;
  int32_T c12_i15;
  real_T c12_i_data[12];
  real_T c12_o_x;
  real_T c12_h_a;
  real_T c12_i_a;
  real_T c12_p_x;
  real_T c12_k_b;
  real_T c12_c_d;
  real_T c12_absb;
  real_T c12_j_a;
  real_T c12_l_b;
  int32_T c12_h_loop_ub;
  real_T c12_k_a;
  real_T c12_c;
  real_T c12_b_anew;
  int32_T c12_i16;
  real_T c12_m_b;
  real_T c12_q_x;
  real_T c12_thresh;
  real_T c12_b_ndbl;
  real_T c12_r_x;
  real_T c12_s_x;
  boolean_T c12_n_b;
  real_T c12_t_x;
  real_T c12_b_apnd;
  real_T c12_u_x;
  real_T c12_b_cdiff;
  int32_T c12_i17;
  real_T c12_c_y;
  real_T c12_l_a;
  real_T c12_o_b;
  real_T c12_v_x;
  real_T c12_w_x;
  boolean_T c12_p_b;
  real_T c12_bnew;
  real_T c12_x_x;
  real_T c12_y_x;
  int32_T c12_i_loop_ub;
  boolean_T c12_n_too_large;
  real_T c12_b_absa;
  int32_T c12_i18;
  int32_T c12_i19;
  real_T c12_ab_x;
  real_T c12_bb_x;
  int32_T c12_n;
  real_T c12_cb_x;
  real_T c12_db_x;
  int32_T c12_j_loop_ub;
  real_T c12_eb_x;
  int32_T c12_i20;
  real_T c12_b_absb;
  boolean_T c12_p;
  int32_T c12_i21;
  int32_T c12_i22;
  real_T c12_b_c;
  real_T c12_m_a;
  const mxArray *c12_d_y = NULL;
  real_T c12_q_b;
  int32_T c12_i23;
  real_T c12_b_thresh;
  real_T c12_n_a;
  const mxArray *c12_e_y = NULL;
  real_T c12_fb_x;
  real_T c12_r_b;
  int32_T c12_k_loop_ub;
  real_T c12_gb_x;
  real_T c12_c_anew;
  int32_T c12_i24;
  int32_T c12_l_loop_ub;
  real_T c12_hb_x;
  real_T c12_ib_x;
  int32_T c12_i25;
  real_T c12_f_y;
  real_T c12_c_ndbl;
  real_T c12_d_d;
  real_T c12_c_apnd;
  int32_T c12_m_loop_ub;
  real_T c12_b_bnew;
  real_T c12_c_cdiff;
  int32_T c12_i26;
  int32_T c12_nm1;
  real_T c12_o_a;
  int32_T c12_p_a;
  boolean_T c12_b_n_too_large;
  real_T c12_s_b;
  int32_T c12_n_loop_ub;
  int32_T c12_tmp_data[12];
  int32_T c12_nm1d2;
  real_T c12_jb_x;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_b_n;
  real_T c12_kb_x;
  real_T c12_lb_x;
  int32_T c12_i29;
  int32_T c12_t_b;
  real_T c12_c_absa;
  int32_T c12_u_b;
  boolean_T c12_b_p;
  real_T c12_mb_x;
  real_T c12_nb_x;
  boolean_T c12_overflow;
  const mxArray *c12_g_y = NULL;
  real_T c12_ob_x;
  int32_T c12_i30;
  real_T c12_c_absb;
  int32_T c12_o_loop_ub;
  const mxArray *c12_h_y = NULL;
  int32_T c12_i31;
  real_T c12_c_c;
  int32_T c12_c_k;
  real_T c12_d1;
  real_T c12_c_thresh;
  int32_T c12_d_k;
  real_T c12_pb_x;
  int32_T c12_i32;
  int32_T c12_v_b;
  int32_T c12_e_k;
  real_T c12_qb_x;
  int32_T c12_i_y;
  real_T c12_kd;
  real_T c12_rb_x;
  int32_T c12_b_nm1;
  real_T c12_j_y;
  int32_T c12_q_a;
  int32_T c12_p_loop_ub;
  int32_T c12_b_nm1d2;
  int32_T c12_i33;
  int32_T c12_i34;
  real_T c12_c_bnew;
  int32_T c12_q_loop_ub;
  static real_T c12_B[24] = { -3.0, -3.0, -3.0, -3.0, -3.0, -3.0, -3.0, -3.0,
    -3.0, -3.0, -3.0, -3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0,
    3.0, 3.0 };

  int32_T c12_w_b;
  boolean_T c12_c_n_too_large;
  int32_T c12_i35;
  int32_T c12_x_b;
  int32_T c12_c_n;
  int32_T c12_r_loop_ub;
  boolean_T c12_b_overflow;
  int32_T c12_i36;
  boolean_T c12_c_p;
  int32_T c12_f_k;
  const mxArray *c12_k_y = NULL;
  int32_T c12_i37;
  const mxArray *c12_l_y = NULL;
  int32_T c12_y_b;
  int32_T c12_g_k;
  int32_T c12_m_y;
  real_T c12_b_kd;
  int32_T c12_c_nm1;
  int32_T c12_r_a;
  int32_T c12_c_nm1d2;
  int32_T c12_i38;
  int32_T c12_ab_b;
  int32_T c12_bb_b;
  boolean_T c12_c_overflow;
  int32_T c12_h_k;
  int32_T c12_cb_b;
  int32_T c12_i_k;
  int32_T c12_n_y;
  real_T c12_c_kd;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_len[0] = 0.0;
  for (c12_i = 0; c12_i < 2; c12_i++) {
    c12_b_i = (real_T)c12_i + 1.0;
    c12_maxNegD[(int32_T)c12_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 + 2.0
      * (real_T)((int32_T)c12_b_i - 1)));
    c12_minAdjustedDim[(int32_T)c12_b_i - 1] = muDoubleScalarMin(12.0, 12.0 -
      (-1.0 + 2.0 * (real_T)((int32_T)c12_b_i - 1)));
    c12_maxIndex = c12_minAdjustedDim[(int32_T)c12_b_i - 1];
    c12_maxIndex += -1.0 + 2.0 * (real_T)((int32_T)c12_b_i - 1);
    if (c12_maxIndex > 12.0) {
      c12_b = true;
    } else {
      c12_b = false;
    }

    if (c12_b) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1,
        36), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_b_y)));
    }

    c12_len[(int32_T)(c12_b_i + 1.0) - 1] = ((c12_len[(int32_T)c12_b_i - 1] +
      c12_minAdjustedDim[(int32_T)c12_b_i - 1]) - c12_maxNegD[(int32_T)c12_b_i -
      1]) + 1.0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aRows, 1, &c12_j_emlrtRTEI);
  c12_dataLen = c12_len[2];
  c12_c_i = c12_aRows->size[0];
  c12_aRows->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_vd_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aRows, c12_c_i,
    &c12_j_emlrtRTEI);
  c12_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_aRows->data[c12_i1] = 0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aCols, 1, &c12_k_emlrtRTEI);
  c12_i2 = c12_aCols->size[0];
  c12_aCols->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_ud_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aCols, c12_i2,
    &c12_k_emlrtRTEI);
  c12_b_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_aCols->data[c12_i3] = 0;
  }

  c12_emxInit_real_T(chartInstance, c12_sp, &c12_aDat, 1, &c12_x_emlrtRTEI);
  c12_i4 = c12_aDat->size[0];
  c12_aDat->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_yd_emlrtRSI;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_aDat, c12_i4,
    &c12_l_emlrtRTEI);
  c12_c_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i5 = 0; c12_i5 <= c12_c_loop_ub; c12_i5++) {
    c12_aDat->data[c12_i5] = 0.0;
  }

  c12_emxInit_real_T1(chartInstance, c12_sp, &c12_idx, 2, &c12_p_emlrtRTEI);
  c12_emxInit_int32_T1(chartInstance, c12_sp, &c12_b_r, 2, &c12_y_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_x, 1, &c12_v_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_b_idx, 1, &c12_n_emlrtRTEI);
  for (c12_k = 0; c12_k < 2; c12_k++) {
    c12_b_k = (real_T)c12_k + 1.0;
    c12_st.site = &c12_n_emlrtRSI;
    c12_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_b_a = c12_a;
    c12_b_b = c12_d;
    if (c12_b_b < c12_b_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_b_x = c12_b_a;
      c12_c_b = muDoubleScalarIsInf(c12_b_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_c_b) {
        c12_guard2 = true;
      } else {
        c12_c_x = c12_b_b;
        c12_d_b = muDoubleScalarIsInf(c12_c_x);
        if (c12_d_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_b_a == c12_b_b) {
          c12_i8 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i8, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_d_x = c12_b_a;
        c12_e_x = c12_d_x;
        c12_e_x = muDoubleScalarFloor(c12_e_x);
        if (c12_e_x == c12_b_a) {
          c12_i9 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i9, &c12_m_emlrtRTEI);
          c12_e_loop_ub = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a);
          for (c12_i10 = 0; c12_i10 <= c12_e_loop_ub; c12_i10++) {
            c12_idx->data[c12_i10] = c12_b_a + (real_T)c12_i10;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_e_a = c12_b_a;
          c12_f_b = c12_b_b;
          c12_f_a = c12_e_a;
          c12_g_b = c12_f_b;
          c12_anew = c12_f_a;
          c12_g_x = (c12_g_b - c12_f_a) + 0.5;
          c12_ndbl = c12_g_x;
          c12_ndbl = muDoubleScalarFloor(c12_ndbl);
          c12_apnd = c12_f_a + c12_ndbl;
          c12_cdiff = c12_apnd - c12_g_b;
          c12_g_a = c12_f_a;
          c12_j_b = c12_g_b;
          c12_i_x = c12_g_a;
          c12_k_x = c12_i_x;
          c12_m_x = c12_k_x;
          c12_absa = muDoubleScalarAbs(c12_m_x);
          c12_n_x = c12_j_b;
          c12_o_x = c12_n_x;
          c12_p_x = c12_o_x;
          c12_absb = muDoubleScalarAbs(c12_p_x);
          if (c12_absa > c12_absb) {
            c12_c = c12_absa;
          } else {
            c12_c = c12_absb;
          }

          c12_thresh = 4.4408920985006262E-16 * c12_c;
          c12_s_x = c12_cdiff;
          c12_t_x = c12_s_x;
          c12_u_x = c12_t_x;
          c12_c_y = muDoubleScalarAbs(c12_u_x);
          if (c12_c_y < c12_thresh) {
            c12_ndbl++;
            c12_bnew = c12_g_b;
          } else if (c12_cdiff > 0.0) {
            c12_bnew = c12_f_a + (c12_ndbl - 1.0);
          } else {
            c12_ndbl++;
            c12_bnew = c12_apnd;
          }

          c12_n_too_large = (c12_ndbl > 2.147483647E+9);
          if (c12_ndbl >= 0.0) {
            c12_n = (int32_T)muDoubleScalarFloor(c12_ndbl);
          } else {
            c12_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_p = !c12_n_too_large;
          if (!c12_p) {
            c12_d_y = NULL;
            sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_e_y = NULL;
            sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_e_y)));
          }

          c12_i23 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i23, &c12_r_emlrtRTEI);
          if (c12_n > 0) {
            c12_idx->data[0] = c12_anew;
            if (c12_n > 1) {
              c12_idx->data[c12_n - 1] = c12_bnew;
              c12_nm1 = c12_n - 1;
              c12_p_a = c12_nm1;
              c12_nm1d2 = c12_div_nzp_s32(chartInstance, c12_p_a, 2, 0, 1U, 0, 0);
              c12_i28 = c12_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_t_b = c12_i28 + 1;
              c12_u_b = c12_t_b;
              if (1 > c12_u_b) {
                c12_overflow = false;
              } else {
                c12_overflow = (c12_u_b > 2147483646);
              }

              if (c12_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_c_k = 1; c12_c_k - 1 <= c12_i28; c12_c_k++) {
                c12_e_k = c12_c_k;
                c12_kd = (real_T)c12_e_k;
                c12_idx->data[c12_e_k] = c12_anew + c12_kd;
                c12_idx->data[(c12_n - c12_e_k) - 1] = c12_bnew - c12_kd;
              }

              c12_v_b = c12_nm1d2;
              c12_i_y = c12_v_b << 1;
              if (c12_i_y == c12_nm1) {
                c12_idx->data[c12_nm1d2] = (c12_anew + c12_bnew) / 2.0;
              } else {
                c12_kd = (real_T)c12_nm1d2;
                c12_idx->data[c12_nm1d2] = c12_anew + c12_kd;
                c12_idx->data[c12_nm1d2 + 1] = c12_bnew - c12_kd;
              }
            }
          }
        }
      }
    }

    c12_i6 = c12_x->size[0];
    c12_x->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i6,
      &c12_n_emlrtRTEI);
    c12_d_loop_ub = c12_idx->size[1] - 1;
    for (c12_i7 = 0; c12_i7 <= c12_d_loop_ub; c12_i7++) {
      c12_x->data[c12_i7] = c12_idx->data[c12_i7];
    }

    c12_st.site = &c12_n_emlrtRSI;
    c12_c_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_b_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_d_a = c12_c_a;
    c12_e_b = c12_b_d;
    if (c12_e_b < c12_d_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_f_x = c12_d_a;
      c12_h_b = muDoubleScalarIsInf(c12_f_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_h_b) {
        c12_guard2 = true;
      } else {
        c12_h_x = c12_e_b;
        c12_i_b = muDoubleScalarIsInf(c12_h_x);
        if (c12_i_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_d_a == c12_e_b) {
          c12_i13 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i13, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_j_x = c12_d_a;
        c12_l_x = c12_j_x;
        c12_l_x = muDoubleScalarFloor(c12_l_x);
        if (c12_l_x == c12_d_a) {
          c12_i15 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i15, &c12_m_emlrtRTEI);
          c12_h_loop_ub = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a);
          for (c12_i16 = 0; c12_i16 <= c12_h_loop_ub; c12_i16++) {
            c12_idx->data[c12_i16] = c12_d_a + (real_T)c12_i16;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_h_a = c12_d_a;
          c12_k_b = c12_e_b;
          c12_j_a = c12_h_a;
          c12_l_b = c12_k_b;
          c12_b_anew = c12_j_a;
          c12_q_x = (c12_l_b - c12_j_a) + 0.5;
          c12_b_ndbl = c12_q_x;
          c12_b_ndbl = muDoubleScalarFloor(c12_b_ndbl);
          c12_b_apnd = c12_j_a + c12_b_ndbl;
          c12_b_cdiff = c12_b_apnd - c12_l_b;
          c12_l_a = c12_j_a;
          c12_o_b = c12_l_b;
          c12_w_x = c12_l_a;
          c12_x_x = c12_w_x;
          c12_y_x = c12_x_x;
          c12_b_absa = muDoubleScalarAbs(c12_y_x);
          c12_ab_x = c12_o_b;
          c12_cb_x = c12_ab_x;
          c12_eb_x = c12_cb_x;
          c12_b_absb = muDoubleScalarAbs(c12_eb_x);
          if (c12_b_absa > c12_b_absb) {
            c12_b_c = c12_b_absa;
          } else {
            c12_b_c = c12_b_absb;
          }

          c12_b_thresh = 4.4408920985006262E-16 * c12_b_c;
          c12_fb_x = c12_b_cdiff;
          c12_gb_x = c12_fb_x;
          c12_hb_x = c12_gb_x;
          c12_f_y = muDoubleScalarAbs(c12_hb_x);
          if (c12_f_y < c12_b_thresh) {
            c12_b_ndbl++;
            c12_b_bnew = c12_l_b;
          } else if (c12_b_cdiff > 0.0) {
            c12_b_bnew = c12_j_a + (c12_b_ndbl - 1.0);
          } else {
            c12_b_ndbl++;
            c12_b_bnew = c12_b_apnd;
          }

          c12_b_n_too_large = (c12_b_ndbl > 2.147483647E+9);
          if (c12_b_ndbl >= 0.0) {
            c12_b_n = (int32_T)muDoubleScalarFloor(c12_b_ndbl);
          } else {
            c12_b_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_b_p = !c12_b_n_too_large;
          if (!c12_b_p) {
            c12_g_y = NULL;
            sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_h_y = NULL;
            sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_g_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_h_y)));
          }

          c12_i30 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_b_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i30, &c12_r_emlrtRTEI);
          if (c12_b_n > 0) {
            c12_idx->data[0] = c12_b_anew;
            if (c12_b_n > 1) {
              c12_idx->data[c12_b_n - 1] = c12_b_bnew;
              c12_b_nm1 = c12_b_n - 1;
              c12_q_a = c12_b_nm1;
              c12_b_nm1d2 = c12_div_nzp_s32(chartInstance, c12_q_a, 2, 0, 1U, 0,
                0);
              c12_i34 = c12_b_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_w_b = c12_i34 + 1;
              c12_x_b = c12_w_b;
              if (1 > c12_x_b) {
                c12_b_overflow = false;
              } else {
                c12_b_overflow = (c12_x_b > 2147483646);
              }

              if (c12_b_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_f_k = 1; c12_f_k - 1 <= c12_i34; c12_f_k++) {
                c12_g_k = c12_f_k;
                c12_b_kd = (real_T)c12_g_k;
                c12_idx->data[c12_g_k] = c12_b_anew + c12_b_kd;
                c12_idx->data[(c12_b_n - c12_g_k) - 1] = c12_b_bnew - c12_b_kd;
              }

              c12_y_b = c12_b_nm1d2;
              c12_m_y = c12_y_b << 1;
              if (c12_m_y == c12_b_nm1) {
                c12_idx->data[c12_b_nm1d2] = (c12_b_anew + c12_b_bnew) / 2.0;
              } else {
                c12_b_kd = (real_T)c12_b_nm1d2;
                c12_idx->data[c12_b_nm1d2] = c12_b_anew + c12_b_kd;
                c12_idx->data[c12_b_nm1d2 + 1] = c12_b_bnew - c12_b_kd;
              }
            }
          }
        }
      }
    }

    c12_i11 = c12_b_idx->size[0];
    c12_b_idx->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_b_idx, c12_i11,
      &c12_n_emlrtRTEI);
    c12_f_loop_ub = c12_idx->size[1] - 1;
    for (c12_i12 = 0; c12_i12 <= c12_f_loop_ub; c12_i12++) {
      c12_b_idx->data[c12_i12] = c12_idx->data[c12_i12];
    }

    c12_i_size[0] = c12_x->size[0];
    c12_g_loop_ub = c12_x->size[0] - 1;
    for (c12_i14 = 0; c12_i14 <= c12_g_loop_ub; c12_i14++) {
      c12_i_data[c12_i14] = c12_b_idx->data[c12_i14];
    }

    c12_st.site = &c12_p_emlrtRSI;
    c12_i_a = c12_len[(int32_T)c12_b_k - 1] + 1.0;
    c12_c_d = c12_len[(int32_T)(c12_b_k + 1.0) - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_k_a = c12_i_a;
    c12_m_b = c12_c_d;
    if (c12_m_b < c12_k_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_r_x = c12_k_a;
      c12_n_b = muDoubleScalarIsInf(c12_r_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_n_b) {
        c12_guard2 = true;
      } else {
        c12_v_x = c12_m_b;
        c12_p_b = muDoubleScalarIsInf(c12_v_x);
        if (c12_p_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_k_a == c12_m_b) {
          c12_i18 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i18, &c12_p_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_bb_x = c12_k_a;
        c12_db_x = c12_bb_x;
        c12_db_x = muDoubleScalarFloor(c12_db_x);
        if (c12_db_x == c12_k_a) {
          c12_i21 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i21, &c12_p_emlrtRTEI);
          c12_k_loop_ub = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a);
          for (c12_i24 = 0; c12_i24 <= c12_k_loop_ub; c12_i24++) {
            c12_idx->data[c12_i24] = c12_k_a + (real_T)c12_i24;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_m_a = c12_k_a;
          c12_q_b = c12_m_b;
          c12_n_a = c12_m_a;
          c12_r_b = c12_q_b;
          c12_c_anew = c12_n_a;
          c12_ib_x = (c12_r_b - c12_n_a) + 0.5;
          c12_c_ndbl = c12_ib_x;
          c12_c_ndbl = muDoubleScalarFloor(c12_c_ndbl);
          c12_c_apnd = c12_n_a + c12_c_ndbl;
          c12_c_cdiff = c12_c_apnd - c12_r_b;
          c12_o_a = c12_n_a;
          c12_s_b = c12_r_b;
          c12_jb_x = c12_o_a;
          c12_kb_x = c12_jb_x;
          c12_lb_x = c12_kb_x;
          c12_c_absa = muDoubleScalarAbs(c12_lb_x);
          c12_mb_x = c12_s_b;
          c12_nb_x = c12_mb_x;
          c12_ob_x = c12_nb_x;
          c12_c_absb = muDoubleScalarAbs(c12_ob_x);
          if (c12_c_absa > c12_c_absb) {
            c12_c_c = c12_c_absa;
          } else {
            c12_c_c = c12_c_absb;
          }

          c12_c_thresh = 4.4408920985006262E-16 * c12_c_c;
          c12_pb_x = c12_c_cdiff;
          c12_qb_x = c12_pb_x;
          c12_rb_x = c12_qb_x;
          c12_j_y = muDoubleScalarAbs(c12_rb_x);
          if (c12_j_y < c12_c_thresh) {
            c12_c_ndbl++;
            c12_c_bnew = c12_r_b;
          } else if (c12_c_cdiff > 0.0) {
            c12_c_bnew = c12_n_a + (c12_c_ndbl - 1.0);
          } else {
            c12_c_ndbl++;
            c12_c_bnew = c12_c_apnd;
          }

          c12_c_n_too_large = (c12_c_ndbl > 2.147483647E+9);
          if (c12_c_ndbl >= 0.0) {
            c12_c_n = (int32_T)muDoubleScalarFloor(c12_c_ndbl);
          } else {
            c12_c_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_c_p = !c12_c_n_too_large;
          if (!c12_c_p) {
            c12_k_y = NULL;
            sf_mex_assign(&c12_k_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_l_y = NULL;
            sf_mex_assign(&c12_l_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_k_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_l_y)));
          }

          c12_i37 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_c_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i37, &c12_r_emlrtRTEI);
          if (c12_c_n > 0) {
            c12_idx->data[0] = c12_c_anew;
            if (c12_c_n > 1) {
              c12_idx->data[c12_c_n - 1] = c12_c_bnew;
              c12_c_nm1 = c12_c_n - 1;
              c12_r_a = c12_c_nm1;
              c12_c_nm1d2 = c12_div_nzp_s32(chartInstance, c12_r_a, 2, 0, 1U, 0,
                0);
              c12_i38 = c12_c_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_ab_b = c12_i38 + 1;
              c12_bb_b = c12_ab_b;
              if (1 > c12_bb_b) {
                c12_c_overflow = false;
              } else {
                c12_c_overflow = (c12_bb_b > 2147483646);
              }

              if (c12_c_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_h_k = 1; c12_h_k - 1 <= c12_i38; c12_h_k++) {
                c12_i_k = c12_h_k;
                c12_c_kd = (real_T)c12_i_k;
                c12_idx->data[c12_i_k] = c12_c_anew + c12_c_kd;
                c12_idx->data[(c12_c_n - c12_i_k) - 1] = c12_c_bnew - c12_c_kd;
              }

              c12_cb_b = c12_c_nm1d2;
              c12_n_y = c12_cb_b << 1;
              if (c12_n_y == c12_c_nm1) {
                c12_idx->data[c12_c_nm1d2] = (c12_c_anew + c12_c_bnew) / 2.0;
              } else {
                c12_c_kd = (real_T)c12_c_nm1d2;
                c12_idx->data[c12_c_nm1d2] = c12_c_anew + c12_c_kd;
                c12_idx->data[c12_c_nm1d2 + 1] = c12_c_bnew - c12_c_kd;
              }
            }
          }
        }
      }
    }

    c12_i17 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_be_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i17,
      &c12_q_emlrtRTEI);
    c12_i_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
      c12_b_r->data[c12_i19] = (int32_T)c12_idx->data[c12_i19];
    }

    c12_j_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i20 = 0; c12_i20 <= c12_j_loop_ub; c12_i20++) {
      c12_aRows->data[c12_b_r->data[c12_i20] - 1] = (int32_T)c12_i_data[c12_i20];
    }

    c12_i22 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_ae_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i22,
      &c12_s_emlrtRTEI);
    c12_l_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i25 = 0; c12_i25 <= c12_l_loop_ub; c12_i25++) {
      c12_b_r->data[c12_i25] = (int32_T)c12_idx->data[c12_i25];
    }

    c12_d_d = -1.0 + 2.0 * (real_T)((int32_T)c12_b_k - 1);
    c12_m_loop_ub = c12_i_size[0] - 1;
    for (c12_i26 = 0; c12_i26 <= c12_m_loop_ub; c12_i26++) {
      c12_tmp_data[c12_i26] = (int32_T)(c12_i_data[c12_i26] + c12_d_d);
    }

    c12_n_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i27 = 0; c12_i27 <= c12_n_loop_ub; c12_i27++) {
      c12_aCols->data[c12_b_r->data[c12_i27] - 1] = c12_tmp_data[c12_i27];
    }

    c12_i29 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i29,
      &c12_u_emlrtRTEI);
    c12_o_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i31 = 0; c12_i31 <= c12_o_loop_ub; c12_i31++) {
      c12_b_r->data[c12_i31] = (int32_T)c12_idx->data[c12_i31];
    }

    c12_d1 = -1.0 + 2.0 * (real_T)((int32_T)c12_b_k - 1);
    c12_d_k = (int32_T)c12_b_k - 1;
    c12_i32 = c12_x->size[0];
    c12_x->size[0] = c12_i_size[0];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i32,
      &c12_v_emlrtRTEI);
    c12_p_loop_ub = c12_i_size[0] - 1;
    for (c12_i33 = 0; c12_i33 <= c12_p_loop_ub; c12_i33++) {
      c12_x->data[c12_i33] = c12_B[((int32_T)(c12_i_data[c12_i33] + c12_d1) + 12
        * c12_d_k) - 1];
    }

    c12_q_loop_ub = c12_x->size[0] - 1;
    for (c12_i35 = 0; c12_i35 <= c12_q_loop_ub; c12_i35++) {
      c12_i_data[c12_i35] = c12_x->data[c12_i35];
    }

    c12_r_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i36 = 0; c12_i36 <= c12_r_loop_ub; c12_i36++) {
      c12_aDat->data[c12_b_r->data[c12_i36] - 1] = c12_i_data[c12_i36];
    }
  }

  c12_emxFree_real_T(chartInstance, &c12_b_idx);
  c12_emxFree_real_T(chartInstance, &c12_x);
  c12_emxFree_int32_T(chartInstance, &c12_b_r);
  c12_emxFree_real_T(chartInstance, &c12_idx);
  c12_st.site = &c12_o_emlrtRSI;
  c12_sparse(chartInstance, &c12_st, c12_aRows, c12_aCols, c12_aDat, c12_res1);
  c12_emxFree_real_T(chartInstance, &c12_aDat);
  c12_emxFree_int32_T(chartInstance, &c12_aCols);
  c12_emxFree_int32_T(chartInstance, &c12_aRows);
}

static void c12_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this)
{
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_pb_emlrtRTEI);
  c12_e_sparse_parenAssign(chartInstance, c12_sp, c12_b_this);
}

static void c12_sparse_validateNumericIndex(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp)
{
  int32_T c12_k;
  real_T c12_b_k;
  real_T c12_idxk;
  real_T c12_x;
  real_T c12_b_x;
  boolean_T c12_b;
  real_T c12_c_x;
  boolean_T c12_b_b;
  const mxArray *c12_y = NULL;
  const mxArray *c12_b_y = NULL;
  (void)chartInstance;
  for (c12_k = 0; c12_k < 3; c12_k++) {
    c12_b_k = (real_T)c12_k + 1.0;
    c12_idxk = 1.0 + (real_T)((int32_T)c12_b_k - 1);
    c12_x = c12_idxk;
    c12_b_x = c12_x;
    c12_b_x = muDoubleScalarFloor(c12_b_x);
    if (c12_b_x == c12_idxk) {
      c12_c_x = c12_idxk;
      c12_b_b = muDoubleScalarIsInf(c12_c_x);
      if (!c12_b_b) {
        c12_b = true;
      } else {
        c12_b = false;
      }
    } else {
      c12_b = false;
    }

    if (!c12_b) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_b_y)));
    }
  }
}

static void c12_sparse_locBsearch(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_emxArray_int32_T *c12_x, int32_T c12_xi, int32_T
  c12_xstart, int32_T c12_xend, int32_T *c12_n, boolean_T *c12_found)
{
  int32_T c12_b_xi;
  int32_T c12_b_xstart;
  int32_T c12_b_xend;
  int32_T c12_low_i;
  int32_T c12_low_ip1;
  int32_T c12_high_i;
  int32_T c12_b_low_i;
  int32_T c12_b_high_i;
  int32_T c12_mid_i;
  (void)chartInstance;
  if (c12_xstart < c12_xend) {
    if (c12_xi < c12_x->data[c12_xstart - 1]) {
      *c12_n = c12_xstart - 1;
      *c12_found = false;
    } else {
      c12_b_xi = c12_xi;
      c12_b_xstart = c12_xstart;
      c12_b_xend = c12_xend;
      c12_low_i = c12_b_xstart;
      c12_low_ip1 = c12_b_xstart;
      c12_high_i = c12_b_xend;
      while (c12_high_i > c12_low_ip1 + 1) {
        c12_b_low_i = c12_low_i;
        c12_b_high_i = c12_high_i;
        c12_mid_i = (c12_b_low_i >> 1) + (c12_b_high_i >> 1);
        if (((c12_b_low_i & 1) == 1) && ((c12_b_high_i & 1) == 1)) {
          c12_mid_i++;
        }

        if (c12_b_xi >= c12_x->data[c12_mid_i - 1]) {
          c12_low_i = c12_mid_i;
          c12_low_ip1 = c12_mid_i;
        } else {
          c12_high_i = c12_mid_i;
        }
      }

      *c12_n = c12_low_i;
      *c12_found = (c12_x->data[*c12_n - 1] == c12_xi);
    }
  } else if (c12_xstart == c12_xend) {
    *c12_n = c12_xstart - 1;
    *c12_found = false;
  } else {
    *c12_n = 0;
    *c12_found = false;
  }
}

static void c12_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs, c12_coder_internal_sparse *c12_b_this)
{
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_qb_emlrtRTEI);
  c12_c_realloc(chartInstance, c12_sp, c12_b_this, c12_numAllocRequested,
                c12_ub1, c12_lb2, c12_ub2, c12_offs);
}

static void c12_b_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this)
{
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_pb_emlrtRTEI);
  c12_f_sparse_parenAssign(chartInstance, c12_sp, c12_b_this);
}

static void c12_b_sparse_validateNumericIndex(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp)
{
  int32_T c12_k;
  real_T c12_b_k;
  real_T c12_idxk;
  real_T c12_x;
  real_T c12_b_x;
  boolean_T c12_b;
  real_T c12_c_x;
  boolean_T c12_b_b;
  const mxArray *c12_y = NULL;
  const mxArray *c12_b_y = NULL;
  (void)chartInstance;
  for (c12_k = 0; c12_k < 3; c12_k++) {
    c12_b_k = (real_T)c12_k + 1.0;
    c12_idxk = 10.0 + (real_T)((int32_T)c12_b_k - 1);
    c12_x = c12_idxk;
    c12_b_x = c12_x;
    c12_b_x = muDoubleScalarFloor(c12_b_x);
    if (c12_b_x == c12_idxk) {
      c12_c_x = c12_idxk;
      c12_b_b = muDoubleScalarIsInf(c12_c_x);
      if (!c12_b_b) {
        c12_b = true;
      } else {
        c12_b = false;
      }
    } else {
      c12_b = false;
    }

    if (!c12_b) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_b_y)));
    }
  }
}

static void c12_sparse_mldivide(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_y)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  emlrtStack c12_f_st;
  emlrtStack c12_g_st;
  c12_coder_internal_sparse c12_b_A;
  c12_coder_internal_sparse c12_b_b;
  int32_T c12_n;
  cs_di* c12_cxA;
  cs_dis * c12_S;
  cs_din * c12_N;
  c12_coder_internal_sparse c12_s;
  c12_emxArray_int32_T *c12_b_y;
  c12_emxArray_real_T *c12_c_y;
  int32_T c12_i;
  int32_T c12_b_i;
  int32_T c12_varargin_2;
  int32_T c12_c;
  int32_T c12_b_c;
  int32_T c12_idx;
  int32_T c12_x;
  int32_T c12_b_x;
  boolean_T c12_c_b;
  const mxArray *c12_d_y = NULL;
  int32_T c12_nd;
  const mxArray *c12_e_y = NULL;
  boolean_T c12_b1;
  const mxArray *c12_f_y = NULL;
  const mxArray *c12_g_y = NULL;
  int32_T c12_outIdx;
  int32_T c12_colstart;
  real_T c12_tmp[12];
  int32_T c12_colend;
  int32_T c12_colNnz;
  int32_T c12_b_varargin_2;
  int32_T c12_d_b;
  int32_T c12_e_b;
  int32_T c12_c_c;
  boolean_T c12_overflow;
  int32_T c12_d_c;
  int32_T c12_b_idx;
  int32_T c12_c_x;
  int32_T c12_k;
  int32_T c12_d_x;
  boolean_T c12_b2;
  int32_T c12_b_k;
  const mxArray *c12_h_y = NULL;
  int32_T c12_b_n;
  real_T c12_c_n;
  const mxArray *c12_i_y = NULL;
  int32_T c12_nz;
  int32_T c12_nzColAlloc;
  int32_T c12_c_idx;
  int32_T c12_c_i;
  real_T c12_b_tmp[12];
  int32_T c12_nzRhs;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  int32_T c12_extraCol;
  int32_T c12_b_outIdx;
  real_T c12_d_n;
  int32_T c12_extraSpace;
  int32_T c12_numAlloc;
  int32_T c12_extraAlloc;
  int32_T c12_start;
  int32_T c12_outstart;
  int32_T c12_num2Alloc;
  int32_T c12_instart;
  int32_T c12_b_outstart;
  int32_T c12_nelem;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_col;
  int32_T c12_i1;
  int32_T c12_offs;
  int32_T c12_i2;
  int32_T c12_b_col;
  int32_T c12_i3;
  int32_T c12_b_offs;
  int32_T c12_c_k;
  int32_T c12_loop_ub;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_d_k;
  int32_T c12_i6;
  int32_T c12_c_outstart;
  int32_T c12_c_instart;
  int32_T c12_d_outstart;
  int32_T c12_c_nelem;
  int32_T c12_d_instart;
  int32_T c12_i7;
  int32_T c12_d_nelem;
  int32_T c12_i8;
  int32_T c12_c_loop_ub;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_e_loop_ub;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_e_outstart;
  int32_T c12_e_instart;
  int32_T c12_f_outstart;
  int32_T c12_e_nelem;
  int32_T c12_f_instart;
  int32_T c12_i15;
  int32_T c12_f_nelem;
  int32_T c12_i16;
  int32_T c12_g_loop_ub;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_f_st.prev = &c12_e_st;
  c12_f_st.tls = c12_e_st.tls;
  c12_g_st.prev = &c12_f_st;
  c12_g_st.tls = c12_f_st.tls;
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_b_A,
    &c12_rb_emlrtRTEI);
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_b_b,
    &c12_sb_emlrtRTEI);
  c12_st.site = &c12_mc_emlrtRSI;
  c12_b_st.site = &c12_nc_emlrtRSI;
  c12_c_st.site = &c12_oc_emlrtRSI;
  c12_d_st.site = &c12_uc_emlrtRSI;
  c12_n = c12_A.colidx->data[c12_A.colidx->size[0] - 1];
  c12_cxA = makeCXSparseMatrix(c12_n - 1, 12, 12, &c12_A.colidx->data[0],
    &c12_A.rowidx->data[0], &c12_A.d->data[0]);
  c12_S = cs_di_sqr(2, c12_cxA, 0);
  c12_N = cs_di_lu(c12_cxA, c12_S, 1);
  cs_di_spfree(c12_cxA);
  if (c12_N == NULL) {
    c12_c_st.site = &c12_pc_emlrtRSI;
    c12_warning(chartInstance, &c12_c_st);
    cs_di_sfree(c12_S);
    cs_di_nfree(c12_N);
    c12_emxCopyStruct_coder_internal_sp(chartInstance, &c12_b_st, &c12_b_A,
      &c12_A, &c12_rb_emlrtRTEI);
    c12_emxCopyStruct_coder_internal_sp(chartInstance, &c12_b_st, &c12_b_b,
      &c12_b, &c12_sb_emlrtRTEI);
    c12_c_st.site = &c12_qc_emlrtRSI;
    c12_CXSparseAPI_iteratedQR(chartInstance, &c12_c_st, c12_b_A, c12_b_b, c12_y);
  } else {
    c12_c_st.site = &c12_rc_emlrtRSI;
    c12_sparse_spallocLike(chartInstance, &c12_c_st, c12_y);
    c12_emxInitStruct_coder_internal_sp(chartInstance, &c12_b_st, &c12_s,
      &c12_ub_emlrtRTEI);
    c12_emxInit_int32_T(chartInstance, &c12_b_st, &c12_b_y, 1, &c12_b_emlrtRTEI);
    c12_emxInit_real_T(chartInstance, &c12_b_st, &c12_c_y, 1, &c12_d_emlrtRTEI);
    for (c12_i = 0; c12_i < 12; c12_i++) {
      c12_b_i = c12_i + 1;
      c12_c_st.site = &c12_sc_emlrtRSI;
      c12_varargin_2 = c12_b_i;
      c12_d_st.site = &c12_bd_emlrtRSI;
      c12_c = c12_varargin_2;
      c12_e_st.site = &c12_cd_emlrtRSI;
      c12_b_c = c12_c;
      c12_f_st.site = &c12_dd_emlrtRSI;
      c12_idx = c12_b_c;
      c12_x = c12_idx;
      c12_b_x = c12_x;
      if (c12_b_x == c12_idx) {
        c12_c_b = true;
      } else {
        c12_c_b = false;
      }

      if (!c12_c_b) {
        c12_d_y = NULL;
        sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c12_e_y = NULL;
        sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c12_f_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call
                    (&c12_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_f_st,
          "message", 1U, 1U, 14, c12_e_y)));
      }

      c12_nd = c12_b.colidx->data[c12_b_c] - c12_b.colidx->data[c12_b_c - 1];
      if (c12_nd <= 12) {
        c12_b1 = true;
      } else {
        c12_b1 = false;
      }

      if (!c12_b1) {
        c12_f_y = NULL;
        sf_mex_assign(&c12_f_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c12_g_y = NULL;
        sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c12_e_st, "error", 0U, 2U, 14, c12_f_y, 14, sf_mex_call
                    (&c12_e_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_e_st,
          "message", 1U, 1U, 14, c12_g_y)));
      }

      c12_f_st.site = &c12_ed_emlrtRSI;
      c12_b_sparse_spallocLike(chartInstance, &c12_f_st, c12_nd, &c12_s);
      if (c12_nd != 0) {
        c12_outIdx = 0;
        c12_colstart = c12_b.colidx->data[c12_b_c - 1] - 2;
        c12_colend = c12_b.colidx->data[c12_b_c];
        c12_colNnz = (c12_colend - c12_colstart) - 2;
        c12_f_st.site = &c12_fd_emlrtRSI;
        c12_d_b = c12_colNnz;
        c12_e_b = c12_d_b;
        if (1 > c12_e_b) {
          c12_overflow = false;
        } else {
          c12_overflow = (c12_e_b > 2147483646);
        }

        if (c12_overflow) {
          c12_g_st.site = &c12_u_emlrtRSI;
          c12_check_forloop_overflow_error(chartInstance, &c12_g_st);
        }

        for (c12_k = 1; c12_k - 1 < c12_colNnz; c12_k++) {
          c12_b_k = c12_k;
          c12_s.d->data[c12_outIdx] = c12_b.d->data[c12_colstart + c12_b_k];
          c12_s.rowidx->data[c12_outIdx] = c12_b.rowidx->data[c12_colstart +
            c12_b_k];
          c12_outIdx++;
        }

        c12_s.colidx->data[1] = c12_s.colidx->data[0] + c12_colNnz;
      }

      c12_c_st.site = &c12_sc_emlrtRSI;
      c12_sparse_full(chartInstance, &c12_c_st, c12_s, c12_tmp);
      solve_from_lu_di(c12_N, c12_S, (double *)&c12_tmp[0], 12);
      c12_c_st.site = &c12_tc_emlrtRSI;
      c12_b_varargin_2 = c12_b_i;
      c12_d_st.site = &c12_bc_emlrtRSI;
      c12_c_c = c12_b_varargin_2;
      c12_e_st.site = &c12_jd_emlrtRSI;
      c12_d_c = c12_c_c;
      c12_f_st.site = &c12_kd_emlrtRSI;
      c12_b_idx = c12_d_c;
      c12_c_x = c12_b_idx;
      c12_d_x = c12_c_x;
      if (c12_d_x == c12_b_idx) {
        c12_b2 = true;
      } else {
        c12_b2 = false;
      }

      if (!c12_b2) {
        c12_h_y = NULL;
        sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c12_i_y = NULL;
        sf_mex_assign(&c12_i_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c12_f_st, "error", 0U, 2U, 14, c12_h_y, 14, sf_mex_call
                    (&c12_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_f_st,
          "message", 1U, 1U, 14, c12_i_y)));
      }

      c12_b_n = c12_y->colidx->data[c12_y->colidx->size[0] - 1];
      c12_c_n = (real_T)(c12_b_n - 1);
      c12_nz = (int32_T)c12_c_n;
      c12_nzColAlloc = c12_y->colidx->data[c12_d_c] - c12_y->colidx->
        data[c12_d_c - 1];
      c12_c_idx = c12_y->colidx->data[c12_d_c - 1];
      for (c12_c_i = 0; c12_c_i < 12; c12_c_i++) {
        c12_b_tmp[c12_c_i] = c12_tmp[c12_c_i];
      }

      c12_f_st.site = &c12_ld_emlrtRSI;
      c12_nzRhs = c12_countNumnzInColumn(chartInstance, c12_b_tmp, c12_r);
      if (c12_nzColAlloc < c12_nzRhs) {
        c12_extraCol = c12_nzRhs - c12_nzColAlloc;
        c12_d_n = (real_T)c12_y->maxnz;
        c12_numAlloc = (int32_T)c12_d_n;
        c12_extraAlloc = c12_numAlloc - c12_nz;
        c12_start = c12_y->colidx->data[c12_d_c];
        if (c12_extraAlloc < c12_extraCol) {
          c12_num2Alloc = c12_extraCol - c12_extraAlloc;
          c12_f_st.site = &c12_md_emlrtRSI;
          c12_c_realloc(chartInstance, &c12_f_st, c12_y, c12_numAlloc +
                        c12_num2Alloc, c12_c_idx - 1, c12_start, c12_nz,
                        c12_extraCol);
        } else {
          c12_f_st.site = &c12_nd_emlrtRSI;
          c12_b_outstart = c12_start + c12_extraCol;
          c12_b_instart = c12_start;
          c12_b_nelem = (c12_nz - c12_start) + 1;
          if (!(c12_b_nelem <= 0)) {
            c12_g_st.site = &c12_kc_emlrtRSI;
            c12_i2 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_y->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st, c12_b_y,
              c12_i2, &c12_b_emlrtRTEI);
            c12_b_loop_ub = c12_y->rowidx->size[0] - 1;
            for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
              c12_b_y->data[c12_i6] = c12_y->rowidx->data[c12_i6];
            }

            c12_d_outstart = c12_b_outstart - 1;
            c12_d_instart = c12_b_instart - 1;
            c12_d_nelem = c12_b_nelem;
            c12_i8 = c12_y->rowidx->size[0];
            c12_y->rowidx->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st,
              c12_y->rowidx, c12_i8, &c12_tb_emlrtRTEI);
            c12_d_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
              c12_y->rowidx->data[c12_i10] = c12_b_y->data[c12_i10];
            }

            memmove((void *)&c12_y->rowidx->data[c12_d_outstart], (void *)
                    &c12_y->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                     c12_d_nelem * sizeof(int32_T)));
            c12_g_st.site = &c12_lc_emlrtRSI;
            c12_i12 = c12_c_y->size[0];
            c12_c_y->size[0] = c12_y->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_c_y,
              c12_i12, &c12_d_emlrtRTEI);
            c12_f_loop_ub = c12_y->d->size[0] - 1;
            for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
              c12_c_y->data[c12_i14] = c12_y->d->data[c12_i14];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i16 = c12_y->d->size[0];
            c12_y->d->size[0] = c12_c_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_y->d,
              c12_i16, &c12_tb_emlrtRTEI);
            c12_h_loop_ub = c12_c_y->size[0] - 1;
            for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
              c12_y->d->data[c12_i18] = c12_c_y->data[c12_i18];
            }

            memmove((void *)&c12_y->d->data[c12_f_outstart], (void *)&c12_y->
                    d->data[c12_f_instart], (uint32_T)((size_t)c12_f_nelem *
                     sizeof(real_T)));
          }
        }

        c12_rhsIter = c12_r;
        c12_c_copyNonzeroValues(chartInstance, c12_y, &c12_rhsIter, c12_c_idx,
          c12_tmp);
        c12_b_col = c12_d_c + 1;
        c12_b_offs = c12_extraCol;
        c12_i4 = c12_b_col;
        for (c12_d_k = c12_i4 - 1; c12_d_k + 1 < 14; c12_d_k++) {
          c12_y->colidx->data[c12_d_k] += c12_b_offs;
        }
      } else {
        c12_rhsIter = c12_r;
        c12_b_outIdx = c12_c_copyNonzeroValues(chartInstance, c12_y,
          &c12_rhsIter, c12_c_idx, c12_tmp);
        c12_extraSpace = c12_nzColAlloc - c12_nzRhs;
        if (c12_extraSpace > 0) {
          c12_start = c12_y->colidx->data[c12_d_c];
          c12_f_st.site = &c12_od_emlrtRSI;
          c12_outstart = c12_b_outIdx;
          c12_instart = c12_start;
          c12_nelem = (c12_nz - c12_start) + 1;
          if (!(c12_nelem <= 0)) {
            c12_g_st.site = &c12_kc_emlrtRSI;
            c12_i1 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_y->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st, c12_b_y,
              c12_i1, &c12_b_emlrtRTEI);
            c12_loop_ub = c12_y->rowidx->size[0] - 1;
            for (c12_i5 = 0; c12_i5 <= c12_loop_ub; c12_i5++) {
              c12_b_y->data[c12_i5] = c12_y->rowidx->data[c12_i5];
            }

            c12_c_outstart = c12_outstart - 1;
            c12_c_instart = c12_instart - 1;
            c12_c_nelem = c12_nelem;
            c12_i7 = c12_y->rowidx->size[0];
            c12_y->rowidx->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st,
              c12_y->rowidx, c12_i7, &c12_tb_emlrtRTEI);
            c12_c_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i9 = 0; c12_i9 <= c12_c_loop_ub; c12_i9++) {
              c12_y->rowidx->data[c12_i9] = c12_b_y->data[c12_i9];
            }

            memmove((void *)&c12_y->rowidx->data[c12_c_outstart], (void *)
                    &c12_y->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                     c12_c_nelem * sizeof(int32_T)));
            c12_g_st.site = &c12_lc_emlrtRSI;
            c12_i11 = c12_c_y->size[0];
            c12_c_y->size[0] = c12_y->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_c_y,
              c12_i11, &c12_d_emlrtRTEI);
            c12_e_loop_ub = c12_y->d->size[0] - 1;
            for (c12_i13 = 0; c12_i13 <= c12_e_loop_ub; c12_i13++) {
              c12_c_y->data[c12_i13] = c12_y->d->data[c12_i13];
            }

            c12_e_outstart = c12_outstart - 1;
            c12_e_instart = c12_instart - 1;
            c12_e_nelem = c12_nelem;
            c12_i15 = c12_y->d->size[0];
            c12_y->d->size[0] = c12_c_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_y->d,
              c12_i15, &c12_tb_emlrtRTEI);
            c12_g_loop_ub = c12_c_y->size[0] - 1;
            for (c12_i17 = 0; c12_i17 <= c12_g_loop_ub; c12_i17++) {
              c12_y->d->data[c12_i17] = c12_c_y->data[c12_i17];
            }

            memmove((void *)&c12_y->d->data[c12_e_outstart], (void *)&c12_y->
                    d->data[c12_e_instart], (uint32_T)((size_t)c12_e_nelem *
                     sizeof(real_T)));
          }

          c12_col = c12_d_c + 1;
          c12_offs = c12_extraSpace;
          c12_i3 = c12_col;
          for (c12_c_k = c12_i3 - 1; c12_c_k + 1 < 14; c12_c_k++) {
            c12_y->colidx->data[c12_c_k] -= c12_offs;
          }
        }
      }
    }

    c12_emxFree_real_T(chartInstance, &c12_c_y);
    c12_emxFree_int32_T(chartInstance, &c12_b_y);
    c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_s);
    cs_di_sfree(c12_S);
    cs_di_nfree(c12_N);
  }

  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_b_b);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_b_A);
}

static void c12_warning(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp)
{
  const mxArray *c12_y = NULL;
  static char_T c12_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c12_b_y = NULL;
  static char_T c12_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c12_c_y = NULL;
  static char_T c12_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  (void)chartInstance;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_msgID, 10, 0U, 1U, 0U, 2, 1, 21),
                false);
  sf_mex_call(c12_sp, "feval", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
    "feval", 1U, 2U, 14, c12_b_y, 14, c12_c_y));
}

static void c12_CXSparseAPI_iteratedQR(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_out)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  int32_T c12_n;
  cs_di* c12_cxA;
  cs_dis * c12_S;
  cs_din * c12_N;
  real_T c12_tol;
  c12_coder_internal_sparse c12_s;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  int32_T c12_i;
  real_T c12_b_i;
  real_T c12_varargin_2;
  real_T c12_c;
  real_T c12_b_c;
  real_T c12_idx;
  real_T c12_x;
  real_T c12_b_x;
  boolean_T c12_b_b;
  real_T c12_c_x;
  boolean_T c12_c_b;
  const mxArray *c12_c_y = NULL;
  int32_T c12_col;
  int32_T c12_nd;
  const mxArray *c12_d_y = NULL;
  boolean_T c12_b1;
  const mxArray *c12_e_y = NULL;
  const mxArray *c12_f_y = NULL;
  int32_T c12_outIdx;
  int32_T c12_colstart;
  real_T c12_outBuff[12];
  int32_T c12_colend;
  int32_T c12_colNnz;
  real_T c12_b_varargin_2;
  int32_T c12_d_b;
  int32_T c12_e_b;
  real_T c12_c_c;
  boolean_T c12_overflow;
  real_T c12_d_c;
  real_T c12_b_idx;
  real_T c12_d_x;
  int32_T c12_k;
  real_T c12_e_x;
  int32_T c12_b_k;
  boolean_T c12_b2;
  real_T c12_f_x;
  boolean_T c12_f_b;
  const mxArray *c12_g_y = NULL;
  int32_T c12_b_col;
  int32_T c12_b_n;
  const mxArray *c12_h_y = NULL;
  real_T c12_c_n;
  int32_T c12_nz;
  int32_T c12_nzColAlloc;
  int32_T c12_c_idx;
  int32_T c12_c_i;
  real_T c12_b_outBuff[12];
  int32_T c12_nzRhs;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  int32_T c12_extraCol;
  int32_T c12_b_outIdx;
  real_T c12_d_n;
  int32_T c12_extraSpace;
  int32_T c12_numAlloc;
  int32_T c12_extraAlloc;
  int32_T c12_start;
  int32_T c12_outstart;
  int32_T c12_num2Alloc;
  int32_T c12_instart;
  int32_T c12_b_outstart;
  int32_T c12_nelem;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_c_col;
  int32_T c12_i1;
  int32_T c12_offs;
  int32_T c12_i2;
  int32_T c12_d_col;
  int32_T c12_i3;
  int32_T c12_b_offs;
  int32_T c12_c_k;
  int32_T c12_loop_ub;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_d_k;
  int32_T c12_i6;
  int32_T c12_c_outstart;
  int32_T c12_c_instart;
  int32_T c12_d_outstart;
  int32_T c12_c_nelem;
  int32_T c12_d_instart;
  int32_T c12_i7;
  int32_T c12_d_nelem;
  int32_T c12_i8;
  int32_T c12_c_loop_ub;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_e_loop_ub;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_e_outstart;
  int32_T c12_e_instart;
  int32_T c12_f_outstart;
  int32_T c12_e_nelem;
  int32_T c12_f_instart;
  int32_T c12_i15;
  int32_T c12_f_nelem;
  int32_T c12_i16;
  int32_T c12_g_loop_ub;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_st.site = &c12_vc_emlrtRSI;
  c12_b_st.site = &c12_uc_emlrtRSI;
  c12_n = c12_A.colidx->data[c12_A.colidx->size[0] - 1];
  c12_cxA = makeCXSparseMatrix(c12_n - 1, 12, 12, &c12_A.colidx->data[0],
    &c12_A.rowidx->data[0], &c12_A.d->data[0]);
  c12_S = cs_di_sqr(2, c12_cxA, 1);
  c12_N = cs_di_qr(c12_cxA, c12_S);
  cs_di_spfree(c12_cxA);
  qr_rank_di(c12_N, &c12_tol);
  c12_st.site = &c12_wc_emlrtRSI;
  c12_sparse_spallocLike(chartInstance, &c12_st, c12_out);
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_s,
    &c12_wb_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_b_y, 1, &c12_d_emlrtRTEI);
  for (c12_i = 0; c12_i < 12; c12_i++) {
    c12_b_i = (real_T)c12_i + 1.0;
    c12_st.site = &c12_xc_emlrtRSI;
    c12_varargin_2 = c12_b_i;
    c12_b_st.site = &c12_bd_emlrtRSI;
    c12_c = c12_varargin_2;
    c12_c_st.site = &c12_cd_emlrtRSI;
    c12_b_c = c12_c;
    c12_d_st.site = &c12_dd_emlrtRSI;
    c12_idx = c12_b_c;
    c12_x = c12_idx;
    c12_b_x = c12_x;
    c12_b_x = muDoubleScalarFloor(c12_b_x);
    if (c12_b_x == c12_idx) {
      c12_c_x = c12_idx;
      c12_c_b = muDoubleScalarIsInf(c12_c_x);
      if (!c12_c_b) {
        c12_b_b = true;
      } else {
        c12_b_b = false;
      }
    } else {
      c12_b_b = false;
    }

    if (!c12_b_b) {
      c12_c_y = NULL;
      sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      c12_d_y = NULL;
      sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_c_y, 14, sf_mex_call
                  (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_d_st,
        "message", 1U, 1U, 14, c12_d_y)));
    }

    c12_col = (int32_T)c12_b_c;
    c12_nd = c12_b.colidx->data[c12_col] - c12_b.colidx->data[c12_col - 1];
    if (c12_nd <= 12) {
      c12_b1 = true;
    } else {
      c12_b1 = false;
    }

    if (!c12_b1) {
      c12_e_y = NULL;
      sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      c12_f_y = NULL;
      sf_mex_assign(&c12_f_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(&c12_c_st, "error", 0U, 2U, 14, c12_e_y, 14, sf_mex_call
                  (&c12_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_c_st,
        "message", 1U, 1U, 14, c12_f_y)));
    }

    c12_d_st.site = &c12_ed_emlrtRSI;
    c12_b_sparse_spallocLike(chartInstance, &c12_d_st, c12_nd, &c12_s);
    if (c12_nd != 0) {
      c12_outIdx = 0;
      c12_colstart = c12_b.colidx->data[c12_col - 1] - 2;
      c12_colend = c12_b.colidx->data[c12_col];
      c12_colNnz = (c12_colend - c12_colstart) - 2;
      c12_d_st.site = &c12_fd_emlrtRSI;
      c12_d_b = c12_colNnz;
      c12_e_b = c12_d_b;
      if (1 > c12_e_b) {
        c12_overflow = false;
      } else {
        c12_overflow = (c12_e_b > 2147483646);
      }

      if (c12_overflow) {
        c12_e_st.site = &c12_u_emlrtRSI;
        c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
      }

      for (c12_k = 1; c12_k - 1 < c12_colNnz; c12_k++) {
        c12_b_k = c12_k;
        c12_s.d->data[c12_outIdx] = c12_b.d->data[c12_colstart + c12_b_k];
        c12_s.rowidx->data[c12_outIdx] = c12_b.rowidx->data[c12_colstart +
          c12_b_k];
        c12_outIdx++;
      }

      c12_s.colidx->data[1] = c12_s.colidx->data[0] + c12_colNnz;
    }

    c12_st.site = &c12_xc_emlrtRSI;
    c12_sparse_full(chartInstance, &c12_st, c12_s, c12_outBuff);
    solve_from_qr_di(c12_N, c12_S, (double *)&c12_outBuff[0], 12, 12);
    c12_st.site = &c12_yc_emlrtRSI;
    c12_b_varargin_2 = c12_b_i;
    c12_b_st.site = &c12_bc_emlrtRSI;
    c12_c_c = c12_b_varargin_2;
    c12_c_st.site = &c12_jd_emlrtRSI;
    c12_d_c = c12_c_c;
    c12_d_st.site = &c12_kd_emlrtRSI;
    c12_b_idx = c12_d_c;
    c12_d_x = c12_b_idx;
    c12_e_x = c12_d_x;
    c12_e_x = muDoubleScalarFloor(c12_e_x);
    if (c12_e_x == c12_b_idx) {
      c12_f_x = c12_b_idx;
      c12_f_b = muDoubleScalarIsInf(c12_f_x);
      if (!c12_f_b) {
        c12_b2 = true;
      } else {
        c12_b2 = false;
      }
    } else {
      c12_b2 = false;
    }

    if (!c12_b2) {
      c12_g_y = NULL;
      sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      c12_h_y = NULL;
      sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_g_y, 14, sf_mex_call
                  (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_d_st,
        "message", 1U, 1U, 14, c12_h_y)));
    }

    c12_b_col = (int32_T)c12_d_c;
    c12_b_n = c12_out->colidx->data[c12_out->colidx->size[0] - 1];
    c12_c_n = (real_T)(c12_b_n - 1);
    c12_nz = (int32_T)c12_c_n;
    c12_nzColAlloc = c12_out->colidx->data[c12_b_col] - c12_out->colidx->
      data[c12_b_col - 1];
    c12_c_idx = c12_out->colidx->data[c12_b_col - 1];
    for (c12_c_i = 0; c12_c_i < 12; c12_c_i++) {
      c12_b_outBuff[c12_c_i] = c12_outBuff[c12_c_i];
    }

    c12_d_st.site = &c12_ld_emlrtRSI;
    c12_nzRhs = c12_countNumnzInColumn(chartInstance, c12_b_outBuff, c12_r);
    if (c12_nzColAlloc < c12_nzRhs) {
      c12_extraCol = c12_nzRhs - c12_nzColAlloc;
      c12_d_n = (real_T)c12_out->maxnz;
      c12_numAlloc = (int32_T)c12_d_n;
      c12_extraAlloc = c12_numAlloc - c12_nz;
      c12_start = c12_out->colidx->data[c12_b_col];
      if (c12_extraAlloc < c12_extraCol) {
        c12_num2Alloc = c12_extraCol - c12_extraAlloc;
        c12_d_st.site = &c12_md_emlrtRSI;
        c12_c_realloc(chartInstance, &c12_d_st, c12_out, c12_numAlloc +
                      c12_num2Alloc, c12_c_idx - 1, c12_start, c12_nz,
                      c12_extraCol);
      } else {
        c12_d_st.site = &c12_nd_emlrtRSI;
        c12_b_outstart = c12_start + c12_extraCol;
        c12_b_instart = c12_start;
        c12_b_nelem = (c12_nz - c12_start) + 1;
        if (!(c12_b_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i2 = c12_y->size[0];
          c12_y->size[0] = c12_out->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i2,
            &c12_b_emlrtRTEI);
          c12_b_loop_ub = c12_out->rowidx->size[0] - 1;
          for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
            c12_y->data[c12_i6] = c12_out->rowidx->data[c12_i6];
          }

          c12_d_outstart = c12_b_outstart - 1;
          c12_d_instart = c12_b_instart - 1;
          c12_d_nelem = c12_b_nelem;
          c12_i8 = c12_out->rowidx->size[0];
          c12_out->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_out->rowidx, c12_i8, &c12_vb_emlrtRTEI);
          c12_d_loop_ub = c12_y->size[0] - 1;
          for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
            c12_out->rowidx->data[c12_i10] = c12_y->data[c12_i10];
          }

          memmove((void *)&c12_out->rowidx->data[c12_d_outstart], (void *)
                  &c12_out->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                   c12_d_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i12 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_out->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i12, &c12_d_emlrtRTEI);
          c12_f_loop_ub = c12_out->d->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
            c12_b_y->data[c12_i14] = c12_out->d->data[c12_i14];
          }

          c12_f_outstart = c12_b_outstart - 1;
          c12_f_instart = c12_b_instart - 1;
          c12_f_nelem = c12_b_nelem;
          c12_i16 = c12_out->d->size[0];
          c12_out->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_out->d,
            c12_i16, &c12_vb_emlrtRTEI);
          c12_h_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
            c12_out->d->data[c12_i18] = c12_b_y->data[c12_i18];
          }

          memmove((void *)&c12_out->d->data[c12_f_outstart], (void *)&c12_out->
                  d->data[c12_f_instart], (uint32_T)((size_t)c12_f_nelem *
                   sizeof(real_T)));
        }
      }

      c12_rhsIter = c12_r;
      c12_c_copyNonzeroValues(chartInstance, c12_out, &c12_rhsIter, c12_c_idx,
        c12_outBuff);
      c12_d_col = c12_b_col + 1;
      c12_b_offs = c12_extraCol;
      c12_i4 = c12_d_col;
      for (c12_d_k = c12_i4 - 1; c12_d_k + 1 < 14; c12_d_k++) {
        c12_out->colidx->data[c12_d_k] += c12_b_offs;
      }
    } else {
      c12_rhsIter = c12_r;
      c12_b_outIdx = c12_c_copyNonzeroValues(chartInstance, c12_out,
        &c12_rhsIter, c12_c_idx, c12_outBuff);
      c12_extraSpace = c12_nzColAlloc - c12_nzRhs;
      if (c12_extraSpace > 0) {
        c12_start = c12_out->colidx->data[c12_b_col];
        c12_d_st.site = &c12_od_emlrtRSI;
        c12_outstart = c12_b_outIdx;
        c12_instart = c12_start;
        c12_nelem = (c12_nz - c12_start) + 1;
        if (!(c12_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i1 = c12_y->size[0];
          c12_y->size[0] = c12_out->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i1,
            &c12_b_emlrtRTEI);
          c12_loop_ub = c12_out->rowidx->size[0] - 1;
          for (c12_i5 = 0; c12_i5 <= c12_loop_ub; c12_i5++) {
            c12_y->data[c12_i5] = c12_out->rowidx->data[c12_i5];
          }

          c12_c_outstart = c12_outstart - 1;
          c12_c_instart = c12_instart - 1;
          c12_c_nelem = c12_nelem;
          c12_i7 = c12_out->rowidx->size[0];
          c12_out->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_out->rowidx, c12_i7, &c12_vb_emlrtRTEI);
          c12_c_loop_ub = c12_y->size[0] - 1;
          for (c12_i9 = 0; c12_i9 <= c12_c_loop_ub; c12_i9++) {
            c12_out->rowidx->data[c12_i9] = c12_y->data[c12_i9];
          }

          memmove((void *)&c12_out->rowidx->data[c12_c_outstart], (void *)
                  &c12_out->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                   c12_c_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i11 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_out->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i11, &c12_d_emlrtRTEI);
          c12_e_loop_ub = c12_out->d->size[0] - 1;
          for (c12_i13 = 0; c12_i13 <= c12_e_loop_ub; c12_i13++) {
            c12_b_y->data[c12_i13] = c12_out->d->data[c12_i13];
          }

          c12_e_outstart = c12_outstart - 1;
          c12_e_instart = c12_instart - 1;
          c12_e_nelem = c12_nelem;
          c12_i15 = c12_out->d->size[0];
          c12_out->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_out->d,
            c12_i15, &c12_vb_emlrtRTEI);
          c12_g_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i17 = 0; c12_i17 <= c12_g_loop_ub; c12_i17++) {
            c12_out->d->data[c12_i17] = c12_b_y->data[c12_i17];
          }

          memmove((void *)&c12_out->d->data[c12_e_outstart], (void *)&c12_out->
                  d->data[c12_e_instart], (uint32_T)((size_t)c12_e_nelem *
                   sizeof(real_T)));
        }

        c12_c_col = c12_b_col + 1;
        c12_offs = c12_extraSpace;
        c12_i3 = c12_c_col;
        for (c12_c_k = c12_i3 - 1; c12_c_k + 1 < 14; c12_c_k++) {
          c12_out->colidx->data[c12_c_k] -= c12_offs;
        }
      }
    }
  }

  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_s);
  cs_di_sfree(c12_S);
  cs_di_nfree(c12_N);
}

static void c12_sparse_spallocLike(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_s)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  int32_T c12_i;
  int32_T c12_i1;
  int32_T c12_i2;
  int32_T c12_c;
  int32_T c12_b_c;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_st.site = &c12_ad_emlrtRSI;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_i = c12_s->d->size[0];
  c12_s->d->size[0] = 1;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_s->d, c12_i,
    &c12_xb_emlrtRTEI);
  c12_s->d->data[0] = 0.0;
  c12_s->maxnz = 1;
  c12_i1 = c12_s->colidx->size[0];
  c12_s->colidx->size[0] = 13;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_s->colidx, c12_i1,
    &c12_yb_emlrtRTEI);
  c12_s->colidx->data[0] = 1;
  c12_i2 = c12_s->rowidx->size[0];
  c12_s->rowidx->size[0] = 1;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_s->rowidx, c12_i2,
    &c12_xb_emlrtRTEI);
  c12_s->rowidx->data[0] = 0;
  for (c12_c = 0; c12_c < 12; c12_c++) {
    c12_b_c = c12_c;
    c12_s->colidx->data[c12_b_c + 1] = 1;
  }

  c12_b_st.site = &c12_w_emlrtRSI;
  c12_b_sparse_fillIn(chartInstance, &c12_b_st, c12_s);
}

static void c12_b_sparse_spallocLike(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, int32_T c12_nzmax,
  c12_coder_internal_sparse *c12_s)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  int32_T c12_nzmaxval;
  int32_T c12_b_s;
  int32_T c12_x;
  int32_T c12_fs;
  const mxArray *c12_y = NULL;
  int32_T c12_b_x;
  static char_T c12_b_cv[32] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 'p', 'a', 'r', 's', 'e', 'N', 'e', 'g', 'a',
    't', 'i', 'v', 'e', 'S', 'i', 'z', 'e' };

  int32_T c12_nzmaxvalFull;
  const mxArray *c12_b_y = NULL;
  const mxArray *c12_c_y = NULL;
  int32_T c12_a;
  static char_T c12_b_cv1[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 'p', 'a', 'r', 's', 'e', 'N', 'z', 'm', 'a',
    'x', 'T', 'o', 'o', 'S', 'm', 'a', 'l', 'l' };

  const mxArray *c12_d_y = NULL;
  int32_T c12_numalloc;
  int32_T c12_i;
  real_T c12_d;
  real_T c12_d1;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_i2;
  int32_T c12_i3;
  real_T c12_d2;
  real_T c12_d3;
  int32_T c12_b_loop_ub;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_c;
  int32_T c12_b_c;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_st.site = &c12_ad_emlrtRSI;
  c12_nzmaxval = c12_nzmax;
  c12_b_st.site = &c12_gd_emlrtRSI;
  c12_b_s = c12_nzmaxval;
  c12_x = c12_b_s;
  c12_fs = c12_x;
  c12_c_st.site = &c12_hd_emlrtRSI;
  if (!(c12_fs >= 0)) {
    c12_y = NULL;
    sf_mex_assign(&c12_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c12_b_y = NULL;
    sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1,
      32), false);
    sf_mex_call(&c12_b_st, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(&c12_b_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_b_st, "message", 1U, 1U, 14,
      c12_b_y)));
  }

  c12_b_x = c12_nzmaxval;
  c12_nzmaxvalFull = c12_b_x;
  if (!(0 <= c12_nzmaxvalFull)) {
    c12_c_y = NULL;
    sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U, 2, 1,
      33), false);
    c12_d_y = NULL;
    sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U, 2, 1,
      33), false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_c_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 1U, 14,
      c12_d_y)));
  }

  c12_a = c12_nzmaxvalFull;
  if (c12_a >= 1) {
    c12_numalloc = c12_a;
  } else {
    c12_numalloc = 1;
  }

  c12_i = c12_s->d->size[0];
  c12_d = (real_T)c12_numalloc;
  c12_s->d->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c12_d,
    &c12_h_emlrtDCI, &c12_st);
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_s->d, c12_i,
    &c12_xb_emlrtRTEI);
  c12_d1 = (real_T)c12_numalloc;
  c12_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c12_d1, &c12_h_emlrtDCI,
    &c12_st) - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_s->d->data[c12_i1] = 0.0;
  }

  c12_s->maxnz = c12_numalloc;
  c12_i2 = c12_s->colidx->size[0];
  c12_s->colidx->size[0] = 2;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_s->colidx, c12_i2,
    &c12_yb_emlrtRTEI);
  c12_s->colidx->data[0] = 1;
  c12_i3 = c12_s->rowidx->size[0];
  c12_d2 = (real_T)c12_numalloc;
  c12_s->rowidx->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c12_d2,
    &c12_h_emlrtDCI, &c12_st);
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_s->rowidx, c12_i3,
    &c12_xb_emlrtRTEI);
  c12_d3 = (real_T)c12_numalloc;
  c12_b_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c12_d3, &c12_h_emlrtDCI,
    &c12_st) - 1;
  for (c12_i4 = 0; c12_i4 <= c12_b_loop_ub; c12_i4++) {
    c12_s->rowidx->data[c12_i4] = 0;
  }

  c12_s->colidx->data[1] = 1;
  c12_b_st.site = &c12_w_emlrtRSI;
  c12_i5 = c12_s->colidx->size[0] - 2;
  c12_c_st.site = &c12_ac_emlrtRSI;
  c12_b = c12_i5 + 1;
  c12_b_b = c12_b;
  if (1 > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_d_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_d_st);
  }

  for (c12_c = 1; c12_c - 1 <= c12_i5; c12_c++) {
    c12_b_c = c12_c - 1;
    c12_s->colidx->data[c12_b_c] = 1;
  }

  c12_s->colidx->data[c12_s->colidx->size[0] - 1] = 1;
}

static void c12_sparse_full(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, real_T c12_y[12])
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  int32_T c12_i;
  int32_T c12_cend;
  int32_T c12_i1;
  int32_T c12_a;
  int32_T c12_b;
  int32_T c12_b_a;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_idx;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  for (c12_i = 0; c12_i < 12; c12_i++) {
    c12_y[c12_i] = 0.0;
  }

  c12_cend = c12_this.colidx->data[1] - 1;
  c12_i1 = c12_this.colidx->data[0];
  c12_st.site = &c12_id_emlrtRSI;
  c12_a = c12_i1;
  c12_b = c12_cend;
  c12_b_a = c12_a;
  c12_b_b = c12_b;
  if (c12_b_a > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_idx = c12_i1 - 1; c12_idx < c12_cend; c12_idx++) {
    c12_y[c12_this.rowidx->data[c12_idx] - 1] = c12_this.d->data[c12_idx];
  }
}

static int32_T c12_countNumnzInColumn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, real_T c12_rhs[12], c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter)
{
  int32_T c12_nz;
  int32_T c12_k;
  real_T c12_rhsv;
  int32_T c12_y;
  int32_T c12_b_y;
  (void)chartInstance;
  c12_nz = 0;
  for (c12_k = 0; c12_k < 12; c12_k++) {
    c12_rhsv = c12_rhs[c12_rhsIter.idx - 1];
    c12_y = c12_rhsIter.idx;
    c12_b_y = c12_y + 1;
    c12_rhsIter.idx = c12_b_y;
    if (!(c12_rhsv == 0.0)) {
      c12_nz++;
    }
  }

  return c12_nz;
}

static void c12_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter, int32_T c12_outStart, real_T c12_rhs
  [12], c12_coder_internal_sparse *c12_b_this, int32_T *c12_outIdx,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_b_rhsIter)
{
  int32_T c12_i;
  int32_T c12_b_outIdx;
  real_T c12_b_rhs[12];
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_ac_emlrtRTEI);
  *c12_b_rhsIter = c12_rhsIter;
  for (c12_i = 0; c12_i < 12; c12_i++) {
    c12_b_rhs[c12_i] = c12_rhs[c12_i];
  }

  c12_b_outIdx = c12_c_copyNonzeroValues(chartInstance, c12_b_this,
    c12_b_rhsIter, c12_outStart, c12_b_rhs);
  *c12_outIdx = c12_b_outIdx;
}

static void c12_c_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  real_T c12_len[4];
  int32_T c12_i;
  c12_emxArray_int32_T *c12_aRows;
  real_T c12_b_i;
  real_T c12_dataLen;
  real_T c12_maxNegD[3];
  int32_T c12_c_i;
  real_T c12_minAdjustedDim[3];
  real_T c12_maxIndex;
  int32_T c12_loop_ub;
  boolean_T c12_b;
  int32_T c12_i1;
  c12_emxArray_int32_T *c12_aCols;
  const mxArray *c12_y = NULL;
  int32_T c12_i2;
  const mxArray *c12_b_y = NULL;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  c12_emxArray_real_T *c12_aDat;
  int32_T c12_i4;
  int32_T c12_c_loop_ub;
  int32_T c12_i5;
  c12_emxArray_real_T *c12_idx;
  c12_emxArray_int32_T *c12_b_r;
  c12_emxArray_real_T *c12_x;
  c12_emxArray_real_T *c12_b_idx;
  int32_T c12_k;
  real_T c12_b_k;
  real_T c12_a;
  real_T c12_d;
  real_T c12_b_a;
  real_T c12_b_b;
  real_T c12_b_x;
  boolean_T c12_c_b;
  boolean_T c12_guard1 = false;
  boolean_T c12_guard2 = false;
  int32_T c12_i6;
  real_T c12_c_x;
  boolean_T c12_d_b;
  int32_T c12_d_loop_ub;
  int32_T c12_i7;
  int32_T c12_i8;
  real_T c12_d_x;
  real_T c12_e_x;
  real_T c12_c_a;
  real_T c12_b_d;
  int32_T c12_i9;
  real_T c12_d_a;
  real_T c12_e_a;
  real_T c12_e_b;
  real_T c12_f_b;
  real_T c12_f_a;
  real_T c12_f_x;
  real_T c12_g_b;
  int32_T c12_e_loop_ub;
  boolean_T c12_h_b;
  real_T c12_anew;
  int32_T c12_i10;
  real_T c12_g_x;
  int32_T c12_i11;
  real_T c12_ndbl;
  real_T c12_h_x;
  real_T c12_apnd;
  boolean_T c12_i_b;
  real_T c12_cdiff;
  int32_T c12_f_loop_ub;
  real_T c12_g_a;
  int32_T c12_i12;
  real_T c12_j_b;
  int32_T c12_i13;
  real_T c12_i_x;
  real_T c12_j_x;
  int32_T c12_i_size[1];
  real_T c12_k_x;
  real_T c12_l_x;
  int32_T c12_g_loop_ub;
  real_T c12_m_x;
  int32_T c12_i14;
  real_T c12_absa;
  real_T c12_n_x;
  int32_T c12_i15;
  real_T c12_i_data[12];
  real_T c12_o_x;
  real_T c12_h_a;
  real_T c12_i_a;
  real_T c12_p_x;
  real_T c12_k_b;
  real_T c12_c_d;
  real_T c12_absb;
  real_T c12_j_a;
  real_T c12_l_b;
  int32_T c12_h_loop_ub;
  real_T c12_k_a;
  real_T c12_c;
  real_T c12_b_anew;
  int32_T c12_i16;
  real_T c12_m_b;
  real_T c12_q_x;
  real_T c12_thresh;
  real_T c12_b_ndbl;
  real_T c12_r_x;
  real_T c12_s_x;
  boolean_T c12_n_b;
  real_T c12_t_x;
  real_T c12_b_apnd;
  real_T c12_u_x;
  real_T c12_b_cdiff;
  int32_T c12_i17;
  real_T c12_c_y;
  real_T c12_l_a;
  real_T c12_o_b;
  real_T c12_v_x;
  real_T c12_w_x;
  boolean_T c12_p_b;
  real_T c12_bnew;
  real_T c12_x_x;
  real_T c12_y_x;
  int32_T c12_i_loop_ub;
  boolean_T c12_n_too_large;
  real_T c12_b_absa;
  int32_T c12_i18;
  int32_T c12_i19;
  real_T c12_ab_x;
  real_T c12_bb_x;
  int32_T c12_n;
  real_T c12_cb_x;
  real_T c12_db_x;
  int32_T c12_j_loop_ub;
  real_T c12_eb_x;
  int32_T c12_i20;
  real_T c12_b_absb;
  boolean_T c12_p;
  int32_T c12_i21;
  int32_T c12_i22;
  real_T c12_b_c;
  real_T c12_m_a;
  const mxArray *c12_d_y = NULL;
  real_T c12_q_b;
  int32_T c12_i23;
  real_T c12_b_thresh;
  real_T c12_n_a;
  const mxArray *c12_e_y = NULL;
  real_T c12_fb_x;
  real_T c12_r_b;
  int32_T c12_k_loop_ub;
  real_T c12_gb_x;
  real_T c12_c_anew;
  int32_T c12_i24;
  int32_T c12_l_loop_ub;
  real_T c12_hb_x;
  real_T c12_ib_x;
  int32_T c12_i25;
  real_T c12_f_y;
  real_T c12_c_ndbl;
  real_T c12_d_d;
  real_T c12_c_apnd;
  int32_T c12_m_loop_ub;
  real_T c12_b_bnew;
  real_T c12_c_cdiff;
  int32_T c12_i26;
  int32_T c12_nm1;
  real_T c12_o_a;
  int32_T c12_p_a;
  boolean_T c12_b_n_too_large;
  real_T c12_s_b;
  int32_T c12_n_loop_ub;
  int32_T c12_tmp_data[12];
  int32_T c12_nm1d2;
  real_T c12_jb_x;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_b_n;
  real_T c12_kb_x;
  real_T c12_lb_x;
  int32_T c12_i29;
  int32_T c12_t_b;
  real_T c12_c_absa;
  int32_T c12_u_b;
  boolean_T c12_b_p;
  real_T c12_mb_x;
  real_T c12_nb_x;
  boolean_T c12_overflow;
  const mxArray *c12_g_y = NULL;
  real_T c12_ob_x;
  int32_T c12_i30;
  real_T c12_c_absb;
  int32_T c12_o_loop_ub;
  const mxArray *c12_h_y = NULL;
  int32_T c12_i31;
  real_T c12_c_c;
  int32_T c12_c_k;
  real_T c12_d1;
  real_T c12_c_thresh;
  int32_T c12_d_k;
  real_T c12_pb_x;
  int32_T c12_i32;
  int32_T c12_v_b;
  int32_T c12_e_k;
  real_T c12_qb_x;
  int32_T c12_i_y;
  real_T c12_kd;
  real_T c12_rb_x;
  int32_T c12_b_nm1;
  real_T c12_j_y;
  int32_T c12_q_a;
  int32_T c12_p_loop_ub;
  int32_T c12_b_nm1d2;
  int32_T c12_i33;
  int32_T c12_i34;
  real_T c12_c_bnew;
  int32_T c12_q_loop_ub;
  static real_T c12_B[30] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 };

  int32_T c12_w_b;
  boolean_T c12_c_n_too_large;
  int32_T c12_i35;
  int32_T c12_x_b;
  int32_T c12_c_n;
  int32_T c12_r_loop_ub;
  boolean_T c12_b_overflow;
  int32_T c12_i36;
  boolean_T c12_c_p;
  int32_T c12_f_k;
  const mxArray *c12_k_y = NULL;
  int32_T c12_i37;
  const mxArray *c12_l_y = NULL;
  int32_T c12_y_b;
  int32_T c12_g_k;
  int32_T c12_m_y;
  real_T c12_b_kd;
  int32_T c12_c_nm1;
  int32_T c12_r_a;
  int32_T c12_c_nm1d2;
  int32_T c12_i38;
  int32_T c12_ab_b;
  int32_T c12_bb_b;
  boolean_T c12_c_overflow;
  int32_T c12_h_k;
  int32_T c12_cb_b;
  int32_T c12_i_k;
  int32_T c12_n_y;
  real_T c12_c_kd;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_len[0] = 0.0;
  for (c12_i = 0; c12_i < 3; c12_i++) {
    c12_b_i = (real_T)c12_i + 1.0;
    c12_maxNegD[(int32_T)c12_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 +
      (real_T)((int32_T)c12_b_i - 1)));
    c12_minAdjustedDim[(int32_T)c12_b_i - 1] = muDoubleScalarMin(10.0, 10.0 -
      (-1.0 + (real_T)((int32_T)c12_b_i - 1)));
    c12_maxIndex = c12_minAdjustedDim[(int32_T)c12_b_i - 1];
    c12_maxIndex += -1.0 + (real_T)((int32_T)c12_b_i - 1);
    if (c12_maxIndex > 10.0) {
      c12_b = true;
    } else {
      c12_b = false;
    }

    if (c12_b) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1,
        36), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_b_y)));
    }

    c12_len[(int32_T)(c12_b_i + 1.0) - 1] = ((c12_len[(int32_T)c12_b_i - 1] +
      c12_minAdjustedDim[(int32_T)c12_b_i - 1]) - c12_maxNegD[(int32_T)c12_b_i -
      1]) + 1.0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aRows, 1, &c12_j_emlrtRTEI);
  c12_dataLen = c12_len[3];
  c12_c_i = c12_aRows->size[0];
  c12_aRows->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_vd_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aRows, c12_c_i,
    &c12_j_emlrtRTEI);
  c12_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_aRows->data[c12_i1] = 0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aCols, 1, &c12_k_emlrtRTEI);
  c12_i2 = c12_aCols->size[0];
  c12_aCols->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_ud_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aCols, c12_i2,
    &c12_k_emlrtRTEI);
  c12_b_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_aCols->data[c12_i3] = 0;
  }

  c12_emxInit_real_T(chartInstance, c12_sp, &c12_aDat, 1, &c12_x_emlrtRTEI);
  c12_i4 = c12_aDat->size[0];
  c12_aDat->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_yd_emlrtRSI;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_aDat, c12_i4,
    &c12_l_emlrtRTEI);
  c12_c_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i5 = 0; c12_i5 <= c12_c_loop_ub; c12_i5++) {
    c12_aDat->data[c12_i5] = 0.0;
  }

  c12_emxInit_real_T1(chartInstance, c12_sp, &c12_idx, 2, &c12_p_emlrtRTEI);
  c12_emxInit_int32_T1(chartInstance, c12_sp, &c12_b_r, 2, &c12_y_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_x, 1, &c12_v_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_b_idx, 1, &c12_n_emlrtRTEI);
  for (c12_k = 0; c12_k < 3; c12_k++) {
    c12_b_k = (real_T)c12_k + 1.0;
    c12_st.site = &c12_n_emlrtRSI;
    c12_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_b_a = c12_a;
    c12_b_b = c12_d;
    if (c12_b_b < c12_b_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_b_x = c12_b_a;
      c12_c_b = muDoubleScalarIsInf(c12_b_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_c_b) {
        c12_guard2 = true;
      } else {
        c12_c_x = c12_b_b;
        c12_d_b = muDoubleScalarIsInf(c12_c_x);
        if (c12_d_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_b_a == c12_b_b) {
          c12_i8 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i8, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_d_x = c12_b_a;
        c12_e_x = c12_d_x;
        c12_e_x = muDoubleScalarFloor(c12_e_x);
        if (c12_e_x == c12_b_a) {
          c12_i9 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i9, &c12_m_emlrtRTEI);
          c12_e_loop_ub = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a);
          for (c12_i10 = 0; c12_i10 <= c12_e_loop_ub; c12_i10++) {
            c12_idx->data[c12_i10] = c12_b_a + (real_T)c12_i10;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_e_a = c12_b_a;
          c12_f_b = c12_b_b;
          c12_f_a = c12_e_a;
          c12_g_b = c12_f_b;
          c12_anew = c12_f_a;
          c12_g_x = (c12_g_b - c12_f_a) + 0.5;
          c12_ndbl = c12_g_x;
          c12_ndbl = muDoubleScalarFloor(c12_ndbl);
          c12_apnd = c12_f_a + c12_ndbl;
          c12_cdiff = c12_apnd - c12_g_b;
          c12_g_a = c12_f_a;
          c12_j_b = c12_g_b;
          c12_i_x = c12_g_a;
          c12_k_x = c12_i_x;
          c12_m_x = c12_k_x;
          c12_absa = muDoubleScalarAbs(c12_m_x);
          c12_n_x = c12_j_b;
          c12_o_x = c12_n_x;
          c12_p_x = c12_o_x;
          c12_absb = muDoubleScalarAbs(c12_p_x);
          if (c12_absa > c12_absb) {
            c12_c = c12_absa;
          } else {
            c12_c = c12_absb;
          }

          c12_thresh = 4.4408920985006262E-16 * c12_c;
          c12_s_x = c12_cdiff;
          c12_t_x = c12_s_x;
          c12_u_x = c12_t_x;
          c12_c_y = muDoubleScalarAbs(c12_u_x);
          if (c12_c_y < c12_thresh) {
            c12_ndbl++;
            c12_bnew = c12_g_b;
          } else if (c12_cdiff > 0.0) {
            c12_bnew = c12_f_a + (c12_ndbl - 1.0);
          } else {
            c12_ndbl++;
            c12_bnew = c12_apnd;
          }

          c12_n_too_large = (c12_ndbl > 2.147483647E+9);
          if (c12_ndbl >= 0.0) {
            c12_n = (int32_T)muDoubleScalarFloor(c12_ndbl);
          } else {
            c12_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_p = !c12_n_too_large;
          if (!c12_p) {
            c12_d_y = NULL;
            sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_e_y = NULL;
            sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_e_y)));
          }

          c12_i23 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i23, &c12_r_emlrtRTEI);
          if (c12_n > 0) {
            c12_idx->data[0] = c12_anew;
            if (c12_n > 1) {
              c12_idx->data[c12_n - 1] = c12_bnew;
              c12_nm1 = c12_n - 1;
              c12_p_a = c12_nm1;
              c12_nm1d2 = c12_div_nzp_s32(chartInstance, c12_p_a, 2, 0, 1U, 0, 0);
              c12_i28 = c12_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_t_b = c12_i28 + 1;
              c12_u_b = c12_t_b;
              if (1 > c12_u_b) {
                c12_overflow = false;
              } else {
                c12_overflow = (c12_u_b > 2147483646);
              }

              if (c12_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_c_k = 1; c12_c_k - 1 <= c12_i28; c12_c_k++) {
                c12_e_k = c12_c_k;
                c12_kd = (real_T)c12_e_k;
                c12_idx->data[c12_e_k] = c12_anew + c12_kd;
                c12_idx->data[(c12_n - c12_e_k) - 1] = c12_bnew - c12_kd;
              }

              c12_v_b = c12_nm1d2;
              c12_i_y = c12_v_b << 1;
              if (c12_i_y == c12_nm1) {
                c12_idx->data[c12_nm1d2] = (c12_anew + c12_bnew) / 2.0;
              } else {
                c12_kd = (real_T)c12_nm1d2;
                c12_idx->data[c12_nm1d2] = c12_anew + c12_kd;
                c12_idx->data[c12_nm1d2 + 1] = c12_bnew - c12_kd;
              }
            }
          }
        }
      }
    }

    c12_i6 = c12_x->size[0];
    c12_x->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i6,
      &c12_n_emlrtRTEI);
    c12_d_loop_ub = c12_idx->size[1] - 1;
    for (c12_i7 = 0; c12_i7 <= c12_d_loop_ub; c12_i7++) {
      c12_x->data[c12_i7] = c12_idx->data[c12_i7];
    }

    c12_st.site = &c12_n_emlrtRSI;
    c12_c_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_b_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_d_a = c12_c_a;
    c12_e_b = c12_b_d;
    if (c12_e_b < c12_d_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_f_x = c12_d_a;
      c12_h_b = muDoubleScalarIsInf(c12_f_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_h_b) {
        c12_guard2 = true;
      } else {
        c12_h_x = c12_e_b;
        c12_i_b = muDoubleScalarIsInf(c12_h_x);
        if (c12_i_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_d_a == c12_e_b) {
          c12_i13 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i13, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_j_x = c12_d_a;
        c12_l_x = c12_j_x;
        c12_l_x = muDoubleScalarFloor(c12_l_x);
        if (c12_l_x == c12_d_a) {
          c12_i15 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i15, &c12_m_emlrtRTEI);
          c12_h_loop_ub = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a);
          for (c12_i16 = 0; c12_i16 <= c12_h_loop_ub; c12_i16++) {
            c12_idx->data[c12_i16] = c12_d_a + (real_T)c12_i16;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_h_a = c12_d_a;
          c12_k_b = c12_e_b;
          c12_j_a = c12_h_a;
          c12_l_b = c12_k_b;
          c12_b_anew = c12_j_a;
          c12_q_x = (c12_l_b - c12_j_a) + 0.5;
          c12_b_ndbl = c12_q_x;
          c12_b_ndbl = muDoubleScalarFloor(c12_b_ndbl);
          c12_b_apnd = c12_j_a + c12_b_ndbl;
          c12_b_cdiff = c12_b_apnd - c12_l_b;
          c12_l_a = c12_j_a;
          c12_o_b = c12_l_b;
          c12_w_x = c12_l_a;
          c12_x_x = c12_w_x;
          c12_y_x = c12_x_x;
          c12_b_absa = muDoubleScalarAbs(c12_y_x);
          c12_ab_x = c12_o_b;
          c12_cb_x = c12_ab_x;
          c12_eb_x = c12_cb_x;
          c12_b_absb = muDoubleScalarAbs(c12_eb_x);
          if (c12_b_absa > c12_b_absb) {
            c12_b_c = c12_b_absa;
          } else {
            c12_b_c = c12_b_absb;
          }

          c12_b_thresh = 4.4408920985006262E-16 * c12_b_c;
          c12_fb_x = c12_b_cdiff;
          c12_gb_x = c12_fb_x;
          c12_hb_x = c12_gb_x;
          c12_f_y = muDoubleScalarAbs(c12_hb_x);
          if (c12_f_y < c12_b_thresh) {
            c12_b_ndbl++;
            c12_b_bnew = c12_l_b;
          } else if (c12_b_cdiff > 0.0) {
            c12_b_bnew = c12_j_a + (c12_b_ndbl - 1.0);
          } else {
            c12_b_ndbl++;
            c12_b_bnew = c12_b_apnd;
          }

          c12_b_n_too_large = (c12_b_ndbl > 2.147483647E+9);
          if (c12_b_ndbl >= 0.0) {
            c12_b_n = (int32_T)muDoubleScalarFloor(c12_b_ndbl);
          } else {
            c12_b_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_b_p = !c12_b_n_too_large;
          if (!c12_b_p) {
            c12_g_y = NULL;
            sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_h_y = NULL;
            sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_g_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_h_y)));
          }

          c12_i30 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_b_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i30, &c12_r_emlrtRTEI);
          if (c12_b_n > 0) {
            c12_idx->data[0] = c12_b_anew;
            if (c12_b_n > 1) {
              c12_idx->data[c12_b_n - 1] = c12_b_bnew;
              c12_b_nm1 = c12_b_n - 1;
              c12_q_a = c12_b_nm1;
              c12_b_nm1d2 = c12_div_nzp_s32(chartInstance, c12_q_a, 2, 0, 1U, 0,
                0);
              c12_i34 = c12_b_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_w_b = c12_i34 + 1;
              c12_x_b = c12_w_b;
              if (1 > c12_x_b) {
                c12_b_overflow = false;
              } else {
                c12_b_overflow = (c12_x_b > 2147483646);
              }

              if (c12_b_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_f_k = 1; c12_f_k - 1 <= c12_i34; c12_f_k++) {
                c12_g_k = c12_f_k;
                c12_b_kd = (real_T)c12_g_k;
                c12_idx->data[c12_g_k] = c12_b_anew + c12_b_kd;
                c12_idx->data[(c12_b_n - c12_g_k) - 1] = c12_b_bnew - c12_b_kd;
              }

              c12_y_b = c12_b_nm1d2;
              c12_m_y = c12_y_b << 1;
              if (c12_m_y == c12_b_nm1) {
                c12_idx->data[c12_b_nm1d2] = (c12_b_anew + c12_b_bnew) / 2.0;
              } else {
                c12_b_kd = (real_T)c12_b_nm1d2;
                c12_idx->data[c12_b_nm1d2] = c12_b_anew + c12_b_kd;
                c12_idx->data[c12_b_nm1d2 + 1] = c12_b_bnew - c12_b_kd;
              }
            }
          }
        }
      }
    }

    c12_i11 = c12_b_idx->size[0];
    c12_b_idx->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_b_idx, c12_i11,
      &c12_n_emlrtRTEI);
    c12_f_loop_ub = c12_idx->size[1] - 1;
    for (c12_i12 = 0; c12_i12 <= c12_f_loop_ub; c12_i12++) {
      c12_b_idx->data[c12_i12] = c12_idx->data[c12_i12];
    }

    c12_i_size[0] = c12_x->size[0];
    c12_g_loop_ub = c12_x->size[0] - 1;
    for (c12_i14 = 0; c12_i14 <= c12_g_loop_ub; c12_i14++) {
      c12_i_data[c12_i14] = c12_b_idx->data[c12_i14];
    }

    c12_st.site = &c12_p_emlrtRSI;
    c12_i_a = c12_len[(int32_T)c12_b_k - 1] + 1.0;
    c12_c_d = c12_len[(int32_T)(c12_b_k + 1.0) - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_k_a = c12_i_a;
    c12_m_b = c12_c_d;
    if (c12_m_b < c12_k_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_r_x = c12_k_a;
      c12_n_b = muDoubleScalarIsInf(c12_r_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_n_b) {
        c12_guard2 = true;
      } else {
        c12_v_x = c12_m_b;
        c12_p_b = muDoubleScalarIsInf(c12_v_x);
        if (c12_p_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_k_a == c12_m_b) {
          c12_i18 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i18, &c12_p_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_bb_x = c12_k_a;
        c12_db_x = c12_bb_x;
        c12_db_x = muDoubleScalarFloor(c12_db_x);
        if (c12_db_x == c12_k_a) {
          c12_i21 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i21, &c12_p_emlrtRTEI);
          c12_k_loop_ub = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a);
          for (c12_i24 = 0; c12_i24 <= c12_k_loop_ub; c12_i24++) {
            c12_idx->data[c12_i24] = c12_k_a + (real_T)c12_i24;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_m_a = c12_k_a;
          c12_q_b = c12_m_b;
          c12_n_a = c12_m_a;
          c12_r_b = c12_q_b;
          c12_c_anew = c12_n_a;
          c12_ib_x = (c12_r_b - c12_n_a) + 0.5;
          c12_c_ndbl = c12_ib_x;
          c12_c_ndbl = muDoubleScalarFloor(c12_c_ndbl);
          c12_c_apnd = c12_n_a + c12_c_ndbl;
          c12_c_cdiff = c12_c_apnd - c12_r_b;
          c12_o_a = c12_n_a;
          c12_s_b = c12_r_b;
          c12_jb_x = c12_o_a;
          c12_kb_x = c12_jb_x;
          c12_lb_x = c12_kb_x;
          c12_c_absa = muDoubleScalarAbs(c12_lb_x);
          c12_mb_x = c12_s_b;
          c12_nb_x = c12_mb_x;
          c12_ob_x = c12_nb_x;
          c12_c_absb = muDoubleScalarAbs(c12_ob_x);
          if (c12_c_absa > c12_c_absb) {
            c12_c_c = c12_c_absa;
          } else {
            c12_c_c = c12_c_absb;
          }

          c12_c_thresh = 4.4408920985006262E-16 * c12_c_c;
          c12_pb_x = c12_c_cdiff;
          c12_qb_x = c12_pb_x;
          c12_rb_x = c12_qb_x;
          c12_j_y = muDoubleScalarAbs(c12_rb_x);
          if (c12_j_y < c12_c_thresh) {
            c12_c_ndbl++;
            c12_c_bnew = c12_r_b;
          } else if (c12_c_cdiff > 0.0) {
            c12_c_bnew = c12_n_a + (c12_c_ndbl - 1.0);
          } else {
            c12_c_ndbl++;
            c12_c_bnew = c12_c_apnd;
          }

          c12_c_n_too_large = (c12_c_ndbl > 2.147483647E+9);
          if (c12_c_ndbl >= 0.0) {
            c12_c_n = (int32_T)muDoubleScalarFloor(c12_c_ndbl);
          } else {
            c12_c_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_c_p = !c12_c_n_too_large;
          if (!c12_c_p) {
            c12_k_y = NULL;
            sf_mex_assign(&c12_k_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_l_y = NULL;
            sf_mex_assign(&c12_l_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_k_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_l_y)));
          }

          c12_i37 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_c_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i37, &c12_r_emlrtRTEI);
          if (c12_c_n > 0) {
            c12_idx->data[0] = c12_c_anew;
            if (c12_c_n > 1) {
              c12_idx->data[c12_c_n - 1] = c12_c_bnew;
              c12_c_nm1 = c12_c_n - 1;
              c12_r_a = c12_c_nm1;
              c12_c_nm1d2 = c12_div_nzp_s32(chartInstance, c12_r_a, 2, 0, 1U, 0,
                0);
              c12_i38 = c12_c_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_ab_b = c12_i38 + 1;
              c12_bb_b = c12_ab_b;
              if (1 > c12_bb_b) {
                c12_c_overflow = false;
              } else {
                c12_c_overflow = (c12_bb_b > 2147483646);
              }

              if (c12_c_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_h_k = 1; c12_h_k - 1 <= c12_i38; c12_h_k++) {
                c12_i_k = c12_h_k;
                c12_c_kd = (real_T)c12_i_k;
                c12_idx->data[c12_i_k] = c12_c_anew + c12_c_kd;
                c12_idx->data[(c12_c_n - c12_i_k) - 1] = c12_c_bnew - c12_c_kd;
              }

              c12_cb_b = c12_c_nm1d2;
              c12_n_y = c12_cb_b << 1;
              if (c12_n_y == c12_c_nm1) {
                c12_idx->data[c12_c_nm1d2] = (c12_c_anew + c12_c_bnew) / 2.0;
              } else {
                c12_c_kd = (real_T)c12_c_nm1d2;
                c12_idx->data[c12_c_nm1d2] = c12_c_anew + c12_c_kd;
                c12_idx->data[c12_c_nm1d2 + 1] = c12_c_bnew - c12_c_kd;
              }
            }
          }
        }
      }
    }

    c12_i17 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_be_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i17,
      &c12_q_emlrtRTEI);
    c12_i_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
      c12_b_r->data[c12_i19] = (int32_T)c12_idx->data[c12_i19];
    }

    c12_j_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i20 = 0; c12_i20 <= c12_j_loop_ub; c12_i20++) {
      c12_aRows->data[c12_b_r->data[c12_i20] - 1] = (int32_T)c12_i_data[c12_i20];
    }

    c12_i22 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_ae_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i22,
      &c12_s_emlrtRTEI);
    c12_l_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i25 = 0; c12_i25 <= c12_l_loop_ub; c12_i25++) {
      c12_b_r->data[c12_i25] = (int32_T)c12_idx->data[c12_i25];
    }

    c12_d_d = -1.0 + (real_T)((int32_T)c12_b_k - 1);
    c12_m_loop_ub = c12_i_size[0] - 1;
    for (c12_i26 = 0; c12_i26 <= c12_m_loop_ub; c12_i26++) {
      c12_tmp_data[c12_i26] = (int32_T)(c12_i_data[c12_i26] + c12_d_d);
    }

    c12_n_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i27 = 0; c12_i27 <= c12_n_loop_ub; c12_i27++) {
      c12_aCols->data[c12_b_r->data[c12_i27] - 1] = c12_tmp_data[c12_i27];
    }

    c12_i29 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i29,
      &c12_u_emlrtRTEI);
    c12_o_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i31 = 0; c12_i31 <= c12_o_loop_ub; c12_i31++) {
      c12_b_r->data[c12_i31] = (int32_T)c12_idx->data[c12_i31];
    }

    c12_d1 = -1.0 + (real_T)((int32_T)c12_b_k - 1);
    c12_d_k = (int32_T)c12_b_k - 1;
    c12_i32 = c12_x->size[0];
    c12_x->size[0] = c12_i_size[0];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i32,
      &c12_v_emlrtRTEI);
    c12_p_loop_ub = c12_i_size[0] - 1;
    for (c12_i33 = 0; c12_i33 <= c12_p_loop_ub; c12_i33++) {
      c12_x->data[c12_i33] = c12_B[((int32_T)(c12_i_data[c12_i33] + c12_d1) + 10
        * c12_d_k) - 1];
    }

    c12_q_loop_ub = c12_x->size[0] - 1;
    for (c12_i35 = 0; c12_i35 <= c12_q_loop_ub; c12_i35++) {
      c12_i_data[c12_i35] = c12_x->data[c12_i35];
    }

    c12_r_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i36 = 0; c12_i36 <= c12_r_loop_ub; c12_i36++) {
      c12_aDat->data[c12_b_r->data[c12_i36] - 1] = c12_i_data[c12_i36];
    }
  }

  c12_emxFree_real_T(chartInstance, &c12_b_idx);
  c12_emxFree_real_T(chartInstance, &c12_x);
  c12_emxFree_int32_T(chartInstance, &c12_b_r);
  c12_emxFree_real_T(chartInstance, &c12_idx);
  c12_st.site = &c12_o_emlrtRSI;
  c12_b_sparse(chartInstance, &c12_st, c12_aRows, c12_aCols, c12_aDat, c12_res1);
  c12_emxFree_real_T(chartInstance, &c12_aDat);
  c12_emxFree_int32_T(chartInstance, &c12_aCols);
  c12_emxFree_int32_T(chartInstance, &c12_aRows);
}

static void c12_b_sparse(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_varargin_1, c12_emxArray_int32_T
  *c12_varargin_2, c12_emxArray_real_T *c12_varargin_3,
  c12_coder_internal_sparse *c12_y)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  emlrtStack c12_f_st;
  emlrtStack c12_g_st;
  emlrtStack c12_h_st;
  emlrtStack c12_i_st;
  int32_T c12_nc;
  int32_T c12_nr;
  int32_T c12_ny;
  boolean_T c12_b;
  const mxArray *c12_b_y = NULL;
  boolean_T c12_b1;
  const mxArray *c12_c_y = NULL;
  const mxArray *c12_d_y = NULL;
  c12_emxArray_int32_T *c12_b_varargin_1;
  int32_T c12_i;
  const mxArray *c12_e_y = NULL;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxArray_int32_T *c12_ridxInt;
  c12_emxArray_int32_T *c12_b_varargin_2;
  int32_T c12_i2;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  c12_emxArray_int32_T *c12_cidxInt;
  c12_emxArray_int32_T *c12_sortedIndices;
  int32_T c12_i4;
  int32_T c12_b_b;
  int32_T c12_c_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  int32_T c12_b_k;
  int32_T c12_istop;
  int32_T c12_b_istop;
  int32_T c12_maxr;
  int32_T c12_d_b;
  int32_T c12_e_b;
  boolean_T c12_b_overflow;
  int32_T c12_c_k;
  const mxArray *c12_f_y = NULL;
  int32_T c12_maxc;
  const mxArray *c12_g_y = NULL;
  const mxArray *c12_h_y = NULL;
  int32_T c12_a;
  const mxArray *c12_i_y = NULL;
  const mxArray *c12_j_y = NULL;
  int32_T c12_numalloc;
  int32_T c12_u;
  const mxArray *c12_k_y = NULL;
  const mxArray *c12_l_y = NULL;
  int32_T c12_i5;
  real_T c12_d;
  int32_T c12_b_u;
  int32_T c12_c_u;
  const mxArray *c12_m_y = NULL;
  const mxArray *c12_n_y = NULL;
  real_T c12_d1;
  int32_T c12_d_u;
  int32_T c12_c_loop_ub;
  const mxArray *c12_o_y = NULL;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_i8;
  real_T c12_d2;
  real_T c12_d3;
  int32_T c12_d_loop_ub;
  int32_T c12_i9;
  int32_T c12_cptr;
  int32_T c12_c;
  int32_T c12_b_c;
  int32_T c12_f_b;
  int32_T c12_g_b;
  boolean_T c12_c_overflow;
  int32_T c12_d_k;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_f_st.prev = &c12_e_st;
  c12_f_st.tls = c12_e_st.tls;
  c12_g_st.prev = &c12_f_st;
  c12_g_st.tls = c12_f_st.tls;
  c12_h_st.prev = &c12_g_st;
  c12_h_st.tls = c12_g_st.tls;
  c12_i_st.prev = &c12_h_st;
  c12_i_st.tls = c12_h_st.tls;
  c12_st.site = &c12_v_emlrtRSI;
  c12_nc = c12_varargin_2->size[0];
  c12_nr = c12_varargin_1->size[0];
  c12_ny = c12_varargin_3->size[0];
  if ((c12_nr == c12_nc) && (c12_ny == c12_nc)) {
    c12_b = true;
  } else {
    c12_b = false;
  }

  if (!c12_b) {
    c12_b_y = NULL;
    sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c12_c_y = NULL;
    sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_b_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 1U, 14,
      c12_c_y)));
  }

  if ((c12_ny == c12_nc) || (c12_ny == c12_nr)) {
    c12_b1 = true;
  } else {
    c12_b1 = false;
  }

  if (!c12_b1) {
    c12_d_y = NULL;
    sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    c12_e_y = NULL;
    sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv2, 10, 0U, 1U, 0U, 2, 1, 14),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 1U, 14,
      c12_e_y)));
  }

  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_b_varargin_1, 1,
                      &c12_ab_emlrtRTEI);
  c12_i = c12_b_varargin_1->size[0];
  c12_b_varargin_1->size[0] = c12_varargin_1->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_b_varargin_1, c12_i,
    &c12_ab_emlrtRTEI);
  c12_loop_ub = c12_varargin_1->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_b_varargin_1->data[c12_i1] = c12_varargin_1->data[c12_i1];
  }

  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_ridxInt, 1, &c12_eb_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_b_varargin_2, 1,
                      &c12_bb_emlrtRTEI);
  c12_b_st.site = &c12_db_emlrtRSI;
  c12_assertValidIndexArg(chartInstance, &c12_b_st, c12_b_varargin_1,
    c12_ridxInt);
  c12_i2 = c12_b_varargin_2->size[0];
  c12_b_varargin_2->size[0] = c12_varargin_2->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_b_varargin_2, c12_i2,
    &c12_bb_emlrtRTEI);
  c12_b_loop_ub = c12_varargin_2->size[0] - 1;
  c12_emxFree_int32_T(chartInstance, &c12_b_varargin_1);
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_b_varargin_2->data[c12_i3] = c12_varargin_2->data[c12_i3];
  }

  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_cidxInt, 1, &c12_fb_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_st, &c12_sortedIndices, 1,
                      &c12_gb_emlrtRTEI);
  c12_b_st.site = &c12_cb_emlrtRSI;
  c12_assertValidIndexArg(chartInstance, &c12_b_st, c12_b_varargin_2,
    c12_cidxInt);
  c12_i4 = c12_sortedIndices->size[0];
  c12_sortedIndices->size[0] = c12_nc;
  c12_b_st.site = &c12_v_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_b_st, c12_sortedIndices,
    c12_i4, &c12_cb_emlrtRTEI);
  c12_b_st.site = &c12_bb_emlrtRSI;
  c12_b_b = c12_nc;
  c12_c_b = c12_b_b;
  c12_emxFree_int32_T(chartInstance, &c12_b_varargin_2);
  if (1 > c12_c_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_c_b > 2147483646);
  }

  if (c12_overflow) {
    c12_c_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_c_st);
  }

  for (c12_k = 1; c12_k - 1 < c12_nc; c12_k++) {
    c12_b_k = c12_k;
    c12_sortedIndices->data[c12_b_k - 1] = c12_b_k;
  }

  c12_b_st.site = &c12_ab_emlrtRSI;
  c12_b_locSortrows(chartInstance, &c12_b_st, c12_sortedIndices, c12_cidxInt,
                    c12_ridxInt);
  c12_b_st.site = &c12_y_emlrtRSI;
  c12_c_st.site = &c12_tb_emlrtRSI;
  c12_d_st.site = &c12_ub_emlrtRSI;
  c12_e_st.site = &c12_vb_emlrtRSI;
  c12_f_st.site = &c12_wb_emlrtRSI;
  c12_istop = c12_ridxInt->size[0];
  c12_g_st.site = &c12_xb_emlrtRSI;
  c12_b_istop = c12_istop;
  c12_maxr = c12_ridxInt->data[0];
  c12_h_st.site = &c12_yb_emlrtRSI;
  c12_d_b = c12_b_istop;
  c12_e_b = c12_d_b;
  c12_b_overflow = (c12_e_b > 2147483646);
  if (c12_b_overflow) {
    c12_i_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_i_st);
  }

  for (c12_c_k = 1; c12_c_k < c12_b_istop; c12_c_k++) {
    if (c12_maxr < c12_ridxInt->data[c12_c_k]) {
      c12_maxr = c12_ridxInt->data[c12_c_k];
    }
  }

  if (!(c12_maxr <= 10)) {
    c12_f_y = NULL;
    sf_mex_assign(&c12_f_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_g_y = NULL;
    sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_i_y = NULL;
    sf_mex_assign(&c12_i_y, sf_mex_create("y", &c12_maxr, 6, 0U, 0U, 0U, 0),
                  false);
    c12_u = 1;
    c12_l_y = NULL;
    sf_mex_assign(&c12_l_y, sf_mex_create("y", &c12_u, 6, 0U, 0U, 0U, 0), false);
    c12_c_u = 10;
    c12_n_y = NULL;
    sf_mex_assign(&c12_n_y, sf_mex_create("y", &c12_c_u, 6, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_f_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 4U, 14,
      c12_g_y, 14, c12_i_y, 14, c12_l_y, 14, c12_n_y)));
  }

  c12_maxc = c12_cidxInt->data[c12_cidxInt->size[0] - 1];
  if (!(c12_maxc <= 10)) {
    c12_h_y = NULL;
    sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_j_y = NULL;
    sf_mex_assign(&c12_j_y, sf_mex_create("y", c12_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c12_k_y = NULL;
    sf_mex_assign(&c12_k_y, sf_mex_create("y", &c12_maxc, 6, 0U, 0U, 0U, 0),
                  false);
    c12_b_u = 1;
    c12_m_y = NULL;
    sf_mex_assign(&c12_m_y, sf_mex_create("y", &c12_b_u, 6, 0U, 0U, 0U, 0),
                  false);
    c12_d_u = 10;
    c12_o_y = NULL;
    sf_mex_assign(&c12_o_y, sf_mex_create("y", &c12_d_u, 6, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_h_y, 14, sf_mex_call(&c12_st,
      "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 4U, 14,
      c12_j_y, 14, c12_k_y, 14, c12_m_y, 14, c12_o_y)));
  }

  c12_a = c12_nc;
  if (c12_a >= 1) {
    c12_numalloc = c12_a;
  } else {
    c12_numalloc = 1;
  }

  c12_i5 = c12_y->d->size[0];
  c12_d = (real_T)c12_numalloc;
  c12_y->d->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c12_d,
    &c12_g_emlrtDCI, &c12_st);
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_y->d, c12_i5,
    &c12_db_emlrtRTEI);
  c12_d1 = (real_T)c12_numalloc;
  c12_c_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c12_d1, &c12_g_emlrtDCI,
    &c12_st) - 1;
  for (c12_i6 = 0; c12_i6 <= c12_c_loop_ub; c12_i6++) {
    c12_y->d->data[c12_i6] = 0.0;
  }

  c12_y->maxnz = c12_numalloc;
  c12_i7 = c12_y->colidx->size[0];
  c12_y->colidx->size[0] = 11;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_y->colidx, c12_i7,
    &c12_cb_emlrtRTEI);
  c12_y->colidx->data[0] = 1;
  c12_i8 = c12_y->rowidx->size[0];
  c12_d2 = (real_T)c12_numalloc;
  c12_y->rowidx->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(c12_d2,
    &c12_g_emlrtDCI, &c12_st);
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_y->rowidx, c12_i8,
    &c12_db_emlrtRTEI);
  c12_d3 = (real_T)c12_numalloc;
  c12_d_loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(c12_d3, &c12_g_emlrtDCI,
    &c12_st) - 1;
  for (c12_i9 = 0; c12_i9 <= c12_d_loop_ub; c12_i9++) {
    c12_y->rowidx->data[c12_i9] = 0;
  }

  c12_cptr = 0;
  for (c12_c = 0; c12_c < 10; c12_c++) {
    c12_b_c = c12_c + 1;
    while ((c12_cptr + 1 <= c12_nc) && (c12_cidxInt->data[c12_cptr] == c12_b_c))
    {
      c12_y->rowidx->data[c12_cptr] = c12_ridxInt->data[c12_cptr];
      c12_cptr++;
    }

    c12_y->colidx->data[c12_b_c] = c12_cptr + 1;
  }

  c12_emxFree_int32_T(chartInstance, &c12_cidxInt);
  c12_emxFree_int32_T(chartInstance, &c12_ridxInt);
  c12_b_st.site = &c12_x_emlrtRSI;
  c12_f_b = c12_nc;
  c12_g_b = c12_f_b;
  if (1 > c12_g_b) {
    c12_c_overflow = false;
  } else {
    c12_c_overflow = (c12_g_b > 2147483646);
  }

  if (c12_c_overflow) {
    c12_c_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_c_st);
  }

  for (c12_d_k = 1; c12_d_k - 1 < c12_nc; c12_d_k++) {
    c12_b_k = c12_d_k - 1;
    c12_y->d->data[c12_b_k] = c12_varargin_3->data[c12_sortedIndices->
      data[c12_b_k] - 1];
  }

  c12_emxFree_int32_T(chartInstance, &c12_sortedIndices);
  c12_b_st.site = &c12_w_emlrtRSI;
  c12_b_sparse_fillIn(chartInstance, &c12_b_st, c12_y);
}

static void c12_d_spdiags(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_res1)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  real_T c12_len[3];
  int32_T c12_i;
  c12_emxArray_int32_T *c12_aRows;
  real_T c12_b_i;
  real_T c12_dataLen;
  real_T c12_maxNegD[2];
  int32_T c12_c_i;
  real_T c12_minAdjustedDim[2];
  real_T c12_maxIndex;
  int32_T c12_loop_ub;
  boolean_T c12_b;
  int32_T c12_i1;
  c12_emxArray_int32_T *c12_aCols;
  const mxArray *c12_y = NULL;
  int32_T c12_i2;
  const mxArray *c12_b_y = NULL;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  c12_emxArray_real_T *c12_aDat;
  int32_T c12_i4;
  int32_T c12_c_loop_ub;
  int32_T c12_i5;
  c12_emxArray_real_T *c12_idx;
  c12_emxArray_int32_T *c12_b_r;
  c12_emxArray_real_T *c12_x;
  c12_emxArray_real_T *c12_b_idx;
  int32_T c12_k;
  real_T c12_b_k;
  real_T c12_a;
  real_T c12_d;
  real_T c12_b_a;
  real_T c12_b_b;
  real_T c12_b_x;
  boolean_T c12_c_b;
  boolean_T c12_guard1 = false;
  boolean_T c12_guard2 = false;
  int32_T c12_i6;
  real_T c12_c_x;
  boolean_T c12_d_b;
  int32_T c12_d_loop_ub;
  int32_T c12_i7;
  int32_T c12_i8;
  real_T c12_d_x;
  real_T c12_e_x;
  real_T c12_c_a;
  real_T c12_b_d;
  int32_T c12_i9;
  real_T c12_d_a;
  real_T c12_e_a;
  real_T c12_e_b;
  real_T c12_f_b;
  real_T c12_f_a;
  real_T c12_f_x;
  real_T c12_g_b;
  int32_T c12_e_loop_ub;
  boolean_T c12_h_b;
  real_T c12_anew;
  int32_T c12_i10;
  real_T c12_g_x;
  int32_T c12_i11;
  real_T c12_ndbl;
  real_T c12_h_x;
  real_T c12_apnd;
  boolean_T c12_i_b;
  real_T c12_cdiff;
  int32_T c12_f_loop_ub;
  real_T c12_g_a;
  int32_T c12_i12;
  real_T c12_j_b;
  int32_T c12_i13;
  real_T c12_i_x;
  real_T c12_j_x;
  int32_T c12_i_size[1];
  real_T c12_k_x;
  real_T c12_l_x;
  int32_T c12_g_loop_ub;
  real_T c12_m_x;
  int32_T c12_i14;
  real_T c12_absa;
  real_T c12_n_x;
  int32_T c12_i15;
  real_T c12_i_data[12];
  real_T c12_o_x;
  real_T c12_h_a;
  real_T c12_i_a;
  real_T c12_p_x;
  real_T c12_k_b;
  real_T c12_c_d;
  real_T c12_absb;
  real_T c12_j_a;
  real_T c12_l_b;
  int32_T c12_h_loop_ub;
  real_T c12_k_a;
  real_T c12_c;
  real_T c12_b_anew;
  int32_T c12_i16;
  real_T c12_m_b;
  real_T c12_q_x;
  real_T c12_thresh;
  real_T c12_b_ndbl;
  real_T c12_r_x;
  real_T c12_s_x;
  boolean_T c12_n_b;
  real_T c12_t_x;
  real_T c12_b_apnd;
  real_T c12_u_x;
  real_T c12_b_cdiff;
  int32_T c12_i17;
  real_T c12_c_y;
  real_T c12_l_a;
  real_T c12_o_b;
  real_T c12_v_x;
  real_T c12_w_x;
  boolean_T c12_p_b;
  real_T c12_bnew;
  real_T c12_x_x;
  real_T c12_y_x;
  int32_T c12_i_loop_ub;
  boolean_T c12_n_too_large;
  real_T c12_b_absa;
  int32_T c12_i18;
  int32_T c12_i19;
  real_T c12_ab_x;
  real_T c12_bb_x;
  int32_T c12_n;
  real_T c12_cb_x;
  real_T c12_db_x;
  int32_T c12_j_loop_ub;
  real_T c12_eb_x;
  int32_T c12_i20;
  real_T c12_b_absb;
  boolean_T c12_p;
  int32_T c12_i21;
  int32_T c12_i22;
  real_T c12_b_c;
  real_T c12_m_a;
  const mxArray *c12_d_y = NULL;
  real_T c12_q_b;
  int32_T c12_i23;
  real_T c12_b_thresh;
  real_T c12_n_a;
  const mxArray *c12_e_y = NULL;
  real_T c12_fb_x;
  real_T c12_r_b;
  int32_T c12_k_loop_ub;
  real_T c12_gb_x;
  real_T c12_c_anew;
  int32_T c12_i24;
  int32_T c12_l_loop_ub;
  real_T c12_hb_x;
  real_T c12_ib_x;
  int32_T c12_i25;
  real_T c12_f_y;
  real_T c12_c_ndbl;
  real_T c12_d_d;
  real_T c12_c_apnd;
  int32_T c12_m_loop_ub;
  real_T c12_b_bnew;
  real_T c12_c_cdiff;
  int32_T c12_i26;
  int32_T c12_nm1;
  real_T c12_o_a;
  int32_T c12_p_a;
  boolean_T c12_b_n_too_large;
  real_T c12_s_b;
  int32_T c12_n_loop_ub;
  int32_T c12_tmp_data[12];
  int32_T c12_nm1d2;
  real_T c12_jb_x;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_b_n;
  real_T c12_kb_x;
  real_T c12_lb_x;
  int32_T c12_i29;
  int32_T c12_t_b;
  real_T c12_c_absa;
  int32_T c12_u_b;
  boolean_T c12_b_p;
  real_T c12_mb_x;
  real_T c12_nb_x;
  boolean_T c12_overflow;
  const mxArray *c12_g_y = NULL;
  real_T c12_ob_x;
  int32_T c12_i30;
  real_T c12_c_absb;
  int32_T c12_o_loop_ub;
  const mxArray *c12_h_y = NULL;
  int32_T c12_i31;
  real_T c12_c_c;
  int32_T c12_c_k;
  real_T c12_d1;
  real_T c12_c_thresh;
  int32_T c12_d_k;
  real_T c12_pb_x;
  int32_T c12_i32;
  int32_T c12_v_b;
  int32_T c12_e_k;
  real_T c12_qb_x;
  int32_T c12_i_y;
  real_T c12_kd;
  real_T c12_rb_x;
  int32_T c12_b_nm1;
  real_T c12_j_y;
  int32_T c12_q_a;
  int32_T c12_p_loop_ub;
  int32_T c12_b_nm1d2;
  int32_T c12_i33;
  int32_T c12_i34;
  real_T c12_c_bnew;
  int32_T c12_q_loop_ub;
  static real_T c12_B[20] = { -3.0, -3.0, -3.0, -3.0, -3.0, -3.0, -3.0, -3.0,
    -3.0, -3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0 };

  int32_T c12_w_b;
  boolean_T c12_c_n_too_large;
  int32_T c12_i35;
  int32_T c12_x_b;
  int32_T c12_c_n;
  int32_T c12_r_loop_ub;
  boolean_T c12_b_overflow;
  int32_T c12_i36;
  boolean_T c12_c_p;
  int32_T c12_f_k;
  const mxArray *c12_k_y = NULL;
  int32_T c12_i37;
  const mxArray *c12_l_y = NULL;
  int32_T c12_y_b;
  int32_T c12_g_k;
  int32_T c12_m_y;
  real_T c12_b_kd;
  int32_T c12_c_nm1;
  int32_T c12_r_a;
  int32_T c12_c_nm1d2;
  int32_T c12_i38;
  int32_T c12_ab_b;
  int32_T c12_bb_b;
  boolean_T c12_c_overflow;
  int32_T c12_h_k;
  int32_T c12_cb_b;
  int32_T c12_i_k;
  int32_T c12_n_y;
  real_T c12_c_kd;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_len[0] = 0.0;
  for (c12_i = 0; c12_i < 2; c12_i++) {
    c12_b_i = (real_T)c12_i + 1.0;
    c12_maxNegD[(int32_T)c12_b_i - 1] = muDoubleScalarMax(1.0, 1.0 - (-1.0 + 2.0
      * (real_T)((int32_T)c12_b_i - 1)));
    c12_minAdjustedDim[(int32_T)c12_b_i - 1] = muDoubleScalarMin(10.0, 10.0 -
      (-1.0 + 2.0 * (real_T)((int32_T)c12_b_i - 1)));
    c12_maxIndex = c12_minAdjustedDim[(int32_T)c12_b_i - 1];
    c12_maxIndex += -1.0 + 2.0 * (real_T)((int32_T)c12_b_i - 1);
    if (c12_maxIndex > 10.0) {
      c12_b = true;
    } else {
      c12_b = false;
    }

    if (c12_b) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv, 10, 0U, 1U, 0U, 2, 1,
        36), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_b_y)));
    }

    c12_len[(int32_T)(c12_b_i + 1.0) - 1] = ((c12_len[(int32_T)c12_b_i - 1] +
      c12_minAdjustedDim[(int32_T)c12_b_i - 1]) - c12_maxNegD[(int32_T)c12_b_i -
      1]) + 1.0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aRows, 1, &c12_j_emlrtRTEI);
  c12_dataLen = c12_len[2];
  c12_c_i = c12_aRows->size[0];
  c12_aRows->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_vd_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aRows, c12_c_i,
    &c12_j_emlrtRTEI);
  c12_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_aRows->data[c12_i1] = 0;
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_aCols, 1, &c12_k_emlrtRTEI);
  c12_i2 = c12_aCols->size[0];
  c12_aCols->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_ud_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_aCols, c12_i2,
    &c12_k_emlrtRTEI);
  c12_b_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_aCols->data[c12_i3] = 0;
  }

  c12_emxInit_real_T(chartInstance, c12_sp, &c12_aDat, 1, &c12_x_emlrtRTEI);
  c12_i4 = c12_aDat->size[0];
  c12_aDat->size[0] = (int32_T)c12_dataLen;
  c12_st.site = &c12_yd_emlrtRSI;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_aDat, c12_i4,
    &c12_l_emlrtRTEI);
  c12_c_loop_ub = (int32_T)c12_dataLen - 1;
  for (c12_i5 = 0; c12_i5 <= c12_c_loop_ub; c12_i5++) {
    c12_aDat->data[c12_i5] = 0.0;
  }

  c12_emxInit_real_T1(chartInstance, c12_sp, &c12_idx, 2, &c12_p_emlrtRTEI);
  c12_emxInit_int32_T1(chartInstance, c12_sp, &c12_b_r, 2, &c12_y_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_x, 1, &c12_v_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_b_idx, 1, &c12_n_emlrtRTEI);
  for (c12_k = 0; c12_k < 2; c12_k++) {
    c12_b_k = (real_T)c12_k + 1.0;
    c12_st.site = &c12_n_emlrtRSI;
    c12_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_b_a = c12_a;
    c12_b_b = c12_d;
    if (c12_b_b < c12_b_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_b_x = c12_b_a;
      c12_c_b = muDoubleScalarIsInf(c12_b_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_c_b) {
        c12_guard2 = true;
      } else {
        c12_c_x = c12_b_b;
        c12_d_b = muDoubleScalarIsInf(c12_c_x);
        if (c12_d_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_b_a == c12_b_b) {
          c12_i8 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i8, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_d_x = c12_b_a;
        c12_e_x = c12_d_x;
        c12_e_x = muDoubleScalarFloor(c12_e_x);
        if (c12_e_x == c12_b_a) {
          c12_i9 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i9, &c12_m_emlrtRTEI);
          c12_e_loop_ub = (int32_T)muDoubleScalarFloor(c12_b_b - c12_b_a);
          for (c12_i10 = 0; c12_i10 <= c12_e_loop_ub; c12_i10++) {
            c12_idx->data[c12_i10] = c12_b_a + (real_T)c12_i10;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_e_a = c12_b_a;
          c12_f_b = c12_b_b;
          c12_f_a = c12_e_a;
          c12_g_b = c12_f_b;
          c12_anew = c12_f_a;
          c12_g_x = (c12_g_b - c12_f_a) + 0.5;
          c12_ndbl = c12_g_x;
          c12_ndbl = muDoubleScalarFloor(c12_ndbl);
          c12_apnd = c12_f_a + c12_ndbl;
          c12_cdiff = c12_apnd - c12_g_b;
          c12_g_a = c12_f_a;
          c12_j_b = c12_g_b;
          c12_i_x = c12_g_a;
          c12_k_x = c12_i_x;
          c12_m_x = c12_k_x;
          c12_absa = muDoubleScalarAbs(c12_m_x);
          c12_n_x = c12_j_b;
          c12_o_x = c12_n_x;
          c12_p_x = c12_o_x;
          c12_absb = muDoubleScalarAbs(c12_p_x);
          if (c12_absa > c12_absb) {
            c12_c = c12_absa;
          } else {
            c12_c = c12_absb;
          }

          c12_thresh = 4.4408920985006262E-16 * c12_c;
          c12_s_x = c12_cdiff;
          c12_t_x = c12_s_x;
          c12_u_x = c12_t_x;
          c12_c_y = muDoubleScalarAbs(c12_u_x);
          if (c12_c_y < c12_thresh) {
            c12_ndbl++;
            c12_bnew = c12_g_b;
          } else if (c12_cdiff > 0.0) {
            c12_bnew = c12_f_a + (c12_ndbl - 1.0);
          } else {
            c12_ndbl++;
            c12_bnew = c12_apnd;
          }

          c12_n_too_large = (c12_ndbl > 2.147483647E+9);
          if (c12_ndbl >= 0.0) {
            c12_n = (int32_T)muDoubleScalarFloor(c12_ndbl);
          } else {
            c12_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_p = !c12_n_too_large;
          if (!c12_p) {
            c12_d_y = NULL;
            sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_e_y = NULL;
            sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_e_y)));
          }

          c12_i23 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i23, &c12_r_emlrtRTEI);
          if (c12_n > 0) {
            c12_idx->data[0] = c12_anew;
            if (c12_n > 1) {
              c12_idx->data[c12_n - 1] = c12_bnew;
              c12_nm1 = c12_n - 1;
              c12_p_a = c12_nm1;
              c12_nm1d2 = c12_div_nzp_s32(chartInstance, c12_p_a, 2, 0, 1U, 0, 0);
              c12_i28 = c12_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_t_b = c12_i28 + 1;
              c12_u_b = c12_t_b;
              if (1 > c12_u_b) {
                c12_overflow = false;
              } else {
                c12_overflow = (c12_u_b > 2147483646);
              }

              if (c12_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_c_k = 1; c12_c_k - 1 <= c12_i28; c12_c_k++) {
                c12_e_k = c12_c_k;
                c12_kd = (real_T)c12_e_k;
                c12_idx->data[c12_e_k] = c12_anew + c12_kd;
                c12_idx->data[(c12_n - c12_e_k) - 1] = c12_bnew - c12_kd;
              }

              c12_v_b = c12_nm1d2;
              c12_i_y = c12_v_b << 1;
              if (c12_i_y == c12_nm1) {
                c12_idx->data[c12_nm1d2] = (c12_anew + c12_bnew) / 2.0;
              } else {
                c12_kd = (real_T)c12_nm1d2;
                c12_idx->data[c12_nm1d2] = c12_anew + c12_kd;
                c12_idx->data[c12_nm1d2 + 1] = c12_bnew - c12_kd;
              }
            }
          }
        }
      }
    }

    c12_i6 = c12_x->size[0];
    c12_x->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i6,
      &c12_n_emlrtRTEI);
    c12_d_loop_ub = c12_idx->size[1] - 1;
    for (c12_i7 = 0; c12_i7 <= c12_d_loop_ub; c12_i7++) {
      c12_x->data[c12_i7] = c12_idx->data[c12_i7];
    }

    c12_st.site = &c12_n_emlrtRSI;
    c12_c_a = c12_maxNegD[(int32_T)c12_b_k - 1];
    c12_b_d = c12_minAdjustedDim[(int32_T)c12_b_k - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_d_a = c12_c_a;
    c12_e_b = c12_b_d;
    if (c12_e_b < c12_d_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_f_x = c12_d_a;
      c12_h_b = muDoubleScalarIsInf(c12_f_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_h_b) {
        c12_guard2 = true;
      } else {
        c12_h_x = c12_e_b;
        c12_i_b = muDoubleScalarIsInf(c12_h_x);
        if (c12_i_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_d_a == c12_e_b) {
          c12_i13 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i13, &c12_m_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_j_x = c12_d_a;
        c12_l_x = c12_j_x;
        c12_l_x = muDoubleScalarFloor(c12_l_x);
        if (c12_l_x == c12_d_a) {
          c12_i15 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i15, &c12_m_emlrtRTEI);
          c12_h_loop_ub = (int32_T)muDoubleScalarFloor(c12_e_b - c12_d_a);
          for (c12_i16 = 0; c12_i16 <= c12_h_loop_ub; c12_i16++) {
            c12_idx->data[c12_i16] = c12_d_a + (real_T)c12_i16;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_h_a = c12_d_a;
          c12_k_b = c12_e_b;
          c12_j_a = c12_h_a;
          c12_l_b = c12_k_b;
          c12_b_anew = c12_j_a;
          c12_q_x = (c12_l_b - c12_j_a) + 0.5;
          c12_b_ndbl = c12_q_x;
          c12_b_ndbl = muDoubleScalarFloor(c12_b_ndbl);
          c12_b_apnd = c12_j_a + c12_b_ndbl;
          c12_b_cdiff = c12_b_apnd - c12_l_b;
          c12_l_a = c12_j_a;
          c12_o_b = c12_l_b;
          c12_w_x = c12_l_a;
          c12_x_x = c12_w_x;
          c12_y_x = c12_x_x;
          c12_b_absa = muDoubleScalarAbs(c12_y_x);
          c12_ab_x = c12_o_b;
          c12_cb_x = c12_ab_x;
          c12_eb_x = c12_cb_x;
          c12_b_absb = muDoubleScalarAbs(c12_eb_x);
          if (c12_b_absa > c12_b_absb) {
            c12_b_c = c12_b_absa;
          } else {
            c12_b_c = c12_b_absb;
          }

          c12_b_thresh = 4.4408920985006262E-16 * c12_b_c;
          c12_fb_x = c12_b_cdiff;
          c12_gb_x = c12_fb_x;
          c12_hb_x = c12_gb_x;
          c12_f_y = muDoubleScalarAbs(c12_hb_x);
          if (c12_f_y < c12_b_thresh) {
            c12_b_ndbl++;
            c12_b_bnew = c12_l_b;
          } else if (c12_b_cdiff > 0.0) {
            c12_b_bnew = c12_j_a + (c12_b_ndbl - 1.0);
          } else {
            c12_b_ndbl++;
            c12_b_bnew = c12_b_apnd;
          }

          c12_b_n_too_large = (c12_b_ndbl > 2.147483647E+9);
          if (c12_b_ndbl >= 0.0) {
            c12_b_n = (int32_T)muDoubleScalarFloor(c12_b_ndbl);
          } else {
            c12_b_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_b_p = !c12_b_n_too_large;
          if (!c12_b_p) {
            c12_g_y = NULL;
            sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_h_y = NULL;
            sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_g_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_h_y)));
          }

          c12_i30 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_b_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i30, &c12_r_emlrtRTEI);
          if (c12_b_n > 0) {
            c12_idx->data[0] = c12_b_anew;
            if (c12_b_n > 1) {
              c12_idx->data[c12_b_n - 1] = c12_b_bnew;
              c12_b_nm1 = c12_b_n - 1;
              c12_q_a = c12_b_nm1;
              c12_b_nm1d2 = c12_div_nzp_s32(chartInstance, c12_q_a, 2, 0, 1U, 0,
                0);
              c12_i34 = c12_b_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_w_b = c12_i34 + 1;
              c12_x_b = c12_w_b;
              if (1 > c12_x_b) {
                c12_b_overflow = false;
              } else {
                c12_b_overflow = (c12_x_b > 2147483646);
              }

              if (c12_b_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_f_k = 1; c12_f_k - 1 <= c12_i34; c12_f_k++) {
                c12_g_k = c12_f_k;
                c12_b_kd = (real_T)c12_g_k;
                c12_idx->data[c12_g_k] = c12_b_anew + c12_b_kd;
                c12_idx->data[(c12_b_n - c12_g_k) - 1] = c12_b_bnew - c12_b_kd;
              }

              c12_y_b = c12_b_nm1d2;
              c12_m_y = c12_y_b << 1;
              if (c12_m_y == c12_b_nm1) {
                c12_idx->data[c12_b_nm1d2] = (c12_b_anew + c12_b_bnew) / 2.0;
              } else {
                c12_b_kd = (real_T)c12_b_nm1d2;
                c12_idx->data[c12_b_nm1d2] = c12_b_anew + c12_b_kd;
                c12_idx->data[c12_b_nm1d2 + 1] = c12_b_bnew - c12_b_kd;
              }
            }
          }
        }
      }
    }

    c12_i11 = c12_b_idx->size[0];
    c12_b_idx->size[0] = c12_idx->size[1];
    c12_st.site = &c12_n_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_b_idx, c12_i11,
      &c12_n_emlrtRTEI);
    c12_f_loop_ub = c12_idx->size[1] - 1;
    for (c12_i12 = 0; c12_i12 <= c12_f_loop_ub; c12_i12++) {
      c12_b_idx->data[c12_i12] = c12_idx->data[c12_i12];
    }

    c12_i_size[0] = c12_x->size[0];
    c12_g_loop_ub = c12_x->size[0] - 1;
    for (c12_i14 = 0; c12_i14 <= c12_g_loop_ub; c12_i14++) {
      c12_i_data[c12_i14] = c12_b_idx->data[c12_i14];
    }

    c12_st.site = &c12_p_emlrtRSI;
    c12_i_a = c12_len[(int32_T)c12_b_k - 1] + 1.0;
    c12_c_d = c12_len[(int32_T)(c12_b_k + 1.0) - 1];
    c12_b_st.site = &c12_q_emlrtRSI;
    c12_k_a = c12_i_a;
    c12_m_b = c12_c_d;
    if (c12_m_b < c12_k_a) {
      c12_idx->size[0] = 1;
      c12_idx->size[1] = 0;
    } else {
      c12_r_x = c12_k_a;
      c12_n_b = muDoubleScalarIsInf(c12_r_x);
      c12_guard1 = false;
      c12_guard2 = false;
      if (c12_n_b) {
        c12_guard2 = true;
      } else {
        c12_v_x = c12_m_b;
        c12_p_b = muDoubleScalarIsInf(c12_v_x);
        if (c12_p_b) {
          c12_guard2 = true;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard2) {
        if (c12_k_a == c12_m_b) {
          c12_i18 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i18, &c12_p_emlrtRTEI);
          c12_idx->data[0] = rtNaN;
        } else {
          c12_guard1 = true;
        }
      }

      if (c12_guard1) {
        c12_bb_x = c12_k_a;
        c12_db_x = c12_bb_x;
        c12_db_x = muDoubleScalarFloor(c12_db_x);
        if (c12_db_x == c12_k_a) {
          c12_i21 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a) + 1;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_b_st, c12_idx,
            c12_i21, &c12_p_emlrtRTEI);
          c12_k_loop_ub = (int32_T)muDoubleScalarFloor(c12_m_b - c12_k_a);
          for (c12_i24 = 0; c12_i24 <= c12_k_loop_ub; c12_i24++) {
            c12_idx->data[c12_i24] = c12_k_a + (real_T)c12_i24;
          }
        } else {
          c12_c_st.site = &c12_r_emlrtRSI;
          c12_m_a = c12_k_a;
          c12_q_b = c12_m_b;
          c12_n_a = c12_m_a;
          c12_r_b = c12_q_b;
          c12_c_anew = c12_n_a;
          c12_ib_x = (c12_r_b - c12_n_a) + 0.5;
          c12_c_ndbl = c12_ib_x;
          c12_c_ndbl = muDoubleScalarFloor(c12_c_ndbl);
          c12_c_apnd = c12_n_a + c12_c_ndbl;
          c12_c_cdiff = c12_c_apnd - c12_r_b;
          c12_o_a = c12_n_a;
          c12_s_b = c12_r_b;
          c12_jb_x = c12_o_a;
          c12_kb_x = c12_jb_x;
          c12_lb_x = c12_kb_x;
          c12_c_absa = muDoubleScalarAbs(c12_lb_x);
          c12_mb_x = c12_s_b;
          c12_nb_x = c12_mb_x;
          c12_ob_x = c12_nb_x;
          c12_c_absb = muDoubleScalarAbs(c12_ob_x);
          if (c12_c_absa > c12_c_absb) {
            c12_c_c = c12_c_absa;
          } else {
            c12_c_c = c12_c_absb;
          }

          c12_c_thresh = 4.4408920985006262E-16 * c12_c_c;
          c12_pb_x = c12_c_cdiff;
          c12_qb_x = c12_pb_x;
          c12_rb_x = c12_qb_x;
          c12_j_y = muDoubleScalarAbs(c12_rb_x);
          if (c12_j_y < c12_c_thresh) {
            c12_c_ndbl++;
            c12_c_bnew = c12_r_b;
          } else if (c12_c_cdiff > 0.0) {
            c12_c_bnew = c12_n_a + (c12_c_ndbl - 1.0);
          } else {
            c12_c_ndbl++;
            c12_c_bnew = c12_c_apnd;
          }

          c12_c_n_too_large = (c12_c_ndbl > 2.147483647E+9);
          if (c12_c_ndbl >= 0.0) {
            c12_c_n = (int32_T)muDoubleScalarFloor(c12_c_ndbl);
          } else {
            c12_c_n = 0;
          }

          c12_d_st.site = &c12_s_emlrtRSI;
          c12_c_p = !c12_c_n_too_large;
          if (!c12_c_p) {
            c12_k_y = NULL;
            sf_mex_assign(&c12_k_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            c12_l_y = NULL;
            sf_mex_assign(&c12_l_y, sf_mex_create("y", c12_cv1, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_k_y, 14, sf_mex_call
                        (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call
                         (&c12_d_st, "message", 1U, 1U, 14, c12_l_y)));
          }

          c12_i37 = c12_idx->size[0] * c12_idx->size[1];
          c12_idx->size[0] = 1;
          c12_idx->size[1] = c12_c_n;
          c12_emxEnsureCapacity_real_T1(chartInstance, &c12_c_st, c12_idx,
            c12_i37, &c12_r_emlrtRTEI);
          if (c12_c_n > 0) {
            c12_idx->data[0] = c12_c_anew;
            if (c12_c_n > 1) {
              c12_idx->data[c12_c_n - 1] = c12_c_bnew;
              c12_c_nm1 = c12_c_n - 1;
              c12_r_a = c12_c_nm1;
              c12_c_nm1d2 = c12_div_nzp_s32(chartInstance, c12_r_a, 2, 0, 1U, 0,
                0);
              c12_i38 = c12_c_nm1d2 - 2;
              c12_d_st.site = &c12_t_emlrtRSI;
              c12_ab_b = c12_i38 + 1;
              c12_bb_b = c12_ab_b;
              if (1 > c12_bb_b) {
                c12_c_overflow = false;
              } else {
                c12_c_overflow = (c12_bb_b > 2147483646);
              }

              if (c12_c_overflow) {
                c12_e_st.site = &c12_u_emlrtRSI;
                c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
              }

              for (c12_h_k = 1; c12_h_k - 1 <= c12_i38; c12_h_k++) {
                c12_i_k = c12_h_k;
                c12_c_kd = (real_T)c12_i_k;
                c12_idx->data[c12_i_k] = c12_c_anew + c12_c_kd;
                c12_idx->data[(c12_c_n - c12_i_k) - 1] = c12_c_bnew - c12_c_kd;
              }

              c12_cb_b = c12_c_nm1d2;
              c12_n_y = c12_cb_b << 1;
              if (c12_n_y == c12_c_nm1) {
                c12_idx->data[c12_c_nm1d2] = (c12_c_anew + c12_c_bnew) / 2.0;
              } else {
                c12_c_kd = (real_T)c12_c_nm1d2;
                c12_idx->data[c12_c_nm1d2] = c12_c_anew + c12_c_kd;
                c12_idx->data[c12_c_nm1d2 + 1] = c12_c_bnew - c12_c_kd;
              }
            }
          }
        }
      }
    }

    c12_i17 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_be_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i17,
      &c12_q_emlrtRTEI);
    c12_i_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
      c12_b_r->data[c12_i19] = (int32_T)c12_idx->data[c12_i19];
    }

    c12_j_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i20 = 0; c12_i20 <= c12_j_loop_ub; c12_i20++) {
      c12_aRows->data[c12_b_r->data[c12_i20] - 1] = (int32_T)c12_i_data[c12_i20];
    }

    c12_i22 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_ae_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i22,
      &c12_s_emlrtRTEI);
    c12_l_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i25 = 0; c12_i25 <= c12_l_loop_ub; c12_i25++) {
      c12_b_r->data[c12_i25] = (int32_T)c12_idx->data[c12_i25];
    }

    c12_d_d = -1.0 + 2.0 * (real_T)((int32_T)c12_b_k - 1);
    c12_m_loop_ub = c12_i_size[0] - 1;
    for (c12_i26 = 0; c12_i26 <= c12_m_loop_ub; c12_i26++) {
      c12_tmp_data[c12_i26] = (int32_T)(c12_i_data[c12_i26] + c12_d_d);
    }

    c12_n_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i27 = 0; c12_i27 <= c12_n_loop_ub; c12_i27++) {
      c12_aCols->data[c12_b_r->data[c12_i27] - 1] = c12_tmp_data[c12_i27];
    }

    c12_i29 = c12_b_r->size[0] * c12_b_r->size[1];
    c12_b_r->size[0] = 1;
    c12_b_r->size[1] = c12_idx->size[1];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_int32_T1(chartInstance, &c12_st, c12_b_r, c12_i29,
      &c12_u_emlrtRTEI);
    c12_o_loop_ub = c12_idx->size[0] * c12_idx->size[1] - 1;
    for (c12_i31 = 0; c12_i31 <= c12_o_loop_ub; c12_i31++) {
      c12_b_r->data[c12_i31] = (int32_T)c12_idx->data[c12_i31];
    }

    c12_d1 = -1.0 + 2.0 * (real_T)((int32_T)c12_b_k - 1);
    c12_d_k = (int32_T)c12_b_k - 1;
    c12_i32 = c12_x->size[0];
    c12_x->size[0] = c12_i_size[0];
    c12_st.site = &c12_xd_emlrtRSI;
    c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_x, c12_i32,
      &c12_v_emlrtRTEI);
    c12_p_loop_ub = c12_i_size[0] - 1;
    for (c12_i33 = 0; c12_i33 <= c12_p_loop_ub; c12_i33++) {
      c12_x->data[c12_i33] = c12_B[((int32_T)(c12_i_data[c12_i33] + c12_d1) + 10
        * c12_d_k) - 1];
    }

    c12_q_loop_ub = c12_x->size[0] - 1;
    for (c12_i35 = 0; c12_i35 <= c12_q_loop_ub; c12_i35++) {
      c12_i_data[c12_i35] = c12_x->data[c12_i35];
    }

    c12_r_loop_ub = c12_b_r->size[0] * c12_b_r->size[1] - 1;
    for (c12_i36 = 0; c12_i36 <= c12_r_loop_ub; c12_i36++) {
      c12_aDat->data[c12_b_r->data[c12_i36] - 1] = c12_i_data[c12_i36];
    }
  }

  c12_emxFree_real_T(chartInstance, &c12_b_idx);
  c12_emxFree_real_T(chartInstance, &c12_x);
  c12_emxFree_int32_T(chartInstance, &c12_b_r);
  c12_emxFree_real_T(chartInstance, &c12_idx);
  c12_st.site = &c12_o_emlrtRSI;
  c12_b_sparse(chartInstance, &c12_st, c12_aRows, c12_aCols, c12_aDat, c12_res1);
  c12_emxFree_real_T(chartInstance, &c12_aDat);
  c12_emxFree_int32_T(chartInstance, &c12_aCols);
  c12_emxFree_int32_T(chartInstance, &c12_aRows);
}

static void c12_c_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this)
{
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_pb_emlrtRTEI);
  c12_g_sparse_parenAssign(chartInstance, c12_sp, c12_b_this);
}

static void c12_b_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs, c12_coder_internal_sparse *c12_b_this)
{
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_qb_emlrtRTEI);
  c12_d_realloc(chartInstance, c12_sp, c12_b_this, c12_numAllocRequested,
                c12_ub1, c12_lb2, c12_ub2, c12_offs);
}

static void c12_d_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_coder_internal_sparse *c12_b_this)
{
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_pb_emlrtRTEI);
  c12_h_sparse_parenAssign(chartInstance, c12_sp, c12_b_this);
}

static void c12_c_sparse_validateNumericIndex(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp)
{
  int32_T c12_k;
  real_T c12_b_k;
  real_T c12_idxk;
  real_T c12_x;
  real_T c12_b_x;
  boolean_T c12_b;
  real_T c12_c_x;
  boolean_T c12_b_b;
  const mxArray *c12_y = NULL;
  const mxArray *c12_b_y = NULL;
  (void)chartInstance;
  for (c12_k = 0; c12_k < 3; c12_k++) {
    c12_b_k = (real_T)c12_k + 1.0;
    c12_idxk = 8.0 + (real_T)((int32_T)c12_b_k - 1);
    c12_x = c12_idxk;
    c12_b_x = c12_x;
    c12_b_x = muDoubleScalarFloor(c12_b_x);
    if (c12_b_x == c12_idxk) {
      c12_c_x = c12_idxk;
      c12_b_b = muDoubleScalarIsInf(c12_c_x);
      if (!c12_b_b) {
        c12_b = true;
      } else {
        c12_b = false;
      }
    } else {
      c12_b = false;
    }

    if (!c12_b) {
      c12_y = NULL;
      sf_mex_assign(&c12_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1, 25),
                    false);
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      sf_mex_call(c12_sp, "error", 0U, 2U, 14, c12_y, 14, sf_mex_call(c12_sp,
        "getString", 1U, 1U, 14, sf_mex_call(c12_sp, "message", 1U, 1U, 14,
        c12_b_y)));
    }
  }
}

static void c12_b_sparse_mldivide(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_y)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  emlrtStack c12_f_st;
  emlrtStack c12_g_st;
  c12_coder_internal_sparse c12_b_A;
  c12_coder_internal_sparse c12_b_b;
  int32_T c12_n;
  cs_di* c12_cxA;
  cs_dis * c12_S;
  cs_din * c12_N;
  c12_coder_internal_sparse c12_s;
  c12_emxArray_int32_T *c12_b_y;
  c12_emxArray_real_T *c12_c_y;
  int32_T c12_i;
  int32_T c12_b_i;
  int32_T c12_varargin_2;
  int32_T c12_c;
  int32_T c12_b_c;
  int32_T c12_idx;
  int32_T c12_x;
  int32_T c12_b_x;
  boolean_T c12_c_b;
  const mxArray *c12_d_y = NULL;
  int32_T c12_nd;
  const mxArray *c12_e_y = NULL;
  boolean_T c12_b1;
  const mxArray *c12_f_y = NULL;
  const mxArray *c12_g_y = NULL;
  int32_T c12_outIdx;
  int32_T c12_colstart;
  real_T c12_tmp[10];
  int32_T c12_colend;
  int32_T c12_colNnz;
  int32_T c12_b_varargin_2;
  int32_T c12_d_b;
  int32_T c12_e_b;
  int32_T c12_c_c;
  boolean_T c12_overflow;
  int32_T c12_d_c;
  int32_T c12_b_idx;
  int32_T c12_c_x;
  int32_T c12_k;
  int32_T c12_d_x;
  boolean_T c12_b2;
  int32_T c12_b_k;
  const mxArray *c12_h_y = NULL;
  int32_T c12_b_n;
  real_T c12_c_n;
  const mxArray *c12_i_y = NULL;
  int32_T c12_nz;
  int32_T c12_nzColAlloc;
  int32_T c12_c_idx;
  int32_T c12_c_i;
  real_T c12_b_tmp[10];
  int32_T c12_nzRhs;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  int32_T c12_extraCol;
  int32_T c12_b_outIdx;
  real_T c12_d_n;
  int32_T c12_extraSpace;
  int32_T c12_numAlloc;
  int32_T c12_extraAlloc;
  int32_T c12_start;
  int32_T c12_outstart;
  int32_T c12_num2Alloc;
  int32_T c12_instart;
  int32_T c12_b_outstart;
  int32_T c12_nelem;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_col;
  int32_T c12_i1;
  int32_T c12_offs;
  int32_T c12_i2;
  int32_T c12_b_col;
  int32_T c12_i3;
  int32_T c12_b_offs;
  int32_T c12_c_k;
  int32_T c12_loop_ub;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_d_k;
  int32_T c12_i6;
  int32_T c12_c_outstart;
  int32_T c12_c_instart;
  int32_T c12_d_outstart;
  int32_T c12_c_nelem;
  int32_T c12_d_instart;
  int32_T c12_i7;
  int32_T c12_d_nelem;
  int32_T c12_i8;
  int32_T c12_c_loop_ub;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_e_loop_ub;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_e_outstart;
  int32_T c12_e_instart;
  int32_T c12_f_outstart;
  int32_T c12_e_nelem;
  int32_T c12_f_instart;
  int32_T c12_i15;
  int32_T c12_f_nelem;
  int32_T c12_i16;
  int32_T c12_g_loop_ub;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_f_st.prev = &c12_e_st;
  c12_f_st.tls = c12_e_st.tls;
  c12_g_st.prev = &c12_f_st;
  c12_g_st.tls = c12_f_st.tls;
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_b_A,
    &c12_rb_emlrtRTEI);
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_b_b,
    &c12_sb_emlrtRTEI);
  c12_st.site = &c12_mc_emlrtRSI;
  c12_b_st.site = &c12_nc_emlrtRSI;
  c12_c_st.site = &c12_oc_emlrtRSI;
  c12_d_st.site = &c12_uc_emlrtRSI;
  c12_n = c12_A.colidx->data[c12_A.colidx->size[0] - 1];
  c12_cxA = makeCXSparseMatrix(c12_n - 1, 10, 10, &c12_A.colidx->data[0],
    &c12_A.rowidx->data[0], &c12_A.d->data[0]);
  c12_S = cs_di_sqr(2, c12_cxA, 0);
  c12_N = cs_di_lu(c12_cxA, c12_S, 1);
  cs_di_spfree(c12_cxA);
  if (c12_N == NULL) {
    c12_c_st.site = &c12_pc_emlrtRSI;
    c12_warning(chartInstance, &c12_c_st);
    cs_di_sfree(c12_S);
    cs_di_nfree(c12_N);
    c12_emxCopyStruct_coder_internal_sp(chartInstance, &c12_b_st, &c12_b_A,
      &c12_A, &c12_rb_emlrtRTEI);
    c12_emxCopyStruct_coder_internal_sp(chartInstance, &c12_b_st, &c12_b_b,
      &c12_b, &c12_sb_emlrtRTEI);
    c12_c_st.site = &c12_qc_emlrtRSI;
    c12_b_CXSparseAPI_iteratedQR(chartInstance, &c12_c_st, c12_b_A, c12_b_b,
      c12_y);
  } else {
    c12_c_st.site = &c12_rc_emlrtRSI;
    c12_c_sparse_spallocLike(chartInstance, &c12_c_st, c12_y);
    c12_emxInitStruct_coder_internal_sp(chartInstance, &c12_b_st, &c12_s,
      &c12_ub_emlrtRTEI);
    c12_emxInit_int32_T(chartInstance, &c12_b_st, &c12_b_y, 1, &c12_b_emlrtRTEI);
    c12_emxInit_real_T(chartInstance, &c12_b_st, &c12_c_y, 1, &c12_d_emlrtRTEI);
    for (c12_i = 0; c12_i < 10; c12_i++) {
      c12_b_i = c12_i + 1;
      c12_c_st.site = &c12_sc_emlrtRSI;
      c12_varargin_2 = c12_b_i;
      c12_d_st.site = &c12_bd_emlrtRSI;
      c12_c = c12_varargin_2;
      c12_e_st.site = &c12_cd_emlrtRSI;
      c12_b_c = c12_c;
      c12_f_st.site = &c12_dd_emlrtRSI;
      c12_idx = c12_b_c;
      c12_x = c12_idx;
      c12_b_x = c12_x;
      if (c12_b_x == c12_idx) {
        c12_c_b = true;
      } else {
        c12_c_b = false;
      }

      if (!c12_c_b) {
        c12_d_y = NULL;
        sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c12_e_y = NULL;
        sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c12_f_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call
                    (&c12_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_f_st,
          "message", 1U, 1U, 14, c12_e_y)));
      }

      c12_nd = c12_b.colidx->data[c12_b_c] - c12_b.colidx->data[c12_b_c - 1];
      if (c12_nd <= 10) {
        c12_b1 = true;
      } else {
        c12_b1 = false;
      }

      if (!c12_b1) {
        c12_f_y = NULL;
        sf_mex_assign(&c12_f_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c12_g_y = NULL;
        sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c12_e_st, "error", 0U, 2U, 14, c12_f_y, 14, sf_mex_call
                    (&c12_e_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_e_st,
          "message", 1U, 1U, 14, c12_g_y)));
      }

      c12_f_st.site = &c12_ed_emlrtRSI;
      c12_b_sparse_spallocLike(chartInstance, &c12_f_st, c12_nd, &c12_s);
      if (c12_nd != 0) {
        c12_outIdx = 0;
        c12_colstart = c12_b.colidx->data[c12_b_c - 1] - 2;
        c12_colend = c12_b.colidx->data[c12_b_c];
        c12_colNnz = (c12_colend - c12_colstart) - 2;
        c12_f_st.site = &c12_fd_emlrtRSI;
        c12_d_b = c12_colNnz;
        c12_e_b = c12_d_b;
        if (1 > c12_e_b) {
          c12_overflow = false;
        } else {
          c12_overflow = (c12_e_b > 2147483646);
        }

        if (c12_overflow) {
          c12_g_st.site = &c12_u_emlrtRSI;
          c12_check_forloop_overflow_error(chartInstance, &c12_g_st);
        }

        for (c12_k = 1; c12_k - 1 < c12_colNnz; c12_k++) {
          c12_b_k = c12_k;
          c12_s.d->data[c12_outIdx] = c12_b.d->data[c12_colstart + c12_b_k];
          c12_s.rowidx->data[c12_outIdx] = c12_b.rowidx->data[c12_colstart +
            c12_b_k];
          c12_outIdx++;
        }

        c12_s.colidx->data[1] = c12_s.colidx->data[0] + c12_colNnz;
      }

      c12_c_st.site = &c12_sc_emlrtRSI;
      c12_b_sparse_full(chartInstance, &c12_c_st, c12_s, c12_tmp);
      solve_from_lu_di(c12_N, c12_S, (double *)&c12_tmp[0], 10);
      c12_c_st.site = &c12_tc_emlrtRSI;
      c12_b_varargin_2 = c12_b_i;
      c12_d_st.site = &c12_bc_emlrtRSI;
      c12_c_c = c12_b_varargin_2;
      c12_e_st.site = &c12_jd_emlrtRSI;
      c12_d_c = c12_c_c;
      c12_f_st.site = &c12_kd_emlrtRSI;
      c12_b_idx = c12_d_c;
      c12_c_x = c12_b_idx;
      c12_d_x = c12_c_x;
      if (c12_d_x == c12_b_idx) {
        c12_b2 = true;
      } else {
        c12_b2 = false;
      }

      if (!c12_b2) {
        c12_h_y = NULL;
        sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        c12_i_y = NULL;
        sf_mex_assign(&c12_i_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call(&c12_f_st, "error", 0U, 2U, 14, c12_h_y, 14, sf_mex_call
                    (&c12_f_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_f_st,
          "message", 1U, 1U, 14, c12_i_y)));
      }

      c12_b_n = c12_y->colidx->data[c12_y->colidx->size[0] - 1];
      c12_c_n = (real_T)(c12_b_n - 1);
      c12_nz = (int32_T)c12_c_n;
      c12_nzColAlloc = c12_y->colidx->data[c12_d_c] - c12_y->colidx->
        data[c12_d_c - 1];
      c12_c_idx = c12_y->colidx->data[c12_d_c - 1];
      for (c12_c_i = 0; c12_c_i < 10; c12_c_i++) {
        c12_b_tmp[c12_c_i] = c12_tmp[c12_c_i];
      }

      c12_f_st.site = &c12_ld_emlrtRSI;
      c12_nzRhs = c12_b_countNumnzInColumn(chartInstance, c12_b_tmp, c12_r);
      if (c12_nzColAlloc < c12_nzRhs) {
        c12_extraCol = c12_nzRhs - c12_nzColAlloc;
        c12_d_n = (real_T)c12_y->maxnz;
        c12_numAlloc = (int32_T)c12_d_n;
        c12_extraAlloc = c12_numAlloc - c12_nz;
        c12_start = c12_y->colidx->data[c12_d_c];
        if (c12_extraAlloc < c12_extraCol) {
          c12_num2Alloc = c12_extraCol - c12_extraAlloc;
          c12_f_st.site = &c12_md_emlrtRSI;
          c12_d_realloc(chartInstance, &c12_f_st, c12_y, c12_numAlloc +
                        c12_num2Alloc, c12_c_idx - 1, c12_start, c12_nz,
                        c12_extraCol);
        } else {
          c12_f_st.site = &c12_nd_emlrtRSI;
          c12_b_outstart = c12_start + c12_extraCol;
          c12_b_instart = c12_start;
          c12_b_nelem = (c12_nz - c12_start) + 1;
          if (!(c12_b_nelem <= 0)) {
            c12_g_st.site = &c12_kc_emlrtRSI;
            c12_i2 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_y->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st, c12_b_y,
              c12_i2, &c12_b_emlrtRTEI);
            c12_b_loop_ub = c12_y->rowidx->size[0] - 1;
            for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
              c12_b_y->data[c12_i6] = c12_y->rowidx->data[c12_i6];
            }

            c12_d_outstart = c12_b_outstart - 1;
            c12_d_instart = c12_b_instart - 1;
            c12_d_nelem = c12_b_nelem;
            c12_i8 = c12_y->rowidx->size[0];
            c12_y->rowidx->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st,
              c12_y->rowidx, c12_i8, &c12_tb_emlrtRTEI);
            c12_d_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
              c12_y->rowidx->data[c12_i10] = c12_b_y->data[c12_i10];
            }

            memmove((void *)&c12_y->rowidx->data[c12_d_outstart], (void *)
                    &c12_y->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                     c12_d_nelem * sizeof(int32_T)));
            c12_g_st.site = &c12_lc_emlrtRSI;
            c12_i12 = c12_c_y->size[0];
            c12_c_y->size[0] = c12_y->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_c_y,
              c12_i12, &c12_d_emlrtRTEI);
            c12_f_loop_ub = c12_y->d->size[0] - 1;
            for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
              c12_c_y->data[c12_i14] = c12_y->d->data[c12_i14];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i16 = c12_y->d->size[0];
            c12_y->d->size[0] = c12_c_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_y->d,
              c12_i16, &c12_tb_emlrtRTEI);
            c12_h_loop_ub = c12_c_y->size[0] - 1;
            for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
              c12_y->d->data[c12_i18] = c12_c_y->data[c12_i18];
            }

            memmove((void *)&c12_y->d->data[c12_f_outstart], (void *)&c12_y->
                    d->data[c12_f_instart], (uint32_T)((size_t)c12_f_nelem *
                     sizeof(real_T)));
          }
        }

        c12_rhsIter = c12_r;
        c12_d_copyNonzeroValues(chartInstance, c12_y, &c12_rhsIter, c12_c_idx,
          c12_tmp);
        c12_b_col = c12_d_c + 1;
        c12_b_offs = c12_extraCol;
        c12_i4 = c12_b_col;
        for (c12_d_k = c12_i4 - 1; c12_d_k + 1 < 12; c12_d_k++) {
          c12_y->colidx->data[c12_d_k] += c12_b_offs;
        }
      } else {
        c12_rhsIter = c12_r;
        c12_b_outIdx = c12_d_copyNonzeroValues(chartInstance, c12_y,
          &c12_rhsIter, c12_c_idx, c12_tmp);
        c12_extraSpace = c12_nzColAlloc - c12_nzRhs;
        if (c12_extraSpace > 0) {
          c12_start = c12_y->colidx->data[c12_d_c];
          c12_f_st.site = &c12_od_emlrtRSI;
          c12_outstart = c12_b_outIdx;
          c12_instart = c12_start;
          c12_nelem = (c12_nz - c12_start) + 1;
          if (!(c12_nelem <= 0)) {
            c12_g_st.site = &c12_kc_emlrtRSI;
            c12_i1 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_y->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st, c12_b_y,
              c12_i1, &c12_b_emlrtRTEI);
            c12_loop_ub = c12_y->rowidx->size[0] - 1;
            for (c12_i5 = 0; c12_i5 <= c12_loop_ub; c12_i5++) {
              c12_b_y->data[c12_i5] = c12_y->rowidx->data[c12_i5];
            }

            c12_c_outstart = c12_outstart - 1;
            c12_c_instart = c12_instart - 1;
            c12_c_nelem = c12_nelem;
            c12_i7 = c12_y->rowidx->size[0];
            c12_y->rowidx->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_g_st,
              c12_y->rowidx, c12_i7, &c12_tb_emlrtRTEI);
            c12_c_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i9 = 0; c12_i9 <= c12_c_loop_ub; c12_i9++) {
              c12_y->rowidx->data[c12_i9] = c12_b_y->data[c12_i9];
            }

            memmove((void *)&c12_y->rowidx->data[c12_c_outstart], (void *)
                    &c12_y->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                     c12_c_nelem * sizeof(int32_T)));
            c12_g_st.site = &c12_lc_emlrtRSI;
            c12_i11 = c12_c_y->size[0];
            c12_c_y->size[0] = c12_y->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_c_y,
              c12_i11, &c12_d_emlrtRTEI);
            c12_e_loop_ub = c12_y->d->size[0] - 1;
            for (c12_i13 = 0; c12_i13 <= c12_e_loop_ub; c12_i13++) {
              c12_c_y->data[c12_i13] = c12_y->d->data[c12_i13];
            }

            c12_e_outstart = c12_outstart - 1;
            c12_e_instart = c12_instart - 1;
            c12_e_nelem = c12_nelem;
            c12_i15 = c12_y->d->size[0];
            c12_y->d->size[0] = c12_c_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_g_st, c12_y->d,
              c12_i15, &c12_tb_emlrtRTEI);
            c12_g_loop_ub = c12_c_y->size[0] - 1;
            for (c12_i17 = 0; c12_i17 <= c12_g_loop_ub; c12_i17++) {
              c12_y->d->data[c12_i17] = c12_c_y->data[c12_i17];
            }

            memmove((void *)&c12_y->d->data[c12_e_outstart], (void *)&c12_y->
                    d->data[c12_e_instart], (uint32_T)((size_t)c12_e_nelem *
                     sizeof(real_T)));
          }

          c12_col = c12_d_c + 1;
          c12_offs = c12_extraSpace;
          c12_i3 = c12_col;
          for (c12_c_k = c12_i3 - 1; c12_c_k + 1 < 12; c12_c_k++) {
            c12_y->colidx->data[c12_c_k] -= c12_offs;
          }
        }
      }
    }

    c12_emxFree_real_T(chartInstance, &c12_c_y);
    c12_emxFree_int32_T(chartInstance, &c12_b_y);
    c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_s);
    cs_di_sfree(c12_S);
    cs_di_nfree(c12_N);
  }

  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_b_b);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_b_A);
}

static void c12_b_CXSparseAPI_iteratedQR(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_A,
  c12_coder_internal_sparse c12_b, c12_coder_internal_sparse *c12_out)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  int32_T c12_n;
  cs_di* c12_cxA;
  cs_dis * c12_S;
  cs_din * c12_N;
  real_T c12_tol;
  c12_coder_internal_sparse c12_s;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  int32_T c12_i;
  real_T c12_b_i;
  real_T c12_varargin_2;
  real_T c12_c;
  real_T c12_b_c;
  real_T c12_idx;
  real_T c12_x;
  real_T c12_b_x;
  boolean_T c12_b_b;
  real_T c12_c_x;
  boolean_T c12_c_b;
  const mxArray *c12_c_y = NULL;
  int32_T c12_col;
  int32_T c12_nd;
  const mxArray *c12_d_y = NULL;
  boolean_T c12_b1;
  const mxArray *c12_e_y = NULL;
  const mxArray *c12_f_y = NULL;
  int32_T c12_outIdx;
  int32_T c12_colstart;
  real_T c12_outBuff[10];
  int32_T c12_colend;
  int32_T c12_colNnz;
  real_T c12_b_varargin_2;
  int32_T c12_d_b;
  int32_T c12_e_b;
  real_T c12_c_c;
  boolean_T c12_overflow;
  real_T c12_d_c;
  real_T c12_b_idx;
  real_T c12_d_x;
  int32_T c12_k;
  real_T c12_e_x;
  int32_T c12_b_k;
  boolean_T c12_b2;
  real_T c12_f_x;
  boolean_T c12_f_b;
  const mxArray *c12_g_y = NULL;
  int32_T c12_b_col;
  int32_T c12_b_n;
  const mxArray *c12_h_y = NULL;
  real_T c12_c_n;
  int32_T c12_nz;
  int32_T c12_nzColAlloc;
  int32_T c12_c_idx;
  int32_T c12_c_i;
  real_T c12_b_outBuff[10];
  int32_T c12_nzRhs;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  int32_T c12_extraCol;
  int32_T c12_b_outIdx;
  real_T c12_d_n;
  int32_T c12_extraSpace;
  int32_T c12_numAlloc;
  int32_T c12_extraAlloc;
  int32_T c12_start;
  int32_T c12_outstart;
  int32_T c12_num2Alloc;
  int32_T c12_instart;
  int32_T c12_b_outstart;
  int32_T c12_nelem;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_c_col;
  int32_T c12_i1;
  int32_T c12_offs;
  int32_T c12_i2;
  int32_T c12_d_col;
  int32_T c12_i3;
  int32_T c12_b_offs;
  int32_T c12_c_k;
  int32_T c12_loop_ub;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_d_k;
  int32_T c12_i6;
  int32_T c12_c_outstart;
  int32_T c12_c_instart;
  int32_T c12_d_outstart;
  int32_T c12_c_nelem;
  int32_T c12_d_instart;
  int32_T c12_i7;
  int32_T c12_d_nelem;
  int32_T c12_i8;
  int32_T c12_c_loop_ub;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_e_loop_ub;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_e_outstart;
  int32_T c12_e_instart;
  int32_T c12_f_outstart;
  int32_T c12_e_nelem;
  int32_T c12_f_instart;
  int32_T c12_i15;
  int32_T c12_f_nelem;
  int32_T c12_i16;
  int32_T c12_g_loop_ub;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_st.site = &c12_vc_emlrtRSI;
  c12_b_st.site = &c12_uc_emlrtRSI;
  c12_n = c12_A.colidx->data[c12_A.colidx->size[0] - 1];
  c12_cxA = makeCXSparseMatrix(c12_n - 1, 10, 10, &c12_A.colidx->data[0],
    &c12_A.rowidx->data[0], &c12_A.d->data[0]);
  c12_S = cs_di_sqr(2, c12_cxA, 1);
  c12_N = cs_di_qr(c12_cxA, c12_S);
  cs_di_spfree(c12_cxA);
  qr_rank_di(c12_N, &c12_tol);
  c12_st.site = &c12_wc_emlrtRSI;
  c12_c_sparse_spallocLike(chartInstance, &c12_st, c12_out);
  c12_emxInitStruct_coder_internal_sp(chartInstance, c12_sp, &c12_s,
    &c12_wb_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_b_y, 1, &c12_d_emlrtRTEI);
  for (c12_i = 0; c12_i < 10; c12_i++) {
    c12_b_i = (real_T)c12_i + 1.0;
    c12_st.site = &c12_xc_emlrtRSI;
    c12_varargin_2 = c12_b_i;
    c12_b_st.site = &c12_bd_emlrtRSI;
    c12_c = c12_varargin_2;
    c12_c_st.site = &c12_cd_emlrtRSI;
    c12_b_c = c12_c;
    c12_d_st.site = &c12_dd_emlrtRSI;
    c12_idx = c12_b_c;
    c12_x = c12_idx;
    c12_b_x = c12_x;
    c12_b_x = muDoubleScalarFloor(c12_b_x);
    if (c12_b_x == c12_idx) {
      c12_c_x = c12_idx;
      c12_c_b = muDoubleScalarIsInf(c12_c_x);
      if (!c12_c_b) {
        c12_b_b = true;
      } else {
        c12_b_b = false;
      }
    } else {
      c12_b_b = false;
    }

    if (!c12_b_b) {
      c12_c_y = NULL;
      sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      c12_d_y = NULL;
      sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_c_y, 14, sf_mex_call
                  (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_d_st,
        "message", 1U, 1U, 14, c12_d_y)));
    }

    c12_col = (int32_T)c12_b_c;
    c12_nd = c12_b.colidx->data[c12_col] - c12_b.colidx->data[c12_col - 1];
    if (c12_nd <= 10) {
      c12_b1 = true;
    } else {
      c12_b1 = false;
    }

    if (!c12_b1) {
      c12_e_y = NULL;
      sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      c12_f_y = NULL;
      sf_mex_assign(&c12_f_y, sf_mex_create("y", c12_cv5, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(&c12_c_st, "error", 0U, 2U, 14, c12_e_y, 14, sf_mex_call
                  (&c12_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_c_st,
        "message", 1U, 1U, 14, c12_f_y)));
    }

    c12_d_st.site = &c12_ed_emlrtRSI;
    c12_b_sparse_spallocLike(chartInstance, &c12_d_st, c12_nd, &c12_s);
    if (c12_nd != 0) {
      c12_outIdx = 0;
      c12_colstart = c12_b.colidx->data[c12_col - 1] - 2;
      c12_colend = c12_b.colidx->data[c12_col];
      c12_colNnz = (c12_colend - c12_colstart) - 2;
      c12_d_st.site = &c12_fd_emlrtRSI;
      c12_d_b = c12_colNnz;
      c12_e_b = c12_d_b;
      if (1 > c12_e_b) {
        c12_overflow = false;
      } else {
        c12_overflow = (c12_e_b > 2147483646);
      }

      if (c12_overflow) {
        c12_e_st.site = &c12_u_emlrtRSI;
        c12_check_forloop_overflow_error(chartInstance, &c12_e_st);
      }

      for (c12_k = 1; c12_k - 1 < c12_colNnz; c12_k++) {
        c12_b_k = c12_k;
        c12_s.d->data[c12_outIdx] = c12_b.d->data[c12_colstart + c12_b_k];
        c12_s.rowidx->data[c12_outIdx] = c12_b.rowidx->data[c12_colstart +
          c12_b_k];
        c12_outIdx++;
      }

      c12_s.colidx->data[1] = c12_s.colidx->data[0] + c12_colNnz;
    }

    c12_st.site = &c12_xc_emlrtRSI;
    c12_b_sparse_full(chartInstance, &c12_st, c12_s, c12_outBuff);
    solve_from_qr_di(c12_N, c12_S, (double *)&c12_outBuff[0], 10, 10);
    c12_st.site = &c12_yc_emlrtRSI;
    c12_b_varargin_2 = c12_b_i;
    c12_b_st.site = &c12_bc_emlrtRSI;
    c12_c_c = c12_b_varargin_2;
    c12_c_st.site = &c12_jd_emlrtRSI;
    c12_d_c = c12_c_c;
    c12_d_st.site = &c12_kd_emlrtRSI;
    c12_b_idx = c12_d_c;
    c12_d_x = c12_b_idx;
    c12_e_x = c12_d_x;
    c12_e_x = muDoubleScalarFloor(c12_e_x);
    if (c12_e_x == c12_b_idx) {
      c12_f_x = c12_b_idx;
      c12_f_b = muDoubleScalarIsInf(c12_f_x);
      if (!c12_f_b) {
        c12_b2 = true;
      } else {
        c12_b2 = false;
      }
    } else {
      c12_b2 = false;
    }

    if (!c12_b2) {
      c12_g_y = NULL;
      sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      c12_h_y = NULL;
      sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_cv4, 10, 0U, 1U, 0U, 2, 1,
        25), false);
      sf_mex_call(&c12_d_st, "error", 0U, 2U, 14, c12_g_y, 14, sf_mex_call
                  (&c12_d_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_d_st,
        "message", 1U, 1U, 14, c12_h_y)));
    }

    c12_b_col = (int32_T)c12_d_c;
    c12_b_n = c12_out->colidx->data[c12_out->colidx->size[0] - 1];
    c12_c_n = (real_T)(c12_b_n - 1);
    c12_nz = (int32_T)c12_c_n;
    c12_nzColAlloc = c12_out->colidx->data[c12_b_col] - c12_out->colidx->
      data[c12_b_col - 1];
    c12_c_idx = c12_out->colidx->data[c12_b_col - 1];
    for (c12_c_i = 0; c12_c_i < 10; c12_c_i++) {
      c12_b_outBuff[c12_c_i] = c12_outBuff[c12_c_i];
    }

    c12_d_st.site = &c12_ld_emlrtRSI;
    c12_nzRhs = c12_b_countNumnzInColumn(chartInstance, c12_b_outBuff, c12_r);
    if (c12_nzColAlloc < c12_nzRhs) {
      c12_extraCol = c12_nzRhs - c12_nzColAlloc;
      c12_d_n = (real_T)c12_out->maxnz;
      c12_numAlloc = (int32_T)c12_d_n;
      c12_extraAlloc = c12_numAlloc - c12_nz;
      c12_start = c12_out->colidx->data[c12_b_col];
      if (c12_extraAlloc < c12_extraCol) {
        c12_num2Alloc = c12_extraCol - c12_extraAlloc;
        c12_d_st.site = &c12_md_emlrtRSI;
        c12_d_realloc(chartInstance, &c12_d_st, c12_out, c12_numAlloc +
                      c12_num2Alloc, c12_c_idx - 1, c12_start, c12_nz,
                      c12_extraCol);
      } else {
        c12_d_st.site = &c12_nd_emlrtRSI;
        c12_b_outstart = c12_start + c12_extraCol;
        c12_b_instart = c12_start;
        c12_b_nelem = (c12_nz - c12_start) + 1;
        if (!(c12_b_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i2 = c12_y->size[0];
          c12_y->size[0] = c12_out->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i2,
            &c12_b_emlrtRTEI);
          c12_b_loop_ub = c12_out->rowidx->size[0] - 1;
          for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
            c12_y->data[c12_i6] = c12_out->rowidx->data[c12_i6];
          }

          c12_d_outstart = c12_b_outstart - 1;
          c12_d_instart = c12_b_instart - 1;
          c12_d_nelem = c12_b_nelem;
          c12_i8 = c12_out->rowidx->size[0];
          c12_out->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_out->rowidx, c12_i8, &c12_vb_emlrtRTEI);
          c12_d_loop_ub = c12_y->size[0] - 1;
          for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
            c12_out->rowidx->data[c12_i10] = c12_y->data[c12_i10];
          }

          memmove((void *)&c12_out->rowidx->data[c12_d_outstart], (void *)
                  &c12_out->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                   c12_d_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i12 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_out->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i12, &c12_d_emlrtRTEI);
          c12_f_loop_ub = c12_out->d->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
            c12_b_y->data[c12_i14] = c12_out->d->data[c12_i14];
          }

          c12_f_outstart = c12_b_outstart - 1;
          c12_f_instart = c12_b_instart - 1;
          c12_f_nelem = c12_b_nelem;
          c12_i16 = c12_out->d->size[0];
          c12_out->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_out->d,
            c12_i16, &c12_vb_emlrtRTEI);
          c12_h_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
            c12_out->d->data[c12_i18] = c12_b_y->data[c12_i18];
          }

          memmove((void *)&c12_out->d->data[c12_f_outstart], (void *)&c12_out->
                  d->data[c12_f_instart], (uint32_T)((size_t)c12_f_nelem *
                   sizeof(real_T)));
        }
      }

      c12_rhsIter = c12_r;
      c12_d_copyNonzeroValues(chartInstance, c12_out, &c12_rhsIter, c12_c_idx,
        c12_outBuff);
      c12_d_col = c12_b_col + 1;
      c12_b_offs = c12_extraCol;
      c12_i4 = c12_d_col;
      for (c12_d_k = c12_i4 - 1; c12_d_k + 1 < 12; c12_d_k++) {
        c12_out->colidx->data[c12_d_k] += c12_b_offs;
      }
    } else {
      c12_rhsIter = c12_r;
      c12_b_outIdx = c12_d_copyNonzeroValues(chartInstance, c12_out,
        &c12_rhsIter, c12_c_idx, c12_outBuff);
      c12_extraSpace = c12_nzColAlloc - c12_nzRhs;
      if (c12_extraSpace > 0) {
        c12_start = c12_out->colidx->data[c12_b_col];
        c12_d_st.site = &c12_od_emlrtRSI;
        c12_outstart = c12_b_outIdx;
        c12_instart = c12_start;
        c12_nelem = (c12_nz - c12_start) + 1;
        if (!(c12_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i1 = c12_y->size[0];
          c12_y->size[0] = c12_out->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i1,
            &c12_b_emlrtRTEI);
          c12_loop_ub = c12_out->rowidx->size[0] - 1;
          for (c12_i5 = 0; c12_i5 <= c12_loop_ub; c12_i5++) {
            c12_y->data[c12_i5] = c12_out->rowidx->data[c12_i5];
          }

          c12_c_outstart = c12_outstart - 1;
          c12_c_instart = c12_instart - 1;
          c12_c_nelem = c12_nelem;
          c12_i7 = c12_out->rowidx->size[0];
          c12_out->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_out->rowidx, c12_i7, &c12_vb_emlrtRTEI);
          c12_c_loop_ub = c12_y->size[0] - 1;
          for (c12_i9 = 0; c12_i9 <= c12_c_loop_ub; c12_i9++) {
            c12_out->rowidx->data[c12_i9] = c12_y->data[c12_i9];
          }

          memmove((void *)&c12_out->rowidx->data[c12_c_outstart], (void *)
                  &c12_out->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                   c12_c_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i11 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_out->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i11, &c12_d_emlrtRTEI);
          c12_e_loop_ub = c12_out->d->size[0] - 1;
          for (c12_i13 = 0; c12_i13 <= c12_e_loop_ub; c12_i13++) {
            c12_b_y->data[c12_i13] = c12_out->d->data[c12_i13];
          }

          c12_e_outstart = c12_outstart - 1;
          c12_e_instart = c12_instart - 1;
          c12_e_nelem = c12_nelem;
          c12_i15 = c12_out->d->size[0];
          c12_out->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_out->d,
            c12_i15, &c12_vb_emlrtRTEI);
          c12_g_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i17 = 0; c12_i17 <= c12_g_loop_ub; c12_i17++) {
            c12_out->d->data[c12_i17] = c12_b_y->data[c12_i17];
          }

          memmove((void *)&c12_out->d->data[c12_e_outstart], (void *)&c12_out->
                  d->data[c12_e_instart], (uint32_T)((size_t)c12_e_nelem *
                   sizeof(real_T)));
        }

        c12_c_col = c12_b_col + 1;
        c12_offs = c12_extraSpace;
        c12_i3 = c12_c_col;
        for (c12_c_k = c12_i3 - 1; c12_c_k + 1 < 12; c12_c_k++) {
          c12_out->colidx->data[c12_c_k] -= c12_offs;
        }
      }
    }
  }

  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
  c12_emxFreeStruct_coder_internal_sp(chartInstance, &c12_s);
  cs_di_sfree(c12_S);
  cs_di_nfree(c12_N);
}

static void c12_c_sparse_spallocLike(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_s)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  int32_T c12_i;
  int32_T c12_i1;
  int32_T c12_i2;
  int32_T c12_c;
  int32_T c12_b_c;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_st.site = &c12_ad_emlrtRSI;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_i = c12_s->d->size[0];
  c12_s->d->size[0] = 1;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_s->d, c12_i,
    &c12_xb_emlrtRTEI);
  c12_s->d->data[0] = 0.0;
  c12_s->maxnz = 1;
  c12_i1 = c12_s->colidx->size[0];
  c12_s->colidx->size[0] = 11;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_s->colidx, c12_i1,
    &c12_yb_emlrtRTEI);
  c12_s->colidx->data[0] = 1;
  c12_i2 = c12_s->rowidx->size[0];
  c12_s->rowidx->size[0] = 1;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_s->rowidx, c12_i2,
    &c12_xb_emlrtRTEI);
  c12_s->rowidx->data[0] = 0;
  for (c12_c = 0; c12_c < 10; c12_c++) {
    c12_b_c = c12_c;
    c12_s->colidx->data[c12_b_c + 1] = 1;
  }

  c12_b_st.site = &c12_w_emlrtRSI;
  c12_b_sparse_fillIn(chartInstance, &c12_b_st, c12_s);
}

static void c12_b_sparse_full(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this, real_T c12_y[10])
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  int32_T c12_i;
  int32_T c12_cend;
  int32_T c12_i1;
  int32_T c12_a;
  int32_T c12_b;
  int32_T c12_b_a;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_idx;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  for (c12_i = 0; c12_i < 10; c12_i++) {
    c12_y[c12_i] = 0.0;
  }

  c12_cend = c12_this.colidx->data[1] - 1;
  c12_i1 = c12_this.colidx->data[0];
  c12_st.site = &c12_id_emlrtRSI;
  c12_a = c12_i1;
  c12_b = c12_cend;
  c12_b_a = c12_a;
  c12_b_b = c12_b;
  if (c12_b_a > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_idx = c12_i1 - 1; c12_idx < c12_cend; c12_idx++) {
    c12_y[c12_this.rowidx->data[c12_idx] - 1] = c12_this.d->data[c12_idx];
  }
}

static int32_T c12_b_countNumnzInColumn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, real_T c12_rhs[10], c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter)
{
  int32_T c12_nz;
  int32_T c12_k;
  real_T c12_rhsv;
  int32_T c12_y;
  int32_T c12_b_y;
  (void)chartInstance;
  c12_nz = 0;
  for (c12_k = 0; c12_k < 10; c12_k++) {
    c12_rhsv = c12_rhs[c12_rhsIter.idx - 1];
    c12_y = c12_rhsIter.idx;
    c12_b_y = c12_y + 1;
    c12_rhsIter.idx = c12_b_y;
    if (!(c12_rhsv == 0.0)) {
      c12_nz++;
    }
  }

  return c12_nz;
}

static void c12_b_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter, int32_T c12_outStart, real_T c12_rhs
  [10], c12_coder_internal_sparse *c12_b_this, int32_T *c12_outIdx,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_b_rhsIter)
{
  int32_T c12_i;
  int32_T c12_b_outIdx;
  real_T c12_b_rhs[10];
  c12_emxCopyStruct_coder_internal_sp(chartInstance, c12_sp, c12_b_this,
    &c12_this, &c12_ac_emlrtRTEI);
  *c12_b_rhsIter = c12_rhsIter;
  for (c12_i = 0; c12_i < 10; c12_i++) {
    c12_b_rhs[c12_i] = c12_rhs[c12_i];
  }

  c12_b_outIdx = c12_d_copyNonzeroValues(chartInstance, c12_b_this,
    c12_b_rhsIter, c12_outStart, c12_b_rhs);
  *c12_outIdx = c12_b_outIdx;
}

static void c12_floor(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
                      c12_x[60], real_T c12_b_x[60])
{
  int32_T c12_i;
  for (c12_i = 0; c12_i < 60; c12_i++) {
    c12_b_x[c12_i] = c12_x[c12_i];
  }

  c12_b_floor(chartInstance, c12_b_x);
}

static void c12_eye(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
                    c12_I[100])
{
  int32_T c12_i;
  int32_T c12_k;
  int32_T c12_b_k;
  (void)chartInstance;
  for (c12_i = 0; c12_i < 100; c12_i++) {
    c12_I[c12_i] = 0.0;
  }

  for (c12_k = 0; c12_k < 10; c12_k++) {
    c12_b_k = c12_k;
    c12_I[c12_b_k + 10 * c12_b_k] = 1.0;
  }
}

static void c12_repmat(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
  c12_a[60], real_T c12_b[600])
{
  int32_T c12_jcol;
  int32_T c12_b_jcol;
  int32_T c12_iacol;
  int32_T c12_ibmat;
  int32_T c12_itilerow;
  int32_T c12_b_itilerow;
  int32_T c12_ibcol;
  (void)chartInstance;
  for (c12_jcol = 0; c12_jcol < 60; c12_jcol++) {
    c12_b_jcol = c12_jcol;
    c12_iacol = c12_b_jcol;
    c12_ibmat = c12_b_jcol * 10 - 1;
    for (c12_itilerow = 0; c12_itilerow < 10; c12_itilerow++) {
      c12_b_itilerow = c12_itilerow;
      c12_ibcol = c12_ibmat + c12_b_itilerow;
      c12_b[c12_ibcol + 1] = c12_a[c12_iacol];
    }
  }
}

static real_T c12_xdotu(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
  c12_x[600], real_T c12_y[600])
{
  ptrdiff_t c12_n_t;
  ptrdiff_t c12_incx_t;
  ptrdiff_t c12_incy_t;
  (void)chartInstance;
  c12_n_t = (ptrdiff_t)600;
  c12_incx_t = (ptrdiff_t)1;
  c12_incy_t = (ptrdiff_t)1;
  return ddot(&c12_n_t, &c12_x[0], &c12_incx_t, &c12_y[0], &c12_incy_t);
}

static real_T c12_e_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_netS, const char_T *c12_identifier)
{
  real_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_netS),
    &c12_thisId);
  sf_mex_destroy(&c12_b_netS);
  return c12_y;
}

static real_T c12_f_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  real_T c12_y;
  real_T c12_d;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_d, 1, 0, 0U, 0, 0U, 0);
  c12_y = c12_d;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_g_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_fnB, const char_T *c12_identifier,
  boolean_T *c12_svPtr, real_T c12_y[1440])
{
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_fnB), &c12_thisId,
    c12_svPtr, c12_y);
  sf_mex_destroy(&c12_b_fnB);
}

static void c12_h_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T *c12_svPtr, real_T c12_y[1440])
{
  real_T c12_b_dv[1440];
  int32_T c12_i;
  (void)chartInstance;
  if (mxIsEmpty(c12_u)) {
    *c12_svPtr = false;
  } else {
    *c12_svPtr = true;
    sf_mex_import(c12_parentId, sf_mex_dup(c12_u), c12_b_dv, 1, 0, 0U, 1, 0U, 2,
                  12, 120);
    for (c12_i = 0; c12_i < 1440; c12_i++) {
      c12_y[c12_i] = c12_b_dv[c12_i];
    }
  }

  sf_mex_destroy(&c12_u);
}

static void c12_i_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_fnT, const char_T *c12_identifier,
  boolean_T *c12_svPtr, real_T c12_y[600])
{
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_fnT), &c12_thisId,
    c12_svPtr, c12_y);
  sf_mex_destroy(&c12_b_fnT);
}

static void c12_j_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T *c12_svPtr, real_T c12_y[600])
{
  real_T c12_b_dv[600];
  int32_T c12_i;
  (void)chartInstance;
  if (mxIsEmpty(c12_u)) {
    *c12_svPtr = false;
  } else {
    *c12_svPtr = true;
    sf_mex_import(c12_parentId, sf_mex_dup(c12_u), c12_b_dv, 1, 0, 0U, 1, 0U, 2,
                  10, 60);
    for (c12_i = 0; c12_i < 600; c12_i++) {
      c12_y[c12_i] = c12_b_dv[c12_i];
    }
  }

  sf_mex_destroy(&c12_u);
}

static uint8_T c12_k_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_b_is_active_c12_PID_Cdelta_U, const char_T *
  c12_identifier)
{
  uint8_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_y = c12_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c12_b_is_active_c12_PID_Cdelta_U), &c12_thisId);
  sf_mex_destroy(&c12_b_is_active_c12_PID_Cdelta_U);
  return c12_y;
}

static uint8_T c12_l_emlrt_marshallIn(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  uint8_T c12_y;
  uint8_T c12_b_u;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_b_u, 1, 3, 0U, 0, 0U, 0);
  c12_y = c12_b_u;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static const mxArray *c12_chart_data_browse_helper
  (SFc12_PID_Cdelta_UInstanceStruct *chartInstance, int32_T c12_ssIdNumber)
{
  const mxArray *c12_mxData = NULL;
  real_T c12_d;
  real_T c12_d1;
  real_T c12_d2;
  c12_mxData = NULL;
  switch (c12_ssIdNumber) {
   case 5U:
    c12_d = *chartInstance->c12_netS;
    sf_mex_assign(&c12_mxData, sf_mex_create("mxData", &c12_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c12_d1 = *chartInstance->c12_Dyaw;
    sf_mex_assign(&c12_mxData, sf_mex_create("mxData", &c12_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c12_d2 = *chartInstance->c12_yaw;
    sf_mex_assign(&c12_mxData, sf_mex_create("mxData", &c12_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c12_mxData;
}

static void c12_b_locSortrows(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_a, c12_emxArray_int32_T *c12_b)
{
  emlrtStack c12_st;
  c12_coder_internal_anonymous_function c12_this;
  c12_cell_wrap_1 c12_tunableEnvironment[2];
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_i2;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  int32_T c12_i4;
  c12_emxArray_int32_T *c12_b_idx;
  int32_T c12_i5;
  int32_T c12_c_loop_ub;
  int32_T c12_i6;
  c12_emxArray_int32_T *c12_c_idx;
  int32_T c12_i7;
  int32_T c12_d_loop_ub;
  int32_T c12_i8;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_this,
    &c12_fc_emlrtRTEI);
  c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_tunableEnvironment,
    &c12_gc_emlrtRTEI);
  c12_i = c12_tunableEnvironment[0].f1->size[0];
  c12_tunableEnvironment[0].f1->size[0] = c12_a->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_tunableEnvironment[0]
    .f1, c12_i, &c12_bc_emlrtRTEI);
  c12_loop_ub = c12_a->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_tunableEnvironment[0].f1->data[c12_i1] = c12_a->data[c12_i1];
  }

  c12_i2 = c12_tunableEnvironment[1].f1->size[0];
  c12_tunableEnvironment[1].f1->size[0] = c12_b->size[0];
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_tunableEnvironment[1]
    .f1, c12_i2, &c12_bc_emlrtRTEI);
  c12_b_loop_ub = c12_b->size[0] - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_tunableEnvironment[1].f1->data[c12_i3] = c12_b->data[c12_i3];
  }

  for (c12_i4 = 0; c12_i4 < 2; c12_i4++) {
    c12_emxCopyStruct_cell_wrap_1(chartInstance, c12_sp,
      &c12_this.tunableEnvironment[c12_i4], &c12_tunableEnvironment[c12_i4],
      &c12_cc_emlrtRTEI);
  }

  c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_tunableEnvironment);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_b_idx, 1, &c12_dc_emlrtRTEI);
  c12_st.site = &c12_fb_emlrtRSI;
  c12_b_introsort(chartInstance, &c12_st, c12_idx, c12_a->size[0], c12_this);
  c12_i5 = c12_b_idx->size[0];
  c12_b_idx->size[0] = c12_idx->size[0];
  c12_st.site = &c12_gb_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_b_idx, c12_i5,
    &c12_dc_emlrtRTEI);
  c12_c_loop_ub = c12_idx->size[0] - 1;
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_this);
  for (c12_i6 = 0; c12_i6 <= c12_c_loop_ub; c12_i6++) {
    c12_b_idx->data[c12_i6] = c12_idx->data[c12_i6];
  }

  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_c_idx, 1, &c12_ec_emlrtRTEI);
  c12_st.site = &c12_gb_emlrtRSI;
  c12_b_permuteVector(chartInstance, &c12_st, c12_b_idx, c12_a);
  c12_i7 = c12_c_idx->size[0];
  c12_c_idx->size[0] = c12_idx->size[0];
  c12_st.site = &c12_hb_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_c_idx, c12_i7,
    &c12_ec_emlrtRTEI);
  c12_d_loop_ub = c12_idx->size[0] - 1;
  c12_emxFree_int32_T(chartInstance, &c12_b_idx);
  for (c12_i8 = 0; c12_i8 <= c12_d_loop_ub; c12_i8++) {
    c12_c_idx->data[c12_i8] = c12_idx->data[c12_i8];
  }

  c12_st.site = &c12_hb_emlrtRSI;
  c12_b_permuteVector(chartInstance, &c12_st, c12_c_idx, c12_b);
  c12_emxFree_int32_T(chartInstance, &c12_c_idx);
}

static void c12_b_insertionsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart,
  int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  int32_T c12_i;
  int32_T c12_a;
  int32_T c12_b;
  int32_T c12_b_a;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  c12_cell_wrap_1 c12_environment[2];
  c12_emxArray_int32_T *c12_c_a;
  c12_emxArray_int32_T *c12_c_b;
  int32_T c12_xc;
  int32_T c12_idx;
  boolean_T c12_exitg1;
  int32_T c12_varargin_1;
  int32_T c12_varargin_2;
  int32_T c12_i1;
  int32_T c12_loop_ub;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_b_loop_ub;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_c_loop_ub;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_d_loop_ub;
  int32_T c12_i8;
  int32_T c12_i9;
  int32_T c12_e_loop_ub;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_f_loop_ub;
  int32_T c12_i12;
  int32_T c12_b_i;
  int32_T c12_j;
  int32_T c12_c_i;
  int32_T c12_b_j;
  int32_T c12_ai;
  int32_T c12_aj;
  boolean_T c12_varargout_1;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_i = c12_xstart + 1;
  c12_st.site = &c12_ib_emlrtRSI;
  c12_a = c12_i;
  c12_b = c12_xend;
  c12_b_a = c12_a;
  c12_b_b = c12_b;
  if (c12_b_a > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  c12_k = c12_i - 1;
  c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_environment,
    &c12_jc_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_c_a, 1, &c12_ic_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_c_b, 1, &c12_ic_emlrtRTEI);
  while (c12_k + 1 <= c12_xend) {
    c12_xc = c12_x->data[c12_k];
    c12_idx = c12_k;
    c12_exitg1 = false;
    while ((!c12_exitg1) && (c12_idx >= c12_xstart)) {
      c12_varargin_1 = c12_xc;
      c12_varargin_2 = c12_x->data[c12_idx - 1];
      c12_i1 = c12_c_a->size[0];
      c12_c_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
      c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_a, c12_i1,
        &c12_hc_emlrtRTEI);
      c12_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
      for (c12_i2 = 0; c12_i2 <= c12_loop_ub; c12_i2++) {
        c12_c_a->data[c12_i2] = c12_cmp.tunableEnvironment[0].f1->data[c12_i2];
      }

      c12_i3 = c12_c_b->size[0];
      c12_c_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
      c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i3,
        &c12_hc_emlrtRTEI);
      c12_b_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
      for (c12_i4 = 0; c12_i4 <= c12_b_loop_ub; c12_i4++) {
        c12_c_b->data[c12_i4] = c12_cmp.tunableEnvironment[1].f1->data[c12_i4];
      }

      c12_i5 = c12_environment[0].f1->size[0];
      c12_environment[0].f1->size[0] = c12_c_a->size[0];
      c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_environment[0].f1,
        c12_i5, &c12_hc_emlrtRTEI);
      c12_c_loop_ub = c12_c_a->size[0] - 1;
      for (c12_i6 = 0; c12_i6 <= c12_c_loop_ub; c12_i6++) {
        c12_environment[0].f1->data[c12_i6] = c12_c_a->data[c12_i6];
      }

      c12_i7 = c12_environment[1].f1->size[0];
      c12_environment[1].f1->size[0] = c12_c_b->size[0];
      c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_environment[1].f1,
        c12_i7, &c12_hc_emlrtRTEI);
      c12_d_loop_ub = c12_c_b->size[0] - 1;
      for (c12_i8 = 0; c12_i8 <= c12_d_loop_ub; c12_i8++) {
        c12_environment[1].f1->data[c12_i8] = c12_c_b->data[c12_i8];
      }

      c12_i9 = c12_c_a->size[0];
      c12_c_a->size[0] = c12_environment[0].f1->size[0];
      c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_a, c12_i9,
        &c12_ic_emlrtRTEI);
      c12_e_loop_ub = c12_environment[0].f1->size[0] - 1;
      for (c12_i10 = 0; c12_i10 <= c12_e_loop_ub; c12_i10++) {
        c12_c_a->data[c12_i10] = c12_environment[0].f1->data[c12_i10];
      }

      c12_i11 = c12_c_b->size[0];
      c12_c_b->size[0] = c12_environment[1].f1->size[0];
      c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i11,
        &c12_ic_emlrtRTEI);
      c12_f_loop_ub = c12_environment[1].f1->size[0] - 1;
      for (c12_i12 = 0; c12_i12 <= c12_f_loop_ub; c12_i12++) {
        c12_c_b->data[c12_i12] = c12_environment[1].f1->data[c12_i12];
      }

      c12_b_i = c12_varargin_1;
      c12_j = c12_varargin_2;
      c12_c_i = c12_b_i - 1;
      c12_b_j = c12_j - 1;
      c12_ai = c12_c_a->data[c12_c_i];
      c12_aj = c12_c_a->data[c12_b_j];
      if (c12_ai < c12_aj) {
        c12_varargout_1 = true;
      } else if (c12_ai == c12_aj) {
        c12_varargout_1 = (c12_c_b->data[c12_c_i] < c12_c_b->data[c12_b_j]);
      } else {
        c12_varargout_1 = false;
      }

      if (c12_varargout_1) {
        c12_x->data[c12_idx] = c12_x->data[c12_idx - 1];
        c12_idx--;
      } else {
        c12_exitg1 = true;
      }
    }

    c12_x->data[c12_idx] = c12_xc;
    c12_k++;
  }

  c12_emxFree_int32_T(chartInstance, &c12_c_b);
  c12_emxFree_int32_T(chartInstance, &c12_c_a);
  c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_environment);
}

static void c12_b_introsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xend,
  c12_coder_internal_anonymous_function c12_cmp)
{
  emlrtStack c12_st;
  c12_coder_internal_anonymous_function c12_b_cmp;
  c12_coder_internal_anonymous_function c12_c_cmp;
  c12_coder_internal_anonymous_function c12_d_cmp;
  int32_T c12_n;
  int32_T c12_b_x;
  int32_T c12_p;
  int32_T c12_b_n;
  int32_T c12_c_n;
  int32_T c12_pmax;
  int32_T c12_pmin;
  boolean_T c12_exitg1;
  int32_T c12_b;
  int32_T c12_pow2p;
  int32_T c12_MAXDEPTH;
  c12_sBaHy6MF1FZJsDHxMqvBaiH c12_frame;
  int32_T c12_b_b;
  int32_T c12_y;
  int32_T c12_d_n;
  c12_coder_internal_stack c12_b_st;
  real_T c12_d;
  int32_T c12_iv[2];
  real_T c12_d1;
  int32_T c12_loop_ub;
  int32_T c12_i;
  int32_T c12_nd;
  const mxArray *c12_b_y = NULL;
  static char_T c12_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'u', 's', 'h', 'L',
    'i', 'm', 'i', 't' };

  const mxArray *c12_c_y = NULL;
  c12_cell_wrap_1 c12_environment[2];
  c12_cell_wrap_1 c12_b_environment[2];
  c12_cell_wrap_1 c12_c_environment[2];
  c12_cell_wrap_1 c12_d_environment[2];
  c12_cell_wrap_1 c12_e_environment[2];
  c12_emxArray_int32_T *c12_a;
  c12_emxArray_int32_T *c12_c_b;
  int32_T c12_exitg2;
  int32_T c12_e_n;
  const mxArray *c12_d_y = NULL;
  static char_T c12_b_cv1[27] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'o', 'p', 'E', 'm',
    'p', 't', 'y' };

  const mxArray *c12_e_y = NULL;
  int32_T c12_xstart;
  int32_T c12_depth;
  int32_T c12_b_xstart;
  int32_T c12_b_xend;
  int32_T c12_b_a;
  int32_T c12_c;
  int32_T c12_xmid;
  int32_T c12_varargin_1;
  int32_T c12_varargin_2;
  int32_T c12_i1;
  int32_T c12_b_loop_ub;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_c_loop_ub;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_d_loop_ub;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_e_loop_ub;
  int32_T c12_i8;
  int32_T c12_i9;
  int32_T c12_f_loop_ub;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_g_loop_ub;
  int32_T c12_i12;
  int32_T c12_b_i;
  int32_T c12_j;
  int32_T c12_c_i;
  int32_T c12_b_j;
  int32_T c12_ai;
  int32_T c12_aj;
  boolean_T c12_varargout_1;
  int32_T c12_t;
  int32_T c12_b_varargin_1;
  int32_T c12_b_varargin_2;
  int32_T c12_i13;
  int32_T c12_h_loop_ub;
  int32_T c12_i14;
  int32_T c12_i15;
  int32_T c12_i_loop_ub;
  int32_T c12_i16;
  int32_T c12_i17;
  int32_T c12_j_loop_ub;
  int32_T c12_i18;
  int32_T c12_i19;
  int32_T c12_k_loop_ub;
  int32_T c12_i20;
  int32_T c12_i21;
  int32_T c12_l_loop_ub;
  int32_T c12_i22;
  int32_T c12_i23;
  int32_T c12_m_loop_ub;
  int32_T c12_i24;
  int32_T c12_d_i;
  int32_T c12_c_j;
  int32_T c12_e_i;
  int32_T c12_d_j;
  int32_T c12_b_ai;
  int32_T c12_b_aj;
  boolean_T c12_b_varargout_1;
  int32_T c12_c_varargin_1;
  int32_T c12_c_varargin_2;
  int32_T c12_i25;
  int32_T c12_n_loop_ub;
  int32_T c12_i26;
  int32_T c12_i27;
  int32_T c12_o_loop_ub;
  int32_T c12_i28;
  int32_T c12_i29;
  int32_T c12_p_loop_ub;
  int32_T c12_i30;
  int32_T c12_i31;
  int32_T c12_q_loop_ub;
  int32_T c12_i32;
  int32_T c12_i33;
  int32_T c12_r_loop_ub;
  int32_T c12_i34;
  int32_T c12_i35;
  int32_T c12_s_loop_ub;
  int32_T c12_i36;
  int32_T c12_f_i;
  int32_T c12_e_j;
  int32_T c12_g_i;
  int32_T c12_f_j;
  int32_T c12_c_ai;
  int32_T c12_c_aj;
  boolean_T c12_c_varargout_1;
  int32_T c12_pivot;
  int32_T c12_h_i;
  int32_T c12_g_j;
  int32_T c12_exitg3;
  int32_T c12_exitg4;
  int32_T c12_d_varargin_1;
  int32_T c12_d_varargin_2;
  int32_T c12_i37;
  int32_T c12_t_loop_ub;
  int32_T c12_i38;
  int32_T c12_i39;
  int32_T c12_u_loop_ub;
  int32_T c12_i40;
  int32_T c12_i41;
  int32_T c12_v_loop_ub;
  int32_T c12_i42;
  int32_T c12_i43;
  int32_T c12_w_loop_ub;
  int32_T c12_i44;
  int32_T c12_i45;
  int32_T c12_x_loop_ub;
  int32_T c12_i46;
  int32_T c12_i47;
  int32_T c12_y_loop_ub;
  int32_T c12_i48;
  int32_T c12_i_i;
  int32_T c12_h_j;
  int32_T c12_j_i;
  int32_T c12_i_j;
  int32_T c12_d_ai;
  int32_T c12_d_aj;
  boolean_T c12_d_varargout_1;
  int32_T c12_e_varargin_1;
  int32_T c12_e_varargin_2;
  int32_T c12_i49;
  int32_T c12_ab_loop_ub;
  int32_T c12_i50;
  int32_T c12_i51;
  int32_T c12_bb_loop_ub;
  int32_T c12_i52;
  int32_T c12_i53;
  int32_T c12_cb_loop_ub;
  int32_T c12_i54;
  int32_T c12_i55;
  int32_T c12_db_loop_ub;
  int32_T c12_i56;
  int32_T c12_i57;
  int32_T c12_eb_loop_ub;
  int32_T c12_i58;
  int32_T c12_i59;
  int32_T c12_fb_loop_ub;
  int32_T c12_i60;
  int32_T c12_k_i;
  int32_T c12_j_j;
  int32_T c12_l_i;
  int32_T c12_k_j;
  int32_T c12_e_ai;
  int32_T c12_e_aj;
  boolean_T c12_e_varargout_1;
  int32_T c12_b_p;
  c12_sBaHy6MF1FZJsDHxMqvBaiH c12_c_x;
  c12_sBaHy6MF1FZJsDHxMqvBaiH c12_d_x;
  int32_T c12_b_nd;
  int32_T c12_c_nd;
  const mxArray *c12_f_y = NULL;
  static char_T c12_b_cv2[28] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'u', 's', 'h', 'L',
    'i', 'm', 'i', 't' };

  const mxArray *c12_g_y = NULL;
  const mxArray *c12_h_y = NULL;
  static char_T c12_b_cv3[28] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'S', 't', 'a', 'c', 'k', 'P', 'u', 's', 'h', 'L',
    'i', 'm', 'i', 't' };

  const mxArray *c12_i_y = NULL;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_nc_emlrtRTEI);
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_c_cmp,
    &c12_mc_emlrtRTEI);
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_d_cmp,
    &c12_kc_emlrtRTEI);
  if (c12_xend <= 32) {
    c12_st.site = &c12_qb_emlrtRSI;
    c12_emxCopyStruct_coder_internal_an(chartInstance, &c12_st, &c12_d_cmp,
      &c12_cmp, &c12_kc_emlrtRTEI);
    c12_st.site = &c12_qb_emlrtRSI;
    c12_b_insertionsort(chartInstance, &c12_st, c12_x, 1, c12_xend, c12_d_cmp);
  } else {
    c12_n = c12_xend;
    c12_b_x = c12_n;
    c12_p = c12_b_x;
    c12_b_n = c12_p;
    c12_c_n = c12_b_n;
    c12_pmax = 31;
    c12_pmin = 0;
    c12_exitg1 = false;
    while ((!c12_exitg1) && (c12_pmax - c12_pmin > 1)) {
      c12_p = (c12_pmin + c12_pmax) >> 1;
      c12_pow2p = 1 << c12_p;
      if (c12_pow2p == c12_c_n) {
        c12_pmax = c12_p;
        c12_exitg1 = true;
      } else if (c12_pow2p > c12_c_n) {
        c12_pmax = c12_p;
      } else {
        c12_pmin = c12_p;
      }
    }

    c12_p = c12_pmax - 1;
    c12_b = c12_p;
    c12_MAXDEPTH = c12_b << 1;
    c12_frame.xstart = 1;
    c12_frame.xend = c12_xend;
    c12_frame.depth = 0;
    c12_b_b = c12_MAXDEPTH;
    c12_y = c12_b_b << 1;
    c12_st.site = &c12_jb_emlrtRSI;
    c12_d_n = c12_y;
    c12_b_st.n = 0;
    c12_d = (real_T)c12_d_n;
    c12_iv[0] = (int32_T)emlrtNonNegativeCheckR2012b(c12_d, &c12_i_emlrtDCI,
      &c12_st);
    c12_d1 = 1.0;
    emlrtNonNegativeCheckR2012b(c12_d1, &c12_i_emlrtDCI, &c12_st);
    c12_b_st.d.size[0] = c12_iv[0];
    c12_loop_ub = c12_iv[0] - 1;
    for (c12_i = 0; c12_i <= c12_loop_ub; c12_i++) {
      c12_b_st.d.data[c12_i] = c12_frame;
    }

    c12_st.site = &c12_pb_emlrtRSI;
    c12_nd = c12_b_st.d.size[0];
    if (!(c12_b_st.n < c12_nd)) {
      c12_b_y = NULL;
      sf_mex_assign(&c12_b_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1,
        28), false);
      c12_c_y = NULL;
      sf_mex_assign(&c12_c_y, sf_mex_create("y", c12_b_cv, 10, 0U, 1U, 0U, 2, 1,
        28), false);
      sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_b_y, 14, sf_mex_call(&c12_st,
        "getString", 1U, 1U, 14, sf_mex_call(&c12_st, "message", 1U, 1U, 14,
        c12_c_y)));
    }

    c12_b_st.d.data[c12_b_st.n] = c12_frame;
    c12_b_st.n++;
    c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_environment,
      &c12_jc_emlrtRTEI);
    c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_b_environment,
      &c12_jc_emlrtRTEI);
    c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_c_environment,
      &c12_jc_emlrtRTEI);
    c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_d_environment,
      &c12_jc_emlrtRTEI);
    c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_e_environment,
      &c12_jc_emlrtRTEI);
    c12_emxInit_int32_T(chartInstance, c12_sp, &c12_a, 1, &c12_ic_emlrtRTEI);
    c12_emxInit_int32_T(chartInstance, c12_sp, &c12_c_b, 1, &c12_ic_emlrtRTEI);
    do {
      c12_exitg2 = 0;
      c12_e_n = c12_b_st.n;
      if (c12_e_n > 0) {
        c12_st.site = &c12_ob_emlrtRSI;
        if (!(c12_b_st.n > 0)) {
          c12_d_y = NULL;
          sf_mex_assign(&c12_d_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U,
            2, 1, 27), false);
          c12_e_y = NULL;
          sf_mex_assign(&c12_e_y, sf_mex_create("y", c12_b_cv1, 10, 0U, 1U, 0U,
            2, 1, 27), false);
          sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_d_y, 14, sf_mex_call
                      (&c12_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_st,
            "message", 1U, 1U, 14, c12_e_y)));
        }

        c12_frame = c12_b_st.d.data[c12_b_st.n - 1];
        c12_b_st.n--;
        c12_xstart = c12_frame.xstart;
        c12_xend = c12_frame.xend;
        c12_depth = c12_frame.depth + 1;
        if ((c12_xend - c12_xstart) + 1 <= 32) {
          c12_st.site = &c12_nb_emlrtRSI;
          c12_emxCopyStruct_coder_internal_an(chartInstance, &c12_st, &c12_c_cmp,
            &c12_cmp, &c12_mc_emlrtRTEI);
          c12_st.site = &c12_nb_emlrtRSI;
          c12_b_insertionsort(chartInstance, &c12_st, c12_x, c12_xstart,
                              c12_xend, c12_c_cmp);
        } else if (c12_depth - 1 == c12_MAXDEPTH) {
          c12_st.site = &c12_mb_emlrtRSI;
          c12_emxCopyStruct_coder_internal_an(chartInstance, &c12_st, &c12_b_cmp,
            &c12_cmp, &c12_nc_emlrtRTEI);
          c12_st.site = &c12_mb_emlrtRSI;
          c12_b_heapsort(chartInstance, &c12_st, c12_x, c12_xstart, c12_xend,
                         c12_b_cmp);
        } else {
          c12_b_xstart = c12_xstart - 1;
          c12_b_xend = c12_xend - 1;
          c12_b_a = c12_b_xend - c12_b_xstart;
          c12_c = c12_div_nzp_s32(chartInstance, c12_b_a, 2, 0, 1U, 0, 0);
          c12_xmid = c12_b_xstart + c12_c;
          c12_varargin_1 = c12_x->data[c12_xmid];
          c12_varargin_2 = c12_x->data[c12_b_xstart];
          c12_i1 = c12_a->size[0];
          c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i1,
            &c12_hc_emlrtRTEI);
          c12_b_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
          for (c12_i2 = 0; c12_i2 <= c12_b_loop_ub; c12_i2++) {
            c12_a->data[c12_i2] = c12_cmp.tunableEnvironment[0].f1->data[c12_i2];
          }

          c12_i3 = c12_c_b->size[0];
          c12_c_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i3,
            &c12_hc_emlrtRTEI);
          c12_c_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
          for (c12_i4 = 0; c12_i4 <= c12_c_loop_ub; c12_i4++) {
            c12_c_b->data[c12_i4] = c12_cmp.tunableEnvironment[1].f1->
              data[c12_i4];
          }

          c12_i5 = c12_environment[0].f1->size[0];
          c12_environment[0].f1->size[0] = c12_a->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_environment[0]
            .f1, c12_i5, &c12_hc_emlrtRTEI);
          c12_d_loop_ub = c12_a->size[0] - 1;
          for (c12_i6 = 0; c12_i6 <= c12_d_loop_ub; c12_i6++) {
            c12_environment[0].f1->data[c12_i6] = c12_a->data[c12_i6];
          }

          c12_i7 = c12_environment[1].f1->size[0];
          c12_environment[1].f1->size[0] = c12_c_b->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_environment[1]
            .f1, c12_i7, &c12_hc_emlrtRTEI);
          c12_e_loop_ub = c12_c_b->size[0] - 1;
          for (c12_i8 = 0; c12_i8 <= c12_e_loop_ub; c12_i8++) {
            c12_environment[1].f1->data[c12_i8] = c12_c_b->data[c12_i8];
          }

          c12_i9 = c12_a->size[0];
          c12_a->size[0] = c12_environment[0].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i9,
            &c12_ic_emlrtRTEI);
          c12_f_loop_ub = c12_environment[0].f1->size[0] - 1;
          for (c12_i10 = 0; c12_i10 <= c12_f_loop_ub; c12_i10++) {
            c12_a->data[c12_i10] = c12_environment[0].f1->data[c12_i10];
          }

          c12_i11 = c12_c_b->size[0];
          c12_c_b->size[0] = c12_environment[1].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i11,
            &c12_ic_emlrtRTEI);
          c12_g_loop_ub = c12_environment[1].f1->size[0] - 1;
          for (c12_i12 = 0; c12_i12 <= c12_g_loop_ub; c12_i12++) {
            c12_c_b->data[c12_i12] = c12_environment[1].f1->data[c12_i12];
          }

          c12_b_i = c12_varargin_1;
          c12_j = c12_varargin_2;
          c12_c_i = c12_b_i - 1;
          c12_b_j = c12_j - 1;
          c12_ai = c12_a->data[c12_c_i];
          c12_aj = c12_a->data[c12_b_j];
          if (c12_ai < c12_aj) {
            c12_varargout_1 = true;
          } else if (c12_ai == c12_aj) {
            c12_varargout_1 = (c12_c_b->data[c12_c_i] < c12_c_b->data[c12_b_j]);
          } else {
            c12_varargout_1 = false;
          }

          if (c12_varargout_1) {
            c12_t = c12_x->data[c12_b_xstart];
            c12_x->data[c12_b_xstart] = c12_x->data[c12_xmid];
            c12_x->data[c12_xmid] = c12_t;
          }

          c12_b_varargin_1 = c12_x->data[c12_b_xend];
          c12_b_varargin_2 = c12_x->data[c12_b_xstart];
          c12_i13 = c12_a->size[0];
          c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i13,
            &c12_hc_emlrtRTEI);
          c12_h_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_h_loop_ub; c12_i14++) {
            c12_a->data[c12_i14] = c12_cmp.tunableEnvironment[0].f1->
              data[c12_i14];
          }

          c12_i15 = c12_c_b->size[0];
          c12_c_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i15,
            &c12_hc_emlrtRTEI);
          c12_i_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
          for (c12_i16 = 0; c12_i16 <= c12_i_loop_ub; c12_i16++) {
            c12_c_b->data[c12_i16] = c12_cmp.tunableEnvironment[1].f1->
              data[c12_i16];
          }

          c12_i17 = c12_b_environment[0].f1->size[0];
          c12_b_environment[0].f1->size[0] = c12_a->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
            c12_b_environment[0].f1, c12_i17, &c12_hc_emlrtRTEI);
          c12_j_loop_ub = c12_a->size[0] - 1;
          for (c12_i18 = 0; c12_i18 <= c12_j_loop_ub; c12_i18++) {
            c12_b_environment[0].f1->data[c12_i18] = c12_a->data[c12_i18];
          }

          c12_i19 = c12_b_environment[1].f1->size[0];
          c12_b_environment[1].f1->size[0] = c12_c_b->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
            c12_b_environment[1].f1, c12_i19, &c12_hc_emlrtRTEI);
          c12_k_loop_ub = c12_c_b->size[0] - 1;
          for (c12_i20 = 0; c12_i20 <= c12_k_loop_ub; c12_i20++) {
            c12_b_environment[1].f1->data[c12_i20] = c12_c_b->data[c12_i20];
          }

          c12_i21 = c12_a->size[0];
          c12_a->size[0] = c12_b_environment[0].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i21,
            &c12_ic_emlrtRTEI);
          c12_l_loop_ub = c12_b_environment[0].f1->size[0] - 1;
          for (c12_i22 = 0; c12_i22 <= c12_l_loop_ub; c12_i22++) {
            c12_a->data[c12_i22] = c12_b_environment[0].f1->data[c12_i22];
          }

          c12_i23 = c12_c_b->size[0];
          c12_c_b->size[0] = c12_b_environment[1].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i23,
            &c12_ic_emlrtRTEI);
          c12_m_loop_ub = c12_b_environment[1].f1->size[0] - 1;
          for (c12_i24 = 0; c12_i24 <= c12_m_loop_ub; c12_i24++) {
            c12_c_b->data[c12_i24] = c12_b_environment[1].f1->data[c12_i24];
          }

          c12_d_i = c12_b_varargin_1;
          c12_c_j = c12_b_varargin_2;
          c12_e_i = c12_d_i - 1;
          c12_d_j = c12_c_j - 1;
          c12_b_ai = c12_a->data[c12_e_i];
          c12_b_aj = c12_a->data[c12_d_j];
          if (c12_b_ai < c12_b_aj) {
            c12_b_varargout_1 = true;
          } else if (c12_b_ai == c12_b_aj) {
            c12_b_varargout_1 = (c12_c_b->data[c12_e_i] < c12_c_b->data[c12_d_j]);
          } else {
            c12_b_varargout_1 = false;
          }

          if (c12_b_varargout_1) {
            c12_t = c12_x->data[c12_b_xstart];
            c12_x->data[c12_b_xstart] = c12_x->data[c12_b_xend];
            c12_x->data[c12_b_xend] = c12_t;
          }

          c12_c_varargin_1 = c12_x->data[c12_b_xend];
          c12_c_varargin_2 = c12_x->data[c12_xmid];
          c12_i25 = c12_a->size[0];
          c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i25,
            &c12_hc_emlrtRTEI);
          c12_n_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
          for (c12_i26 = 0; c12_i26 <= c12_n_loop_ub; c12_i26++) {
            c12_a->data[c12_i26] = c12_cmp.tunableEnvironment[0].f1->
              data[c12_i26];
          }

          c12_i27 = c12_c_b->size[0];
          c12_c_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i27,
            &c12_hc_emlrtRTEI);
          c12_o_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
          for (c12_i28 = 0; c12_i28 <= c12_o_loop_ub; c12_i28++) {
            c12_c_b->data[c12_i28] = c12_cmp.tunableEnvironment[1].f1->
              data[c12_i28];
          }

          c12_i29 = c12_c_environment[0].f1->size[0];
          c12_c_environment[0].f1->size[0] = c12_a->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
            c12_c_environment[0].f1, c12_i29, &c12_hc_emlrtRTEI);
          c12_p_loop_ub = c12_a->size[0] - 1;
          for (c12_i30 = 0; c12_i30 <= c12_p_loop_ub; c12_i30++) {
            c12_c_environment[0].f1->data[c12_i30] = c12_a->data[c12_i30];
          }

          c12_i31 = c12_c_environment[1].f1->size[0];
          c12_c_environment[1].f1->size[0] = c12_c_b->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
            c12_c_environment[1].f1, c12_i31, &c12_hc_emlrtRTEI);
          c12_q_loop_ub = c12_c_b->size[0] - 1;
          for (c12_i32 = 0; c12_i32 <= c12_q_loop_ub; c12_i32++) {
            c12_c_environment[1].f1->data[c12_i32] = c12_c_b->data[c12_i32];
          }

          c12_i33 = c12_a->size[0];
          c12_a->size[0] = c12_c_environment[0].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i33,
            &c12_ic_emlrtRTEI);
          c12_r_loop_ub = c12_c_environment[0].f1->size[0] - 1;
          for (c12_i34 = 0; c12_i34 <= c12_r_loop_ub; c12_i34++) {
            c12_a->data[c12_i34] = c12_c_environment[0].f1->data[c12_i34];
          }

          c12_i35 = c12_c_b->size[0];
          c12_c_b->size[0] = c12_c_environment[1].f1->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b, c12_i35,
            &c12_ic_emlrtRTEI);
          c12_s_loop_ub = c12_c_environment[1].f1->size[0] - 1;
          for (c12_i36 = 0; c12_i36 <= c12_s_loop_ub; c12_i36++) {
            c12_c_b->data[c12_i36] = c12_c_environment[1].f1->data[c12_i36];
          }

          c12_f_i = c12_c_varargin_1;
          c12_e_j = c12_c_varargin_2;
          c12_g_i = c12_f_i - 1;
          c12_f_j = c12_e_j - 1;
          c12_c_ai = c12_a->data[c12_g_i];
          c12_c_aj = c12_a->data[c12_f_j];
          if (c12_c_ai < c12_c_aj) {
            c12_c_varargout_1 = true;
          } else if (c12_c_ai == c12_c_aj) {
            c12_c_varargout_1 = (c12_c_b->data[c12_g_i] < c12_c_b->data[c12_f_j]);
          } else {
            c12_c_varargout_1 = false;
          }

          if (c12_c_varargout_1) {
            c12_t = c12_x->data[c12_xmid];
            c12_x->data[c12_xmid] = c12_x->data[c12_b_xend];
            c12_x->data[c12_b_xend] = c12_t;
          }

          c12_pivot = c12_x->data[c12_xmid];
          c12_x->data[c12_xmid] = c12_x->data[c12_b_xend - 1];
          c12_x->data[c12_b_xend - 1] = c12_pivot;
          c12_h_i = c12_b_xstart;
          c12_g_j = c12_b_xend - 1;
          do {
            c12_exitg3 = 0;
            c12_h_i++;
            do {
              c12_exitg4 = 0;
              c12_d_varargin_1 = c12_x->data[c12_h_i];
              c12_d_varargin_2 = c12_pivot;
              c12_i37 = c12_a->size[0];
              c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a,
                c12_i37, &c12_hc_emlrtRTEI);
              c12_t_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
              for (c12_i38 = 0; c12_i38 <= c12_t_loop_ub; c12_i38++) {
                c12_a->data[c12_i38] = c12_cmp.tunableEnvironment[0].f1->
                  data[c12_i38];
              }

              c12_i39 = c12_c_b->size[0];
              c12_c_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b,
                c12_i39, &c12_hc_emlrtRTEI);
              c12_u_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
              for (c12_i40 = 0; c12_i40 <= c12_u_loop_ub; c12_i40++) {
                c12_c_b->data[c12_i40] = c12_cmp.tunableEnvironment[1].f1->
                  data[c12_i40];
              }

              c12_i41 = c12_d_environment[0].f1->size[0];
              c12_d_environment[0].f1->size[0] = c12_a->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
                c12_d_environment[0].f1, c12_i41, &c12_hc_emlrtRTEI);
              c12_v_loop_ub = c12_a->size[0] - 1;
              for (c12_i42 = 0; c12_i42 <= c12_v_loop_ub; c12_i42++) {
                c12_d_environment[0].f1->data[c12_i42] = c12_a->data[c12_i42];
              }

              c12_i43 = c12_d_environment[1].f1->size[0];
              c12_d_environment[1].f1->size[0] = c12_c_b->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
                c12_d_environment[1].f1, c12_i43, &c12_hc_emlrtRTEI);
              c12_w_loop_ub = c12_c_b->size[0] - 1;
              for (c12_i44 = 0; c12_i44 <= c12_w_loop_ub; c12_i44++) {
                c12_d_environment[1].f1->data[c12_i44] = c12_c_b->data[c12_i44];
              }

              c12_i45 = c12_a->size[0];
              c12_a->size[0] = c12_d_environment[0].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a,
                c12_i45, &c12_ic_emlrtRTEI);
              c12_x_loop_ub = c12_d_environment[0].f1->size[0] - 1;
              for (c12_i46 = 0; c12_i46 <= c12_x_loop_ub; c12_i46++) {
                c12_a->data[c12_i46] = c12_d_environment[0].f1->data[c12_i46];
              }

              c12_i47 = c12_c_b->size[0];
              c12_c_b->size[0] = c12_d_environment[1].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b,
                c12_i47, &c12_ic_emlrtRTEI);
              c12_y_loop_ub = c12_d_environment[1].f1->size[0] - 1;
              for (c12_i48 = 0; c12_i48 <= c12_y_loop_ub; c12_i48++) {
                c12_c_b->data[c12_i48] = c12_d_environment[1].f1->data[c12_i48];
              }

              c12_i_i = c12_d_varargin_1;
              c12_h_j = c12_d_varargin_2;
              c12_j_i = c12_i_i - 1;
              c12_i_j = c12_h_j - 1;
              c12_d_ai = c12_a->data[c12_j_i];
              c12_d_aj = c12_a->data[c12_i_j];
              if (c12_d_ai < c12_d_aj) {
                c12_d_varargout_1 = true;
              } else if (c12_d_ai == c12_d_aj) {
                c12_d_varargout_1 = (c12_c_b->data[c12_j_i] < c12_c_b->
                                     data[c12_i_j]);
              } else {
                c12_d_varargout_1 = false;
              }

              if (c12_d_varargout_1) {
                c12_h_i++;
              } else {
                c12_exitg4 = 1;
              }
            } while (c12_exitg4 == 0);

            c12_g_j--;
            do {
              c12_exitg4 = 0;
              c12_e_varargin_1 = c12_pivot;
              c12_e_varargin_2 = c12_x->data[c12_g_j];
              c12_i49 = c12_a->size[0];
              c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a,
                c12_i49, &c12_hc_emlrtRTEI);
              c12_ab_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
              for (c12_i50 = 0; c12_i50 <= c12_ab_loop_ub; c12_i50++) {
                c12_a->data[c12_i50] = c12_cmp.tunableEnvironment[0].f1->
                  data[c12_i50];
              }

              c12_i51 = c12_c_b->size[0];
              c12_c_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b,
                c12_i51, &c12_hc_emlrtRTEI);
              c12_bb_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
              for (c12_i52 = 0; c12_i52 <= c12_bb_loop_ub; c12_i52++) {
                c12_c_b->data[c12_i52] = c12_cmp.tunableEnvironment[1].f1->
                  data[c12_i52];
              }

              c12_i53 = c12_e_environment[0].f1->size[0];
              c12_e_environment[0].f1->size[0] = c12_a->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
                c12_e_environment[0].f1, c12_i53, &c12_hc_emlrtRTEI);
              c12_cb_loop_ub = c12_a->size[0] - 1;
              for (c12_i54 = 0; c12_i54 <= c12_cb_loop_ub; c12_i54++) {
                c12_e_environment[0].f1->data[c12_i54] = c12_a->data[c12_i54];
              }

              c12_i55 = c12_e_environment[1].f1->size[0];
              c12_e_environment[1].f1->size[0] = c12_c_b->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp,
                c12_e_environment[1].f1, c12_i55, &c12_hc_emlrtRTEI);
              c12_db_loop_ub = c12_c_b->size[0] - 1;
              for (c12_i56 = 0; c12_i56 <= c12_db_loop_ub; c12_i56++) {
                c12_e_environment[1].f1->data[c12_i56] = c12_c_b->data[c12_i56];
              }

              c12_i57 = c12_a->size[0];
              c12_a->size[0] = c12_e_environment[0].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a,
                c12_i57, &c12_ic_emlrtRTEI);
              c12_eb_loop_ub = c12_e_environment[0].f1->size[0] - 1;
              for (c12_i58 = 0; c12_i58 <= c12_eb_loop_ub; c12_i58++) {
                c12_a->data[c12_i58] = c12_e_environment[0].f1->data[c12_i58];
              }

              c12_i59 = c12_c_b->size[0];
              c12_c_b->size[0] = c12_e_environment[1].f1->size[0];
              c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_b,
                c12_i59, &c12_ic_emlrtRTEI);
              c12_fb_loop_ub = c12_e_environment[1].f1->size[0] - 1;
              for (c12_i60 = 0; c12_i60 <= c12_fb_loop_ub; c12_i60++) {
                c12_c_b->data[c12_i60] = c12_e_environment[1].f1->data[c12_i60];
              }

              c12_k_i = c12_e_varargin_1;
              c12_j_j = c12_e_varargin_2;
              c12_l_i = c12_k_i - 1;
              c12_k_j = c12_j_j - 1;
              c12_e_ai = c12_a->data[c12_l_i];
              c12_e_aj = c12_a->data[c12_k_j];
              if (c12_e_ai < c12_e_aj) {
                c12_e_varargout_1 = true;
              } else if (c12_e_ai == c12_e_aj) {
                c12_e_varargout_1 = (c12_c_b->data[c12_l_i] < c12_c_b->
                                     data[c12_k_j]);
              } else {
                c12_e_varargout_1 = false;
              }

              if (c12_e_varargout_1) {
                c12_g_j--;
              } else {
                c12_exitg4 = 1;
              }
            } while (c12_exitg4 == 0);

            if (c12_h_i + 1 >= c12_g_j + 1) {
              c12_exitg3 = 1;
            } else {
              c12_t = c12_x->data[c12_h_i];
              c12_x->data[c12_h_i] = c12_x->data[c12_g_j];
              c12_x->data[c12_g_j] = c12_t;
            }
          } while (c12_exitg3 == 0);

          c12_b_p = c12_h_i + 1;
          c12_x->data[c12_b_xend - 1] = c12_x->data[c12_h_i];
          c12_x->data[c12_h_i] = c12_pivot;
          if (c12_b_p + 1 < c12_xend) {
            c12_c_x.xstart = c12_b_p + 1;
            c12_c_x.xend = c12_xend;
            c12_c_x.depth = c12_depth;
            c12_st.site = &c12_lb_emlrtRSI;
            c12_b_nd = c12_b_st.d.size[0];
            if (!(c12_b_st.n < c12_b_nd)) {
              c12_f_y = NULL;
              sf_mex_assign(&c12_f_y, sf_mex_create("y", c12_b_cv2, 10, 0U, 1U,
                0U, 2, 1, 28), false);
              c12_h_y = NULL;
              sf_mex_assign(&c12_h_y, sf_mex_create("y", c12_b_cv2, 10, 0U, 1U,
                0U, 2, 1, 28), false);
              sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_f_y, 14, sf_mex_call
                          (&c12_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_st,
                "message", 1U, 1U, 14, c12_h_y)));
            }

            c12_b_st.d.data[c12_b_st.n] = c12_c_x;
            c12_b_st.n++;
          }

          if (c12_xstart < c12_b_p) {
            c12_d_x.xstart = c12_xstart;
            c12_d_x.xend = c12_b_p;
            c12_d_x.depth = c12_depth;
            c12_st.site = &c12_kb_emlrtRSI;
            c12_c_nd = c12_b_st.d.size[0];
            if (!(c12_b_st.n < c12_c_nd)) {
              c12_g_y = NULL;
              sf_mex_assign(&c12_g_y, sf_mex_create("y", c12_b_cv3, 10, 0U, 1U,
                0U, 2, 1, 28), false);
              c12_i_y = NULL;
              sf_mex_assign(&c12_i_y, sf_mex_create("y", c12_b_cv3, 10, 0U, 1U,
                0U, 2, 1, 28), false);
              sf_mex_call(&c12_st, "error", 0U, 2U, 14, c12_g_y, 14, sf_mex_call
                          (&c12_st, "getString", 1U, 1U, 14, sf_mex_call(&c12_st,
                "message", 1U, 1U, 14, c12_i_y)));
            }

            c12_b_st.d.data[c12_b_st.n] = c12_d_x;
            c12_b_st.n++;
          }
        }
      } else {
        c12_exitg2 = 1;
      }
    } while (c12_exitg2 == 0);

    c12_emxFree_int32_T(chartInstance, &c12_c_b);
    c12_emxFree_int32_T(chartInstance, &c12_a);
    c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_e_environment);
    c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_d_environment);
    c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_c_environment);
    c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_b_environment);
    c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_environment);
  }

  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_d_cmp);
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_c_cmp);
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_b_cmp);
}

static void c12_b_heapsort(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_xstart,
  int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  c12_coder_internal_anonymous_function c12_b_cmp;
  c12_coder_internal_anonymous_function c12_c_cmp;
  int32_T c12_n;
  int32_T c12_b_xstart;
  int32_T c12_b_xend;
  int32_T c12_b_n;
  int32_T c12_idx;
  int32_T c12_i;
  int32_T c12_b;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  int32_T c12_t;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
    &c12_oc_emlrtRTEI);
  c12_emxInitStruct_coder_internal_an(chartInstance, c12_sp, &c12_c_cmp,
    &c12_pc_emlrtRTEI);
  c12_n = c12_xend - c12_xstart;
  c12_b_xstart = c12_xstart;
  c12_b_xend = c12_xend;
  c12_b_n = c12_n + 1;
  for (c12_idx = c12_b_n; c12_idx > 0; c12_idx--) {
    c12_emxCopyStruct_coder_internal_an(chartInstance, c12_sp, &c12_b_cmp,
      &c12_cmp, &c12_oc_emlrtRTEI);
    c12_st.site = &c12_ce_emlrtRSI;
    c12_b_heapify(chartInstance, &c12_st, c12_x, c12_idx, c12_b_xstart,
                  c12_b_xend, c12_b_cmp);
  }

  c12_i = c12_n;
  c12_st.site = &c12_rb_emlrtRSI;
  c12_b = c12_i;
  c12_b_b = c12_b;
  if (1 > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_k = 0; c12_k < c12_i; c12_k++) {
    c12_t = c12_x->data[c12_xend - 1];
    c12_x->data[c12_xend - 1] = c12_x->data[c12_xstart - 1];
    c12_x->data[c12_xstart - 1] = c12_t;
    c12_xend--;
    c12_st.site = &c12_de_emlrtRSI;
    c12_emxCopyStruct_coder_internal_an(chartInstance, &c12_st, &c12_c_cmp,
      &c12_cmp, &c12_pc_emlrtRTEI);
    c12_st.site = &c12_de_emlrtRSI;
    c12_b_heapify(chartInstance, &c12_st, c12_x, 1, c12_xstart, c12_xend,
                  c12_c_cmp);
  }

  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_c_cmp);
  c12_emxFreeStruct_coder_internal_an(chartInstance, &c12_b_cmp);
}

static void c12_b_heapify(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_emxArray_int32_T *c12_x, int32_T c12_idx, int32_T
  c12_xstart, int32_T c12_xend, c12_coder_internal_anonymous_function c12_cmp)
{
  boolean_T c12_changed;
  int32_T c12_xoff;
  int32_T c12_extremumIdx;
  int32_T c12_b;
  int32_T c12_y;
  int32_T c12_leftIdx;
  c12_cell_wrap_1 c12_environment[2];
  c12_cell_wrap_1 c12_b_environment[2];
  c12_emxArray_int32_T *c12_a;
  c12_emxArray_int32_T *c12_b_b;
  int32_T c12_rightIdx;
  c12_cell_wrap_1 c12_c_environment[2];
  int32_T c12_extremum;
  int32_T c12_cmpIdx;
  int32_T c12_xcmp;
  int32_T c12_xr;
  int32_T c12_varargin_1;
  int32_T c12_b_varargin_1;
  int32_T c12_varargin_2;
  int32_T c12_b_varargin_2;
  int32_T c12_i;
  int32_T c12_i1;
  int32_T c12_loop_ub;
  int32_T c12_b_loop_ub;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_c_loop_ub;
  int32_T c12_d_loop_ub;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_i8;
  int32_T c12_i9;
  int32_T c12_e_loop_ub;
  int32_T c12_f_loop_ub;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_g_loop_ub;
  int32_T c12_h_loop_ub;
  int32_T c12_i14;
  int32_T c12_i15;
  int32_T c12_i16;
  int32_T c12_i17;
  int32_T c12_i_loop_ub;
  int32_T c12_j_loop_ub;
  int32_T c12_i18;
  int32_T c12_i19;
  int32_T c12_i20;
  int32_T c12_i21;
  int32_T c12_k_loop_ub;
  int32_T c12_l_loop_ub;
  int32_T c12_i22;
  int32_T c12_i23;
  int32_T c12_b_i;
  int32_T c12_c_i;
  int32_T c12_j;
  int32_T c12_b_j;
  int32_T c12_d_i;
  int32_T c12_e_i;
  int32_T c12_c_j;
  int32_T c12_d_j;
  int32_T c12_ai;
  int32_T c12_b_ai;
  int32_T c12_aj;
  int32_T c12_b_aj;
  boolean_T c12_varargout_1;
  boolean_T c12_b_varargout_1;
  int32_T c12_c_varargin_1;
  int32_T c12_c_varargin_2;
  int32_T c12_i24;
  int32_T c12_m_loop_ub;
  int32_T c12_i25;
  int32_T c12_i26;
  int32_T c12_n_loop_ub;
  int32_T c12_i27;
  int32_T c12_i28;
  int32_T c12_o_loop_ub;
  int32_T c12_i29;
  int32_T c12_i30;
  int32_T c12_p_loop_ub;
  int32_T c12_i31;
  int32_T c12_i32;
  int32_T c12_q_loop_ub;
  int32_T c12_i33;
  int32_T c12_i34;
  int32_T c12_r_loop_ub;
  int32_T c12_i35;
  int32_T c12_f_i;
  int32_T c12_e_j;
  int32_T c12_g_i;
  int32_T c12_f_j;
  int32_T c12_c_ai;
  int32_T c12_c_aj;
  boolean_T c12_c_varargout_1;
  int32_T c12_c_b;
  int32_T c12_b_y;
  c12_changed = true;
  c12_xoff = c12_xstart - 1;
  c12_extremumIdx = (c12_idx + c12_xoff) - 1;
  c12_b = c12_idx;
  c12_y = c12_b << 1;
  c12_leftIdx = c12_y + c12_xoff;
  c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_environment,
    &c12_jc_emlrtRTEI);
  c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_b_environment,
    &c12_jc_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_a, 1, &c12_ic_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_b_b, 1, &c12_ic_emlrtRTEI);
  while (c12_changed && (c12_leftIdx < c12_xend)) {
    c12_changed = false;
    c12_rightIdx = c12_leftIdx;
    c12_extremum = c12_x->data[c12_extremumIdx];
    c12_cmpIdx = c12_leftIdx;
    c12_xcmp = c12_x->data[c12_leftIdx - 1];
    c12_xr = c12_x->data[c12_rightIdx];
    c12_b_varargin_1 = c12_xcmp;
    c12_b_varargin_2 = c12_xr;
    c12_i1 = c12_a->size[0];
    c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i1,
      &c12_hc_emlrtRTEI);
    c12_b_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
    for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
      c12_a->data[c12_i3] = c12_cmp.tunableEnvironment[0].f1->data[c12_i3];
    }

    c12_i5 = c12_b_b->size[0];
    c12_b_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_b, c12_i5,
      &c12_hc_emlrtRTEI);
    c12_d_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
    for (c12_i7 = 0; c12_i7 <= c12_d_loop_ub; c12_i7++) {
      c12_b_b->data[c12_i7] = c12_cmp.tunableEnvironment[1].f1->data[c12_i7];
    }

    c12_i9 = c12_environment[0].f1->size[0];
    c12_environment[0].f1->size[0] = c12_a->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_environment[0].f1,
      c12_i9, &c12_hc_emlrtRTEI);
    c12_f_loop_ub = c12_a->size[0] - 1;
    for (c12_i11 = 0; c12_i11 <= c12_f_loop_ub; c12_i11++) {
      c12_environment[0].f1->data[c12_i11] = c12_a->data[c12_i11];
    }

    c12_i13 = c12_environment[1].f1->size[0];
    c12_environment[1].f1->size[0] = c12_b_b->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_environment[1].f1,
      c12_i13, &c12_hc_emlrtRTEI);
    c12_h_loop_ub = c12_b_b->size[0] - 1;
    for (c12_i15 = 0; c12_i15 <= c12_h_loop_ub; c12_i15++) {
      c12_environment[1].f1->data[c12_i15] = c12_b_b->data[c12_i15];
    }

    c12_i17 = c12_a->size[0];
    c12_a->size[0] = c12_environment[0].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i17,
      &c12_ic_emlrtRTEI);
    c12_j_loop_ub = c12_environment[0].f1->size[0] - 1;
    for (c12_i19 = 0; c12_i19 <= c12_j_loop_ub; c12_i19++) {
      c12_a->data[c12_i19] = c12_environment[0].f1->data[c12_i19];
    }

    c12_i21 = c12_b_b->size[0];
    c12_b_b->size[0] = c12_environment[1].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_b, c12_i21,
      &c12_ic_emlrtRTEI);
    c12_l_loop_ub = c12_environment[1].f1->size[0] - 1;
    for (c12_i23 = 0; c12_i23 <= c12_l_loop_ub; c12_i23++) {
      c12_b_b->data[c12_i23] = c12_environment[1].f1->data[c12_i23];
    }

    c12_c_i = c12_b_varargin_1;
    c12_b_j = c12_b_varargin_2;
    c12_e_i = c12_c_i - 1;
    c12_d_j = c12_b_j - 1;
    c12_b_ai = c12_a->data[c12_e_i];
    c12_b_aj = c12_a->data[c12_d_j];
    if (c12_b_ai < c12_b_aj) {
      c12_b_varargout_1 = true;
    } else if (c12_b_ai == c12_b_aj) {
      c12_b_varargout_1 = (c12_b_b->data[c12_e_i] < c12_b_b->data[c12_d_j]);
    } else {
      c12_b_varargout_1 = false;
    }

    if (c12_b_varargout_1) {
      c12_cmpIdx = c12_leftIdx + 1;
      c12_xcmp = c12_xr;
    }

    c12_c_varargin_1 = c12_extremum;
    c12_c_varargin_2 = c12_xcmp;
    c12_i24 = c12_a->size[0];
    c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i24,
      &c12_hc_emlrtRTEI);
    c12_m_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
    for (c12_i25 = 0; c12_i25 <= c12_m_loop_ub; c12_i25++) {
      c12_a->data[c12_i25] = c12_cmp.tunableEnvironment[0].f1->data[c12_i25];
    }

    c12_i26 = c12_b_b->size[0];
    c12_b_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_b, c12_i26,
      &c12_hc_emlrtRTEI);
    c12_n_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
    for (c12_i27 = 0; c12_i27 <= c12_n_loop_ub; c12_i27++) {
      c12_b_b->data[c12_i27] = c12_cmp.tunableEnvironment[1].f1->data[c12_i27];
    }

    c12_i28 = c12_b_environment[0].f1->size[0];
    c12_b_environment[0].f1->size[0] = c12_a->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_environment[0].f1,
      c12_i28, &c12_hc_emlrtRTEI);
    c12_o_loop_ub = c12_a->size[0] - 1;
    for (c12_i29 = 0; c12_i29 <= c12_o_loop_ub; c12_i29++) {
      c12_b_environment[0].f1->data[c12_i29] = c12_a->data[c12_i29];
    }

    c12_i30 = c12_b_environment[1].f1->size[0];
    c12_b_environment[1].f1->size[0] = c12_b_b->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_environment[1].f1,
      c12_i30, &c12_hc_emlrtRTEI);
    c12_p_loop_ub = c12_b_b->size[0] - 1;
    for (c12_i31 = 0; c12_i31 <= c12_p_loop_ub; c12_i31++) {
      c12_b_environment[1].f1->data[c12_i31] = c12_b_b->data[c12_i31];
    }

    c12_i32 = c12_a->size[0];
    c12_a->size[0] = c12_b_environment[0].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i32,
      &c12_ic_emlrtRTEI);
    c12_q_loop_ub = c12_b_environment[0].f1->size[0] - 1;
    for (c12_i33 = 0; c12_i33 <= c12_q_loop_ub; c12_i33++) {
      c12_a->data[c12_i33] = c12_b_environment[0].f1->data[c12_i33];
    }

    c12_i34 = c12_b_b->size[0];
    c12_b_b->size[0] = c12_b_environment[1].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_b, c12_i34,
      &c12_ic_emlrtRTEI);
    c12_r_loop_ub = c12_b_environment[1].f1->size[0] - 1;
    for (c12_i35 = 0; c12_i35 <= c12_r_loop_ub; c12_i35++) {
      c12_b_b->data[c12_i35] = c12_b_environment[1].f1->data[c12_i35];
    }

    c12_f_i = c12_c_varargin_1;
    c12_e_j = c12_c_varargin_2;
    c12_g_i = c12_f_i - 1;
    c12_f_j = c12_e_j - 1;
    c12_c_ai = c12_a->data[c12_g_i];
    c12_c_aj = c12_a->data[c12_f_j];
    if (c12_c_ai < c12_c_aj) {
      c12_c_varargout_1 = true;
    } else if (c12_c_ai == c12_c_aj) {
      c12_c_varargout_1 = (c12_b_b->data[c12_g_i] < c12_b_b->data[c12_f_j]);
    } else {
      c12_c_varargout_1 = false;
    }

    if (c12_c_varargout_1) {
      c12_x->data[c12_extremumIdx] = c12_xcmp;
      c12_x->data[c12_cmpIdx - 1] = c12_extremum;
      c12_extremumIdx = c12_cmpIdx - 1;
      c12_c_b = c12_cmpIdx - c12_xoff;
      c12_b_y = c12_c_b << 1;
      c12_leftIdx = c12_b_y + c12_xoff;
      c12_changed = true;
    }
  }

  c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_b_environment);
  c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_environment);
  c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp, c12_c_environment,
    &c12_jc_emlrtRTEI);
  if (c12_changed && (c12_leftIdx <= c12_xend)) {
    c12_extremum = c12_x->data[c12_extremumIdx];
    c12_xcmp = c12_x->data[c12_leftIdx - 1];
    c12_varargin_1 = c12_extremum;
    c12_varargin_2 = c12_xcmp;
    c12_i = c12_a->size[0];
    c12_a->size[0] = c12_cmp.tunableEnvironment[0].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i,
      &c12_hc_emlrtRTEI);
    c12_loop_ub = c12_cmp.tunableEnvironment[0].f1->size[0] - 1;
    for (c12_i2 = 0; c12_i2 <= c12_loop_ub; c12_i2++) {
      c12_a->data[c12_i2] = c12_cmp.tunableEnvironment[0].f1->data[c12_i2];
    }

    c12_i4 = c12_b_b->size[0];
    c12_b_b->size[0] = c12_cmp.tunableEnvironment[1].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_b, c12_i4,
      &c12_hc_emlrtRTEI);
    c12_c_loop_ub = c12_cmp.tunableEnvironment[1].f1->size[0] - 1;
    for (c12_i6 = 0; c12_i6 <= c12_c_loop_ub; c12_i6++) {
      c12_b_b->data[c12_i6] = c12_cmp.tunableEnvironment[1].f1->data[c12_i6];
    }

    c12_i8 = c12_c_environment[0].f1->size[0];
    c12_c_environment[0].f1->size[0] = c12_a->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_environment[0].f1,
      c12_i8, &c12_hc_emlrtRTEI);
    c12_e_loop_ub = c12_a->size[0] - 1;
    for (c12_i10 = 0; c12_i10 <= c12_e_loop_ub; c12_i10++) {
      c12_c_environment[0].f1->data[c12_i10] = c12_a->data[c12_i10];
    }

    c12_i12 = c12_c_environment[1].f1->size[0];
    c12_c_environment[1].f1->size[0] = c12_b_b->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_c_environment[1].f1,
      c12_i12, &c12_hc_emlrtRTEI);
    c12_g_loop_ub = c12_b_b->size[0] - 1;
    for (c12_i14 = 0; c12_i14 <= c12_g_loop_ub; c12_i14++) {
      c12_c_environment[1].f1->data[c12_i14] = c12_b_b->data[c12_i14];
    }

    c12_i16 = c12_a->size[0];
    c12_a->size[0] = c12_c_environment[0].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_a, c12_i16,
      &c12_ic_emlrtRTEI);
    c12_i_loop_ub = c12_c_environment[0].f1->size[0] - 1;
    for (c12_i18 = 0; c12_i18 <= c12_i_loop_ub; c12_i18++) {
      c12_a->data[c12_i18] = c12_c_environment[0].f1->data[c12_i18];
    }

    c12_i20 = c12_b_b->size[0];
    c12_b_b->size[0] = c12_c_environment[1].f1->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_b_b, c12_i20,
      &c12_ic_emlrtRTEI);
    c12_k_loop_ub = c12_c_environment[1].f1->size[0] - 1;
    for (c12_i22 = 0; c12_i22 <= c12_k_loop_ub; c12_i22++) {
      c12_b_b->data[c12_i22] = c12_c_environment[1].f1->data[c12_i22];
    }

    c12_b_i = c12_varargin_1;
    c12_j = c12_varargin_2;
    c12_d_i = c12_b_i - 1;
    c12_c_j = c12_j - 1;
    c12_ai = c12_a->data[c12_d_i];
    c12_aj = c12_a->data[c12_c_j];
    if (c12_ai < c12_aj) {
      c12_varargout_1 = true;
    } else if (c12_ai == c12_aj) {
      c12_varargout_1 = (c12_b_b->data[c12_d_i] < c12_b_b->data[c12_c_j]);
    } else {
      c12_varargout_1 = false;
    }

    if (c12_varargout_1) {
      c12_x->data[c12_extremumIdx] = c12_xcmp;
      c12_x->data[c12_leftIdx - 1] = c12_extremum;
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_b_b);
  c12_emxFree_int32_T(chartInstance, &c12_a);
  c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_c_environment);
}

static void c12_b_permuteVector(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_idx, c12_emxArray_int32_T *
  c12_y)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  c12_emxArray_int32_T *c12_t;
  int32_T c12_ny;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_b;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  int32_T c12_b_k;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_t, 1, &c12_qc_emlrtRTEI);
  c12_ny = c12_y->size[0];
  c12_i = c12_t->size[0];
  c12_t->size[0] = c12_y->size[0];
  c12_st.site = &c12_td_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_t, c12_i,
    &c12_qc_emlrtRTEI);
  c12_loop_ub = c12_y->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_t->data[c12_i1] = c12_y->data[c12_i1];
  }

  c12_st.site = &c12_sb_emlrtRSI;
  c12_b = c12_ny;
  c12_b_b = c12_b;
  if (1 > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_k = 1; c12_k - 1 < c12_ny; c12_k++) {
    c12_b_k = c12_k - 1;
    c12_y->data[c12_b_k] = c12_t->data[c12_idx->data[c12_b_k] - 1];
  }

  c12_emxFree_int32_T(chartInstance, &c12_t);
}

static void c12_b_sparse_fillIn(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  int32_T c12_idx;
  int32_T c12_i;
  int32_T c12_b;
  int32_T c12_b_b;
  boolean_T c12_overflow;
  int32_T c12_c;
  int32_T c12_b_c;
  int32_T c12_ridx;
  real_T c12_val;
  int32_T c12_currRowIdx;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_idx = 0;
  c12_i = c12_this->colidx->size[0] - 2;
  c12_st.site = &c12_ac_emlrtRSI;
  c12_b = c12_i + 1;
  c12_b_b = c12_b;
  if (1 > c12_b_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_b_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_c = 1; c12_c - 1 <= c12_i; c12_c++) {
    c12_b_c = c12_c;
    c12_ridx = c12_this->colidx->data[c12_b_c - 1] - 1;
    c12_this->colidx->data[c12_b_c - 1] = c12_idx + 1;
    while (c12_ridx + 1 < c12_this->colidx->data[c12_b_c]) {
      c12_val = 0.0;
      c12_currRowIdx = c12_this->rowidx->data[c12_ridx];
      while ((c12_ridx + 1 < c12_this->colidx->data[c12_b_c]) &&
             (c12_this->rowidx->data[c12_ridx] == c12_currRowIdx)) {
        c12_val += c12_this->d->data[c12_ridx];
        c12_ridx++;
      }

      if (c12_val != 0.0) {
        c12_this->d->data[c12_idx] = c12_val;
        c12_this->rowidx->data[c12_idx] = c12_currRowIdx;
        c12_idx++;
      }
    }
  }

  c12_this->colidx->data[c12_this->colidx->size[0] - 1] = c12_idx + 1;
}

static void c12_e_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  c12_emxArray_int32_T *c12_b_this;
  int32_T c12_cidx;
  int32_T c12_b_cidx;
  int32_T c12_k;
  real_T c12_nt;
  int32_T c12_col;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_vidx;
  boolean_T c12_found;
  real_T c12_thisv;
  real_T c12_v;
  int32_T c12_c_y;
  int32_T c12_d_y;
  real_T c12_rhsv;
  int32_T c12_n;
  real_T c12_b_n;
  int32_T c12_nz;
  int32_T c12_idx;
  int32_T c12_outstart;
  int32_T c12_instart;
  int32_T c12_nelem;
  int32_T c12_b_outstart;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_b_col;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_c_col;
  int32_T c12_b_k;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_c_k;
  int32_T c12_i6;
  int32_T c12_c_loop_ub;
  int32_T c12_c_outstart;
  int32_T c12_i7;
  int32_T c12_c_instart;
  int32_T c12_c_nelem;
  int32_T c12_d_outstart;
  int32_T c12_i8;
  int32_T c12_d_instart;
  int32_T c12_d_nelem;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_e_loop_ub;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_g_loop_ub;
  int32_T c12_e_outstart;
  int32_T c12_i15;
  int32_T c12_e_instart;
  int32_T c12_e_nelem;
  int32_T c12_f_outstart;
  int32_T c12_i16;
  int32_T c12_f_instart;
  int32_T c12_f_nelem;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  int32_T c12_i_loop_ub;
  int32_T c12_i19;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_st.site = &c12_bc_emlrtRSI;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_b_st.site = &c12_cc_emlrtRSI;
  c12_c_st.site = &c12_dc_emlrtRSI;
  c12_sparse_validateNumericIndex(chartInstance, &c12_c_st);
  c12_c_st.site = &c12_ec_emlrtRSI;
  c12_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, &c12_c_st, &c12_b_y, 1, &c12_d_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_b_this, 1, &c12_emlrtRTEI);
  for (c12_cidx = 0; c12_cidx < 3; c12_cidx++) {
    c12_b_cidx = c12_cidx;
    c12_k = c12_b_cidx;
    c12_nt = 1.0 + (real_T)c12_k;
    c12_col = (int32_T)c12_nt;
    c12_i = c12_b_this->size[0];
    c12_b_this->size[0] = c12_this->rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_c_st, c12_b_this, c12_i,
      &c12_emlrtRTEI);
    c12_loop_ub = c12_this->rowidx->size[0] - 1;
    for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
      c12_b_this->data[c12_i1] = c12_this->rowidx->data[c12_i1];
    }

    c12_sparse_locBsearch(chartInstance, c12_b_this, 1, c12_this->colidx->
                          data[c12_col - 1], c12_this->colidx->data[c12_col],
                          &c12_vidx, &c12_found);
    if (c12_found) {
      c12_thisv = c12_this->d->data[c12_vidx - 1];
    } else {
      c12_thisv = 0.0;
    }

    c12_v = 1.0 + -(real_T)(c12_rhsIter.idx - 1);
    c12_c_y = c12_rhsIter.idx;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter.idx = c12_d_y;
    c12_rhsv = c12_v;
    if ((c12_thisv == 0.0) && (c12_rhsv == 0.0)) {
    } else {
      c12_n = c12_this->colidx->data[c12_this->colidx->size[0] - 1];
      c12_b_n = (real_T)(c12_n - 1);
      c12_nz = (int32_T)c12_b_n;
      if ((c12_thisv != 0.0) && (c12_rhsv != 0.0)) {
        c12_this->d->data[c12_vidx - 1] = c12_rhsv;
      } else if (c12_thisv == 0.0) {
        c12_idx = c12_vidx;
        if (c12_nz == c12_this->maxnz) {
          c12_d_st.site = &c12_fc_emlrtRSI;
          c12_c_realloc(chartInstance, &c12_d_st, c12_this, c12_nz + 10, c12_idx,
                        c12_idx + 1, c12_nz, 1);
          c12_this->rowidx->data[c12_idx] = 1;
          c12_this->d->data[c12_idx] = c12_rhsv;
        } else {
          c12_d_st.site = &c12_gc_emlrtRSI;
          c12_b_outstart = c12_idx + 2;
          c12_b_instart = c12_idx + 1;
          c12_b_nelem = c12_nz - c12_idx;
          if (!(c12_b_nelem <= 0)) {
            c12_e_st.site = &c12_kc_emlrtRSI;
            c12_i4 = c12_y->size[0];
            c12_y->size[0] = c12_this->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y,
              c12_i4, &c12_b_emlrtRTEI);
            c12_c_loop_ub = c12_this->rowidx->size[0] - 1;
            for (c12_i7 = 0; c12_i7 <= c12_c_loop_ub; c12_i7++) {
              c12_y->data[c12_i7] = c12_this->rowidx->data[c12_i7];
            }

            c12_d_outstart = c12_b_outstart - 1;
            c12_d_instart = c12_b_instart - 1;
            c12_d_nelem = c12_b_nelem;
            c12_i9 = c12_this->rowidx->size[0];
            c12_this->rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
              c12_this->rowidx, c12_i9, &c12_rc_emlrtRTEI);
            c12_e_loop_ub = c12_y->size[0] - 1;
            for (c12_i11 = 0; c12_i11 <= c12_e_loop_ub; c12_i11++) {
              c12_this->rowidx->data[c12_i11] = c12_y->data[c12_i11];
            }

            memmove((void *)&c12_this->rowidx->data[c12_d_outstart], (void *)
                    &c12_this->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                     c12_d_nelem * sizeof(int32_T)));
            c12_e_st.site = &c12_lc_emlrtRSI;
            c12_i13 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_this->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
              c12_i13, &c12_d_emlrtRTEI);
            c12_g_loop_ub = c12_this->d->size[0] - 1;
            for (c12_i15 = 0; c12_i15 <= c12_g_loop_ub; c12_i15++) {
              c12_b_y->data[c12_i15] = c12_this->d->data[c12_i15];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i17 = c12_this->d->size[0];
            c12_this->d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
              c12_i17, &c12_rc_emlrtRTEI);
            c12_i_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
              c12_this->d->data[c12_i19] = c12_b_y->data[c12_i19];
            }

            memmove((void *)&c12_this->d->data[c12_f_outstart], (void *)
                    &c12_this->d->data[c12_f_instart], (uint32_T)((size_t)
                     c12_f_nelem * sizeof(real_T)));
          }

          c12_this->d->data[c12_idx] = c12_rhsv;
          c12_this->rowidx->data[c12_idx] = 1;
        }

        c12_c_col = c12_col + 1;
        c12_i5 = c12_c_col;
        for (c12_c_k = c12_i5 - 1; c12_c_k + 1 < 14; c12_c_k++) {
          c12_this->colidx->data[c12_c_k]++;
        }
      } else {
        c12_d_st.site = &c12_hc_emlrtRSI;
        c12_outstart = c12_vidx;
        c12_instart = c12_vidx + 1;
        c12_nelem = c12_nz - c12_vidx;
        if (!(c12_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i2 = c12_y->size[0];
          c12_y->size[0] = c12_this->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i2,
            &c12_b_emlrtRTEI);
          c12_b_loop_ub = c12_this->rowidx->size[0] - 1;
          for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
            c12_y->data[c12_i6] = c12_this->rowidx->data[c12_i6];
          }

          c12_c_outstart = c12_outstart - 1;
          c12_c_instart = c12_instart - 1;
          c12_c_nelem = c12_nelem;
          c12_i8 = c12_this->rowidx->size[0];
          c12_this->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_this->rowidx, c12_i8, &c12_rc_emlrtRTEI);
          c12_d_loop_ub = c12_y->size[0] - 1;
          for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
            c12_this->rowidx->data[c12_i10] = c12_y->data[c12_i10];
          }

          memmove((void *)&c12_this->rowidx->data[c12_c_outstart], (void *)
                  &c12_this->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                   c12_c_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i12 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_this->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i12, &c12_d_emlrtRTEI);
          c12_f_loop_ub = c12_this->d->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
            c12_b_y->data[c12_i14] = c12_this->d->data[c12_i14];
          }

          c12_e_outstart = c12_outstart - 1;
          c12_e_instart = c12_instart - 1;
          c12_e_nelem = c12_nelem;
          c12_i16 = c12_this->d->size[0];
          c12_this->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
            c12_i16, &c12_rc_emlrtRTEI);
          c12_h_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
            c12_this->d->data[c12_i18] = c12_b_y->data[c12_i18];
          }

          memmove((void *)&c12_this->d->data[c12_e_outstart], (void *)
                  &c12_this->d->data[c12_e_instart], (uint32_T)((size_t)
                   c12_e_nelem * sizeof(real_T)));
        }

        c12_b_col = c12_col + 1;
        c12_i3 = c12_b_col;
        for (c12_b_k = c12_i3 - 1; c12_b_k + 1 < 14; c12_b_k++) {
          c12_this->colidx->data[c12_b_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_b_this);
  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
}

static void c12_c_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  c12_emxArray_int32_T *c12_rowidxt;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxArray_real_T *c12_dt;
  int32_T c12_i2;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  int32_T c12_a;
  int32_T c12_y;
  int32_T c12_b;
  int32_T c12_numAlloc;
  int32_T c12_i4;
  int32_T c12_c_loop_ub;
  int32_T c12_i5;
  int32_T c12_i6;
  int32_T c12_d_loop_ub;
  int32_T c12_i7;
  int32_T c12_b_b;
  int32_T c12_c_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  int32_T c12_b_k;
  int32_T c12_b_a;
  int32_T c12_d_b;
  int32_T c12_c_a;
  int32_T c12_e_b;
  boolean_T c12_b_overflow;
  int32_T c12_c_k;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_rowidxt, 1, &c12_sc_emlrtRTEI);
  c12_i = c12_rowidxt->size[0];
  c12_rowidxt->size[0] = c12_this->rowidx->size[0];
  c12_st.site = &c12_sd_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_rowidxt, c12_i,
    &c12_sc_emlrtRTEI);
  c12_loop_ub = c12_this->rowidx->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_rowidxt->data[c12_i1] = c12_this->rowidx->data[c12_i1];
  }

  c12_emxInit_real_T(chartInstance, c12_sp, &c12_dt, 1, &c12_tc_emlrtRTEI);
  c12_i2 = c12_dt->size[0];
  c12_dt->size[0] = c12_this->d->size[0];
  c12_st.site = &c12_wd_emlrtRSI;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_dt, c12_i2,
    &c12_tc_emlrtRTEI);
  c12_b_loop_ub = c12_this->d->size[0] - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_dt->data[c12_i3] = c12_this->d->data[c12_i3];
  }

  c12_a = c12_numAllocRequested;
  if (c12_a <= 144) {
    c12_y = c12_a;
  } else {
    c12_y = 144;
  }

  c12_b = c12_y;
  if (1 >= c12_b) {
    c12_numAlloc = 1;
  } else {
    c12_numAlloc = c12_b;
  }

  c12_i4 = c12_this->rowidx->size[0];
  c12_this->rowidx->size[0] = c12_numAlloc;
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_this->rowidx, c12_i4,
    &c12_uc_emlrtRTEI);
  c12_c_loop_ub = c12_numAlloc - 1;
  for (c12_i5 = 0; c12_i5 <= c12_c_loop_ub; c12_i5++) {
    c12_this->rowidx->data[c12_i5] = 0;
  }

  c12_i6 = c12_this->d->size[0];
  c12_this->d->size[0] = c12_numAlloc;
  c12_emxEnsureCapacity_real_T(chartInstance, c12_sp, c12_this->d, c12_i6,
    &c12_vc_emlrtRTEI);
  c12_d_loop_ub = c12_numAlloc - 1;
  for (c12_i7 = 0; c12_i7 <= c12_d_loop_ub; c12_i7++) {
    c12_this->d->data[c12_i7] = 0.0;
  }

  c12_this->maxnz = c12_numAlloc;
  c12_st.site = &c12_ic_emlrtRSI;
  c12_b_b = c12_ub1;
  c12_c_b = c12_b_b;
  if (1 > c12_c_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_c_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_k = 1; c12_k - 1 < c12_ub1; c12_k++) {
    c12_b_k = c12_k - 1;
    c12_this->rowidx->data[c12_b_k] = c12_rowidxt->data[c12_b_k];
    c12_this->d->data[c12_b_k] = c12_dt->data[c12_b_k];
  }

  c12_st.site = &c12_jc_emlrtRSI;
  c12_b_a = c12_lb2;
  c12_d_b = c12_ub2;
  c12_c_a = c12_b_a;
  c12_e_b = c12_d_b;
  if (c12_c_a > c12_e_b) {
    c12_b_overflow = false;
  } else {
    c12_b_overflow = (c12_e_b > 2147483646);
  }

  if (c12_b_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_c_k = c12_lb2 - 1; c12_c_k < c12_ub2; c12_c_k++) {
    c12_this->rowidx->data[c12_c_k + c12_offs] = c12_rowidxt->data[c12_c_k];
    c12_this->d->data[c12_c_k + c12_offs] = c12_dt->data[c12_c_k];
  }

  c12_emxFree_real_T(chartInstance, &c12_dt);
  c12_emxFree_int32_T(chartInstance, &c12_rowidxt);
}

static void c12_f_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  c12_emxArray_int32_T *c12_b_this;
  int32_T c12_cidx;
  int32_T c12_b_cidx;
  int32_T c12_k;
  real_T c12_nt;
  int32_T c12_col;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_vidx;
  boolean_T c12_found;
  real_T c12_thisv;
  real_T c12_v;
  int32_T c12_c_y;
  int32_T c12_d_y;
  real_T c12_rhsv;
  int32_T c12_n;
  real_T c12_b_n;
  int32_T c12_nz;
  int32_T c12_idx;
  int32_T c12_outstart;
  int32_T c12_instart;
  int32_T c12_nelem;
  int32_T c12_b_outstart;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_b_col;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_c_col;
  int32_T c12_b_k;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_c_k;
  int32_T c12_i6;
  int32_T c12_c_loop_ub;
  int32_T c12_c_outstart;
  int32_T c12_i7;
  int32_T c12_c_instart;
  int32_T c12_c_nelem;
  int32_T c12_d_outstart;
  int32_T c12_i8;
  int32_T c12_d_instart;
  int32_T c12_d_nelem;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_e_loop_ub;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_g_loop_ub;
  int32_T c12_e_outstart;
  int32_T c12_i15;
  int32_T c12_e_instart;
  int32_T c12_e_nelem;
  int32_T c12_f_outstart;
  int32_T c12_i16;
  int32_T c12_f_instart;
  int32_T c12_f_nelem;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  int32_T c12_i_loop_ub;
  int32_T c12_i19;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_st.site = &c12_bc_emlrtRSI;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_b_st.site = &c12_cc_emlrtRSI;
  c12_c_st.site = &c12_dc_emlrtRSI;
  c12_b_sparse_validateNumericIndex(chartInstance, &c12_c_st);
  c12_c_st.site = &c12_ec_emlrtRSI;
  c12_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, &c12_c_st, &c12_b_y, 1, &c12_d_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_b_this, 1, &c12_emlrtRTEI);
  for (c12_cidx = 0; c12_cidx < 3; c12_cidx++) {
    c12_b_cidx = c12_cidx;
    c12_k = c12_b_cidx;
    c12_nt = 10.0 + (real_T)c12_k;
    c12_col = (int32_T)c12_nt;
    c12_i = c12_b_this->size[0];
    c12_b_this->size[0] = c12_this->rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_c_st, c12_b_this, c12_i,
      &c12_emlrtRTEI);
    c12_loop_ub = c12_this->rowidx->size[0] - 1;
    for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
      c12_b_this->data[c12_i1] = c12_this->rowidx->data[c12_i1];
    }

    c12_sparse_locBsearch(chartInstance, c12_b_this, 12, c12_this->colidx->
                          data[c12_col - 1], c12_this->colidx->data[c12_col],
                          &c12_vidx, &c12_found);
    if (c12_found) {
      c12_thisv = c12_this->d->data[c12_vidx - 1];
    } else {
      c12_thisv = 0.0;
    }

    c12_v = 1.0 + -(real_T)(c12_rhsIter.idx - 1);
    c12_c_y = c12_rhsIter.idx;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter.idx = c12_d_y;
    c12_rhsv = c12_v;
    if ((c12_thisv == 0.0) && (c12_rhsv == 0.0)) {
    } else {
      c12_n = c12_this->colidx->data[c12_this->colidx->size[0] - 1];
      c12_b_n = (real_T)(c12_n - 1);
      c12_nz = (int32_T)c12_b_n;
      if ((c12_thisv != 0.0) && (c12_rhsv != 0.0)) {
        c12_this->d->data[c12_vidx - 1] = c12_rhsv;
      } else if (c12_thisv == 0.0) {
        c12_idx = c12_vidx;
        if (c12_nz == c12_this->maxnz) {
          c12_d_st.site = &c12_fc_emlrtRSI;
          c12_c_realloc(chartInstance, &c12_d_st, c12_this, c12_nz + 10, c12_idx,
                        c12_idx + 1, c12_nz, 1);
          c12_this->rowidx->data[c12_idx] = 12;
          c12_this->d->data[c12_idx] = c12_rhsv;
        } else {
          c12_d_st.site = &c12_gc_emlrtRSI;
          c12_b_outstart = c12_idx + 2;
          c12_b_instart = c12_idx + 1;
          c12_b_nelem = c12_nz - c12_idx;
          if (!(c12_b_nelem <= 0)) {
            c12_e_st.site = &c12_kc_emlrtRSI;
            c12_i4 = c12_y->size[0];
            c12_y->size[0] = c12_this->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y,
              c12_i4, &c12_b_emlrtRTEI);
            c12_c_loop_ub = c12_this->rowidx->size[0] - 1;
            for (c12_i7 = 0; c12_i7 <= c12_c_loop_ub; c12_i7++) {
              c12_y->data[c12_i7] = c12_this->rowidx->data[c12_i7];
            }

            c12_d_outstart = c12_b_outstart - 1;
            c12_d_instart = c12_b_instart - 1;
            c12_d_nelem = c12_b_nelem;
            c12_i9 = c12_this->rowidx->size[0];
            c12_this->rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
              c12_this->rowidx, c12_i9, &c12_rc_emlrtRTEI);
            c12_e_loop_ub = c12_y->size[0] - 1;
            for (c12_i11 = 0; c12_i11 <= c12_e_loop_ub; c12_i11++) {
              c12_this->rowidx->data[c12_i11] = c12_y->data[c12_i11];
            }

            memmove((void *)&c12_this->rowidx->data[c12_d_outstart], (void *)
                    &c12_this->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                     c12_d_nelem * sizeof(int32_T)));
            c12_e_st.site = &c12_lc_emlrtRSI;
            c12_i13 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_this->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
              c12_i13, &c12_d_emlrtRTEI);
            c12_g_loop_ub = c12_this->d->size[0] - 1;
            for (c12_i15 = 0; c12_i15 <= c12_g_loop_ub; c12_i15++) {
              c12_b_y->data[c12_i15] = c12_this->d->data[c12_i15];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i17 = c12_this->d->size[0];
            c12_this->d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
              c12_i17, &c12_rc_emlrtRTEI);
            c12_i_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
              c12_this->d->data[c12_i19] = c12_b_y->data[c12_i19];
            }

            memmove((void *)&c12_this->d->data[c12_f_outstart], (void *)
                    &c12_this->d->data[c12_f_instart], (uint32_T)((size_t)
                     c12_f_nelem * sizeof(real_T)));
          }

          c12_this->d->data[c12_idx] = c12_rhsv;
          c12_this->rowidx->data[c12_idx] = 12;
        }

        c12_c_col = c12_col + 1;
        c12_i5 = c12_c_col;
        for (c12_c_k = c12_i5 - 1; c12_c_k + 1 < 14; c12_c_k++) {
          c12_this->colidx->data[c12_c_k]++;
        }
      } else {
        c12_d_st.site = &c12_hc_emlrtRSI;
        c12_outstart = c12_vidx;
        c12_instart = c12_vidx + 1;
        c12_nelem = c12_nz - c12_vidx;
        if (!(c12_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i2 = c12_y->size[0];
          c12_y->size[0] = c12_this->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i2,
            &c12_b_emlrtRTEI);
          c12_b_loop_ub = c12_this->rowidx->size[0] - 1;
          for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
            c12_y->data[c12_i6] = c12_this->rowidx->data[c12_i6];
          }

          c12_c_outstart = c12_outstart - 1;
          c12_c_instart = c12_instart - 1;
          c12_c_nelem = c12_nelem;
          c12_i8 = c12_this->rowidx->size[0];
          c12_this->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_this->rowidx, c12_i8, &c12_rc_emlrtRTEI);
          c12_d_loop_ub = c12_y->size[0] - 1;
          for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
            c12_this->rowidx->data[c12_i10] = c12_y->data[c12_i10];
          }

          memmove((void *)&c12_this->rowidx->data[c12_c_outstart], (void *)
                  &c12_this->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                   c12_c_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i12 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_this->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i12, &c12_d_emlrtRTEI);
          c12_f_loop_ub = c12_this->d->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
            c12_b_y->data[c12_i14] = c12_this->d->data[c12_i14];
          }

          c12_e_outstart = c12_outstart - 1;
          c12_e_instart = c12_instart - 1;
          c12_e_nelem = c12_nelem;
          c12_i16 = c12_this->d->size[0];
          c12_this->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
            c12_i16, &c12_rc_emlrtRTEI);
          c12_h_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
            c12_this->d->data[c12_i18] = c12_b_y->data[c12_i18];
          }

          memmove((void *)&c12_this->d->data[c12_e_outstart], (void *)
                  &c12_this->d->data[c12_e_instart], (uint32_T)((size_t)
                   c12_e_nelem * sizeof(real_T)));
        }

        c12_b_col = c12_col + 1;
        c12_i3 = c12_b_col;
        for (c12_b_k = c12_i3 - 1; c12_b_k + 1 < 14; c12_b_k++) {
          c12_this->colidx->data[c12_b_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_b_this);
  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
}

static int32_T c12_c_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_sparse *c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_rhsIter, int32_T c12_outStart, real_T
  c12_rhs[12])
{
  int32_T c12_outIdx;
  int32_T c12_k;
  int32_T c12_b_k;
  real_T c12_rhsv;
  int32_T c12_y;
  int32_T c12_b_y;
  int32_T c12_c_y;
  int32_T c12_d_y;
  (void)chartInstance;
  c12_outIdx = c12_outStart;
  for (c12_k = 0; c12_k < 12; c12_k++) {
    c12_b_k = c12_k;
    c12_rhsv = c12_rhs[c12_rhsIter->idx - 1];
    c12_y = c12_rhsIter->idx;
    c12_b_y = c12_y + 1;
    c12_rhsIter->idx = c12_b_y;
    c12_c_y = c12_rhsIter->row;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter->row = c12_d_y;
    if (c12_rhsv != 0.0) {
      c12_this->rowidx->data[c12_outIdx - 1] = c12_b_k + 1;
      c12_this->d->data[c12_outIdx - 1] = c12_rhsv;
      c12_outIdx++;
    }
  }

  return c12_outIdx;
}

static void c12_g_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  c12_emxArray_int32_T *c12_b_this;
  int32_T c12_cidx;
  int32_T c12_b_cidx;
  int32_T c12_k;
  real_T c12_nt;
  int32_T c12_col;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_vidx;
  boolean_T c12_found;
  real_T c12_thisv;
  real_T c12_v;
  int32_T c12_c_y;
  int32_T c12_d_y;
  real_T c12_rhsv;
  int32_T c12_n;
  real_T c12_b_n;
  int32_T c12_nz;
  int32_T c12_idx;
  int32_T c12_outstart;
  int32_T c12_instart;
  int32_T c12_nelem;
  int32_T c12_b_outstart;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_b_col;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_c_col;
  int32_T c12_b_k;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_c_k;
  int32_T c12_i6;
  int32_T c12_c_loop_ub;
  int32_T c12_c_outstart;
  int32_T c12_i7;
  int32_T c12_c_instart;
  int32_T c12_c_nelem;
  int32_T c12_d_outstart;
  int32_T c12_i8;
  int32_T c12_d_instart;
  int32_T c12_d_nelem;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_e_loop_ub;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_g_loop_ub;
  int32_T c12_e_outstart;
  int32_T c12_i15;
  int32_T c12_e_instart;
  int32_T c12_e_nelem;
  int32_T c12_f_outstart;
  int32_T c12_i16;
  int32_T c12_f_instart;
  int32_T c12_f_nelem;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  int32_T c12_i_loop_ub;
  int32_T c12_i19;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_st.site = &c12_bc_emlrtRSI;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_b_st.site = &c12_cc_emlrtRSI;
  c12_c_st.site = &c12_dc_emlrtRSI;
  c12_sparse_validateNumericIndex(chartInstance, &c12_c_st);
  c12_c_st.site = &c12_ec_emlrtRSI;
  c12_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, &c12_c_st, &c12_b_y, 1, &c12_d_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_b_this, 1, &c12_emlrtRTEI);
  for (c12_cidx = 0; c12_cidx < 3; c12_cidx++) {
    c12_b_cidx = c12_cidx;
    c12_k = c12_b_cidx;
    c12_nt = 1.0 + (real_T)c12_k;
    c12_col = (int32_T)c12_nt;
    c12_i = c12_b_this->size[0];
    c12_b_this->size[0] = c12_this->rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_c_st, c12_b_this, c12_i,
      &c12_emlrtRTEI);
    c12_loop_ub = c12_this->rowidx->size[0] - 1;
    for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
      c12_b_this->data[c12_i1] = c12_this->rowidx->data[c12_i1];
    }

    c12_sparse_locBsearch(chartInstance, c12_b_this, 1, c12_this->colidx->
                          data[c12_col - 1], c12_this->colidx->data[c12_col],
                          &c12_vidx, &c12_found);
    if (c12_found) {
      c12_thisv = c12_this->d->data[c12_vidx - 1];
    } else {
      c12_thisv = 0.0;
    }

    c12_v = 1.0 + -(real_T)(c12_rhsIter.idx - 1);
    c12_c_y = c12_rhsIter.idx;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter.idx = c12_d_y;
    c12_rhsv = c12_v;
    if ((c12_thisv == 0.0) && (c12_rhsv == 0.0)) {
    } else {
      c12_n = c12_this->colidx->data[c12_this->colidx->size[0] - 1];
      c12_b_n = (real_T)(c12_n - 1);
      c12_nz = (int32_T)c12_b_n;
      if ((c12_thisv != 0.0) && (c12_rhsv != 0.0)) {
        c12_this->d->data[c12_vidx - 1] = c12_rhsv;
      } else if (c12_thisv == 0.0) {
        c12_idx = c12_vidx;
        if (c12_nz == c12_this->maxnz) {
          c12_d_st.site = &c12_fc_emlrtRSI;
          c12_d_realloc(chartInstance, &c12_d_st, c12_this, c12_nz + 10, c12_idx,
                        c12_idx + 1, c12_nz, 1);
          c12_this->rowidx->data[c12_idx] = 1;
          c12_this->d->data[c12_idx] = c12_rhsv;
        } else {
          c12_d_st.site = &c12_gc_emlrtRSI;
          c12_b_outstart = c12_idx + 2;
          c12_b_instart = c12_idx + 1;
          c12_b_nelem = c12_nz - c12_idx;
          if (!(c12_b_nelem <= 0)) {
            c12_e_st.site = &c12_kc_emlrtRSI;
            c12_i4 = c12_y->size[0];
            c12_y->size[0] = c12_this->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y,
              c12_i4, &c12_b_emlrtRTEI);
            c12_c_loop_ub = c12_this->rowidx->size[0] - 1;
            for (c12_i7 = 0; c12_i7 <= c12_c_loop_ub; c12_i7++) {
              c12_y->data[c12_i7] = c12_this->rowidx->data[c12_i7];
            }

            c12_d_outstart = c12_b_outstart - 1;
            c12_d_instart = c12_b_instart - 1;
            c12_d_nelem = c12_b_nelem;
            c12_i9 = c12_this->rowidx->size[0];
            c12_this->rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
              c12_this->rowidx, c12_i9, &c12_rc_emlrtRTEI);
            c12_e_loop_ub = c12_y->size[0] - 1;
            for (c12_i11 = 0; c12_i11 <= c12_e_loop_ub; c12_i11++) {
              c12_this->rowidx->data[c12_i11] = c12_y->data[c12_i11];
            }

            memmove((void *)&c12_this->rowidx->data[c12_d_outstart], (void *)
                    &c12_this->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                     c12_d_nelem * sizeof(int32_T)));
            c12_e_st.site = &c12_lc_emlrtRSI;
            c12_i13 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_this->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
              c12_i13, &c12_d_emlrtRTEI);
            c12_g_loop_ub = c12_this->d->size[0] - 1;
            for (c12_i15 = 0; c12_i15 <= c12_g_loop_ub; c12_i15++) {
              c12_b_y->data[c12_i15] = c12_this->d->data[c12_i15];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i17 = c12_this->d->size[0];
            c12_this->d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
              c12_i17, &c12_rc_emlrtRTEI);
            c12_i_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
              c12_this->d->data[c12_i19] = c12_b_y->data[c12_i19];
            }

            memmove((void *)&c12_this->d->data[c12_f_outstart], (void *)
                    &c12_this->d->data[c12_f_instart], (uint32_T)((size_t)
                     c12_f_nelem * sizeof(real_T)));
          }

          c12_this->d->data[c12_idx] = c12_rhsv;
          c12_this->rowidx->data[c12_idx] = 1;
        }

        c12_c_col = c12_col + 1;
        c12_i5 = c12_c_col;
        for (c12_c_k = c12_i5 - 1; c12_c_k + 1 < 12; c12_c_k++) {
          c12_this->colidx->data[c12_c_k]++;
        }
      } else {
        c12_d_st.site = &c12_hc_emlrtRSI;
        c12_outstart = c12_vidx;
        c12_instart = c12_vidx + 1;
        c12_nelem = c12_nz - c12_vidx;
        if (!(c12_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i2 = c12_y->size[0];
          c12_y->size[0] = c12_this->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i2,
            &c12_b_emlrtRTEI);
          c12_b_loop_ub = c12_this->rowidx->size[0] - 1;
          for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
            c12_y->data[c12_i6] = c12_this->rowidx->data[c12_i6];
          }

          c12_c_outstart = c12_outstart - 1;
          c12_c_instart = c12_instart - 1;
          c12_c_nelem = c12_nelem;
          c12_i8 = c12_this->rowidx->size[0];
          c12_this->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_this->rowidx, c12_i8, &c12_rc_emlrtRTEI);
          c12_d_loop_ub = c12_y->size[0] - 1;
          for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
            c12_this->rowidx->data[c12_i10] = c12_y->data[c12_i10];
          }

          memmove((void *)&c12_this->rowidx->data[c12_c_outstart], (void *)
                  &c12_this->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                   c12_c_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i12 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_this->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i12, &c12_d_emlrtRTEI);
          c12_f_loop_ub = c12_this->d->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
            c12_b_y->data[c12_i14] = c12_this->d->data[c12_i14];
          }

          c12_e_outstart = c12_outstart - 1;
          c12_e_instart = c12_instart - 1;
          c12_e_nelem = c12_nelem;
          c12_i16 = c12_this->d->size[0];
          c12_this->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
            c12_i16, &c12_rc_emlrtRTEI);
          c12_h_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
            c12_this->d->data[c12_i18] = c12_b_y->data[c12_i18];
          }

          memmove((void *)&c12_this->d->data[c12_e_outstart], (void *)
                  &c12_this->d->data[c12_e_instart], (uint32_T)((size_t)
                   c12_e_nelem * sizeof(real_T)));
        }

        c12_b_col = c12_col + 1;
        c12_i3 = c12_b_col;
        for (c12_b_k = c12_i3 - 1; c12_b_k + 1 < 12; c12_b_k++) {
          c12_this->colidx->data[c12_b_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_b_this);
  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
}

static void c12_d_realloc(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, const
  emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this, int32_T
  c12_numAllocRequested, int32_T c12_ub1, int32_T c12_lb2, int32_T c12_ub2,
  int32_T c12_offs)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  c12_emxArray_int32_T *c12_rowidxt;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  c12_emxArray_real_T *c12_dt;
  int32_T c12_i2;
  int32_T c12_b_loop_ub;
  int32_T c12_i3;
  int32_T c12_a;
  int32_T c12_y;
  int32_T c12_b;
  int32_T c12_numAlloc;
  int32_T c12_i4;
  int32_T c12_c_loop_ub;
  int32_T c12_i5;
  int32_T c12_i6;
  int32_T c12_d_loop_ub;
  int32_T c12_i7;
  int32_T c12_b_b;
  int32_T c12_c_b;
  boolean_T c12_overflow;
  int32_T c12_k;
  int32_T c12_b_k;
  int32_T c12_b_a;
  int32_T c12_d_b;
  int32_T c12_c_a;
  int32_T c12_e_b;
  boolean_T c12_b_overflow;
  int32_T c12_c_k;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_rowidxt, 1, &c12_sc_emlrtRTEI);
  c12_i = c12_rowidxt->size[0];
  c12_rowidxt->size[0] = c12_this->rowidx->size[0];
  c12_st.site = &c12_sd_emlrtRSI;
  c12_emxEnsureCapacity_int32_T(chartInstance, &c12_st, c12_rowidxt, c12_i,
    &c12_sc_emlrtRTEI);
  c12_loop_ub = c12_this->rowidx->size[0] - 1;
  for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
    c12_rowidxt->data[c12_i1] = c12_this->rowidx->data[c12_i1];
  }

  c12_emxInit_real_T(chartInstance, c12_sp, &c12_dt, 1, &c12_tc_emlrtRTEI);
  c12_i2 = c12_dt->size[0];
  c12_dt->size[0] = c12_this->d->size[0];
  c12_st.site = &c12_wd_emlrtRSI;
  c12_emxEnsureCapacity_real_T(chartInstance, &c12_st, c12_dt, c12_i2,
    &c12_tc_emlrtRTEI);
  c12_b_loop_ub = c12_this->d->size[0] - 1;
  for (c12_i3 = 0; c12_i3 <= c12_b_loop_ub; c12_i3++) {
    c12_dt->data[c12_i3] = c12_this->d->data[c12_i3];
  }

  c12_a = c12_numAllocRequested;
  if (c12_a <= 100) {
    c12_y = c12_a;
  } else {
    c12_y = 100;
  }

  c12_b = c12_y;
  if (1 >= c12_b) {
    c12_numAlloc = 1;
  } else {
    c12_numAlloc = c12_b;
  }

  c12_i4 = c12_this->rowidx->size[0];
  c12_this->rowidx->size[0] = c12_numAlloc;
  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, c12_this->rowidx, c12_i4,
    &c12_uc_emlrtRTEI);
  c12_c_loop_ub = c12_numAlloc - 1;
  for (c12_i5 = 0; c12_i5 <= c12_c_loop_ub; c12_i5++) {
    c12_this->rowidx->data[c12_i5] = 0;
  }

  c12_i6 = c12_this->d->size[0];
  c12_this->d->size[0] = c12_numAlloc;
  c12_emxEnsureCapacity_real_T(chartInstance, c12_sp, c12_this->d, c12_i6,
    &c12_vc_emlrtRTEI);
  c12_d_loop_ub = c12_numAlloc - 1;
  for (c12_i7 = 0; c12_i7 <= c12_d_loop_ub; c12_i7++) {
    c12_this->d->data[c12_i7] = 0.0;
  }

  c12_this->maxnz = c12_numAlloc;
  c12_st.site = &c12_ic_emlrtRSI;
  c12_b_b = c12_ub1;
  c12_c_b = c12_b_b;
  if (1 > c12_c_b) {
    c12_overflow = false;
  } else {
    c12_overflow = (c12_c_b > 2147483646);
  }

  if (c12_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_k = 1; c12_k - 1 < c12_ub1; c12_k++) {
    c12_b_k = c12_k - 1;
    c12_this->rowidx->data[c12_b_k] = c12_rowidxt->data[c12_b_k];
    c12_this->d->data[c12_b_k] = c12_dt->data[c12_b_k];
  }

  c12_st.site = &c12_jc_emlrtRSI;
  c12_b_a = c12_lb2;
  c12_d_b = c12_ub2;
  c12_c_a = c12_b_a;
  c12_e_b = c12_d_b;
  if (c12_c_a > c12_e_b) {
    c12_b_overflow = false;
  } else {
    c12_b_overflow = (c12_e_b > 2147483646);
  }

  if (c12_b_overflow) {
    c12_b_st.site = &c12_u_emlrtRSI;
    c12_check_forloop_overflow_error(chartInstance, &c12_b_st);
  }

  for (c12_c_k = c12_lb2 - 1; c12_c_k < c12_ub2; c12_c_k++) {
    c12_this->rowidx->data[c12_c_k + c12_offs] = c12_rowidxt->data[c12_c_k];
    c12_this->d->data[c12_c_k + c12_offs] = c12_dt->data[c12_c_k];
  }

  c12_emxFree_real_T(chartInstance, &c12_dt);
  c12_emxFree_int32_T(chartInstance, &c12_rowidxt);
}

static void c12_h_sparse_parenAssign(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_this)
{
  emlrtStack c12_st;
  emlrtStack c12_b_st;
  emlrtStack c12_c_st;
  emlrtStack c12_d_st;
  emlrtStack c12_e_st;
  c12_szVgRoYADpv9jTouZDFZ3mB c12_rhsIter;
  c12_emxArray_int32_T *c12_y;
  c12_emxArray_real_T *c12_b_y;
  c12_emxArray_int32_T *c12_b_this;
  int32_T c12_cidx;
  int32_T c12_b_cidx;
  int32_T c12_k;
  real_T c12_nt;
  int32_T c12_col;
  int32_T c12_i;
  int32_T c12_loop_ub;
  int32_T c12_i1;
  int32_T c12_vidx;
  boolean_T c12_found;
  real_T c12_thisv;
  real_T c12_v;
  int32_T c12_c_y;
  int32_T c12_d_y;
  real_T c12_rhsv;
  int32_T c12_n;
  real_T c12_b_n;
  int32_T c12_nz;
  int32_T c12_idx;
  int32_T c12_outstart;
  int32_T c12_instart;
  int32_T c12_nelem;
  int32_T c12_b_outstart;
  int32_T c12_b_instart;
  int32_T c12_b_nelem;
  int32_T c12_b_col;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_c_col;
  int32_T c12_b_k;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_b_loop_ub;
  int32_T c12_c_k;
  int32_T c12_i6;
  int32_T c12_c_loop_ub;
  int32_T c12_c_outstart;
  int32_T c12_i7;
  int32_T c12_c_instart;
  int32_T c12_c_nelem;
  int32_T c12_d_outstart;
  int32_T c12_i8;
  int32_T c12_d_instart;
  int32_T c12_d_nelem;
  int32_T c12_i9;
  int32_T c12_d_loop_ub;
  int32_T c12_i10;
  int32_T c12_e_loop_ub;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_f_loop_ub;
  int32_T c12_i14;
  int32_T c12_g_loop_ub;
  int32_T c12_e_outstart;
  int32_T c12_i15;
  int32_T c12_e_instart;
  int32_T c12_e_nelem;
  int32_T c12_f_outstart;
  int32_T c12_i16;
  int32_T c12_f_instart;
  int32_T c12_f_nelem;
  int32_T c12_i17;
  int32_T c12_h_loop_ub;
  int32_T c12_i18;
  int32_T c12_i_loop_ub;
  int32_T c12_i19;
  c12_st.prev = c12_sp;
  c12_st.tls = c12_sp->tls;
  c12_st.site = &c12_bc_emlrtRSI;
  c12_b_st.prev = &c12_st;
  c12_b_st.tls = c12_st.tls;
  c12_c_st.prev = &c12_b_st;
  c12_c_st.tls = c12_b_st.tls;
  c12_d_st.prev = &c12_c_st;
  c12_d_st.tls = c12_c_st.tls;
  c12_e_st.prev = &c12_d_st;
  c12_e_st.tls = c12_d_st.tls;
  c12_b_st.site = &c12_cc_emlrtRSI;
  c12_c_st.site = &c12_dc_emlrtRSI;
  c12_c_sparse_validateNumericIndex(chartInstance, &c12_c_st);
  c12_c_st.site = &c12_ec_emlrtRSI;
  c12_rhsIter.idx = 1;
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_y, 1, &c12_b_emlrtRTEI);
  c12_emxInit_real_T(chartInstance, &c12_c_st, &c12_b_y, 1, &c12_d_emlrtRTEI);
  c12_emxInit_int32_T(chartInstance, &c12_c_st, &c12_b_this, 1, &c12_emlrtRTEI);
  for (c12_cidx = 0; c12_cidx < 3; c12_cidx++) {
    c12_b_cidx = c12_cidx;
    c12_k = c12_b_cidx;
    c12_nt = 8.0 + (real_T)c12_k;
    c12_col = (int32_T)c12_nt;
    c12_i = c12_b_this->size[0];
    c12_b_this->size[0] = c12_this->rowidx->size[0];
    c12_emxEnsureCapacity_int32_T(chartInstance, &c12_c_st, c12_b_this, c12_i,
      &c12_emlrtRTEI);
    c12_loop_ub = c12_this->rowidx->size[0] - 1;
    for (c12_i1 = 0; c12_i1 <= c12_loop_ub; c12_i1++) {
      c12_b_this->data[c12_i1] = c12_this->rowidx->data[c12_i1];
    }

    c12_sparse_locBsearch(chartInstance, c12_b_this, 10, c12_this->colidx->
                          data[c12_col - 1], c12_this->colidx->data[c12_col],
                          &c12_vidx, &c12_found);
    if (c12_found) {
      c12_thisv = c12_this->d->data[c12_vidx - 1];
    } else {
      c12_thisv = 0.0;
    }

    c12_v = 1.0 + -(real_T)(c12_rhsIter.idx - 1);
    c12_c_y = c12_rhsIter.idx;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter.idx = c12_d_y;
    c12_rhsv = c12_v;
    if ((c12_thisv == 0.0) && (c12_rhsv == 0.0)) {
    } else {
      c12_n = c12_this->colidx->data[c12_this->colidx->size[0] - 1];
      c12_b_n = (real_T)(c12_n - 1);
      c12_nz = (int32_T)c12_b_n;
      if ((c12_thisv != 0.0) && (c12_rhsv != 0.0)) {
        c12_this->d->data[c12_vidx - 1] = c12_rhsv;
      } else if (c12_thisv == 0.0) {
        c12_idx = c12_vidx;
        if (c12_nz == c12_this->maxnz) {
          c12_d_st.site = &c12_fc_emlrtRSI;
          c12_d_realloc(chartInstance, &c12_d_st, c12_this, c12_nz + 10, c12_idx,
                        c12_idx + 1, c12_nz, 1);
          c12_this->rowidx->data[c12_idx] = 10;
          c12_this->d->data[c12_idx] = c12_rhsv;
        } else {
          c12_d_st.site = &c12_gc_emlrtRSI;
          c12_b_outstart = c12_idx + 2;
          c12_b_instart = c12_idx + 1;
          c12_b_nelem = c12_nz - c12_idx;
          if (!(c12_b_nelem <= 0)) {
            c12_e_st.site = &c12_kc_emlrtRSI;
            c12_i4 = c12_y->size[0];
            c12_y->size[0] = c12_this->rowidx->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y,
              c12_i4, &c12_b_emlrtRTEI);
            c12_c_loop_ub = c12_this->rowidx->size[0] - 1;
            for (c12_i7 = 0; c12_i7 <= c12_c_loop_ub; c12_i7++) {
              c12_y->data[c12_i7] = c12_this->rowidx->data[c12_i7];
            }

            c12_d_outstart = c12_b_outstart - 1;
            c12_d_instart = c12_b_instart - 1;
            c12_d_nelem = c12_b_nelem;
            c12_i9 = c12_this->rowidx->size[0];
            c12_this->rowidx->size[0] = c12_y->size[0];
            c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
              c12_this->rowidx, c12_i9, &c12_rc_emlrtRTEI);
            c12_e_loop_ub = c12_y->size[0] - 1;
            for (c12_i11 = 0; c12_i11 <= c12_e_loop_ub; c12_i11++) {
              c12_this->rowidx->data[c12_i11] = c12_y->data[c12_i11];
            }

            memmove((void *)&c12_this->rowidx->data[c12_d_outstart], (void *)
                    &c12_this->rowidx->data[c12_d_instart], (uint32_T)((size_t)
                     c12_d_nelem * sizeof(int32_T)));
            c12_e_st.site = &c12_lc_emlrtRSI;
            c12_i13 = c12_b_y->size[0];
            c12_b_y->size[0] = c12_this->d->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
              c12_i13, &c12_d_emlrtRTEI);
            c12_g_loop_ub = c12_this->d->size[0] - 1;
            for (c12_i15 = 0; c12_i15 <= c12_g_loop_ub; c12_i15++) {
              c12_b_y->data[c12_i15] = c12_this->d->data[c12_i15];
            }

            c12_f_outstart = c12_b_outstart - 1;
            c12_f_instart = c12_b_instart - 1;
            c12_f_nelem = c12_b_nelem;
            c12_i17 = c12_this->d->size[0];
            c12_this->d->size[0] = c12_b_y->size[0];
            c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
              c12_i17, &c12_rc_emlrtRTEI);
            c12_i_loop_ub = c12_b_y->size[0] - 1;
            for (c12_i19 = 0; c12_i19 <= c12_i_loop_ub; c12_i19++) {
              c12_this->d->data[c12_i19] = c12_b_y->data[c12_i19];
            }

            memmove((void *)&c12_this->d->data[c12_f_outstart], (void *)
                    &c12_this->d->data[c12_f_instart], (uint32_T)((size_t)
                     c12_f_nelem * sizeof(real_T)));
          }

          c12_this->d->data[c12_idx] = c12_rhsv;
          c12_this->rowidx->data[c12_idx] = 10;
        }

        c12_c_col = c12_col + 1;
        c12_i5 = c12_c_col;
        for (c12_c_k = c12_i5 - 1; c12_c_k + 1 < 12; c12_c_k++) {
          c12_this->colidx->data[c12_c_k]++;
        }
      } else {
        c12_d_st.site = &c12_hc_emlrtRSI;
        c12_outstart = c12_vidx;
        c12_instart = c12_vidx + 1;
        c12_nelem = c12_nz - c12_vidx;
        if (!(c12_nelem <= 0)) {
          c12_e_st.site = &c12_kc_emlrtRSI;
          c12_i2 = c12_y->size[0];
          c12_y->size[0] = c12_this->rowidx->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st, c12_y, c12_i2,
            &c12_b_emlrtRTEI);
          c12_b_loop_ub = c12_this->rowidx->size[0] - 1;
          for (c12_i6 = 0; c12_i6 <= c12_b_loop_ub; c12_i6++) {
            c12_y->data[c12_i6] = c12_this->rowidx->data[c12_i6];
          }

          c12_c_outstart = c12_outstart - 1;
          c12_c_instart = c12_instart - 1;
          c12_c_nelem = c12_nelem;
          c12_i8 = c12_this->rowidx->size[0];
          c12_this->rowidx->size[0] = c12_y->size[0];
          c12_emxEnsureCapacity_int32_T(chartInstance, &c12_e_st,
            c12_this->rowidx, c12_i8, &c12_rc_emlrtRTEI);
          c12_d_loop_ub = c12_y->size[0] - 1;
          for (c12_i10 = 0; c12_i10 <= c12_d_loop_ub; c12_i10++) {
            c12_this->rowidx->data[c12_i10] = c12_y->data[c12_i10];
          }

          memmove((void *)&c12_this->rowidx->data[c12_c_outstart], (void *)
                  &c12_this->rowidx->data[c12_c_instart], (uint32_T)((size_t)
                   c12_c_nelem * sizeof(int32_T)));
          c12_e_st.site = &c12_lc_emlrtRSI;
          c12_i12 = c12_b_y->size[0];
          c12_b_y->size[0] = c12_this->d->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_b_y,
            c12_i12, &c12_d_emlrtRTEI);
          c12_f_loop_ub = c12_this->d->size[0] - 1;
          for (c12_i14 = 0; c12_i14 <= c12_f_loop_ub; c12_i14++) {
            c12_b_y->data[c12_i14] = c12_this->d->data[c12_i14];
          }

          c12_e_outstart = c12_outstart - 1;
          c12_e_instart = c12_instart - 1;
          c12_e_nelem = c12_nelem;
          c12_i16 = c12_this->d->size[0];
          c12_this->d->size[0] = c12_b_y->size[0];
          c12_emxEnsureCapacity_real_T(chartInstance, &c12_e_st, c12_this->d,
            c12_i16, &c12_rc_emlrtRTEI);
          c12_h_loop_ub = c12_b_y->size[0] - 1;
          for (c12_i18 = 0; c12_i18 <= c12_h_loop_ub; c12_i18++) {
            c12_this->d->data[c12_i18] = c12_b_y->data[c12_i18];
          }

          memmove((void *)&c12_this->d->data[c12_e_outstart], (void *)
                  &c12_this->d->data[c12_e_instart], (uint32_T)((size_t)
                   c12_e_nelem * sizeof(real_T)));
        }

        c12_b_col = c12_col + 1;
        c12_i3 = c12_b_col;
        for (c12_b_k = c12_i3 - 1; c12_b_k + 1 < 12; c12_b_k++) {
          c12_this->colidx->data[c12_b_k]--;
        }
      }
    }
  }

  c12_emxFree_int32_T(chartInstance, &c12_b_this);
  c12_emxFree_real_T(chartInstance, &c12_b_y);
  c12_emxFree_int32_T(chartInstance, &c12_y);
}

static int32_T c12_d_copyNonzeroValues(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_sparse *c12_this,
  c12_szVgRoYADpv9jTouZDFZ3mB *c12_rhsIter, int32_T c12_outStart, real_T
  c12_rhs[10])
{
  int32_T c12_outIdx;
  int32_T c12_k;
  int32_T c12_b_k;
  real_T c12_rhsv;
  int32_T c12_y;
  int32_T c12_b_y;
  int32_T c12_c_y;
  int32_T c12_d_y;
  (void)chartInstance;
  c12_outIdx = c12_outStart;
  for (c12_k = 0; c12_k < 10; c12_k++) {
    c12_b_k = c12_k;
    c12_rhsv = c12_rhs[c12_rhsIter->idx - 1];
    c12_y = c12_rhsIter->idx;
    c12_b_y = c12_y + 1;
    c12_rhsIter->idx = c12_b_y;
    c12_c_y = c12_rhsIter->row;
    c12_d_y = c12_c_y + 1;
    c12_rhsIter->row = c12_d_y;
    if (c12_rhsv != 0.0) {
      c12_this->rowidx->data[c12_outIdx - 1] = c12_b_k + 1;
      c12_this->d->data[c12_outIdx - 1] = c12_rhsv;
      c12_outIdx++;
    }
  }

  return c12_outIdx;
}

static void c12_b_floor(SFc12_PID_Cdelta_UInstanceStruct *chartInstance, real_T
  c12_x[60])
{
  int32_T c12_k;
  int32_T c12_b_k;
  real_T c12_b_x;
  real_T c12_c_x;
  (void)chartInstance;
  for (c12_k = 0; c12_k < 60; c12_k++) {
    c12_b_k = c12_k;
    c12_b_x = c12_x[c12_b_k];
    c12_c_x = c12_b_x;
    c12_c_x = muDoubleScalarFloor(c12_c_x);
    c12_x[c12_b_k] = c12_c_x;
  }
}

static void c12_emxEnsureCapacity_int32_T(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_newNumel;
  int32_T c12_i;
  int32_T c12_newCapacity;
  void *c12_newData;
  (void)chartInstance;
  if (c12_oldNumel < 0) {
    c12_oldNumel = 0;
  }

  c12_newNumel = 1;
  for (c12_i = 0; c12_i < c12_emxArray->numDimensions; c12_i++) {
    c12_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c12_newNumel, (uint32_T)
      c12_emxArray->size[c12_i], c12_srcLocation, c12_sp);
  }

  if (c12_newNumel > c12_emxArray->allocatedSize) {
    c12_newCapacity = c12_emxArray->allocatedSize;
    if (c12_newCapacity < 16) {
      c12_newCapacity = 16;
    }

    while (c12_newCapacity < c12_newNumel) {
      if (c12_newCapacity > 1073741823) {
        c12_newCapacity = MAX_int32_T;
      } else {
        c12_newCapacity <<= 1;
      }
    }

    c12_newData = emlrtCallocMex((uint32_T)c12_newCapacity, sizeof(int32_T));
    if (c12_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
    }

    if (c12_emxArray->data != NULL) {
      memcpy(c12_newData, c12_emxArray->data, sizeof(int32_T) * (uint32_T)
             c12_oldNumel);
      if (c12_emxArray->canFreeData) {
        emlrtFreeMex(c12_emxArray->data);
      }
    }

    c12_emxArray->data = (int32_T *)c12_newData;
    c12_emxArray->allocatedSize = c12_newCapacity;
    c12_emxArray->canFreeData = true;
  }
}

static void c12_emxEnsureCapacity_real_T(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_real_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_newNumel;
  int32_T c12_i;
  int32_T c12_newCapacity;
  void *c12_newData;
  (void)chartInstance;
  if (c12_oldNumel < 0) {
    c12_oldNumel = 0;
  }

  c12_newNumel = 1;
  for (c12_i = 0; c12_i < c12_emxArray->numDimensions; c12_i++) {
    c12_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c12_newNumel, (uint32_T)
      c12_emxArray->size[c12_i], c12_srcLocation, c12_sp);
  }

  if (c12_newNumel > c12_emxArray->allocatedSize) {
    c12_newCapacity = c12_emxArray->allocatedSize;
    if (c12_newCapacity < 16) {
      c12_newCapacity = 16;
    }

    while (c12_newCapacity < c12_newNumel) {
      if (c12_newCapacity > 1073741823) {
        c12_newCapacity = MAX_int32_T;
      } else {
        c12_newCapacity <<= 1;
      }
    }

    c12_newData = emlrtCallocMex((uint32_T)c12_newCapacity, sizeof(real_T));
    if (c12_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
    }

    if (c12_emxArray->data != NULL) {
      memcpy(c12_newData, c12_emxArray->data, sizeof(real_T) * (uint32_T)
             c12_oldNumel);
      if (c12_emxArray->canFreeData) {
        emlrtFreeMex(c12_emxArray->data);
      }
    }

    c12_emxArray->data = (real_T *)c12_newData;
    c12_emxArray->allocatedSize = c12_newCapacity;
    c12_emxArray->canFreeData = true;
  }
}

static void c12_emxInitStruct_coder_internal_sp(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse
  *c12_pStruct, const emlrtRTEInfo *c12_srcLocation)
{
  c12_emxInit_real_T(chartInstance, c12_sp, &c12_pStruct->d, 1, c12_srcLocation);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_pStruct->colidx, 1,
                      c12_srcLocation);
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_pStruct->rowidx, 1,
                      c12_srcLocation);
}

static void c12_emxInit_real_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_real_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation)
{
  c12_emxArray_real_T *c12_emxArray;
  int32_T c12_i;
  (void)chartInstance;
  *c12_pEmxArray = (c12_emxArray_real_T *)emlrtMallocMex(sizeof
    (c12_emxArray_real_T));
  if ((void *)*c12_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray = *c12_pEmxArray;
  c12_emxArray->data = (real_T *)NULL;
  c12_emxArray->numDimensions = c12_numDimensions;
  c12_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c12_numDimensions);
  if ((void *)c12_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray->allocatedSize = 0;
  c12_emxArray->canFreeData = true;
  for (c12_i = 0; c12_i < c12_numDimensions; c12_i++) {
    c12_emxArray->size[c12_i] = 0;
  }
}

static void c12_emxInit_int32_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation)
{
  c12_emxArray_int32_T *c12_emxArray;
  int32_T c12_i;
  (void)chartInstance;
  *c12_pEmxArray = (c12_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c12_emxArray_int32_T));
  if ((void *)*c12_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray = *c12_pEmxArray;
  c12_emxArray->data = (int32_T *)NULL;
  c12_emxArray->numDimensions = c12_numDimensions;
  c12_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c12_numDimensions);
  if ((void *)c12_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray->allocatedSize = 0;
  c12_emxArray->canFreeData = true;
  for (c12_i = 0; c12_i < c12_numDimensions; c12_i++) {
    c12_emxArray->size[c12_i] = 0;
  }
}

static void c12_emxFree_real_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  c12_emxArray_real_T **c12_pEmxArray)
{
  (void)chartInstance;
  if (*c12_pEmxArray != (c12_emxArray_real_T *)NULL) {
    if (((*c12_pEmxArray)->data != (real_T *)NULL) && (*c12_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c12_pEmxArray)->data);
    }

    emlrtFreeMex((*c12_pEmxArray)->size);
    emlrtFreeMex(*c12_pEmxArray);
    *c12_pEmxArray = (c12_emxArray_real_T *)NULL;
  }
}

static void c12_emxFreeStruct_coder_internal_sp(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_sparse *c12_pStruct)
{
  c12_emxFree_real_T(chartInstance, &c12_pStruct->d);
  c12_emxFree_int32_T(chartInstance, &c12_pStruct->colidx);
  c12_emxFree_int32_T(chartInstance, &c12_pStruct->rowidx);
}

static void c12_emxFree_int32_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  c12_emxArray_int32_T **c12_pEmxArray)
{
  (void)chartInstance;
  if (*c12_pEmxArray != (c12_emxArray_int32_T *)NULL) {
    if (((*c12_pEmxArray)->data != (int32_T *)NULL) && (*c12_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c12_pEmxArray)->data);
    }

    emlrtFreeMex((*c12_pEmxArray)->size);
    emlrtFreeMex(*c12_pEmxArray);
    *c12_pEmxArray = (c12_emxArray_int32_T *)NULL;
  }
}

static void c12_emxEnsureCapacity_real_T1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_real_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_newNumel;
  int32_T c12_i;
  int32_T c12_newCapacity;
  void *c12_newData;
  (void)chartInstance;
  if (c12_oldNumel < 0) {
    c12_oldNumel = 0;
  }

  c12_newNumel = 1;
  for (c12_i = 0; c12_i < c12_emxArray->numDimensions; c12_i++) {
    c12_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c12_newNumel, (uint32_T)
      c12_emxArray->size[c12_i], c12_srcLocation, c12_sp);
  }

  if (c12_newNumel > c12_emxArray->allocatedSize) {
    c12_newCapacity = c12_emxArray->allocatedSize;
    if (c12_newCapacity < 16) {
      c12_newCapacity = 16;
    }

    while (c12_newCapacity < c12_newNumel) {
      if (c12_newCapacity > 1073741823) {
        c12_newCapacity = MAX_int32_T;
      } else {
        c12_newCapacity <<= 1;
      }
    }

    c12_newData = emlrtCallocMex((uint32_T)c12_newCapacity, sizeof(real_T));
    if (c12_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
    }

    if (c12_emxArray->data != NULL) {
      memcpy(c12_newData, c12_emxArray->data, sizeof(real_T) * (uint32_T)
             c12_oldNumel);
      if (c12_emxArray->canFreeData) {
        emlrtFreeMex(c12_emxArray->data);
      }
    }

    c12_emxArray->data = (real_T *)c12_newData;
    c12_emxArray->allocatedSize = c12_newCapacity;
    c12_emxArray->canFreeData = true;
  }
}

static void c12_emxEnsureCapacity_int32_T1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_emxArray_int32_T *c12_emxArray,
  int32_T c12_oldNumel, const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_newNumel;
  int32_T c12_i;
  int32_T c12_newCapacity;
  void *c12_newData;
  (void)chartInstance;
  if (c12_oldNumel < 0) {
    c12_oldNumel = 0;
  }

  c12_newNumel = 1;
  for (c12_i = 0; c12_i < c12_emxArray->numDimensions; c12_i++) {
    c12_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c12_newNumel, (uint32_T)
      c12_emxArray->size[c12_i], c12_srcLocation, c12_sp);
  }

  if (c12_newNumel > c12_emxArray->allocatedSize) {
    c12_newCapacity = c12_emxArray->allocatedSize;
    if (c12_newCapacity < 16) {
      c12_newCapacity = 16;
    }

    while (c12_newCapacity < c12_newNumel) {
      if (c12_newCapacity > 1073741823) {
        c12_newCapacity = MAX_int32_T;
      } else {
        c12_newCapacity <<= 1;
      }
    }

    c12_newData = emlrtCallocMex((uint32_T)c12_newCapacity, sizeof(int32_T));
    if (c12_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
    }

    if (c12_emxArray->data != NULL) {
      memcpy(c12_newData, c12_emxArray->data, sizeof(int32_T) * (uint32_T)
             c12_oldNumel);
      if (c12_emxArray->canFreeData) {
        emlrtFreeMex(c12_emxArray->data);
      }
    }

    c12_emxArray->data = (int32_T *)c12_newData;
    c12_emxArray->allocatedSize = c12_newCapacity;
    c12_emxArray->canFreeData = true;
  }
}

static void c12_emxInit_real_T1(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_real_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation)
{
  c12_emxArray_real_T *c12_emxArray;
  int32_T c12_i;
  (void)chartInstance;
  *c12_pEmxArray = (c12_emxArray_real_T *)emlrtMallocMex(sizeof
    (c12_emxArray_real_T));
  if ((void *)*c12_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray = *c12_pEmxArray;
  c12_emxArray->data = (real_T *)NULL;
  c12_emxArray->numDimensions = c12_numDimensions;
  c12_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c12_numDimensions);
  if ((void *)c12_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray->allocatedSize = 0;
  c12_emxArray->canFreeData = true;
  for (c12_i = 0; c12_i < c12_numDimensions; c12_i++) {
    c12_emxArray->size[c12_i] = 0;
  }
}

static void c12_emxInit_int32_T1(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T **c12_pEmxArray, int32_T
  c12_numDimensions, const emlrtRTEInfo *c12_srcLocation)
{
  c12_emxArray_int32_T *c12_emxArray;
  int32_T c12_i;
  (void)chartInstance;
  *c12_pEmxArray = (c12_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c12_emxArray_int32_T));
  if ((void *)*c12_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray = *c12_pEmxArray;
  c12_emxArray->data = (int32_T *)NULL;
  c12_emxArray->numDimensions = c12_numDimensions;
  c12_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c12_numDimensions);
  if ((void *)c12_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c12_srcLocation, c12_sp);
  }

  c12_emxArray->allocatedSize = 0;
  c12_emxArray->canFreeData = true;
  for (c12_i = 0; c12_i < c12_numDimensions; c12_i++) {
    c12_emxArray->size[c12_i] = 0;
  }
}

static void c12_emxCopyStruct_coder_internal_an(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp,
  c12_coder_internal_anonymous_function *c12_dst, const
  c12_coder_internal_anonymous_function *c12_src, const emlrtRTEInfo
  *c12_srcLocation)
{
  c12_emxCopyMatrix_real_T(chartInstance);
  c12_emxCopyMatrix_cell_wrap_1(chartInstance, c12_sp,
    c12_dst->tunableEnvironment, c12_src->tunableEnvironment, c12_srcLocation);
}

static void c12_emxCopyMatrix_real_T(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c12_emxCopyMatrix_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 c12_dst[2], const
  c12_cell_wrap_1 c12_src[2], const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_i;
  for (c12_i = 0; c12_i < 2; c12_i++) {
    c12_emxCopyStruct_cell_wrap_1(chartInstance, c12_sp, &c12_dst[c12_i],
      &c12_src[c12_i], c12_srcLocation);
  }
}

static void c12_emxCopyStruct_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 *c12_dst, const
  c12_cell_wrap_1 *c12_src, const emlrtRTEInfo *c12_srcLocation)
{
  c12_emxCopy_int32_T(chartInstance, c12_sp, &c12_dst->f1, &c12_src->f1,
                      c12_srcLocation);
}

static void c12_emxCopy_int32_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_int32_T **c12_dst, c12_emxArray_int32_T
  * const *c12_src, const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_numElDst;
  int32_T c12_numElSrc;
  int32_T c12_i;
  c12_numElDst = 1;
  c12_numElSrc = 1;
  for (c12_i = 0; c12_i < (*c12_dst)->numDimensions; c12_i++) {
    c12_numElDst *= (*c12_dst)->size[c12_i];
    c12_numElSrc *= (*c12_src)->size[c12_i];
  }

  for (c12_i = 0; c12_i < (*c12_dst)->numDimensions; c12_i++) {
    (*c12_dst)->size[c12_i] = (*c12_src)->size[c12_i];
  }

  c12_emxEnsureCapacity_int32_T(chartInstance, c12_sp, *c12_dst, c12_numElDst,
    c12_srcLocation);
  for (c12_i = 0; c12_i < c12_numElSrc; c12_i++) {
    (*c12_dst)->data[c12_i] = (*c12_src)->data[c12_i];
  }
}

static void c12_emxInitStruct_coder_internal_an(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp,
  c12_coder_internal_anonymous_function *c12_pStruct, const emlrtRTEInfo
  *c12_srcLocation)
{
  c12_emxInitMatrix_cell_wrap_1(chartInstance, c12_sp,
    c12_pStruct->tunableEnvironment, c12_srcLocation);
}

static void c12_emxInitMatrix_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 c12_pMatrix[2],
  const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_i;
  for (c12_i = 0; c12_i < 2; c12_i++) {
    c12_emxInitStruct_cell_wrap_1(chartInstance, c12_sp, &c12_pMatrix[c12_i],
      c12_srcLocation);
  }
}

static void c12_emxInitStruct_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_cell_wrap_1 *c12_pStruct, const
  emlrtRTEInfo *c12_srcLocation)
{
  c12_emxInit_int32_T(chartInstance, c12_sp, &c12_pStruct->f1, 1,
                      c12_srcLocation);
}

static void c12_emxFreeMatrix_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_cell_wrap_1 c12_pMatrix[2])
{
  int32_T c12_i;
  for (c12_i = 0; c12_i < 2; c12_i++) {
    c12_emxFreeStruct_cell_wrap_1(chartInstance, &c12_pMatrix[c12_i]);
  }
}

static void c12_emxFreeStruct_cell_wrap_1(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_cell_wrap_1 *c12_pStruct)
{
  c12_emxFree_int32_T(chartInstance, &c12_pStruct->f1);
}

static void c12_emxFreeStruct_coder_internal_an(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, c12_coder_internal_anonymous_function *c12_pStruct)
{
  c12_emxFreeMatrix_cell_wrap_1(chartInstance, c12_pStruct->tunableEnvironment);
}

static void c12_emxCopyStruct_coder_internal_sp(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance, const emlrtStack *c12_sp, c12_coder_internal_sparse *c12_dst,
  const c12_coder_internal_sparse *c12_src, const emlrtRTEInfo *c12_srcLocation)
{
  c12_emxCopy_real_T(chartInstance, c12_sp, &c12_dst->d, &c12_src->d,
                     c12_srcLocation);
  c12_emxCopy_int32_T(chartInstance, c12_sp, &c12_dst->colidx, &c12_src->colidx,
                      c12_srcLocation);
  c12_emxCopy_int32_T(chartInstance, c12_sp, &c12_dst->rowidx, &c12_src->rowidx,
                      c12_srcLocation);
  c12_dst->maxnz = c12_src->maxnz;
}

static void c12_emxCopy_real_T(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  const emlrtStack *c12_sp, c12_emxArray_real_T **c12_dst, c12_emxArray_real_T *
  const *c12_src, const emlrtRTEInfo *c12_srcLocation)
{
  int32_T c12_numElDst;
  int32_T c12_numElSrc;
  int32_T c12_i;
  c12_numElDst = 1;
  c12_numElSrc = 1;
  for (c12_i = 0; c12_i < (*c12_dst)->numDimensions; c12_i++) {
    c12_numElDst *= (*c12_dst)->size[c12_i];
    c12_numElSrc *= (*c12_src)->size[c12_i];
  }

  for (c12_i = 0; c12_i < (*c12_dst)->numDimensions; c12_i++) {
    (*c12_dst)->size[c12_i] = (*c12_src)->size[c12_i];
  }

  c12_emxEnsureCapacity_real_T(chartInstance, c12_sp, *c12_dst, c12_numElDst,
    c12_srcLocation);
  for (c12_i = 0; c12_i < c12_numElSrc; c12_i++) {
    (*c12_dst)->data[c12_i] = (*c12_src)->data[c12_i];
  }
}

static int32_T c12_div_nzp_s32(SFc12_PID_Cdelta_UInstanceStruct *chartInstance,
  int32_T c12_numerator, int32_T c12_denominator, int32_T c12_EMLOvCount_src_loc,
  uint32_T c12_ssid_src_loc, int32_T c12_offset_src_loc, int32_T
  c12_length_src_loc)
{
  int32_T c12_quotient;
  uint32_T c12_absNumerator;
  uint32_T c12_absDenominator;
  boolean_T c12_quotientNeedsNegation;
  uint32_T c12_tempAbsQuotient;
  (void)chartInstance;
  (void)c12_EMLOvCount_src_loc;
  (void)c12_ssid_src_loc;
  (void)c12_offset_src_loc;
  (void)c12_length_src_loc;
  if (c12_numerator < 0) {
    c12_absNumerator = ~(uint32_T)c12_numerator + 1U;
  } else {
    c12_absNumerator = (uint32_T)c12_numerator;
  }

  if (c12_denominator < 0) {
    c12_absDenominator = ~(uint32_T)c12_denominator + 1U;
  } else {
    c12_absDenominator = (uint32_T)c12_denominator;
  }

  c12_quotientNeedsNegation = ((c12_numerator < 0) != (c12_denominator < 0));
  c12_tempAbsQuotient = c12_absNumerator / c12_absDenominator;
  if (c12_quotientNeedsNegation) {
    c12_quotient = -(int32_T)c12_tempAbsQuotient;
  } else {
    c12_quotient = (int32_T)c12_tempAbsQuotient;
  }

  return c12_quotient;
}

static void init_dsm_address_info(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc12_PID_Cdelta_UInstanceStruct
  *chartInstance)
{
  chartInstance->c12_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c12_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c12_netS = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c12_Dyaw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c12_yaw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c12_PID_Cdelta_U_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3675816838U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1395011297U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2431845754U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2591948257U);
}

mxArray *sf_c12_PID_Cdelta_U_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.CXSparseAPI"));
  mxSetCell(mxcell3p, 1, mxCreateString("coder.internal.blas.BLASApi"));
  return(mxcell3p);
}

mxArray *sf_c12_PID_Cdelta_U_jit_fallback_info(void)
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

mxArray *sf_c12_PID_Cdelta_U_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c12_PID_Cdelta_U(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCWYGVgYAPSHEDMxAABrFA+IxCzQGmIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+kUcQPoNkPSzEPCfAJCXl1oSzAflU2a/gANl+i"
    "H2E3I/M4r7mRnS8pzA+i4w4I9XRrR4ZYLyQXpyGDIZCqD2OxBwPxOa+wVgjncIdIAwgqgSDkM3P"
    "kIGSXwEQeMjeJDEhwJV3BFAID6kUOIDws8sjk9MLsksS41PNjSKD/B0iXdOSc0pSYwPRfUfAGW3"
    "KNE="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c12_PID_Cdelta_U_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sjB9tXA985C7k3zl8wiG8hE";
}

static void sf_opaque_initialize_c12_PID_Cdelta_U(void *chartInstanceVar)
{
  initialize_params_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
    chartInstanceVar);
  initialize_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c12_PID_Cdelta_U(void *chartInstanceVar)
{
  enable_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c12_PID_Cdelta_U(void *chartInstanceVar)
{
  disable_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c12_PID_Cdelta_U(void *chartInstanceVar)
{
  sf_gateway_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c12_PID_Cdelta_U(SimStruct* S)
{
  return get_sim_state_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c12_PID_Cdelta_U(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c12_PID_Cdelta_U(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc12_PID_Cdelta_UInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_PID_Cdelta_U_optimization_info();
    }

    finalize_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c12_PID_Cdelta_U(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc12_PID_Cdelta_U((SFc12_PID_Cdelta_UInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c12_PID_Cdelta_U_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV8tu20YUHSpK0ABJIBQFEgRZZNcu0xZFnVVlUVIi1K5V0066E8bklTjRcIadh+xkmXxFdwW",
    "66HcE2XTpT+gHZJFP6B1KshWKFCMrLVy0FGhq6HPPnPuYOyPi9XYJXrfw/vVTQq7h8xO8a2R6XZ",
    "2NvYV7+r5OPp+Nf0OQsEmfKpposvISNIF90JJbw6ToiaEshDExBAUiRGwqlSlj0yyxnIlx14rQ8",
    "emnMQvjIJaWRy20pdGe4M+RLbWmjzxtpiA0XYDIxEraUdzldHSmWJljP4ZwrG2yygUNJrCpk6V3",
    "LTcs5dA5gbAntKGoWJ9rCww14JuTUjedpzqYA2WSckZFobcx1QGkGGADh2mEf/esQafysDCmyrQ",
    "gphPQO2yccUoBeU6m8R9HTFAjFaO8k3DfGS5r63PUsysj4CsCgtpaCug4lUyY8vwHXfS0I+gRhz",
    "Yc2VE5WwA/W5f8JwyOQZXGbejLCSg6gj1ROmkWkM5Jlq2zKlmGGZbAE6q2Q8yfhqi0erFydEAxT",
    "3CAFmUwyJzs6QPFJhjeUjab9FxlVi0Zm0yTratgGVtnAquycMbWDYVPOdelsAOZ7sAEeMbapoau",
    "hk1Zi3GpkikdYdVGGGRX4r4UEVvKRWi1kYmP5dbe2fkBO0WxuHNYTxhQQxpC0brVYQyR5YCOYmc",
    "y2XQFpBHTLlsVqFlOq1BED61oH0s1RkdXLPtzF1wOSoGJHmH0sXYPNZb5KpiLfiVu3ucfkPM+f+",
    "MD+vzcLv/8YoHHK+AhC8/8vNdr7+NruXlr+PG8qV1zwe5mbp56zs7hGni/fmtePq39+fv3te3TV",
    "7+8Oa2a31ua38u+O7s/rq63L96aje/NG9BZeU6WqsJhHy/oqhfw317gb8zG+lnroflp++HWN/63",
    "469f8K1j9mgr7mR8dyr01nN65+/vu074PM36mlZhL5pt2G5M7XQbc/xbC3qvVcTj+uz99Hr33Wb",
    "2nzXzeaxX+NfAkcAde7FuLz5/o7mZ/fI6KNJ/5T39V8hQtDK7U7JeHc7XlLPhhJGULK+nIv21nP",
    "7GXHzzx+b0y/5HicO/Nx8HlyQf+7N8BJckH/c/io5+RT7u5vrh3ew8OKB4upvAIPzyq0G/1x74e",
    "Go1dHC47N9F94F17cj/dpfCzvsP+nfjA/vRRey8Dc+R/5Tdpv6te77d5Dyc73Mkh29sMM/fjd/0",
    "d8E6+L8AZxduIw==",
    ""
  };

  static char newstr [1217] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c12_PID_Cdelta_U(SimStruct *S)
{
  const char* newstr = sf_c12_PID_Cdelta_U_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2188700865U));
  ssSetChecksum1(S,(2816475735U));
  ssSetChecksum2(S,(3493921355U));
  ssSetChecksum3(S,(3502479747U));
}

static void mdlRTW_c12_PID_Cdelta_U(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c12_PID_Cdelta_U(SimStruct *S)
{
  SFc12_PID_Cdelta_UInstanceStruct *chartInstance;
  chartInstance = (SFc12_PID_Cdelta_UInstanceStruct *)utMalloc(sizeof
    (SFc12_PID_Cdelta_UInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc12_PID_Cdelta_UInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c12_PID_Cdelta_U;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c12_PID_Cdelta_U;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c12_PID_Cdelta_U;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c12_PID_Cdelta_U;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c12_PID_Cdelta_U;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c12_PID_Cdelta_U;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c12_PID_Cdelta_U;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c12_PID_Cdelta_U;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c12_PID_Cdelta_U;
  chartInstance->chartInfo.mdlStart = mdlStart_c12_PID_Cdelta_U;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c12_PID_Cdelta_U;
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
    chartInstance->c12_JITStateAnimation,
    chartInstance->c12_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_start_c12_PID_Cdelta_U(chartInstance);
}

void c12_PID_Cdelta_U_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c12_PID_Cdelta_U(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c12_PID_Cdelta_U(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c12_PID_Cdelta_U(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c12_PID_Cdelta_U_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
