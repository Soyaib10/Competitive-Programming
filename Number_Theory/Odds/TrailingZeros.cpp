#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"

void trailingZeros() {
    int n;
    cin >> n;
    int ans = 0, p = 5;
    while (n / p > 0) {
        ans += n / p;
        p *= 5;
    }
    cout << ans << nl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;

    trailingZeros();
}