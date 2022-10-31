#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string shiftS;
    cin>>s;

    int k;
    cin>>k;

    int length = s.length();

    for(int i = 0; i < length; i++)
    {
        int index = (i + k) % length;
        shiftS[index] = s[i];
        shiftS[length] = '\0';
    }
    cout<<shiftS;
}

