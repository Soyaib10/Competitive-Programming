#include <bits/stdc++.h>

using namespace std;

// Complexity O(n)
bool basicPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) if (n % i == 0) return false;
    return true;
}

// Better Approach. Complexity O(sqrt(n))
bool prime(int n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;

    cout << basicPrime(n) << endl;
    cout << prime(n) << endl;
    return 0;
}
