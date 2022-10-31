/* Given two numbers a = 10 and b = 15 count total bits(1)
a = 10 = 1010 = 2
    11 = 1011 = 3
    ...
    15 = 1111 = 4
    total = 17
*/

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int count_bits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += (n & 1);
        n = n >> 1;
    }
    return count;
}

int main()
{
    ll test;
    cin >> test;

    while (test--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;

        for (int i = a; i <= b; i++)
        {
            if ((i & 1) == 0 && i < b)
            {
                cout << "bit1: " << i << endl;
                count += 2 * count_bits(i) + 1;
                cout << "count: " << count << endl;
                i++;
                //cout << "bit2: " << i << endl;
                continue;
            }
            count += count_bits(i);
        }
        cout << count << endl;
    }
}
