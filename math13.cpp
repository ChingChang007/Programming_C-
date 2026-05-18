#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double radius, height, volume;
    const double PI = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;

    volume = PI * radius * radius * height;

    cout << fixed << setprecision(2);
    cout << "---------------------------" << endl;
    cout << "Volume of Cylinder = " << volume << endl;

    return 0;
}
