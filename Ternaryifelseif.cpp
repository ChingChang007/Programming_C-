#include<iostream>
using namespace std;
int main(){
    int num;
    string result;
    cout<<"Input number: ";cin>>num;
    result = (num >0?"Positive":
              num <0?"Negative":"Zero");
    
    cout<<"Your number is: "<<result;
    return 0;
}
