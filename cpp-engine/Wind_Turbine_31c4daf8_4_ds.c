/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */
/* Wind_Turbine_31c4daf8_4_ds.c - body for module Wind_Turbine_31c4daf8_4_ds */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_zc.h"
#include "Wind_Turbine_31c4daf8_4_ds_obs_il.h"
#include "Wind_Turbine_31c4daf8_4_ds_obs_all.h"
#include "Wind_Turbine_31c4daf8_4_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_4_ds_obs_exp.h"
#include "Wind_Turbine_31c4daf8_4_ds_log.h"
#include "Wind_Turbine_31c4daf8_4_ds_imin.h"
#include "Wind_Turbine_31c4daf8_4_ds_dnf_p.h"
#include "Wind_Turbine_31c4daf8_4_ds_dxm.h"
#include "Wind_Turbine_31c4daf8_4_ds_tdxf_p.h"
#include "Wind_Turbine_31c4daf8_4_ds_m.h"
#include "Wind_Turbine_31c4daf8_4_ds_a_p.h"
#include "Wind_Turbine_31c4daf8_4_ds_a.h"
#include "Wind_Turbine_31c4daf8_4_ds_dxf_p.h"
#include "Wind_Turbine_31c4daf8_4_ds_dxf.h"
#include "Wind_Turbine_31c4daf8_4_ds_mode.h"
#include "Wind_Turbine_31c4daf8_4_ds_f.h"
#include "Wind_Turbine_31c4daf8_4_ds_duf.h"
#include "Wind_Turbine_31c4daf8_4_ds_assert.h"
#include "Wind_Turbine_31c4daf8_4_ds.h"
#include "ssc_ml_fun.h"
#include "Wind_Turbine_31c4daf8_4_ds_external_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_externals.h"

