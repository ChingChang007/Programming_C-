#include <iostream>
using namespace std;

int main()
{
    string student[2][3];

    student[0][0] = "001";
    student[0][1] = "Dara";
    student[0][2] = "Male";

    student[1][0] = "002";
    student[1][1] = "Daro";
    student[1][2] = "Male";

    cout << "ID\tName\tGender" << endl;
    cout << "-------------------------" << endl;

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << student[r][c] << "\t";
        }
        cout << endl;
    }

    return 0;
}