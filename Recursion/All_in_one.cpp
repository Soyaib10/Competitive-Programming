#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// chapter 1

// print 1 - N linearly, tc: O(N), sc: O(N)
void f1(int i, int n) {
    if (i > n) return;
    cout << i << " ";
    f1(i + 1, n);
}

// print 1 - N(backtracking) tc: O(N), sc: O(N)
void f2(int i , int n) {
    if (i < 1) return;
    f2(i - 1, n);
    cout << i << " ";
}

// print N to 1, tc: O(N), sc: O(N)
void f3(int i, int n) {
    if (i > n) return;
    cout << i << " ";
    f3(i + 1, n);
}

// print N to 1(backtracking) tc: O(N), sc: O(N)
void f4(int i, int n) {
    if (i < 1) return;
    f4(i - 1, n);
    cout << i << " ";
}

// sum of 1 to N(Parameterized)
void parameterized_sum(int i, int sum) {
    if (i < 1) {
        cout << sum << "\n";
        return;
    }
    sum += i;
    parameterized_sum(i - 1, sum);
}

// sum of 1 to N(functional)
int functional_sum(int n) {
    if (n == 0) return 0;
    return n + functional_sum(n - 1);
}

// factorial of N, tc: O(N), sc: O(N)
int factorial(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

// chapter 2

// reverse an array(Parameterized)
void reverse_array(int a[], int n, int i) {
    if (i >= n / 2) return;
    swap(a[i], a[n - i - 1]);
    reverse_array(a, n, i + 1);
}

// palindrome(functional)
bool palindrome(int a[], int n, int i) {
    if (i >= n / 2) return true;
    if (a[i] != a[n - i - 1]) return false;
    return palindrome(a, n, i + 1);
}

//chapter 3 - multiple recursive fucntion
// fibonacci, tc: O(N)
ll fibonacci(ll n) {
    if (n == 0 or n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//chapter 4 - subsequences pirnting
// all subsequences of an array, tc: O(N)
void all_subsequences(int i, int a[], vector <int> &v, int n) {
    if (i >= n) {
        for (auto i : v) cout << i << " ";
        cout << "\n";
        return;
    }
    // take a element
    v.push_back(a[i]);
    all_subsequences(i + 1, a, v, n);
    // don't take a element
    v.pop_back();
    all_subsequences(i + 1, a, v, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a[] = {3, 6, 7};
    int n = 3;
    vector <int> v;
    all_subsequences(0, a, v, n);
    return 0;
}