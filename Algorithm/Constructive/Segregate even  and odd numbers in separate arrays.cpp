#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 0, j = 0, k = 0;;
    cin >> n;

    int a1[n], a2[n], a3[n];

    for(int i = 0; i < n; i++)
        cin >> a1[i];

    for(int i = 0; i < n; i++)
    {
        if(a1[i] % 2 == 0)
            a2[j++] = a1[i];

        else
            a3[k++] = a1[i];
    }

    cout << "Even numbers are: ";
    for(int i = 0; i < j; i++)
        cout << a2[i] << " ";
    cout << endl;

    cout << "Odd numbers are: ";
    for(int i = 0; i < k; i++)
        cout << a3[i] <<" ";
    cout << endl;



    return 0;
}
