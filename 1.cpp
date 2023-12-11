#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    map<char, int> mp;
    for (int i = 0; i < n; i++) mp[s[i]]++;
    int mx = INT_MIN;
    for (auto [i, j] : mp) mx = max(j, mx);
    if (mx > n / 2) cout << mx - (n - mx) << "\n";
    else {
        if (n % 2 == 0) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}