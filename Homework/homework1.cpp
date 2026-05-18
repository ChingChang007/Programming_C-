#include<iostream>
using namespace std;
int main(){
  int arr[5],sum=0,max=0,min=0;
  for(int i=0;i<5;i++){
    cout<<"Input arr["<<i<<"]: ";
    cin>>arr[i];
    sum+=arr[i];
  }
  max= arr[0];
  min= arr[0];
  cout<<"Array: ";
  for(int i=0;i<5;i++){
    cout<<arr[i]<<"  ";
    if(max < arr[i]){
      max = arr[i];
    }
    if(min > arr[i]){
      min = arr[i];
    }
  }
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(arr[i] < arr[j]){
        int temp =arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  cout<<"\nTotal= "<<sum <<endl;
  cout<<"Average= "<<sum/5.0 <<endl;
  cout<<"Max= "<<max <<endl;
  cout<<"Min= "<<min<<endl;
  cout<<"Array After sort: ";
  for(int i=0;i<5;i++){
    cout<<arr[i]<<"  ";
  }
  return 0;
}
