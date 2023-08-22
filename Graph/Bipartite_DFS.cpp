#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
vector <int> g[N];
bool vis[N];

bool check(int u, int color[]) {
    for (auto i : g[u]) {
        if (color[i] == -1) {
            color[i] = !color[u]; // color the child with different value of parent
            if (!check(i, color)) return false;
        }
        else if (color[i] == color[u]) return false; // parent color and child color are same
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