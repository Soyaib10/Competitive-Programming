#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 7;
vector <int> g[N];
stack <int> st;
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    for (auto i : g[u]) if (!vis[i]) dfs(i);
    st.push(u);
}

void solve() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) if (!vis[i]) dfs(i);
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}