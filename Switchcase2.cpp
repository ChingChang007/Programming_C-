#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Input a : ";
    cin >> num1;

    cout << "Input b : ";
    cin >> num2;

    cout << "Choose your operate (+ - * /) : ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Answer is : " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Answer is : " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Answer is : " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0)
                cout << "Num2 can't be 0" << endl;
            else
                cout << "Answer is : " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

