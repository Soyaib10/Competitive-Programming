// SPF- Smallest Prime Factor
#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl "\n"			

int SPF (int n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; i * i <= n; i += 2) if (n % i == 0) return i;
    return n;
}

int main() {
	fastIO;
	int n;
	cin >> n;
	cout << SPF(n);

	return 0;
}