/*Problem: Problem: You are given q = 10^6 queries. In each query, you need to find
out the prime factorization of n where n <= 10^6. DO it in 1s.*/

#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"

const int N = 1e6 + 9;
int spf[N];

void spf_2toN() {
    for (int i = 2; i < N; i++) spf[i] = i;
    for (int i = 2; i < N; i++) {
        for (int j = i; j < N; j += i) spf[j] = min(spf[j], i);
    }
}

void solve() {
    int q; cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector <int> ans;
        while (n > 1) {
            ans.push_back(spf[n]);
            n /= spf[n];
        }
        for (auto i : ans) cout << i << ' ';
        cout << nl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;
    spf_2toN();
    solve();
}