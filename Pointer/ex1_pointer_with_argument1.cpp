#include<iostream>
using namespace std;
void update(int *n1, int *n2){
    *n1 = 100;
    *n2 = 200;
}
int main(){
    int a=10,b=20;
    cout<<"========Before Changing======="<<endl;
    cout<<"A= "<<a <<endl;
    cout<<"B= "<<b <<endl;
    update(&a,&b);
    cout<<"========After Changing======="<<endl;
    cout<<"A= "<<a <<endl;
    cout<<"B= "<<b <<endl;
    return 0;
}