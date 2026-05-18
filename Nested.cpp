#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {        // Outer loop
        for (int j = 1; j <= 5; j++) {    // Inner loop
            cout << "* ";                 // Print star
        }
        cout << endl;                     // New line after each row
    }
    return 0;
}

