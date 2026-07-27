// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

void Vtb_enc_sca___024root___nba_sequent__TOP__6(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_sequent__TOP__6\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
            [0x2fU] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                       [0x2fU] >> 8U));
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__rotw 
        = ((vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
            [0x37U] << 0x00000018U) | (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
                                       [0x37U] >> 8U));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003bU)) {
        vlSelfRef.tb_enc_sca__DOT__ke__DOT__round_keys_256[__Vilp1] 
            = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__round_keys[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000003bU)) {
        vlSelfRef.tb_enc_sca__DOT__rk256[__Vilp2] = 
            vlSelfRef.tb_enc_sca__DOT__ke__DOT__round_keys_256[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
}

void Vtb_enc_sca___024root___nba_sequent__TOP__7(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_sequent__TOP__7\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_0;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_0 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_1;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_1 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_4;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_4 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_5;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_5 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_8;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_8 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_9;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_9 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_12;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_12 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_13;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_13 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_16;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_16 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_17;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_17 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_20;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_20 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_21;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_21 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_24;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_24 = 0;
    IData/*31:0*/ tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_25;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_25 = 0;
    // Body
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
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[8U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_26;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_0 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_26 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [1U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000010U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_28;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_4 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_28 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [9U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000018U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_30;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_8 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_30 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x11U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000020U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_32;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_12 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_32 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x19U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000028U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_34;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_16 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_34 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x21U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000030U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_36;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_20 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_36 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x29U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000038U] 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_38;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_24 
        = (vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_38 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x31U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[9U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_0;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_1 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_0 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [2U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000011U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_4;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_5 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_4 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x0aU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000019U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_8;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_9 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_8 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x12U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000021U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_12;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_13 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_12 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x1aU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000029U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_16;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_17 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_16 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x22U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000031U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_20;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_21 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_20 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x2aU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000039U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_24;
    tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_25 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_24 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x32U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000000aU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_1;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000000bU] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_1 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [3U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000012U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_5;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000013U] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_5 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x0bU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000001aU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_9;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000001bU] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_9 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x13U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000022U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_13;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000023U] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_13 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x1bU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000002aU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_17;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000002bU] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_17 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x23U]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000032U] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_21;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x00000033U] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_21 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x2bU]);
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000003aU] 
        = tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_25;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_nxt[0x0000003bU] 
        = (tb_enc_sca__DOT__ke__DOT__ke256__DOT____VdfgRegularize_hc51d362a_0_25 
           ^ vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__col_reg
           [0x33U]);
}

void Vtb_enc_sca___024root___nba_comb__TOP__0(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_comb__TOP__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__rst = vlSelfRef.tb_enc_sca__DOT__ke_rst;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__key_valid = vlSelfRef.tb_enc_sca__DOT__kv;
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[0U] 
        = vlSelfRef.tb_enc_sca__DOT__pt[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[1U] 
        = vlSelfRef.tb_enc_sca__DOT__pt[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[2U] 
        = vlSelfRef.tb_enc_sca__DOT__pt[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[3U] 
        = vlSelfRef.tb_enc_sca__DOT__pt[3U];
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003bU)) {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[__Vilp1] 
            = vlSelfRef.tb_enc_sca__DOT__rk_hold[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__in_valid = vlSelfRef.tb_enc_sca__DOT__in_valid;
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__rst = vlSelfRef.tb_enc_sca__DOT__rst;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__rst 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__rst;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__rst 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__rst;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__rst 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__rst;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke128__DOT__key_valid 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__key_valid;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke192__DOT__key_valid 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__key_valid;
    vlSelfRef.tb_enc_sca__DOT__ke__DOT__ke256__DOT__key_valid 
        = vlSelfRef.tb_enc_sca__DOT__ke__DOT__key_valid;
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__plaintext[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[0U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[3U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[3U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[3U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[3U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[1U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[2U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[2U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[2U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[2U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[2U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[1U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[1U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[1U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[1U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[3U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[0U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[0U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[0U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__bytes_in[0U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__b2s__DOT__state_out[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__pt_state[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[0U] 
        = (vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[0U] 
           ^ vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[0U]);
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[1U] 
        = (vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[1U] 
           ^ vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[1U]);
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[2U] 
        = (vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[2U] 
           ^ vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[2U]);
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[3U] 
        = (vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__round_key[3U] 
           ^ vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_in[3U]);
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[0U][0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[0U][1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[0U][2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[0U][3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ark0__DOT__state_out[3U];
}

void Vtb_enc_sca___024root___nba_comb__TOP__1(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_comb__TOP__1\n"); );
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
    } else if ((1U == (IData)(vlSelfRef.tb_enc_sca__DOT__dut__DOT__keysize))) {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[0U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[0U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[1U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[1U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[2U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[2U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[3U] 
            = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i.round_key[3U];
    } else {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[0U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000038U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[1U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x00000039U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[2U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000003aU];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[3U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__round_keys[0x0000003bU];
    }
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_key[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__ark__DOT__round_key[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_key[3U];
}

void Vtb_enc_sca___024root___nba_sequent__TOP__8(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_sequent__TOP__8\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__rst) {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[0U] = 0U;
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[1U] = 0U;
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[2U] = 0U;
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[3U] = 0U;
    } else {
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[0U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_out[0U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[1U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_out[1U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[2U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_out[2U];
        vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[3U] 
            = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__round_out[3U];
    }
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__last_round__DOT__state_out[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ct_state[3U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[0U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[3U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[3U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[3U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[3U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[1U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[2U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[2U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[2U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[2U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[2U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[1U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[1U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[1U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[1U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[3U] 
        = ((((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[0U] 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[0U] 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[0U] 
                                               >> 8U)) 
                               | (vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__state_in[0U] 
                                  >> 0x00000018U)));
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[0U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[1U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[2U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[3U] 
        = vlSelfRef.tb_enc_sca__DOT__dut__DOT__s2b__DOT__bytes_out[3U];
    vlSelfRef.tb_enc_sca__DOT__ct[0U] = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[0U];
    vlSelfRef.tb_enc_sca__DOT__ct[1U] = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[1U];
    vlSelfRef.tb_enc_sca__DOT__ct[2U] = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[2U];
    vlSelfRef.tb_enc_sca__DOT__ct[3U] = vlSelfRef.tb_enc_sca__DOT__dut__DOT__ciphertext[3U];
}

void Vtb_enc_sca___024root___nba_sequent__TOP__9(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_sequent__TOP__9\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[1U][0U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.state_out[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[1U][1U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.state_out[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[1U][2U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.state_out[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[1U][3U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i.state_out[3U];
}

void Vtb_enc_sca___024root___nba_sequent__TOP__10(Vtb_enc_sca___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_enc_sca___024root___nba_sequent__TOP__10\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[2U][0U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.state_out[0U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[2U][1U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.state_out[1U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[2U][2U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.state_out[2U];
    vlSelfRef.tb_enc_sca__DOT__dut__DOT__stage[2U][3U] 
        = vlSymsp->TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i.state_out[3U];
}
