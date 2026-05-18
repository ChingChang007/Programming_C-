#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Biggest number : " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Biggest number : " << b << endl;
    } else {
        cout << "Biggest number : " << c << endl;
    }

    return 0;
}

