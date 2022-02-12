/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */
/* Wind_Turbine_31c4daf8_2_ds.c - body for module Wind_Turbine_31c4daf8_2_ds */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_obs_exp.h"
#include "Wind_Turbine_31c4daf8_2_ds_log.h"
#include "Wind_Turbine_31c4daf8_2_ds_tduicr_p.h"
#include "Wind_Turbine_31c4daf8_2_ds_dxicr.h"
#include "Wind_Turbine_31c4daf8_2_ds_icr_il.h"
#include "Wind_Turbine_31c4daf8_2_ds_icr_im.h"
#include "Wind_Turbine_31c4daf8_2_ds_icr_id.h"
#include "Wind_Turbine_31c4daf8_2_ds_icr.h"
#include "Wind_Turbine_31c4daf8_2_ds_obs_all.h"
#include "Wind_Turbine_31c4daf8_2_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_2_ds_b.h"
#include "Wind_Turbine_31c4daf8_2_ds_dxy.h"
#include "Wind_Turbine_31c4daf8_2_ds_obs_il.h"
#include "Wind_Turbine_31c4daf8_2_ds_a.h"
#include "Wind_Turbine_31c4daf8_2_ds_assert.h"
#include "Wind_Turbine_31c4daf8_2_ds.h"
#include "ssc_ml_fun.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"

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
static int32_T ds_a_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_f(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
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
static int32_T ds_tdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
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
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
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
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_mode(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_zc(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
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
static NeEquationData s_equation_data[6] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Ideal Rotational Motion Sensor",
    2U, 0U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    2U, 2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Ideal Rotational Motion Sensor",
    2U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Ideal Rotational Motion Sensor",
    2U, 6U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Ideal Rotational Motion Sensor",
    2U, 8U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Angular Velocity Source", 1U,
    10U, TRUE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[51] = { { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 0U, }, { "",
    0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    2U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    3U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    4U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    5U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    6U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    7U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    8U, }, { "", 0U, 0, "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear",
    1U, 9U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    10U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    11U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    12U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    13U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    14U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    15U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    16U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    17U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 18U, }, { "",
    0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    19U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    20U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    21U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    22U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    23U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    24U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    25U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    26U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 27U, }, { "",
    0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    28U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    29U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    30U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    31U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    32U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    33U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    34U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    35U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 36U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 37U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 38U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 39U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 40U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 41U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 42U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 43U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 44U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 45U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 46U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 47U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 48U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 49U, }, { "", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 50U, } };

static NeVariableData s_variable_data[6] = { {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.w", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Revolute_Joint1_ti", 0U, 0, "Wind_Turbine/Revolute Joint1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Revolute_Joint1_ti", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[809] = { {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor_A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/PS-Simulink Converter", 1U, 1U,
    "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Rotational_Motion_Sensor_A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor_W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/PS-Simulink Converter1", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.B.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.F.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.tB",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperB.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperB.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperB.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperF.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperF.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperF.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.f_hardstop",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "N",
    1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.fault_trigger",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "1",
    1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.tF",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.v_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.x_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U, "mm",
    1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Ideal_Torque_Source.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Ideal_Torque_Source.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Ideal_Torque_Source.S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Ideal_Torque_Source.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Ideal_Torque_Source.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Simulink_PS_Converter_output",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Torque Actuator/Simulink-PS\nConverter",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output", },
  { "Ideal_Motor.Ideal_Yaw_Motor_1.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, { "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor_A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/PS-Simulink Converter", 1U, 1U,
    "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Rotational_Motion_Sensor_A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor_W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/PS-Simulink Converter1", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.B.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.F.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.tB",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperB.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperB.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperB.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperF.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperF.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperF.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.f_hardstop",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "N",
    1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.fault_trigger",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "1",
    1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.tF",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.v_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.x_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 1U, "mm",
    1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Ideal_Torque_Source.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Ideal_Torque_Source.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Ideal_Torque_Source.S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Ideal_Torque_Source.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Ideal_Torque_Source.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Simulink_PS_Converter_output",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Torque Actuator/Simulink-PS\nConverter",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output", },
  { "Ideal_Motor.Ideal_Yaw_Motor_2.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, { "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor_A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/PS-Simulink Converter", 1U, 1U,
    "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Rotational_Motion_Sensor_A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor_W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/PS-Simulink Converter1", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.B.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.F.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.tB",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperB.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperB.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperB.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperF.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperF.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperF.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.f_hardstop",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "N",
    1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.fault_trigger",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "1",
    1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.tF",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.v_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.x_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 1U, "mm",
    1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Ideal_Torque_Source.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Ideal_Torque_Source.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Ideal_Torque_Source.S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Ideal_Torque_Source.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Ideal_Torque_Source.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Simulink_PS_Converter_output",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Torque Actuator/Simulink-PS\nConverter",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output", },
  { "Ideal_Motor.Ideal_Yaw_Motor_3.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, { "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor_A",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/PS-Simulink Converter", 1U, 1U,
    "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Rotational_Motion_Sensor_A", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor_W",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/PS-Simulink Converter1", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Ideal_Rotational_Motion_Sensor_W", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.B.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.F.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.tB",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperB.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperB.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperB.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperF.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperF.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperF.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U,
    "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.f_hardstop",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "N",
    1.0e-6, "N", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Hard stop force", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.fault_trigger",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "1",
    1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.tF",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.v_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "m/s",
    1.0e-6, "m/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.x_backlash",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 1U, "mm",
    1.0e-6, "m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Backlash position", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Ideal_Torque_Source.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Ideal_Torque_Source.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Ideal_Torque_Source.S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Ideal_Torque_Source.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Ideal Torque Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Ideal_Torque_Source.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Simulink_PS_Converter_output",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Torque Actuator/Simulink-PS\nConverter",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output", },
  { "Ideal_Motor.Ideal_Yaw_Motor_4.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4", 1U, 1U, "rad/s", 1.0e-6, "1/s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.J.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "kg*m^2/s^3", 1.0e-6, "kg*m^2/s^3", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, { "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Ideal_Motor.YG1.w", "Wind_Turbine/Ideal Motor", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Mechanical_Rotational_Reference2.W.w",
    "Wind_Turbine/Mechanical Rotational Reference2", 1U, 1U, "rad/s", 1.0e-6,
    "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Revolute_Joint1_ti", "Wind_Turbine/Revolute Joint1", 1U, 1U, "N*m", 1.0e-6,
    "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Revolute_Joint1_ti", }, {
    "Revolute_Joint1_w", "Wind_Turbine/Revolute Joint1", 1U, 1U, "rad/s", 1.0e-6,
    "rad/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Revolute_Joint1_w", }, {
    "Rotational_Simscape_Intf1.C.w", "Wind_Turbine/Rotational Simscape Intf1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Rotational_Simscape_Intf1.Ideal_Angular_Velocity_Source.C.w",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf1.Ideal_Angular_Velocity_Source.R.w",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf1.Ideal_Angular_Velocity_Source.S",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Rotational_Simscape_Intf1.Ideal_Angular_Velocity_Source.t",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Angular Velocity Source", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Rotational_Simscape_Intf1.Ideal_Angular_Velocity_Source.w",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Angular Velocity Source", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Rotational_Simscape_Intf1.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Torque Sensor", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf1.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Torque Sensor", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf1.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Torque Sensor", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Rotational_Simscape_Intf1.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Rotational Simscape Intf1/Ideal Torque Sensor", 1U, 1U, "N*m",
    1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Rotational_Simscape_Intf1.R.w", "Wind_Turbine/Rotational Simscape Intf1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Rotational_Simscape_Intf1.T", "Wind_Turbine/Rotational Simscape Intf1", 1U,
    1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Rotational_Simscape_Intf1.w", "Wind_Turbine/Rotational Simscape Intf1", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData *s_zc_data = NULL;
static NeRange *s_range = NULL;
static NeAssertData s_assert_data[88] = { {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 0U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 1U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 2U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Simple Gear", 1U, 3U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    4U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    5U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    6U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear1", 1U,
    7U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    8U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    9U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    10U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear2", 1U,
    11U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    12U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    13U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    14U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear3", 1U,
    15U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    16U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    17U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    18U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Planetary Gear4", 1U,
    19U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 20U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 21U,
    "Ideal_Motor.Ideal_Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 22U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 23U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 24U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Simple Gear", 1U, 25U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    26U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    27U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    28U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear1", 1U,
    29U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    30U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    31U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    32U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear2", 1U,
    33U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    34U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    35U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    36U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear3", 1U,
    37U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    38U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    39U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    40U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Planetary Gear4", 1U,
    41U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 42U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 43U,
    "Ideal_Motor.Ideal_Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 44U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 45U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 46U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Simple Gear", 1U, 47U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    48U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    49U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    50U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear1", 1U,
    51U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    52U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    53U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    54U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear2", 1U,
    55U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    56U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    57U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    58U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear3", 1U,
    59U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    60U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    61U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    62U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Planetary Gear4", 1U,
    63U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 64U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 65U,
    "Ideal_Motor.Ideal_Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 66U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 67U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperB.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 68U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Simple Gear", 1U, 69U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Simple_Gear.damperF.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    70U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    71U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    72U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear1", 1U,
    73U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    74U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    75U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    76U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear2", 1U,
    77U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    78U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    79U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    80U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear3", 1U,
    81U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    82U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    83U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    84U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Planetary Gear4", 1U,
    85U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 86U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 87U,
    "Ideal_Motor.Ideal_Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", } };

static NeRange s_assert_range[88] = { {
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
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 27U, 16U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc",
    16U, 25U, 16U, 26U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[11] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 5U, 44U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 20U, 44U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc",
    36U, 5U, 36U, 19U, NE_RANGE_TYPE_NORMAL, } };

static NeRange *s_cer_range = NULL;
static NeRange s_icr_range[51] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData s_real_parameter_data[16] = { { "RTP_5248C8E1_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    "", 0U, 1U, TRUE, }, { "RTP_1A0CD83E_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    "", 0U, 1U, TRUE, }, { "RTP_29946097_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    "", 0U, 1U, TRUE, }, { "RTP_2F3BCEB9_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    "", 0U, 1U, TRUE, }, { "RTP_49C8D5DC_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    "", 0U, 1U, TRUE, }, { "RTP_4F677BF2_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    "", 0U, 1U, TRUE, }, { "RTP_54E766CF_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    "", 0U, 1U, TRUE, }, { "RTP_6D0BE8A8_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    "", 0U, 1U, TRUE, }, { "RTP_A7C6B4F0_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    "", 0U, 1U, TRUE, }, { "RTP_B09D312D_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    "", 0U, 1U, TRUE, }, { "RTP_BAE907E3_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    "", 0U, 1U, TRUE, }, { "RTP_C79A01BB_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    "", 0U, 1U, TRUE, }, { "RTP_CDEE3775_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    "", 0U, 1U, TRUE, }, { "RTP_D0C18466_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    "", 0U, 1U, TRUE, }, { "RTP_F2AD173C_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    "", 0U, 1U, TRUE, }, { "RTP_F402B912_w",
    "Wind_Turbine/Ideal Motor/Ideal Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    "", 0U, 1U, TRUE, } };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 6;
  out->mM_P.mNumRow = 6;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 5;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 5);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 5;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 6;
  out->mDXM_P.mNumRow = 5;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
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
  out->mDDM_P.mNumRow = 5;
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
  out->mDUM_P.mNumCol = 5;
  out->mDUM_P.mNumRow = 5;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mDTM_P.mNumRow = 5;
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
  out->mDPM_P.mNumCol = 16;
  out->mDPM_P.mNumRow = 5;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    17);
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
  out->mA_P.mNumCol = 6;
  out->mA_P.mNumRow = 6;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 12;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 12);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 5;
  out->mB_P.mNumRow = 6;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 15;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
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
  out->mC_P.mNumRow = 6;
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
  out->mF.mN = 6;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 6;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 6;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 6;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 6;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 6;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 6;
  out->mDXF_P.mNumRow = 6;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 0;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 5;
  out->mDUF_P.mNumRow = 6;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mDTF_P.mNumRow = 6;
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
  out->mDDF_P.mNumRow = 6;
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
  out->mDPDXF_P.mNumCol = 16;
  out->mDPDXF_P.mNumRow = 0;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 17);
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
  out->mDWF_P.mNumRow = 6;
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
  out->mTDUF_P.mNumCol = 5;
  out->mTDUF_P.mNumRow = 6;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 6;
  out->mTDXF_P.mNumRow = 6;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 18;
  out->mDNF_P.mNumRow = 6;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    19);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 6;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 6);
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
  out->mDXCER_P.mNumCol = 6;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
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
  out->mIC.mN = 6;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 51;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 51);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 51;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    51);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 51;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 51);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 51;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 51);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 26;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    26);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 6;
  out->mDXICR_P.mNumRow = 51;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 26);
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
  out->mDDICR_P.mNumRow = 51;
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
  out->mTDUICR_P.mNumCol = 5;
  out->mTDUICR_P.mNumRow = 51;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 6);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 37);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 6;
  out->mICRM_P.mNumRow = 51;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
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
  out->mDXICRM_P.mNumCol = 6;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
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
  out->mMDUY_P.mNumCol = 5;
  out->mMDUY_P.mNumRow = 9;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mMDXY_P.mNumCol = 6;
  out->mMDXY_P.mNumRow = 9;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
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
  out->mTDUY_P.mNumCol = 5;
  out->mTDUY_P.mNumRow = 9;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 6;
  out->mTDXY_P.mNumRow = 9;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 9;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 6;
  out->mDXY_P.mNumRow = 9;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 13;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 13);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 5;
  out->mDUY_P.mNumRow = 9;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 8;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
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
  out->mDTY_P.mNumRow = 9;
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
  out->mMODE.mN = 0;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 0;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mLOG.mN = 562;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 562);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 88;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    88);
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
  out->mDXDELT_P.mNumCol = 6;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
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
  out->mDUDELT_P.mNumCol = 5;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 6);
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
  out->mOBS_EXP.mN = 765;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    765);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 765;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    765);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 765;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    765);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 765;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 765);
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
  out->mQX_P.mNumCol = 6;
  out->mQX_P.mNumRow = 6;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
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
  out->mQU_P.mNumCol = 5;
  out->mQU_P.mNumRow = 6;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mQT_P.mNumRow = 6;
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
  out->mQ1_P.mNumRow = 6;
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
  out->mVAR_TOL.mN = 6;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 6;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 6;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 6;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 6;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 6;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 6;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 6;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
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

