// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000030U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000031U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000032U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000033U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000030U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000031U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000032U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000033U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__2(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0bU][3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000034U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000035U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000036U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000037U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___act_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000034U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000035U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000036U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000037U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000034U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000035U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000036U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000037U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
}

void Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__2(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___nba_comb__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__2\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0cU][3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}
