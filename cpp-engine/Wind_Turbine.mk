###########################################################################
## Makefile generated for component 'Wind_Turbine'. 
## 
## Makefile     : Wind_Turbine.mk
## Generated on : Fri Feb 11 17:40:36 2022
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/Wind_Turbine
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = Wind_Turbine
MAKEFILE                  = Wind_Turbine.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2021b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2021b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/Matlab/Milezero/Analisis Turbin V2/work
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBSM_SSCI_OBJS           = ./sm_ssci_3dd14f0a.o ./sm_ssci_646478c5.o ./sm_ssci_b2b6b422.o ./sm_ssci_c16a187b.o
LIBSM_OBJS                = ./sm_01d3ac26.o ./sm_04d045b9.o ./sm_09b59221.o ./sm_0cb6a5fa.o ./sm_1dba7276.o ./sm_26df822b.o ./sm_38d4abbe.o ./sm_43618472.o ./sm_440126a7.o ./sm_45dc522c.o ./sm_466cdd79.o ./sm_4c61739a.o ./sm_5763bdb7.o ./sm_6166f1eb.o ./sm_62d41fb5.o ./sm_67d72683.o ./sm_6fbd150d.o ./sm_71b23225.o ./sm_73d210b9.o ./sm_73dfadcf.o ./sm_7a6fe4d7.o ./sm_916806b3.o ./sm_95b82517.o ./sm_9abcb56e.o ./sm_a0028316.o ./sm_a1d32671.o ./sm_a264a430.o ./sm_a3ba6de7.o ./sm_aa059a3a.o ./sm_acba2496.o ./sm_b40db855.o ./sm_b66990f5.o ./sm_badd8656.o ./sm_bc63e36c.o ./sm_bfda6e42.o ./sm_c0ba649d.o ./sm_c60cd1fd.o ./sm_c7d3720c.o ./sm_cabca465.o ./sm_d3d79f0f.o ./sm_d3d946fd.o ./sm_d4bb3938.o ./sm_d6dc1822.o ./sm_da690167.o ./sm_df66e89b.o ./sm_e8bab6d7.o ./sm_ec6029c9.o ./sm_efdfa66e.o ./sm_f3b314ce.o
LIBPM_MATH_OBJS           = ./pm_math_01dec08e.o ./pm_math_04d19358.o ./pm_math_050e87e9.o ./pm_math_1966ea7d.o ./pm_math_1ad202b7.o ./pm_math_1c69d5b2.o ./pm_math_1c6b6a1b.o ./pm_math_29dc7f63.o ./pm_math_2a66252c.o ./pm_math_32d9636d.o ./pm_math_3309726a.o ./pm_math_3463da5d.o ./pm_math_360e4b46.o ./pm_math_3fbf046b.o ./pm_math_48b75553.o ./pm_math_48bd51fb.o ./pm_math_5a01dda4.o ./pm_math_646fa971.o ./pm_math_6b69e06e.o ./pm_math_7565727c.o ./pm_math_7cd5543c.o ./pm_math_89df260e.o ./pm_math_8cd61cd6.o ./pm_math_8d05b7c0.o ./pm_math_93014cb0.o ./pm_math_a001e9ec.o ./pm_math_b7b980b1.o ./pm_math_bad43c87.o ./pm_math_c7d2cd09.o ./pm_math_d1be0f30.o ./pm_math_d80b9e3b.o ./pm_math_da630bd2.o ./pm_math_e8b06b42.o ./pm_math_ee02b2b3.o ./pm_math_f760e8f6.o ./pm_math_f866cdd2.o ./pm_math_fd679a52.o
LIBSSC_SLI_OBJS           = ./ssc_sli_0267402d.o ./ssc_sli_0763c151.o ./ssc_sli_0bd269e6.o ./ssc_sli_0d6d0780.o ./ssc_sli_136b443c.o ./ssc_sli_136f97a1.o ./ssc_sli_140b3534.o ./ssc_sli_15d5f6ce.o ./ssc_sli_1c690f90.o ./ssc_sli_1db813e8.o ./ssc_sli_256cd4b6.o ./ssc_sli_2bbd58a4.o ./ssc_sli_2f6ea1cd.o ./ssc_sli_360cfd63.o ./ssc_sli_3fb4607e.o ./ssc_sli_40d56d93.o ./ssc_sli_42b14021.o ./ssc_sli_43618287.o ./ssc_sli_466b08dd.o ./ssc_sli_496799bd.o ./ssc_sli_4e028390.o ./ssc_sli_51dbd3b5.o ./ssc_sli_550a4805.o ./ssc_sli_5a0cb974.o ./ssc_sli_5d63aeeb.o ./ssc_sli_62d81790.o ./ssc_sli_77063d8b.o ./ssc_sli_7a618260.o ./ssc_sli_7f65db03.o ./ssc_sli_880e593a.o ./ssc_sli_89d0f30a.o ./ssc_sli_8a64c4e2.o ./ssc_sli_93019ea6.o ./ssc_sli_9abcdb7f.o ./ssc_sli_9b67747c.o ./ssc_sli_9c030181.o ./ssc_sli_c7dda239.o ./ssc_sli_d064c978.o ./ssc_sli_d80c44d2.o ./ssc_sli_dcd66f69.o ./ssc_sli_e66fe6d5.o ./ssc_sli_e7b327bb.o ./ssc_sli_eb0a5702.o ./ssc_sli_edbee55c.o ./ssc_sli_f6bd9cc8.o ./ssc_sli_f9b5dbc5.o ./ssc_sli_fa0ce53e.o ./ssc_sli_fbdf29da.o
LIBSSC_CORE_OBJS          = ./ssc_core_01dcc633.o ./ssc_core_04da2c69.o ./ssc_core_05058dd9.o ./ssc_core_06ba68a6.o ./ssc_core_09b5fa6e.o ./ssc_core_0bd666aa.o ./ssc_core_0d65be6c.o ./ssc_core_0f019bd9.o ./ssc_core_0f0420a6.o ./ssc_core_18bf4d77.o ./ssc_core_1b0cafd5.o ./ssc_core_1c6b0332.o ./ssc_core_1fd25120.o ./ssc_core_24b4cdee.o ./ssc_core_2568b075.o ./ssc_core_280c0222.o ./ssc_core_2cd54448.o ./ssc_core_3169e4b7.o ./ssc_core_32d8b307.o ./ssc_core_360a4baf.o ./ssc_core_37d4ea84.o ./ssc_core_40dfdbdc.o ./ssc_core_41017299.o ./ssc_core_4666b45b.o ./ssc_core_48b08af1.o ./ssc_core_48b1386a.o ./ssc_core_4965213d.o ./ssc_core_4ad9135b.o ./ssc_core_4db6bd68.o ./ssc_core_4db86fcc.o ./ssc_core_4e03e39d.o ./ssc_core_4e04eecd.o ./ssc_core_4e06e3bd.o ./ssc_core_54d55ae9.o ./ssc_core_5505224d.o ./ssc_core_56b1a2bf.o ./ssc_core_576cd129.o ./ssc_core_59b034b8.o ./ssc_core_5a046b27.o ./ssc_core_5d6ba758.o ./ssc_core_60b0e4dc.o ./ssc_core_67d1f118.o ./ssc_core_68da074b.o ./ssc_core_6b663a17.o ./ssc_core_6b6b89d2.o ./ssc_core_6dd833f3.o ./ssc_core_7209d3a5.o ./ssc_core_73d9c2b7.o ./ssc_core_76d825be.o ./ssc_core_770cead7.o ./ssc_core_79dd08ab.o ./ssc_core_7a613edb.o ./ssc_core_83db8762.o ./ssc_core_856738f2.o ./ssc_core_8569edc5.o ./ssc_core_89d7fa79.o ./ssc_core_8a6471dc.o ./ssc_core_8cd9cb37.o ./ssc_core_8d0064b8.o ./ssc_core_96061071.o ./ssc_core_97d767fe.o ./ssc_core_990fe1a4.o ./ssc_core_9b607b15.o ./ssc_core_9b671e57.o ./ssc_core_9c016445.o ./ssc_core_9c01d168.o ./ssc_core_9dd110ad.o ./ssc_core_9fb0e229.o ./ssc_core_9fb25b4f.o ./ssc_core_9fb2e56c.o ./ssc_core_a1d393be.o ./ssc_core_a269ab09.o ./ssc_core_a4d4c45e.o ./ssc_core_a4da1d0a.o ./ssc_core_a6b78ccc.o ./ssc_core_a76299bc.o ./ssc_core_a867d880.o ./ssc_core_a9bf1ff2.o ./ssc_core_aa09f23c.o ./ssc_core_abd05c18.o ./ssc_core_abd5e7b4.o ./ssc_core_acb64294.o ./ssc_core_acb6462e.o ./ssc_core_b1038cbb.o ./ssc_core_b10e34f4.o ./ssc_core_b2b3b239.o ./ssc_core_b369cd13.o ./ssc_core_b402b40d.o ./ssc_core_b7b88213.o ./ssc_core_b96ebc21.o ./ssc_core_bad68669.o ./ssc_core_bc648043.o ./ssc_core_bfdb08db.o ./ssc_core_c3003040.o ./ssc_core_c5b050d7.o ./ssc_core_c5b63cb2.o ./ssc_core_c607b660.o ./ssc_core_c8d33536.o ./ssc_core_c8d83e88.o ./ssc_core_cab615c8.o ./ssc_core_cabdc251.o ./ssc_core_cc067f58.o ./ssc_core_cc0bcab0.o ./ssc_core_ce6a84bb.o ./ssc_core_d06d763c.o ./ssc_core_d3d34d7c.o ./ssc_core_d4b9397b.o ./ssc_core_d70a6a09.o ./ssc_core_d807fa59.o ./ssc_core_dcda6edd.o ./ssc_core_deb7fd8d.o ./ssc_core_e0d0866d.o ./ssc_core_e2b61d72.o ./ssc_core_e400c1c2.o ./ssc_core_ead8f455.o ./ssc_core_edb836de.o ./ssc_core_ee000fbe.o ./ssc_core_ee01086d.o ./ssc_core_ee0f0141.o ./ssc_core_f9b6dbed.o ./ssc_core_fa09e9e6.o ./ssc_core_fbd34e62.o ./ssc_core_ff06d9a4.o
LIBNE_OBJS                = ./ne_59b4e14a.o
LIBMC_OBJS                = ./mc_026e4f4b.o ./mc_03b98f6f.o ./mc_0764157d.o ./mc_0bd30dee.o ./mc_0d6fd085.o ./mc_0ed73c49.o ./mc_0edc34e3.o ./mc_10d4ab75.o ./mc_11086079.o ./mc_110e6c6c.o ./mc_140e3c4c.o ./mc_15d12d95.o ./mc_15d828ca.o ./mc_220ba961.o ./mc_2565d6e0.o ./mc_2a642f54.o ./mc_2a6a9b24.o ./mc_2bbf87e3.o ./mc_2cdc96b4.o ./mc_32d501e3.o ./mc_32dc008a.o ./mc_3b6a945d.o ./mc_3e66abdf.o ./mc_4105189f.o ./mc_47b8cebe.o ./mc_47b91db1.o ./mc_4b0301c6.o ./mc_4c6117e3.o ./mc_51d4094e.o ./mc_52623861.o ./mc_52688a58.o ./mc_53b1fc84.o ./mc_53b6fcf3.o ./mc_550847c3.o ./mc_5766048f.o ./mc_59b6e413.o ./mc_5bd2c9c1.o ./mc_5d65cd86.o ./mc_5edd42ef.o ./mc_630208f8.o ./mc_630dda0e.o ./mc_67da200d.o ./mc_67da4f41.o ./mc_6b6d311a.o ./mc_6e61d16c.o ./mc_6fb1c336.o ./mc_7809a65c.o ./mc_7a613aec.o ./mc_7bbf41f0.o ./mc_7cd58f0b.o ./mc_7cdbe436.o ./mc_7d0547c8.o ./mc_7d099de7.o ./mc_7eb21b39.o ./mc_81b0ada5.o ./mc_81b5717e.o ./mc_81bc7943.o ./mc_870ec75e.o ./mc_89d597cf.o ./mc_90b6aa0a.o ./mc_95b62b73.o ./mc_9ab7d9b0.o ./mc_9b6376d1.o ./mc_9b6c1529.o ./mc_a2647600.o ./mc_a26bab1a.o ./mc_a3b90582.o ./mc_a7684938.o ./mc_a865d1dd.o ./mc_acb3fad7.o ./mc_af0bc203.o ./mc_af0cc4c9.o ./mc_b0de9cbc.o ./mc_b362c5eb.o ./mc_b7b03d44.o ./mc_b96a0bad.o ./mc_bb0520ee.o ./mc_bdbb9b78.o ./mc_c2dbf4b2.o ./mc_c8d25d23.o ./mc_cab8a1f9.o ./mc_ce6656ce.o ./mc_d20085b7.o ./mc_d9d38185.o ./mc_dbbb14d2.o ./mc_dcdddfae.o ./mc_debb448f.o ./mc_e7b99cf6.o ./mc_e7bc2f1a.o ./mc_e969ae87.o ./mc_edbf543c.o ./mc_ee000fbe.o ./mc_efdea3a7.o ./mc_f0012953.o ./mc_f00d2f9b.o ./mc_f3be157c.o ./mc_fbd54145.o ./mc_fcb15a9b.o ./mc_fd619d14.o ./mc_fd6341bb.o
LIBEX_OBJS                = ./ex_04d5441d.o ./ex_0d6d0784.o ./ex_136645f8.o ./ex_17bc61ac.o ./ex_18b4440a.o ./ex_1b03ca17.o ./ex_2ebcd5b2.o ./ex_316a81de.o ./ex_36012fa7.o ./ex_40d5be33.o ./ex_47b11894.o ./ex_57660158.o ./ex_690b7cd0.o ./ex_770385e6.o ./ex_79d100f1.o ./ex_8a6fc761.o ./ex_98d223a6.o ./ex_aed5de1e.o ./ex_b2b40ad5.o ./ex_bb0efd4b.o ./ex_bfdb009c.o ./ex_c9069dae.o ./ex_d9d686a8.o ./ex_debffef2.o ./ex_e40d74b8.o ./ex_eb0d559b.o ./ex_f6bb4c2d.o ./ex_f866102d.o ./slu_stubbed_definitions.o
LIBPM_OBJS                = ./pm_09bc42e2.o ./pm_14098e54.o ./pm_26dc3230.o ./pm_4fd5f5b9.o ./pm_fed8c2c9.o

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Simulink Real-Time Toolchain
# Supported Version(s):    
# ToolchainInfo Version:   2021b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# SLREALTIME_QNX_SP_ROOT
# SLREALTIME_QNX_VERSION

