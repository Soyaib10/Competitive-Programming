// memset() is used to fill a block of memory with a particular value. Works only for character, 0 and -1 only.
// Format is vary simple. First memset(pointer/ memory of the starting point, desired value, size (for how long to fill)).

#include <bits/stdc++.h>

using namespace std;

void function1()
{
    char str[40] = "My name is Soyaib Rahman Zihad";
    printf("Before memset: %s\n", str);

    memset(str + 1, '0', 5 * sizeof(char));
    printf("After memset: %s\n", str);
}

void function2()
{
    int n = 8;
    int array[n];

    memset(array, 0, n * sizeof(array[0]));
    printf("Array after memset: ");

    for(int i = 0; i < n; i++)
        cout << array[i] << " ";
}



int main()
{
    function1();
    function2();
}
