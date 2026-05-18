#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float base , power;
	cout<<"Input base : ";
	cin>>base;
	cout<<"Input power : ";
	cin>>power;
	cout<<"Answer : "<<base<<" ^ "<<power<<" = "<<pow(base,power);
	return 0;
}
