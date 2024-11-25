#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 7;
vector <int> g[N], v;
int in_degree[N];
bool vis[N];

void solve() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        in_degree[v]++;
    }

    queue <int> q;
    for (int i = 1; i <= n; i++) if (in_degree[i] == 0) q.push(i);
    while (!q.empty()) {
        int u = q.front();
        v.push_back(u);
        q.pop();
        for (auto i : g[u]) {
            in_degree[i]--;
            if (in_degree[i] == 0) q.push(i);
        }
    }

    if (v.size() < n) {
        cout << "IMPOSSIBLE" << "\n";
        return;
    }
    for (auto i : v) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
