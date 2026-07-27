// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

// Parameter definitions for Vtb_enc_sca_AES_TI_PKG
constexpr CData/*7:0*/ Vtb_enc_sca_AES_TI_PKG::AES_AFFINE_CONST;
constexpr CData/*7:0*/ Vtb_enc_sca_AES_TI_PKG::AES_INV_AFFINE_CONST;
constexpr IData/*31:0*/ Vtb_enc_sca_AES_TI_PKG::SBOX_LAT;


void Vtb_enc_sca_AES_TI_PKG___ctor_var_reset(Vtb_enc_sca_AES_TI_PKG* vlSelf);

void Vtb_enc_sca_AES_TI_PKG::ctor(Vtb_enc_sca__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_enc_sca_AES_TI_PKG___ctor_var_reset(this);
}

void Vtb_enc_sca_AES_TI_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_enc_sca_AES_TI_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
