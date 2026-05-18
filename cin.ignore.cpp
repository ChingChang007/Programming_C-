#include<iostream>
using namespace std;
int main(){
	int id;
	string name;
	
	
	cout<<"Enter ID: ";
	cin>>id;
	
	cout<<"Enter Name: "; 
	cin.ignore();
	getline(cin,name);
	
	
	
	return 0;
} 
