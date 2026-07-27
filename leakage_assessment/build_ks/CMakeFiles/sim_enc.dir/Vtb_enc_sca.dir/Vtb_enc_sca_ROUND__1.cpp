// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[4U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[5U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[6U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[7U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[4U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[5U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[6U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[7U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
}

void Vtb_enc_sca_ROUND___nba_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.state_out[0U] = 0U;
        vlSelfRef.state_out[1U] = 0U;
        vlSelfRef.state_out[2U] = 0U;
        vlSelfRef.state_out[3U] = 0U;
    } else {
        vlSelfRef.state_out[0U] = vlSelfRef.round_out[0U];
        vlSelfRef.state_out[1U] = vlSelfRef.round_out[1U];
        vlSelfRef.state_out[2U] = vlSelfRef.round_out[2U];
        vlSelfRef.state_out[3U] = vlSelfRef.round_out[3U];
    }
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__2(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0U][3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[8U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[9U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000aU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000bU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[8U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[9U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000aU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000bU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[8U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[9U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000aU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000bU];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__2(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [1U][3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000cU];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000dU];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000eU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000fU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000cU];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000dU];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000eU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000fU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000cU];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000dU];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000eU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000000fU];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__2(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [2U][3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000010U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000011U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000012U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000013U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000010U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000011U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000012U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000013U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000010U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000011U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000012U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000013U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__2(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [3U][3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000014U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000015U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000016U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000017U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000014U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000015U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000016U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000017U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000014U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000015U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000016U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000017U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__2(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [4U][3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000018U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000019U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001aU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001bU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000018U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000019U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001aU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001bU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [5U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}
