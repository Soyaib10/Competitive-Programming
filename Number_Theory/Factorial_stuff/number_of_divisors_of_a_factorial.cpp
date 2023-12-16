#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 1e7;
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

void solve() {
    int n;
    cin >> n;

    ll result = 1;
    for (int i = 0; prime[i] <= n; i++) {
        int k = prime[i];
        ll count = 0;
        while (n / k != 0) {
            count += n / k;
            k *= prime[i];
        }
        result *= (count + 1);
    }
    cout << result << nl;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    sieve();
    solve();
    return 0;
}

