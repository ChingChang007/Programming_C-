#include<iostream>
using namespace std;
void mySwap(int *n1, int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main(){
    int a=10,b=20;
    cout<<"=====Befor Swap====="<<endl;
    cout<<"A= "<<a <<endl;
    cout<<"B= "<<b <<endl;
    mySwap(&a,&b);
    cout<<"=====After Swap====="<<endl;
    cout<<"A= "<<a <<endl;
    cout<<"B= "<<b <<endl;
    return 0;
}