#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
int depth[N];
int mx, node, ans;

void dfs1(int u, int par) {
    depth[u] = depth[par] + 1;
    if (depth[u] > mx) {
        mx = depth[u];
        node = u;
    }
    for (auto i : g[u]) if (i != par) dfs1(i, u);
}

void dfs2(int u, int par) {
    depth[u] = depth[par] + 1;
    ans = max(ans, depth[u] - 1);
    for (auto i : g[u]) if (i != par) dfs2(i, u);
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs1(1, 0);
    dfs2(node, 0);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}