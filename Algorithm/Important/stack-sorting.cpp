#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a;
    cin >> n;

    stack <int> st, temp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        st.push(a);
    }

    while (!st.empty()) {
        int k = st.top();
        st.pop();
        // firstly clear the temp stack upto the the k element
        // check if temp stack is not empty and the top element is less then st.top()
        while(!temp.empty() and temp.top() < k){ 
            st.push(temp.top());
            temp.pop();
        }
        // insert the st.top() element
        temp.push(k);
    }

    // print stack temp
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << nl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastIO;

    solve();
}
