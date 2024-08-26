# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = untitled
TARGET      = sfun
MODULE_SRCS   = c2_untitled.c
MODEL_SRC  = untitled_sfun.c
MODEL_REG = untitled_sfun_registry.c
MAKEFILE    = untitled_sfun.mak
MATLAB_ROOT  = D:\Program Files\Polyspace\R2019b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "D:\1\kan-polar\test"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "D:\Program Files\Polyspace\R2019b\extern\include" \
    /I "D:\Program Files\Polyspace\R2019b\simulink\include" \
    /I "D:\Program Files\Polyspace\R2019b\simulink\include\sf_runtime" \
    /I "D:\Program Files\Polyspace\R2019b\stateflow\c\mex\include" \
    /I "D:\Program Files\Polyspace\R2019b\rtw\c\src" \
    /I "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Include" /I "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\SuiteSparse_config" /I "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport"
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD  -DCS_COMPLEX
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS     = \
     "c_mexapi_version.obj" \
     "cs_add_ri.obj" \
     "cs_add_ci.obj" \
     "cs_amd_ri.obj" \
     "cs_amd_ci.obj" \
     "cs_chol_ri.obj" \
     "cs_chol_ci.obj" \
     "cs_cholsol_ri.obj" \
     "cs_cholsol_ci.obj" \
     "cs_counts_ri.obj" \
     "cs_counts_ci.obj" \
     "cs_cumsum_ri.obj" \
     "cs_cumsum_ci.obj" \
     "cs_dfs_ri.obj" \
     "cs_dfs_ci.obj" \
     "cs_dmperm_ri.obj" \
     "cs_dmperm_ci.obj" \
     "cs_droptol_ri.obj" \
     "cs_droptol_ci.obj" \
     "cs_dropzeros_ri.obj" \
     "cs_dropzeros_ci.obj" \
     "cs_dupl_ri.obj" \
     "cs_dupl_ci.obj" \
     "cs_entry_ri.obj" \
     "cs_entry_ci.obj" \
     "cs_etree_ri.obj" \
     "cs_etree_ci.obj" \
     "cs_fkeep_ri.obj" \
     "cs_fkeep_ci.obj" \
     "cs_gaxpy_ri.obj" \
     "cs_gaxpy_ci.obj" \
     "cs_happly_ri.obj" \
     "cs_happly_ci.obj" \
     "cs_house_ri.obj" \
     "cs_house_ci.obj" \
     "cs_ipvec_ri.obj" \
     "cs_ipvec_ci.obj" \
     "cs_load_ri.obj" \
     "cs_load_ci.obj" \
     "cs_lsolve_ri.obj" \
     "cs_lsolve_ci.obj" \
     "cs_ltsolve_ri.obj" \
     "cs_ltsolve_ci.obj" \
     "cs_lu_ri.obj" \
     "cs_lu_ci.obj" \
     "cs_lusol_ri.obj" \
     "cs_lusol_ci.obj" \
     "cs_malloc_ri.obj" \
     "cs_malloc_ci.obj" \
     "cs_maxtrans_ri.obj" \
     "cs_maxtrans_ci.obj" \
     "cs_multiply_ri.obj" \
     "cs_multiply_ci.obj" \
     "cs_norm_ri.obj" \
     "cs_norm_ci.obj" \
     "cs_permute_ri.obj" \
     "cs_permute_ci.obj" \
     "cs_pinv_ri.obj" \
     "cs_pinv_ci.obj" \
     "cs_post_ri.obj" \
     "cs_post_ci.obj" \
     "cs_print_ri.obj" \
     "cs_print_ci.obj" \
     "cs_pvec_ri.obj" \
     "cs_pvec_ci.obj" \
     "cs_qr_ri.obj" \
     "cs_qr_ci.obj" \
     "cs_qrsol_ri.obj" \
     "cs_qrsol_ci.obj" \
     "cs_scatter_ri.obj" \
     "cs_scatter_ci.obj" \
     "cs_scc_ri.obj" \
     "cs_scc_ci.obj" \
     "cs_schol_ri.obj" \
     "cs_schol_ci.obj" \
     "cs_sqr_ri.obj" \
     "cs_sqr_ci.obj" \
     "cs_symperm_ri.obj" \
     "cs_symperm_ci.obj" \
     "cs_tdfs_ri.obj" \
     "cs_tdfs_ci.obj" \
     "cs_transpose_ri.obj" \
     "cs_transpose_ci.obj" \
     "cs_compress_ri.obj" \
     "cs_compress_ci.obj" \
     "cs_updown_ri.obj" \
     "cs_updown_ci.obj" \
     "cs_usolve_ri.obj" \
     "cs_usolve_ci.obj" \
     "cs_utsolve_ri.obj" \
     "cs_utsolve_ci.obj" \
     "cs_util_ri.obj" \
     "cs_util_ci.obj" \
     "cs_reach_ri.obj" \
     "cs_reach_ci.obj" \
     "cs_spsolve_ri.obj" \
     "cs_spsolve_ci.obj" \
     "cs_ereach_ri.obj" \
     "cs_ereach_ci.obj" \
     "cs_leaf_ri.obj" \
     "cs_leaf_ci.obj" \
     "cs_randperm_ri.obj" \
     "cs_randperm_ci.obj" \
     "cs_operator_ri.obj" \
     "cs_operator_ci.obj" \
     "solve_from_lu.obj" \
     "solve_from_qr.obj" \
     "makeCXSparseMatrix.obj" \
     "unpackCXStruct.obj" \

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = untitled_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
 @echo ### Linking ...
 $(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map"\
  $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS)\
  $(DSP_LIBS) $(THIRD_PARTY_LIBS)\
  @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


c_mexapi_version.obj :  "D:\Program Files\Polyspace\R2019b\extern\version\c_mexapi_version.c"
	@echo ### Compiling "D:\Program Files\Polyspace\R2019b\extern\version\c_mexapi_version.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\Program Files\Polyspace\R2019b\extern\version\c_mexapi_version.c"
cs_add_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_add_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_add_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_add_ri.c"
cs_add_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_add_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_add_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_add_ci.c"
cs_amd_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_amd_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_amd_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_amd_ri.c"
cs_amd_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_amd_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_amd_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_amd_ci.c"
cs_chol_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_chol_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_chol_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_chol_ri.c"
cs_chol_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_chol_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_chol_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_chol_ci.c"
cs_cholsol_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cholsol_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cholsol_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cholsol_ri.c"
cs_cholsol_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cholsol_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cholsol_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cholsol_ci.c"
cs_counts_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_counts_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_counts_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_counts_ri.c"
cs_counts_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_counts_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_counts_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_counts_ci.c"
cs_cumsum_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cumsum_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cumsum_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cumsum_ri.c"
cs_cumsum_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cumsum_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cumsum_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_cumsum_ci.c"
cs_dfs_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dfs_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dfs_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dfs_ri.c"
cs_dfs_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dfs_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dfs_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dfs_ci.c"
cs_dmperm_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dmperm_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dmperm_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dmperm_ri.c"
cs_dmperm_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dmperm_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dmperm_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dmperm_ci.c"
cs_droptol_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_droptol_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_droptol_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_droptol_ri.c"
cs_droptol_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_droptol_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_droptol_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_droptol_ci.c"
cs_dropzeros_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dropzeros_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dropzeros_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dropzeros_ri.c"
cs_dropzeros_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dropzeros_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dropzeros_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dropzeros_ci.c"
cs_dupl_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dupl_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dupl_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dupl_ri.c"
cs_dupl_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dupl_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dupl_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_dupl_ci.c"
cs_entry_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_entry_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_entry_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_entry_ri.c"
cs_entry_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_entry_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_entry_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_entry_ci.c"
cs_etree_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_etree_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_etree_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_etree_ri.c"
cs_etree_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_etree_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_etree_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_etree_ci.c"
cs_fkeep_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_fkeep_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_fkeep_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_fkeep_ri.c"
cs_fkeep_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_fkeep_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_fkeep_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_fkeep_ci.c"
cs_gaxpy_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_gaxpy_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_gaxpy_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_gaxpy_ri.c"
cs_gaxpy_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_gaxpy_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_gaxpy_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_gaxpy_ci.c"
cs_happly_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_happly_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_happly_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_happly_ri.c"
cs_happly_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_happly_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_happly_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_happly_ci.c"
cs_house_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_house_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_house_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_house_ri.c"
cs_house_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_house_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_house_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_house_ci.c"
cs_ipvec_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ipvec_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ipvec_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ipvec_ri.c"
cs_ipvec_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ipvec_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ipvec_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ipvec_ci.c"
cs_load_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_load_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_load_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_load_ri.c"
cs_load_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_load_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_load_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_load_ci.c"
cs_lsolve_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lsolve_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lsolve_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lsolve_ri.c"
cs_lsolve_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lsolve_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lsolve_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lsolve_ci.c"
cs_ltsolve_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ltsolve_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ltsolve_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ltsolve_ri.c"
cs_ltsolve_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ltsolve_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ltsolve_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ltsolve_ci.c"
cs_lu_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lu_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lu_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lu_ri.c"
cs_lu_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lu_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lu_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lu_ci.c"
cs_lusol_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lusol_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lusol_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lusol_ri.c"
cs_lusol_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lusol_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lusol_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_lusol_ci.c"
cs_malloc_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_malloc_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_malloc_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_malloc_ri.c"
cs_malloc_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_malloc_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_malloc_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_malloc_ci.c"
cs_maxtrans_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_maxtrans_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_maxtrans_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_maxtrans_ri.c"
cs_maxtrans_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_maxtrans_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_maxtrans_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_maxtrans_ci.c"
cs_multiply_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_multiply_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_multiply_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_multiply_ri.c"
cs_multiply_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_multiply_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_multiply_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_multiply_ci.c"
cs_norm_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_norm_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_norm_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_norm_ri.c"
cs_norm_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_norm_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_norm_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_norm_ci.c"
cs_permute_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_permute_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_permute_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_permute_ri.c"
cs_permute_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_permute_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_permute_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_permute_ci.c"
cs_pinv_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pinv_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pinv_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pinv_ri.c"
cs_pinv_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pinv_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pinv_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pinv_ci.c"
cs_post_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_post_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_post_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_post_ri.c"
cs_post_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_post_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_post_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_post_ci.c"
cs_print_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_print_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_print_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_print_ri.c"
cs_print_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_print_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_print_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_print_ci.c"
cs_pvec_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pvec_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pvec_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pvec_ri.c"
cs_pvec_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pvec_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pvec_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_pvec_ci.c"
cs_qr_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qr_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qr_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qr_ri.c"
cs_qr_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qr_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qr_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qr_ci.c"
cs_qrsol_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qrsol_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qrsol_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qrsol_ri.c"
cs_qrsol_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qrsol_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qrsol_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_qrsol_ci.c"
cs_scatter_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scatter_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scatter_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scatter_ri.c"
cs_scatter_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scatter_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scatter_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scatter_ci.c"
cs_scc_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scc_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scc_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scc_ri.c"
cs_scc_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scc_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scc_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_scc_ci.c"
cs_schol_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_schol_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_schol_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_schol_ri.c"
cs_schol_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_schol_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_schol_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_schol_ci.c"
cs_sqr_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_sqr_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_sqr_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_sqr_ri.c"
cs_sqr_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_sqr_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_sqr_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_sqr_ci.c"
cs_symperm_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_symperm_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_symperm_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_symperm_ri.c"
cs_symperm_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_symperm_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_symperm_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_symperm_ci.c"
cs_tdfs_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_tdfs_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_tdfs_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_tdfs_ri.c"
cs_tdfs_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_tdfs_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_tdfs_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_tdfs_ci.c"
cs_transpose_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_transpose_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_transpose_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_transpose_ri.c"
cs_transpose_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_transpose_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_transpose_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_transpose_ci.c"
cs_compress_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_compress_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_compress_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_compress_ri.c"
cs_compress_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_compress_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_compress_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_compress_ci.c"
cs_updown_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_updown_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_updown_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_updown_ri.c"
cs_updown_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_updown_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_updown_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_updown_ci.c"
cs_usolve_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_usolve_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_usolve_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_usolve_ri.c"
cs_usolve_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_usolve_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_usolve_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_usolve_ci.c"
cs_utsolve_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_utsolve_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_utsolve_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_utsolve_ri.c"
cs_utsolve_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_utsolve_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_utsolve_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_utsolve_ci.c"
cs_util_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_util_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_util_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_util_ri.c"
cs_util_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_util_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_util_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_util_ci.c"
cs_reach_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_reach_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_reach_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_reach_ri.c"
cs_reach_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_reach_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_reach_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_reach_ci.c"
cs_spsolve_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_spsolve_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_spsolve_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_spsolve_ri.c"
cs_spsolve_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_spsolve_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_spsolve_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_spsolve_ci.c"
cs_ereach_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ereach_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ereach_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ereach_ri.c"
cs_ereach_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ereach_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ereach_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_ereach_ci.c"
cs_leaf_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_leaf_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_leaf_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_leaf_ri.c"
cs_leaf_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_leaf_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_leaf_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_leaf_ci.c"
cs_randperm_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_randperm_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_randperm_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_randperm_ri.c"
cs_randperm_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_randperm_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_randperm_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_randperm_ci.c"
cs_operator_ri.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_operator_ri.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_operator_ri.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_operator_ri.c"
cs_operator_ci.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_operator_ci.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_operator_ci.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\Source\cs_operator_ci.c"
solve_from_lu.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\solve_from_lu.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\solve_from_lu.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\solve_from_lu.c"
solve_from_qr.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\solve_from_qr.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\solve_from_qr.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\solve_from_qr.c"
makeCXSparseMatrix.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\makeCXSparseMatrix.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\makeCXSparseMatrix.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\makeCXSparseMatrix.c"
unpackCXStruct.obj :  "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\unpackCXStruct.c"
	@echo ### Compiling "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\unpackCXStruct.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\1\kan-polar\test\slprj\_sfprj\untitled\_self\sfun\src\CXSparse\CXSparseSupport\unpackCXStruct.c"
