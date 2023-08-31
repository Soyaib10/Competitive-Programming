#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
 
    vector <int> a(n);
    vector <pair <int, int>> p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p.push_back({x, i});
    }
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(p.begin(), p.end());
    sort(a.begin(), a.end());

    vector <int> ans(n);
    for (int i = 0; i < n; i++) ans[p[i].second] = a[i];
    for (auto i : ans) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}