#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> getPrime () {
    vector<int> prime;
    int lower = 2;
    int upper = 10000;
    for (int i = lower; i < upper; i++) {
        bool isPrime = 0;
        for (int j = lower; j <= sqrt(i); j++) {
            if (i % j == 0)
                isPrime = 1;
        }
        if (isPrime == 0)
            prime.push_back(i);
    }
    return prime;
}

vector<int> waiter(vector<int> number, int q) {
    vector<int> result, strA, strB;
    int num;
    vector<int> prime = getPrime(); // assign all the prime number to array

    for (int i = 0; i < q; i++) {
        int size = number.size();

        for (int j = 0; j < size; j++) {
            num = number.back();

            // if the number is divisible by the prime number, store it to stack strB
            // if not, store it to stack strB
            if ( num % prime[i] == 0 ) {
                strB.push_back(num);
                number.pop_back();
            }
            else {
                strA.push_back(num);
                number.pop_back();
            }
        }
        number = strA;  // do the iteration with number in the strA
        strA.clear();

        // move the strB stack value to the result stack
        while (!strB.empty()) {
            result.push_back(strB.back());
            strB.pop_back();
        }
    }

    // if the strA stack not empty until all iteration, move it to result stack
    while (!number.empty()) {
        result.push_back(number.back());
        number.pop_back();
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> number(n);
    for (int i = 0; i < n; i++) cin >> number[i];
    auto v = waiter(number, q);
    for (auto i : v) cout << i << " ";
    return 0;
}