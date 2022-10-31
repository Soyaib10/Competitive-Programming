#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, count = 0;
    cin >> t;
    int d = 4;

    while(d > 1){
        while(t % d == 0){
        t = t / d;
        count++;
        }
        d--;
    }

    cout << count;
}