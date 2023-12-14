#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    ll n, k;

    cin >> n >> k;

    ll md = n % k;

    ll all = n / k;

    ll ans = 0;

    // cout << all << endl;

    for(int i = 1; i < (k + 1) / 2; i++){
        ll x = i, y = k - i;

        if(x <= md) x = all + 1;
        else x = all;
        if(y <= md) y = all + 1;
        else y = all;

        ans += x * y;
        // cout << ans << " ";
    }

    ans += (all * (all - 1) / 2);
    // cout << ans << " ";
    if(k % 2 == 0){
        if((k / 2) <= md) all++;
        ans += all * (all - 1) / 2;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}