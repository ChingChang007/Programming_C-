#include<iostream>
using namespace std;
int main(){
	int score;
	cout<<"Input your Score: ";cin>>score;
	if(score>=50){
		cout<<"This student is pass."<<endl;
	}else{
		cout<<"This student is fail."<<endl;
	}
	return 0;
}
