#include <bits/stdc++.h>
#include <vector>
#include <queue>

using namespace std;

vector <int> v[100];

int visited[100];

int node, edge, x, y;

void dfs(int startingNode)
{
    cout << startingNode << " ";
    visited[startingNode] = 1;

    for(int i = 0; i < v[startingNode].size(); i++)
    {
        int child = v[startingNode][i];

        if(!visited[child])
            dfs(child);
    }
}


int main()
{
    freopen("input.TXT", "r", stdin);

    cin >> node >> edge;

    for(int i = 0; i < edge; i++)
    {
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(3);
    cout << endl;

    for(int i = 0; i < node; i++)
    {
        if(visited[i])
            dfs(i);
    }
}
