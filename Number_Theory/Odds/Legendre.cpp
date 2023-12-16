// C++ program to find largest x such that p*x divides n!
#include <bits/stdc++.h>
using namespace std;

int legendre(int n, int p) {
    int x = 0;
    while (n) {
        n /= p;
        x += n;
    }
    return x;
}

int main() {
    int n = 10, p = 3;
    cout << legendre(n, p);
    return 0;
}

