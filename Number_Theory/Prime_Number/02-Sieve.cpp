#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"         

const int N = 1e6;
vector <bool> is_prime(N, true);
vector <int> prime;

void sieve() {
    for (int i = 3; i * i <= N; i += 2) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += 2 * i) is_prime[j] = false;
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= N; i += 2) if (is_prime[i]) prime.push_back(i);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;
    sieve();
}