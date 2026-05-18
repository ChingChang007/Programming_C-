#include <iostream>
using namespace std;

int getNumber() {
    return 42;
}

int main() {
    int x = getNumber();
    cout << "Number = " << x;
    return 0;
}
