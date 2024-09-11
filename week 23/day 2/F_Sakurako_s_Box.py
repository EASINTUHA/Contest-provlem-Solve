MOD = 10**9 + 7

def binary_exponentiation(base, exponent, modulus):
    result = 1
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        base = (base * base) % modulus
        exponent //= 2
    return result

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    num_test_cases = int(data[index])
    index += 1
    results = []
    
    for _ in range(num_test_cases):
        array_size = int(data[index])
        index += 1
        array = list(map(int, data[index:index + array_size]))
        index += array_size
        
        total_sum = sum(array)
        P = 0
        for i in range(array_size):
            total_sum -= array[i]
            P += array[i] * total_sum
            P %= MOD
        
        num_pairs = array_size * (array_size - 1) // 2 % MOD
        num_pairs_inv = binary_exponentiation(num_pairs, MOD - 2, MOD)
        result = P * num_pairs_inv % MOD
        
        results.append(result)
    
    sys.stdout.write('\n'.join(map(str, results)) + '\n')

if __name__ == "__main__":
    main()
