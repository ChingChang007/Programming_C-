#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int table[3][3];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> table[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}