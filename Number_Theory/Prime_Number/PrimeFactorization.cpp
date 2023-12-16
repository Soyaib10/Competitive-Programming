#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"         

vector <ll> primeFactor(ll n) {
    vector <ll> v;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
    }
    if (n > 1) v.push_back(n);
    return v;
}

int main() {
    fastIO;

    ll n;
    cin >> n;
    vector <ll> v = primeFactor(n);
    for (auto i : v) cout << i << " ";

    return 0;
}