#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 7;
vector <int> g[N], v;
int parent[N];
bool vis[N];

bool dfs(int u, int par) {
    vis[u] = true;
    parent[u] = par;
    for (auto i : g[u]) {
        if (!vis[i]) {
            if (dfs(i, u)) return true;
        }
        else if (i != par) {
            int node = u;
            while (node != i) {
                v.push_back(node);
                node = parent[node];
            }
            v.push_back(i);
            v.push_back(u);
            return true;
        }
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
                cout << v.size() << "\n";
                for (auto i : v) cout << i << " ";
                return;
            }
        }
    }
    cout << "IMPOSSIBLE";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}