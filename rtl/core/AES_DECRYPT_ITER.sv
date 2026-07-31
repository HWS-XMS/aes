import AES_PKG::*;
// AES_DECRYPT_ITER - iterative (rolled) AES decrypt: ONE inverse round datapath reused
// Nr times (InvMixColumns bypassed on the last round), runtime keysize.  Initial ARK
// uses rk[Nr], inverse round cnt uses rk[Nr-cnt].  Latency Nr+1; in_valid/out_valid.
module AES_DECRYPT_ITER (
    input  logic             clk,
    input  logic             rst,
    input  logic             in_valid,
    input  byte_t     [15:0] ciphertext,
    input  logic      [ 1:0] keysize,
    input  roundkey_t [14:0] round_keys,
    output logic             out_valid,
    output byte_t     [15:0] plaintext
);
    logic [3:0] nr;
    always_comb begin
        case (keysize)
            KS_128:  nr = 4'd10;
            KS_192:  nr = 4'd12;
            default: nr = 4'd14;
        endcase
    end

    state_t ct_state;
    AES_BYTES_TO_STATE b2s (
        .bytes_in  (ciphertext),
        .state_out (ct_state  )
    );

    state_t init_state;
    ADDROUNDKEY ark0 (
        .state_in  (ct_state      ),
        .round_key (round_keys[nr]),
        .state_out (init_state    )
    );

    state_t st;
    logic [3:0] cnt;
    logic running;

    logic [3:0] rk_idx;
    assign rk_idx = nr - cnt;

    state_t isr_out;
    INVSHIFTROWS isr (
        .state_in  (st     ),
        .state_out (isr_out)
    );

    state_t isb_out;
    INVSUBBYTES isb (
        .state_in  (isr_out),
        .state_out (isb_out)
    );

    state_t ark_out;
    ADDROUNDKEY ark (
        .state_in  (isb_out           ),
        .round_key (round_keys[rk_idx]),
        .state_out (ark_out           )
    );

    state_t imc_out;
    INVMIXCOLUMNS imc (
        .state_in  (ark_out),
        .state_out (imc_out)
    );

    logic is_last;
    assign is_last = (cnt == nr);

    state_t round_out;
    assign round_out = is_last ? ark_out : imc_out;

    always_ff @(posedge clk) begin
        if (rst) begin
            st        <= '0;
            cnt       <= '0;
            running   <= 1'b0;
            out_valid <= 1'b0;
        end else begin
            st        <= st;
            cnt       <= cnt;
            running   <= running;
            out_valid <= 1'b0;
            if (!running) begin
                if (in_valid) begin
                    st      <= init_state;
                    cnt     <= 4'd1;
                    running <= 1'b1;
                end
            end else begin
                st <= round_out;
                if (is_last) begin
                    running   <= 1'b0;
                    out_valid <= 1'b1;
                end else begin
                    cnt <= cnt + 4'd1;
                end
            end
        end
    end

    AES_STATE_TO_BYTES s2b (
        .state_in  (st       ),
        .bytes_out (plaintext)
    );
endmodule
