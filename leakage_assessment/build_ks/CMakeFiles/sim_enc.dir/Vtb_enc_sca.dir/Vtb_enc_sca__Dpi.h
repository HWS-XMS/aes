// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB_ENC_SCA__DPI_H_
#define VERILATED_VTB_ENC_SCA__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at tb/tb_enc_sca.sv:48:34
    extern void sca_end_capture();
    // DPI import at tb/tb_enc_sca.sv:44:34
    extern void sca_init(const char* config_path);
    // DPI import at tb/tb_enc_sca.sv:47:34
    extern void sca_sample();
    // DPI import at tb/tb_enc_sca.sv:49:34
    extern void sca_save(const char* output_path);
    // DPI import at tb/tb_enc_sca.sv:45:34
    extern void sca_set_metadata(const char* key, const char* value);
    // DPI import at tb/tb_enc_sca.sv:46:34
    extern void sca_start_capture();

#ifdef __cplusplus
}
#endif

#endif  // guard
