#include <iostream>
using namespace std;

// Void function with parameter
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;       // User inputs name
    greet(name);       // Pass input to function
    return 0;
}
