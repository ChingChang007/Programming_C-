#include<iostream>
using namespace std;
int main(){
    system("cls"); // Clears the console screen
    float avg;
    char result;
    cout<<"Input average: ";cin>> avg;
    result = (avg >= 90?'A':
              avg >= 80?'B':
              avg >= 70?'C':
              avg >= 60?'D':
              avg >= 50?'E':
              'F');

    cout<<"Result = "<<result;
    return 0;
}
