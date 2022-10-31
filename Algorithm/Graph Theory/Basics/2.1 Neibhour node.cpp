#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define MAX 100000
int matrix [100][100];
vector <int> edge[MAX];
vector <int> cost[MAX];


void neibhoreNodeArray()
{
    freopen("input.TXT", "r", stdin);

    int node, edge;

    scanf("%d", &node);
    scanf("%d", &edge);

    int n1, n2;

    for(int i = 0; i < edge; i++)
    {
        scanf("%d%d", &n1, &n2);

        matrix [n1][n2] = 1;
        matrix [n2][n1] = 1;
    }

    for(int i = 0; i < node; i++)
    {
        if(matrix[3][i] == 1)
        printf("%d ", i);

    }
}

int main()
{
    neibhoreNodeArray();
}
