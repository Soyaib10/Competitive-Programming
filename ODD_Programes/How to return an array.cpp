#include <bits/stdc++.h>

using namespace std;

int* function ()
{
    int* array = new int [100];

    array[0] = 10;
    array[1] = 20;

    return array;
}

int main()
{
    int* ptr = function();
    cout << ptr[0] << " " << ptr[1];
}
