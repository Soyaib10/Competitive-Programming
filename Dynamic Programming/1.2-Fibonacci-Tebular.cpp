#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) dp[i] = dp[i - 1] + dp[i - 2];
    cout << dp[n] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}