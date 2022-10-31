#include <bits/stdc++.h>
using namespace std;

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) result -= result / i;
        while (n % i == 0) n /= i;
    }
    if (n > 1) result -= result / n;
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << phi(n) << endl;
}

