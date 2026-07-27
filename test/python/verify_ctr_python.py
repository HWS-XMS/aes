#!/usr/bin/env python3
"""
Verify CTR mode against Python crypto library
"""

from Crypto.Cipher import AES
from Crypto.Util import Counter
import struct

def bytes_to_hex(data):
    """Convert bytes to hex string"""
    return data.hex()

def test_ctr_mode():
    """Test CTR mode and compare with Verilog results"""
    
    print("="*60)
    print("CTR Mode Verification - Python vs Verilog")
    print("="*60)
    
    # Test parameters (same as Verilog)
    key = bytes.fromhex('000102030405060708090a0b0c0d0e0f')
    nonce = bytes.fromhex('00000000000000000000000000000001')
    plaintext = bytes.fromhex('00112233445566778899aabbccddeeff')
    
    print(f"\nTest Parameters:")
    print(f"Key:       {bytes_to_hex(key)}")
    print(f"Nonce/IV:  {bytes_to_hex(nonce)}")
    print(f"Plaintext: {bytes_to_hex(plaintext)}")
    
    # Method 1: Using Counter utility
    print("\n--- Method 1: Using Crypto.Util.Counter ---")
    
    # Create counter starting at 1
    ctr = Counter.new(128, initial_value=1)
    cipher = AES.new(key, AES.MODE_CTR, counter=ctr)
    ciphertext = cipher.encrypt(plaintext)
    
    print(f"Ciphertext: {bytes_to_hex(ciphertext)}")
    
    # Decrypt (reinitialize counter)
    ctr = Counter.new(128, initial_value=1)
    decipher = AES.new(key, AES.MODE_CTR, counter=ctr)
    decrypted = decipher.decrypt(ciphertext)
    
    print(f"Decrypted:  {bytes_to_hex(decrypted)}")
    print(f"Match: {decrypted == plaintext}")
    
    # Method 2: Manual CTR implementation (for understanding)
    print("\n--- Method 2: Manual CTR Implementation ---")
    
    # Encrypt counter values to generate keystream
    ecb_cipher = AES.new(key, AES.MODE_ECB)
    
    # Counter = 1
    counter1 = (1).to_bytes(16, 'big')
    keystream1 = ecb_cipher.encrypt(counter1)
    print(f"Counter 1:   {bytes_to_hex(counter1)}")
    print(f"Keystream 1: {bytes_to_hex(keystream1)}")
    
    # Counter = 2
    counter2 = (2).to_bytes(16, 'big')
    keystream2 = ecb_cipher.encrypt(counter2)
    print(f"Counter 2:   {bytes_to_hex(counter2)}")
    print(f"Keystream 2: {bytes_to_hex(keystream2)}")
    
    # XOR plaintext with keystream
    ciphertext_manual = bytes(a ^ b for a, b in zip(plaintext, keystream1))
    print(f"\nManual encryption (PT XOR Keystream1):")
    print(f"  Result: {bytes_to_hex(ciphertext_manual)}")
    
    # Compare with Verilog results
    print("\n--- Verilog Results (from our test) ---")
    verilog_results = {
        'counter1': '00000000000000000000000000000001',
        'keystream1': '7346139595c0b41e497bbde365f42d0a',
        'ciphertext1': '735731a6d195d269c1e21758a929c3f5',
        'counter2': '00000000000000000000000000000002',
        'keystream2': '49d68753999ba68ce3897a686081b09d',
        'ciphertext2': '49c7a560ddcec0fb6b10d0d3ac5c5e62'
    }
    
    print(f"Keystream 1: {verilog_results['keystream1']}")
    print(f"Ciphertext 1: {verilog_results['ciphertext1']}")
    
    # Verify keystreams match
    print("\n--- Comparison ---")
    if bytes_to_hex(keystream1) == verilog_results['keystream1']:
        print("✅ Keystream 1 matches!")
    else:
        print(f"❌ Keystream 1 mismatch:")
        print(f"  Python:  {bytes_to_hex(keystream1)}")
        print(f"  Verilog: {verilog_results['keystream1']}")
    
    if bytes_to_hex(keystream2) == verilog_results['keystream2']:
        print("✅ Keystream 2 matches!")
    else:
        print(f"❌ Keystream 2 mismatch:")
        print(f"  Python:  {bytes_to_hex(keystream2)}")
        print(f"  Verilog: {verilog_results['keystream2']}")
    
    if bytes_to_hex(ciphertext_manual) == verilog_results['ciphertext1']:
        print("✅ Ciphertext matches!")
    else:
        print(f"❌ Ciphertext mismatch:")
        print(f"  Python:  {bytes_to_hex(ciphertext_manual)}")
        print(f"  Verilog: {verilog_results['ciphertext1']}")
    
    # Test multi-block
    print("\n--- Multi-block CTR Test ---")
    plaintext_3blocks = plaintext * 3
    
    # Reset counter
    ctr = Counter.new(128, initial_value=1)
    cipher = AES.new(key, AES.MODE_CTR, counter=ctr)
    ciphertext_3blocks = cipher.encrypt(plaintext_3blocks)
    
    print(f"3 blocks of identical plaintext:")
    for i in range(3):
        block = ciphertext_3blocks[i*16:(i+1)*16]
        print(f"  Block {i}: {bytes_to_hex(block)}")
    print("Note: All different due to different counter values!")

if __name__ == "__main__":
    test_ctr_mode()