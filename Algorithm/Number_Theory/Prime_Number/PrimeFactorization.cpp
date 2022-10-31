// Problem name:
#include<bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MX 200005
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

const int N = 3*1e7;
vector <bool> is_prime(N, true);
vector <int> prime;

void seive(int n) {
    for (int i = 3; i * i <= N; i += 2) {
        if (is_prime[i]) for (int j = i * i; j <= n; j += 2 * i) is_prime[j] = false;
    }
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2) if (is_prime[i]) prime.push_back(i);
}

void primeFactorization(int n) {
    int count = 0;
    seive(sqrt(n) + 1);
    
    for (int i = 0; prime[i] * prime[i] <= n; i++) {
        if (n % prime[i] == 0) {
            while(n % prime[i] == 0) {
                n /= prime[i];
                cout << prime[i] << " ";
                count++;
            }
        }
    }
    if (n > 1) {
        cout << n << nl;
        count++;
    }
    cout << count << nl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;
    int n;
    cin >> n;
    primeFactorization(n);
}