#include <iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 2; ++row) {         // Outer loop for 2 rows
        for (int col = 1; col <= 5; ++col) {     // Inner loop for 5 stars
            cout << "* ";
        }
        cout << endl; // Move to next line after each row
    }
    return 0;
}

