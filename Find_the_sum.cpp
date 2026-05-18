#include <iostream>
using namespace std;
	
int main() {
    
    int numbers[5] = {5, 10, 15, 20, 25};
	
    int sum = 0; 
	
    
    for (int i = 0; i < 5; i++) {
        sum += numbers[i]; 
    }
	
   	
    cout << "The sum of the 5 numbers is: " << sum << endl;
	
    return 0;
}
