#!/usr/bin/env python3
"""
Comprehensive Random AES Test
Tests all modes, key sizes, padding types with random data
Goal: 10,000 successful operations
"""

from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
from Crypto.Util.Padding import pad, unpad
import random
import json
import sys
import time
from enum import Enum

# Mirror the SystemVerilog enums
class CipherMode(Enum):
    ECB = 0
    CBC = 1
    CTR = 2
    GCM = 3

class KeySize(Enum):
    KEY_128 = 16
    KEY_192 = 24
    KEY_256 = 32

class PaddingType(Enum):
    PKCS7 = 0
    ZERO = 1
    ANSI_X923 = 2
    ISO_10126 = 3

class Operation(Enum):
    ENCRYPT = 1
    DECRYPT = 0

def apply_custom_padding(data, block_size, padding_type):
    """Apply different padding schemes"""
    if len(data) % block_size == 0:
        # Full blocks still need padding in some schemes
        if padding_type in [PaddingType.PKCS7, PaddingType.ANSI_X923, PaddingType.ISO_10126]:
            pad_len = block_size
        else:
            return data
    else:
        pad_len = block_size - (len(data) % block_size)
    
    if padding_type == PaddingType.PKCS7:
        return data + bytes([pad_len] * pad_len)
    elif padding_type == PaddingType.ZERO:
        return data + bytes([0] * pad_len)
    elif padding_type == PaddingType.ANSI_X923:
        return data + bytes([0] * (pad_len - 1)) + bytes([pad_len])
    elif padding_type == PaddingType.ISO_10126:
        return data + get_random_bytes(pad_len - 1) + bytes([pad_len])
    return data

def remove_custom_padding(data, padding_type):
    """Remove different padding schemes"""
    if not data:
        return data
        
    if padding_type == PaddingType.PKCS7:
        pad_len = data[-1]
        if pad_len > 16 or pad_len == 0:
            raise ValueError("Invalid PKCS7 padding")
        return data[:-pad_len]
    elif padding_type == PaddingType.ZERO:
        # Can't reliably remove zero padding
        return data
    elif padding_type == PaddingType.ANSI_X923:
        pad_len = data[-1]
        if pad_len > 16 or pad_len == 0:
            raise ValueError("Invalid ANSI X9.23 padding")
        return data[:-pad_len]
    elif padding_type == PaddingType.ISO_10126:
        pad_len = data[-1]
        if pad_len > 16 or pad_len == 0:
            raise ValueError("Invalid ISO 10126 padding")
        return data[:-pad_len]
    return data

def generate_random_test():
    """Generate a random test case"""
    # Random selections
    mode = random.choice(list(CipherMode))
    key_size = random.choice(list(KeySize))
    padding_type = random.choice(list(PaddingType))
    
    # Random data
    key = get_random_bytes(key_size.value)
    
    # Random plaintext length (0 to 256 bytes)
    plaintext_len = random.randint(0, 256)
    plaintext = get_random_bytes(plaintext_len) if plaintext_len > 0 else b''
    
    # Mode-specific parameters
    iv = None
    nonce = None
    aad = b''
    
    if mode in [CipherMode.CBC]:
        iv = get_random_bytes(16)
    elif mode == CipherMode.CTR:
        nonce = get_random_bytes(12)  # 96-bit nonce
    elif mode == CipherMode.GCM:
        nonce = get_random_bytes(12)
        aad_len = random.randint(0, 128)
        aad = get_random_bytes(aad_len) if aad_len > 0 else b''
    
    # Determine if padding is needed
    needs_padding = mode in [CipherMode.ECB, CipherMode.CBC] and plaintext_len % 16 != 0
    
    return {
        'mode': mode,
        'key_size': key_size,
        'padding_type': padding_type,
        'key': key,
        'plaintext': plaintext,
        'iv': iv,
        'nonce': nonce,
        'aad': aad,
        'needs_padding': needs_padding
    }

