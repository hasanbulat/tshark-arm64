/*
 * Do not modify this file. Changes will be overwritten.
 *
 * Generated automatically from ../../tools/make-dissector-reg.py.
 */

#include "config.h"

#include <gmodule.h>

#include "moduleinfo.h"

/* plugins are DLLs */
#define WS_BUILD_DLL
#include "ws_symbol_export.h"

#ifndef ENABLE_STATIC
WS_DLL_PUBLIC_DEF void plugin_register (void);
WS_DLL_PUBLIC_DEF const gchar version[] = VERSION;

/* Start the functions we need for the plugin stuff */

WS_DLL_PUBLIC_DEF void
plugin_register (void)
{
    {extern void proto_register_mac_header_generic (void); proto_register_mac_header_generic ();}
    {extern void proto_register_mac_header_type_1 (void); proto_register_mac_header_type_1 ();}
    {extern void proto_register_mac_header_type_2 (void); proto_register_mac_header_type_2 ();}
    {extern void proto_register_mac_mgmt_msg (void); proto_register_mac_mgmt_msg ();}
    {extern void proto_register_mac_mgmt_msg_aas_beam (void); proto_register_mac_mgmt_msg_aas_beam ();}
    {extern void proto_register_mac_mgmt_msg_aas_fbck (void); proto_register_mac_mgmt_msg_aas_fbck ();}
    {extern void proto_register_mac_mgmt_msg_arq_feedback (void); proto_register_mac_mgmt_msg_arq_feedback ();}
    {extern void proto_register_mac_mgmt_msg_clk_cmp (void); proto_register_mac_mgmt_msg_clk_cmp ();}
    {extern void proto_register_mac_mgmt_msg_dcd (void); proto_register_mac_mgmt_msg_dcd ();}
    {extern void proto_register_mac_mgmt_msg_dlmap (void); proto_register_mac_mgmt_msg_dlmap ();}
    {extern void proto_register_mac_mgmt_msg_dreg_cmd (void); proto_register_mac_mgmt_msg_dreg_cmd ();}
    {extern void proto_register_mac_mgmt_msg_dreg_req (void); proto_register_mac_mgmt_msg_dreg_req ();}
    {extern void proto_register_mac_mgmt_msg_dsa (void); proto_register_mac_mgmt_msg_dsa ();}
    {extern void proto_register_mac_mgmt_msg_dsc (void); proto_register_mac_mgmt_msg_dsc ();}
    {extern void proto_register_mac_mgmt_msg_dsd (void); proto_register_mac_mgmt_msg_dsd ();}
    {extern void proto_register_mac_mgmt_msg_dsx_rvd (void); proto_register_mac_mgmt_msg_dsx_rvd ();}
    {extern void proto_register_mac_mgmt_msg_fpc (void); proto_register_mac_mgmt_msg_fpc ();}
    {extern void proto_register_mac_mgmt_msg_pkm (void); proto_register_mac_mgmt_msg_pkm ();}
    {extern void proto_register_mac_mgmt_msg_pmc_req (void); proto_register_mac_mgmt_msg_pmc_req ();}
    {extern void proto_register_mac_mgmt_msg_pmc_rsp (void); proto_register_mac_mgmt_msg_pmc_rsp ();}
    {extern void proto_register_mac_mgmt_msg_prc_lt_ctrl (void); proto_register_mac_mgmt_msg_prc_lt_ctrl ();}
    {extern void proto_register_mac_mgmt_msg_reg_req (void); proto_register_mac_mgmt_msg_reg_req ();}
    {extern void proto_register_mac_mgmt_msg_reg_rsp (void); proto_register_mac_mgmt_msg_reg_rsp ();}
    {extern void proto_register_mac_mgmt_msg_rep (void); proto_register_mac_mgmt_msg_rep ();}
    {extern void proto_register_mac_mgmt_msg_res_cmd (void); proto_register_mac_mgmt_msg_res_cmd ();}
    {extern void proto_register_mac_mgmt_msg_rng_req (void); proto_register_mac_mgmt_msg_rng_req ();}
    {extern void proto_register_mac_mgmt_msg_rng_rsp (void); proto_register_mac_mgmt_msg_rng_rsp ();}
    {extern void proto_register_mac_mgmt_msg_sbc (void); proto_register_mac_mgmt_msg_sbc ();}
    {extern void proto_register_mac_mgmt_msg_ucd (void); proto_register_mac_mgmt_msg_ucd ();}
    {extern void proto_register_mac_mgmt_msg_ulmap (void); proto_register_mac_mgmt_msg_ulmap ();}
    {extern void proto_register_wimax (void); proto_register_wimax ();}
    {extern void proto_register_wimax_cdma (void); proto_register_wimax_cdma ();}
    {extern void proto_register_wimax_compact_dlmap_ie (void); proto_register_wimax_compact_dlmap_ie ();}
    {extern void proto_register_wimax_compact_ulmap_ie (void); proto_register_wimax_compact_ulmap_ie ();}
    {extern void proto_register_wimax_fch (void); proto_register_wimax_fch ();}
    {extern void proto_register_wimax_ffb (void); proto_register_wimax_ffb ();}
    {extern void proto_register_wimax_hack (void); proto_register_wimax_hack ();}
    {extern void proto_register_wimax_harq_map (void); proto_register_wimax_harq_map ();}
    {extern void proto_register_wimax_pdu (void); proto_register_wimax_pdu ();}
    {extern void proto_register_wimax_phy_attributes (void); proto_register_wimax_phy_attributes ();}
    {extern void proto_register_wimax_utility_decoders (void); proto_register_wimax_utility_decoders ();}
}

