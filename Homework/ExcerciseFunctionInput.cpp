#include <iostream>
using namespace std;

bool isEven(int number) {
    return number % 2 == 0;
}

double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    int num;
    double l, w;

    // Input for even/odd check
    cout << "Enter an integer to check if it's even: ";
    cin >> num;

    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    cout << "---------------------------" << endl;

    // Input for Rectangle Area
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter width of rectangle: ";
    cin >> w;

    cout << "Area of the rectangle: " << calculateArea(l, w) << endl;

    return 0;
}