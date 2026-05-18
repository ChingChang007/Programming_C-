#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int flag;

    cout << "Input num1 : ";
    cin >> num1;

    cout << "Input num2 : ";
    cin >> num2;

    flag = (num2 == 0) ? 0 : 1;

    switch (flag) {
        case 0:
            cout << "Num2 can't be 0" << endl;
            break;
        case 1:
            cout << "So that : " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Unexpected error." << endl;
    }

    return 0;
}

