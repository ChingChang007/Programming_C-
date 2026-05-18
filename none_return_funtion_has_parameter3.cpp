#include <iostream>
#include <string>
using namespace std;

void myFunctionHello() {
    cout << "Hello World! How are you today?" << endl;
}

void myFunctionInput(int id, string name, char gender) {
    cout << "Input Id = " << id << endl;
    cout << "Input Name = " << name << endl;
    cout << "Input Gender = " << gender << endl;
}

int main() {
    myFunctionHello();
    myFunctionInput(1, "John", 'M');
    return 0;
}
