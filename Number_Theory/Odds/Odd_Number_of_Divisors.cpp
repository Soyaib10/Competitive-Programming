/*
    How to find the number of integers under n that has an odd number of divisors?
    Suppose:
    10 = 1 * 10
         2 * 5
         total count: 4
    9 = 1 * 9
        3 * 3
        total count: 3
    Means if a number is a perfect square number then it has odd number of divisors.
*/

#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"         

void oddNumberofDivisors(n) {
    for (int i = 1; i * i <= n; i++) cout << i * i << nl;
}
int main() {
    fastIO;

    int n;
    cin >> n;
    cout << oddNumberofDivisors(n);

    return 0;
}