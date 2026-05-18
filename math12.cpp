#include <iostream>

using namespace std;

int main() {
    int totalHours;
    int weeks, days, hours;

    cout << "Enter total hours: ";
    cin >> totalHours;

    weeks = totalHours / 168;
    int remainder = totalHours % 168;
    days = remainder / 24;
    hours = remainder % 24;

    cout << "-------------------------------" << endl;
    cout << weeks << " weeks, " << days << " days, and " << hours << " hours." << endl;

    return 0;
}
