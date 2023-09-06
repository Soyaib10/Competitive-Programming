#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 7;
vector <int> g[N], v;
int color[N], parent[N];
bool is_true;

void dfs(int u) {
    color[u] = 1;
    for (auto i : g[u]) {
        if (color[i] == 0) {
            parent[i] = u;
            dfs(i);
        }
        else if (color[i] == 1) {
            is_true = true;
            int node = u;
            while (node != i) {
                v.push_back(node);
                node = parent[node];
            }
            v.push_back(i);
            v.push_back(u);
        }
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
    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) {
            dfs(i);
            if (is_true) {
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