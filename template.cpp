#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char column;
        int row;
        cin >> column >> row;

        // Output the initial position
        cout << column << row << endl;

        // Output all possible moves horizontally
        for (char c = 'a'; c <= 'h'; ++c) {
            if (c != column) {
                cout << c << row << endl;
            }
        }

        // Output all possible moves vertically
        for (int r = 1; r <= 8; ++r) {
            if (r != row) {
                cout << column << r << endl;
            }
        }
    }

    return 0;
}
