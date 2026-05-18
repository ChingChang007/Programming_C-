#include<iostream>
using namespace std;
int main(){
	float x;
	cout<<"Input Your number : ";cin>>x;
	if(x>0){
		cout<<"Positive";
	}else if(x<0){
		cout<<"Negative";
	}else{
		cout<<"Zero";
	}
}
