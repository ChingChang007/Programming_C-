#include<iostream>
using namespace std;
int main(){
    cout<<"\n=====Pointer with Array=====\n";
    int n;
    cout<<"Input N= ";cin>>n;
    int arr[n];
    cout<<"=====Input data to array by Pointer====="<<endl;
    for(int i=0;i < n;i++){
        cout<<"Input Arr = ";cin>> *(arr+i);
    }
    cout<<"====Output data======"<<endl;
    for(int i=0;i<n;i++){
        cout<<(arr+i) << " ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(arr+i) << " ";
    }
    return 0;
}