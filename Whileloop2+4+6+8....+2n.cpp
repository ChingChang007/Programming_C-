#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Input n: ";
    cin >> n;

    while (i <= n) {
        cout << 2 * i;
        if (i < n) cout << " + ";   
        sum += 2 * i;               
        i++;
    }

    cout << " = " << sum << endl;   
    return 0;
}

