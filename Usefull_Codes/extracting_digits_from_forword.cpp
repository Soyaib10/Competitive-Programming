#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;

    vector <int> v;
    int p = 1;
    while (n) {
        if (n % 10 > 0) v.push_back((n % 10) * p);
        n /= 10;
        p *= 10;
    }
    cout << v.size() << "\n";
    for (auto i : v) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

