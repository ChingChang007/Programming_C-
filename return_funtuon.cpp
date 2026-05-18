#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int result = square(4);
    cout << "Result = " << result;
    return 0;
}
