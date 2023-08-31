void solve() {
    string s = "??????";
    int n = s.size();
    if (count(s.begin(), s.end(), '?') == n) {
        cout << n << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;

    solve();
}
