// Galois Field GF(2^128) Multiplication for GCM
// Implements multiplication in GF(2^128) with reduction polynomial
// x^128 + x^7 + x^2 + x + 1 
// Following NIST SP 800-38D specification
module GF_MULT_128 (
    input  logic [127:0] a,      // First operand
    input  logic [127:0] b,      // Second operand (usually H)
    output logic [127:0] product // Result of a • b in GF(2^128)
);
    
    // The reduction polynomial for GCM (R = 11100001 || 0^120)
    // This is used when the LSB is 1 during right shift
    localparam logic [127:0] R = 128'hE1000000000000000000000000000000;
    
    // GCM GF multiplication algorithm from NIST SP 800-38D
    // Process bits of b from MSB to LSB
    always_comb begin
        logic [127:0] z;
        logic [127:0] v;
        
        z = 128'h0;
        v = a;
        
        // Process each bit of b from MSB to LSB
        for (int i = 0; i < 128; i++) begin
            // If bit (127-i) of b is set, XOR v into result
            if (b[127-i]) begin
                z = z ^ v;
            end
            
            // Multiply v by x (right shift in GCM's bit ordering)
            if (v[0]) begin  // If LSB is set
                v = (v >> 1) ^ R;
            end else begin
                v = v >> 1;
            end
        end
        
        product = z;
    end
    
endmodule : GF_MULT_128