static int32_T ds_m_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dpm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vsf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_dpdxf(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cer(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_nldv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_sclv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_imax(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dimin(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dimax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp);
static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr);
static NeEquationData s_equation_data[25] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 2U, 0U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 2U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 2U, 3U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 5U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 2U, 6U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    2U, 8U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    2U, 10U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Ideal Translational Motion Sensor",
    2U, 12U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 2U, 14U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 16U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 17U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 18U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 19U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 5U, 20U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 25U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 26U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 27U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 28U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    5U, 29U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 34U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 35U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 36U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    37U, FALSE, 1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Hydraulic/Actuator_2", 4U, 38U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Translational Simscape Intf1/Ideal Translational Velocity Source",
    1U, 42U, TRUE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData *s_icr_data = NULL;
static NeVariableData s_variable_data[25] = { {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.pressure_chamber",
    0U, 0, "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Fluid pressure in the chamber",
  }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.pressure_chamber",
    0U, 0, "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Fluid pressure in the chamber",
  }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.position",
    0U, 0, "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Piston position", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.position",
    0U, 0, "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Piston position", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.x", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0, TRUE,
    FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Position", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i1.x",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "x", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i2.x",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "x", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor.x",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Ideal Translational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Position", }, {
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator.fluid_volume", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Volume of fluid", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_A.A.p", 0U, 1,
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_A.q", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Flow rate", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_B.A.p", 0U, 1,
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_B.q", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Flow rate", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.q", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Flow rate leaving the converter", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Damper.f", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Force", }, {
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator.flow_rate", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Accumulator flow rate", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.volume", 0U,
    0, "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Chamber volume", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.volume", 0U,
    0, "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Chamber volume", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.f", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Force", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A.flow_rate",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Volumetric flow rate", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B.flow_rate",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Volumetric flow rate", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i1.I",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "I", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i2.I",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "I", }, {
    "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor.F", 0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Sense Force/Ideal Force Sensor", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "F", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice.pressure_drop",
    0U, 0,
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure drop", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[196] = { {
    "Hydraulic.Actuator_2.Fixed_Orifice_A.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_A.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure differential", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_A.q",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 1U, "m^3/s", 1.0e-6,
    "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Flow rate", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_B.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_B.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure differential", }, {
    "Hydraulic.Actuator_2.Fixed_Orifice_B.q",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 1U, "m^3/s", 1.0e-6,
    "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Flow rate", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor/Ideal Hydraulic Flow Rate Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor/Ideal Hydraulic Flow Rate Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor.M",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor/Ideal Hydraulic Flow Rate Sensor",
    1U, 1U, "kg/s", 1.0e-6, "kg/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor.Q",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor/Ideal Hydraulic Flow Rate Sensor",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Q", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor.q",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate Sensor/Ideal Hydraulic Flow Rate Sensor",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Flow rate", }, {
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor_Q",
    "Wind_Turbine/Hydraulic/Actuator_2/Flow Rate\nSensor/PS-Simulink\nConverter",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Hydraulic_Flow_Rate_Sensor_Q", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.pressure_chamber",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Fluid pressure in the chamber", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.f",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "N", 1.0e-6,
    "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Force exerted by the fluid on the converter", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.p_in",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "p", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.position",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Piston position", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.q",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m^3/s",
    1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Flow rate leaving the converter", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.volume",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m^3",
    1.0e-6, "m^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Chamber volume", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.p_in",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "p", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.pressure_chamber",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Fluid pressure in the chamber", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.f",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "N", 1.0e-6,
    "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Force exerted by the fluid on the converter", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.p_in",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "p", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.position",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Piston position", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.q",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m^3/s",
    1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Flow rate leaving the converter", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.volume",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m^3",
    1.0e-6, "m^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Chamber volume", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.p_in",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "p", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.f",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "N", 1.0e-6,
    "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Force", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.p_in",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "p", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs.x",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Position", }, {
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.p_in",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U, "m", 1.0e-6,
    "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "p", }, {
    "Hydraulic.Actuator_2.Hydraulic_Fluid.G.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Fluid", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Hydraulic_Reference.P.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Reference", 1U, 1U, "Pa",
    1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.P.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.T.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T.flow_rate",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Volumetric flow rate", },
    {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T.pressure_drop",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure drop", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T.flow_rate",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Volumetric flow rate", },
    {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T.pressure_drop",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure drop", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A.flow_rate",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Volumetric flow rate", },
    {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A.pressure_drop",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure drop", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B.flow_rate",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Volumetric flow rate", },
    {
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B.pressure_drop",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure drop", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Port_A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Port_B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Port_P.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Port_S",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional", 1U, 1U, "1", 1.0e-6,
    "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Port_S", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Port_T.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.I",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i1.I",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i1.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i1.x",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i2.I",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i2.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.i2.x",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.sat_el.I",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.sat_el.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Ideal_Proportional_Port_S",
    "Wind_Turbine/Hydraulic/Actuator_2/Simulink-PS\nConverter", 1U, 1U, "1",
    1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Proportional_Port_S", }, {
    "Hydraulic.Actuator_2.Mechanical_Translational_Reference1.V.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Mechanical Translational Reference1", 1U,
    1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.PAL.v", "Wind_Turbine/Hydraulic/Actuator_2", 1U, 1U,
    "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Damper.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Damper.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Damper.f",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1U, 1U, "N",
    1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Force", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Damper.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Damper.power_dissipated",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Ideal Translational Motion Sensor",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor.P",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Ideal Translational Motion Sensor",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Ideal Translational Motion Sensor",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor.V",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Ideal Translational Motion Sensor",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor.x",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Ideal Translational Motion Sensor",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Position", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor_P",
    "Wind_Turbine/Hydraulic/Actuator_2/Position\nSensor/PS-Simulink\nConverter",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Translational_Motion_Sensor_P", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor_V",
    "Wind_Turbine/Hydraulic/Actuator_2/Position\nSensor/PS-Simulink\nConverter1",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Translational_Motion_Sensor_V", }, {
    "Hydraulic.Actuator_2.Position_Sensor.Mechanical_Translational_Reference2.V.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Mechanical Translational Reference2",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Position_Sensor.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor", 1U, 1U, "m/s", 1.0e-6,
    "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Pressure_Source.P.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Pressure Source", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Pressure_Source.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Pressure Source", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Pressure_Source.T.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Pressure Source", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Pressure_Source.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Pressure Source", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure differential", }, {
    "Hydraulic.Actuator_2.Pressure_Source.q",
    "Wind_Turbine/Hydraulic/Actuator_2/Pressure Source", 1U, 1U, "m^3/s", 1.0e-6,
    "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Flow rate", }, {
    "Hydraulic.Actuator_2.Sense_Force.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Sense Force", 1U, 1U, "m/s", 1.0e-6,
    "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor.C.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Sense Force/Ideal Force Sensor", 1U, 1U,
    "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor.F",
    "Wind_Turbine/Hydraulic/Actuator_2/Sense Force/Ideal Force Sensor", 1U, 1U,
    "N", 1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "F", }, {
    "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Sense Force/Ideal Force Sensor", 1U, 1U,
    "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor.f",
    "Wind_Turbine/Hydraulic/Actuator_2/Sense Force/Ideal Force Sensor", 1U, 1U,
    "N", 1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Force", }, {
    "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor_F",
    "Wind_Turbine/Hydraulic/Actuator_2/Sense\nForce/PS-Simulink\nConverter", 1U,
    1U, "N", 1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Force_Sensor_F", }, {
    "Hydraulic.Actuator_2.Sense_Force.R.v",
    "Wind_Turbine/Hydraulic/Actuator_2/Sense Force", 1U, 1U, "m/s", 1.0e-6,
    "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Velocity", }, {
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 1U, "Pa",
    1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator.flow_rate",
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 1U,
    "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Accumulator flow rate", }, {
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator.fluid_pressure",
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 1U, "Pa",
    1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure of liquid volume", }, {
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator.fluid_volume",
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 1U, "m^3",
    1.0e-6, "m^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Volume of fluid", }, {
    "Hydraulic.Actuator_2.Subsystem.H.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem", 1U, 1U, "Pa", 1.0e-6, "bar",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem.Hydraulic_Reference1.P.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem/Hydraulic Reference1", 1U, 1U,
    "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem.Ideal_Hydraulic_Pressure_Sensor.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem/Ideal Hydraulic Pressure Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem.Ideal_Hydraulic_Pressure_Sensor.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem/Ideal Hydraulic Pressure Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem.Ideal_Hydraulic_Pressure_Sensor.P",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem/Ideal Hydraulic Pressure Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "Hydraulic.Actuator_2.Subsystem.Ideal_Hydraulic_Pressure_Sensor_P",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem/PS-Simulink\nConverter1", 1U,
    1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Hydraulic_Pressure_Sensor_P", }, {
    "Hydraulic.Actuator_2.Subsystem1.H.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem1", 1U, 1U, "Pa", 1.0e-6, "bar",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem1.Hydraulic_Reference1.P.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem1/Hydraulic Reference1", 1U, 1U,
    "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem1.Ideal_Hydraulic_Pressure_Sensor.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem1/Ideal Hydraulic Pressure Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem1.Ideal_Hydraulic_Pressure_Sensor.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem1/Ideal Hydraulic Pressure Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Subsystem1.Ideal_Hydraulic_Pressure_Sensor.P",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem1/Ideal Hydraulic Pressure Sensor",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "Hydraulic.Actuator_2.Subsystem1.Ideal_Hydraulic_Pressure_Sensor_P",
    "Wind_Turbine/Hydraulic/Actuator_2/Subsystem1/PS-Simulink\nConverter1", 1U,
    1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Hydraulic_Pressure_Sensor_P", }, {
    "Hydraulic.Actuator_2.System_Pressure.O",
    "Wind_Turbine/Hydraulic/Actuator_2/System Pressure", 1U, 1U, "1", 1.0e-6,
    "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.PS_Gain.I",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open/PS Gain",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.PS_Gain.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open/PS Gain",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.PS_Subtract.I1",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open/PS Subtract",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.PS_Subtract.I2",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open/PS Subtract",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.PS_Subtract.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open/PS Subtract",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.VA",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "VA", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open.Voltage_Open.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open/Voltage_Open",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open_S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve\nAccumulator/Simulink-PS\nConverter",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Logic_For_Nominally_Open_S", },
    { "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice.flow_rate",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Volumetric flow rate", },
    {
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice.pressure_drop",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure drop", }, {
    "Hydraulic.Actuator_2.Valve_Return.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Return.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return", 1U, 1U, "Pa", 1.0e-6,
    "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.PS_Gain.I",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open/PS Gain",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.PS_Gain.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open/PS Gain",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.PS_Subtract.I1",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open/PS Subtract",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.PS_Subtract.I2",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open/PS Subtract",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.PS_Subtract.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open/PS Subtract",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.VA",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "VA", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open.Voltage_Open.O",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open/Voltage_Open",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open_S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve\nReturn/Simulink-PS\nConverter", 1U,
    1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Logic_For_Nominally_Open_S", },
    { "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice.A.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice.B.p",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure", }, {
    "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice.S",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "m", 1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice.flow_rate",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "m^3/s", 1.0e-6, "cm^3/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Volumetric flow rate", },
    {
    "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice.pressure_drop",
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Pressure drop", }, {
    "Hydraulic.PAL2.v", "Wind_Turbine/Hydraulic", 1U, 1U, "m/s", 1.0e-6, "m/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Velocity", }, {
    "Mechanical_Translational_Reference1.V.v",
    "Wind_Turbine/Mechanical Translational Reference1", 1U, 1U, "m/s", 1.0e-6,
    "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, { "Prismatic_Joint1_fi",
    "Wind_Turbine/Prismatic  Joint1", 1U, 1U, "N", 1.0e-6, "N",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Prismatic_Joint1_fi", }, {
    "Prismatic_Joint1_v", "Wind_Turbine/Prismatic  Joint1", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Prismatic_Joint1_v", }, {
    "Translational_Simscape_Intf1.C.v",
    "Wind_Turbine/Translational Simscape Intf1", 1U, 1U, "m/s", 1.0e-6, "m/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Velocity", }, {
    "Translational_Simscape_Intf1.F",
    "Wind_Turbine/Translational Simscape Intf1", 1U, 1U, "N", 1.0e-6, "N",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "F", }, {
    "Translational_Simscape_Intf1.Ideal_Force_Sensor.C.v",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Force Sensor", 1U, 1U,
    "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Translational_Simscape_Intf1.Ideal_Force_Sensor.F",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Force Sensor", 1U, 1U, "N",
    1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "F", }, {
    "Translational_Simscape_Intf1.Ideal_Force_Sensor.R.v",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Force Sensor", 1U, 1U,
    "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Translational_Simscape_Intf1.Ideal_Force_Sensor.f",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Force Sensor", 1U, 1U, "N",
    1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Force", }, {
    "Translational_Simscape_Intf1.Ideal_Translational_Velocity_Source.C.v",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Translational Velocity Source",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Translational_Simscape_Intf1.Ideal_Translational_Velocity_Source.R.v",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Translational Velocity Source",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Translational_Simscape_Intf1.Ideal_Translational_Velocity_Source.S",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Translational Velocity Source",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Translational_Simscape_Intf1.Ideal_Translational_Velocity_Source.f",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Translational Velocity Source",
    1U, 1U, "N", 1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Force", }, {
    "Translational_Simscape_Intf1.Ideal_Translational_Velocity_Source.v",
    "Wind_Turbine/Translational Simscape Intf1/Ideal Translational Velocity Source",
    1U, 1U, "m/s", 1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Velocity", }, {
    "Translational_Simscape_Intf1.R.v",
    "Wind_Turbine/Translational Simscape Intf1", 1U, 1U, "m/s", 1.0e-6, "m/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Velocity", }, {
    "Translational_Simscape_Intf1.V",
    "Wind_Turbine/Translational Simscape Intf1", 1U, 1U, "m/s", 1.0e-6, "m/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[29] = { {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 0U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 1U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 2U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 3U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 4U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    NE_ZC_TYPE_TRUE, }, { "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder",
    1U, 5U, "Hydraulic.Actuator_2.Hydraulic_Cylinder.hs",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 6U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 7U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 8U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 9U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 10U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 11U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 12U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 13U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 14U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 15U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 16U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 17U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 18U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 19U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 20U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    21U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    22U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    23U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 24U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.sat_el",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    NE_ZC_TYPE_TRUE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Proportional and Servo-Valve Actuator",
    1U, 25U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Proportional_and_Servo_Valve_Actuator.sat_el",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    NE_ZC_TYPE_TRUE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 26U,
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 27U,
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 28U,
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[29] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    91U, 16U, 91U, 40U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    130U, 18U, 130U, 32U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    91U, 16U, 91U, 40U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    130U, 18U, 130U, 32U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    32U, 8U, 32U, 24U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    34U, 12U, 34U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[108] = { {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 3U, 0U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/cylinder_da.sscp",
    FALSE, "Fluid pressure in the chamber must be greater than -1 atm.",
    "physmod:simscape:compiler:patterns:checks:GreaterThan", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 3U, 3U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/cylinder_da.sscp",
    FALSE, "Fluid pressure in the chamber must be greater than -1 atm.",
    "physmod:simscape:compiler:patterns:checks:GreaterThan", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 6U,
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    FALSE, "Fluid pressure fell below absolute zero", "", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", 1U, 7U,
    "Hydraulic.Actuator_2.Spring_Loaded_Accumulator",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    TRUE, "Fluid pressure fell below absolute zero", "", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 8U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 9U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 10U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 11U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 12U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 13U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 14U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 15U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 16U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 17U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 18U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 19U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 20U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_A.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 21U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 22U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 23U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 24U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 25U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 26U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 27U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 28U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 29U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.drho_over_rho0dp",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 30U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 31U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 32U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Hydraulic Cylinder", 1U, 33U,
    "Hydraulic.Actuator_2.Hydraulic_Cylinder.conv_B.chosen_converter.rho_over_rho0",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1U, 34U,
    "Hydraulic.Actuator_2.Position_Sensor.Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+translational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Position Sensor/Damper", 1U, 35U,
    "Hydraulic.Actuator_2.Position_Sensor.Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+translational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 36U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 37U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 38U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 39U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 40U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 41U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 42U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 43U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 44U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 45U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 46U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 47U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 48U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 49U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 50U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 51U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    52U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    53U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    54U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    55U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 56U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 57U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 58U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 59U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 60U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 61U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 62U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 63U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 64U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 65U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 66U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 67U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 68U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 69U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 70U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 71U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 72U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 73U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 74U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 75U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 76U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_A_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 77U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 78U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 79U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 80U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 81U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 82U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 83U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_B_T",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 84U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 85U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 86U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 87U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 88U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 89U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 90U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 91U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 92U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 93U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 94U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 95U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 96U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Ideal Proportional/Parameterized Orifices",
    1U, 97U,
    "Hydraulic.Actuator_2.Ideal_Proportional.Parameterized_Orifices.orifice_P_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 98U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 99U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 100U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 101U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 102U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 103U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Accumulator/2-Way Directional Valve",
    1U, 104U,
    "Hydraulic.Actuator_2.Valve_Accumulator.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    105U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    106U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    107U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    108U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    109U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    110U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Valve Return/2-Way Directional Valve", 1U,
    111U, "Hydraulic.Actuator_2.Valve_Return.x2_Way_Directional_Valve.orifice",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", } };

static NeRange s_assert_range[112] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    91U, 9U, 91U, 15U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter.ssc",
    76U, 28U, 78U, 72U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/cylinder_da.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    91U, 9U, 91U, 15U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter.ssc",
    76U, 28U, 78U, 72U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/cylinder_da.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 107U, 106U, 112U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 115U, 106U, 123U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 101U, 106U, 112U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 194U, 106U, 199U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 202U, 106U, 208U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 188U, 106U, 199U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 244U, 106U, 245U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 167U, 106U, 240U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 165U, 106U, 245U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 92U, 105U, 97U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 100U, 105U, 106U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 86U, 105U, 97U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 65U, 105U, 138U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 107U, 106U, 112U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 115U, 106U, 123U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 101U, 106U, 112U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 194U, 106U, 199U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 202U, 106U, 208U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 188U, 106U, 199U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 244U, 106U, 245U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 167U, 106U, 240U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    106U, 165U, 106U, 245U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 92U, 105U, 97U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 100U, 105U, 106U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 86U, 105U, 97U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    105U, 65U, 105U, 138U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+translational/damper.ssc",
    16U, 28U, 16U, 29U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+translational/damper.ssc",
    16U, 26U, 16U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 50U, 48U, 51U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 48U, 48U, 49U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 63U, 48U, 66U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 48U, 48U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 47U, 48U, 66U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 50U, 48U, 51U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 48U, 48U, 49U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 63U, 48U, 66U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 48U, 48U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 47U, 48U, 66U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_param_assert_data[10] = { {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 0U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "Orifice area must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 1U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "Orifice area must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 2U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 3U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 4U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 5U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 6U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", 1U, 7U,
    "Hydraulic.Actuator_2.Fixed_Orifice_A",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 8U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", 1U, 9U,
    "Hydraulic.Actuator_2.Fixed_Orifice_B",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", } };

static NeRange s_param_assert_range[10] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    30U, 5U, 30U, 11U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    30U, 5U, 30U, 11U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    45U, 66U, 45U, 70U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    45U, 71U, 45U, 72U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    45U, 66U, 45U, 70U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    45U, 71U, 45U, 72U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 59U, 48U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 54U, 48U, 58U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 59U, 48U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 54U, 48U, 58U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[43] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    114U, 12U, 114U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    135U, 5U, 135U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    120U, 9U, 120U, 41U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    114U, 12U, 114U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    135U, 5U, 135U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    120U, 9U, 120U, 41U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 5U, 28U, 10U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 7U, 28U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 5U, 28U, 10U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 7U, 28U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/velocity.ssc",
    34U, 5U, 34U, 10U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/velocity.ssc",
    34U, 7U, 34U, 15U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 9U, 48U, 66U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_area_orifice.ssc",
    48U, 9U, 48U, 66U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    130U, 5U, 130U, 57U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    130U, 5U, 130U, 57U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+cylinders/translational_hardstop.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    32U, 8U, 32U, 24U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    33U, 9U, 33U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    34U, 12U, 34U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    35U, 9U, 35U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+nonlinear/saturation.ssc",
    37U, 9U, 37U, 15U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+valves/+valve_actuators/act_prop_valve.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+accumulators/accumulator_spr.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sh/sh/+sh/+orifices/orifice_variable.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/translational_converter_compressible.ssc",
    74U, 5U, 74U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+translational/branch.ssc",
    19U, 5U, 19U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/force.ssc",
    31U, 5U, 31U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/velocity.ssc",
    36U, 5U, 36U, 19U, NE_RANGE_TYPE_NORMAL, } };

static NeRange *s_cer_range = NULL;
static NeRange *s_icr_range = NULL;
static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData s_real_parameter_data[3] = { { "RTP_8BF50697_area",
    "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice A", "", 0U, 1U, TRUE, }, {
    "RTP_1B4A1B06_area", "Wind_Turbine/Hydraulic/Actuator_2/Fixed Orifice B", "",
    0U, 1U, TRUE, }, { "RTP_F25ABA1A_fluid_volume",
    "Wind_Turbine/Hydraulic/Actuator_2/Spring-Loaded Accumulator", "", 0U, 1U,
    TRUE, } };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 25;
  out->mM_P.mNumRow = 25;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 9;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 9;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 25;
  out->mDXM_P.mNumRow = 9;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 4;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 9;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 4;
  out->mDUM_P.mNumRow = 9;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 9;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM_P.mNumCol = 3;
  out->mDPM_P.mNumRow = 9;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  out->mDPM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM.mN = 0;
  out->mDPM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 25;
  out->mA_P.mNumRow = 25;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    34);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 34;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 34);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 4;
  out->mB_P.mNumRow = 25;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 1;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 25;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 25;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 25;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 25;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 25;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 25;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 25;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 25;
  out->mDXF_P.mNumRow = 25;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    27);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 27;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 27);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 4;
  out->mDUF_P.mNumRow = 25;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 3;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 25;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 25;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF_P.mNumCol = 3;
  out->mDPDXF_P.mNumRow = 27;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 4);
  out->mDPDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF.mN = 0;
  out->mDPDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 25;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 4;
  out->mTDUF_P.mNumRow = 25;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 25;
  out->mTDXF_P.mNumRow = 25;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    62);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 36;
  out->mDNF_P.mNumRow = 25;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    37);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 1;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 25;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCER.mN = 0;
  out->mCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER.mN = 0;
  out->mDXCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER_P.mNumCol = 25;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 26);
  out->mDXCER_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 25;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 0;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 0;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 0;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 0;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 25;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 26);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 0;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 4;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 25;
  out->mICRM_P.mNumRow = 0;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 25;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 26);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 4;
  out->mMDUY_P.mNumRow = 7;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 25;
  out->mMDXY_P.mNumRow = 7;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 4;
  out->mTDUY_P.mNumRow = 7;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 25;
  out->mTDXY_P.mNumRow = 7;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 7;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 7);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 25;
  out->mDXY_P.mNumRow = 7;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 9;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 4;
  out->mDUY_P.mNumRow = 7;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 7;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 23;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 29;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 147;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 147);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 108;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    108);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 10;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 25;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 26);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 4;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 195;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    195);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 195;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    195);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 195;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    195);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 195;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 195);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 4;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 25;
  out->mQX_P.mNumRow = 25;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 4;
  out->mQU_P.mNumRow = 25;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 25;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 25;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 25;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 25;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 25;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 25;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 25;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 25;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 25;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 25;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMIN.mN = 0;
  out->mDIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMAX.mN = 0;
  out->mDIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T kp)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  (void) kp;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp)
{
  (void)ds;
  (void)kp;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr)
{
  (void)ds;
  memcpy(outl->mX, inl->mX, sizeof(int32_T)*inl->mN);
  memcpy(outi->mX, ini->mX, sizeof(int32_T)*ini->mN);
  memcpy(outj->mX, inj->mX, sizeof(int32_T)*inj->mN);
  memcpy(outr->mX, inr->mX, sizeof(real_T)*inr->mN);
}

