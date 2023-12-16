#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"

void solve() {
    string s;
    int b;
    cin >> s >> b;

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans = (ans * 10 % b + (s[i] - '0')) % b;
    }
    if (ans == 0) cout << "Divisible" << nl;
    else cout << "No" << nl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}

