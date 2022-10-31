#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    pair <int, int> p[n];

    for (int i = 0; i < n; i++){
        p[i].first = a[i];
        p[i].second = b[i];
    }
        
    sort(p, p + n);

}
