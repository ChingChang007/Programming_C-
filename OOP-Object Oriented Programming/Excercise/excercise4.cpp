#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    double getArea() {
        double pi = 3.14159;
        return pi * radius * radius;
    }

    double getCircumference() {
        double pi = 3.14159;
        return 2 * pi * radius;
    }
};

int main() {
    Circle c1;


    cout << "Radius: " << endl;
    cin>>c1.radius;
    cout << "Area: " << c1.getArea() << endl;
    cout << "Circumference: " << c1.getCircumference() << endl;

    return 0;
}