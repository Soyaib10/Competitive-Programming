// SPF- Smallest Prime Factor
#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"         

const int N = 1e6 + 9;
int spf[N];

void spf_2toN() {
    for (int i = 2; i < N; i++) spf[i] = i;
    for (int i = 2; i < N; i++) {
        for (int j = i; j < N; j += i) spf[j] = min(spf[j], i);
    }
    for (int i = 0; i < N; i++) cout << spf[i] << nl;
}

int main() {
    fastIO;
    spf_2toN();

    return 0;
}