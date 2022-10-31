#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s;
    int n;
    cin>> n >> s;

    int midOdd = (n + 1) / 2;
    int midEven = (n + 1) / 2 - 1;

    for(int i = 0; i < n; i++)
    {
        cout << s[midOdd] << endl;
        s.erase(midOdd, 1);
        cout << s;
    }
}
