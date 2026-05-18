#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3); // Call the function
    cout << "Result = " << result << endl;
    return 0;
}
