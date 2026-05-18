#include<iostream>
using namespace std;
int main(){
    cout<<"=====Pointer with Array====="<<endl;
    int *p;
    int arr[4]={55,433,33,188};
    p= arr; //p=&a[0];
    for(int i=0;i<4;i++){
        cout<<*(p+i)<<endl;
    }
    return 0;
}