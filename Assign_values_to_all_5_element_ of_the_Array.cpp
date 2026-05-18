#include <iostream>
using namespace std;

int main() {
    
    int numbers[5] = {5, 10, 15, 20, 25};

    
    cout << "Values in the array are: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
	
    return 0;
}
