#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 7;
vector <int> g[N];
bool vis[N];

bool dfs(int u, int parent) {
    vis[u] = true;
    for (auto i : g[u]) {
        if (!vis[i]) if (dfs(i, u)) return true;
        else if (i != parent) return true;
    }
    return false;
}

void solve() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (dfs(i, 0)) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
