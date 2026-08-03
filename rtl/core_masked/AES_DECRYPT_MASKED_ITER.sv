import AES_PKG::*;
import AES_MASKED_PKG::*;
// AES_DECRYPT_MASKED_ITER - iterative (rolled) DOM-masked decrypt: ONE masked inverse
// round (InvSubBytes 8-cyc, InvMixColumns bypassed on the last round) reused Nr times,
// N shares, runtime keysize.  Initial ARK uses rk[Nr], inverse round cnt uses rk[Nr-cnt].
// Fresh DOM randomness every cycle; latency ~ 1 + Nr*SBOX_LAT.
module AES_DECRYPT_MASKED_ITER #(
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
        .state_in  (st_in                         ),
        .key_in    (round_keys[nr*N*128 +: N*128]),
        .state_out (init_state                    )
    );

    logic [N*128-1:0] st;
    logic [3:0] cnt;
    logic [3:0] wctr;
    logic running;

    logic [3:0] rk_idx;
    assign rk_idx = nr - cnt;

    logic [N*128-1:0] isr;
    INVSHIFTROWS_MASKED #(N) sh (
        .state_in  (st ),
        .state_out (isr)
    );

    logic [N*128-1:0] isb;
    INVSUBBYTES_MASKED #(N) su (
        .clk       (clk),
        .rst       (rst),
        .state_in  (isr),
        .rnd       (rnd),
        .state_out (isb)
    );

    logic [N*128-1:0] ark_out;
    ADDROUNDKEY_MASKED #(N) ak (
        .state_in  (isb                             ),
        .key_in    (round_keys[rk_idx*N*128 +: N*128]),
        .state_out (ark_out                         )
    );

    logic [N*128-1:0] imc;
    INVMIXCOLUMNS_MASKED #(N) mx (
        .state_in  (ark_out),
        .state_out (imc    )
    );

    logic is_last;
    assign is_last = (cnt == nr);

    logic [N*128-1:0] round_out;
    assign round_out = is_last ? ark_out : imc;

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
