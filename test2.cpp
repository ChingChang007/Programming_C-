#include <iostream>
using namespace std;

int main() {
    double y1, y2, x1, x2;
    cout << "Equation a: Enter y1, y2, x1, x2: ";
    cin >> y1 >> y2 >> x1 >> x2;
    double m = (y1 - y2) / (x1 * x2);
    cout << "a. m = " << m << endl;

    double x, c;
    cout << "\nEquation b: Enter x and c: ";
    cin >> x >> c;
    double y = m * x + c;
    cout << "b. y = " << y << endl;

    double b, c1, d, e;
    cout << "\nEquation c: Enter b, c, d, e: ";
    cin >> b >> c1 >> d >> e;
    double a = (b / c1 - d / e);
    cout << "c. a = " << a << endl;

    double F, S;
    cout << "\nEquation d: Enter Fahrenheit (F) and scale (S): ";
    cin >> F >> S;
    double C = S * (F - 32) / 9;
    cout << "d. C = " << C << " Celsius" << endl;

    double u, t, a2;
    cout << "\nEquation e: Enter u, t, a: ";
    cin >> u >> t >> a2;
    double s = u * t + 0.5 * a2 * t * t;
    cout << "e. s = " << s << endl;

    return 0;
}

