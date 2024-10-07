#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void basic() {
    int a = 5; 	// normal variable
    int *p; 	// declare a pointer
    p = &a;		// p now has the value of a's address

    cout << "a: " << a << "\n";
    cout << "p: " << p << "\n";
    cout << "&a: " << &a << "\n";
    cout << "&p: " << &p << "\n";
    cout << "*p: " << *p << "\n";
    *p = 10;
    cout << "a's value after changing using *p: " << *p << "\n";

    int b = 20;
    *p = b;
    cout << "p: " << p << "\n";
    cout << "*p: " << *p << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    basic();
    return 0;
}