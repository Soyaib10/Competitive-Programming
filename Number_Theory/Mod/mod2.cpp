// link: https://vjudge.net/contest/474218#problem/M

#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"

// a * b mod p
ll binmul(ll a, ll b, ll m) {
    ll res = 0LL;
    a = a % m;
    while (b > 0) {
        if (b & 1) res = (res + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
}

// a ^ b mod p
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1LL;
    while (b > 0) {
        if (b & 1) res = binmul(res , a, m);
        a = binmul(a, a, m);
        b >>= 1;
    }
    return res;
}

ll inverse(ll a, ll p) {
    return binpow(a, p - 2, p);
}

int main() {
    fastIO;
    
    ll a, b, p;
    cin >> a >> b >> p;
    cout << binpow(a, b, p) << '\n'; // a ^ b mod p
    cout << binmul(a, b, p) << '\n'; // a * b mod p
    cout << binmul(a, inverse(b, p), p) << '\n'; // a / b mod p
    return 0;
}