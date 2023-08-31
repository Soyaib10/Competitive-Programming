// https://codeforces.com/problemset/problem/622/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int h, m, x;
    char c;
    cin >> h >> c >> m >> x;

    int add_hour = x / 60, add_min = x % 60;
    h += add_hour, m += add_min;
    h = (h + (m / 60)) % 24, m = m % 60;
    printf("%02d:%02d\n", h, m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}