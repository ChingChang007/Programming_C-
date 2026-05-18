#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";cin >> n;
    int sum = n * (n + 1);
    cout << "Sum of first " << n << " even numbers is: " << sum << endl;
    return 0;
}

