#include <iostream>
using namespace std;

void sum_loop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cout << i << "+";
        sum = sum + i; // sum += i
    }
    cout << "\b=" << sum << endl;
}
int main(){
	int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    sum_loop(number);
   	cout<<endl;
    
    
    sum_loop(10);
    sum_loop(20);
    sum_loop(30);
	return 0;
}