#-----------
# MACROS
#-----------

QCC_TARGET             = gcc_ntox86_64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -L$(MATLAB_ROOT)/toolbox/slrealtime/target/lib -ltraceparser -lpps -lslrealtime_kernel -lslrealtime_platform -lslrealtime_rtps -lsocket -lboost_system -lboost_log -lpci -lopenblas

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: QNX C Compiler
CC = qcc

# Linker: QCC Linker
LD = q++

# C++ Compiler: QNX C++ Compiler
CPP = q++

# C++ Linker: QCC C++ Linker
CPP_LD = q++

# Archiver: QNX Archiver
AR = ntox86_64-gcc-ar

# Builder: GMAKE Utility
MAKE = make


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g -O0 -finstrument-functions
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g -O0 -finstrument-functions
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -V$(QCC_TARGET) -g \
                       -O2 -fwrapv
CPPFLAGS             = -c -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++ \
                       -O2 -fwrapv
CPP_LDFLAGS          = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
CPP_SHAREDLIB_LDFLAGS  = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g
LDFLAGS              = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/Wind_Turbine
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/Wind_Turbine_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/powersys/facts/facts -I$(MATLAB_ROOT)/toolbox/physmod/powersys/DR/DR

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DRT -DUSE_RTMODEL -DERT -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=Wind_Turbine -DNUMST=2 -DNCSTATES=156 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_create.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_setParameters.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_asserts.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_deriv.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_checkDynamics.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_compOutputsKin.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_compOutputsDyn.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_asm_delegate.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_sim_delegate.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_mode_zero_crossings.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_logging.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_geometries.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_gateway.c $(START_DIR)/Wind_Turbine_ert_rtw/pm_printf.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_zc.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_all.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_act.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_log.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_tdxf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_a_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_il.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_a.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_lock2_i.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_qx_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_exp.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_lock_i.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_mode.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_update_i.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_f.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_cache_i.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_update2_i.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_gateway.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_zc.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_il.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_all.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_act.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_exp.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_log.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_imin.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dnf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dxm.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_tdxf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_m.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_a_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_a.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dxf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dxf.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_mode.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_f.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_duf.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_assert.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_gateway.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_zc.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_il.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_all.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_act.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_exp.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_log.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_imin.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dnf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dxm.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_tdxf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_m.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_a_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_a.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dxf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dxf.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_mode.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_f.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_duf.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_assert.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_gateway.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_zc.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_il.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_all.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_act.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_exp.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_log.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_imin.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dnf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dxm.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_tdxf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_m.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_a_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_a.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dxf_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dxf.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_mode.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_f.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_duf.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_assert.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_gateway.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_exp.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_log.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_tduicr_p.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_dxicr.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr_il.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr_im.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr_id.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_all.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_act.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_b.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_dxy.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_il.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_a.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_assert.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_gateway.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_duy.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_y.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_il.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_all.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_act.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_exp.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_log.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_gateway.c $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c $(MATLAB_ROOT)/rtw/c/src/rt_printf.c $(START_DIR)/Wind_Turbine_ert_rtw/rt_backsubrr_dbl.c $(START_DIR)/Wind_Turbine_ert_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/Wind_Turbine_ert_rtw/rt_lu_real.c $(START_DIR)/Wind_Turbine_ert_rtw/rt_matrixlib_dbl.c $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine.cpp $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_data.cpp $(START_DIR)/Wind_Turbine_ert_rtw/rtGetInf.cpp $(START_DIR)/Wind_Turbine_ert_rtw/rtGetNaN.cpp $(START_DIR)/Wind_Turbine_ert_rtw/rt_look.cpp $(START_DIR)/Wind_Turbine_ert_rtw/rt_look1d.cpp $(START_DIR)/Wind_Turbine_ert_rtw/rt_nonfinite.cpp $(MATLAB_ROOT)/toolbox/physmod/powersys/powersys/sfun_psbdqc.c

