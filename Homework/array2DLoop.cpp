#include<iostream>
#include<string>
#include<iomanip> // សម្រាប់កំណត់គម្លាតតារាងឱ្យស្អាត

using namespace std;

int main()
{
    // ប្រកាស Array ២ វិមាត្រសម្រាប់រក្សាទុកឈ្មោះសិស្ស
    string student[2][3];

    cout << "=== Input Student Information ===" << endl;

    for(int r = 0; r < 2; r++)
    {
        cout << "Entering data for Student Set " << r + 1 << ":" << endl;
        for(int c = 0; c < 3; c++)
        {
            cout << "  Input detail " << c + 1 << ": ";
            
            // ប្រើ getline ដើម្បីអាចបញ្ចូលឈ្មោះដែលមានដកឃ្លាបាន
            // ws ប្រើសម្រាប់សម្អាត white space ដែលនៅសល់ក្នុង buffer
            getline(cin >> ws, student[r][c]);
        }
        cout << "---------------------------------" << endl;
    }

    // បង្ហាញលទ្ធផលដែលបានបញ្ចូលក្នុងទម្រង់ជាតារាង
    cout << "\n=== Displaying Data Table ===" << endl;
    for(int r = 0; r < 2; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            // setw(15) ជួយឱ្យទិន្នន័យរៀបជួរគ្នាបានស្អាត
            cout << left << setw(15) << student[r][c];
        }
        cout << endl;
    }

    return 0;
}