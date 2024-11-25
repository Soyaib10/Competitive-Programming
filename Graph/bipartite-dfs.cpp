#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
int col[N];
bool vis[N];
bool ok;

void dfs(int u) {
    vis[u] = true;
    for (auto i : g[u]) {
        if (!vis[i]) {
            col[i] = col[u] ^ 1;
            dfs(i);
        }
        else if (col[u] == col[i]) ok = false;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ok = true;
    for (int i = 1; i <= n; i++) if (!vis[i]) dfs(i);
    if (ok) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
