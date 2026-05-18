#include<iostream>
#include <iomanip> // For setprecision
using namespace std;
int main(){
	double d,t;
	cout<<"Input d  (km) : ";
	cin>>d;
	cout<<"Input t (t) : ";
	cin>>t;
	
	cout<<fixed<<setprecision(4); // dak lek s'oun 4 k'torng nv keoy k'beas
	cout<<"so that v = "<<d/t <<" km/h";
	
	return 0;
} 
