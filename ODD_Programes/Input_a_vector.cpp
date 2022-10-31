#include <iostream>
#include <vector>

using namespace std;

vector<int> myVector;

void vector_nonsize() {
    int n;
    cin >> n;

    vector <int> myVector;
    int input = 0;
    for (int i = 0; i < n; i++) {
        cin >> input;
        myVector.push_back(input);
    }

    for (int i = 0; i < 5; i++) {
        cout << myVector[i] << endl;
    }
}

void vector_size() {
    int n; 
    cin >> n;

    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}

int main()
{
    vector_size();
    //vector_nonsize();
}