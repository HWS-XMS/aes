// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0;

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx298;
    __Vtableidx298 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx298 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx298];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx299;
    __Vtableidx299 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx299 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx299];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx300;
    __Vtableidx300 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx300 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx300];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx301;
    __Vtableidx301 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx301 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx301];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx302;
    __Vtableidx302 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx302 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx302];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx303;
    __Vtableidx303 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx303 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx303];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx304;
    __Vtableidx304 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx304 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx304];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx305;
    __Vtableidx305 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx305 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx305];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx306;
    __Vtableidx306 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx306 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx306];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx307;
    __Vtableidx307 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx307 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx307];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx308;
    __Vtableidx308 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx308 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx308];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx309;
    __Vtableidx309 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx309 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx309];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx310;
    __Vtableidx310 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx310 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx310];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx311;
    __Vtableidx311 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx311 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx311];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx312;
    __Vtableidx312 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx312 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx312];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx313;
    __Vtableidx313 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx313 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx313];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx314;
    __Vtableidx314 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx314 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx314];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx315;
    __Vtableidx315 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx315 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx315];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx316;
    __Vtableidx316 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx316 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx316];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx317;
    __Vtableidx317 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx317 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx317];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx318;
    __Vtableidx318 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx318 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx318];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx319;
    __Vtableidx319 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx319 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx319];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx320;
    __Vtableidx320 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx320 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx320];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx321;
    __Vtableidx321 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx321 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx321];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx322;
    __Vtableidx322 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx322 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx322];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx323;
    __Vtableidx323 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx323 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx323];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx324;
    __Vtableidx324 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx324 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx324];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx325;
    __Vtableidx325 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx325 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx325];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx326;
    __Vtableidx326 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx326 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx326];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx327;
    __Vtableidx327 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx327 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx327];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx328;
    __Vtableidx328 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx328 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx328];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx329;
    __Vtableidx329 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx329 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx329];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx330;
    __Vtableidx330 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx330 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx330];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx331;
    __Vtableidx331 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx331 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx331];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx332;
    __Vtableidx332 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx332 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx332];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx333;
    __Vtableidx333 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[0U]);
    __Vtableidx333 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx333];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx334;
    __Vtableidx334 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx334 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx334];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx335;
    __Vtableidx335 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx335 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx335];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx336;
    __Vtableidx336 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx336 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx336];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx337;
    __Vtableidx337 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[1U]);
    __Vtableidx337 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx337];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx338;
    __Vtableidx338 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx338 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx338];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx339;
    __Vtableidx339 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx339 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx339];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx340;
    __Vtableidx340 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx340 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx340];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx341;
    __Vtableidx341 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[2U]);
    __Vtableidx341 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx341];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx342;
    __Vtableidx342 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx342 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx342];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx343;
    __Vtableidx343 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx343 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx343];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx344;
    __Vtableidx344 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx344 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx344];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx345;
    __Vtableidx345 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[3U]);
    __Vtableidx345 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx345];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx346;
    __Vtableidx346 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx346 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx346];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx347;
    __Vtableidx347 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx347 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx347];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx348;
    __Vtableidx348 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx348 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx348];
}
