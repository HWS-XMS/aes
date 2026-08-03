import AES_PKG::*;
import AES_MASKED_PKG::*;
// AES_ENCRYPT_MASKED_ITER - iterative (rolled) DOM-masked encrypt: ONE masked round
// (SubBytes 8-cyc, MixColumns bypassed on the last round) reused Nr times, N shares,
// runtime keysize.  Minimal area for clean masked SCA measurement.  Fresh DOM randomness
// every cycle; latency ~ 1 + Nr*SBOX_LAT.  Interface mirrors AES_ENCRYPT_MASKED (rnd is
// one round's worth, driven fresh each cycle).
module AES_ENCRYPT_MASKED_ITER #(
    parameter  int N     = 2,
    localparam int RPERR = 16*sbox_rand_words(N)*8
)(
    input  logic                clk,
    input  logic                rst,
    input  logic                in_valid,
    input  logic [1:0]          keysize,
    input  logic [N*128-1:0]    state_in,
    input  logic [N*15*128-1:0] round_keys,
    input  logic [RPERR-1:0]    rnd,
    output logic                out_valid,
    output logic [N*128-1:0]    state_out
);
    logic [3:0] nr;
    always_comb begin
        case (keysize)
            KS_128:  nr = 4'd10;
            KS_192:  nr = 4'd12;
            default: nr = 4'd14;
        endcase
    end

    logic [N*128-1:0] st_in;
    genvar g;
    generate
        for (g = 0; g < N; g++) begin
            AES_BYTES_TO_STATE b2s (
                .bytes_in  (state_in[g*128 +: 128]),
                .state_out (st_in[g*128 +: 128]   )
            );
        end
    endgenerate

    logic [N*128-1:0] init_state;
    ADDROUNDKEY_MASKED #(N) ark0 (
        .state_in  (st_in                       ),
        .key_in    (round_keys[0*N*128 +: N*128]),
        .state_out (init_state                  )
    );

    logic [N*128-1:0] st;
    logic [3:0] cnt;
    logic [3:0] wctr;
    logic running;

    logic [N*128-1:0] sb;
    SUBBYTES_MASKED #(N) su (
        .clk       (clk),
        .rst       (rst),
        .state_in  (st ),
        .rnd       (rnd),
        .state_out (sb )
    );

    logic [N*128-1:0] sr;
    SHIFTROWS_MASKED #(N) sh (
        .state_in  (sb),
        .state_out (sr)
    );

    logic [N*128-1:0] mc;
    MIXCOLUMNS_MASKED #(N) mx (
        .state_in  (sr),
        .state_out (mc)
    );

    logic is_last;
    assign is_last = (cnt == nr);

    logic [N*128-1:0] mixed;
    assign mixed = is_last ? sr : mc;

    logic [N*128-1:0] round_out;
    ADDROUNDKEY_MASKED #(N) ak (
        .state_in  (mixed                         ),
        .key_in    (round_keys[cnt*N*128 +: N*128]),
        .state_out (round_out                     )
    );

    logic round_done;
    assign round_done = (wctr == 4'(SBOX_LAT));

    always_ff @(posedge clk) begin
        if (rst) begin
            st        <= '0;
            cnt       <= '0;
            wctr      <= '0;
            running   <= 1'b0;
            out_valid <= 1'b0;
        end else begin
            st        <= st;
            cnt       <= cnt;
            wctr      <= wctr;
            running   <= running;
            out_valid <= 1'b0;
            if (!running) begin
                if (in_valid) begin
                    st      <= init_state;
                    cnt     <= 4'd1;
                    wctr    <= '0;
                    running <= 1'b1;
                end
            end else begin
                if (round_done) begin
                    st   <= round_out;
                    wctr <= '0;
                    if (is_last) begin
                        running   <= 1'b0;
                        out_valid <= 1'b1;
                    end else begin
                        cnt <= cnt + 4'd1;
                    end
                end else begin
                    wctr <= wctr + 4'd1;
                end
            end
        end
    end

    generate
        for (g = 0; g < N; g++) begin
            AES_STATE_TO_BYTES s2b (
                .state_in  (st[g*128 +: 128]       ),
                .bytes_out (state_out[g*128 +: 128])
            );
        end
    endgenerate
endmodule
