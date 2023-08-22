#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];

bool hasCycle(int source) {
    vis[source] = true;
    queue <pair<int, int>> q;
    q.push({source, -1});

    while (!q.empty()) {
        int u = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto i: g[u]) {
            if (!vis[i]) {
                vis[i] = true;
                q.push({i, u});
            }
            else if (parent != i) return true;
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
            if (hasCycle(i)) {
                cout << "Has Cycle" << "\n";
                return;
            }
        }
    }
    cout << "Hasn't Cycle" << "\n";
 }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}