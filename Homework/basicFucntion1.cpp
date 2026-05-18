#include <iostream>
using namespace std;

void greetUser(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greetUser("Dara");
    greetUser("Sokun");
    return 0;
}