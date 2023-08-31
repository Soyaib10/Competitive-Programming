// C++ program to convert whole string to
// uppercase or lowercase using STL.
#include<bits/stdc++.h>
using namespace std;

void functional() {
    // su is the string which is converted to uppercase
    string su = "Jatin Goyal";
  
    // using transform() function and ::toupper in STL
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;
  
    // sl is the string which is converted to lowercase
    string sl = "Jatin Goyal";
  
    // using transform() function and ::tolower in STL
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    cout << sl << endl;
}

void manual() {
    string s = "STAR";

    int n = s.length();
    for (int i = 0; i < n; i++) s[i] = tolower(s[i]);

    cout << s;

}
  
int main() {
    functional();
    manual();
  
    return 0;
}