def execute_test(test):
    """Execute a single test case"""
    mode = test['mode']
    key = test['key']
    plaintext = test['plaintext']
    iv = test['iv']
    nonce = test['nonce']
    aad = test['aad']
    padding_type = test['padding_type']
    needs_padding = test['needs_padding']
    
    try:
        # Encryption
        if mode == CipherMode.ECB:
            # Apply padding if needed
            if needs_padding or len(plaintext) == 0:
                padded_pt = apply_custom_padding(plaintext, 16, padding_type)
            else:
                padded_pt = plaintext
            
            cipher = AES.new(key, AES.MODE_ECB)
            ciphertext = cipher.encrypt(padded_pt)
            
            # Decryption
            decipher = AES.new(key, AES.MODE_ECB)
            decrypted_padded = decipher.decrypt(ciphertext)
            
            # Remove padding
            if needs_padding or len(plaintext) == 0:
                if padding_type in [PaddingType.PKCS7, PaddingType.ANSI_X923, PaddingType.ISO_10126]:
                    decrypted = remove_custom_padding(decrypted_padded, padding_type)
                else:
                    decrypted = decrypted_padded[:len(plaintext)]  # For zero padding
            else:
                decrypted = decrypted_padded
                
        elif mode == CipherMode.CBC:
            # Apply padding if needed
            if needs_padding or len(plaintext) == 0:
                padded_pt = apply_custom_padding(plaintext, 16, padding_type)
            else:
                padded_pt = plaintext
                
            cipher = AES.new(key, AES.MODE_CBC, iv)
            ciphertext = cipher.encrypt(padded_pt)
            
            # Decryption
            decipher = AES.new(key, AES.MODE_CBC, iv)
            decrypted_padded = decipher.decrypt(ciphertext)
            
            # Remove padding
            if needs_padding or len(plaintext) == 0:
                if padding_type in [PaddingType.PKCS7, PaddingType.ANSI_X923, PaddingType.ISO_10126]:
                    decrypted = remove_custom_padding(decrypted_padded, padding_type)
                else:
                    decrypted = decrypted_padded[:len(plaintext)]
            else:
                decrypted = decrypted_padded
                
        elif mode == CipherMode.CTR:
            # CTR mode doesn't need padding
            from Crypto.Util import Counter
            
            # Create counter with nonce
            ctr = Counter.new(32, prefix=nonce, initial_value=1)
            cipher = AES.new(key, AES.MODE_CTR, counter=ctr)
            ciphertext = cipher.encrypt(plaintext)
            
            # Decryption
            ctr = Counter.new(32, prefix=nonce, initial_value=1)
            decipher = AES.new(key, AES.MODE_CTR, counter=ctr)
            decrypted = decipher.decrypt(ciphertext)
            
        elif mode == CipherMode.GCM:
            # GCM mode doesn't need padding
            cipher = AES.new(key, AES.MODE_GCM, nonce=nonce)
            if aad:
                cipher.update(aad)
            ciphertext, tag = cipher.encrypt_and_digest(plaintext)
            
            # Decryption with authentication
            decipher = AES.new(key, AES.MODE_GCM, nonce=nonce)
            if aad:
                decipher.update(aad)
            decrypted = decipher.decrypt_and_verify(ciphertext, tag)
            
        else:
            raise ValueError(f"Unsupported mode: {mode}")
        
        # Verify
        if decrypted != plaintext:
            return False, f"Decryption mismatch: expected {len(plaintext)} bytes, got {len(decrypted)} bytes"
            
        return True, None
        
    except Exception as e:
        return False, str(e)

def generate_verilog_test_vectors(num_vectors=10):
    """Generate test vectors for Verilog testing"""
    vectors = []
    
    for i in range(num_vectors):
        test = generate_random_test()
        success, error = execute_test(test)
        
        if success:
            # Convert to Verilog-friendly format
            vector = {
                'test_num': i + 1,
                'mode': test['mode'].name,
                'mode_value': test['mode'].value,
                'key_size': test['key_size'].value,
                'padding_type': test['padding_type'].name,
                'padding_value': test['padding_type'].value,
                'key': test['key'].hex(),
                'plaintext': test['plaintext'].hex() if test['plaintext'] else '00',
                'plaintext_len': len(test['plaintext']),
                'iv': test['iv'].hex() if test['iv'] else '0' * 32,
                'nonce': test['nonce'].hex() if test['nonce'] else '0' * 24,
                'aad': test['aad'].hex() if test['aad'] else '00',
                'aad_len': len(test['aad'])
            }
            
            # Add expected results
            if test['mode'] == CipherMode.ECB:
                padded_pt = apply_custom_padding(test['plaintext'], 16, test['padding_type']) if test['needs_padding'] else test['plaintext']
                cipher = AES.new(test['key'], AES.MODE_ECB)
                vector['ciphertext'] = cipher.encrypt(padded_pt).hex()
            elif test['mode'] == CipherMode.CBC:
                padded_pt = apply_custom_padding(test['plaintext'], 16, test['padding_type']) if test['needs_padding'] else test['plaintext']
                cipher = AES.new(test['key'], AES.MODE_CBC, test['iv'])
                vector['ciphertext'] = cipher.encrypt(padded_pt).hex()
            elif test['mode'] == CipherMode.CTR:
                from Crypto.Util import Counter
                ctr = Counter.new(32, prefix=test['nonce'], initial_value=1)
                cipher = AES.new(test['key'], AES.MODE_CTR, counter=ctr)
                vector['ciphertext'] = cipher.encrypt(test['plaintext']).hex()
            elif test['mode'] == CipherMode.GCM:
                cipher = AES.new(test['key'], AES.MODE_GCM, nonce=test['nonce'])
                if test['aad']:
                    cipher.update(test['aad'])
                ciphertext, tag = cipher.encrypt_and_digest(test['plaintext'])
                vector['ciphertext'] = ciphertext.hex() if ciphertext else '00'
                vector['auth_tag'] = tag.hex()
            
            vectors.append(vector)
    
    return vectors

