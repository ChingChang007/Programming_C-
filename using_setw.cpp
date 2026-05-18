ff#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int id = 1001;
    string name = "Sok San";
    char gender = 'M';
    string address = "Phnom Penh";
    cout<<setw(5)<<"ID";
    cout<<setw(20)<<"Name";
    cout<<setw(20)<<"Gender";
    cout<<setw(20)<<"Address"<<endl;
    
    cout<<setw(5)<<id;
    cout<<setw(20)<<name;
    cout<<setw(20)<<gender;
    cout<<setw(20)<<address;
    
    
    
    return 0;
}

