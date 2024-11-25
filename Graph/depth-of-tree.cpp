#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 100;
vector<int> g[N];
int depth[N];

void dfs(int u, int p) {
    depth[u] = depth[p] + 1;
    for (auto v : g[u]) if (v != p) dfs(v, u);
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
    dfs(1, 0);
    for (int i = 1; i <= n; i++) cout << depth[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
