#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;        // user inputs their name
    greet(name);        // call function with input
    return 0;
}	
