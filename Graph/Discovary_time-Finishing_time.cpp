#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 105;
vector <int> g[N];
bool vis[N];
int discovery_time[N], finising_time[N], current_time;

void dfs(int u) {
    vis[u] = true;
    discovery_time[u] = ++current_time;
    for (auto i : g[u]) if (!vis[i]) dfs(i);
    finising_time[u] = ++current_time;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        while (k--) {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
        sort(g[u].begin(), g[u].end());
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) dfs(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " " << discovery_time[i] << " " << finising_time[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}