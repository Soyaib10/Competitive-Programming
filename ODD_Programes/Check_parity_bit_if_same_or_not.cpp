//Problem name:

#include <bits/stdc++.h>
#define ll long long int
#define nline "\n"

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n % 2 == k % 2) {
        cout << "Same" << endl;
    }
    else {
        cout << "Not same" << endl;
    }
}


int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}
