#include<bits/stdc++.h>

using namespace std;

const int N = 10000005;
vector <int> phi(N + 1), lp(N + 1), pr;

void phi_1_to_n() {
    phi[1] = 1;
    for (int i = 2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            phi[i] = i - 1;
            pr.push_back(i);
        }
        else {
            if (lp[i] == lp[i / lp[i]]) phi[i] = phi[i / lp[i]] * lp[i];
            else phi[i] = phi[i / lp[i]] * (lp[i] - 1);
        }
        for (int j = 0; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
        }
    }
    for (auto i : phi) cout << i << " ";
}

int main() {
    phi_1_to_n();
}