MAIN_SRC = $(START_DIR)/Wind_Turbine_ert_rtw/ert_main.cpp

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = Wind_Turbine_31c4daf8_1.o Wind_Turbine_31c4daf8_1_create.o Wind_Turbine_31c4daf8_1_setParameters.o Wind_Turbine_31c4daf8_1_asserts.o Wind_Turbine_31c4daf8_1_deriv.o Wind_Turbine_31c4daf8_1_checkDynamics.o Wind_Turbine_31c4daf8_1_compOutputsKin.o Wind_Turbine_31c4daf8_1_compOutputsDyn.o Wind_Turbine_31c4daf8_1_asm_delegate.o Wind_Turbine_31c4daf8_1_sim_delegate.o Wind_Turbine_31c4daf8_1_mode_zero_crossings.o Wind_Turbine_31c4daf8_1_logging.o Wind_Turbine_31c4daf8_1_geometries.o Wind_Turbine_31c4daf8_1_gateway.o pm_printf.o Wind_Turbine_31c4daf8_7_ds.o Wind_Turbine_31c4daf8_7_ds_zc.o Wind_Turbine_31c4daf8_7_ds_obs_all.o Wind_Turbine_31c4daf8_7_ds_obs_act.o Wind_Turbine_31c4daf8_7_ds_log.o Wind_Turbine_31c4daf8_7_ds_tdxf_p.o Wind_Turbine_31c4daf8_7_ds_a_p.o Wind_Turbine_31c4daf8_7_ds_obs_il.o Wind_Turbine_31c4daf8_7_ds_a.o Wind_Turbine_31c4daf8_7_ds_lock2_i.o Wind_Turbine_31c4daf8_7_ds_qx_p.o Wind_Turbine_31c4daf8_7_ds_obs_exp.o Wind_Turbine_31c4daf8_7_ds_lock_i.o Wind_Turbine_31c4daf8_7_ds_mode.o Wind_Turbine_31c4daf8_7_ds_update_i.o Wind_Turbine_31c4daf8_7_ds_f.o Wind_Turbine_31c4daf8_7_ds_cache_i.o Wind_Turbine_31c4daf8_7_ds_update2_i.o Wind_Turbine_31c4daf8_7.o Wind_Turbine_31c4daf8_7_gateway.o Wind_Turbine_31c4daf8_5_ds.o Wind_Turbine_31c4daf8_5_ds_zc.o Wind_Turbine_31c4daf8_5_ds_obs_il.o Wind_Turbine_31c4daf8_5_ds_obs_all.o Wind_Turbine_31c4daf8_5_ds_obs_act.o Wind_Turbine_31c4daf8_5_ds_obs_exp.o Wind_Turbine_31c4daf8_5_ds_log.o Wind_Turbine_31c4daf8_5_ds_imin.o Wind_Turbine_31c4daf8_5_ds_dnf_p.o Wind_Turbine_31c4daf8_5_ds_dxm.o Wind_Turbine_31c4daf8_5_ds_tdxf_p.o Wind_Turbine_31c4daf8_5_ds_m.o Wind_Turbine_31c4daf8_5_ds_a_p.o Wind_Turbine_31c4daf8_5_ds_a.o Wind_Turbine_31c4daf8_5_ds_dxf_p.o Wind_Turbine_31c4daf8_5_ds_dxf.o Wind_Turbine_31c4daf8_5_ds_mode.o Wind_Turbine_31c4daf8_5_ds_f.o Wind_Turbine_31c4daf8_5_ds_duf.o Wind_Turbine_31c4daf8_5_ds_assert.o Wind_Turbine_31c4daf8_5.o Wind_Turbine_31c4daf8_5_gateway.o Wind_Turbine_31c4daf8_4_ds.o Wind_Turbine_31c4daf8_4_ds_zc.o Wind_Turbine_31c4daf8_4_ds_obs_il.o Wind_Turbine_31c4daf8_4_ds_obs_all.o Wind_Turbine_31c4daf8_4_ds_obs_act.o Wind_Turbine_31c4daf8_4_ds_obs_exp.o Wind_Turbine_31c4daf8_4_ds_log.o Wind_Turbine_31c4daf8_4_ds_imin.o Wind_Turbine_31c4daf8_4_ds_dnf_p.o Wind_Turbine_31c4daf8_4_ds_dxm.o Wind_Turbine_31c4daf8_4_ds_tdxf_p.o Wind_Turbine_31c4daf8_4_ds_m.o Wind_Turbine_31c4daf8_4_ds_a_p.o Wind_Turbine_31c4daf8_4_ds_a.o Wind_Turbine_31c4daf8_4_ds_dxf_p.o Wind_Turbine_31c4daf8_4_ds_dxf.o Wind_Turbine_31c4daf8_4_ds_mode.o Wind_Turbine_31c4daf8_4_ds_f.o Wind_Turbine_31c4daf8_4_ds_duf.o Wind_Turbine_31c4daf8_4_ds_assert.o Wind_Turbine_31c4daf8_4.o Wind_Turbine_31c4daf8_4_gateway.o Wind_Turbine_31c4daf8_3_ds.o Wind_Turbine_31c4daf8_3_ds_zc.o Wind_Turbine_31c4daf8_3_ds_obs_il.o Wind_Turbine_31c4daf8_3_ds_obs_all.o Wind_Turbine_31c4daf8_3_ds_obs_act.o Wind_Turbine_31c4daf8_3_ds_obs_exp.o Wind_Turbine_31c4daf8_3_ds_log.o Wind_Turbine_31c4daf8_3_ds_imin.o Wind_Turbine_31c4daf8_3_ds_dnf_p.o Wind_Turbine_31c4daf8_3_ds_dxm.o Wind_Turbine_31c4daf8_3_ds_tdxf_p.o Wind_Turbine_31c4daf8_3_ds_m.o Wind_Turbine_31c4daf8_3_ds_a_p.o Wind_Turbine_31c4daf8_3_ds_a.o Wind_Turbine_31c4daf8_3_ds_dxf_p.o Wind_Turbine_31c4daf8_3_ds_dxf.o Wind_Turbine_31c4daf8_3_ds_mode.o Wind_Turbine_31c4daf8_3_ds_f.o Wind_Turbine_31c4daf8_3_ds_duf.o Wind_Turbine_31c4daf8_3_ds_assert.o Wind_Turbine_31c4daf8_3.o Wind_Turbine_31c4daf8_3_gateway.o Wind_Turbine_31c4daf8_2_ds.o Wind_Turbine_31c4daf8_2_ds_obs_exp.o Wind_Turbine_31c4daf8_2_ds_log.o Wind_Turbine_31c4daf8_2_ds_tduicr_p.o Wind_Turbine_31c4daf8_2_ds_dxicr.o Wind_Turbine_31c4daf8_2_ds_icr_il.o Wind_Turbine_31c4daf8_2_ds_icr_im.o Wind_Turbine_31c4daf8_2_ds_icr_id.o Wind_Turbine_31c4daf8_2_ds_icr.o Wind_Turbine_31c4daf8_2_ds_obs_all.o Wind_Turbine_31c4daf8_2_ds_obs_act.o Wind_Turbine_31c4daf8_2_ds_b.o Wind_Turbine_31c4daf8_2_ds_dxy.o Wind_Turbine_31c4daf8_2_ds_obs_il.o Wind_Turbine_31c4daf8_2_ds_a.o Wind_Turbine_31c4daf8_2_ds_assert.o Wind_Turbine_31c4daf8_2.o Wind_Turbine_31c4daf8_2_gateway.o Wind_Turbine_31c4daf8_8_ds.o Wind_Turbine_31c4daf8_8_ds_duy.o Wind_Turbine_31c4daf8_8_ds_y.o Wind_Turbine_31c4daf8_8_ds_obs_il.o Wind_Turbine_31c4daf8_8_ds_obs_all.o Wind_Turbine_31c4daf8_8_ds_obs_act.o Wind_Turbine_31c4daf8_8_ds_obs_exp.o Wind_Turbine_31c4daf8_8_ds_log.o Wind_Turbine_31c4daf8_8.o Wind_Turbine_31c4daf8_8_gateway.o rt_matrx.o rt_printf.o rt_backsubrr_dbl.o rt_forwardsubrr_dbl.o rt_lu_real.o rt_matrixlib_dbl.o Wind_Turbine.o Wind_Turbine_data.o rtGetInf.o rtGetNaN.o rt_look.o rt_look1d.o rt_nonfinite.o sfun_psbdqc.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = ./sm_ssci.a ./sm.a ./pm_math.a ./ssc_sli.a ./ssc_core.a ./ne.a ./mc.a ./ex.a ./pm.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/powersys/powersys/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/powersys/powersys/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/Wind_Turbine_ert_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/Wind_Turbine_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_create.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_create.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_setParameters.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_setParameters.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_asserts.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_asserts.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_deriv.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_deriv.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_checkDynamics.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_checkDynamics.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_compOutputsKin.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_compOutputsKin.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_compOutputsDyn.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_compOutputsDyn.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_asm_delegate.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_asm_delegate.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_sim_delegate.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_sim_delegate.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_mode_zero_crossings.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_mode_zero_crossings.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_logging.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_logging.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_geometries.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_geometries.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_1_gateway.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_1_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


