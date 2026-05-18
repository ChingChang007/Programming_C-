#include <iostream>
using namespace std;

class Rectangle {
public:
    float width;
    float height;

    float getArea() {
        return width * height;
    }
};

int main() {
    Rectangle r1;

    r1.width = 30;
    r1.height = 20;

    cout << "Width: " << r1.width << endl;
    cout << "Height: " << r1.height << endl;
    cout << "Area: " << r1.getArea() << endl;

    return 0;
}