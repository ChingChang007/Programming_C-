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

    cout << "Width: " ;
    cin >> r1.width;
    cout << "Height: " ;
    cin >> r1.height;
    cout << "Area: " << r1.getArea() << endl;

    return 0;
}