pm_printf.o : $(START_DIR)/Wind_Turbine_ert_rtw/pm_printf.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_zc.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_zc.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_obs_all.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_all.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_obs_act.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_act.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_log.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_log.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_tdxf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_a_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_a_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_obs_il.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_il.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_a.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_a.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_lock2_i.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_lock2_i.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_qx_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_qx_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_obs_exp.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_obs_exp.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_lock_i.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_lock_i.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_mode.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_mode.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_update_i.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_update_i.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_f.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_f.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_cache_i.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_cache_i.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_ds_update2_i.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_ds_update2_i.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_7_gateway.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_7_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_zc.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_zc.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_obs_il.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_il.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_obs_all.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_all.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_obs_act.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_act.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_obs_exp.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_obs_exp.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_log.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_log.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_imin.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_imin.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_dnf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dnf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_dxm.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dxm.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_tdxf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_m.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_m.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_a_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_a_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_a.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_a.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_dxf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_dxf.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_dxf.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_mode.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_mode.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_f.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_f.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_duf.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_duf.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_ds_assert.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_ds_assert.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_5_gateway.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_5_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_zc.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_zc.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_obs_il.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_il.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_obs_all.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_all.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_obs_act.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_act.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_obs_exp.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_obs_exp.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_log.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_log.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_imin.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_imin.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_dnf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dnf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_dxm.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dxm.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_tdxf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_m.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_m.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_a_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_a_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_a.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_a.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_dxf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_dxf.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_dxf.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_mode.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_mode.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_f.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_f.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_duf.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_duf.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_ds_assert.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_ds_assert.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_4_gateway.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_4_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_zc.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_zc.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_obs_il.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_il.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_obs_all.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_all.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_obs_act.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_act.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_obs_exp.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_obs_exp.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_log.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_log.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_imin.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_imin.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_dnf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dnf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_dxm.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dxm.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_tdxf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_m.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_m.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_a_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_a_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_a.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_a.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_dxf_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dxf_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_dxf.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_dxf.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_mode.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_mode.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_f.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_f.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_duf.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_duf.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_ds_assert.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_ds_assert.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_3_gateway.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_3_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_obs_exp.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_exp.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_log.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_log.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_tduicr_p.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_tduicr_p.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_dxicr.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_dxicr.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_icr_il.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr_il.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_icr_im.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr_im.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_icr_id.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr_id.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_icr.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_icr.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_obs_all.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_all.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_obs_act.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_act.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_b.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_b.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_dxy.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_dxy.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_obs_il.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_obs_il.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_a.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_a.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_ds_assert.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_ds_assert.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_2_gateway.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_2_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds_duy.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_duy.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds_y.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_y.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds_obs_il.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_il.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds_obs_all.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_all.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds_obs_act.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_act.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds_obs_exp.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_obs_exp.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_ds_log.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_ds_log.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine_31c4daf8_8_gateway.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_31c4daf8_8_gateway.c
	$(CC) $(CFLAGS) -o $@ $<


