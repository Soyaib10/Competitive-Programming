#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    string num_string = "";
    for (int i = 0; i < n; i++) if (s[i] >= '1' and s[i] <= '9') num_string.push_back(s[i]);
    reverse(num_string.begin(), num_string.end());
    
    string ans = "";
    int start = num_string.size();
    for (int i = start; i < n; i++) {
        if (s[i] >= 'A' and s[i] <= 'Z') {
            if (i + 2 < n and s[i + 2] == '*') {
                ans.push_back(s[i + 1]);
                ans.push_back(s[i]);
                i += 2;
            }
            else ans.push_back(s[i]);
        }
        else if (s[i] == '0') {
            ans.push_back(num_string[0]);
            num_string.erase(num_string.begin());
        }
        else ans.push_back(s[i]);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}