
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];
int cnt = 0;

void dfs(int u) {
    vis[u] = true;
    cout << "term 1: u: " << u << "\n";
    cout << "term 2: cnt: " << cnt << "\n";
    for (auto i : g[u]) {
        if (!vis[i]) {
            cout << "term 3: u i: " << u << " " << i << "\n";
            dfs(i);
            cout << "term 4: u i: " << u << " " << i << "\n";
        }
    }
    cnt++;
    cout << "term 5: cnt: " << cnt << "\n";
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
    dfs(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}