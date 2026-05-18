#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int findMax(int arr[ROWS][COLS]) {
    int maxVal = arr[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int main() {
    int matrix[ROWS][COLS] = {
        {15, 22, 8},
        {45, 12, 33},
        {9, 67, 21}
    };

    cout << "Maximum value: " << findMax(matrix) << endl;
    return 0;
}