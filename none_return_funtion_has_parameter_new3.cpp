#include<iostream>
using namespace std;

void sum(int a, int b){
    int sum;
    cout << "======Find sum two number=========" << endl;
    sum = a + b;
    cout << "Sum(a,b) = " << sum << endl;
}

void mul(int x, int y){
    int result;
    cout << "======Find Multiple two number=========" << endl;
    result = x * y;
    cout << "Mul(x,y) = " << result << endl;
}

int main(){
    int a, b;
    cout << "Input Value A: "; cin >> a;
    cout << "Input Value B: "; cin >> b;
    
    sum(a, b);
    mul(a, b);
    
    return 0;
}
