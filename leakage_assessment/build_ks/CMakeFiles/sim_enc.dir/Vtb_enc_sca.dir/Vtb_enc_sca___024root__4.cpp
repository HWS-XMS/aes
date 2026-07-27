// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

void Vtb_enc_sca___024root___act_comb__TOP__1(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_comb__TOP__1\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
}

void Vtb_enc_sca___024root___act_sequent__TOP__0(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_sequent__TOP__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__clk = vlSelfRef.tb_enc_sca__DOT__clk;
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__clk = vlSelfRef.tb_enc_sca__DOT__clk;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__clk 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__clk;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__clk 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__clk;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__clk 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__clk;
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__clk 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__clk;
}

void Vtb_enc_sca___024root___act_sequent__TOP__1(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_sequent__TOP__1\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_2;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_2 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_3;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_3 = 0;
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000000cU] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_27;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_2 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_27 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [5U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000000dU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_2;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_3 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_2 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [6U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000000eU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_3;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000000fU] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_3 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [7U]);
}

void Vtb_enc_sca___024root___act_sequent__TOP__2(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_sequent__TOP__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_6;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_6 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_7;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_7 = 0;
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000014U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_29;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_6 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_29 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x0dU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000015U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_6;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_7 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_6 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x0eU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000016U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_7;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000017U] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_7 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x0fU]);
}

void Vtb_enc_sca___024root___act_sequent__TOP__3(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_sequent__TOP__3\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_10;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_10 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_11;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_11 = 0;
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000001cU] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_31;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_10 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_31 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x15U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000001dU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_10;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_11 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_10 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x16U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000001eU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_11;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000001fU] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_11 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x17U]);
}

void Vtb_enc_sca___024root___act_sequent__TOP__4(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_sequent__TOP__4\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_14;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_14 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_15;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_15 = 0;
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000024U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_33;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_14 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_33 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x1dU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000025U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_14;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_15 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_14 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x1eU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000026U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_15;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000027U] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_15 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x1fU]);
}

void Vtb_enc_sca___024root___act_sequent__TOP__5(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_sequent__TOP__5\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_18;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_18 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_19;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_19 = 0;
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000002cU] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_35;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_18 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_35 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x25U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000002dU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_18;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_19 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_18 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x26U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000002eU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_19;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000002fU] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_19 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x27U]);
}

void Vtb_enc_sca___024root___act_sequent__TOP__6(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___act_sequent__TOP__6\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_22;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_22 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_23;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_23 = 0;
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000034U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_37;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_22 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_37 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x2dU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000035U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_22;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_23 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_22 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x2eU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000036U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_23;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000037U] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_23 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x2fU]);
}

void Vtb_enc_sca___024root___act_comb__TOP__0(Vtb_enc_sca___024root* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca___024root___ico_sequent__TOP__3(Vtb_enc_sca___024root* vlSelf);
void Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf);
void Vtb_enc_sca___024root___ico_comb__TOP__6(Vtb_enc_sca___024root* vlSelf);

void Vtb_enc_sca___024root___eval_act(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___eval_act\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000003000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtb_enc_sca___024root___act_comb__TOP__0(vlSelf);
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca___024root___act_comb__TOP__1(vlSelf);
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell));
        Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i));
        Vtb_enc_sca___024root___ico_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtb_enc_sca___024root___act_sequent__TOP__0(vlSelf);
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i));
        Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0((&vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i));
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_enc_sca___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_enc_sca___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_enc_sca___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_enc_sca___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtb_enc_sca___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtb_enc_sca___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x000000000300003fULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s0__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s0));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s1__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s1));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s2__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s2));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s3__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s3));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s0__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s0));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s1__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s1));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s2__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s2));
        Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s3__0((&vlSymsp->TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s3));
        Vtb_enc_sca___024root___ico_comb__TOP__6(vlSelf);
    }
}

