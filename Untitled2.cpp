#include <iostream>
using namespace std;

// 1. Function Definition
// It takes two floats (w and h) and returns the result of w * h
float calculateArea(float width, float height) {
    return width * height;
}

int main() {
    float w, h;

    cout << "input weight : ";
    cin >> w;
    cout << "input height : ";
    cin >> h;

    // 2. Function Call
    // We pass w and h as 'arguments' to the function
    float area = calculateArea(w, h);

    cout << "Area = " << area << endl;

    return 0;
}
