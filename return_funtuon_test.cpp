#include <iostream>
using namespace std;

// Return function – returns a value
int square(int num) {
    return num * num;     // Return the result
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;             // User input
    int result = square(number); // Call return function and store value
    cout << "Square = " << result << endl;
    return 0;
}
