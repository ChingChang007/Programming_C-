#include <iostream>
using namespace std;

int main() {
    double b, c, d, e;
    cout << "Equation c: Enter b, c, d, e: ";
    cin >> b >> c >> d >> e;

    double a = (b / c - d / e);
    cout << "c. a = " << a << endl;

    return 0;
}

