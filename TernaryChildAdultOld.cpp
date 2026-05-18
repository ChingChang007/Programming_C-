#include<iostream>
using namespace std;
int main(){
	float age;
	cout<<"Input Your age : ";cin>>age;
	string result = (age<18)? "Child":
					(age>=18 && age<60)? "Adult":
											"Old";
	cout << result;
	return 0;
}
