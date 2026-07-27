// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001cU];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001dU];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001eU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000001fU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [6U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [6U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [6U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [6U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000020U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000021U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000022U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000023U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [7U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [7U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [7U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [7U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000024U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000025U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000026U];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000027U];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [8U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [8U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [8U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [8U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000028U];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000029U];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000002aU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000002bU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [9U][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [9U][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [9U][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [9U][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
    vlSelfRef.round_key[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000002cU];
    vlSelfRef.round_key[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000002dU];
    vlSelfRef.round_key[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000002eU];
    vlSelfRef.round_key[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000002fU];
    vlSelfRef.state_in[0U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0aU][0U];
    vlSelfRef.state_in[1U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0aU][1U];
    vlSelfRef.state_in[2U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0aU][2U];
    vlSelfRef.state_in[3U] = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__stage
        [0x0aU][3U];
    vlSelfRef.ark__DOT__round_key[0U] = vlSelfRef.round_key[0U];
    vlSelfRef.ark__DOT__round_key[1U] = vlSelfRef.round_key[1U];
    vlSelfRef.ark__DOT__round_key[2U] = vlSelfRef.round_key[2U];
    vlSelfRef.ark__DOT__round_key[3U] = vlSelfRef.round_key[3U];
    vlSelfRef.sb__DOT__state_in[0U] = vlSelfRef.state_in[0U];
    vlSelfRef.sb__DOT__state_in[1U] = vlSelfRef.state_in[1U];
    vlSelfRef.sb__DOT__state_in[2U] = vlSelfRef.state_in[2U];
    vlSelfRef.sb__DOT__state_in[3U] = vlSelfRef.state_in[3U];
}

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___stl_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__rst;
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

VL_ATTR_COLD void Vtb_enc_sca_ROUND___ctor_var_reset(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ctor_var_reset\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->round_key, __VscopeHash, 1111933415875835988ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->state_in, __VscopeHash, 8276830675781670612ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->state_out, __VscopeHash, 16606792248447486632ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->state_after_subbytes, __VscopeHash, 10815796532983686242ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->state_after_shift_rows, __VscopeHash, 4547533264203371948ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->state_after_mix_columns, __VscopeHash, 15748550390526510168ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->round_out, __VscopeHash, 17320128611039356184ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sb__DOT__state_in, __VscopeHash, 654611553881017549ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sb__DOT__state_out, __VscopeHash, 6715170916671245003ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sr__DOT__state_in, __VscopeHash, 13360794351356734984ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sr__DOT__state_out, __VscopeHash, 12629673501795234346ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->mc__DOT__state_in, __VscopeHash, 3734403201795048983ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->mc__DOT__state_out, __VscopeHash, 15173692299071162513ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11445689720499671317ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1227841450991030035ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11508995190695282876ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18202483797165295928ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15256959118861054964ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2570898221451803854ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15046353210587544635ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9853573100606259691ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4730061778638528636ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14032324873065854118ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4094326713049580992ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2519389110115275860ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8790836363139697953ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1513935005762952752ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7391069835235480547ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14212568002953484079ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8954375994271513739ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5372020798916816315ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16143733479335057080ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12646800805642009289ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8861947676470529089ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12045886142843540130ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6554439741304321640ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4404077186868610910ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3920477864949261832ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1989323293001818795ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11159042092501437688ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11130701378846388398ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9240109050538726079ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17474781287203991190ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15390858343665631457ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6310494037016720195ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12153979269072530772ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16981597185941188739ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8682303369020504098ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10380317442619346971ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9002702819924233919ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3620080684582178811ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3238316756248103089ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18080051296200597137ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13116736712593952131ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10842512970596319701ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8599695725791296357ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 325425236737142193ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12888249833743652302ull);
    vlSelf->mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17182341670727222174ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5064811516518373821ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12447781237041011294ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4351088540933993981ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5963936518052146423ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14750003897361218504ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8403928112914907026ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11114516322497456746ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15837057980771954980ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11060897278405898979ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12334512119928828568ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5134319809165695712ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3815152320856641733ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8028740128878306568ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2779381803896056026ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7376555209622579655ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11727395516131837733ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15001662822188588188ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13702315566551663753ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18175970958188653394ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9997394114971473225ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7889901521134376138ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16330840769557737161ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14999395640137125229ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10435063053955795705ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5352187704380914935ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10397244462247236213ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7838129355717382511ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13770029045644471305ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13402748596830807703ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10536210548883993751ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15022527270838620627ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3433031286917035342ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7246895097283808992ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16195067341644759154ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3198440172612631341ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8185434445546683490ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18093679482885335154ull);
    vlSelf->mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1961450752136034842ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12883208962639545851ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15011633535405739466ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13140319656226380138ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15050841496236183865ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8889229545142216312ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7009762234171166036ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12078475600969991965ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 260796940653017840ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14820920783134442083ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15930481044505279057ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6139595246207393958ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3785129194769004982ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2728966067840286374ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14430283047255690723ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13851464422019765305ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11241448091786908815ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12447698236228716893ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15514612944170962473ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10915592905683014338ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4100548201663479966ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3831324363477574009ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1281779772676652690ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17937505761874353850ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4048579128102415467ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12781311200143318669ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802650153910756735ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16688230159797753875ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16144604691535281814ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6899752275866004152ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6923848289518206898ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3054262144618482822ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6112490666138860367ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12856002764239403557ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14131868867003217608ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17564850310164163080ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17660726152942831598ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3943673430086178323ull);
    vlSelf->mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8979250647186234786ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12881410437117744184ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 47363658243205528ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2672580926056828545ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15253125259783322633ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2212151089886890054ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10064512012858921470ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9608829888133848841ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14703567550793850210ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16669695915764394362ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17713851532566857101ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2405060830444875372ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12297704676298518846ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6816765461972272042ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12148022287593523996ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15112565349256765685ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16848083063525492075ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4373664779640456792ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10167560197742005224ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 773909967792076947ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 72953250416289064ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1044721107627814500ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17563099848765423769ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12509786538494495643ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18070613240605233836ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17712060085636671099ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5925686776506796189ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16611660215253524772ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9338109169774171943ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8073942748158519333ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10915067423920925615ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5136245854499094138ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2153092961044529962ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13349728146196942548ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16339078187438245017ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5296270062464537531ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2946041203292603756ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8473763181363569424ull);
    vlSelf->mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13356175137990352210ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ark__DOT__state_in, __VscopeHash, 1407567053325075230ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ark__DOT__round_key, __VscopeHash, 12548495278043709991ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ark__DOT__state_out, __VscopeHash, 18252439823626101048ull);
}
