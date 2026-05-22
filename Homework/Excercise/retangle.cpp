#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.length = 15.0;
    rect.width = 5.0;
    
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;
    
    return 0;
}