#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e7;
vector <bool> is_prime(N, true);
vector <int> prime;
map <int, int> mp;

void sieve() {
    for (int i = 3; i * i <= N; i += 2) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += 2 * i) is_prime[j] = false;
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= N; i += 2) if (is_prime[i]) prime.push_back(i);
}

void primeFactorization(int x, map <int, int>& mp) {
    for (int i = 0; prime[i] * prime[i] <= x; i++) {
        if (x % prime[i] == 0) {
            mp[prime[i]]++;
            while (x % prime[i] == 0) x /= prime[i];
        }
    }
    if (x > 1) mp[x]++;
}


void primeFactorization(int n) {
    ll count = 0;
    for (ll i = 0; primes[i] * primes[i] <= n; i++) {
        if (n % primes[i] == 0) {
            while (n % primes[i] == 0) {
                n /= primes[i];
                cout << primes[i] << " ";
                count++;
            }
        }
    }
    if (n > 1) cout << n << endl;
}

int main() {
    ll n;
    cin >> n;
    sieve();
    primeFactorization(n);

}


