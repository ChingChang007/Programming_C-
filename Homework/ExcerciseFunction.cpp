#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int number) {
    return number % 2 == 0;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    int num = 10;
    if (isEven(num)) {
        cout << num << " is even." << endl;
    }

    cout << "Area: " << calculateArea(5.5, 10.0) << endl;
    return 0;
}