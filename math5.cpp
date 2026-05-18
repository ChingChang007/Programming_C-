#include <iostream>
using namespace std;

int main() {
    double u, t, a;
    cout << "Equation e: Enter u, t, a: ";
    cin >> u >> t >> a;

    double s = u * t + 0.5 * a * t * t;
    cout << "e. s = " << s << endl;

    return 0;
}

