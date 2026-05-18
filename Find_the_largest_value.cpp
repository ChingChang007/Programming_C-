#include <iostream>
using namespace std;

int main() {
    
    int numbers[5] = {5, 10, 15, 20, 25};

    int max = numbers[0]; 

    
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i]; 
        }
    }

    
    cout << "The largest number is: " << max << endl;

    return 0;
}
