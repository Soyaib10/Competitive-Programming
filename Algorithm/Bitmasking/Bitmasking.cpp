#include <bits/stdc++.h>

using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n = n >> 1;
    }
    return count;
}

void bitOperation() {
    // left shift
    cout << "Left shift" << endl;
    cout << "5 << 1: " << (5 << 1) << endl;
    cout << "5 << 2: " << (5 << 2) << endl << endl;

    // right shift
    cout << "Right shift" << endl;
    cout << "5 >> 1: " << (5 >> 1) << endl;
    cout << "5 >> 2: " << (5 >> 2) << endl << endl;

    // and
    cout << "And: " << endl;
    cout << "12 & 25: " << (12 & 25) << endl << endl;

    // or
    cout << "or: " << endl;
    cout << "5 | 2: " << (5 | 2) << endl << endl;

    // not
    cout << "Not operator: " << endl;
    cout << "~5: " << ~5 << endl << endl;

    // xor
    cout << "xor: ";
    cout << "5^2: " << (5 ^ 2) << endl;
    cout << "5^5: " << (5 ^ 5) << endl << endl;
}

void binaryRepresentation() {
    int a= 5;
    for(int i = 5; i < 0; i++) {
        if((x & (1 << i)) != 0) {
            cout << 0; 
        }
        else
            cout << 1;
    }
}

void findUniqueNumber() {
    // given a set of numbers find the number that occured once(1, 1, 2, 2, 3)
    // make xor all of that because xor on same element gives 0
    cout << "find the unique: " << endl;
    array <int, 5> a = {1, 1, 2, 2, 3};
    int res = a[0];
    for (int i = 1; i < a.size(); i++) {
        res = res | a[i];
    }
    cout << res << endl << endl;
}

void oddEven() {
    // find odd or even
    cout << "Odd or even: " << endl;
    int n;
    cin >> n;
    if (n & 1)
        cout << n << " is odd" << endl << endl;
    else 
        cout << n << " is even" << endl << endl;
}

void find2sComplement() {
    // find 2's complement
}

void bitsNeedToChangeToMakeAtoB() {
    int a = 11, b = 15;
    int n = a ^ b;
    cout << "bitsNeedToChangeToMakeAtoB: " << countSetBits(n) << endl << endl;
}

void removeLastSetBit() {
    int a = 12; // if number is a = n then take b = n - 1
    int b = 11;
    cout << "removeLastSetBit: " << (a & b) << endl << endl;
}

void swaping() {
    int a = 0, b = 7;

    a = a ^ b; // 5 ^ 7
    b = a ^ b; // (5 ^ 7) ^ 7 = 5
    a = a ^ b; // (5 ^ 7) ^ 5 = 7
    cout << "swap(xor): " <<"a: " << a << ", b: " << b  << endl << endl;
}

void extractIthBit() {
    int n = 13; // 1101 (1 << i(3) = 1000)
    int i = 3;
    cout << "extractithBit: " << (n & (1 << i)) << endl << endl; 
    // if extracted number is not zero then ith bit is non-zero.
}

void changeIthBit() {
    int n = 13; // 1101
    int i = 3;
    cout << "changeIthBit: " << (n | (1 << i)) << endl << endl;
}

void clearIthBit() {
    int n = 13; // 1101
    int i = 3;
    cout << "changeIthBit: " << (n  & ~ (1 << i)) << endl << endl;
    // ((n & ~mask) | (b << p));
}

int main()
{
    bitOperation();
    binaryRepresentation();
    findUniqueNumber();
    oddEven();
    find2sComplement();
    bitsNeedToChangeToMakeAtoB();
    removeLastSetBit();
    swaping();
    extractIthBit();
    changeIthBit();
    clearIthBit();

    return 0;
}