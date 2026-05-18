#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void inputTable(int table[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> table[i][j];
        }
    }
}

void displayTable(int table[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int table[ROWS][COLS];

    inputTable(table);
    cout << endl;
    displayTable(table);

    return 0;
}