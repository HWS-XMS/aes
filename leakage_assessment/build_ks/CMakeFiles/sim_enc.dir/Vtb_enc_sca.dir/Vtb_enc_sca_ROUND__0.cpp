// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__0\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.tb_enc_sca__DOT__dut__DOT__clk;
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

void Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1(Vtb_enc_sca_ROUND* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_enc_sca_ROUND___ico_sequent__TOP__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i__1\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sb__DOT__state_out[0U] = (IData)((((QData)((IData)(
                                                                 ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                    << 0x00000018U) 
                                                                   | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                      << 0x00000010U)) 
                                                                  | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                      << 8U) 
                                                                     | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out))))) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                     << 0x00000018U) 
                                                                    | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 0x00000010U)) 
                                                                   | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out)))))));
    vlSelfRef.sb__DOT__state_out[1U] = (IData)(((((QData)((IData)(
                                                                  ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                     << 0x00000018U) 
                                                                    | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 0x00000010U)) 
                                                                   | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                      << 0x00000018U) 
                                                                     | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                        << 0x00000010U)) 
                                                                    | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out)))))) 
                                                >> 0x00000020U));
    vlSelfRef.sb__DOT__state_out[2U] = (IData)((((QData)((IData)(
                                                                 ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                    << 0x00000018U) 
                                                                   | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                      << 0x00000010U)) 
                                                                  | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                      << 8U) 
                                                                     | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out))))) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                     << 0x00000018U) 
                                                                    | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 0x00000010U)) 
                                                                   | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out)))))));
    vlSelfRef.sb__DOT__state_out[3U] = (IData)(((((QData)((IData)(
                                                                  ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                     << 0x00000018U) 
                                                                    | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 0x00000010U)) 
                                                                   | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell->sbox_out) 
                                                                      << 0x00000018U) 
                                                                     | ((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell->sbox_out) 
                                                                        << 0x00000010U)) 
                                                                    | (((IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell->sbox_out) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->__PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell->sbox_out)))))) 
                                                >> 0x00000020U));
    vlSelfRef.state_after_subbytes[0U] = vlSelfRef.sb__DOT__state_out[0U];
    vlSelfRef.state_after_subbytes[1U] = vlSelfRef.sb__DOT__state_out[1U];
    vlSelfRef.state_after_subbytes[2U] = vlSelfRef.sb__DOT__state_out[2U];
    vlSelfRef.state_after_subbytes[3U] = vlSelfRef.sb__DOT__state_out[3U];
    vlSelfRef.sr__DOT__state_in[0U] = vlSelfRef.state_after_subbytes[0U];
    vlSelfRef.sr__DOT__state_in[1U] = vlSelfRef.state_after_subbytes[1U];
    vlSelfRef.sr__DOT__state_in[2U] = vlSelfRef.state_after_subbytes[2U];
    vlSelfRef.sr__DOT__state_in[3U] = vlSelfRef.state_after_subbytes[3U];
    vlSelfRef.sr__DOT__state_out[0U] = ((((0x0000ff00U 
                                           & (vlSelfRef.sr__DOT__state_in[3U] 
                                              >> 0x00000010U)) 
                                          | (0x000000ffU 
                                             & (vlSelfRef.sr__DOT__state_in[2U] 
                                                >> 0x00000010U))) 
                                         << 0x00000010U) 
                                        | ((0x0000ff00U 
                                            & vlSelfRef.sr__DOT__state_in[1U]) 
                                           | (0x000000ffU 
                                              & vlSelfRef.sr__DOT__state_in[0U])));
    vlSelfRef.sr__DOT__state_out[1U] = ((((0x0000ff00U 
                                           & (vlSelfRef.sr__DOT__state_in[0U] 
                                              >> 0x00000010U)) 
                                          | (0x000000ffU 
                                             & (vlSelfRef.sr__DOT__state_in[3U] 
                                                >> 0x00000010U))) 
                                         << 0x00000010U) 
                                        | ((0x0000ff00U 
                                            & vlSelfRef.sr__DOT__state_in[2U]) 
                                           | (0x000000ffU 
                                              & vlSelfRef.sr__DOT__state_in[1U])));
    vlSelfRef.sr__DOT__state_out[2U] = ((((0x0000ff00U 
                                           & (vlSelfRef.sr__DOT__state_in[1U] 
                                              >> 0x00000010U)) 
                                          | (0x000000ffU 
                                             & (vlSelfRef.sr__DOT__state_in[0U] 
                                                >> 0x00000010U))) 
                                         << 0x00000010U) 
                                        | ((0x0000ff00U 
                                            & vlSelfRef.sr__DOT__state_in[3U]) 
                                           | (0x000000ffU 
                                              & vlSelfRef.sr__DOT__state_in[2U])));
    vlSelfRef.sr__DOT__state_out[3U] = ((((0x0000ff00U 
                                           & (vlSelfRef.sr__DOT__state_in[2U] 
                                              >> 0x00000010U)) 
                                          | (0x000000ffU 
                                             & (vlSelfRef.sr__DOT__state_in[1U] 
                                                >> 0x00000010U))) 
                                         << 0x00000010U) 
                                        | ((0x0000ff00U 
                                            & vlSelfRef.sr__DOT__state_in[0U]) 
                                           | (0x000000ffU 
                                              & vlSelfRef.sr__DOT__state_in[3U])));
    vlSelfRef.state_after_shift_rows[0U] = vlSelfRef.sr__DOT__state_out[0U];
    vlSelfRef.state_after_shift_rows[1U] = vlSelfRef.sr__DOT__state_out[1U];
    vlSelfRef.state_after_shift_rows[2U] = vlSelfRef.sr__DOT__state_out[2U];
    vlSelfRef.state_after_shift_rows[3U] = vlSelfRef.sr__DOT__state_out[3U];
    vlSelfRef.mc__DOT__state_in[0U] = vlSelfRef.state_after_shift_rows[0U];
    vlSelfRef.mc__DOT__state_in[1U] = vlSelfRef.state_after_shift_rows[1U];
    vlSelfRef.mc__DOT__state_in[2U] = vlSelfRef.state_after_shift_rows[2U];
    vlSelfRef.mc__DOT__state_in[3U] = vlSelfRef.state_after_shift_rows[3U];
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__col_in 
        = vlSelfRef.mc__DOT__state_in[0U];
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__col_in 
        = vlSelfRef.mc__DOT__state_in[1U];
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__col_in 
        = vlSelfRef.mc__DOT__state_in[2U];
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__col_in 
        = vlSelfRef.mc__DOT__state_in[3U];
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__col_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__col_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__col_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__col_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_in 
                          >> 8U));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_in 
                          >> 0x00000010U));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in 
        = (0x000000ffU & vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_in);
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in 
        = (vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_in 
           >> 0x00000018U);
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_in 
                          >> 8U));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_in 
                          >> 0x00000010U));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in 
        = (0x000000ffU & vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_in);
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in 
        = (vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_in 
           >> 0x00000018U);
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_in 
                          >> 8U));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_in 
                          >> 0x00000010U));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in 
        = (0x000000ffU & vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_in);
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in 
        = (vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_in 
           >> 0x00000018U);
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_in 
                          >> 8U));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in 
        = (0x000000ffU & (vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_in 
                          >> 0x00000010U));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in 
        = (0x000000ffU & vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_in);
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in 
        = (vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_in 
           >> 0x00000018U);
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out 
        = (0x000000ffU & ((0x00000080U & (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in))
                           ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U))
                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in), 1U)));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__tmp 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_out 
        = ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_in) 
           ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__tmp));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out2 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out3 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out1 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out4 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_out 
        = (((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out1) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out4)))) 
             << 0x00000018U) | (((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
                                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                                    ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out3) 
                                       ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out4)))) 
                                << 0x00000010U)) | 
           ((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out2) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out3)))) 
             << 8U) | ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out1) 
                       ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out2) 
                          ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                             ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))))));
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_out 
        = (((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out1) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out4)))) 
             << 0x00000018U) | (((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
                                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                                    ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out3) 
                                       ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out4)))) 
                                << 0x00000010U)) | 
           ((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out2) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out3)))) 
             << 8U) | ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out1) 
                       ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out2) 
                          ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                             ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))))));
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_out 
        = (((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out1) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out4)))) 
             << 0x00000018U) | (((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
                                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                                    ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out3) 
                                       ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out4)))) 
                                << 0x00000010U)) | 
           ((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out2) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out3)))) 
             << 8U) | ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out1) 
                       ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out2) 
                          ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                             ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))))));
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_out 
        = (((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out1) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out4)))) 
             << 0x00000018U) | (((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
                                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in) 
                                    ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out3) 
                                       ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out4)))) 
                                << 0x00000010U)) | 
           ((((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in) 
              ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out2) 
                 ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in) 
                    ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out3)))) 
             << 8U) | ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out1) 
                       ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out2) 
                          ^ ((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in) 
                             ^ (IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in))))));
    vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__col_out 
        = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_out;
    vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__col_out 
        = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_out;
    vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__col_out 
        = vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_out;
    vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__col_out 
        = vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_out;
    vlSelfRef.mc__DOT__state_out[0U] = vlSelfRef.mc__DOT__genblk1__BRA__0__KET____DOT__col_out;
    vlSelfRef.mc__DOT__state_out[1U] = vlSelfRef.mc__DOT__genblk1__BRA__1__KET____DOT__col_out;
    vlSelfRef.mc__DOT__state_out[2U] = (IData)((((QData)((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__col_out)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__col_out))));
    vlSelfRef.mc__DOT__state_out[3U] = (IData)(((((QData)((IData)(vlSelfRef.mc__DOT__genblk1__BRA__3__KET____DOT__col_out)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.mc__DOT__genblk1__BRA__2__KET____DOT__col_out))) 
                                                >> 0x00000020U));
    vlSelfRef.state_after_mix_columns[0U] = vlSelfRef.mc__DOT__state_out[0U];
    vlSelfRef.state_after_mix_columns[1U] = vlSelfRef.mc__DOT__state_out[1U];
    vlSelfRef.state_after_mix_columns[2U] = vlSelfRef.mc__DOT__state_out[2U];
    vlSelfRef.state_after_mix_columns[3U] = vlSelfRef.mc__DOT__state_out[3U];
    vlSelfRef.ark__DOT__state_in[0U] = vlSelfRef.state_after_mix_columns[0U];
    vlSelfRef.ark__DOT__state_in[1U] = vlSelfRef.state_after_mix_columns[1U];
    vlSelfRef.ark__DOT__state_in[2U] = vlSelfRef.state_after_mix_columns[2U];
    vlSelfRef.ark__DOT__state_in[3U] = vlSelfRef.state_after_mix_columns[3U];
    vlSelfRef.ark__DOT__state_out[0U] = (vlSelfRef.ark__DOT__round_key[0U] 
                                         ^ vlSelfRef.ark__DOT__state_in[0U]);
    vlSelfRef.ark__DOT__state_out[1U] = (vlSelfRef.ark__DOT__round_key[1U] 
                                         ^ vlSelfRef.ark__DOT__state_in[1U]);
    vlSelfRef.ark__DOT__state_out[2U] = (vlSelfRef.ark__DOT__round_key[2U] 
                                         ^ vlSelfRef.ark__DOT__state_in[2U]);
    vlSelfRef.ark__DOT__state_out[3U] = (vlSelfRef.ark__DOT__round_key[3U] 
                                         ^ vlSelfRef.ark__DOT__state_in[3U]);
    vlSelfRef.round_out[0U] = vlSelfRef.ark__DOT__state_out[0U];
    vlSelfRef.round_out[1U] = vlSelfRef.ark__DOT__state_out[1U];
    vlSelfRef.round_out[2U] = vlSelfRef.ark__DOT__state_out[2U];
    vlSelfRef.round_out[3U] = vlSelfRef.ark__DOT__state_out[3U];
}
