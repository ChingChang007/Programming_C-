#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "Check the upper and lower limits of integer :" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "The maximum limit of int data type : " << INT_MAX << endl;
    cout << "The minimum limit of int data type : " << INT_MIN << endl;

    cout << "The maximum limit of unsigned int data type : " << UINT_MAX << endl;

    cout << "The maximum limit of long data type : " << LONG_MAX << endl;
    cout << "The minimum limit of long data type : " << LONG_MIN << endl;

    cout << "The maximum limit of unsigned long data type : " << ULONG_MAX << endl;

    cout << "The Bits contain in char data type : " << CHAR_BIT << endl;
    cout << "The maximum limit of char data type : " << (int)CHAR_MAX << endl;
    cout << "The minimum limit of char data type : " << (int)CHAR_MIN << endl;

    cout << "The maximum limit of signed char data type : " << (int)SCHAR_MAX << endl;
    cout << "The minimum limit of signed char data type : " << (int)SCHAR_MIN << endl;

    cout << "The maximum limit of unsigned char data type : " << (int)UCHAR_MAX << endl;

    cout << "The minimum limit of short data type : " << SHRT_MIN << endl;
    cout << "The maximum limit of short data type : " << SHRT_MAX << endl;
    cout << "The maximum limit of unsigned short data type : " << USHRT_MAX << endl;

    return 0;
}
