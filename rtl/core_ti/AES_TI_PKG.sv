// AES_TI_PKG - shared GF(2^8) math for the DOM/HPC1-masked AES: Fermat inversion in
// the standard field (squaring linear/share-wise; only GF multiplies are protected).
// N (shares) is a module parameter, not a package one.
package AES_TI_PKG;

    import AES_PKG::*;

    localparam byte_t AES_AFFINE_CONST     = 8'h63;
    localparam byte_t AES_INV_AFFINE_CONST = 8'h05;

    // GF(2^8) multiply mod 0x11B.
    function automatic byte_t gf_mul8(input byte_t a, input byte_t b);
        byte_t aa;
        byte_t p;
        begin
            aa = a;
            p  = 8'h00;
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

    // GF(2^8) square (linear).
    function automatic byte_t gf_sq(input byte_t a);
        return gf_mul8(a, a);
    endfunction

    // Repeated squaring a^(2^k) (linear).
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

    // Linear part of the S-box affine: s_i = b_i ^ b_{i+4} ^ b_{i+5} ^ b_{i+6} ^ b_{i+7}.
    function automatic byte_t aes_affine_lin(input byte_t b);
        byte_t s;
        begin
            for (int i = 0; i < 8; i++) begin
                s[i] = b[i] ^ b[(i+4)%8] ^ b[(i+5)%8] ^ b[(i+6)%8] ^ b[(i+7)%8];
            end
            return s;
        end
    endfunction

    // Linear part of the inverse S-box affine: a_i = y_{i+2} ^ y_{i+5} ^ y_{i+7}.
    function automatic byte_t aes_inv_affine_lin(input byte_t y);
        byte_t a;
        begin
            for (int i = 0; i < 8; i++) begin
                a[i] = y[(i+2)%8] ^ y[(i+5)%8] ^ y[(i+7)%8];
            end
            return a;
        end
    endfunction

    // Fresh GF(2^8) words a DOM_MUL of n shares consumes.
    function automatic int dom_rand_words(input int n);
        return n*(n-1)/2;
    endfunction

    // Fresh words a REFRESH_TI (SNI refresh) of n shares consumes (fullverif MSKref):
    // n=2 -> 1, n=3 -> 2, n>=4 -> n.
    function automatic int ref_rand_words(input int n);
        if (n <= 3) begin
            return n - 1;
        end else begin
            return n;
        end
    endfunction

    // Fresh words an HPC1 multiplier consumes: SNI refresh + DOM multiply.
    function automatic int hpc1_rand_words(input int n);
        return ref_rand_words(n) + dom_rand_words(n);
    endfunction

    // Masked S-box latency (four 2-cycle HPC1 multiplies; affine combinational).
    localparam int SBOX_LAT = 8;

    // Fresh words one masked S-box (4 HPC1 multiplies) consumes.
    function automatic int sbox_rand_words(input int n);
        return 4*hpc1_rand_words(n);
    endfunction

    // Index of the fresh-randomness word for unordered share pair {i,j}.
    function automatic int dom_pair_idx(input int i, input int j, input int n);
        int lo;
        int hi;
        int idx;
        begin
            lo  = (i < j) ? i : j;
            hi  = (i < j) ? j : i;
            idx = 0;
            for (int k = 0; k < lo; k++) begin
                idx = idx + (n - 1 - k);
            end
            idx = idx + (hi - lo - 1);
            return idx;
        end
    endfunction

endpackage : AES_TI_PKG
