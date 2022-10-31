#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define MAX 100000

int matrix [100][100];
vector <int> edge[MAX];
vector <int> cost[MAX];


void matrixInputMatrix()
{
    int node;

    printf("Enter the number of node: ");
    scanf("%d", &node);

    for(int i = 0; i < node; i++)
    {
        for(int j = 0; j < node; j++)
            scanf("%d", &matrix[i][j]);
    }

    for(int i = 0; i < node; i++)
    {
        for(int j = 0; j < node; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

}

void matrixInputNodeEdge()
{
    freopen("input.TXT", "r", stdin);
    int node, edge;

    /*printf("Enter the number of node: ");
    scanf("%d", &node);

    printf("Enter the number of edges: ");
    scanf("%d", &edge);*/

    cin >> node >> edge;

    for(int i = 0; i < edge; i++) // no. of input = no. of edge
    {
            int n1, n2, cost = 1;

            scanf("%d%d", &n1, &n2);

            matrix [n1][n2] = cost;
            matrix [n2][n1] = cost;
    }

    for(int i = 0; i < node; i++)
    {
        for(int j = 0; j < node; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

void vectorInputNodeEdge()
{
    int numNode, numEdge;

    cin >> numNode >> numEdge;

    for(int i = 0; i < numEdge; i++)
    {
        int x, y;

        cin >> x >> y;

        edge[x].push_back(y);
        edge[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
    }


}


int main()
{
    matrixInputNodeEdge();
    //matrixInputMatrix();
    //vectorInputNodeEdge();
}
