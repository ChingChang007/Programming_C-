#include<iostream>
using namespace std;
int main(){
	int score = 75;
	if (score >= 90) {
	    cout << "You are the best";
	}
	else if (score >= 80) {
	    cout << "pass.";
	}
	else if (score >= 70) {
	    cout << "Grade C";
	}
	else {
	    cout << "Fail";
	}

	
	return 0;
}
