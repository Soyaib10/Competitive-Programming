#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[7] = {3, 5, 2, 1, 65, 67, 4};
    int i = 0;
    int j = -1;

    for(i = 0; i < 7; i++)
        cout << a[i] << " ";



    for(int i = 0; i < 7; i++)
    {
        if(a[i] % 2 == 0)
        {
            j++;
            swap(a[i], a[j]);
            //cout << a[i] << " " << a[j];
        }
    }

    for(i = 0; i < 7; i++)
        cout << a[i] << " ";

    return 0;
}
