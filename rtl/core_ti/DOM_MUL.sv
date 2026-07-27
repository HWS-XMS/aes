import AES_PKG::*;
import AES_TI_PKG::*;
// ============================================================================
// DOM_MUL - Domain-Oriented Masking independent GF(2^8) multiplier.
// (Gross, Mangard, Korak 2016, IACR ePrint 2016/486.)
//
// Computes N shares of c = a*b from N shares of a and N shares of b, where the
// two operands are independently masked.  Consumes N*(N-1)/2 fresh GF(2^8)
// random words (supplied externally) and has one register stage that stops
// glitches from crossing share domains.
//
//   c_i = p_{i,i}  XOR  ( XOR_{j!=i} Reg( p_{i,j} XOR z_{i,j} ) ),   z_{i,j}=z_{j,i}
//   p_{i,j} = a_i * b_j
//
// Recombining (XOR of all shares) gives a*b for any randomness, since each
// z_{i,j} appears in exactly two domains and cancels.
// ============================================================================
module DOM_MUL #(
    parameter  int N  = 2,
    localparam int RW = (N*(N-1)/2)*8,        // randomness width (bits)
    localparam int ZP = (RW > 0) ? RW : 1     // avoid a null range when N==1
)(
    input  logic            clk,
    input  logic            rst,
    input  logic [N*8-1:0]  a,
    input  logic [N*8-1:0]  b,
    input  logic [ZP-1:0]   z,
    output logic [N*8-1:0]  c
);
    integer i, j;

    // Partial products p[i][j] = a_i * b_j  (combinational).
    byte_t p [0:N-1][0:N-1];
    always_comb begin
        for (i = 0; i < N; i++) begin
            for (j = 0; j < N; j++) begin
                p[i][j] = gf_mul8(a[i*8 +: 8], b[j*8 +: 8]);
            end
        end
    end

    // Register stage: own-domain products and remasked cross terms.
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
                        q[i][j] <= p[i][j] ^ z[ dom_pair_idx(i,j,N)*8 +: 8 ];
                    end
                end
            end
        end
    end

    // Compression (combinational, after the register).
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
