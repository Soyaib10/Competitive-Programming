#include <bits/stdc++.h>
#define nl "\n"

using namespace std;

void function1() {
    int n;
    cin >> n;

    vector <int> arr(n + 1 , 0);
    vector <int> prefix(n + 1 , 0);

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> arr[i] ;
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a , b ;
        cin >> a >> b ;
        a++ ;
        b++ ;
        cout << prefix[b] - prefix[a - 1] << endl ;
    }
}

void function2() { 
    string s;
    cin >> s;

    int prefix[100005];
    prefix[0] = 0;
    int t;
    cin >> t;

    int len = s.size();
    int count = 0;
    for (int i = 1; i < len; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
        prefix[i] = count;
    }

    while (t--) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;

        cout << prefix[y] - prefix[x] << nl;
    }
}

int main() {
    function1();
    function2();
}