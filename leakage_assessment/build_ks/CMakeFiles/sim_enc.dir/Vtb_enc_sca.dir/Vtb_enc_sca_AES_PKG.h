// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_enc_sca.h for the primary calling header

#ifndef VERILATED_VTB_ENC_SCA_AES_PKG_H_
#define VERILATED_VTB_ENC_SCA_AES_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_enc_sca__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_enc_sca_AES_PKG final {
  public:

    // INTERNAL VARIABLES
    Vtb_enc_sca__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*1:0*/ KS_128 = 0U;
    static constexpr CData/*1:0*/ KS_192 = 1U;
    static constexpr CData/*1:0*/ KS_256 = 2U;
    static constexpr IData/*31:0*/ KEYSIZE_AES_128 = 0x00000010U;
    static constexpr IData/*31:0*/ KEYSIZE_AES_192 = 0x00000018U;
    static constexpr IData/*31:0*/ KEYSIZE_AES_256 = 0x00000020U;
    static constexpr IData/*31:0*/ BLOCKSIZE = 0x00000010U;
    static constexpr IData/*31:0*/ Nb = 4U;

    // CONSTRUCTORS
    Vtb_enc_sca_AES_PKG() = default;
    ~Vtb_enc_sca_AES_PKG() = default;
    void ctor(Vtb_enc_sca__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_enc_sca_AES_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
