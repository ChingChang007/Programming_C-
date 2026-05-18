#include<iostream>
using namespace std;

int main() {
	
    int number1 , number2 , Operation;
    cout<<"Input number1 (example 1,2,3...) : ";number1;
    cout<<"Input number2 (example 1,2,3...) : ";cin>>number2;
    cout<<"Input Operation : ";cin>>Operation;
    
    switch (Operation) {
        case 1:
            cout << "Input Data" << endl;
            break;
        case 2:
            cout << "Search Data";
            break;
        case 3:
            cout << "Delete Data";
            break;
        case 4:
            cout << "Update Data";
            break;
        
        default:
            cout << "Exit(0)";
    }
    return 0;
}

