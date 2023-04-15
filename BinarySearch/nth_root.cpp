#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, m, k;
double x, y;
vector <ll> v;

bool ok(double mid, double y) {
    double val = 1;
    for (int i = 0; i < y; i++) val *= mid;
    return val < x;
}

void solve() {
    cin >> x >> y;
    double lo = 1, hi = x;
    for (int i = 0; i < 100; i++) {
        double mid = (lo + hi) / 2;
        if(ok(mid, y)) lo = mid;
        else hi = mid;
    }
    cout << setprecision(10) << lo << nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
