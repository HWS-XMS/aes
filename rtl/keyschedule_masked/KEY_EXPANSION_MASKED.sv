import AES_PKG::*;
import AES_MASKED_PKG::*;
// KEY_EXPANSION_MASKED - keysize-agnostic masked key-schedule distributor.  Expands the
// shared key three ways and exposes round_keys_128/192/256 plus one key_ready (AND);
// the core selects the size.  key is N shares of a 256-bit key, right-aligned per size.
module KEY_EXPANSION_MASKED #(
    parameter  int N     = 2,
    localparam int RT128 = 10*4*sbox_rand_words(N)*8,
    localparam int RT192 =  8*4*sbox_rand_words(N)*8,
    localparam int RT256 = 13*4*sbox_rand_words(N)*8,
    localparam int RTOT  = RT128 + RT192 + RT256
)(
    input  logic                clk,
    input  logic                rst,
    input  logic                key_valid,
    input  logic [N*256-1:0]    key,
    input  logic [RTOT-1:0]     rnd,
    output logic                key_ready,
    output logic [N*11*128-1:0] round_keys_128,
    output logic [N*13*128-1:0] round_keys_192,
    output logic [N*15*128-1:0] round_keys_256
);
    logic kr128;
    logic kr192;
    logic kr256;

    logic [N*128-1:0] key128;
    logic [N*192-1:0] key192;
    genvar s;
    generate
        for (s = 0; s < N; s++) begin
            assign key128[s*128 +: 128] = key[s*256 +: 128];
            assign key192[s*192 +: 192] = key[s*256 +: 192];
        end
    endgenerate

    KEY_EXPANSION_128_MASKED #(N) ke128 (
        .clk        (clk            ),
        .rst        (rst            ),
        .key_valid  (key_valid      ),
        .key        (key128         ),
        .rnd        (rnd[0 +: RT128]),
        .key_ready  (kr128          ),
        .round_keys (round_keys_128 )
    );

    KEY_EXPANSION_192_MASKED #(N) ke192 (
        .clk        (clk                ),
        .rst        (rst                ),
        .key_valid  (key_valid          ),
        .key        (key192             ),
        .rnd        (rnd[RT128 +: RT192]),
        .key_ready  (kr192              ),
        .round_keys (round_keys_192     )
    );

    KEY_EXPANSION_256_MASKED #(N) ke256 (
        .clk        (clk                      ),
        .rst        (rst                      ),
        .key_valid  (key_valid                ),
        .key        (key                      ),
        .rnd        (rnd[RT128+RT192 +: RT256]),
        .key_ready  (kr256                    ),
        .round_keys (round_keys_256           )
    );

    assign key_ready = kr128 & kr192 & kr256;
endmodule
