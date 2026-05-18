#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double n, s, area;
    const double PI = 3.14159265358979323846;

    cout << "Input the number of sides on a polygon: ";cin >> n;
    cout << "Input the length of one of the sides: ";cin >> s;
    area = (n * pow(s, 2)) / (4 * tan(PI / n));

    cout << fixed << setprecision(2);
    cout << "The area of the polygon is: " << area << endl;

    return 0;
}
