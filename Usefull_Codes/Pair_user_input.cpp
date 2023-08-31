//Problem name:

#include <bits/stdc++.h>
#define ll long long int
#define nline "\n"

using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int n;
    cin >> n;

    pair <int, string> p[n];
    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }

    for(int i = 0; i < n; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}