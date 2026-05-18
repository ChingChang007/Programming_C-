#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Input your age: ";cin>>age;
	if(age>=18){
		cout<<"Your age is : Adult"<<endl;
	}else{
		cout<<"Your age is : Minor"<<endl;
	}
	return 0;
}
