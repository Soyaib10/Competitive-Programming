#include <bits/stdc++.h>

using namespace std;

void solve () {
    int n = 5;
    int a[5] = {2, 53, 7, 8, 45};
    sort(a, a + 5);

    int i = 0, j = n - 1, x = 60;

    while (i < j) {
        if(a[i] + a[j] == x) {
            cout << "Found" << endl;
            break;
        } 
        else if(a[i] + a[j] > x) {
            j--;
        }
        else i--;
    }
}

int main() {
    solve();
}