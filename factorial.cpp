#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Input n : ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
    	factorial *= i;
    }

    cout << "Answer = " << factorial << endl;
    return 0;
}

