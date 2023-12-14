#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int f(int n, vector<int>& dp) {
    if (n <= 1) return n;
    if (dp[n] == -1) dp[n] = f(n - 1, dp) + f(n - 2, dp);
    return dp[n];
}

void solve() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}