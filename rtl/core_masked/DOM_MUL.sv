import AES_PKG::*;
import AES_MASKED_PKG::*;
// DOM_MUL - Domain-Oriented Masking independent GF(2^8) multiplier, N shares
// (Gross-Mangard-Korak, ePrint 2016/486).  Requires INDEPENDENTLY masked operands.
//   c_i = p_ii ^ ( ^_{j!=i} Reg( p_ij ^ z_ij ) ),  p_ij = a_i*b_j,  z_ij = z_ji
// N*(N-1)/2 fresh words; one register stage stops cross-domain glitches.  Latency 1.
module DOM_MUL #(
    parameter  int N  = 2,
    localparam int RW = (N*(N-1)/2)*8,
    localparam int ZP = (RW > 0) ? RW : 1
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  a,
    input  logic [N*8-1:0]  b,
    input  logic [ZP-1:0]   z,
    output logic [N*8-1:0]  c
);
    integer i;
    integer j;

    byte_t p [0:N-1][0:N-1];
    always_comb begin
        for (i = 0; i < N; i++) begin
            for (j = 0; j < N; j++) begin
                p[i][j] = gf_mul8(a[i*8 +: 8], b[j*8 +: 8]);
            end
        end
    end

    byte_t pii [0:N-1];
    byte_t q   [0:N-1][0:N-1];
    always_ff @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < N; i++) begin
                pii[i] <= 8'h00;
                for (j = 0; j < N; j++) begin
                    q[i][j] <= 8'h00;
                end
            end
        end else begin
            for (i = 0; i < N; i++) begin
                pii[i] <= p[i][i];
                for (j = 0; j < N; j++) begin
                    if (i != j) begin
                        q[i][j] <= p[i][j] ^ z[dom_pair_idx(i,j,N)*8 +: 8];
                    end
                end
            end
        end
    end

    byte_t acc;
    always_comb begin
        for (i = 0; i < N; i++) begin
            acc = pii[i];
            for (j = 0; j < N; j++) begin
                if (i != j) begin
                    acc = acc ^ q[i][j];
                end
            end
            c[i*8 +: 8] = acc;
        end
    end
endmodule
