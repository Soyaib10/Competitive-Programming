#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, m, k;
double x;
vector <ll> v;

bool ok(double mid) {
    return mid * mid < x;
}

void solve() {
    cin >> x;
    double lo = 1, hi = x;
    for (int i = 0; i < 100; i++) {
        double mid = (lo + hi) / 2;
        if(ok(mid)) lo = mid;
        else hi = mid;
    }
    cout << setprecision(10) << lo << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
