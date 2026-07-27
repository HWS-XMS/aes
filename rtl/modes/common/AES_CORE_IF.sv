// AES Core Interface
// Provides a standardized interface to the AES encryption/decryption core
interface AES_CORE_IF #(
    parameter KEYSIZE = 16  // 16, 24, or 32 bytes
);
    // Clock and reset
    logic         clk;
    logic         rst;
    
    // Control signals
    logic         start;        // Start single block operation
    logic         encrypt;      // 1=encrypt, 0=decrypt
    
    // Data signals
    logic [127:0] block_in;     // Input block (always 128 bits)
    logic [KEYSIZE*8-1:0] key;  // Key (128/192/256 bits)
    logic [127:0] block_out;    // Output block (always 128 bits)
    
    // Status signals
    logic         valid;        // Output valid
    logic         ready;        // Ready for new operation
    
    // Master modport (used by mode controllers)
    modport master (
        output clk, rst, start, encrypt, block_in, key,
        input  block_out, valid, ready
    );
    
    // Slave modport (used by AES core)
    modport slave (
        input  clk, rst, start, encrypt, block_in, key,
        output block_out, valid, ready
    );
    
    // Monitor modport (for verification)
    modport monitor (
        input clk, rst, start, encrypt, block_in, key,
              block_out, valid, ready
    );
    
endinterface : AES_CORE_IF