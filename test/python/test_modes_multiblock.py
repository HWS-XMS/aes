#!/usr/bin/env python3
"""
Test multi-block AES modes with padding to generate test vectors
for Verilog verification
"""

import os
import sys

# Use built-in hashlib for basic testing
import hashlib

def manual_pkcs7_pad(data, block_size=16):
    """Apply PKCS7 padding"""
    pad_len = block_size - (len(data) % block_size)
    if pad_len == 0:
        pad_len = block_size  # Always pad
    padding = bytes([pad_len] * pad_len)
    return data + padding

def manual_pkcs7_unpad(data):
    """Remove PKCS7 padding"""
    pad_len = data[-1]
    return data[:-pad_len]

def bytes_to_hex(data):
    """Convert bytes to hex string"""
    return data.hex()

def hex_to_verilog_array(data_hex):
    """Convert hex string to Verilog byte array format"""
    result = "{"
    for i in range(0, len(data_hex), 2):
        if i > 0:
            result += ", "
        result += f"8'h{data_hex[i:i+2]}"
    result += "}"
    return result

def simple_xor(a, b):
    """XOR two byte arrays"""
    return bytes(x ^ y for x, y in zip(a, b))

def test_multiblock_scenarios():
    """Test various multi-block scenarios"""
    
    print("="*60)
    print("Multi-Block AES Mode Test Vectors")
    print("="*60)
    
    # Test key
    key = bytes.fromhex('000102030405060708090a0b0c0d0e0f')
    
    # Test scenarios
    test_cases = [
        {
            'name': 'Two full blocks (32 bytes)',
            'data': bytes.fromhex('00112233445566778899aabbccddeeff' * 2),
            'description': 'No padding needed for ECB, tests basic multi-block'
        },
        {
            'name': '48 bytes (3 full blocks)',
            'data': bytes.fromhex('00112233445566778899aabbccddeeff' * 3),
            'description': 'Three complete blocks'
        },
        {
            'name': '20 bytes (needs padding)',
            'data': bytes.fromhex('00112233445566778899aabbccddeeff00112233'),
            'description': 'Requires 12 bytes of padding'
        },
        {
            'name': '31 bytes (needs 1 byte padding)',
            'data': bytes.fromhex('00112233445566778899aabbccddeeff001122334455667788990a0b0c0d0e'),
            'description': 'Almost two blocks, needs minimal padding'
        },
        {
            'name': '5 bytes (short message)',
            'data': bytes.fromhex('0011223344'),
            'description': 'Very short message requiring 11 bytes padding'
        }
    ]
    
    print("\nTest Key: " + bytes_to_hex(key))
    
    for tc in test_cases:
        print(f"\n--- {tc['name']} ---")
        print(f"Description: {tc['description']}")
        print(f"Input length: {len(tc['data'])} bytes")
        print(f"Input data: {bytes_to_hex(tc['data'])}")
        
        # Apply PKCS7 padding
        padded = manual_pkcs7_pad(tc['data'])
        print(f"After PKCS7 padding: {len(padded)} bytes")
        print(f"Padded data: {bytes_to_hex(padded)}")
        
        # Show padding bytes
        if len(padded) > len(tc['data']):
            pad_bytes = padded[len(tc['data']):]
            print(f"Padding bytes: {bytes_to_hex(pad_bytes)}")
        
        # Calculate number of blocks
        num_blocks = len(padded) // 16
        print(f"Number of 16-byte blocks: {num_blocks}")
        
        # Show individual blocks
        for i in range(num_blocks):
            block = padded[i*16:(i+1)*16]
            print(f"  Block {i}: {bytes_to_hex(block)}")

def generate_cbc_test():
    """Generate CBC mode test showing chaining"""
    
    print("\n" + "="*60)
    print("CBC Mode Chaining Test")
    print("="*60)
    
    key = bytes.fromhex('000102030405060708090a0b0c0d0e0f')
    iv = bytes.fromhex('00000000000000000000000000000000')
    
    # Use identical plaintext blocks to show chaining effect
    plaintext_block = bytes.fromhex('00112233445566778899aabbccddeeff')
    
    print(f"\nKey: {bytes_to_hex(key)}")
    print(f"IV:  {bytes_to_hex(iv)}")
    print(f"\nTesting 3 identical plaintext blocks to demonstrate chaining:")
    print(f"Each block: {bytes_to_hex(plaintext_block)}")
    
    # Simulate CBC chaining (simplified - not actual AES)
    print("\nCBC Chaining Effect (conceptual):")
    print("Block 0: PT XOR IV -> Encrypt -> CT0")
    print("Block 1: PT XOR CT0 -> Encrypt -> CT1") 
    print("Block 2: PT XOR CT1 -> Encrypt -> CT2")
    print("\nWith identical plaintext blocks, CBC produces different ciphertexts!")
    
    # Show what happens without chaining (ECB)
    print("\nECB Mode (no chaining):")
    print("Block 0: PT -> Encrypt -> CT")
    print("Block 1: PT -> Encrypt -> CT (same as block 0!)")
    print("Block 2: PT -> Encrypt -> CT (same as block 0!)")
    print("\nECB produces identical ciphertexts for identical plaintexts!")

