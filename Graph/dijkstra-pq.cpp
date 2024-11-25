#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
const ll N = 2e5 + 7, INF = 1e18 + 7;
vector<pair<ll, ll>> g[N];
vector<ll> dist(N, INF);
 
void dijkstra(ll source) {
    dist[source] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, source});
    while (!pq.empty()) {
        ll d = pq.top().first;
        ll u = pq.top().second;
        pq.pop();
        if(dist[u] < d) continue;
        for (auto [w, i] : g[u]) {
            if (d + w < dist[i]) {
                dist[i] = d + w;
                pq.push({dist[i], i});
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