void Vtb_enc_sca___024root___nba_sequent__TOP__0(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_sequent__TOP__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__vpipe = ((IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__rst)
                                                   ? 0U
                                                   : 
                                                  ((0x00003ffeU 
                                                    & ((IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__vpipe) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__in_valid)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__out_valid 
        = (1U & ((0U == (IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__keysize))
                  ? ((IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__vpipe) 
                     >> 9U) : ((1U == (IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__keysize))
                                ? ((IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__vpipe) 
                                   >> 0x0000000bU) : 
                               ((IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__vpipe) 
                                >> 0x0000000dU))));
    vlSelfRef.tb_enc_sca__DOT__out_valid = vlSelfRef.tb_enc_sca__DOT__dut__DOT__out_valid;
}

void Vtb_enc_sca___024root___nba_sequent__TOP__1(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_sequent__TOP__1\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh;
    __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh = 0;
    CData/*0:0*/ __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready;
    __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v0;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v1;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v2;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v3;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v4;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v5;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v6;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v7;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v8;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v9;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v10;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v11;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v12;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v13;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v14;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v15;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v16;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v17;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v17 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v18;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v19;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v19 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v20;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v20 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v21;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v22;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v23;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v23 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v24;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v25;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v26;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v27;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v28;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v28 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v29;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v29 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v30;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v31;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v31 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v32;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v32 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v33;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v33 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v34;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v34 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v35;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v35 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v36;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v36 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v37;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v37 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v38;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v38 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v39;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v39 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v40;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v40 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v41;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v41 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v42;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v42 = 0;
    IData/*31:0*/ __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v43;
    __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v43 = 0;
    // Body
    __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh;
    __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready;
    if (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rst) {
        __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh = 0U;
        __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v0 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v1 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v2 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v3 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v4 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v5 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v6 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v7 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v8 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v9 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v10 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v11 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v12 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v13 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v14 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v15 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v16 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v17 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v18 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v19 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v20 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v21 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v22 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v23 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v24 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v25 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v26 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v27 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v28 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v29 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v30 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v31 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v32 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v33 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v34 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v35 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v36 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v37 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v38 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v39 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v40 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v41 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v42 = 0U;
        __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v43 = 0U;
    } else {
        __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh 
            = ((0x000007feU & ((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh) 
                               << 1U)) | (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_valid));
        __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready 
            = ((1U & (~ (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_valid))) 
               && ((1U & ((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh) 
                          >> 0x0aU)) || (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready)));
        if (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_valid) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v0 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v1 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [1U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v2 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [2U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v3 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [3U];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v0 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v1 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [1U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v2 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [2U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v3 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [3U];
        }
        if ((1U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v4 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [4U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v5 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [5U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v6 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [6U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v7 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [7U];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v4 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [4U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v5 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [5U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v6 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [6U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v7 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [7U];
        }
        if ((2U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v8 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [8U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v9 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [9U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v10 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x0aU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v11 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x0bU];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v8 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [8U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v9 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [9U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v10 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x0aU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v11 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x0bU];
        }
        if ((4U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v12 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x0cU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v13 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x0dU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v14 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x0eU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v15 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x0fU];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v12 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x0cU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v13 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x0dU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v14 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x0eU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v15 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x0fU];
        }
        if ((8U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v16 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x10U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v17 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x11U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v18 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x12U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v19 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x13U];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v16 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x10U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v17 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x11U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v18 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x12U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v19 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x13U];
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v20 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x14U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v21 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x15U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v22 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x16U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v23 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x17U];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v20 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x14U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v21 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x15U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v22 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x16U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v23 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x17U];
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v24 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x18U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v25 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x19U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v26 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x1aU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v27 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x1bU];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v24 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x18U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v25 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x19U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v26 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x1aU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v27 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x1bU];
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v28 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x1cU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v29 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x1dU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v30 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x1eU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v31 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x1fU];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v28 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x1cU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v29 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x1dU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v30 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x1eU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v31 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x1fU];
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v32 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x20U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v33 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x21U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v34 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x22U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v35 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x23U];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v32 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x20U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v33 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x21U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v34 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x22U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v35 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x23U];
        }
        if ((0x00000100U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v36 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x24U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v37 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x25U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v38 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x26U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v39 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x27U];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v36 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x24U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v37 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x25U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v38 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x26U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v39 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x27U];
        }
        if ((0x00000200U & (IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh))) {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v40 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x28U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v41 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x29U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v42 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x2aU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v43 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_nxt
                [0x2bU];
        } else {
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v40 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x28U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v41 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x29U];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v42 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x2aU];
            __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v43 
                = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                [0x2bU];
        }
    }
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready 
        = __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh 
        = __Vdly__tb_enc_sca__DOT__ke__DOT__ke128__DOT__sh;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v0;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[1U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v1;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[2U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v2;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[3U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v3;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[4U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v4;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[5U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v5;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[6U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v6;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[7U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v7;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[8U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v8;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[9U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v9;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x0aU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v10;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x0bU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v11;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x0cU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v12;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x0dU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v13;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x0eU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v14;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x0fU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v15;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x10U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v16;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x11U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v17;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x12U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v18;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x13U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v19;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x14U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v20;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x15U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v21;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x16U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v22;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x17U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v23;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x18U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v24;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x19U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v25;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x1aU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v26;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x1bU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v27;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x1cU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v28;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x1dU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v29;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x1eU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v30;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x1fU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v31;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x20U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v32;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x21U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v33;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x22U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v34;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x23U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v35;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x24U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v36;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x25U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v37;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x26U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v38;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x27U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v39;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x28U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v40;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x29U] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v41;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x2aU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v42;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg[0x2bU] 
        = __VdlyVal__tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg__v43;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__kr128 = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_ready;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [2U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [1U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [2U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [1U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[3U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [3U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [5U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [4U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [5U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [4U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[6U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [6U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [8U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [7U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [8U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [7U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[9U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [9U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000000aU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x0bU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x0aU]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000000bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x0bU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x0aU]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000000cU] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x0cU];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000000dU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x0eU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x0dU]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000000eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x0eU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x0dU]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000000fU] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x0fU];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000010U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x11U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x10U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000011U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x11U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x10U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000012U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x12U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000013U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x14U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x13U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000014U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x14U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x13U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000015U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x15U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000016U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x17U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x16U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000017U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x17U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x16U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000018U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x18U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000019U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x1aU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x19U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000001aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x1aU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x19U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000001bU] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x1bU];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000001cU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x1dU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x1cU]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000001dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x1dU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x1cU]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000001eU] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x1eU];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000001fU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x20U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x1fU]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000020U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x20U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x1fU]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000021U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x21U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000022U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x23U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x22U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000023U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x23U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x22U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000024U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x24U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000025U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x26U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x25U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000026U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x26U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x25U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000027U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
        [0x27U];
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000028U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x29U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x28U]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x00000029U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x29U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x28U]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000002aU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [0x2bU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x2aU]))));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[0x0000002bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                     [0x2bU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                      [0x2aU]))) >> 0x00000020U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [3U] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [3U] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [7U] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                    [7U] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x0bU] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x0bU] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x0fU] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x0fU] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x13U] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x13U] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x17U] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x17U] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x1bU] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x1bU] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x1fU] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x1fU] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x23U] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x23U] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
            [0x27U] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__col_reg
                                       [0x27U] >> 8U));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000002bU)) {
        vlSelfRef.tb_enc_sca__DOT__ke__DOT__round_keys_128[__Vilp1] 
            = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__round_keys[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000002bU)) {
        vlSelfRef.tb_enc_sca__DOT__rk128[__Vilp2] = 
            vlSelfRef.tb_enc_sca__DOT__ke__DOT__round_keys_128[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
}
