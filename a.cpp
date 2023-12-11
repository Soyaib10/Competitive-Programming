#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
using namespace std;

int dx[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dy[8] = { 0, 0, 1, -1, 1, -1, -1, 1 };

/*
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree <
    pair<int ,int>,
    null_type,
    less<pair<int ,int>>,
    rb_tree_tag,
    tree_order_statistics_node_update> ordered_set;
*/


const ll mod = 1e9 + 7;

const int N = 2e5 + 10;

int ar[3] = {1, 2, 3};

void rec(int idx = 0) {
    if (idx == 3) return;
    for (int i = idx; i < 3; i++) {
        swap(ar[idx], ar[i]);
        cout << "Before[idx]: " << idx << ' ' << i << '\n';
        cout <<  "Before[value]: " << ar[idx] << " " << ar[i] << " " << "\n";
        cout << "Before[array]: ";
        for (int i = 0; i < 3; i++) cout << ar[i] << ' ';
        cout << "\n";
        rec(idx + 1); 
        swap(ar[i], ar[idx]);
        cout << "after[idx]: " << idx << ' ' << i << '\n'; 
        cout << "after[value]: " << ar[idx] << " " << ar[i] << " " << "\n";
        cout << "after[array]: ";
        for (int i = 0; i < 3; i++) cout << ar[i] << ' ';
        cout << "\n";
    }
}
void solve(int tc)
{
    int n = 3;
    rec();
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //pre_cal();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
    return 0;
}