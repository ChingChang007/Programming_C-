#include<iostream>
using namespace std;

int main() {
    int i, n;
    cout << "Input value N: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "Number is " << i << " and cube of the " << i;
        cout << " is: " << (i * i * i) << endl;
    }

    return 0;
}

