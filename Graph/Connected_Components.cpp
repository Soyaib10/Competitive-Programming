#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];
int mark[N];

void dfs(int u) {
    vis[u] = true;
    for (auto i : g[u]) if (!vis[i]) dfs(i);
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

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            ans++;
            mark[i] = ans;
        }
        else mark[i] = ans;
    }
    cout << "connecated components: " << ans << "\n";

    // which node is in which component.
    for (int i = 1; i <= n; i++) cout << mark[i] << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}