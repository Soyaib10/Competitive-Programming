// A C++ program to find the number of digits in a factorial

#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) {
    double digits = 0;
    for (int i = 1; i <= n; i++) digits += log10(i);
    return floor(digits) + 1;
}

int main() {
    cout << findDigits(1) << endl;
    cout << findDigits(5) << endl;
    cout << findDigits(10) << endl;
    cout << findDigits(120) << endl;
    return 0;
}
