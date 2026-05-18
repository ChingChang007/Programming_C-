#include<iostream>
using namespace std;
int main(){
    int *ptr = new int; //Allocates memory for a signle integer
    *ptr = 10; // Assigns the value 10 to the allocate memory
    cout<<"*Ptr: "<<*ptr <<endl;
    delete ptr; //Deallocate memory for the single integer
    return 0;
}1