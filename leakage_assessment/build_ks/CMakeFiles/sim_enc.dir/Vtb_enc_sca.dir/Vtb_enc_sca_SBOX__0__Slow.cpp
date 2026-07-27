// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_enc_sca.h for the primary calling header

#include "Vtb_enc_sca__pch.h"

VL_ATTR_COLD void Vtb_enc_sca_SBOX___ctor_var_reset(Vtb_enc_sca_SBOX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_enc_sca_SBOX___ctor_var_reset\n"); );
    Vtb_enc_sca__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->sbox_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6269094682505734251ull);
    vlSelf->sbox_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1851423435950513597ull);
}
