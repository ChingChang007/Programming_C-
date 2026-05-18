#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 10, c = 5;
    int d;

    d = b / c + 1;
    cout << "a. d = b / c + 1 = " << d << endl;

    d = b % 3;
    cout << "b. d = b % 3 = " << d << endl;

    d = b - 3 * c / 5;
    cout << "c. d = b - 3 * c / 5 = " << d << endl;

    d = b * 10 + c - a * 5;
    cout << "d. d = b * 10 + c - a * 5 = " << d << endl;

    d = (a + b - 1) / c;
    cout << "e. d = (a + b - 1) / c = " << d << endl;

    d = ((-a % c) + b) * c;
    cout << "f. d = ((-a % c) + b) * c = " << d << endl;

    d = --a;
    cout << "g. d = --a = " << d << endl;

    return 0;
}

