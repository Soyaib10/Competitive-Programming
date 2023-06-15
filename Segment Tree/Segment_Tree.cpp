#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 9;
int a[N], tree[N * 4];

void build(int node, int b, int e) {
    if (b == e) { // leaf node
        tree[node] = a[b];
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    tree[node] = tree[l] + tree[r]; // marge value
}

void update(int node, int b, int e, int i, int new_value) {
    if (i > e or i < b) return;
    if (b >= i and e <= i) {
        tree[node] = new_value;
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, new_value);
    update(r, mid + 1, e, i, new_value);
    tree[node] = tree[l] + tree[r];
}

int query(int node, int b, int e, int i, int j) { // (i, j) -> range by index
    if (i > e or j < b) return 0; // out of range
    if (b >= i and e <= j) return tree[node]; // relevent range
    int l = node * 2, r = node * 2 + 1; // break it more
    int mid = (b + e) / 2;
    int x = query(l, b, mid, i, j);
    int y = query(r, mid + 1, e, i, j);
    return x + y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, 7);
    for (int i = 1; i < 15; i++) cout << tree[i] << " ";
    update(1, 1, n, 2, 0);
    cout << "\n";
    for (int i = 1; i < 15; i++) cout << tree[i] << " ";

    cout << "\n" << query(1, 1, n, 1, 3) << "\n";

    return 0;
}