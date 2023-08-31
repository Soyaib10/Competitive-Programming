#include <bits/stdc++.h>

using namespace std;

int method1()
{
    int a[] = {10, 20, 30, 40, 50};
    int i = 1;
    a[i]++; // increases the element at index, i here index 1, from 20 to 21 but doesn't increment i from 1 to 2.
    cout << i << " " << a[i] << endl; // a[i] = 21 but i = 1.
    a[i++];
    cout << i << " " << a[i] << endl;
}

int main()
{
    method1();

    return 0;
}
