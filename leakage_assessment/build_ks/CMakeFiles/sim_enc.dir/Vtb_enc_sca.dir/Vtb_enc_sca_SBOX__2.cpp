// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0;

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx202;
    __Vtableidx202 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx202 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx202];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx203;
    __Vtableidx203 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx203 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx203];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx204;
    __Vtableidx204 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx204 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx204];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx205;
    __Vtableidx205 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx205 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx205];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx206;
    __Vtableidx206 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx206 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx206];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx207;
    __Vtableidx207 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx207 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx207];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx208;
    __Vtableidx208 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx208 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx208];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx209;
    __Vtableidx209 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx209 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx209];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx210;
    __Vtableidx210 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx210 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx210];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx211;
    __Vtableidx211 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx211 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx211];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx212;
    __Vtableidx212 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx212 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx212];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx213;
    __Vtableidx213 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx213 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx213];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx214;
    __Vtableidx214 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx214 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx214];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx215;
    __Vtableidx215 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx215 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx215];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx216;
    __Vtableidx216 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx216 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx216];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx217;
    __Vtableidx217 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx217 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx217];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx218;
    __Vtableidx218 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx218 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx218];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx219;
    __Vtableidx219 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx219 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx219];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx220;
    __Vtableidx220 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx220 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx220];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx221;
    __Vtableidx221 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx221 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx221];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx222;
    __Vtableidx222 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx222 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx222];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx223;
    __Vtableidx223 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx223 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx223];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx224;
    __Vtableidx224 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx224 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx224];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx225;
    __Vtableidx225 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx225 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx225];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx226;
    __Vtableidx226 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx226 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx226];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx227;
    __Vtableidx227 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx227 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx227];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx228;
    __Vtableidx228 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx228 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx228];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx229;
    __Vtableidx229 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx229 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx229];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx230;
    __Vtableidx230 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx230 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx230];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx231;
    __Vtableidx231 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx231 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx231];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx232;
    __Vtableidx232 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx232 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx232];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx233;
    __Vtableidx233 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx233 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx233];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx234;
    __Vtableidx234 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx234 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx234];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx235;
    __Vtableidx235 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx235 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx235];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx236;
    __Vtableidx236 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx236 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx236];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx237;
    __Vtableidx237 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx237 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx237];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx238;
    __Vtableidx238 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx238 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx238];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx239;
    __Vtableidx239 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx239 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx239];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx240;
    __Vtableidx240 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx240 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx240];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx241;
    __Vtableidx241 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx241 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx241];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx242;
    __Vtableidx242 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx242 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx242];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx243;
    __Vtableidx243 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx243 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx243];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx244;
    __Vtableidx244 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx244 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx244];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx245;
    __Vtableidx245 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx245 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx245];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx246;
    __Vtableidx246 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx246 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx246];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx247;
    __Vtableidx247 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx247 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx247];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx248;
    __Vtableidx248 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx248 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx248];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx249;
    __Vtableidx249 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx249 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx249];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx250;
    __Vtableidx250 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx250 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx250];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx251;
    __Vtableidx251 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx251 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx251];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx252;
    __Vtableidx252 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx252 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx252];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx253;
    __Vtableidx253 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx253 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx253];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx254;
    __Vtableidx254 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx254 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx254];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx255;
    __Vtableidx255 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx255 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx255];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx256;
    __Vtableidx256 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx256 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx256];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx257;
    __Vtableidx257 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx257 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx257];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx258;
    __Vtableidx258 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx258 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx258];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx259;
    __Vtableidx259 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx259 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx259];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx260;
    __Vtableidx260 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx260 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx260];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx261;
    __Vtableidx261 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx261 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx261];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx262;
    __Vtableidx262 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx262 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx262];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx263;
    __Vtableidx263 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx263 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx263];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx264;
    __Vtableidx264 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx264 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx264];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx265;
    __Vtableidx265 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx265 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx265];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx266;
    __Vtableidx266 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx266 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx266];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx267;
    __Vtableidx267 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx267 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx267];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx268;
    __Vtableidx268 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx268 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx268];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx269;
    __Vtableidx269 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx269 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx269];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx270;
    __Vtableidx270 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx270 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx270];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx271;
    __Vtableidx271 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx271 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx271];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx272;
    __Vtableidx272 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx272 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx272];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx273;
    __Vtableidx273 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx273 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx273];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx274;
    __Vtableidx274 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx274 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx274];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx275;
    __Vtableidx275 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx275 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx275];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx276;
    __Vtableidx276 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx276 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx276];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx277;
    __Vtableidx277 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx277 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx277];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx278;
    __Vtableidx278 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx278 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx278];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx279;
    __Vtableidx279 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx279 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx279];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx280;
    __Vtableidx280 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx280 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx280];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx281;
    __Vtableidx281 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx281 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx281];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx282;
    __Vtableidx282 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx282 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx282];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx283;
    __Vtableidx283 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx283 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx283];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx284;
    __Vtableidx284 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx284 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx284];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx285;
    __Vtableidx285 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx285 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx285];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx286;
    __Vtableidx286 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx286 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx286];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx287;
    __Vtableidx287 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx287 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx287];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx288;
    __Vtableidx288 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx288 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx288];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx289;
    __Vtableidx289 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx289 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx289];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx290;
    __Vtableidx290 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx290 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx290];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx291;
    __Vtableidx291 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx291 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx291];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx292;
    __Vtableidx292 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx292 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx292];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx293;
    __Vtableidx293 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx293 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx293];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx294;
    __Vtableidx294 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx294 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx294];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx295;
    __Vtableidx295 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx295 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx295];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx296;
    __Vtableidx296 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx296 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx296];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx297;
    __Vtableidx297 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx297 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx297];
}
