#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector <int> v[10000];

void adjcencyListNeibhour()
{
    int n, m, x, y; // node = n, m = edge

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    cout << "adjcencyListNeibhour : " << endl;
    adjcencyListNeibhour();
}
