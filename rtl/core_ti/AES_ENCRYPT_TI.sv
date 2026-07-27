import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// AES_ENCRYPT_TI - DOM-masked AES encryption core, N shares (order d = N-1).
//
// Mirrors the unmasked AES_ENCRYPT: takes the (shared) key and expands it
// internally with KEY_EXPANSION_TI.  Because the masked key schedule is a
// multi-cycle pipeline, key setup uses the SAME valid-tracking idiom as the data
// path (AES_ENCRYPT's valid_pipe/out_valid): key_valid is pushed into a shift
// register the length of the schedule latency; when it pops we latch the settled
// round-key shares and pulse key_ready.  Every key_valid re-keys independently -
// no reset required.  key_ready high => rk_reg holds valid round keys.
//
//   Key setup latency : KEY_LATENCY cycles after key_valid  -> key_ready pulse
//   Encryption latency: Nr*4 cycles after in_valid          -> out_valid
//
// Recombining (XOR) the N output shares yields the exact AES ciphertext.
// ============================================================================
module AES_ENCRYPT_TI #(
    parameter  int N       = 2,
    parameter  int KEYSIZE = 16,
    localparam int Nk       = KEYSIZE / 4,
    localparam int Nr       = Nk + 6,
    localparam int NSUB     = (KEYSIZE == 16) ? 10 : (KEYSIZE == 24) ? 8 : 13,
    localparam int RW       = N*(N-1)/2,
    localparam int RPERR    = 16*4*RW*8,             // datapath randomness per round
    localparam int KRTOT    = NSUB*4*RW*8,           // key-schedule randomness
    localparam int L        = Nr*4,                  // encryption latency
    localparam int KEY_LATENCY = (Nr+6)*4            // safe key-schedule settle time
)(
    input  logic                    clk,
    input  logic                    rst,
    // key setup
    input  logic                    key_valid,
    input  logic [N*KEYSIZE*8-1:0]  key,             // N shares of the key
    input  logic [KRTOT-1:0]        key_rnd,
    output logic                    key_ready,
    // data
    input  logic                    in_valid,
    input  logic [N*128-1:0]        state_in,        // N shares of plaintext
    input  logic [Nr*RPERR-1:0]     rnd,
    output logic                    out_valid,
    output logic [N*128-1:0]        state_out         // N shares of ciphertext
);
    // --- masked key schedule + valid-tracked setup latch ---
    logic [(Nr+1)*N*128-1:0] rk_comb, rk_reg;
    KEY_EXPANSION_TI #(.N(N), .KEYSIZE(KEYSIZE)) ks (
        .clk(clk), .rst(rst), .key(key), .rnd(key_rnd), .round_keys(rk_comb));

    // Track key_valid through the fixed-latency schedule; latch the settled round
    // keys and raise key_ready together, so key_ready high => rk_reg is valid.
    logic [KEY_LATENCY-1:0] kvalid_pipe;
    always_ff @(posedge clk) begin
        if (rst) begin
            kvalid_pipe <= '0;
            key_ready   <= 1'b0;
        end else begin
            kvalid_pipe <= {kvalid_pipe[KEY_LATENCY-2:0], key_valid};
            key_ready   <= kvalid_pipe[KEY_LATENCY-1];
            if (kvalid_pipe[KEY_LATENCY-1]) begin
                rk_reg <= rk_comb;
            end
        end
    end

    // --- datapath (uses the latched round-key shares) ---
    logic [N*128-1:0] stg [0:Nr];
    ADDROUNDKEY_TI #(N) ark0 (
        .state_in(state_in), .key_in(rk_reg[0*N*128 +: N*128]), .state_out(stg[0]));

    genvar i;
    generate
        for (i = 1; i < Nr; i++) begin : g_round
            ROUND_TI #(N) r (
                .clk(clk), .rst(rst),
                .state_in  (stg[i-1]),
                .round_key (rk_reg[i*N*128 +: N*128]),
                .rnd       (rnd[(i-1)*RPERR +: RPERR]),
                .state_out (stg[i]));
        end
    endgenerate

    LASTROUND_TI #(N) rl (
        .clk(clk), .rst(rst),
        .state_in  (stg[Nr-1]),
        .round_key (rk_reg[Nr*N*128 +: N*128]),
        .rnd       (rnd[(Nr-1)*RPERR +: RPERR]),
        .state_out (stg[Nr]));

    assign state_out = stg[Nr];

    logic [L-1:0] vpipe;
    always_ff @(posedge clk) begin
        if (rst) begin
            vpipe <= '0;
        end else begin
            vpipe <= {vpipe[L-2:0], in_valid};
        end
    end
    assign out_valid = vpipe[L-1];
endmodule
