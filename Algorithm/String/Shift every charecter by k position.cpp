#include<bits/stdc++.h>

using namespace std;

void shifting(char s[], char shiftS[], int k)
{
    int i;

    for(i = 0; i <6 ; i++)
    {
        int index = (i + k) % 6;
        shiftS[index] = s[i];
        shiftS[6] = '\0';

        cout<< shiftS[index];
    }
    //for(int index = 0 ;index < 6; index++ )
    //cout<< shiftS[index];
}

int main()
{
    char s[100];
    char shiftS[100];
    cin>>s;

    int k;
    cin>>k;

    shifting(s, shiftS, k);

}
