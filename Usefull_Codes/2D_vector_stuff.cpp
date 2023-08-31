#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    // declare a vector
    vector <vector<int>> v; // empty
    auto v = vector <vector<int>>(); // empty
    vector <vector<int>> v(n, vector <int> (m, 0));
    vector v(n, vector(m, 0)); // only for int value

    // resize
    v.resize(n, vector <int> (m, 0)); // all value 0

    // sort
    for (auto i : v) sort(i.begin(), i.end());
    for (int i = 0; i < v.size(); i++) sort(v[i].begin(), v[i].end());


    // Print the elements of the 2D vector
    for (auto i : v) {
        for (auto j : i) cout << j << " ";
        cout << "\n";
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}