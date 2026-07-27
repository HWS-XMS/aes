#!/usr/bin/env python3
"""
Verify GCM mode against Python crypto library
"""

from Crypto.Cipher import AES
import struct

def bytes_to_hex(data):
    """Convert bytes to hex string"""
    return data.hex()

def test_gcm_mode():
    """Test GCM mode and compare with Verilog results"""
    
    print("="*60)
    print("GCM Mode Verification - Python vs Verilog")
    print("="*60)
    
    # Test parameters
    key = bytes.fromhex('000102030405060708090a0b0c0d0e0f')
    iv = bytes.fromhex('000000000000000000000001')  # 96-bit IV for GCM
    plaintext = bytes.fromhex('00112233445566778899aabbccddeeff')
    aad = bytes.fromhex('feedfacedeadbeef')  # Additional authenticated data
    
    print(f"\nTest Parameters:")
    print(f"Key:       {bytes_to_hex(key)}")
    print(f"IV:        {bytes_to_hex(iv)}")
    print(f"Plaintext: {bytes_to_hex(plaintext)}")
    print(f"AAD:       {bytes_to_hex(aad)}")
    
    # Test 1: Basic GCM encryption with AAD
    print("\n--- Test 1: GCM Encryption with AAD ---")
    
    cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    cipher.update(aad)  # Add AAD
    ciphertext, auth_tag = cipher.encrypt_and_digest(plaintext)
    
    print(f"Ciphertext: {bytes_to_hex(ciphertext)}")
    print(f"Auth Tag:   {bytes_to_hex(auth_tag)}")
    
    # Decrypt and verify
    decipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    decipher.update(aad)
    try:
        decrypted = decipher.decrypt_and_verify(ciphertext, auth_tag)
        print(f"Decrypted:  {bytes_to_hex(decrypted)}")
        print(f"✅ Authentication passed!")
        print(f"✅ Decryption match: {decrypted == plaintext}")
    except ValueError:
        print("❌ Authentication failed!")
    
    # Test 2: GCM without AAD
    print("\n--- Test 2: GCM Encryption without AAD ---")
    
    cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    ciphertext_no_aad, auth_tag_no_aad = cipher.encrypt_and_digest(plaintext)
    
    print(f"Ciphertext: {bytes_to_hex(ciphertext_no_aad)}")
    print(f"Auth Tag:   {bytes_to_hex(auth_tag_no_aad)}")
    
    # Test 3: Multi-block GCM
    print("\n--- Test 3: Multi-block GCM ---")
    
    plaintext_3blocks = plaintext * 3
    cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    cipher.update(aad)
    ciphertext_3blocks, auth_tag_3blocks = cipher.encrypt_and_digest(plaintext_3blocks)
    
    print(f"Plaintext size: {len(plaintext_3blocks)} bytes")
    print(f"Ciphertext: {bytes_to_hex(ciphertext_3blocks)}")
    print(f"Auth Tag:   {bytes_to_hex(auth_tag_3blocks)}")
    
    # Test 4: Understanding GCM internals
    print("\n--- Test 4: GCM Internal Components ---")
    
    # GCM = CTR mode encryption + GHASH authentication
    # Counter starts at IV || 0x00000002 for data (0x00000001 is for tag)
    
    # Show how counter values work in GCM
    print("\nGCM Counter Values:")
    print(f"  Counter 0: {iv.hex()}00000000 (not used)")
    print(f"  Counter 1: {iv.hex()}00000001 (for encrypting auth tag)")
    print(f"  Counter 2: {iv.hex()}00000002 (for first data block)")
    print(f"  Counter 3: {iv.hex()}00000003 (for second data block)")
    
    # Generate H = AES_K(0)
    ecb_cipher = AES.new(key, AES.MODE_ECB)
    h = ecb_cipher.encrypt(bytes(16))
    print(f"\nH value (AES_K(0)): {bytes_to_hex(h)}")
    
    # Generate counter mask for tag
    counter1 = iv + bytes.fromhex('00000001')
    tag_mask = ecb_cipher.encrypt(counter1)
    print(f"Tag mask (AES_K(counter1)): {bytes_to_hex(tag_mask)}")
    
    # Generate keystream for first data block
    counter2 = iv + bytes.fromhex('00000002')
    keystream1 = ecb_cipher.encrypt(counter2)
    print(f"Keystream 1 (AES_K(counter2)): {bytes_to_hex(keystream1)}")
    
    # Manual ciphertext (like CTR)
    ciphertext_manual = bytes(a ^ b for a, b in zip(plaintext, keystream1))
    print(f"\nManual ciphertext (PT XOR Keystream1): {bytes_to_hex(ciphertext_manual)}")
    print(f"GCM ciphertext:                        {bytes_to_hex(ciphertext)}")
    print(f"Match: {ciphertext_manual == ciphertext}")
    
    # Test 5: Variable length inputs
    print("\n--- Test 5: Variable Length Inputs ---")
    
    test_cases = [
        (b"Hello", b"AAD1"),
        (b"Hello World!", b"AAD12345"),
        (b"This is a test message longer than 16 bytes", b"Short"),
        (b"Short", b"This AAD is longer than the plaintext message"),
    ]
    
    for pt, aad_data in test_cases:
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        cipher.update(aad_data)
        ct, tag = cipher.encrypt_and_digest(pt)
        print(f"\nPlaintext ({len(pt):2} bytes): {pt.decode()[:20]}")
        print(f"AAD ({len(aad_data):2} bytes):       {aad_data.decode()[:20]}")
        print(f"  Ciphertext: {bytes_to_hex(ct)[:40]}...")
        print(f"  Auth Tag:   {bytes_to_hex(tag)}")
    
    # Test 6: Authentication failure detection
    print("\n--- Test 6: Authentication Failure Detection ---")
    
    # Encrypt
    cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    cipher.update(aad)
    ct, tag = cipher.encrypt_and_digest(plaintext)
    
    # Try to decrypt with wrong tag
    wrong_tag = bytes([(b + 1) % 256 for b in tag])
    decipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    decipher.update(aad)
    try:
        decipher.decrypt_and_verify(ct, wrong_tag)
        print("❌ Should have failed authentication!")
    except ValueError:
        print("✅ Correctly detected authentication failure with wrong tag")
    
    # Try to decrypt with wrong AAD
    decipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    decipher.update(b"wrong_aad")
    try:
        decipher.decrypt_and_verify(ct, tag)
        print("❌ Should have failed authentication!")
    except ValueError:
        print("✅ Correctly detected authentication failure with wrong AAD")
    
    # Try to decrypt with modified ciphertext
    modified_ct = bytes([(b ^ 0xFF) for b in ct])
    decipher = AES.new(key, AES.MODE_GCM, nonce=iv)
    decipher.update(aad)
    try:
        decipher.decrypt_and_verify(modified_ct, tag)
        print("❌ Should have failed authentication!")
    except ValueError:
        print("✅ Correctly detected authentication failure with modified ciphertext")

    return {
        'key': bytes_to_hex(key),
        'iv': bytes_to_hex(iv),
        'plaintext': bytes_to_hex(plaintext),
        'aad': bytes_to_hex(aad),
        'ciphertext': bytes_to_hex(ciphertext),
        'auth_tag': bytes_to_hex(auth_tag),
        'h': bytes_to_hex(h),
        'tag_mask': bytes_to_hex(tag_mask),
        'keystream1': bytes_to_hex(keystream1)
    }

if __name__ == "__main__":
    results = test_gcm_mode()
    
    print("\n" + "="*60)
    print("Test Vectors for Verilog Verification:")
    print("="*60)
    for key, value in results.items():
        print(f"{key:12}: {value}")