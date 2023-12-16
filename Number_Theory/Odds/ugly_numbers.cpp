#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"

void solve() {
    set <ll> s;
    s.insert(1);

    for (int i = 1; i < 1500; i++) {
        auto it = s.begin();
        ll x = *it;
        s.erase(it);

        s.insert(x * 2);
        s.insert(x * 3);
        s.insert(x * 5);
    }
    cout << "The 1500'th ugly number is " << *s.begin() << "." << nl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}

