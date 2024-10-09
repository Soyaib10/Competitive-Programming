#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void basic() {
	int a = 5; 	// normal variable
	int *p; 	// declare a pointer
	p = &a;		// p now has the value of a's address

	cout << "a: " << a << "\n";
	cout << "p: " << p << "\n";
	cout << "&a: " << &a << "\n";
	cout << "&p: " << &p << "\n";
	cout << "*p: " << *p << "\n";
	*p = 10;
	cout << "a's value after changing using *p: " << *p << "\n";

	// the following opetation will not cauge p to referencing a. Here what just happening is keeping p's value as b.
	int b = 20;
	*p = b;
	cout << "p: " << p << "\n";
	cout << "*p: " << *p << "\n";

	// increment oprator in pointer
	cout << "p + 1: " << p + 1 << "\n"; // should increment by 4 as int takes 4 bytes
	cout << "value at p + 1" << *(p + 1) << "\n";
}

void typeCasting() {
	int a = 1025;
	int *p = &a;
	cout << "p: " << p << " *p: " << *p << "\n";
	cout << "p + 1: " << p << " (*p + 1): " << *(p + 1) << "\n";

	char *c = (char*)&a;
	cout << "c: " << c << " *c: " << *c << "\n";
	cout << "c + 1: " << c + 1 << " (*c + 1): " << *(c + 1) << "\n";

	void *x = &a;
	cout << "x: " << x << "\n"; // no dereferencing or x + 1 posible.
}

void callByReference(int *x) {
	*x = *x + 1;
}

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void arrayPointer() {
	int a[3] = {2, 3, 4};
	printf("address: a + 1: %d, &a[1]: %d\n", a, &a);
	printf("value: a[1]: %d, *(a + 1): %d\n", a[1], *(a + 1));
}

int arrayPassByReference(int a[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// basic();
	// typeCasting();
	// arrayPointer();

	// int x = 10;
	// callByReference(&x);
	// cout << "x:" << x << "\n";

	int a = 10, b= 20;
	swap(a, b);
	cout << "a: " << a << ", b: " << b << "\n";

	// int a[3] = {2, 3, 4};
	// int len = sizeof(a) / sizeof(a[0]);
	// cout << arrayPassByReference(a, len);


	return 0;
}