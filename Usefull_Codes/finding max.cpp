#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 45, 5};
    int max = 0;
    int first = a[0];

    for(int i = 0; i < 4; i++)
    {
        printf("i is %d\n", i);
        if(a[i]> first)
            max = a[i];
        else
            max = first;
    }

    printf("max is %d", max);
}
