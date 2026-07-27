#!/usr/bin/env python3
"""
Test GCM mode with random variable-length data against PyCryptodome
"""
from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
import random
import json
import sys

def bytes_to_hex(data):
    """Convert bytes to hex string"""
    return data.hex()

def test_gcm_random(num_tests=50):
    """Test GCM with random data of various lengths"""
    
    print("=" * 60)
    print("Random GCM Test - Variable Length Data")
    print("=" * 60)
    
    test_results = []
    failed_tests = []
    
    # Key sizes supported
    key_sizes = [16, 24, 32]  # AES-128, AES-192, AES-256
    
    for test_num in range(num_tests):
        # Random key size
        key_size = random.choice(key_sizes)
        key = get_random_bytes(key_size)
        
        # Random IV (96 bits is recommended for GCM)
        iv = get_random_bytes(12)
        
        # Random plaintext length (0 to 512 bytes)
        plaintext_len = random.randint(0, 512)
        plaintext = get_random_bytes(plaintext_len)
        
        # Random AAD length (0 to 256 bytes)
        aad_len = random.randint(0, 256)
        aad = get_random_bytes(aad_len) if aad_len > 0 else b''
        
        # Encrypt with GCM
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            cipher.update(aad)
        ciphertext, auth_tag = cipher.encrypt_and_digest(plaintext)
        
        # Verify decryption
        decipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            decipher.update(aad)
        
        try:
            decrypted = decipher.decrypt_and_verify(ciphertext, auth_tag)
            if decrypted != plaintext:
                print(f"Test {test_num + 1}: ❌ Decryption mismatch!")
                failed_tests.append(test_num + 1)
                continue
        except ValueError:
            print(f"Test {test_num + 1}: ❌ Authentication failed!")
            failed_tests.append(test_num + 1)
            continue
        
        # Save test vector
        test_vector = {
            'test_num': test_num + 1,
            'key_size': key_size,
            'key': bytes_to_hex(key),
            'iv': bytes_to_hex(iv),
            'plaintext_len': plaintext_len,
            'plaintext': bytes_to_hex(plaintext),
            'aad_len': aad_len,
            'aad': bytes_to_hex(aad),
            'ciphertext': bytes_to_hex(ciphertext),
            'auth_tag': bytes_to_hex(auth_tag)
        }
        test_results.append(test_vector)
        
        # Print progress
        if (test_num + 1) % 10 == 0:
            print(f"Completed {test_num + 1}/{num_tests} tests")
    
    # Summary
    print("\n" + "=" * 60)
    print("Test Summary")
    print("=" * 60)
    print(f"Total tests: {num_tests}")
    print(f"Passed: {num_tests - len(failed_tests)}")
    print(f"Failed: {len(failed_tests)}")
    
    if failed_tests:
        print(f"Failed test numbers: {failed_tests}")
    else:
        print("✅ All tests passed!")
    
    # Save test vectors to file
    with open('gcm_test_vectors.json', 'w') as f:
        json.dump(test_results, f, indent=2)
    print(f"\nTest vectors saved to gcm_test_vectors.json")
    
    # Print some statistics
    print("\n" + "=" * 60)
    print("Data Size Statistics")
    print("=" * 60)
    
    plaintext_sizes = [tv['plaintext_len'] for tv in test_results]
    aad_sizes = [tv['aad_len'] for tv in test_results]
    
    print(f"Plaintext sizes: min={min(plaintext_sizes)}, max={max(plaintext_sizes)}, "
          f"avg={sum(plaintext_sizes)/len(plaintext_sizes):.1f}")
    print(f"AAD sizes: min={min(aad_sizes)}, max={max(aad_sizes)}, "
          f"avg={sum(aad_sizes)/len(aad_sizes):.1f}")
    
    # Show a few examples
    print("\n" + "=" * 60)
    print("Sample Test Vectors")
    print("=" * 60)
    
    for i in range(min(3, len(test_results))):
        tv = test_results[i]
        print(f"\nTest {tv['test_num']}:")
        print(f"  Key size: {tv['key_size']} bytes")
        print(f"  Plaintext: {tv['plaintext_len']} bytes")
        print(f"  AAD: {tv['aad_len']} bytes")
        print(f"  Key: {tv['key'][:32]}...")
        print(f"  IV: {tv['iv']}")
        print(f"  Auth Tag: {tv['auth_tag']}")
        if tv['plaintext_len'] > 0:
            print(f"  Plaintext: {tv['plaintext'][:32]}...")
            print(f"  Ciphertext: {tv['ciphertext'][:32]}...")
    
    return test_results

def verify_gcm_implementation(test_vectors_file='gcm_test_vectors.json'):
    """Verify our implementation against saved test vectors"""
    
    print("\n" + "=" * 60)
    print("Verifying GCM Implementation")
    print("=" * 60)
    
    with open(test_vectors_file, 'r') as f:
        test_vectors = json.load(f)
    
    passed = 0
    failed = 0
    
    for tv in test_vectors:
        key = bytes.fromhex(tv['key'])
        iv = bytes.fromhex(tv['iv'])
        plaintext = bytes.fromhex(tv['plaintext']) if tv['plaintext'] else b''
        aad = bytes.fromhex(tv['aad']) if tv['aad'] else b''
        expected_ciphertext = bytes.fromhex(tv['ciphertext']) if tv['ciphertext'] else b''
        expected_tag = bytes.fromhex(tv['auth_tag'])
        
        # Re-encrypt and verify
        cipher = AES.new(key, AES.MODE_GCM, nonce=iv)
        if aad:
            cipher.update(aad)
        ciphertext, auth_tag = cipher.encrypt_and_digest(plaintext)
        
        if ciphertext == expected_ciphertext and auth_tag == expected_tag:
            passed += 1
        else:
            failed += 1
            print(f"Test {tv['test_num']}: ❌ Mismatch!")
            print(f"  Expected CT: {tv['ciphertext'][:32]}...")
            print(f"  Got CT:      {bytes_to_hex(ciphertext)[:32]}...")
            print(f"  Expected Tag: {tv['auth_tag']}")
            print(f"  Got Tag:      {bytes_to_hex(auth_tag)}")
    
    print(f"\nVerification Results:")
    print(f"  Passed: {passed}/{len(test_vectors)}")
    print(f"  Failed: {failed}/{len(test_vectors)}")
    
    if failed == 0:
        print("✅ All test vectors verified successfully!")
    
    return passed == len(test_vectors)

if __name__ == "__main__":
    # Generate test vectors
    num_tests = 100 if len(sys.argv) < 2 else int(sys.argv[1])
    test_vectors = test_gcm_random(num_tests)
    
    # Verify them
    verify_gcm_implementation()