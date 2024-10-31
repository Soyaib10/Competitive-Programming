#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void plusMinus(vector<int> &v) {
    int n = v.size();
    double zero = 0, plus = 0, minus = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) zero++;
        else if (v[i] > 0) plus++;
        else minus++;
    }
    zero = zero / n;
    plus = plus / n;
    minus /= n;

    cout << fixed << setprecision(6);
    cout << plus << "\n";
    cout << minus << "\n";
    cout << zero << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v = {1, 2, 0, 0, -1, 1};
    plusMinus(v);
    return 0;
}