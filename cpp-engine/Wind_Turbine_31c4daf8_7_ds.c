/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */
/* Wind_Turbine_31c4daf8_7_ds.c - body for module Wind_Turbine_31c4daf8_7_ds */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_7_ds_zc.h"
#include "Wind_Turbine_31c4daf8_7_ds_obs_all.h"
#include "Wind_Turbine_31c4daf8_7_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_7_ds_log.h"
#include "Wind_Turbine_31c4daf8_7_ds_tdxf_p.h"
#include "Wind_Turbine_31c4daf8_7_ds_a_p.h"
#include "Wind_Turbine_31c4daf8_7_ds_obs_il.h"
#include "Wind_Turbine_31c4daf8_7_ds_a.h"
#include "Wind_Turbine_31c4daf8_7_ds_lock2_i.h"
#include "Wind_Turbine_31c4daf8_7_ds_qx_p.h"
#include "Wind_Turbine_31c4daf8_7_ds_obs_exp.h"
#include "Wind_Turbine_31c4daf8_7_ds_lock_i.h"
#include "Wind_Turbine_31c4daf8_7_ds_mode.h"
#include "Wind_Turbine_31c4daf8_7_ds_update_i.h"
#include "Wind_Turbine_31c4daf8_7_ds_f.h"
#include "Wind_Turbine_31c4daf8_7_ds_cache_i.h"
#include "Wind_Turbine_31c4daf8_7_ds_update2_i.h"
#include "Wind_Turbine_31c4daf8_7_ds.h"
#include "ssc_ml_fun.h"
#include "Wind_Turbine_31c4daf8_7_ds_external_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_7_ds_externals.h"

static int32_T ds_m_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
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
static int32_T ds_dxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
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
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
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
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_assert(const NeDynamicSystem *ds, const NeDynamicSystemInput
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
static int32_T ds_imin(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
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
static NeEquationData s_equation_data[21] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Brakes/Inertia", 2U, 0U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Brakes/Speed Sensor/Ideal Rotational Motion Sensor", 2U, 2U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Inertia Carrier Shaft", 2U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Inertia First Step Shaft", 2U, 6U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Inertia Sun Shaft", 2U, 8U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 2U, 10U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Brakes/Disk Friction Clutch", 5U, 12U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Brakes/Disk Friction Clutch",
    5U, 17U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 22U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Brakes/Disk Friction Clutch",
    1U, 23U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 24U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Brakes/Rotational Damper", 1U,
    25U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Helical Gear  First Step", 1U, 26U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Helical Gear  Second Step", 1U,
    27U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Helical Gear  Second Step", 1U, 28U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Inertia First Step Shaft", 1U,
    29U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Planetary Gear", 1U, 30U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Wind_Turbine/Planetary Gear", 1U, 31U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Rotational Simscape Intf/Ideal Angular Velocity Source", 1U,
    32U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 33U, TRUE,
    1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME, "", 5U, 34U, TRUE, 1.0,
    "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[4] = { { "", 0U, 0,
    "Wind_Turbine/Helical Gear  First Step", 1U, 0U, }, { "", 0U, 0,
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, }, { "", 0U, 0,
    "Wind_Turbine/Planetary Gear", 1U, 2U, }, { "", 0U, 0,
    "Wind_Turbine/Planetary Gear", 1U, 3U, } };

