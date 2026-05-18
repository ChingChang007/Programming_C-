#include <iostream>
using namespace std;

int main() {
    int n, anw = 1;
    cout << "Input n : ";cin >> n;
	cout<<n<<"!=";
    for (int i = 1; i <= n; i++) {
    	anw = anw * i;
    	cout<<i <<"*";
    }
	cout<<"\b="<<anw;
    return 0;
}

