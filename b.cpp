#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    ll a[n][n], ans[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i] = (1LL << 30) - 1;
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            else ans[i] = (ans[i] & a[j][i]);
        }
    }

    bool is_true = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            else if (a[i][j] != (ans[i] | ans[j])) {
                is_true = false;
                break;
            }
        }
    }
    if (!is_true) cout << "NO" << "\n";
    else {
        cout << "YES" << "\n";
        for (int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << "\n";
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