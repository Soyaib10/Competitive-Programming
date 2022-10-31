#include <bits/stdc++.h>
#include <vector>
#include <queue>

using namespace std;

vector <int> v[100];

int visited[100];

int node, edge, x, y; // node = n, m = edge

void bfs(int startingNode)
{
    queue <int> q;
    q.push(startingNode);

    visited[startingNode] = 1;

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for(int i = 0; i < v[current].size(); i++)
        {
            int child = v[current][i];

            if(!visited[child])
            {
                q.push(child);
                visited[child] = 1;
            }
        }
    }

    cout << endl;
}

int main()
{
    freopen("input.TXT", "r", stdin);

    cin >> node >> edge;

    for(int i = 0; i < node; i++)
    {
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    cout << "bfs after calling the starting node: ";
    bfs(4);

    for(int i = 0; i < node; i++)
    {
        if(visited[i])
            bfs(i);
    }
}
