//Problem name:

#include <bits/stdc++.h>
#define ll long long int
#define nline "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector <int> v(n + 1, 0);
    vector <int> k(n + 1, 0);

    for(int i = 1; i <= n; i++){
        cin >> v[i];
        k[i] = k[i - 1] + v[i];
    }

    for(int i = 1; i <= n; i++){
        cout << k[i] << " ";
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