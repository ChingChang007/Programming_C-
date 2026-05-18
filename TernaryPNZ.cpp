#include<iostream>
using namespace std;
int main(){
	float x;
	cout<<"Input Your Number : ";cin>>x;
	string result = (x>0)? "Positive":
					(x<0)? "Negative":
							"Zero";
	cout << result;
	return 0;
}
