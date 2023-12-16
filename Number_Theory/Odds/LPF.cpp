#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"

void LPF(ll n) {
    ll x = sqrtl(n), lpf = 0;
    for (ll  i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            lpf = i;
            while (x % i == 0) x /= i;
        }
    }
    if (x > 1) lpf = x;
    return lpf;
}

int main() {
    fastIO;
    LPF();
}