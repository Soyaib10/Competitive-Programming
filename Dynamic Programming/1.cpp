#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n), dp(n + 1, -1);
    for (int i = 0; i < n; i++) cin >> v[i];

    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        int mn = INT_MAX;
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                int step = dp[i - j] + abs(v[i] - v[i - j]);
                mn = min(step, mn);
            }
        }
        dp[i] = mn;
    }
    cout << dp[n - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}