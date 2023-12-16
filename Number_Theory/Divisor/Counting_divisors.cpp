#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"

ll divisorCount(ll n) {
	ll count = 0;
	for (ll i = 1; i * i <= n; i++) {
		if (i * i == n) count++;
		else if (n % i == 0) count += 2;
	}
	return count;
}

int main() {
	fastIO;
	int n;
	cin >> n;
	cout << solve(n);

	return 0;
}