#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double km;
    double miles, feet, inches;

    cout << "Kilometers convert to mile, feet, inches: ";
    cin >> km;

    miles  = km * 0.621371;
    feet   = km * 3280.84;
    inches = km * 39370.1;

    cout << fixed << setprecision(2);
    cout << "-------------------------------" << endl;
    cout << km << " km is equal to:" << endl;
    cout << miles  << " Miles" << endl;
    cout << feet   << " Feet" << endl;
    cout << inches << " Inches" << endl;

    return 0;
}
