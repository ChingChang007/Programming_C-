#include<iostream>
using namespace std;
float find_area(float w, float h){
	return w*h;
}
int main(){
	float w,h;
	cout<<"input wight : ";
	cin>>w;
	cout<<"input height : ";
	cin>>h;
	cout<<"Area= "<<find_area(w,h);
	
	
	return 0;
}
