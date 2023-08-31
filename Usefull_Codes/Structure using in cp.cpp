#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct done {
    int weight, pos, id;
};

void solve () {
    int n, m;
    cin >> n >> m;

    vector<done>v(m);
    for(int i = 0; i < m; i++) {
        cin >> v[i].pos >> v[i].weight;
        v[i].id = i + 1;
    }

    sort(v.begin(), v.end(), [] (done a, done b) {
        return a.weight < b.weight;
    });


    int sum = 0;
    for (int i = 0; i < m; i++) {
        if(i < 2 * n) {
            sum += v[i].weight;
        }
        else v.pop_back();
    }

    sort(v.begin(), v.end(), [] (done a, done b) {
        return a.pos < b.pos;
    });

    cout << sum << endl;

    for(int i = 0; i < n; i++) {
        cout << v[i].id << " "  << v[2 * n - i - 1].id << endl;
    }

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}