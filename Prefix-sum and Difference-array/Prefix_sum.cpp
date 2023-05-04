#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void function1() {
    int n;
    cin >> n;
 
    vector <ll> v(n + 1, 0);
    vector <ll> prefix(n + 1, 0);
    for (int i = 1;  i <= n;  i++) {
        cin >> v[i];
        prefix[i] = v[i] + prefix[i - 1];
    }
    
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << "\n";
    }
}

void function2() { 
    string s;
    cin >> s;

    int count = 0;
    int prefix[100005];
    prefix[0] = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) count++;
        prefix[i] = count;
    }

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        cout << prefix[y] - prefix[x] << "\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
