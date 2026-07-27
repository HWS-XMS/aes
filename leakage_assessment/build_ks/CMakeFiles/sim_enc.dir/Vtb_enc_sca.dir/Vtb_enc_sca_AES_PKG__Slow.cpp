// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

// Parameter definitions for Vtb_enc_sca_AES_PKG
constexpr CData/*1:0*/ Vtb_enc_sca_AES_PKG::KS_128;
constexpr CData/*1:0*/ Vtb_enc_sca_AES_PKG::KS_192;
constexpr CData/*1:0*/ Vtb_enc_sca_AES_PKG::KS_256;
constexpr IData/*31:0*/ Vtb_enc_sca_AES_PKG::KEYSIZE_AES_128;
constexpr IData/*31:0*/ Vtb_enc_sca_AES_PKG::KEYSIZE_AES_192;
constexpr IData/*31:0*/ Vtb_enc_sca_AES_PKG::KEYSIZE_AES_256;
constexpr IData/*31:0*/ Vtb_enc_sca_AES_PKG::BLOCKSIZE;
constexpr IData/*31:0*/ Vtb_enc_sca_AES_PKG::Nb;


void Vtb_enc_sca_AES_PKG___ctor_var_reset(Vtb_enc_sca_AES_PKG* vlSelf);

void Vtb_enc_sca_AES_PKG::ctor(Vtb_enc_sca__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_enc_sca_AES_PKG___ctor_var_reset(this);
}

void Vtb_enc_sca_AES_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_enc_sca_AES_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
