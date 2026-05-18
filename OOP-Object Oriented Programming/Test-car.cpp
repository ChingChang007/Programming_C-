#include <iostream>
using namespace std;

// Class
class Car {
public:
    string brand;
    int year;

    void drive() {
        cout << brand << " is driving." << endl;
    }
};

int main() {
    // Object
    Car car1;

    car1.brand = "Toyota";
    car1.year = 2020;

    car1.drive();

    return 0;
}