#include <iostream>
using namespace std;

int main() {
    float base;
    int power;
    float result = 1;

    cout << "Input base : ";
    cin >> base;
    cout << "Input power : ";
    cin >> power;

    for (int i = 1; i <= power; i++) {
        result *= base;
    }

    cout << "Answer : " << base << " ^ " << power << " = " << result << endl;
    return 0;
}

