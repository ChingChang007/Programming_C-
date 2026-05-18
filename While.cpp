#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    char exit;
    while (exit != 'e') {
        cout << "Press e to exit...";
        exit = getch(); // waits for key press without showing it
    }
    return 0;
}