def generate_verilog_testbench():
    """Generate Verilog testbench for multi-block testing"""
    
    print("\n" + "="*60)
    print("Verilog Testbench for Multi-Block Testing")
    print("="*60)
    
    testbench = '''
// Multi-block AES modes test with padding and chaining
module test_modes_multiblock();
    import AES_PKG::*;
    
    logic clk, rst;
    
    // Test data: 20 bytes (needs padding to 32 bytes)
    localparam TEST_SIZE = 20;
    byte_t [TEST_SIZE-1:0] test_data = {
        8'h00, 8'h11, 8'h22, 8'h33, 8'h44, 8'h55, 8'h66, 8'h77,
        8'h88, 8'h99, 8'haa, 8'hbb, 8'hcc, 8'hdd, 8'hee, 8'hff,
        8'h00, 8'h11, 8'h22, 8'h33
    };
    
    // Expected PKCS7 padded result (32 bytes)
    byte_t [31:0] padded_data = {
        8'h00, 8'h11, 8'h22, 8'h33, 8'h44, 8'h55, 8'h66, 8'h77,
        8'h88, 8'h99, 8'haa, 8'hbb, 8'hcc, 8'hdd, 8'hee, 8'hff,
        8'h00, 8'h11, 8'h22, 8'h33, 8'h0c, 8'h0c, 8'h0c, 8'h0c,
        8'h0c, 8'h0c, 8'h0c, 8'h0c, 8'h0c, 8'h0c, 8'h0c, 8'h0c
    };
    
    byte_t [15:0] key = {
        8'h00, 8'h01, 8'h02, 8'h03, 8'h04, 8'h05, 8'h06, 8'h07,
        8'h08, 8'h09, 8'h0a, 8'h0b, 8'h0c, 8'h0d, 8'h0e, 8'h0f
    };
    
    // For CBC testing
    byte_t [15:0] iv = '0;  // All zeros IV
    
    // Results storage
    byte_t [15:0] ecb_results[2];  // 2 blocks after padding
    byte_t [15:0] cbc_results[2];  // 2 blocks after padding
    
    // Test ECB on first block
    byte_t [15:0] plaintext, ciphertext;
    AES_ENCRYPT #(.KEYSIZE(16)) ecb_encrypt (
        .clk(clk),
        .rst(rst),
        .plaintext(plaintext),
        .key(key),
        .ciphertext(ciphertext)
    );
    
    initial clk = 0;
    always #5 clk = ~clk;
    
    initial begin
        $display("=== Multi-Block AES Testing ===\\n");
        
        rst = 1;
        #20 rst = 0;
        
        // Test ECB mode on two blocks
        $display("ECB Mode - Processing 2 blocks after padding:");
        
        // Block 0
        plaintext = padded_data[15:0];
        #100;
        ecb_results[0] = ciphertext;
        $display("Block 0: PT=%032x -> CT=%032x", plaintext, ciphertext);
        
        // Block 1  
        plaintext = padded_data[31:16];
        #100;
        ecb_results[1] = ciphertext;
        $display("Block 1: PT=%032x -> CT=%032x", plaintext, ciphertext);
        
        // Show padding effect
        $display("\\nPadding Analysis:");
        $display("Original data: 20 bytes");
        $display("Padding added: 12 bytes of value 0x0C");
        $display("Total blocks: 2");
        
        // Simulate CBC (simplified)
        $display("\\nCBC Mode Simulation (simplified):");
        $display("Block 0: PT XOR IV, then encrypt");
        $display("Block 1: PT XOR CT[0], then encrypt");
        $display("Result: Different ciphertexts even for similar blocks!");
        
        $display("\\n=== Test Complete ===");
        $finish;
    end
endmodule
'''
    print(testbench)

if __name__ == "__main__":
    test_multiblock_scenarios()
    generate_cbc_test()
    generate_verilog_testbench()