#include <bits/stdc++.h>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int matrix[100][100];
int colour[100];
int parent[100];
int distant[100];

int node, edge;

void dfsVisit(int x)
{
    colour[x] = GRAY;
    for(int i = 0; i < node; i++)
    {
        if(matrix[x][i] == 1)
        {
            if(colour[i] == WHITE)
                dfsVisit(i);
        }
    }

    colour[x] = BLACK;
}

void dfs()
{
    for(int i = 0; i < node; i++)
    {
        colour[i] = WHITE;
    }

    for(int i = 0; i < node; i++)
    {
        if(colour[i] == WHITE)
        {
            dfsVisit(i);
        }
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

    dfs();
    //dfsVisit(1);

}



