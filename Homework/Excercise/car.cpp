#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
};

int main() {
    // Create Object
    Car myCar; 
    
    // Input Data
    myCar.brand = "Toyota";
    myCar.model = "Prius";
    myCar.year = 2015;
    
    // Show Data
    cout << "Car Brand: " << myCar.brand << endl;
    cout << "Car Model: " << myCar.model << endl;
    cout << "Car Year: " << myCar.year << endl;
    
    return 0;
}