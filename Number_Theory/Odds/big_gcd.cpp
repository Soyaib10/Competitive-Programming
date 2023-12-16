#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"

ll solve(ll a, string s) {
    ll b = 0, len = s.size();
    for (int i = 0; i < len; i++) {
        b = (b * 10 % a + (s[i] - '0')) % a;
    }
    return __gcd(a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll a = 5;
    string s = "5";
    cout << solve(a, s);

    return 0;
}

