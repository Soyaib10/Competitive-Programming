#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6}, i;
    int j = -1;

    for(int i = 0; i < 6; i++)
    {
        if(a[i] % 2 == 0)
        {
            j++;
            swap(a[i], a[j]);
        }
    }

    for(i = 0; i < 6; i++)
        cout << a[i] << " ";


    return 0;
}
