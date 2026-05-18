#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, s, area;

    cout << "Enter sides a, b, and c: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        // Step 1: Calculate s
        s = (a + b + c) / 2;
        
        // Step 2: Calculate Area
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << fixed << setprecision(2);
        cout << "\n--- Calculation Results ---" << endl;
        cout << "1. Semi-perimeter (s) = (" << a << " + " << b << " + " << c << ") / 2" << endl;
        cout << "   Result s = " << s << endl;
        
        cout << "\n2. Area = sqrt(" << s << " * (" << s << "-" << a << ") * (" << s << "-" << b << ") * (" << s << "-" << c << "))" << endl;
        cout << "   Final Area = " << area << endl;
    } else {
        cout << "These sides do not form a triangle." << endl;
    }

    return 0;
}
