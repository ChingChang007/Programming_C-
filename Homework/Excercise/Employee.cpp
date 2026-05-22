#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;

    void displayData() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.id = 101;
    emp.name = "Sokha";
    emp.salary = 500.0;
    
    emp.displayData();
    
    return 0;
}