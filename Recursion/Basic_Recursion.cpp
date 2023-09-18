#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(int x) {
    if (x == 0) return;
    x--;
    cout << "x1: " << x << "\n";
    solve(x);
    cout << "x2: " <<  x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve(3);
    return 0;
}