#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x; // pointer p is store address memory x
    cout << "Value X= " << x << endl;
    cout << "Address X (&x)= " << &x << endl;
    cout << "Value of Pointer P: " << p << endl;
    cout << "Value of address pointer P: " << *p << endl;
    return 0;
}