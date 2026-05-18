#include<iostream>
using namespace std;
int main(){
	int a= 1 , b = 2;
	cout<<(++a==b++&&(--a!=--b||++b==(a+2)));
	
	return 0;
}
