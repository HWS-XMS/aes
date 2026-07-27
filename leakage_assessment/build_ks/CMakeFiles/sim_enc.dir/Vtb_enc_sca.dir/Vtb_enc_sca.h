// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_ENC_SCA_H_
#define VERILATED_VTB_ENC_SCA_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtb_enc_sca__Syms;
class Vtb_enc_sca___024root;
class Vtb_enc_sca_AES_PKG;
class Vtb_enc_sca_AES_TI_PKG;
class Vtb_enc_sca_ROUND;
class Vtb_enc_sca_SBOX;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb_enc_sca VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb_enc_sca__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_enc_sca_AES_TI_PKG* const __PVT__AES_TI_PKG;
    Vtb_enc_sca_AES_PKG* const __PVT__AES_PKG;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__4__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke128__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__6__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__18__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__30__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__42__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke192__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__8__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__12__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__16__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__20__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__24__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__28__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__32__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__36__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__40__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__44__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__48__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__52__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s0;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s1;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s2;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__ke__DOT__ke256__DOT__genblk2__BRA__56__KET____DOT__genblk1__DOT__s3;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__1__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__2__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__3__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__4__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__5__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__6__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__7__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__8__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__9__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__10__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__11__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__12__KET____DOT__round_i;
    Vtb_enc_sca_ROUND* const __PVT__tb_enc_sca__DOT__dut__DOT__g_round__BRA__13__KET____DOT__round_i;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__sbox_cell;
    Vtb_enc_sca_SBOX* const __PVT__tb_enc_sca__DOT__dut__DOT__last_round__DOT__sb__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__sbox_cell;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb_enc_sca___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb_enc_sca(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb_enc_sca(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb_enc_sca();
  private:
    VL_UNCOPYABLE(Vtb_enc_sca);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
