// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0;

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx105;
    __Vtableidx105 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx105 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx105];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx106;
    __Vtableidx106 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx106 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx106];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx107;
    __Vtableidx107 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx107 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx107];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx108;
    __Vtableidx108 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx108 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx108];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx109;
    __Vtableidx109 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x2bU]);
    __Vtableidx109 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx109];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx110;
    __Vtableidx110 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x2bU] >> 8U));
    __Vtableidx110 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx110];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx111;
    __Vtableidx111 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x2bU] >> 0x00000010U));
    __Vtableidx111 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx111];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx112;
    __Vtableidx112 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x2bU] >> 0x00000018U);
    __Vtableidx112 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx112];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx113;
    __Vtableidx113 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx113 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx113];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx114;
    __Vtableidx114 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx114 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx114];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx115;
    __Vtableidx115 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx115 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx115];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx116;
    __Vtableidx116 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx116 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx116];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx117;
    __Vtableidx117 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x33U]);
    __Vtableidx117 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx117];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx118;
    __Vtableidx118 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x33U] >> 8U));
    __Vtableidx118 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx118];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx119;
    __Vtableidx119 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                                        [0x33U] >> 0x00000010U));
    __Vtableidx119 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx119];
}

void Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_comb__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx120;
    __Vtableidx120 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt
                         [0x33U] >> 0x00000018U);
    __Vtableidx120 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx120];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s0__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s0__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx121;
    __Vtableidx121 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__rotw);
    __Vtableidx121 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx121];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s1__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s1__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx122;
    __Vtableidx122 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__rotw 
                                        >> 8U));
    __Vtableidx122 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx122];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s2__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s2__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx123;
    __Vtableidx123 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__rotw 
                                        >> 0x00000010U));
    __Vtableidx123 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx123];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s3__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s3__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx124;
    __Vtableidx124 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__rotw 
                         >> 0x00000018U);
    __Vtableidx124 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx124];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx125;
    __Vtableidx125 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx125 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx125];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx126;
    __Vtableidx126 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx126 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx126];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx127;
    __Vtableidx127 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx127 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx127];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx128;
    __Vtableidx128 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx128 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx128];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx129;
    __Vtableidx129 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx129 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx129];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx130;
    __Vtableidx130 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx130 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx130];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx131;
    __Vtableidx131 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx131 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx131];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx132;
    __Vtableidx132 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx132 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx132];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx133;
    __Vtableidx133 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx133 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx133];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx134;
    __Vtableidx134 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx134 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx134];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx135;
    __Vtableidx135 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx135 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx135];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx136;
    __Vtableidx136 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx136 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx136];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx137;
    __Vtableidx137 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx137 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx137];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx138;
    __Vtableidx138 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx138 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx138];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx139;
    __Vtableidx139 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx139 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx139];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx140;
    __Vtableidx140 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx140 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx140];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx141;
    __Vtableidx141 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx141 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx141];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx142;
    __Vtableidx142 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx142 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx142];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx143;
    __Vtableidx143 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx143 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx143];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx144;
    __Vtableidx144 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx144 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx144];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx145;
    __Vtableidx145 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx145 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx145];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx146;
    __Vtableidx146 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx146 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx146];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx147;
    __Vtableidx147 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx147 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx147];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx148;
    __Vtableidx148 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx148 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx148];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx149;
    __Vtableidx149 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx149 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx149];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx150;
    __Vtableidx150 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx150 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx150];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx151;
    __Vtableidx151 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx151 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx151];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx152;
    __Vtableidx152 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx152 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx152];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx153;
    __Vtableidx153 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx153 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx153];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx154;
    __Vtableidx154 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx154 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx154];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx155;
    __Vtableidx155 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx155 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx155];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx156;
    __Vtableidx156 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx156 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx156];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx157;
    __Vtableidx157 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx157 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx157];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx158;
    __Vtableidx158 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx158 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx158];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx159;
    __Vtableidx159 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx159 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx159];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx160;
    __Vtableidx160 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx160 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx160];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx161;
    __Vtableidx161 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx161 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx161];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx162;
    __Vtableidx162 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx162 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx162];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx163;
    __Vtableidx163 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx163 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx163];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx164;
    __Vtableidx164 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx164 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx164];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx165;
    __Vtableidx165 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx165 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx165];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx166;
    __Vtableidx166 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx166 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx166];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx167;
    __Vtableidx167 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx167 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx167];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx168;
    __Vtableidx168 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx168 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx168];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx169;
    __Vtableidx169 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx169 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx169];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx170;
    __Vtableidx170 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx170 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx170];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx171;
    __Vtableidx171 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx171 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx171];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx172;
    __Vtableidx172 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx172 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx172];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx173;
    __Vtableidx173 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx173 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx173];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx174;
    __Vtableidx174 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx174 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx174];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx175;
    __Vtableidx175 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx175 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx175];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx176;
    __Vtableidx176 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx176 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx176];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx177;
    __Vtableidx177 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx177 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx177];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx178;
    __Vtableidx178 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx178 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx178];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx179;
    __Vtableidx179 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx179 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx179];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx180;
    __Vtableidx180 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx180 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx180];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx181;
    __Vtableidx181 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx181 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx181];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx182;
    __Vtableidx182 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx182 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx182];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx183;
    __Vtableidx183 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx183 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx183];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx184;
    __Vtableidx184 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx184 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx184];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx185;
    __Vtableidx185 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx185 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx185];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx186;
    __Vtableidx186 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 8U));
    __Vtableidx186 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx186];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx187;
    __Vtableidx187 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[3U] 
                                        >> 0x00000010U));
    __Vtableidx187 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx187];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx188;
    __Vtableidx188 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i.sb__DOT__state_in[3U] 
                         >> 0x00000018U);
    __Vtableidx188 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx188];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx189;
    __Vtableidx189 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[0U]);
    __Vtableidx189 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx189];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx190;
    __Vtableidx190 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 8U));
    __Vtableidx190 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx190];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx191;
    __Vtableidx191 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[0U] 
                                        >> 0x00000010U));
    __Vtableidx191 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx191];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx192;
    __Vtableidx192 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[0U] 
                         >> 0x00000018U);
    __Vtableidx192 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx192];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx193;
    __Vtableidx193 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[1U]);
    __Vtableidx193 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx193];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx194;
    __Vtableidx194 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 8U));
    __Vtableidx194 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx194];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx195;
    __Vtableidx195 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[1U] 
                                        >> 0x00000010U));
    __Vtableidx195 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx195];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx196;
    __Vtableidx196 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[1U] 
                         >> 0x00000018U);
    __Vtableidx196 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx196];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx197;
    __Vtableidx197 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[2U]);
    __Vtableidx197 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx197];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx198;
    __Vtableidx198 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 8U));
    __Vtableidx198 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx198];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx199;
    __Vtableidx199 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[2U] 
                                        >> 0x00000010U));
    __Vtableidx199 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx199];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx200;
    __Vtableidx200 = 0;
    // Body
    vlSelfRef.sbox_in = (vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[2U] 
                         >> 0x00000018U);
    __Vtableidx200 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx200];
}

void Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx201;
    __Vtableidx201 = 0;
    // Body
    vlSelfRef.sbox_in = (0x000000ffU & vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i.sb__DOT__state_in[3U]);
    __Vtableidx201 = vlSelfRef.sbox_in;
    vlSelfRef.sbox_out = Vtb_enc_sca__ConstPool__TABLE_hbe5d8316_0
        [__Vtableidx201];
}
