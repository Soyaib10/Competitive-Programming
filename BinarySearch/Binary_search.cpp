#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int binarySearch(vector <int> &v, int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == x) return mid;
        if (v[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(void) {
    vector <int> v = {1, 2, 3, 45};
    int x = 45, n = v.size();
    int result = binarySearch(v, x, 0, n - 1);
    if (result == -1) cout << -1;
    else cout << result;
}
