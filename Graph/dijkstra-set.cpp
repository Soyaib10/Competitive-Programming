#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
const ll N = 2e5 + 7, INF = 1e18 + 7;
vector<pair<ll, ll>> g[N];
vector<ll> dist(N, INF);
 
void dijkstra(ll source) {
    set<pair<ll, ll>> s;
    s.insert({0, source});
    dist[source] = 0;
    while (!s.empty()) {
        auto it = *s.begin();
        ll d = it.first;
        ll u = it.second;
        s.erase(it);
        if (dist[u] < d) continue;
        for (auto [w, i] : g[u]) {
            if (d + w < dist[i]) {
                s.erase({dist[i], i});
                dist[i] = d + w;
                s.insert({dist[i], i});
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
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++) cout << dist[i] << " ";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    solve();
    return 0;
}
