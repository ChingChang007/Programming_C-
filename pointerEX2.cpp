#include<iostream>
using namespace std;
int main(){
    int var =20; // declare variable
    int *ptr; //declare pointer variable
    ptr = &var; //assign address var to ptr
    cout<<"=====Check Address====="<<endl;
    cout<<"Address var = "<<&var <<endl;
    cout<<"Address ptr = "<<ptr <<endl;
    cout<<"\n======Check Value======"<<endl;
    cout<<"Value at var = "<<var <<endl;
    cout<<"Value at *ptr = "<< *ptr <<endl;
    return 0;
}