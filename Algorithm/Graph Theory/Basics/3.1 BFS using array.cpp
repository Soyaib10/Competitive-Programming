#include <bits/stdc++.h>
#include <queue>

using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int matrix[100][100];
int colour[100];
int parent[100];
int distant[100];

int node, edge;

void bfs(int startingNode)
{
    for(int i = 0; i < node; i++)
    {
        colour[i] = WHITE;
        distant[i] = INT_MIN;
        parent[i] = -1;
    }

    distant[startingNode] = 0;
    parent[startingNode] = -1;

    queue <int> q;
    q.push(startingNode);

    while(!q.empty())
    {
        int x;
        x = q.front();
        q.pop();
        colour[x] = GRAY;

        cout << x << " ";

        for(int i = 0; i < node; i++)
        {
            if(matrix[x][i] == 1) //node i is neighbor of node x
            {
                if(colour[i] == WHITE) //node x is parent of node i
                {
                    distant[i] = distant[x] + 1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }

        colour[x] = BLACK;
    }
}

int main()
{
    freopen("input.TXT", "r", stdin);

    cin >> node >> edge;

    int n1, n2;

    for(int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;

        matrix [n1][n2] = 1;
        matrix [n2][n1] = 1;
    }

    bfs(0);

    cout << "\n";

    cout << "parent of node 5 is : ";
    cout << parent[5] << endl;

    cout << "distance of node 6 : ";
    cout << distant[6] << endl;

}
