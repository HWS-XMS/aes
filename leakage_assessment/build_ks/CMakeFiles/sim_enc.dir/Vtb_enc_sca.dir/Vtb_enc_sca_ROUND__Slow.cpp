// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

void Vtb_enc_sca_ROUND___ctor_var_reset(Vtb_enc_sca_ROUND* vlSelf);

void Vtb_enc_sca_ROUND::ctor(Vtb_enc_sca__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_enc_sca_ROUND___ctor_var_reset(this);
}

void Vtb_enc_sca_ROUND::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_enc_sca_ROUND::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
