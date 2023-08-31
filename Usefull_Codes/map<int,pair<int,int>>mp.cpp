// https://codeforces.com/problemset/problem/1702/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector <int> v(n);
    map <int, pair <int, int>> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (mp.count(v[i]) == 0) {
            mp[v[i]].first = i;
            mp[v[i]].second = i;
        }
        else {
            mp[v[i]].first = min(mp[v[i]].first, i);
            mp[v[i]].second = max(mp[v[i]].second, i);
        }
    }

    for (auto element : mp) {
        int key = element.first;
        int value1 = element.second.first;
        int value2 = element.second.second;

        std::cout << key << ": " << value1 << ", " << value2 << std::endl;
    }


    while (q--) {
        int x, y;
        cin >> x >> y;
        if (mp.count(x) == 0 or mp.count(y) == 0 or mp[x].first > mp[y].second) cout << "NO" << "\n";
        else cout << "YES" << "\n";
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