def run_comprehensive_test(num_tests=10000):
    """Run comprehensive random testing"""
    print("=" * 80)
    print(f"AES Comprehensive Random Test - {num_tests} iterations")
    print("=" * 80)
    
    # Statistics
    stats = {
        'total': 0,
        'passed': 0,
        'failed': 0,
        'by_mode': {mode.name: {'passed': 0, 'failed': 0} for mode in CipherMode},
        'by_key_size': {size.value: {'passed': 0, 'failed': 0} for size in KeySize},
        'by_padding': {pad.name: {'passed': 0, 'failed': 0} for pad in PaddingType}
    }
    
    failed_tests = []
    start_time = time.time()
    
    for i in range(num_tests):
        test = generate_random_test()
        success, error = execute_test(test)
        
        stats['total'] += 1
        
        if success:
            stats['passed'] += 1
            stats['by_mode'][test['mode'].name]['passed'] += 1
            stats['by_key_size'][test['key_size'].value]['passed'] += 1
            stats['by_padding'][test['padding_type'].name]['passed'] += 1
        else:
            stats['failed'] += 1
            stats['by_mode'][test['mode'].name]['failed'] += 1
            stats['by_key_size'][test['key_size'].value]['failed'] += 1
            stats['by_padding'][test['padding_type'].name]['failed'] += 1
            
            failed_tests.append({
                'test_num': i + 1,
                'mode': test['mode'].name,
                'key_size': test['key_size'].value,
                'padding': test['padding_type'].name,
                'error': error
            })
        
        # Progress indicator
        if (i + 1) % 1000 == 0:
            print(f"Progress: {i + 1}/{num_tests} tests completed...")
    
    elapsed = time.time() - start_time
    
    # Print results
    print("\n" + "=" * 80)
    print("Test Results")
    print("=" * 80)
    print(f"Total Tests: {stats['total']}")
    print(f"Passed: {stats['passed']} ({stats['passed']/stats['total']*100:.2f}%)")
    print(f"Failed: {stats['failed']} ({stats['failed']/stats['total']*100:.2f}%)")
    print(f"Time: {elapsed:.2f} seconds ({stats['total']/elapsed:.0f} tests/sec)")
    
    print("\n" + "-" * 40)
    print("Results by Mode:")
    for mode in CipherMode:
        mode_stats = stats['by_mode'][mode.name]
        total = mode_stats['passed'] + mode_stats['failed']
        if total > 0:
            print(f"  {mode.name:6}: {mode_stats['passed']:5} passed, {mode_stats['failed']:5} failed ({mode_stats['passed']/total*100:.1f}% success)")
    
    print("\n" + "-" * 40)
    print("Results by Key Size:")
    for size in [16, 24, 32]:
        size_stats = stats['by_key_size'][size]
        total = size_stats['passed'] + size_stats['failed']
        if total > 0:
            print(f"  {size*8:3}-bit: {size_stats['passed']:5} passed, {size_stats['failed']:5} failed ({size_stats['passed']/total*100:.1f}% success)")
    
    print("\n" + "-" * 40)
    print("Results by Padding Type:")
    for pad in PaddingType:
        pad_stats = stats['by_padding'][pad.name]
        total = pad_stats['passed'] + pad_stats['failed']
        if total > 0:
            print(f"  {pad.name:10}: {pad_stats['passed']:5} passed, {pad_stats['failed']:5} failed ({pad_stats['passed']/total*100:.1f}% success)")
    
    if failed_tests:
        print("\n" + "=" * 80)
        print(f"Failed Tests (showing first 10 of {len(failed_tests)}):")
        print("-" * 80)
        for failure in failed_tests[:10]:
            print(f"Test {failure['test_num']}: {failure['mode']}, {failure['key_size']}-bit, {failure['padding']}")
            print(f"  Error: {failure['error']}")
    
    # Generate some test vectors for Verilog
    print("\n" + "=" * 80)
    print("Generating Test Vectors for Verilog...")
    print("=" * 80)
    
    vectors = generate_verilog_test_vectors(20)
    
    # Save to JSON
    with open('aes_random_test_vectors.json', 'w') as f:
        json.dump(vectors, f, indent=2)
    
    print(f"Generated {len(vectors)} test vectors and saved to aes_random_test_vectors.json")
    
    # Print sample
    print("\nSample Test Vector:")
    if vectors:
        v = vectors[0]
        print(f"  Mode: {v['mode']} (value={v['mode_value']})")
        print(f"  Key Size: {v['key_size']} bytes")
        print(f"  Padding: {v['padding_type']} (value={v['padding_value']})")
        print(f"  Key: {v['key'][:32]}...")
        print(f"  Plaintext ({v['plaintext_len']} bytes): {v['plaintext'][:32]}...")
        print(f"  Ciphertext: {v['ciphertext'][:32]}...")
        if 'auth_tag' in v:
            print(f"  Auth Tag: {v['auth_tag']}")
    
    # Final verdict
    print("\n" + "=" * 80)
    if stats['failed'] == 0:
        print("✅ SUCCESS: All {} tests PASSED!".format(stats['total']))
    else:
        print("❌ FAILURE: {} of {} tests failed".format(stats['failed'], stats['total']))
    print("=" * 80)
    
    return stats['failed'] == 0

if __name__ == "__main__":
    num_tests = 10000 if len(sys.argv) < 2 else int(sys.argv[1])
    success = run_comprehensive_test(num_tests)
    sys.exit(0 if success else 1)