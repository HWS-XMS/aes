// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_enc_sca.h for the primary calling header

#ifndef VERILATED_VTB_ENC_SCA___024UNIT_H_
#define VERILATED_VTB_ENC_SCA___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_enc_sca__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_enc_sca___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_enc_sca__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_enc_sca___024unit() = default;
    ~Vtb_enc_sca___024unit() = default;
    void ctor(Vtb_enc_sca__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_enc_sca___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
