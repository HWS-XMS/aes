#!/usr/bin/env python3
"""
Comprehensive GCM verification against Python crypto library
Tests with random data of variable lengths
"""
from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
import random
import time

def bytes_to_hex(data):
    """Convert bytes to hex string"""
    return data.hex()

def test_gcm_comprehensive():
    """Test GCM with various data patterns and sizes"""
    
    print("=" * 80)
    print("Comprehensive GCM Testing - Variable Length Random Data")
    print("=" * 80)
    
    # Test categories
    test_cases = []
    
    # Category 1: Edge cases
    print("\n1. Testing edge cases...")
    edge_cases = [
        # (plaintext_len, aad_len, description)
        (0, 0, "Empty plaintext and AAD"),
        (0, 16, "Empty plaintext with AAD"),
        (16, 0, "One block plaintext, no AAD"),
        (1, 1, "Single byte plaintext and AAD"),
        (15, 15, "Non-aligned plaintext and AAD"),
        (17, 17, "Just over one block"),
        (31, 31, "Just under two blocks"),
        (32, 32, "Exactly two blocks"),
        (33, 33, "Just over two blocks"),
    ]
    
    for pt_len, aad_len, desc in edge_cases:
        key = get_random_bytes(16)  # AES-128
        iv = get_random_bytes(12)   # 96-bit IV
        plaintext = get_random_bytes(pt_len) if pt_len > 0 else b''
        aad = get_random_bytes(aad_len) if aad_len > 0 else b''
        
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            cipher.update(aad)
        ciphertext, tag = cipher.encrypt_and_digest(plaintext)
        
        test_cases.append({
            'category': 'edge_case',
            'description': desc,
            'key': bytes_to_hex(key),
            'iv': bytes_to_hex(iv),
            'plaintext': bytes_to_hex(plaintext),
            'aad': bytes_to_hex(aad),
            'ciphertext': bytes_to_hex(ciphertext),
            'tag': bytes_to_hex(tag),
            'pt_len': pt_len,
            'aad_len': aad_len
        })
        print(f"  ✓ {desc}: PT={pt_len}B, AAD={aad_len}B")
    
    # Category 2: Random small data (< 64 bytes)
    print("\n2. Testing small random data (< 64 bytes)...")
    for i in range(10):
        key = get_random_bytes(16)
        iv = get_random_bytes(12)
        pt_len = random.randint(1, 63)
        aad_len = random.randint(0, 63)
        plaintext = get_random_bytes(pt_len)
        aad = get_random_bytes(aad_len) if aad_len > 0 else b''
        
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            cipher.update(aad)
        ciphertext, tag = cipher.encrypt_and_digest(plaintext)
        
        test_cases.append({
            'category': 'small_random',
            'description': f'Small random test {i+1}',
            'key': bytes_to_hex(key),
            'iv': bytes_to_hex(iv),
            'plaintext': bytes_to_hex(plaintext),
            'aad': bytes_to_hex(aad),
            'ciphertext': bytes_to_hex(ciphertext),
            'tag': bytes_to_hex(tag),
            'pt_len': pt_len,
            'aad_len': aad_len
        })
    print(f"  ✓ Generated 10 small random tests")
    
    # Category 3: Random medium data (64-256 bytes)
    print("\n3. Testing medium random data (64-256 bytes)...")
    for i in range(10):
        key = get_random_bytes(random.choice([16, 24, 32]))  # Random key size
        iv = get_random_bytes(12)
        pt_len = random.randint(64, 256)
        aad_len = random.randint(0, 256)
        plaintext = get_random_bytes(pt_len)
        aad = get_random_bytes(aad_len) if aad_len > 0 else b''
        
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            cipher.update(aad)
        ciphertext, tag = cipher.encrypt_and_digest(plaintext)
        
        test_cases.append({
            'category': 'medium_random',
            'description': f'Medium random test {i+1}',
            'key': bytes_to_hex(key),
            'iv': bytes_to_hex(iv),
            'plaintext': bytes_to_hex(plaintext),
            'aad': bytes_to_hex(aad),
            'ciphertext': bytes_to_hex(ciphertext),
            'tag': bytes_to_hex(tag),
            'pt_len': pt_len,
            'aad_len': aad_len,
            'key_size': len(key)
        })
    print(f"  ✓ Generated 10 medium random tests")
    
    # Category 4: Random large data (256-1024 bytes)
    print("\n4. Testing large random data (256-1024 bytes)...")
    for i in range(10):
        key = get_random_bytes(random.choice([16, 24, 32]))
        iv = get_random_bytes(12)
        pt_len = random.randint(256, 1024)
        aad_len = random.randint(0, 512)
        plaintext = get_random_bytes(pt_len)
        aad = get_random_bytes(aad_len) if aad_len > 0 else b''
        
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            cipher.update(aad)
        ciphertext, tag = cipher.encrypt_and_digest(plaintext)
        
        test_cases.append({
            'category': 'large_random',
            'description': f'Large random test {i+1}',
            'key': bytes_to_hex(key),
            'iv': bytes_to_hex(iv),
            'plaintext': bytes_to_hex(plaintext),
            'aad': bytes_to_hex(aad),
            'ciphertext': bytes_to_hex(ciphertext),
            'tag': bytes_to_hex(tag),
            'pt_len': pt_len,
            'aad_len': aad_len,
            'key_size': len(key)
        })
    print(f"  ✓ Generated 10 large random tests")
    
    # Verify all test cases
    print("\n" + "=" * 80)
    print("Verification Phase")
    print("=" * 80)
    
    passed = 0
    failed = 0
    
    for i, tc in enumerate(test_cases):
        key = bytes.fromhex(tc['key'])
        iv = bytes.fromhex(tc['iv'])
        plaintext = bytes.fromhex(tc['plaintext']) if tc['plaintext'] else b''
        aad = bytes.fromhex(tc['aad']) if tc['aad'] else b''
        expected_ct = bytes.fromhex(tc['ciphertext']) if tc['ciphertext'] else b''
        expected_tag = bytes.fromhex(tc['tag'])
        
        # Re-encrypt to verify
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            cipher.update(aad)
        ciphertext, tag = cipher.encrypt_and_digest(plaintext)
        
        # Decrypt and verify
        decipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            decipher.update(aad)
        
        try:
            decrypted = decipher.decrypt_and_verify(ciphertext, tag)
            if ciphertext == expected_ct and tag == expected_tag and decrypted == plaintext:
                passed += 1
                if i < 10:  # Print details for first few tests
                    print(f"Test {i+1} [{tc['category']}]: ✅ PASS - {tc['description']}")
            else:
                failed += 1
                print(f"Test {i+1} [{tc['category']}]: ❌ FAIL - {tc['description']}")
        except ValueError:
            failed += 1
            print(f"Test {i+1} [{tc['category']}]: ❌ FAIL - Authentication error")
    
    # Summary statistics
    print("\n" + "=" * 80)
    print("Test Summary")
    print("=" * 80)
    print(f"Total Tests: {len(test_cases)}")
    print(f"Passed: {passed}")
    print(f"Failed: {failed}")
    
    if failed == 0:
        print("\n✅ All tests passed successfully!")
    else:
        print(f"\n❌ {failed} tests failed")
    
    # Performance test
    print("\n" + "=" * 80)
    print("Performance Test")
    print("=" * 80)
    
    key = get_random_bytes(16)
    iv = get_random_bytes(12)
    plaintext = get_random_bytes(1024 * 10)  # 10KB
    aad = get_random_bytes(256)
    
    start_time = time.time()
    iterations = 100
    
    for _ in range(iterations):
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        cipher.update(aad)
        ciphertext, tag = cipher.encrypt_and_digest(plaintext)
    
    elapsed = time.time() - start_time
    throughput = (len(plaintext) * iterations) / elapsed / 1024 / 1024  # MB/s
    
    print(f"Encrypted {iterations} x 10KB blocks in {elapsed:.3f} seconds")
    print(f"Throughput: {throughput:.2f} MB/s")
    
    # Print sample test vectors for Verilog
    print("\n" + "=" * 80)
    print("Sample Test Vectors for Verilog")
    print("=" * 80)
    
    for tc in test_cases[:3]:
        print(f"\n// {tc['description']}")
        print(f"// Category: {tc['category']}")
        print(f"key       = 128'h{tc['key']};")
        print(f"iv        = 96'h{tc['iv']};")
        if tc['plaintext']:
            print(f"plaintext = {tc['pt_len']}'h{tc['plaintext']};")
        else:
            print(f"plaintext = 0;  // Empty")
        if tc['aad']:
            print(f"aad       = {tc['aad_len']*8}'h{tc['aad']};")
        else:
            print(f"aad       = 0;  // Empty")
        print(f"expected_ciphertext = {tc['pt_len']*8 if tc['pt_len'] > 0 else 1}'h{tc['ciphertext'] if tc['ciphertext'] else '0'};")
        print(f"expected_tag = 128'h{tc['tag']};")
    
    return test_cases

if __name__ == "__main__":
    test_cases = test_gcm_comprehensive()