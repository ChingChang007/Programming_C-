#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int sum = addNumbers(10, 20);
    cout << "The sum is: " << sum << endl;
    return 0;
}