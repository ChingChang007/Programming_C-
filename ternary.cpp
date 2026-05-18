#include<iostream>
using namespace std;
int main(){
    float avg;
    string result;
    cout<<"Input average: ";cin>>avg;
    result = (avg >=50?"Pass":"Fail");
    cout<<"Your result is: "<<result;
    return 0;
}
