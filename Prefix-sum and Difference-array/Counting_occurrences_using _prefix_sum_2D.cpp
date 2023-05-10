// https://codeforces.com/contest/1363/problem/B
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

ll prefix[2000][2];

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    vector <int> zero, one;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) prefix[i + 1][j] = prefix[i][j];

        prefix[i + 1][s[i] - '0']++;
    }

    int ans = min(prefix[n][0], prefix[n][1]);

    for(int i = 1; i <= n; i++){
        /// for leftzero with index i
        int x = prefix[i][1];
        int y = prefix[n][0] - prefix[i][0];

        ans = min(ans, x + y);

        x = prefix[i][0];
        y = prefix[n][1] - prefix[i][1];

        ans = min(ans, x + y);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