static NeVariableData s_variable_data[21] = { { "Brakes.Inertia.w", 0U, 0,
    "Wind_Turbine/Brakes/Inertia", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Rotational velocity", }, { "Inertia_Sun_Shaft.w",
    0U, 0, "Wind_Turbine/Inertia Sun Shaft", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Rotational velocity", }, {
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "Wind_Turbine/Brakes/Speed Sensor/Ideal Rotational Motion Sensor", 1.0, "1",
    0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Inertia_Carrier_Shaft.w", 0U, 0, "Wind_Turbine/Inertia Carrier Shaft", 1.0,
    "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Rotational velocity",
  }, { "Inertia_First_Step_Shaft.w", 0U, 0,
    "Wind_Turbine/Inertia First Step Shaft", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Rotational velocity", }, {
    "Speed_Sensor.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.M", 0U, 0,
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "M", }, { "Brakes.Inertia.t", 0U, 0,
    "Wind_Turbine/Brakes/Inertia", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Torque", }, { "Brakes.Rotational_Damper.t", 0U, 0,
    "Wind_Turbine/Brakes/Rotational Damper", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Torque", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.tK", 0U, 0,
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "tK", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.tM", 0U, 0,
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "t-", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.tP", 0U, 0,
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "t+", }, { "Helical_Gear_First_Step.damperB.w", 0U, 0,
    "Wind_Turbine/Helical Gear  First Step", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Rotational velocity", }, { "Inertia_Carrier_Shaft.t", 0U,
    0, "Wind_Turbine/Inertia Carrier Shaft", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Torque", }, { "Planetary_Gear.gear.sun_planet.t_C", 0U,
    0, "Wind_Turbine/Planetary Gear", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Carrier torque", }, {
    "Helical_Gear_Second_Step.damperB.w", 0U, 0,
    "Wind_Turbine/Helical Gear  Second Step", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.damperF.w", 0U, 0,
    "Wind_Turbine/Helical Gear  Second Step", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Rotational velocity", }, {
    "Inertia_First_Step_Shaft.t", 0U, 0, "Wind_Turbine/Inertia First Step Shaft",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Inertia_Sun_Shaft.t", 0U, 0, "Wind_Turbine/Inertia Sun Shaft", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Planetary_Gear.gear.ring_planet.P.w", 0U, 1, "Wind_Turbine/Planetary Gear",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, { "Speed_Sensor.Ideal_Rotational_Motion_Sensor.W",
    0U, 0, "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "W", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[179] = { {
    "Brakes.Disk_Friction_Clutch.B.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.F.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.H.T",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "K", 1.0e-6, "K",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Brakes.Disk_Friction_Clutch.P", "Wind_Turbine/Brakes/Disk Friction Clutch",
    1U, 1U, "Pa", 1.0e-6, "bar", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "P", }, {
    "Brakes.Disk_Friction_Clutch.damper.C.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.damper.R.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.damper.t",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Brakes.Disk_Friction_Clutch.damper.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.damper.power_dissipated",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "kg*m^2/s^3", 1.0e-6,
    "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Brakes.Disk_Friction_Clutch.fault_trigger",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.B.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.F.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.H.T",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "K", 1.0e-6, "K",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.M",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "M", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.S",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.B.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.F.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.M",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "M", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.S",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "S", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.fault_locked",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "fault_locked", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.t",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Torque", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.tK",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "tK", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.tM",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t-", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.tP",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "t+", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.w",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.internal_mode_var_m__",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "internal_mode_var_m__", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.fault_locked",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Cannot unlock", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.tK",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "tK", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.power_dissipated",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "J/s", 1.0e-6, "J/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Heat generated from friction", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.tM",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t-", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.tP",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "t+", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.temperature",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "K", 1.0e-6, "K",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.torque",
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Brakes.Inertia.I.w",
    "Wind_Turbine/Brakes/Inertia", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Inertia.J.w", "Wind_Turbine/Brakes/Inertia", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Brakes.Inertia.t", "Wind_Turbine/Brakes/Inertia", 1U, 1U, "N*m", 1.0e-6,
    "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Brakes.Inertia.w",
    "Wind_Turbine/Brakes/Inertia", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Brakes/Mechanical Rotational Reference", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, { "Brakes.R.w",
    "Wind_Turbine/Brakes", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Brakes.Rotational_Damper.C.w", "Wind_Turbine/Brakes/Rotational Damper", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Rotational_Damper.R.w", "Wind_Turbine/Brakes/Rotational Damper", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Rotational_Damper.t", "Wind_Turbine/Brakes/Rotational Damper", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Brakes.Rotational_Damper.w", "Wind_Turbine/Brakes/Rotational Damper", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Rotational_Damper.power_dissipated",
    "Wind_Turbine/Brakes/Rotational Damper", 1U, 1U, "kg*m^2/s^3", 1.0e-6,
    "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Brakes.Simulink_PS_Converter_output",
    "Wind_Turbine/Brakes/Simulink-PS\nConverter", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output", }, {
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Brakes/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Brakes/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Brakes/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Brakes/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Brakes/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor_W",
    "Wind_Turbine/Brakes/Speed\nSensor/PS-Simulink\nConverter", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Rotational_Motion_Sensor_W", }, {
    "Brakes.Speed_Sensor.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Brakes/Speed Sensor/Mechanical Rotational Reference1", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Brakes.Speed_Sensor.R.w", "Wind_Turbine/Brakes/Speed Sensor", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.B.w", "Wind_Turbine/Helical Gear  First Step", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.F.w", "Wind_Turbine/Helical Gear  First Step", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.H.T", "Wind_Turbine/Helical Gear  First Step", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Helical_Gear_First_Step.tB", "Wind_Turbine/Helical Gear  First Step", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Helical_Gear_First_Step.temperature",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "K", 1.0e-6, "K",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Helical_Gear_First_Step.damperB.C.w",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.damperB.R.w",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.damperB.t", "Wind_Turbine/Helical Gear  First Step",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Helical_Gear_First_Step.damperB.w", "Wind_Turbine/Helical Gear  First Step",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.damperB.power_dissipated",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "kg*m^2/s^3", 1.0e-6,
    "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Helical_Gear_First_Step.damperF.C.w",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.damperF.R.w",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.damperF.t", "Wind_Turbine/Helical Gear  First Step",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Helical_Gear_First_Step.damperF.w", "Wind_Turbine/Helical Gear  First Step",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_First_Step.damperF.power_dissipated",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "kg*m^2/s^3", 1.0e-6,
    "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Helical_Gear_First_Step.f_hardstop",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "N", 1.0e-6, "N",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "Helical_Gear_First_Step.fault_trigger",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, { "Helical_Gear_First_Step.tF",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Helical_Gear_First_Step.v_backlash",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "m/s", 1.0e-6, "m/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "Helical_Gear_First_Step.x_backlash",
    "Wind_Turbine/Helical Gear  First Step", 1U, 1U, "mm", 1.0e-6, "m",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "Helical_Gear_Second_Step.B.w", "Wind_Turbine/Helical Gear  Second Step", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.F.w", "Wind_Turbine/Helical Gear  Second Step", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.H.T", "Wind_Turbine/Helical Gear  Second Step", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Helical_Gear_Second_Step.tB", "Wind_Turbine/Helical Gear  Second Step", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Helical_Gear_Second_Step.temperature",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "K", 1.0e-6, "K",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Helical_Gear_Second_Step.damperB.C.w",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.damperB.R.w",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.damperB.t",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Helical_Gear_Second_Step.damperB.w",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.damperB.power_dissipated",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "kg*m^2/s^3", 1.0e-6,
    "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Helical_Gear_Second_Step.damperF.C.w",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.damperF.R.w",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.damperF.t",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Helical_Gear_Second_Step.damperF.w",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Helical_Gear_Second_Step.damperF.power_dissipated",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "kg*m^2/s^3", 1.0e-6,
    "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Helical_Gear_Second_Step.f_hardstop",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "N", 1.0e-6, "N",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "Helical_Gear_Second_Step.fault_trigger",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, { "Helical_Gear_Second_Step.tF",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Helical_Gear_Second_Step.v_backlash",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "m/s", 1.0e-6, "m/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "Helical_Gear_Second_Step.x_backlash",
    "Wind_Turbine/Helical Gear  Second Step", 1U, 1U, "mm", 1.0e-6, "m",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "Inertia_Carrier_Shaft.I.w", "Wind_Turbine/Inertia Carrier Shaft", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Inertia_Carrier_Shaft.J.w", "Wind_Turbine/Inertia Carrier Shaft", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Inertia_Carrier_Shaft.t", "Wind_Turbine/Inertia Carrier Shaft", 1U, 1U,
    "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Inertia_Carrier_Shaft.w",
    "Wind_Turbine/Inertia Carrier Shaft", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Inertia_First_Step_Shaft.I.w", "Wind_Turbine/Inertia First Step Shaft", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Inertia_First_Step_Shaft.J.w", "Wind_Turbine/Inertia First Step Shaft", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Inertia_First_Step_Shaft.t", "Wind_Turbine/Inertia First Step Shaft", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Inertia_First_Step_Shaft.w", "Wind_Turbine/Inertia First Step Shaft", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Inertia_Sun_Shaft.I.w", "Wind_Turbine/Inertia Sun Shaft", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Inertia_Sun_Shaft.J.w", "Wind_Turbine/Inertia Sun Shaft", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Inertia_Sun_Shaft.t", "Wind_Turbine/Inertia Sun Shaft", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Inertia_Sun_Shaft.w",
    "Wind_Turbine/Inertia Sun Shaft", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Mechanical Rotational Reference", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Mechanical Rotational Reference1", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.C.w", "Wind_Turbine/Planetary Gear", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.H.T", "Wind_Turbine/Planetary Gear", 1U, 1U, "K", 1.0e-6,
    "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, { "Planetary_Gear.R.w",
    "Wind_Turbine/Planetary Gear", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.S.w", "Wind_Turbine/Planetary Gear", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.C.w", "Wind_Turbine/Planetary Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.H.T", "Wind_Turbine/Planetary Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Planetary_Gear.gear.R.w", "Wind_Turbine/Planetary Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.S.w", "Wind_Turbine/Planetary Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.ring_planet.C.w", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.ring_planet.H.T", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Planetary_Gear.gear.ring_planet.P.w", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.ring_planet.R.w", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.ring_planet.temperature", "Wind_Turbine/Planetary Gear",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Planetary_Gear.gear.ring_planet.t_P", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Planetary_Gear.gear.ring_planet.damper.C.w", "Wind_Turbine/Planetary Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.ring_planet.damper.R.w", "Wind_Turbine/Planetary Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.ring_planet.damper.t", "Wind_Turbine/Planetary Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Planetary_Gear.gear.ring_planet.damper.w", "Wind_Turbine/Planetary Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Planetary Gear", 1U, 1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Planetary_Gear.gear.ring_planet.t_C", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Planetary_Gear.gear.ring_planet.t_R", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Planetary_Gear.gear.sun_planet.C.w", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.sun_planet.H.T", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Planetary_Gear.gear.sun_planet.P.w", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.sun_planet.S.w", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.sun_planet.temperature", "Wind_Turbine/Planetary Gear",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Planetary_Gear.gear.sun_planet.t_S", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Planetary_Gear.gear.sun_planet.damper.C.w", "Wind_Turbine/Planetary Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.sun_planet.damper.R.w", "Wind_Turbine/Planetary Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.sun_planet.damper.t", "Wind_Turbine/Planetary Gear", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Planetary_Gear.gear.sun_planet.damper.w", "Wind_Turbine/Planetary Gear", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Planetary_Gear.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Planetary Gear", 1U, 1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "Planetary_Gear.gear.sun_planet.t_C", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Planetary_Gear.gear.sun_planet.t_P", "Wind_Turbine/Planetary Gear", 1U, 1U,
    "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, { "Revolute_Joint_ti",
    "Wind_Turbine/Revolute Joint", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Revolute_Joint_ti", }, {
    "Revolute_Joint_w", "Wind_Turbine/Revolute Joint", 1U, 1U, "rad/s", 1.0e-6,
    "rad/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Revolute_Joint_w", }, {
    "Rotational_Simscape_Intf.C.w", "Wind_Turbine/Rotational Simscape Intf", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.C.w",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.R.w",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.S",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.t",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Angular Velocity Source", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.w",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Rotational_Simscape_Intf.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Torque Sensor", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Torque Sensor", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Torque Sensor", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Rotational_Simscape_Intf.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Rotational Simscape Intf/Ideal Torque Sensor", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Rotational_Simscape_Intf.R.w", "Wind_Turbine/Rotational Simscape Intf", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf.T", "Wind_Turbine/Rotational Simscape Intf", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Rotational_Simscape_Intf.w", "Wind_Turbine/Rotational Simscape Intf", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", }, {
    "Speed_Sensor.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U, "rad",
    1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Speed_Sensor.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Speed_Sensor.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Speed_Sensor.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Speed_Sensor.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Speed Sensor/Ideal Rotational Motion Sensor", 1U, 1U, "rad",
    1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Speed_Sensor.Ideal_Rotational_Motion_Sensor_W",
    "Wind_Turbine/Speed Sensor/PS-Simulink\nConverter", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Rotational_Motion_Sensor_W", }, {
    "Speed_Sensor.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Speed Sensor/Mechanical Rotational Reference1", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Speed_Sensor.R.w", "Wind_Turbine/Speed Sensor", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Torque_Actuator.Ideal_Torque_Source.C.w",
    "Wind_Turbine/Torque Actuator/Ideal Torque Source", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Torque_Actuator.Ideal_Torque_Source.R.w",
    "Wind_Turbine/Torque Actuator/Ideal Torque Source", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Torque_Actuator.Ideal_Torque_Source.S",
    "Wind_Turbine/Torque Actuator/Ideal Torque Source", 1U, 1U, "N*m", 1.0e-6,
    "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Torque_Actuator.Ideal_Torque_Source.t",
    "Wind_Turbine/Torque Actuator/Ideal Torque Source", 1U, 1U, "N*m", 1.0e-6,
    "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Torque_Actuator.Ideal_Torque_Source.w",
    "Wind_Turbine/Torque Actuator/Ideal Torque Source", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Torque_Actuator.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Torque Actuator/Mechanical Rotational Reference", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Torque_Actuator.R.w", "Wind_Turbine/Torque Actuator", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Torque_Actuator.Simulink_PS_Converter_output",
    "Wind_Turbine/Torque Actuator/Simulink-PS\nConverter", 1U, 1U, "1", 1.0e-6,
    "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output", }, {
    "Torque_Sensor.B.w", "Wind_Turbine/Torque Sensor", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Torque_Sensor.F.w", "Wind_Turbine/Torque Sensor", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Torque_Sensor.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Torque Sensor/Ideal Torque Sensor", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Torque_Sensor.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Torque Sensor/Ideal Torque Sensor", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Torque_Sensor.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Torque Sensor/Ideal Torque Sensor", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Torque_Sensor.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Torque Sensor/Ideal Torque Sensor", 1U, 1U, "N*m", 1.0e-6, "J",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Torque_Sensor.Ideal_Torque_Sensor_T",
    "Wind_Turbine/Torque\nSensor/PS-Simulink\nConverter", 1U, 1U, "N*m", 1.0e-6,
    "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Torque_Sensor_T", } };

static NeModeData s_major_mode_data[2] = { {
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch.internal_mode_var_m__",
    0U, "Wind_Turbine/Brakes/Disk Friction Clutch", 0, "internal_mode_var_m__",
  }, { "ie0", 0U, "", 0, "", } };

static NeZCData s_zc_data[16] = { { "Wind_Turbine/Brakes/Disk Friction Clutch",
    1U, 0U, "Brakes.Disk_Friction_Clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/disk_friction_clutch.ssc",
    NE_ZC_TYPE_TRUE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 1U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 2U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 3U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 4U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 5U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 6U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 7U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 8U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 9U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 10U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 11U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 12U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 13U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 14U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, }, { "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 15U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[16] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/disk_friction_clutch.ssc",
    350U, 38U, 350U, 53U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[17] = { {
    "Wind_Turbine/Brakes/Disk Friction Clutch", 3U, 0U,
    "Brakes.Disk_Friction_Clutch.fundamental_clutch.clutch",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/disk_friction_clutch.ssc",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 6.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 3U,
    "Brakes.Disk_Friction_Clutch.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Brakes/Disk Friction Clutch", 1U, 4U,
    "Brakes.Disk_Friction_Clutch.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Brakes/Rotational Damper", 1U, 5U,
    "Brakes.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Brakes/Rotational Damper", 1U, 6U,
    "Brakes.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Helical Gear  First Step", 1U, 7U,
    "Helical_Gear_First_Step.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Helical Gear  First Step", 1U, 8U,
    "Helical_Gear_First_Step.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Helical Gear  First Step", 1U, 9U,
    "Helical_Gear_First_Step.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Helical Gear  First Step", 1U, 10U,
    "Helical_Gear_First_Step.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Helical Gear  Second Step", 1U, 11U,
    "Helical_Gear_Second_Step.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Helical Gear  Second Step", 1U, 12U,
    "Helical_Gear_Second_Step.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Helical Gear  Second Step", 1U, 13U,
    "Helical_Gear_Second_Step.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Helical Gear  Second Step", 1U, 14U,
    "Helical_Gear_Second_Step.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Planetary Gear", 1U, 15U,
    "Planetary_Gear.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Planetary Gear", 1U, 16U,
    "Planetary_Gear.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Planetary Gear", 1U, 17U,
    "Planetary_Gear.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Planetary Gear", 1U, 18U,
    "Planetary_Gear.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", } };

static NeRange s_assert_range[19] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/fundamental_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/disk_friction_clutch.ssc",
    88U, 26U, 91U, 106U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[39] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 5U, 44U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 20U, 44U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 5U, 44U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 20U, 44U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 5U, 44U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 20U, 44U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 5U, 44U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 20U, 44U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/+fundamental_components/two_way_clutch.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/disk_friction_clutch.ssc",
    353U, 9U, 353U, 82U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/disk_friction_clutch.ssc",
    354U, 9U, 354U, 80U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+clutches/disk_friction_clutch.ssc",
    355U, 9U, 355U, 81U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    45U, 5U, 45U, 13U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc",
    36U, 5U, 36U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    47U, 5U, 47U, 19U, NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    19U, 5U, 19U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    39U, 5U, 39U, 6U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeRange *s_cer_range = NULL;
static NeRange s_icr_range[4] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData s_real_parameter_data[4] = { { "RTP_C10E9CE3_w",
    "Wind_Turbine/Brakes/Inertia", "", 0U, 1U, TRUE, }, { "RTP_483498A3_w",
    "Wind_Turbine/Inertia Sun Shaft", "", 0U, 1U, TRUE, }, { "RTP_A1573D96_w",
    "Wind_Turbine/Inertia Carrier Shaft", "", 0U, 1U, TRUE, }, {
    "RTP_3F33A835_w", "Wind_Turbine/Inertia First Step Shaft", "", 0U, 1U, TRUE,
  } };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 21;
  out->mM_P.mNumRow = 21;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 6;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 6;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 21;
  out->mDXM_P.mNumRow = 6;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mDDM_P.mNumRow = 6;
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
  out->mDUM_P.mNumCol = 3;
  out->mDUM_P.mNumRow = 6;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
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
  out->mDTM_P.mNumRow = 6;
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
  out->mDPM_P.mNumCol = 4;
  out->mDPM_P.mNumRow = 6;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
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
  out->mA_P.mNumCol = 21;
  out->mA_P.mNumRow = 21;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 30;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 30);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 3;
  out->mB_P.mNumRow = 21;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 2;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
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
  out->mC_P.mNumRow = 21;
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
  out->mF.mN = 21;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 21);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 21;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 21;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 21;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 21;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 21;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 21);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 21;
  out->mDXF_P.mNumRow = 21;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 6;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 3;
  out->mDUF_P.mNumRow = 21;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
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
  out->mDTF_P.mNumRow = 21;
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
  out->mDDF_P.mNumRow = 21;
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
  out->mDPDXF_P.mNumCol = 4;
  out->mDPDXF_P.mNumRow = 6;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
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
  out->mDWF_P.mNumRow = 21;
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
  out->mTDUF_P.mNumCol = 3;
  out->mTDUF_P.mNumRow = 21;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 21;
  out->mTDXF_P.mNumRow = 21;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    36);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 10;
  out->mDNF_P.mNumRow = 21;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 3;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 21;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 21);
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
  out->mDXCER_P.mNumCol = 21;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 22);
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
  out->mIC.mN = 21;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 21);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 4;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 4;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 4;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 4;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 4);
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
  out->mDXICR_P.mNumCol = 21;
  out->mDXICR_P.mNumRow = 4;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 22);
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
  out->mDDICR_P.mNumRow = 4;
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
  out->mTDUICR_P.mNumCol = 3;
  out->mTDUICR_P.mNumRow = 4;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 4);
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
  out->mICRM_P.mNumCol = 21;
  out->mICRM_P.mNumRow = 4;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
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
  out->mDXICRM_P.mNumCol = 21;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 22);
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
  out->mMDUY_P.mNumCol = 3;
  out->mMDUY_P.mNumRow = 4;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
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
  out->mMDXY_P.mNumCol = 21;
  out->mMDXY_P.mNumRow = 4;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
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
  out->mTDUY_P.mNumCol = 3;
  out->mTDUY_P.mNumRow = 4;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
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
  out->mTDXY_P.mNumCol = 21;
  out->mTDXY_P.mNumRow = 4;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 4;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 21;
  out->mDXY_P.mNumRow = 4;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 8;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 3;
  out->mDUY_P.mNumRow = 4;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
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
  out->mDTY_P.mNumRow = 4;
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
  out->mMODE.mN = 16;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 16;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 16);
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
  out->mCACHE_I.mN = 30;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
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
  out->mUPDATE_I.mN = 2;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
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
  out->mUPDATE2_I.mN = 2;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
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
  out->mLOCK_I.mN = 2;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 2);
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
  out->mLOCK2_I.mN = 2;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 2);
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
  out->mINIT_I.mN = 2;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 129;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 129);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 17;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    17);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
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
  out->mDXDELT_P.mNumCol = 21;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 22);
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
  out->mDUDELT_P.mNumCol = 3;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 4);
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
  out->mOBS_EXP.mN = 170;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    170);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 170;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    170);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 170;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    170);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 170;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 170);
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
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 20;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 20);
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
  out->mQ1.mN = 6;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 21;
  out->mQX_P.mNumRow = 21;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 3;
  out->mQU_P.mNumRow = 21;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
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
  out->mQT_P.mNumRow = 21;
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
  out->mQ1_P.mNumRow = 21;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 21;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 21;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 21;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 21;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 21;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 21);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 21;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 21);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 21;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 21);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 21;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 21);
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

