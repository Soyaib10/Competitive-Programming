#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    int last2 = 0, last = 1;
    for (int i = 2; i <= n; i++) {
        int cur = last2 + last;
        last2 = last;
        last = cur;
    }
    cout << last << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}