rt_matrx.o : $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c
	$(CC) $(CFLAGS) -o $@ $<


rt_printf.o : $(MATLAB_ROOT)/rtw/c/src/rt_printf.c
	$(CC) $(CFLAGS) -o $@ $<


rt_backsubrr_dbl.o : $(START_DIR)/Wind_Turbine_ert_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


rt_forwardsubrr_dbl.o : $(START_DIR)/Wind_Turbine_ert_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


rt_lu_real.o : $(START_DIR)/Wind_Turbine_ert_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) -o $@ $<


rt_matrixlib_dbl.o : $(START_DIR)/Wind_Turbine_ert_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o $@ $<


Wind_Turbine.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


Wind_Turbine_data.o : $(START_DIR)/Wind_Turbine_ert_rtw/Wind_Turbine_data.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


ert_main.o : $(START_DIR)/Wind_Turbine_ert_rtw/ert_main.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetInf.o : $(START_DIR)/Wind_Turbine_ert_rtw/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetNaN.o : $(START_DIR)/Wind_Turbine_ert_rtw/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_look.o : $(START_DIR)/Wind_Turbine_ert_rtw/rt_look.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_look1d.o : $(START_DIR)/Wind_Turbine_ert_rtw/rt_look1d.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_nonfinite.o : $(START_DIR)/Wind_Turbine_ert_rtw/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sfun_psbdqc.o : $(MATLAB_ROOT)/toolbox/physmod/powersys/powersys/sfun_psbdqc.c
	$(CC) $(CFLAGS) -o $@ $<


#------------------------
# BUILDABLE LIBRARIES
#------------------------

./sm_ssci.a : $(LIBSM_SSCI_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_SSCI_OBJS)


./sm.a : $(LIBSM_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_OBJS)


./pm_math.a : $(LIBPM_MATH_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_MATH_OBJS)


./ssc_sli.a : $(LIBSSC_SLI_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_OBJS)


./ssc_core.a : $(LIBSSC_CORE_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_OBJS)


./ne.a : $(LIBNE_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBNE_OBJS)


./mc.a : $(LIBMC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_OBJS)


./ex.a : $(LIBEX_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_OBJS)


./pm.a : $(LIBPM_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


