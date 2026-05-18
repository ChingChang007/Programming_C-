#include<iostream>
using namespace std;

int main() {
	
    int Option;
    cout<<"Input Option is number (example 1,2,3...) : ";cin>>Option;
    switch (Option) {
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

