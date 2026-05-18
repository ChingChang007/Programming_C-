#include <iostream>
using namespace std;

int main() {
    double y1, y2, x1, x2;
    cout << "Equation a: Enter y1, y2, x1, x2: ";
    cin >> y1 >> y2 >> x1 >> x2;
    double m = (y1 - y2) / (x1 * x2);
    cout << "a. m = " << m << endl;
    
    return 0;
}

