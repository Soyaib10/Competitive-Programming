#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector <ll> divisor(ll n) {
    vector <ll> div;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);
            if (i != n / i) div.push_back(n / i);
        }
    }
    sort(div.begin(), div.end());
    return div;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin >> n;
    vector <ll> divs = divisor(n);
    return 0;
}