NeDynamicSystem *Wind_Turbine_31c4daf8_7_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[3];
  static NeDsIoInfo output_info[4];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 21;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 6;
  ds->mNumEquations = 21;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 4;
  ds->mNumModes = 16;
  ds->mNumMajorModes = 2;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 30;
  ds->mNumObservables = 179;
  ds->mNumObservableElements = 170;
  ds->mNumZcs = 16;
  ds->mNumAsserts = 17;
  ds->mNumAssertRanges = 19;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 16;
  ds->mNumEquationRanges = 39;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 4;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 4;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;
  ds->mIsScalable = FALSE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 3;
  input_info[0].mIdentifier = "Brakes.Simulink_PS_Converter_output";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName = "Brakes.Simulink_PS_Converter_output";
  input_info[0].mUnit = "1";
  input_info[1].mIdentifier = "Torque_Actuator.Simulink_PS_Converter_output";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "Torque_Actuator.Simulink_PS_Converter_output";
  input_info[1].mUnit = "1";
  input_info[2].mIdentifier = "Revolute_Joint_w";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName = "Revolute_Joint_w";
  input_info[2].mUnit = "rad/s";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 4;
  output_info[0].mIdentifier =
    "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor_W";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName = "Brakes.Speed_Sensor.Ideal_Rotational_Motion_Sensor_W";
  output_info[0].mUnit = "rad/s";
  output_info[1].mIdentifier = "Revolute_Joint_ti";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "Revolute_Joint_ti";
  output_info[1].mUnit = "N*m";
  output_info[2].mIdentifier = "Speed_Sensor.Ideal_Rotational_Motion_Sensor_W";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName = "Speed_Sensor.Ideal_Rotational_Motion_Sensor_W";
  output_info[2].mUnit = "rad/s";
  output_info[3].mIdentifier = "Torque_Sensor.Ideal_Torque_Sensor_T";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName = "Torque_Sensor.Ideal_Torque_Sensor_T";
  output_info[3].mUnit = "N*m";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_M_P] = ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
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
  ds->mMethods[NE_DS_METHOD_A_P] = Wind_Turbine_31c4daf8_7_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = Wind_Turbine_31c4daf8_7_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = Wind_Turbine_31c4daf8_7_ds_f;
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
  ds->mMethods[NE_DS_METHOD_DXF_P] = ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
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
  ds->mMethods[NE_DS_METHOD_TDXF_P] = Wind_Turbine_31c4daf8_7_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
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
  ds->mMethods[NE_DS_METHOD_MODE] = Wind_Turbine_31c4daf8_7_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = Wind_Turbine_31c4daf8_7_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = Wind_Turbine_31c4daf8_7_ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = Wind_Turbine_31c4daf8_7_ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = Wind_Turbine_31c4daf8_7_ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = Wind_Turbine_31c4daf8_7_ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = Wind_Turbine_31c4daf8_7_ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = Wind_Turbine_31c4daf8_7_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = ds_assert;
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
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = Wind_Turbine_31c4daf8_7_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = Wind_Turbine_31c4daf8_7_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = Wind_Turbine_31c4daf8_7_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = Wind_Turbine_31c4daf8_7_ds_obs_il;
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
  ds->mMethods[NE_DS_METHOD_QX_P] = Wind_Turbine_31c4daf8_7_ds_qx_p;
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
  ds->mMethods[NE_DS_METHOD_IMIN] = ds_imin;
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

