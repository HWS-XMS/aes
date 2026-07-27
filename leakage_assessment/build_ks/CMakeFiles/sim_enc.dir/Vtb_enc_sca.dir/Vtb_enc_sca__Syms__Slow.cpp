// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_enc_sca__pch.h"

Vtb_enc_sca__Syms::Vtb_enc_sca__Syms(VerilatedContext* contextp, const char* namep, Vtb_enc_sca* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    Vtb_enc_sca__Syms__ctor__20();
}

Vtb_enc_sca__Syms::~Vtb_enc_sca__Syms() {
    Vtb_enc_sca__Syms__dtor__10();
}