WS_DLL_PUBLIC_DEF void plugin_reg_handoff(void);

WS_DLL_PUBLIC_DEF void
plugin_reg_handoff(void)
{
    {extern void proto_reg_handoff_mac_header_generic (void); proto_reg_handoff_mac_header_generic ();}
    {extern void proto_reg_handoff_mac_mgmt_msg (void); proto_reg_handoff_mac_mgmt_msg ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_aas (void); proto_reg_handoff_mac_mgmt_msg_aas ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_aas_beam (void); proto_reg_handoff_mac_mgmt_msg_aas_beam ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_arq (void); proto_reg_handoff_mac_mgmt_msg_arq ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_clk_cmp (void); proto_reg_handoff_mac_mgmt_msg_clk_cmp ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_dcd (void); proto_reg_handoff_mac_mgmt_msg_dcd ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_dlmap (void); proto_reg_handoff_mac_mgmt_msg_dlmap ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_dreg (void); proto_reg_handoff_mac_mgmt_msg_dreg ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_dsa (void); proto_reg_handoff_mac_mgmt_msg_dsa ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_dsc (void); proto_reg_handoff_mac_mgmt_msg_dsc ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_dsd (void); proto_reg_handoff_mac_mgmt_msg_dsd ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_dsx_rvd (void); proto_reg_handoff_mac_mgmt_msg_dsx_rvd ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_fpc (void); proto_reg_handoff_mac_mgmt_msg_fpc ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_pkm (void); proto_reg_handoff_mac_mgmt_msg_pkm ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_pmc (void); proto_reg_handoff_mac_mgmt_msg_pmc ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_prc_lt_ctrl (void); proto_reg_handoff_mac_mgmt_msg_prc_lt_ctrl ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_reg_req (void); proto_reg_handoff_mac_mgmt_msg_reg_req ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_reg_rsp (void); proto_reg_handoff_mac_mgmt_msg_reg_rsp ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_rep (void); proto_reg_handoff_mac_mgmt_msg_rep ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_res_cmd (void); proto_reg_handoff_mac_mgmt_msg_res_cmd ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_rng_req (void); proto_reg_handoff_mac_mgmt_msg_rng_req ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_rng_rsp (void); proto_reg_handoff_mac_mgmt_msg_rng_rsp ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_sbc (void); proto_reg_handoff_mac_mgmt_msg_sbc ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_ucd (void); proto_reg_handoff_mac_mgmt_msg_ucd ();}
    {extern void proto_reg_handoff_mac_mgmt_msg_ulmap (void); proto_reg_handoff_mac_mgmt_msg_ulmap ();}
    {extern void proto_reg_handoff_wimax_pdu (void); proto_reg_handoff_wimax_pdu ();}
}
#endif
