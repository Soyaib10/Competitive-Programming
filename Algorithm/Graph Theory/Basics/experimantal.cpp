#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <iterator>

using namespace std;


void arrayi()
{
    int a[5][5];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
}

void vectori()
{
    vector <int> g[3];

    int a = 1;
    int b = 2;

    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >>
            }
        }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

}



int main()
{
    //arrayi();
    vectori();
}
