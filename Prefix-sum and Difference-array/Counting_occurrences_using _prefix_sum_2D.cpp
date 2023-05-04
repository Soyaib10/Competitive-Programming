#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, q;
    cin >> n >> q;

    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int freq[11][n + 1];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < 11; i++) {
        for (int j = 1; j < n + 1; j++) {
            freq[i][j] = freq[i][j - 1] + (v[j - 1] == i ? 1 : 0);
        }
    }

    while (q--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << freq[c][b] - freq[c][a - 1] << "\n";
    }
}

void oslve() {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2; j++) prefix[i][j] = prefix[i - 1][j];
        prefix[i][ch[i - 1] - '0']++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
