#include <bits/stdc++.h>
# define ll long long int
using namespace std;
  
int main()
{
    // Converting every string index into a separate int
    string c = "2345";
    int sum = 0;
    for(int i = 0; i < c.size(); i++){
        int s = (c[i] - 48);
        sum += s;
    }

    cout << sum << endl;

    // converting to int number.
    // Format: stoi(string_name)
    string s = "2342134";
    int b = stoi(s); 
    cout << b << endl;
  
    // converting to long long int number.
    // Format: stoll(string_name, nullptr, num_base)
    string dec_num = "9876543210";
    ll a = stoll(dec_num, nullptr, 10);
    cout << a << endl;
  
    return 0;
}