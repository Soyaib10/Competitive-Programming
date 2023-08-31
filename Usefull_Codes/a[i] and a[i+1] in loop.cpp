#include <bits/stdc++.h>

using namespace std;

int main()
{
    //int a[5] = {1, 2, 3, 64, 5};
    int a[5] = {10, 20, 30, 40, 40};
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        if(a[i] != a[i + 1])
        {
            count++;
            cout << count << " ";
        }

    }
}

// It's ok.
