#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Input a character: ";
    cin >> ch;

    int asciiValue = (int)ch;

    cout << "The ASCII value of " << ch << " is: " << asciiValue << endl;
    cout << "The character for the ASCII value " << asciiValue << " is: " << (char)asciiValue << endl;

    return 0;
}
