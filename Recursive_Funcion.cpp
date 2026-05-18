#include <iostream>
using namespace std;
int fac(int n) {
    if (n <= 1) {
        return 1;
    }else {
        return n * fac(n - 1);
    }
}

int main() {
    cout << "fac(1)=" << fac(1) << endl;   
    cout << "fac(4)=" << fac(4) << endl;   
    cout << "fac(5)=" << fac(5) << endl;   
    cout << "fac(10)=" << fac(10) << endl; 

    return 0;
}
