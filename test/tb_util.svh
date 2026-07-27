`ifndef TB_UTIL_SVH
`define TB_UTIL_SVH
// ---------------------------------------------------------------------------
// Testbench constants: NIST FIPS-197 published reference values.
// State-level testbenches drive/read the DUT as 128-bit blocks (AES input
// order in0..in15, in0 = MSB byte) through the AES_BYTES_TO_STATE /
// AES_STATE_TO_BYTES converters, so no AES transform logic lives here.
// ---------------------------------------------------------------------------

// NIST FIPS-197 Appendix B, AES-128 cipher example, round 1 (in0..in15 order).
// after_mixcolumns is the value published by NIST; the rest are cross-checked
// against it and the FIPS-197 S-box.
localparam logic [127:0] FIPS_R1_START      = 128'h193de3bea0f4e22b9ac68d2ae9f84808;
localparam logic [127:0] FIPS_R1_AFTER_SUB  = 128'hd42711aee0bf98f1b8b45de51e415230;
localparam logic [127:0] FIPS_R1_AFTER_SHIFT= 128'hd4bf5d30e0b452aeb84111f11e2798e5;
localparam logic [127:0] FIPS_R1_AFTER_MIX  = 128'h046681e5e0cb199a48f8d37a2806264c;
localparam logic [127:0] FIPS_R1_KEY1       = 128'ha0fafe1788542cb123a339392a6c7605;
localparam logic [127:0] FIPS_R1_OUTPUT     = 128'ha49c7ff2689f352b6b5bea43026a5049;

`endif
