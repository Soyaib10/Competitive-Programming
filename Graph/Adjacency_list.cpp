#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 105;
vector <int> g[N];

void solve() {
    int n, m;
    cin >> n >> m; // no of vertics and edges
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // show to how many nodes a particular node is connected with 
    for (auto i : g[2]) cout << i << " ";
    cout << "\n";

    // degree
    for (int i = 1; i <= n; i++) cout << g[i].size() << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}