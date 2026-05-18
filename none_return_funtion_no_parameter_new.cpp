#include <iostream>
using namespace std;

// Void function without parameter
void greet() {
    string name;
    cout << "Enter your name: ";
    cin >> name;             // Get input inside the function
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();   // Call function
    return 0;
}
