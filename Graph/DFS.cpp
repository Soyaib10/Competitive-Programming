#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    cout << u << " "; // print values that are travarsed
    for (auto i : g[u]) if (!vis[i]) dfs(i);
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
    dfs(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}