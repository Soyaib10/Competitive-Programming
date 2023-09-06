#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];
int dist[N], parent[N];

void bfs(int source) {
    queue<int> q;
    q.push(source);
    vis[source] = true;
    dist[source] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto i : g[u]) {
            if (!vis[i]) {
                q.push(i);
                parent[i] = u;
                dist[i] = dist[u] + 1;
                vis[i] = true;
            }
        }
    }

    // print distance of all the nodes from root.
    for (int i = 1; i <= 4; i++) cout << dist[i] << ' ';
    cout << '\n';

    // print shortest path for a node.
    int node = 4;
    while (node != 1) {
        cout << node << " ";
        node = parent[node];
    }
    cout << 1 << "\n";
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
    bfs(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}