#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 7;
vector <int> g[N];
int color[N], parent[N];
bool is_true;

void dfs(int u) {
    color[u] = 1;
    for (auto i : g[u]) {
        if (color[i] == 0) {
            parent[i] = u;
            dfs(i);
        }
        else if (color[i] == 1) is_true = true;
    }
    color[u] = 2;
}

void solve() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    is_true = false;
    for (int i = 1; i <= n; i++) if (color[i] == 0) dfs(i);
    if (is_true) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}