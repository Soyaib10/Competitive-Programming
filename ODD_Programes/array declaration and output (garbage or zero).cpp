#include <bits/stdc++.h>

using namespace std;

int a[10];

void test1()
{
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << a[20] << endl;
}

void test2()
{
    int a[15];

    a[4] = 20;
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";

    a[12] = 20;
    cout << a[12] << endl;

    cout << endl;
}

int main()
{
    test1();
    test2();
}
