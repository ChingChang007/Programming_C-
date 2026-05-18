#include <iostream>
using namespace std;

// Void function – does not return anything
void showSquare(int num) {
    cout << "Square = " << num * num << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;        // User input
    showSquare(number);   // Call void function
    return 0;
}
