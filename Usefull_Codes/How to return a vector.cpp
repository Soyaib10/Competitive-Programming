#include <bits/stdc++.h>
#include <vector>
#include <iterator>

using namespace std;

vector <int> function (int n)
{
    vector <int> vec;

    for(int i = 1; i <= n; i++)
        vec.push_back(i * 2);

    return vec;
}

int main()
{
    int n = 10;

    vector <int> vec = function(n);

    for(vector <int> :: iterator it = vec.begin(); it != vec.end(); it++)
        cout << *it << endl;
}

