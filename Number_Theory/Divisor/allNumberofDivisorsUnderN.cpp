#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"         

int a[105];
void allNumberofDivisorsUnderN() {
    int n = 100;
    for (int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i) a[j]++;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;
    allNumberofDivisorsUnderN();
}