NeDynamicSystem *Wind_Turbine_31c4daf8_4_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[4];
  static NeDsIoInfo output_info[7];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 25;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 9;
  ds->mNumEquations = 25;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 23;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 196;
  ds->mNumObservableElements = 195;
  ds->mNumZcs = 29;
  ds->mNumAsserts = 108;
  ds->mNumAssertRanges = 112;
  ds->mNumParamAsserts = 10;
  ds->mNumParamAssertRanges = 10;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 29;
  ds->mNumEquationRanges = 43;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 0;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 3;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 4;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;
  ds->mIsScalable = FALSE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 4;
  input_info[0].mIdentifier = "Hydraulic.Actuator_2.Ideal_Proportional_Port_S";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName = "Hydraulic.Actuator_2.Ideal_Proportional_Port_S";
  input_info[0].mUnit = "1";
  input_info[1].mIdentifier =
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open_S";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName =
    "Hydraulic.Actuator_2.Valve_Accumulator.Logic_For_Nominally_Open_S";
  input_info[1].mUnit = "1";
  input_info[2].mIdentifier =
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open_S";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName =
    "Hydraulic.Actuator_2.Valve_Return.Logic_For_Nominally_Open_S";
  input_info[2].mUnit = "1";
  input_info[3].mIdentifier = "Prismatic_Joint1_v";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName = "Prismatic_Joint1_v";
  input_info[3].mUnit = "m/s";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 7;
  output_info[0].mIdentifier =
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor_Q";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName =
    "Hydraulic.Actuator_2.Flow_Rate_Sensor.Ideal_Hydraulic_Flow_Rate_Sensor_Q";
  output_info[0].mUnit = "m^3/s";
  output_info[1].mIdentifier =
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor_P";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName =
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor_P";
  output_info[1].mUnit = "m";
  output_info[2].mIdentifier =
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor_V";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName =
    "Hydraulic.Actuator_2.Position_Sensor.Ideal_Translational_Motion_Sensor_V";
  output_info[2].mUnit = "m/s";
  output_info[3].mIdentifier =
    "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor_F";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName = "Hydraulic.Actuator_2.Sense_Force.Ideal_Force_Sensor_F";
  output_info[3].mUnit = "N";
  output_info[4].mIdentifier =
    "Hydraulic.Actuator_2.Subsystem.Ideal_Hydraulic_Pressure_Sensor_P";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName =
    "Hydraulic.Actuator_2.Subsystem.Ideal_Hydraulic_Pressure_Sensor_P";
  output_info[4].mUnit = "Pa";
  output_info[5].mIdentifier =
    "Hydraulic.Actuator_2.Subsystem1.Ideal_Hydraulic_Pressure_Sensor_P";
  output_info[5].mM = 1;
  output_info[5].mN = 1;
  output_info[5].mName =
    "Hydraulic.Actuator_2.Subsystem1.Ideal_Hydraulic_Pressure_Sensor_P";
  output_info[5].mUnit = "Pa";
  output_info[6].mIdentifier = "Prismatic_Joint1_fi";
  output_info[6].mM = 1;
  output_info[6].mN = 1;
  output_info[6].mName = "Prismatic_Joint1_fi";
  output_info[6].mUnit = "N";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_M_P] = ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = Wind_Turbine_31c4daf8_4_ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = Wind_Turbine_31c4daf8_4_ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_DPM_P] = ds_dpm_p;
  ds->mMakeOutput[NE_DS_METHOD_DPM_P] = ds_output_dpm_p;
  ds->mMethods[NE_DS_METHOD_DPM] = ds_dpm;
  ds->mMakeOutput[NE_DS_METHOD_DPM] = ds_output_dpm;
  ds->mMethods[NE_DS_METHOD_A_P] = Wind_Turbine_31c4daf8_4_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = Wind_Turbine_31c4daf8_4_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = Wind_Turbine_31c4daf8_4_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_VSF] = ds_vsf;
  ds->mMakeOutput[NE_DS_METHOD_VSF] = ds_output_vsf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = Wind_Turbine_31c4daf8_4_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = Wind_Turbine_31c4daf8_4_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = Wind_Turbine_31c4daf8_4_ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DPDXF_P] = ds_dpdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF_P] = ds_output_dpdxf_p;
  ds->mMethods[NE_DS_METHOD_DPDXF] = ds_dpdxf;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF] = ds_output_dpdxf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = Wind_Turbine_31c4daf8_4_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = Wind_Turbine_31c4daf8_4_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_CER] = ds_cer;
  ds->mMakeOutput[NE_DS_METHOD_CER] = ds_output_cer;
  ds->mMethods[NE_DS_METHOD_DXCER] = ds_dxcer;
  ds->mMakeOutput[NE_DS_METHOD_DXCER] = ds_output_dxcer;
  ds->mMethods[NE_DS_METHOD_DXCER_P] = ds_dxcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DXCER_P] = ds_output_dxcer_p;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = Wind_Turbine_31c4daf8_4_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = Wind_Turbine_31c4daf8_4_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = Wind_Turbine_31c4daf8_4_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = Wind_Turbine_31c4daf8_4_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = Wind_Turbine_31c4daf8_4_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = Wind_Turbine_31c4daf8_4_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = Wind_Turbine_31c4daf8_4_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = Wind_Turbine_31c4daf8_4_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_NLDV] = ds_nldv;
  ds->mMakeOutput[NE_DS_METHOD_NLDV] = ds_output_nldv;
  ds->mMethods[NE_DS_METHOD_SCLV] = ds_sclv;
  ds->mMakeOutput[NE_DS_METHOD_SCLV] = ds_output_sclv;
  ds->mMethods[NE_DS_METHOD_IMIN] = Wind_Turbine_31c4daf8_4_ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;
  ds->mMethods[NE_DS_METHOD_DIMIN] = ds_dimin;
  ds->mMakeOutput[NE_DS_METHOD_DIMIN] = ds_output_dimin;
  ds->mMethods[NE_DS_METHOD_DIMAX] = ds_dimax;
  ds->mMakeOutput[NE_DS_METHOD_DIMAX] = ds_output_dimax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* cer data */
  ds->mCERData = s_cer_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* cer ranges */
  ds->mCERRanges = s_cer_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  ds->mNumLargeArray = 0;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  real_T DP_R_idx_0;
  real_T DP_R_idx_1;
  DP_R_idx_0 = t1->mDP_R.mX[0];
  DP_R_idx_1 = t1->mDP_R.mX[1];
  out = t2->mPASSERT;
  out.mX[0] = (int32_T)(DP_R_idx_0 > 0.0);
  out.mX[1] = (int32_T)(DP_R_idx_1 > 0.0);
  out.mX[2] = (int32_T)(DP_R_idx_0 != 0.0);
  out.mX[3] = 1;
  out.mX[4] = (int32_T)(DP_R_idx_1 != 0.0);
  out.mX[5] = 1;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cer (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxcer (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxcer_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXCER_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXDELT_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUDELT_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mIr[0] = 18;
  out.mIr[1] = 21;
  out.mIr[2] = 22;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mB;
  out.mX[0] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 1;
  out.mIr[0] = 24;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mIr[0] = 18;
  out.mIr[1] = 21;
  out.mIr[2] = 22;
  out.mIr[3] = 24;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDWF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDPDXF_P;
  out.mNumCol = 3ULL;
  out.mNumRow = 27ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vmf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMF;
  out.mX[0] = true;
  out.mX[1] = false;
  out.mX[2] = true;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = false;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDNF;
  out.mX[0] = -0.0009999999999999998;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mDNF_V_X;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLF0;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVPF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vsf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVSF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T P_R_idx_2;
  P_R_idx_2 = t1->mP_R.mX[2];
  out = t2->mIC;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.445;
  out.mX[3] = 1.0516999999999999;
  out.mX[4] = -0.445;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = P_R_idx_2;
  out.mX[9] = 0.0;
  out.mX[10] = 1000.0;
  out.mX[11] = 0.0;
  out.mX[12] = 1000.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 5000.0;
  out.mX[16] = 0.0001;
  out.mX[17] = 0.0001;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXICR_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICR_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mICRM_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXICRM_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICRM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_imax (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mIMAX;
  out.mX[0] = pmf_get_inf();
  out.mX[1] = pmf_get_inf();
  out.mX[2] = pmf_get_inf();
  out.mX[3] = pmf_get_inf();
  out.mX[4] = pmf_get_inf();
  out.mX[5] = pmf_get_inf();
  out.mX[6] = pmf_get_inf();
  out.mX[7] = pmf_get_inf();
  out.mX[8] = pmf_get_inf();
  out.mX[9] = pmf_get_inf();
  out.mX[10] = pmf_get_inf();
  out.mX[11] = pmf_get_inf();
  out.mX[12] = pmf_get_inf();
  out.mX[13] = pmf_get_inf();
  out.mX[14] = pmf_get_inf();
  out.mX[15] = pmf_get_inf();
  out.mX[16] = pmf_get_inf();
  out.mX[17] = pmf_get_inf();
  out.mX[18] = pmf_get_inf();
  out.mX[19] = pmf_get_inf();
  out.mX[20] = pmf_get_inf();
  out.mX[21] = pmf_get_inf();
  out.mX[22] = pmf_get_inf();
  out.mX[23] = pmf_get_inf();
  out.mX[24] = pmf_get_inf();
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dimin (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dimax (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_m_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 8;
  out.mJc[9] = 9;
  out.mJc[10] = 9;
  out.mJc[11] = 9;
  out.mJc[12] = 9;
  out.mJc[13] = 9;
  out.mJc[14] = 9;
  out.mJc[15] = 9;
  out.mJc[16] = 9;
  out.mJc[17] = 9;
  out.mJc[18] = 9;
  out.mJc[19] = 9;
  out.mJc[20] = 9;
  out.mJc[21] = 9;
  out.mJc[22] = 9;
  out.mJc[23] = 9;
  out.mJc[24] = 9;
  out.mJc[25] = 9;
  out.mIr[0] = 0;
  out.mIr[1] = 2;
  out.mIr[2] = 1;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 6;
  out.mIr[7] = 7;
  out.mIr[8] = 8;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXM_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 2;
  out.mJc[9] = 2;
  out.mJc[10] = 2;
  out.mJc[11] = 2;
  out.mJc[12] = 2;
  out.mJc[13] = 2;
  out.mJc[14] = 2;
  out.mJc[15] = 2;
  out.mJc[16] = 2;
  out.mJc[17] = 3;
  out.mJc[18] = 4;
  out.mJc[19] = 4;
  out.mJc[20] = 4;
  out.mJc[21] = 4;
  out.mJc[22] = 4;
  out.mJc[23] = 4;
  out.mJc[24] = 4;
  out.mJc[25] = 4;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 0;
  out.mIr[3] = 1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUM_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDPM_P;
  out.mNumCol = 3ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMM;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T P_R_idx_0;
  real_T P_R_idx_1;
  P_R_idx_0 = t3->mP_R.mX[0];
  P_R_idx_1 = t3->mP_R.mX[1];
  out = t4->mDP_R;
  out.mX[0] = P_R_idx_0;
  out.mX[1] = P_R_idx_1;
  out.mX[2] = 1.1280975852233448E-5 / (P_R_idx_0 == 0.0 ? 1.0E-16 : P_R_idx_0) /
    2.0 * 1.0E-5;
  out.mX[3] = 1.1280975852233448E-5 / (P_R_idx_1 == 0.0 ? 1.0E-16 : P_R_idx_1) /
    2.0 * 1.0E-5;
  (void)sys;
  (void)t4;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 25ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mVAR_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  out.mX[23] = 1.0E-9;
  out.mX[24] = 1.0E-9;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  out.mX[23] = 1.0E-9;
  out.mX[24] = 1.0E-9;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_nldv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mNLDV;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sclv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSCLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *sys, const NeDynamicSystemInput *t3,
                     NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_23;
  real_T X_idx_7;
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_7 = t3->mX.mX[7];
  X_idx_12 = t3->mX.mX[12];
  X_idx_13 = t3->mX.mX[13];
  X_idx_14 = t3->mX.mX[14];
  X_idx_23 = t3->mX.mX[23];
  out = t4->mY;
  out.mX[0] = (X_idx_12 * 0.00096187319999999988 + X_idx_13 *
               -0.00096187319999999988) * 0.0010396380728769656;
  out.mX[1] = X_idx_7;
  out.mX[2] = X_idx_14 * -0.002;
  out.mX[3] = X_idx_23;
  out.mX[4] = X_idx_0 * 99999.999999999985;
  out.mX[5] = X_idx_1 * 99999.999999999985;
  out.mX[6] = X_idx_14 + X_idx_23;
  (void)sys;
  (void)t4;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = 99999.999999999985;
  out.mX[1] = 99999.999999999985;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0E-6;
  out.mX[4] = -1.0E-6;
  out.mX[5] = -0.002;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
  out.mX[8] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 3;
  out.mJc[9] = 3;
  out.mJc[10] = 3;
  out.mJc[11] = 3;
  out.mJc[12] = 3;
  out.mJc[13] = 4;
  out.mJc[14] = 5;
  out.mJc[15] = 7;
  out.mJc[16] = 7;
  out.mJc[17] = 7;
  out.mJc[18] = 7;
  out.mJc[19] = 7;
  out.mJc[20] = 7;
  out.mJc[21] = 7;
  out.mJc[22] = 7;
  out.mJc[23] = 7;
  out.mJc[24] = 9;
  out.mJc[25] = 9;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 1;
  out.mIr[3] = 0;
  out.mIr[4] = 0;
  out.mIr[5] = 2;
  out.mIr[6] = 6;
  out.mIr[7] = 3;
  out.mIr[8] = 6;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDXY_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tdxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXY_P;
  out.mNumCol = 25ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 3;
  out.mJc[9] = 3;
  out.mJc[10] = 3;
  out.mJc[11] = 3;
  out.mJc[12] = 3;
  out.mJc[13] = 4;
  out.mJc[14] = 5;
  out.mJc[15] = 7;
  out.mJc[16] = 7;
  out.mJc[17] = 7;
  out.mJc[18] = 7;
  out.mJc[19] = 7;
  out.mJc[20] = 7;
  out.mJc[21] = 7;
  out.mJc[22] = 7;
  out.mJc[23] = 7;
  out.mJc[24] = 9;
  out.mJc[25] = 9;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 1;
  out.mIr[3] = 0;
  out.mIr[4] = 0;
  out.mIr[5] = 2;
  out.mIr[6] = 6;
  out.mIr[7] = 3;
  out.mIr[8] = 6;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
