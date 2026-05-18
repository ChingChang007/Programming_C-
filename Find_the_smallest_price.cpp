#include <iostream>
using namespace std;

int main() {
    
    int numbers[5] = {5, 10, 15, 20, 25};

    int min = numbers[0]; 

    
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i]; 
        }
    }

   
    cout << "The smallest number is: " << min << endl;

    return 0;
}
