#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// a = base, b = power
ll binpow(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a;
            res %= mod;
        }
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res % mod;
}

void solve() {
    int n, m, mod;
    cin >> n >> m >> mod;
    cout << bin_expo(n, m, mod);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}