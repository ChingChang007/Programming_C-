#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double w, h;

    cout << "Input w (m) : ";
    cin >> w;
    cout << "Input h (m) : ";
    cin >> h;

    cout << fixed << setprecision(2);
    cout << "So that : S = " << w << " * " << h << " = " << w * h << " m^2";

    return 0;
}

