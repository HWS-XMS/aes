// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_enc_sca.h for the primary calling header

#ifndef VERILATED_VTB_ENC_SCA_ROUND_H_
#define VERILATED_VTB_ENC_SCA_ROUND_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_enc_sca_SBOX;


class Vtb_enc_sca__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_enc_sca_ROUND final {
  public:
    // CELLS
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* __PVT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_INW(round_key,127,0,4);
        VL_INW(state_in,127,0,4);
        VL_OUTW(state_out,127,0,4);
        VlWide<4>/*127:0*/ state_after_subbytes;
        VlWide<4>/*127:0*/ state_after_shift_rows;
        VlWide<4>/*127:0*/ state_after_mix_columns;
        VlWide<4>/*127:0*/ round_out;
        VlWide<4>/*127:0*/ sb__DOT__state_in;
        VlWide<4>/*127:0*/ sb__DOT__state_out;
        VlWide<4>/*127:0*/ sr__DOT__state_in;
        VlWide<4>/*127:0*/ sr__DOT__state_out;
        VlWide<4>/*127:0*/ mc__DOT__state_in;
        VlWide<4>/*127:0*/ mc__DOT__state_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__col_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__col_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__col_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__col_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__col_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out1;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out1;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__0__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__col_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out1;
    };
    struct {
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out1;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__1__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__col_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out1;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out1;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
    };
    struct {
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__2__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
        IData/*31:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_in;
        IData/*31:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__col_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out1;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out1;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out2;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out3;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_tmp_out4;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_2_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_1__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_2__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_3__DOT__mul_2_1__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__data_out;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__tmp;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_in;
        CData/*7:0*/ mc__DOT__genblk1__BRA__3__KET____DOT__mc__DOT__mul_3_4__DOT__mul_2_1__DOT__data_out;
        VlWide<4>/*127:0*/ ark__DOT__state_in;
        VlWide<4>/*127:0*/ ark__DOT__round_key;
        VlWide<4>/*127:0*/ ark__DOT__state_out;
    };

    // INTERNAL VARIABLES
    Vtb_enc_sca__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_enc_sca_ROUND() = default;
    ~Vtb_enc_sca_ROUND() = default;
    void ctor(Vtb_enc_sca__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_enc_sca_ROUND);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
