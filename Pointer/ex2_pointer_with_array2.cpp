#include <iostream>
using namespace std;
int main(){
    cout<<"\n=====Pointer with Array=====\n";
    int *p,n;
    cout<<"Input N= ";cin>>n;
    int arr[n];
    cout<<"=====Input data to array by Pointer====="<<endl;
    for(p = &arr[0];p < &arr[n];p++){
        cout<<"Input Arr = ";cin>> *(p);
    }
    cout<<"====Output data======"<<endl;
    for(p=&arr[0];p<&arr[n];p++){
        cout<<"Arr= "<<*p <<endl;
    }
    return 0;
}