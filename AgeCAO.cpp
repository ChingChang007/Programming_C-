#include<iostream>
using namespace std;
int main(){
	float age;
	cout<<"Input Your age : ";cin>>age;
	if(age<18){
		cout<<"Child";
	}else if(age >= 18 && age < 60){
		cout<<"Adult";
	}else{
		cout<<"Old";
	}
	
}
