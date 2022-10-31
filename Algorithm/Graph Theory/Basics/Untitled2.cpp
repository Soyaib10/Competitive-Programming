#include <bits/stdc++.h>
#include <vector>

using namespace std;

int N;

vector <int> g[100];

void elements()
{
    cin >> N;


    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            g[i].push_back(j);
    }

    cout << " The outPut :" << endl;

    for(int i = 0; i <  N; i++)
    {
        for(int j = 0; j < N; j++)
            cout << g[i][j];
    }


}

int main()
{
    elements();
}
