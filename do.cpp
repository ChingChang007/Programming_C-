#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char choice;
    do {
        cout << "Press e to exit..." << endl;
        choice = getch();
    } while (choice != 'e');
    return 0;
}

