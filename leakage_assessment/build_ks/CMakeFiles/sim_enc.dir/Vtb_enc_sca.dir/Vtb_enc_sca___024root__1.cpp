// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

void Vtb_enc_sca___024root___ico_sequent__TOP__1(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___ico_sequent__TOP__1\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_20;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_20 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_21;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_21 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_22;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_22 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_23;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_23 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_24;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_24 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_25;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_25 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_26;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_26 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_27;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_27 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_28;
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_28 = 0;
    // Body
    if ((0U == (IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__keysize))) {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[0U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.round_key[0U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[1U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.round_key[1U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[2U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.round_key[2U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[3U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.round_key[3U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[0U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.state_in[0U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[1U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.state_in[1U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[2U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.state_in[2U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[3U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.state_in[3U];
    } else if ((1U == (IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__keysize))) {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[0U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[0U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[1U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[1U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[2U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[2U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[3U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[3U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[0U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.state_in[0U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[1U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.state_in[1U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[2U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.state_in[2U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[3U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.state_in[3U];
    } else {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[0U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000038U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[1U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000039U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[2U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000003aU];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[3U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000003bU];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[0U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage
            [0x0dU][0U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[1U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage
            [0x0dU][1U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[2U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage
            [0x0dU][2U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[3U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage
            [0x0dU][3U];
    }
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__subw 
        = ((((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s3.sbox_out) 
             << 0x00000018U) | ((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s2.sbox_out) 
                                << 0x00000010U)) | 
           (((IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s1.sbox_out) 
             << 8U) | (IData)(vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s0.sbox_out)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__tap_state[3U];
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_20 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0U] >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [0U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [0U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0U]) ^ ((0xffffff00U 
                                         & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__subw) 
                                        ^ (0x00ffff00U 
                                           & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [0U] 
                                              >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__subw 
                                        ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                           [0U] >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_21 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [4U] >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [1U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [4U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [1U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [4U]) ^ ((0xffffff00U 
                                         & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw) 
                                        ^ (0x00ffff00U 
                                           & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [1U] 
                                              >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [4U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
                                        ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                           [1U] >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_22 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [8U] >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [2U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [8U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [2U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [8U]) ^ ((0xffffff00U 
                                         & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw) 
                                        ^ (0x00ffff00U 
                                           & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [2U] 
                                              >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [8U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
                                        ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                           [2U] >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_23 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0x0cU] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [3U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0x0cU] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [3U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0x0cU]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                                 [3U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0x0cU] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [3U] 
                                              >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_24 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0x10U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [4U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0x10U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [4U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0x10U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                                 [4U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0x10U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [4U] 
                                              >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_25 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0x14U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [5U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0x14U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [5U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0x14U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                                 [5U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0x14U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [5U] 
                                              >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_26 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0x18U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [6U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0x18U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [6U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0x18U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                                 [6U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0x18U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [6U] 
                                              >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_27 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0x1cU] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [7U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0x1cU] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [7U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0x1cU]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                                 [7U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0x1cU] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [7U] 
                                              >> 0x00000018U))))));
    tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_28 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0x20U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [8U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0x20U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [8U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0x20U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                                 [8U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0x20U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [8U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_29 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                             [0x24U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                   [9U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                              [0x24U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                 [9U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                               [0x24U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                                 [9U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                [0x24U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rcon
                                              [9U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_37 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [0x2aU] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [7U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [0x2aU] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [7U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [0x2aU]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                                 [7U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [0x2aU] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [7U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_30 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [0U] >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [0U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [0U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [0U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [0U]) ^ ((0xffffff00U 
                                         & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__subw) 
                                        ^ (0x00ffff00U 
                                           & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [0U] 
                                              >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [0U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__subw 
                                        ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                           [0U] >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_31 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [6U] >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [1U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [6U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [1U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [6U]) ^ ((0xffffff00U 
                                         & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw) 
                                        ^ (0x00ffff00U 
                                           & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [1U] 
                                              >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [6U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__subw 
                                        ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                           [1U] >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_32 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [0x0cU] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [2U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [0x0cU] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [2U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [0x0cU]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                                 [2U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [0x0cU] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [2U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_33 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [0x12U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [3U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [0x12U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [3U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [0x12U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                                 [3U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [0x12U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [3U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_34 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [0x18U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [4U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [0x18U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [4U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [0x18U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                                 [4U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [0x18U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [4U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_35 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [0x1eU] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [5U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [0x1eU] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [5U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [0x1eU]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                                 [5U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [0x1eU] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [5U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT____VdfgRegularize_hf8704a51_0_36 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                             [0x24U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                   [6U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                              [0x24U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                 [6U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                               [0x24U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                                 [6U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__col_reg
                                [0x24U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rcon
                                              [6U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_26 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                             [0U] >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                   [0U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                              [0U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                 [0U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                               [0U]) ^ ((0xffffff00U 
                                         & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw) 
                                        ^ (0x00ffff00U 
                                           & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                              [0U] 
                                              >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                [0U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__subw 
                                        ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                           [0U] >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_28 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                             [8U] >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                   [1U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                              [8U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                 [1U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                               [8U]) ^ ((0xffffff00U 
                                         & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw) 
                                        ^ (0x00ffff00U 
                                           & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                              [1U] 
                                              >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                [8U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__subw 
                                        ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                           [1U] >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_30 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                             [0x10U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                   [2U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                              [0x10U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                 [2U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                               [0x10U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                                 [2U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                [0x10U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                              [2U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_32 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                             [0x18U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                   [3U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                              [0x18U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                 [3U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                               [0x18U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                                 [3U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                [0x18U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                              [3U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_34 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                             [0x20U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                   [4U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                              [0x20U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                 [4U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                               [0x20U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                                 [4U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                [0x20U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                              [4U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_36 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                             [0x28U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                   [5U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                              [0x28U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                 [5U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                               [0x28U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                                 [5U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                [0x28U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                              [5U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_38 
        = ((((0x0000ff00U & ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                             [0x30U] 
                                             >> 0x00000010U)) 
                             ^ ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__subw 
                                                >> 0x00000010U)) 
                                ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                   [6U] << 8U)))) | 
             (0x000000ffU & ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                              [0x30U] >> 0x00000010U) 
                             ^ ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__subw 
                                 >> 0x00000010U) ^ 
                                (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                 [6U] >> 8U))))) << 0x00000010U) 
           | ((0x0000ff00U & ((0xffffff00U & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                               [0x30U]) ^ ((0xffffff00U 
                                            & vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__subw) 
                                           ^ (0x00ffff00U 
                                              & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                                 [6U] 
                                                 >> 8U))))) 
              | (0x000000ffU & (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                [0x30U] ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__subw 
                                           ^ (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rcon
                                              [6U] 
                                              >> 0x00000018U))))));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_in[3U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[4U] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_20;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_0 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_20 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [1U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[8U] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_21;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_2 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_21 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [5U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[0x0000000cU] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_22;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_4 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_22 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [9U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[0x00000010U] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_23;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_6 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_23 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [0x0dU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[0x00000014U] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_24;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_8 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_24 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [0x11U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[0x00000018U] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_25;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_10 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_25 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [0x15U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[0x0000001cU] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_26;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_12 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_26 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [0x19U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[0x00000020U] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_27;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_14 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_27 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [0x1dU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt[0x00000024U] 
        = tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_28;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_16 
        = (tb_enc_sca__DOT__ke__DOT__ke128__DOT____VdfgRegularize_h39b49a2e_0_28 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
           [0x21U]);
}
