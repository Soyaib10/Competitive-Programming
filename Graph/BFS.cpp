#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];

void bfs(int source) {
    queue <int> q;
    q.push(source);
    vis[source] = true;
    while (!q.empty()) {
        int u = q.front();
        cout << u << " "; // print values that are travarsed
        q.pop();
        for (auto i : g[u]) {
            if (!vis[i]) {
                q.push(i);
                vis[i] = true;
            }
        }
    }
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
    bfs(2);  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}