#!/usr/bin/env python3
"""
Verify CBC mode results against Python crypto library
Compare with Verilog implementation results
"""

import struct
import sys

# Try to use cryptography library for verification
try:
    from Crypto.Cipher import AES
    from Crypto.Util.Padding import pad, unpad
    HAS_CRYPTO = True
except ImportError:
    print("Installing pycryptodome for verification...")
    import subprocess
    subprocess.check_call([sys.executable, "-m", "pip", "install", "pycryptodome", "--quiet"])
    from Crypto.Cipher import AES
    from Crypto.Util.Padding import pad, unpad
    HAS_CRYPTO = True

def bytes_to_hex(data):
    """Convert bytes to hex string"""
    return data.hex()

def test_cbc_identical_blocks():
    """Test CBC with 3 identical plaintext blocks - compare with Verilog results"""
    
    print("="*60)
    print("CBC Mode Verification - Python vs Verilog")
    print("="*60)
    
    # Same test parameters as Verilog
    key = bytes.fromhex('000102030405060708090a0b0c0d0e0f')
    iv = bytes.fromhex('00000000000000000000000000000000')  # All zeros IV
    plaintext_block = bytes.fromhex('00112233445566778899aabbccddeeff')
    
    print(f"\nTest Parameters:")
    print(f"Key: {bytes_to_hex(key)}")
    print(f"IV:  {bytes_to_hex(iv)}")
    print(f"Plaintext block (repeated 3x): {bytes_to_hex(plaintext_block)}")
    
    # Test data: 3 identical blocks
    plaintext = plaintext_block * 3  # 48 bytes total
    
    # CBC Encryption
    cipher = AES.new(key, AES.MODE_CBC, iv)
    ciphertext = cipher.encrypt(plaintext)
    
    # Extract individual blocks
    ct_blocks = [ciphertext[i:i+16] for i in range(0, 48, 16)]
    
    print("\n--- Python Crypto Results (CBC) ---")
    for i, ct in enumerate(ct_blocks):
        print(f"Block {i}: {bytes_to_hex(ct)}")
    
    print("\n--- Verilog Results (from our test) ---")
    verilog_results = [
        "69c4e0d86a7b0430d8cdb78070b4c55a",  # Block 0
        "7d7786be32d059a60ca8021a65dd9f09",  # Block 1  
        "0165797a8a1dba85b4c0f11caead88eb"   # Block 2
    ]
    
    for i, ct in enumerate(verilog_results):
        print(f"Block {i}: {ct}")
    
    # Compare results
    print("\n--- Comparison ---")
    all_match = True
    for i, (py_ct, vlog_ct) in enumerate(zip(ct_blocks, verilog_results)):
        py_hex = bytes_to_hex(py_ct)
        if py_hex == vlog_ct:
            print(f"Block {i}: ✅ MATCH")
        else:
            print(f"Block {i}: ❌ MISMATCH")
            print(f"  Python:  {py_hex}")
            print(f"  Verilog: {vlog_ct}")
            all_match = False
    
    if all_match:
        print("\n🎉 SUCCESS: All CBC blocks match between Python and Verilog!")
    else:
        print("\n⚠️  WARNING: Some blocks don't match")
    
    # Also verify decryption
    print("\n--- Decryption Verification ---")
    decipher = AES.new(key, AES.MODE_CBC, iv)
    decrypted = decipher.decrypt(ciphertext)
    
    if decrypted == plaintext:
        print("✅ Decryption successful - recovered original plaintext")
    else:
        print("❌ Decryption failed")
    
    # Manual CBC verification to understand the process
    print("\n--- Manual CBC Calculation ---")
    print("Understanding how CBC works:")
    
    # Block 0: PT XOR IV, then encrypt
    block0_xor = bytes(a ^ b for a, b in zip(plaintext_block, iv))
    print(f"Block 0 input (PT XOR IV): {bytes_to_hex(block0_xor)}")
    
    # For subsequent blocks, we'd XOR with previous ciphertext
    # This shows the chaining effect

def test_ecb_comparison():
    """Also test ECB for comparison"""
    
    print("\n" + "="*60)
    print("ECB Mode Verification - Python vs Verilog")
    print("="*60)
    
    key = bytes.fromhex('000102030405060708090a0b0c0d0e0f')
    plaintext_block = bytes.fromhex('00112233445566778899aabbccddeeff')
    
    # ECB encryption of single block
    cipher = AES.new(key, AES.MODE_ECB)
    ciphertext = cipher.encrypt(plaintext_block)
    
    print(f"\nSingle block ECB:")
    print(f"Plaintext:  {bytes_to_hex(plaintext_block)}")
    print(f"Python CT:  {bytes_to_hex(ciphertext)}")
    print(f"Verilog CT: 69c4e0d86a7b0430d8cdb78070b4c55a")
    
    if bytes_to_hex(ciphertext) == "69c4e0d86a7b0430d8cdb78070b4c55a":
        print("✅ ECB single block matches!")
    
    # Test 3 identical blocks
    plaintext = plaintext_block * 3
    ciphertext = cipher.encrypt(plaintext)
    
    print(f"\nThree identical blocks in ECB:")
    for i in range(3):
        ct_block = ciphertext[i*16:(i+1)*16]
        print(f"Block {i}: {bytes_to_hex(ct_block)}")
    
    print("Note: All three should be identical in ECB mode")

def test_padding_scenarios():
    """Test various padding scenarios"""
    
    print("\n" + "="*60)
    print("Padding Verification")
    print("="*60)
    
    key = bytes.fromhex('000102030405060708090a0b0c0d0e0f')
    
    test_cases = [
        (20, "00112233445566778899aabbccddeeff00112233"),
        (31, "00112233445566778899aabbccddeeff001122334455667788990a0b0c0d0e"),
        (32, "00112233445566778899aabbccddeeff" * 2)
    ]
    
    for length, hex_data in test_cases:
        data = bytes.fromhex(hex_data[:length*2])
        padded = pad(data, AES.block_size)
        
        print(f"\n{length}-byte input:")
        print(f"  Original length: {len(data)} bytes")
        print(f"  Padded length:   {len(padded)} bytes")
        print(f"  Padding added:   {len(padded) - len(data)} bytes")
        
        if len(padded) > len(data):
            padding_bytes = padded[len(data):]
            print(f"  Padding values:  {bytes_to_hex(padding_bytes)}")
            print(f"  Expected PKCS7:  {padding_bytes[0]:02x} repeated {len(padding_bytes)} times")

if __name__ == "__main__":
    test_cbc_identical_blocks()
    test_ecb_comparison()
    test_padding_scenarios()