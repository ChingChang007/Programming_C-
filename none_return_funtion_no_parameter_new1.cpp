#include <iostream>
#include <string>
using namespace std;

// Defining a void function WITH parameters
// It expects a string (name) and an integer (age)
void introducePerson(string name, int age) {
    cout << "My name is " << name << " and I am " << age << " years old." << endl;
}

int main() {
    // Calling the function and passing "arguments" (the actual data)
    introducePerson("Alice", 25); 
    introducePerson("Bob", 30);
    
    return 0;
}
