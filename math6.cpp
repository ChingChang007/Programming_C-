#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Sum of squares: Enter n: ";
    cin >> n;

    int Sn = n * (n + 1) * (2 * n + 1) / 6;
    cout << "Sn = " << Sn << endl;

    return 0;
}

