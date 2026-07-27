// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0;

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx1 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx1];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx2 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx2];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx3 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx3];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx4 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx4];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx5 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx5];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx6 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx6];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx7 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx7];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx8 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx8];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx9 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx9];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx10 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx10];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx11 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx11];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx12 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx12];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx13 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx13];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx14 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx14];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx15 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx15];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx16 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx16];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx17 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx17];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx18 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx18];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx19 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx19];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx20 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx20];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx21 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx21];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx22 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx22];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx23 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx23];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx24 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx24];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx25 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx25];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx26 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx26];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx27 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx27];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx28 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx28];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx29 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx29];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx30 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx30];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx31 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx31];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx32 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx32];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx33 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx33];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx34 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx34];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx35 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx35];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx36 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx36];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx37 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx37];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx38 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx38];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx39 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx39];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx40 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx40];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx41 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx41];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx42 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx42];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx43 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx43];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx44 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx44];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx45 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx45];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx46 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx46];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx47 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx47];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx48 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx48];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx49 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx49];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx50 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx50];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx51 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx51];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx52 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx52];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx53 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx53];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx54 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx54];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx55 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx55];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx56 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx56];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx57 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx57];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx58 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx58];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx59 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx59];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx60 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx60];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx61 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx61];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx62 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx62];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx63 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx63];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx64 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx64];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx65 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx65];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx66 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx66];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx67 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx67];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx68 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx68];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx69 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx69];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx70 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx70];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx71 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx71];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx72 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx72];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx73 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx73];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx74 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx74];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx75;
    __Vtableidx75 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx75 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx75];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx76 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx76];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx77;
    __Vtableidx77 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x0bU]);
    __Vtableidx77 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx77];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx78;
    __Vtableidx78 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x0bU] >> 8U));
    __Vtableidx78 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx78];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x0bU] >> 0x00000010U));
    __Vtableidx79 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx79];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx80;
    __Vtableidx80 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x0bU] >> 0x00000018U);
    __Vtableidx80 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx80];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx81;
    __Vtableidx81 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx81 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx81];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx82;
    __Vtableidx82 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx82 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx82];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx83 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx83];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx84;
    __Vtableidx84 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx84 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx84];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx85;
    __Vtableidx85 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x13U]);
    __Vtableidx85 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx85];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x13U] >> 8U));
    __Vtableidx86 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx86];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx87;
    __Vtableidx87 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x13U] >> 0x00000010U));
    __Vtableidx87 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx87];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx88;
    __Vtableidx88 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x13U] >> 0x00000018U);
    __Vtableidx88 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx88];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx89;
    __Vtableidx89 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx89 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx89];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx90;
    __Vtableidx90 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx90 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx90];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx91;
    __Vtableidx91 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx91 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx91];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx92;
    __Vtableidx92 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx92 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx92];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx93;
    __Vtableidx93 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x1bU]);
    __Vtableidx93 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx93];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx94;
    __Vtableidx94 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x1bU] >> 8U));
    __Vtableidx94 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx94];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx95;
    __Vtableidx95 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x1bU] >> 0x00000010U));
    __Vtableidx95 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx95];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx96;
    __Vtableidx96 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x1bU] >> 0x00000018U);
    __Vtableidx96 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx96];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx97;
    __Vtableidx97 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx97 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx97];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx98;
    __Vtableidx98 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx98 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx98];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx99;
    __Vtableidx99 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx99 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx99];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx100;
    __Vtableidx100 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx100 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx100];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx101;
    __Vtableidx101 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x23U]);
    __Vtableidx101 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx101];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx102;
    __Vtableidx102 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x23U] >> 8U));
    __Vtableidx102 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx102];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx103;
    __Vtableidx103 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x23U] >> 0x00000010U));
    __Vtableidx103 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx103];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx104;
    __Vtableidx104 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x23U] >> 0x00000018U);
    __Vtableidx104 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx104];
}
