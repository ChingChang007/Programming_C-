#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Scaled formula (not standard): Enter n: ";
    cin >> n;

    int Sn = 2 * n * (n + 1) * (2 * n + 1) / 3;
    cout << "Sn = " << Sn << endl;

    return 0;
}

