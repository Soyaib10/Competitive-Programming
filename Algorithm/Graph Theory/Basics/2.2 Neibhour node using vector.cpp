#include <bits/stdc++.h>
#include <vector>
#include <iterator>

using namespace std;

const int N = 100000; //node
const int M = 100000; //edge

vector <int> g[N];

int node, edge;

void neibhourNodeVector() {
    freopen("input.TXT", "r", stdin);
    cin >> node >> edge;
    for(int i = 0; i < edge; i++) {
        int x, y;
        cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    int gSize = g[3].size();
    for(int i = 0; i < gSize ; i++) printf("%d ", g[3][i]);
}

int main() {
    neibhourNodeVector();
}

