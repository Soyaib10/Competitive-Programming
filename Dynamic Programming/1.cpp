#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool f(int i, int n, int target, int sum, vector<int>& v, vector<int>& ds) {
    if (i >= n) {
        if (sum == target) {
            for (auto i : ds) cout << i << " ";
            cout << "\n";
            return true;
        }
        else return false;
    }

    ds.push_back(v[i]);
    sum += v[i];
    if (f(i + 1, n, target, sum, v, ds) == true) return true;
    sum -= v[i];
    ds.pop_back();
    if (f(i + 1, n, target, sum, v, ds) == true) return true;
    return false;
}

void solve() {
    int n = 3;
    vector<int> v = {1, 2, 1};
    int target = 2;
    vector<int> ds;
    f(0, n, target, 0, v, ds);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}