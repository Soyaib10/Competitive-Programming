// https://vjudge.net/contest/474218#problem/M

#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"

ll a, b, mod;

ll add(ll a, ll b) {
    a += b;
    if (a >= mod)a -= mod;
    return a;
}

ll sub(ll a, ll b) {
    a = add(a, -b);
    if (a < 0)a += mod;
    return a;
}

ll mul(ll a, ll b) {
    ll re = a;
    re *= b;
    if (re >= mod)re %= mod;
    return re;
}

/// a * b > 1e18
// ll bin_mul(ll a, ll b) {
//     long long res = 0LL;
//     a = a % mod;
//     while (b > 0) {
//         if (b & 1) res = add(res, a);
//         a = add(a, a);
//         b >>= 1;
//     }
//     return res;
// }

ll bigmod(ll a, ll b) {
    ll res = 1LL;
    while (b > 0) {
        if (b & 1)
            res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

// mx = 1e6+10;
void fact_cal() {
    fact[0] = 1;
    inv[0] = 1;
    for (int i = 1; i <= mx - 3; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    inv[mx - 3] = bigmod(fact[mx - 3], mod - 2);
    for (int i = mx - 4; i >= 1; i--) inv[i] = (inv[i + 1] * (i + 1)) % mod;
}

ll nCr(ll n, ll r) {
    if (n < r) return 0;
    return mul(fact[n], mul(inv[r], inv[n - r]));
}

void solve() {
    cin >> a >> b >> mod;

    cout << bigmod(a, b) << nl; // a ^ b mod p
    cout << mul(a, b) << nl; // a * b mod p
    cout << mul(a, bigmod(b, mod - 2)); // a / b mod p
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;
    solve();
}