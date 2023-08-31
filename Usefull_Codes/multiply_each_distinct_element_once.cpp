//https://codeforces.com/contest/1787/problem/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector <pair <int, int>> primeFactor(int n) {
    vector <pair <int, int>> p;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            p.push_back({i, count});
        }
    }
    if (n > 1) p.push_back({n, 1});
    return p;
}

void solve() {
    int n;
    cin >> n;

    vector <pair <int, int>> p = primeFactor(n);
    int mx = 0;
    for (auto [i, j] : p) mx = max(mx, j);

    vector <int> v(mx, 1);
    for (int i = 0; i < p.size(); i++) {
        for (int j = 0; j < p[i].second; j++) v[j] *= p[i].first;
    }
    
    int ans = 0;
    for (auto i : v) ans += i;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}