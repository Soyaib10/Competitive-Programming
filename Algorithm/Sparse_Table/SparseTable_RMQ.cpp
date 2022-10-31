// Video link: https://www.youtube.com/watch?v=sznngc9OBCM&t=5374s
// Video link: https://www.youtube.com/watch?v=0jWeUdxrGm4&t=956s

#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"

const int MAX_N = 200005;
const int LOG = 17;
ll ar[MAX_N];
int m[MAX_N][LOG]; // m[i][j] is minimum among a[i..i+2^j-1]
int bin_log[MAX_N];

int Query(int l, int r)
{
    int len = r - l + 1;
    int j = bin_log[len];
    return min(m[l][j], m[r - (1 << j) + 1][j]);
}
void sparseTable() {
    // input
    ll n;
    cin >> n ;

    // Pre-calculate the log value
    bin_log[1] = 0;
    for (int i = 2; i <= n; i++){
        bin_log[i] = bin_log[i / 2] + 1;
    }
    for (int i = 0; i < n; i++){
        cin >> ar[i];
        m[i][0] = ar[i];
    }

    // Pre-processing, O(N*log(N))
    for (int j = 1; j < LOG; j++) {
        for (int i = 0; i + (1 << j) - 1 < n; i++)
        {
            m[i][j] = min(m[i][j - 1], m[i + (1 << (j - 1))][j - 1]);
        }
    }

    ll q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        cout << Query(l, r) << "\n";
    }
}

int main()
{
    fastIO;
    sparseTable();
}