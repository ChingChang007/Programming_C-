#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {20, 5, 25, 10, 15}; 
    int temp;

    
    for (int i = 0; i < 5-1; i++) {        
        for (int j = 0; j < 5-i-1; j++) {  
            if (numbers[j] > numbers[j+1]) {
                
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    
    cout << "Numbers in ascending order: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
