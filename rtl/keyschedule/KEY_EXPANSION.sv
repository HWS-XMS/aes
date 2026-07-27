import AES_PKG::*;
// KEY_EXPANSION - keysize-agnostic pipelined key-schedule distributor.  Expands the
// key three ways and exposes round_keys_128/192/256 plus one key_ready (AND).  key is
// 256-bit, right-aligned per size.
module KEY_EXPANSION (
    input  logic             clk,
    input  logic             rst,
    input  logic             key_valid,
    input  byte_t     [31:0] key,
    output logic             key_ready,
    output roundkey_t [10:0] round_keys_128,
    output roundkey_t [12:0] round_keys_192,
    output roundkey_t [14:0] round_keys_256
);
    logic kr128;
    logic kr192;
    logic kr256;

    KEY_EXPANSION_128 ke128 (
        .clk        (clk           ),
        .rst        (rst           ),
        .key_valid  (key_valid     ),
        .key        (key[15:0]     ),
        .key_ready  (kr128         ),
        .round_keys (round_keys_128)
    );

    KEY_EXPANSION_192 ke192 (
        .clk        (clk           ),
        .rst        (rst           ),
        .key_valid  (key_valid     ),
        .key        (key[23:0]     ),
        .key_ready  (kr192         ),
        .round_keys (round_keys_192)
    );

    KEY_EXPANSION_256 ke256 (
        .clk        (clk           ),
        .rst        (rst           ),
        .key_valid  (key_valid     ),
        .key        (key[31:0]     ),
        .key_ready  (kr256         ),
        .round_keys (round_keys_256)
    );

    assign key_ready = kr128 & kr192 & kr256;
endmodule