NeDynamicSystem *Wind_Turbine_31c4daf8_2_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[5];
  static NeDsIoInfo output_info[9];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 6;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 5;
  ds->mNumEquations = 6;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 51;
  ds->mNumModes = 0;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 809;
  ds->mNumObservableElements = 765;
  ds->mNumZcs = 0;
  ds->mNumAsserts = 88;
  ds->mNumAssertRanges = 88;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 0;
  ds->mNumEquationRanges = 11;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 51;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 16;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;
  ds->mIsScalable = FALSE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 5;
  input_info[0].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_1.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[0].mUnit = "1";
  input_info[1].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_2.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[1].mUnit = "1";
  input_info[2].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_3.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[2].mUnit = "1";
  input_info[3].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_4.Torque_Actuator.Simulink_PS_Converter_output";
  input_info[3].mUnit = "1";
  input_info[4].mIdentifier = "Revolute_Joint1_w";
  input_info[4].mM = 1;
  input_info[4].mN = 1;
  input_info[4].mName = "Revolute_Joint1_w";
  input_info[4].mUnit = "rad/s";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 9;
  output_info[0].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor_A";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor_A";
  output_info[0].mUnit = "rad";
  output_info[1].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor_W";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_1.Ideal_Rotational_Motion_Sensor_W";
  output_info[1].mUnit = "rad/s";
  output_info[2].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor_A";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor_A";
  output_info[2].mUnit = "rad";
  output_info[3].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor_W";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_2.Ideal_Rotational_Motion_Sensor_W";
  output_info[3].mUnit = "rad/s";
  output_info[4].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor_A";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor_A";
  output_info[4].mUnit = "rad";
  output_info[5].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor_W";
  output_info[5].mM = 1;
  output_info[5].mN = 1;
  output_info[5].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_3.Ideal_Rotational_Motion_Sensor_W";
  output_info[5].mUnit = "rad/s";
  output_info[6].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor_A";
  output_info[6].mM = 1;
  output_info[6].mN = 1;
  output_info[6].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor_A";
  output_info[6].mUnit = "rad";
  output_info[7].mIdentifier =
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor_W";
  output_info[7].mM = 1;
  output_info[7].mN = 1;
  output_info[7].mName =
    "Ideal_Motor.Ideal_Yaw_Motor_4.Ideal_Rotational_Motion_Sensor_W";
  output_info[7].mUnit = "rad/s";
  output_info[8].mIdentifier = "Revolute_Joint1_ti";
  output_info[8].mM = 1;
  output_info[8].mN = 1;
  output_info[8].mName = "Revolute_Joint1_ti";
  output_info[8].mUnit = "N*m";
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
  ds->mMethods[NE_DS_METHOD_A_P] = ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = Wind_Turbine_31c4daf8_2_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = Wind_Turbine_31c4daf8_2_ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = ds_f;
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
  ds->mMethods[NE_DS_METHOD_TDXF_P] = ds_tdxf_p;
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
  ds->mMethods[NE_DS_METHOD_ICR] = Wind_Turbine_31c4daf8_2_ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = Wind_Turbine_31c4daf8_2_ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = Wind_Turbine_31c4daf8_2_ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = Wind_Turbine_31c4daf8_2_ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = Wind_Turbine_31c4daf8_2_ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = Wind_Turbine_31c4daf8_2_ds_tduicr_p;
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
  ds->mMethods[NE_DS_METHOD_DXY] = Wind_Turbine_31c4daf8_2_ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = ds_zc;
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
  ds->mMethods[NE_DS_METHOD_LOG] = Wind_Turbine_31c4daf8_2_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = Wind_Turbine_31c4daf8_2_ds_assert;
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
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = Wind_Turbine_31c4daf8_2_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = Wind_Turbine_31c4daf8_2_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = Wind_Turbine_31c4daf8_2_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = Wind_Turbine_31c4daf8_2_ds_obs_il;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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

