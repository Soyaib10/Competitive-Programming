/*
1. Given an array consisting of n integers, find the contiguous subarray of given length k that has the maximum average value. And you need to output the maximum average value.

Solution: the problem falls into the first type of sliding window problems, since the length of the window is fixed. We find the first window with size k and maintain a variable curSum which equals the sum of all the elements within the current window and a global maxSum which is the maximum sum among all the windows we have examined. As we moving the window one step at a time from left to right, we subtract the leftmost element in the current window and add the next element of the array until we hit the end of the array. Finally, we return the maxSum / k which is the maximum average among all the windows of length k.
*/

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

void solve() {
    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0, r = 0, mx = -1;
    map <int, int> mp;
    while (r < n) {
        mp[v[r]]++;
        if(mp.size() >= k) {
            mx = max(r - l + 1, mx); 
            mp.erase(mp.begin()); 
            l++;
        }
        r++;
    }
    cout << mx << nl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    fastIO;

    solve();
}

