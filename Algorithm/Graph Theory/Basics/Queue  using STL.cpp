#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main()
{
    queue <string> q;

    q.push("a");
    q.push("b");
    q.push("d");
    q.push("c");

    while(!q.empty())
    {
        string x = q.front();
        cout << x << " ";
        q.pop();
    }

    return 0;
}
