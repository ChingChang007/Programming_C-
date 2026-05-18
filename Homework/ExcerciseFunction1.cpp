#include <iostream>
using namespace std;

string getGrade(float score) {
    if (score >= 90) return "A";
    if (score >= 80) return "B";
    if (score >= 70) return "C";
    if (score >= 60) return "D";
    return "F";
}

void printPassStatus(float score) {
    if (score >= 50) {
        cout << "Status: Passed" << endl;
    } else {
        cout << "Status: Failed" << endl;
    }
}

int main() {
    float score ;
    cout<<"Enter your socre : ";
    cin>>score;
    cout << "Grade: " << getGrade(score) << endl;
    
    printPassStatus(score);
    return 0;
}