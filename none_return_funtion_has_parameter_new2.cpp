#include<iostream>
using namespace std;

void check_even_number(){ //check_even_number is a function none return and no parameter
    int number;
    cout << "Input number: "; cin >> number;
    if(number % 2 == 0){
        cout << number << " is even number" << endl;
    }else{
        cout << number << " is odd number" << endl;
    }
}

void sum_natural_number(){ // sum_natural_number() is a function none return and no parameter
    int sum=0, i, n;
    cout << "Input a number of N: "; cin >> n;
    for(i=1; i<=n; i++){
        cout << i << " + ";
        sum += i;
    }
    cout << "\b\b= " << sum;
}

int main(){
    //check_even_number(); //call check_even_number() function
    sum_natural_number(); //call sum_natural_number() function
    return 0;
}
