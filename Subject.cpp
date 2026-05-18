#include <iostream>
#include <string>
using namespace std;

int main() {
    string id, name, gender;
    float math, khmer, english, physic;
    float total, percent;
    char grade;

    // Input section
    cout << "Enter student ID: ";
    cin >> id;

    cout << "Enter student name: ";
    cin.ignore(); // Clear newline before getline
    getline(cin, name);

    cout << "Enter gender: ";
    cin >> gender;

    cout << "Enter Math score: ";
    cin >> math;

    cout << "Enter Khmer score: ";
    cin >> khmer;

    cout << "Enter English score: ";
    cin >> english;

    cout << "Enter Physics score: ";
    cin >> physic;

    // Calculation
    total = math + khmer + english + physic;
    percent = (total / 400) * 100;

    // Grade assignment
    if (percent >= 90)
        grade = 'A';
    else if (percent >= 80)
        grade = 'B';
    else if (percent >= 70)
        grade = 'C';
    else if (percent >= 60)
        grade = 'D';
    else if (percent >= 50)
        grade = 'E';
    else
        grade = 'F';

    // Output section
    cout << "\n--- Student Report ---" << endl;
    cout << "ID      : " << id << endl;
    cout << "Name    : " << name << endl;
    cout << "Gender  : " << gender << endl;
    cout << "Math    : " << math << endl;
    cout << "Khmer   : " << khmer << endl;
    cout << "English : " << english << endl;
    cout << "Physics : " << physic << endl;
    cout << "Total   : " << total << endl;
    cout << "Percent : " << percent << "%" << endl;
    cout << "Grade   : " << grade << endl;

    return 0;
}

