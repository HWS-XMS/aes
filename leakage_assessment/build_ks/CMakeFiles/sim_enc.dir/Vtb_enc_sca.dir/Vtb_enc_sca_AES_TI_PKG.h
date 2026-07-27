// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_enc_sca.h for the primary calling header

#ifndef VERILATED_VTB_ENC_SCA_AES_TI_PKG_H_
#define VERILATED_VTB_ENC_SCA_AES_TI_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_enc_sca__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_enc_sca_AES_TI_PKG final {
  public:

    // INTERNAL VARIABLES
    Vtb_enc_sca__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*7:0*/ AES_AFFINE_CONST = 0x63U;
    static constexpr CData/*7:0*/ AES_INV_AFFINE_CONST = 5U;
    static constexpr IData/*31:0*/ SBOX_LAT = 8U;

    // CONSTRUCTORS
    Vtb_enc_sca_AES_TI_PKG() = default;
    ~Vtb_enc_sca_AES_TI_PKG() = default;
    void ctor(Vtb_enc_sca__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_enc_sca_AES_TI_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
