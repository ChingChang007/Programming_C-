#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    if (a > b) {
        cout << "Biggest number : " << a << endl;
    } else if (b > a) {
        cout << "Biggest number : " << b << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

