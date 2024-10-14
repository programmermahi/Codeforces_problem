#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

const int MAX = 1e6;  // We need primes up to 10^6 (sqrt(10^12))

// Sieve of Eratosthenes to generate prime numbers up to MAX
vector<bool> sieve_of_eratosthenes(int max_limit) {
    vector<bool> is_prime(max_limit + 1, true);
    is_prime[0] = is_prime[1] = false;  // 0 and 1 are not primes

    for (int i = 2; i * i <= max_limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Step 1: Generate all primes up to sqrt(10^12) = 10^6
    vector<bool> is_prime = sieve_of_eratosthenes(MAX);

    // Step 2: Precompute squares of primes
    unordered_set<long long> t_primes;
    for (int i = 2; i <= MAX; ++i) {
        if (is_prime[i]) {
            long long prime_square = (long long)i * i;
            t_primes.insert(prime_square);  // Store the square of the prime
        }
    }

    // Step 3: Process each query
    int n;
    cin >> n;

    while (n--) {
        long long x;
        cin >> x;

        if (t_primes.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

