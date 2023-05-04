#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector <ll> v(n + 1, 0), diff(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        diff[i] = v[i] - v[i - 1];
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r, val;
        cin >> l >> r >> val;
        diff[l] += val;
        diff[r + 1] -= val;
    }

    for (int i = 1; i <= n; i++) v[i] = diff[i] + v[i - 1];
    for (int i = 1; i <= n; i++) cout << v[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}

