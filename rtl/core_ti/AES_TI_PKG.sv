// ============================================================================
// AES_TI_PKG - shared GF(2^8) math for the DOM-masked AES core.
//
// The masked S-box uses Fermat inversion  x^-1 = x^254  in the *standard* AES
// field GF(2^8) mod x^8+x^4+x^3+x+1 (0x11B).  Squaring is linear (Frobenius) so
// it is applied share-wise; only the GF multiplications are nonlinear and are
// protected by DOM_MUL.  No tower-field isomorphism is needed.
//
// Number of shares N (protection order d = N-1) is a *module* parameter, not a
// package parameter (SystemVerilog packages cannot be parameterized).
// ============================================================================
package AES_TI_PKG;

    import AES_PKG::*;

    localparam byte_t AES_AFFINE_CONST     = 8'h63;   // FIPS-197 S-box affine constant
    localparam byte_t AES_INV_AFFINE_CONST = 8'h05;   // inverse S-box affine constant

    // GF(2^8) multiply, modulo 0x11B.
    function automatic byte_t gf_mul8(input byte_t a, input byte_t b);
        byte_t aa, p;
        begin
            aa = a; p = 8'h00;
            for (int i = 0; i < 8; i++) begin
                if (b[i]) begin
                    p = p ^ aa;
                end
                if (aa[7]) begin
                    aa = (aa << 1) ^ 8'h1b;
                end else begin
                    aa = (aa << 1);
                end
            end
            return p;
        end
    endfunction

    // GF(2^8) square (linear map -> safe to apply per share).
    function automatic byte_t gf_sq(input byte_t a);
        return gf_mul8(a, a);
    endfunction

    // Repeated squaring: a^(2^k) (linear).
    function automatic byte_t gf_sq_pow(input byte_t a, input int k);
        byte_t r;
        begin
            r = a;
            for (int i = 0; i < k; i++) begin
                r = gf_sq(r);
            end
            return r;
        end
    endfunction

    // Linear part of the AES S-box affine transform (no constant):
    //   s_i = b_i ^ b_{i+4} ^ b_{i+5} ^ b_{i+6} ^ b_{i+7}   (indices mod 8)
    function automatic byte_t aes_affine_lin(input byte_t b);
        byte_t s;
        begin
            for (int i = 0; i < 8; i++) begin
                s[i] = b[i] ^ b[(i+4)%8] ^ b[(i+5)%8] ^ b[(i+6)%8] ^ b[(i+7)%8];
            end
            return s;
        end
    endfunction

    // Linear part of the inverse S-box affine transform (no constant):
    //   a_i = y_{i+2} ^ y_{i+5} ^ y_{i+7}   (indices mod 8)
    // Inverse S-box: gf_inv( aes_inv_affine_lin(y) ^ 0x05 ).
    function automatic byte_t aes_inv_affine_lin(input byte_t y);
        byte_t a;
        begin
            for (int i = 0; i < 8; i++) begin
                a[i] = y[(i+2)%8] ^ y[(i+5)%8] ^ y[(i+7)%8];
            end
            return a;
        end
    endfunction

    // Number of fresh GF(2^8) random words a DOM_MUL of N shares consumes.
    function automatic int dom_rand_words(input int n);
        return n*(n-1)/2;
    endfunction

    // Index of the fresh-randomness word for the unordered share pair {i,j}.
    function automatic int dom_pair_idx(input int i, input int j, input int n);
        int lo, hi, idx;
        begin
            lo = (i < j) ? i : j;
            hi = (i < j) ? j : i;
            idx = 0;
            for (int k = 0; k < lo; k++) begin
                idx = idx + (n - 1 - k);
            end
            idx = idx + (hi - lo - 1);
            return idx;
        end
    endfunction

endpackage : AES_TI_PKG
