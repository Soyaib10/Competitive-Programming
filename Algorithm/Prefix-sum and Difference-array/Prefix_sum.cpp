#include<bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nl "\n"
#define PI 3.141592653589793238462

typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

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
 
        cout << prefix[b] - prefix[a - 1] << nl;
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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;

    function1();
    // function2();
}
