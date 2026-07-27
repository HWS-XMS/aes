// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_enc_sca.h for the primary calling header

#ifndef VERILATED_VTB_ENC_SCA_SBOX_H_
#define VERILATED_VTB_ENC_SCA_SBOX_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_enc_sca__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_enc_sca_SBOX final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sbox_in,7,0);
    VL_OUT8(sbox_out,7,0);

    // INTERNAL VARIABLES
    Vtb_enc_sca__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_enc_sca_SBOX() = default;
    ~Vtb_enc_sca_SBOX() = default;
    void ctor(Vtb_enc_sca__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_enc_sca_SBOX);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
