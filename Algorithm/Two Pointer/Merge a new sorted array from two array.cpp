#include <bits/stdc++.h>

using namespace std;

void mergeTwoArray( int n, int a[],  int m, int b[], int p, int c[])
{
    int i = 0, j = 0, k = 0;

    while(i < n or j < m)
    {
        if(i < n and j < m)
        {
            if(a[i] < b[j])
            {
                c[k++] = a[i];
                i++;
            }

            else if(a[i] > b[j])
            {
                c[k++] = b[j];
                j++;
            }
        }

        else if(i < n)
        {
            c[k++] = a[i];
            i++;
        }

        else if(j < m)
        {
            c[k++] = b[j];
            j++;
        }
    }

    cout << "Merged array is: ";

    for (int z = 0; z < p; z++)
        cout << c[z] << " ";

}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    int b[m];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    int p = n + m;
    int c[p];

    mergeTwoArray(n, a, m, b, p, c);

}
