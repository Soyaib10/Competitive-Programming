#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "Enter array size of a: ";
    int n;
    cin >> n;

    cout << "Enter array a :" << endl;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter array size of b: ";
    int m;
    cin >> m;

    cout << "Enter array b :" << endl;
    int b[m];
    for(int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a+ n);
    sort(b, b+ m);

    int c[n  + m];
    int i = 0, j = 0, k = 0;

    while(i < n || j < m)
    {
        if(i < n && j < m)
        {
            if(a[i] <= b[j])
            {
                c[k++] = a[i];
                i++;
            }

            else if(a[i] > a[j])
            {
                c[k++] = b[j];
                j++;
            }
        }

        // If any of the arrays is null then just put the other one to the final array!

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

    cout << "The merged array is ";
    for(int k = 0; k < m + n; k++)
        cout << c[k] << " ";
    cout << endl;

    return 0;
}