static int32_T ds_f (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mF;
  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *sys, const NeDynamicSystemInput
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
  out.mNumCol = 5ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumRow = 6ULL;
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
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_a_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 6ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 6;
  out.mJc[2] = 6;
  out.mJc[3] = 6;
  out.mJc[4] = 6;
  out.mJc[5] = 6;
  out.mJc[6] = 12;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 0;
  out.mIr[7] = 1;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 4;
  out.mIr[11] = 5;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 6;
  out.mJc[2] = 12;
  out.mJc[3] = 13;
  out.mJc[4] = 14;
  out.mJc[5] = 15;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 0;
  out.mIr[7] = 1;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 4;
  out.mIr[11] = 5;
  out.mIr[12] = 1;
  out.mIr[13] = 1;
  out.mIr[14] = 5;
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
  out.mNumRow = 6ULL;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 6;
  out.mJc[2] = 12;
  out.mJc[3] = 13;
  out.mJc[4] = 14;
  out.mJc[5] = 15;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 0;
  out.mIr[7] = 1;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 4;
  out.mIr[11] = 5;
  out.mIr[12] = 1;
  out.mIr[13] = 1;
  out.mIr[14] = 5;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tdxf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 6ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 6;
  out.mJc[2] = 6;
  out.mJc[3] = 6;
  out.mJc[4] = 6;
  out.mJc[5] = 6;
  out.mJc[6] = 12;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 0;
  out.mIr[7] = 1;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 4;
  out.mIr[11] = 5;
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
  out.mNumRow = 6ULL;
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
  out.mNumCol = 16ULL;
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
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 18ULL;
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
  out.mX[5] = false;
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
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T P_R_idx_0;
  P_R_idx_0 = t1->mP_R.mX[0];
  out = t2->mIC;
  out.mX[0] = P_R_idx_0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 51ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 15;
  out.mJc[2] = 15;
  out.mJc[3] = 15;
  out.mJc[4] = 15;
  out.mJc[5] = 15;
  out.mJc[6] = 26;
  out.mIr[0] = 36;
  out.mIr[1] = 37;
  out.mIr[2] = 38;
  out.mIr[3] = 39;
  out.mIr[4] = 40;
  out.mIr[5] = 41;
  out.mIr[6] = 42;
  out.mIr[7] = 43;
  out.mIr[8] = 44;
  out.mIr[9] = 45;
  out.mIr[10] = 46;
  out.mIr[11] = 47;
  out.mIr[12] = 48;
  out.mIr[13] = 49;
  out.mIr[14] = 50;
  out.mIr[15] = 36;
  out.mIr[16] = 38;
  out.mIr[17] = 39;
  out.mIr[18] = 41;
  out.mIr[19] = 42;
  out.mIr[20] = 43;
  out.mIr[21] = 45;
  out.mIr[22] = 46;
  out.mIr[23] = 47;
  out.mIr[24] = 49;
  out.mIr[25] = 50;
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
  out.mNumRow = 51ULL;
  out.mJc[0] = 0;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 51ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
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
  out.mX[0] = -0.01;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 5;
  out.mIr[0] = 1;
  out.mIr[1] = 0;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
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
  out.mNumRow = 5ULL;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumRow = 5ULL;
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
  out.mNumCol = 16ULL;
  out.mNumRow = 5ULL;
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
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mode (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumRow = 6ULL;
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
  out.mNumRow = 6ULL;
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
  out.mX[5] = true;
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
  out.mX[5] = true;
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
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  U_idx_0 = t1->mU.mX[0];
  U_idx_1 = t1->mU.mX[1];
  X_idx_0 = t1->mX.mX[0];
  X_idx_1 = t1->mX.mX[1];
  X_idx_2 = t1->mX.mX[2];
  X_idx_3 = t1->mX.mX[3];
  X_idx_4 = t1->mX.mX[4];
  X_idx_5 = t1->mX.mX[5];
  out = t2->mY;
  U_idx_0 = (((X_idx_0 * 0.011111111111111115 + X_idx_5 * 2.1175823681357508E-22)
              + U_idx_0 * -4.3368086899420177E-19) + U_idx_1 *
             -4.3368086899420177E-19) * 0.33333333333333331;
  out.mX[0] = X_idx_1;
  out.mX[1] = U_idx_0;
  out.mX[2] = X_idx_2;
  out.mX[3] = U_idx_0;
  out.mX[4] = X_idx_3;
  out.mX[5] = U_idx_0;
  out.mX[6] = X_idx_4;
  out.mX[7] = U_idx_0;
  out.mX[8] = X_idx_5;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 5;
  out.mJc[3] = 6;
  out.mJc[4] = 7;
  out.mJc[5] = 8;
  out.mJc[6] = 13;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 5;
  out.mIr[3] = 7;
  out.mIr[4] = 0;
  out.mIr[5] = 2;
  out.mIr[6] = 4;
  out.mIr[7] = 6;
  out.mIr[8] = 1;
  out.mIr[9] = 3;
  out.mIr[10] = 5;
  out.mIr[11] = 7;
  out.mIr[12] = 8;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t5, NeDsMethodOutput *t6)
{
  PmRealVector out;
  real_T t0[8];
  real_T t1[4];
  real_T t2[4];
  real_T intermediate_der5;
  size_t t4;
  (void)t5;
  out = t6->mDUY;
  intermediate_der5 = -1.4456028966473392E-19;
  t1[0ULL] = intermediate_der5;
  t1[1ULL] = intermediate_der5;
  t1[2ULL] = intermediate_der5;
  t1[3ULL] = intermediate_der5;
  t2[0ULL] = intermediate_der5;
  t2[1ULL] = intermediate_der5;
  t2[2ULL] = intermediate_der5;
  t2[3ULL] = intermediate_der5;
  for (t4 = 0ULL; t4 < 4ULL; t4++) {
    t0[t4] = t1[t4];
  }

  for (t4 = 0ULL; t4 < 4ULL; t4++) {
    t0[t4 + 4ULL] = t2[t4];
  }

  out.mX[0] = t0[0];
  out.mX[1] = t0[1];
  out.mX[2] = t0[2];
  out.mX[3] = t0[3];
  out.mX[4] = t0[4];
  out.mX[5] = t0[5];
  out.mX[6] = t0[6];
  out.mX[7] = t0[7];
  (void)sys;
  (void)t6;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 8;
  out.mJc[3] = 8;
  out.mJc[4] = 8;
  out.mJc[5] = 8;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 5;
  out.mIr[3] = 7;
  out.mIr[4] = 1;
  out.mIr[5] = 3;
  out.mIr[6] = 5;
  out.mIr[7] = 7;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 8;
  out.mJc[3] = 8;
  out.mJc[4] = 8;
  out.mJc[5] = 8;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 5;
  out.mIr[3] = 7;
  out.mIr[4] = 1;
  out.mIr[5] = 3;
  out.mIr[6] = 5;
  out.mIr[7] = 7;
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
  out.mNumCol = 6ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 5;
  out.mJc[3] = 6;
  out.mJc[4] = 7;
  out.mJc[5] = 8;
  out.mJc[6] = 13;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 5;
  out.mIr[3] = 7;
  out.mIr[4] = 0;
  out.mIr[5] = 2;
  out.mIr[6] = 4;
  out.mIr[7] = 6;
  out.mIr[8] = 1;
  out.mIr[9] = 3;
  out.mIr[10] = 5;
  out.mIr[11] = 7;
  out.mIr[12] = 8;
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
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_zc (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}
