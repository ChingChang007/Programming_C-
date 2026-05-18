#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char exit;
    while (exit != 'e') {
        cout << "Press e to exit...";
        exit = getch();
    }
    return 0;
}

