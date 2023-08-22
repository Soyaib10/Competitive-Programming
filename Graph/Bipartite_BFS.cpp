#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];

bool check(int source, int color[]) {
    queue <int> q;
    q.push(source);
    color[source] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto i : g[u]) {
            // if adjacent node yet not colored give it a oposite color
            if (color[i] == -1) {
                color[i] = !color[u];
                q.push(i);
            }
            // is the parent and child has same color return false
            else if (color[i] == color[u]) return false;
        }
    }
    return true;
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

    int color[n];
    for (int i = 0; i < n; i++) color[i] = -1;
    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            if (check(i, color) == false) {
                cout << "Not Bipartite" << "\n";
                return;
            }
        }
    }
    cout << "Bipartite" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}