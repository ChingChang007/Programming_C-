#include<iostream>
using namespace std;
int main(){
    int *arr = new int[10]; //allocate memory for array 10 integer
    for(int i=0;i<5;i++){
        *(arr+i)= i*2; //assigns values to the array elements
    }
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }
    delete []arr; //dealocates memory
    return 0;
}