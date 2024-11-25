#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 2e5 + 7, INF = 1e18 + 7;
vector<pair<ll, ll>> g[N];
vector<ll> dist(N, INF), parent(N);

void dijkstra(ll source) {
    dist[source] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, source});
    while (!pq.empty()) {
        ll d = pq.top().first;
        ll u = pq.top().second;
        pq.pop();
        if (dist[u] < d) continue;
        for (auto  [w, i] : g[u]) {
            if (d + w < dist[i]) {
                dist[i] = d + w;
                pq.push({dist[i], i});
                parent[i] = u;
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({w, v});
        g[v].push_back({w, u});
    }

    for (int i = 0; i <= n; i++) parent[i] = i;
    dijkstra(1);
    vector<ll> path;
    ll node = n;
    while (parent[node] != node) {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(1);
    reverse(path.begin(), path.end());
    if (path.size() == 1) cout << -1;
    else for (auto i : path) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
