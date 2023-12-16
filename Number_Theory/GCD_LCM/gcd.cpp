#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"         

int GCD(int a, int b) {
  if (a == 0) return b;
  if (b == 0) return a;
  if (a < b) swap(a, b);
  return GCD(a % b, b);
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;

    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);
}