static int32_T ds_assert (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t2, NeDsMethodOutput *t3)
{
  PmIntVector out;
  int32_T Q_idx_0;
  boolean_T t0;
  Q_idx_0 = t2->mQ.mX[0];
  out = t3->mASSERT;
  if ((size_t)Q_idx_0 >= 1ULL) {
    t0 = ((size_t)Q_idx_0 <= 6ULL);
  } else {
    t0 = false;
  }

  out.mX[0] = (int32_T)t0;
  out.mX[1] = 1;
  out.mX[2] = 1;
  out.mX[3] = 1;
  out.mX[4] = 1;
  out.mX[5] = 1;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  out.mX[10] = 1;
  out.mX[11] = 1;
  out.mX[12] = 1;
  out.mX[13] = 1;
  out.mX[14] = 1;
  out.mX[15] = 1;
  out.mX[16] = 1;
  (void)sys;
  (void)t3;
  return 0;
}

static int32_T ds_passert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 21ULL;
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
  out.mNumCol = 21ULL;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
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

static int32_T ds_init_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mINIT_I;
  out.mX[0] = 2;
  out.mX[1] = 1;
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

static int32_T ds_dxf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  int32_T Q_idx_0;
  boolean_T intrm_sf_mf_3;
  boolean_T intrm_sf_mf_4;
  Q_idx_0 = t1->mQ.mX[0];
  out = t2->mDXF;
  intrm_sf_mf_3 = ((size_t)Q_idx_0 == 2ULL);
  intrm_sf_mf_4 = ((size_t)Q_idx_0 == 1ULL);
  out.mX[0] = intrm_sf_mf_4 ? 0.0 : (real_T)intrm_sf_mf_3;
  out.mX[1] = intrm_sf_mf_4 ? 0.0 : intrm_sf_mf_3 ? -1.0 : 0.0;
  out.mX[2] = 1.0;
  out.mX[3] = intrm_sf_mf_4 ? -1.0 : intrm_sf_mf_3 ? 0.0 : -1.0;
  out.mX[4] = intrm_sf_mf_4 ? -1.0 : intrm_sf_mf_3 ? 0.0 : -1.0;
  out.mX[5] = intrm_sf_mf_4 ? 0.0 : intrm_sf_mf_3 ? 0.0 : (size_t)Q_idx_0 ==
    3ULL ? -1.0 : (size_t)Q_idx_0 == 4ULL ? -1.0 : 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 21ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 3;
  out.mJc[8] = 4;
  out.mJc[9] = 5;
  out.mJc[10] = 6;
  out.mJc[11] = 6;
  out.mJc[12] = 6;
  out.mJc[13] = 6;
  out.mJc[14] = 6;
  out.mJc[15] = 6;
  out.mJc[16] = 6;
  out.mJc[17] = 6;
  out.mJc[18] = 6;
  out.mJc[19] = 6;
  out.mJc[20] = 6;
  out.mJc[21] = 6;
  out.mIr[0] = 6;
  out.mIr[1] = 6;
  out.mIr[2] = 7;
  out.mIr[3] = 6;
  out.mIr[4] = 6;
  out.mIr[5] = 6;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T intermediate_der22;
  int32_T M_idx_15;
  M_idx_15 = t1->mM.mX[15];
  out = t2->mDUF;
  intermediate_der22 = (real_T)(M_idx_15 != 0) * 0.004;
  out.mX[0] = -(intermediate_der22 * 70000.0);
  out.mX[1] = -(intermediate_der22 * 80000.0);
  out.mX[2] = -(-intermediate_der22 * 80000.0);
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
  out.mNumCol = 3ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 3;
  out.mJc[3] = 3;
  out.mIr[0] = 8;
  out.mIr[1] = 9;
  out.mIr[2] = 10;
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
  out.mNumRow = 21ULL;
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
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t2,
                     NeDsMethodOutput *t3)
{
  PmRealVector out;
  (void)t2;
  out = t3->mB;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  (void)sys;
  (void)t3;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 3ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 1;
  out.mJc[3] = 2;
  out.mIr[0] = 20;
  out.mIr[1] = 18;
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
  out.mNumRow = 21ULL;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 4;
  out.mJc[3] = 5;
  out.mIr[0] = 8;
  out.mIr[1] = 9;
  out.mIr[2] = 10;
  out.mIr[3] = 20;
  out.mIr[4] = 18;
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
  out.mNumRow = 21ULL;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
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
  out.mX[6] = true;
  out.mX[7] = true;
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
  out.mX[0] = -70000.0;
  out.mX[1] = -80000.0;
  out.mX[2] = 80000.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 10ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 3;
  out.mJc[7] = 3;
  out.mJc[8] = 3;
  out.mJc[9] = 3;
  out.mJc[10] = 3;
  out.mIr[0] = 8;
  out.mIr[1] = 9;
  out.mIr[2] = 10;
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
  out.mX[6] = true;
  out.mX[7] = true;
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
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T P_R_idx_0;
  real_T P_R_idx_1;
  real_T P_R_idx_2;
  real_T P_R_idx_3;
  P_R_idx_0 = t1->mP_R.mX[0];
  P_R_idx_1 = t1->mP_R.mX[1];
  P_R_idx_2 = t1->mP_R.mX[2];
  P_R_idx_3 = t1->mP_R.mX[3];
  out = t2->mIC;
  out.mX[0] = P_R_idx_0;
  out.mX[1] = P_R_idx_1;
  out.mX[2] = 0.0;
  out.mX[3] = P_R_idx_2;
  out.mX[4] = P_R_idx_3;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mICR;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  out.mX[2] = 3;
  out.mX[3] = 3;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mICR_ID;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mICR_IL;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
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
  out.mNumCol = 21ULL;
  out.mNumRow = 4ULL;
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
  out.mNumRow = 4ULL;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
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
  out.mNumCol = 21ULL;
  out.mNumRow = 4ULL;
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
  out.mNumCol = 21ULL;
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

static int32_T ds_imin (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mIMIN;
  out.mX[0] = -pmf_get_inf();
  out.mX[1] = -pmf_get_inf();
  out.mX[2] = -pmf_get_inf();
  out.mX[3] = -pmf_get_inf();
  out.mX[4] = -pmf_get_inf();
  out.mX[5] = -pmf_get_inf();
  out.mX[6] = -pmf_get_inf();
  out.mX[7] = -pmf_get_inf();
  out.mX[8] = -pmf_get_inf();
  out.mX[9] = -pmf_get_inf();
  out.mX[10] = -pmf_get_inf();
  out.mX[11] = -pmf_get_inf();
  out.mX[12] = -pmf_get_inf();
  out.mX[13] = -pmf_get_inf();
  out.mX[14] = -pmf_get_inf();
  out.mX[15] = -pmf_get_inf();
  out.mX[16] = -pmf_get_inf();
  out.mX[17] = -pmf_get_inf();
  out.mX[18] = -pmf_get_inf();
  out.mX[19] = -pmf_get_inf();
  out.mX[20] = -pmf_get_inf();
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

static int32_T ds_m (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mM;
  out.mX[0] = -1.0;
  out.mX[1] = -1.0;
  out.mX[2] = 1.0;
  out.mX[3] = -1.0;
  out.mX[4] = -1.0;
  out.mX[5] = 1.0;
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
  out.mNumCol = 21ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 6;
  out.mJc[8] = 6;
  out.mJc[9] = 6;
  out.mJc[10] = 6;
  out.mJc[11] = 6;
  out.mJc[12] = 6;
  out.mJc[13] = 6;
  out.mJc[14] = 6;
  out.mJc[15] = 6;
  out.mJc[16] = 6;
  out.mJc[17] = 6;
  out.mJc[18] = 6;
  out.mJc[19] = 6;
  out.mJc[20] = 6;
  out.mJc[21] = 6;
  out.mIr[0] = 0;
  out.mIr[1] = 4;
  out.mIr[2] = 1;
  out.mIr[3] = 2;
  out.mIr[4] = 3;
  out.mIr[5] = 5;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 21ULL;
  out.mNumRow = 6ULL;
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
  out.mNumRow = 6ULL;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
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
  out.mNumRow = 6ULL;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
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
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mQX;
  out.mX[0] = 4.0;
  out.mX[1] = 3.0;
  out.mX[2] = 4.0;
  out.mX[3] = 2.0;
  out.mX[4] = 3.0;
  out.mX[5] = 4.0;
  out.mX[6] = 4.0;
  out.mX[7] = 2.0;
  out.mX[8] = 2.0625;
  out.mX[9] = -0.35416666666666663;
  out.mX[10] = 4.0;
  out.mX[11] = 4.0;
  out.mX[12] = -0.35416666666666663;
  out.mX[13] = 17.895833333333332;
  out.mX[14] = 6.0;
  out.mX[15] = 1.0;
  out.mX[16] = 2.0;
  out.mX[17] = 2.0;
  out.mX[18] = 6.0;
  out.mX[19] = 4.0;
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
  PmRealVector out;
  (void)t1;
  out = t2->mQ1;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
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
  out.mNumRow = 21ULL;
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
  out.mNumRow = 21ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 6;
  out.mIr[0] = 7;
  out.mIr[1] = 8;
  out.mIr[2] = 13;
  out.mIr[3] = 14;
  out.mIr[4] = 17;
  out.mIr[5] = 18;
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
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
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
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
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
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T X_idx_1;
  real_T X_idx_14;
  real_T X_idx_18;
  real_T X_idx_20;
  real_T X_idx_7;
  real_T X_idx_8;
  X_idx_1 = t1->mX.mX[1];
  X_idx_7 = t1->mX.mX[7];
  X_idx_8 = t1->mX.mX[8];
  X_idx_14 = t1->mX.mX[14];
  X_idx_18 = t1->mX.mX[18];
  X_idx_20 = t1->mX.mX[20];
  out = t2->mY;
  out.mX[0] = X_idx_1;
  out.mX[1] = ((X_idx_14 * 2.0 + X_idx_7) + X_idx_8) + X_idx_18;
  out.mX[2] = X_idx_20;
  out.mX[3] = X_idx_14 * 2.0 + X_idx_18;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 2.0;
  out.mX[4] = 2.0;
  out.mX[5] = 1.0;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
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
  out.mNumCol = 21ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 2;
  out.mJc[9] = 3;
  out.mJc[10] = 3;
  out.mJc[11] = 3;
  out.mJc[12] = 3;
  out.mJc[13] = 3;
  out.mJc[14] = 3;
  out.mJc[15] = 5;
  out.mJc[16] = 5;
  out.mJc[17] = 5;
  out.mJc[18] = 5;
  out.mJc[19] = 7;
  out.mJc[20] = 7;
  out.mJc[21] = 8;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 1;
  out.mIr[3] = 1;
  out.mIr[4] = 3;
  out.mIr[5] = 1;
  out.mIr[6] = 3;
  out.mIr[7] = 2;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
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
  out.mNumCol = 21ULL;
  out.mNumRow = 4ULL;
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
  out.mNumCol = 3ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
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
  out.mNumCol = 21ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 2;
  out.mJc[9] = 3;
  out.mJc[10] = 3;
  out.mJc[11] = 3;
  out.mJc[12] = 3;
  out.mJc[13] = 3;
  out.mJc[14] = 3;
  out.mJc[15] = 5;
  out.mJc[16] = 5;
  out.mJc[17] = 5;
  out.mJc[18] = 5;
  out.mJc[19] = 7;
  out.mJc[20] = 7;
  out.mJc[21] = 8;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 1;
  out.mIr[3] = 1;
  out.mIr[4] = 3;
  out.mIr[5] = 1;
  out.mIr[6] = 3;
  out.mIr[7] = 2;
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
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
