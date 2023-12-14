// Recursive
int f(int n, int k, vector<int>& v) {
    if (n == 0) return 0;
    int mn = INT_MAX;
    for (int i = 1; i <= k; i++) {
        if (n - i >= 0) {
            int step = f(n - i, k, v) + abs(v[n - i] - v[n]);
            mn = min(mn, step);
        }
    }
    return mn;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << f(n - 1, k, v);
}

// DP
int f(int n, int k, vector<int>& v, vector<int>& dp) {
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];
    int mn = INT_MAX;
    for (int i = 1; i <= k; i++) {
        if (n - i >= 0) {
            int step = f(n - i, k, v, dp) + abs(v[n - i] - v[n]);
            mn = min(mn, step);
            dp[n] = mn;
        }
    }
    return mn;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n), dp(n + 1, -1);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << f(n - 1, k, v, dp);
}

// DP
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