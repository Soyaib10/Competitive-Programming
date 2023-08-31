#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    vector <int> v = {2, 3, 5, 5, 5, 6, 6};


    // lower_bound: returns an element equal or greater than it when it occured first.
    auto it = lower_bound(v.begin(), v.end(), 10);
    cout << "element: " << *it << "\n"; // *it prints element.
    cout << "index: " << distance(v.begin(), it) << "\n"; // prints index.
    cout << "index: " << it - v.begin() << "\n"; // prints index.
    if (it == v.end()) cout << "not found" << "\n";
    else cout << "found" << "\n";


    // upper_bound: returns an element greater then it 
    auto it2 = upper_bound(v.begin(), v.end(), 325);
    cout << "element: " << *it2 << "\n";
    cout << "index: " << distance(v.begin(), it2) << "\n";
    cout << "index: " << it2 - v.begin() << "\n";
    if (it2 == v.end()) cout << "not found upper" << "\n";
    else cout << "found upper" << "\n";


    // in set
    // set <int> s(v.begin(), v.end());
    // auto it3 = s.lower_bound(2);
    // cout << to_string(*it3) << "\n";

    // suppose, find first occurance of 5: check lower_bound. 
    // find last occurance of 5: check upper_bound - 1;
    auto it4 = upper_bound(v.begin(), v.end(), 5);
    cout << distance(v.begin() + 1, it4) << "\n";
    cout << it4 - v.begin() - 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}
