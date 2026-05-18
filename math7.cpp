#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Sum of cubes: Enter n: ";
    cin >> n;

    int Sn = n * n * (n + 1) * (n + 1) / 4;
    cout << "Sn = " << Sn << endl;

    return 0;
}

