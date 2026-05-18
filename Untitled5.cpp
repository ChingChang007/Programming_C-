#include <iostream>
using namespace std;
int fac(int n) {
    if (n <= 1) {
        return 1;
    } 
    else {
        return n * fac(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "fac(" << num << ") = " << fac(num) << endl;
    }

    return 0;
}
