#include <iostream>
using namespace std;

int main() {
    double F, S;
    cout << "Equation d: Enter Fahrenheit (F) and scale (S): ";
    cin >> F >> S;

    double C = S * (F - 32) / 9;
    cout << "d. C = " << C << " Celsius" << endl;

    return 0;
}

