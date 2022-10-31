#include <bits/stdc++.h>

#define ll long long
#define MAX 1000005

using namespace std;

ll a[MAX];

int main()
{
    int n;
    ll sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0;
    ll ans = 0;

    int m;
    cin >> m;

    while (l < n)
    {
        while (r < n and sum + a[r] <= m)
        {
            sum += a[r];
            r++;
        }

        ans = max(ans, sum);

        sum -= a[l];
        l++;
    }

    cout << ans << endl;

    return 0;

}
