#include <iostream>
using namespace std;

int main() {
    // ១). ប្រកាស Number ជាប្រភេទ Integer ជាមួយតម្លៃចាប់ផ្ដើម ៥០
    int Number = 50;

    // ២). បង្ហាញតម្លៃរបស់ Number លើ screen
    cout << "2. Value of Number: " << Number << endl;

    // ៣). បង្ហាញ address របស់ Number លើ screen
    cout << "3. Address of Number: " << &Number << endl;

    // ៤). ប្រកាស Pointer ឈ្មោះ pNumber pointing to Number
    int* pNumber = &Number;

    // ៥). បង្ហាញតម្លៃរបស់ pNumber (វាគឺជា address របស់ Number)
    cout << "5. Value of pNumber (Address of Number): " << pNumber << endl;

    // ៦). បង្ហាញ address របស់ pNumber ខ្លួនឯង
    cout << "6. Address of pNumber itself: " << &pNumber << endl;

    // ៧). ផ្លាស់ប្ដូរតម្លៃ Number មក ១០០ រួចបង្ហាញតម្លៃ និង address ម្ដងទៀត
    Number = 100;
    cout << "7. After changing Number to 100:" << endl;
    cout << "   - Value of Number: " << Number << endl;   // លំហាត់លេខ ២ ឡើងវិញ
    cout << "   - Address of Number: " << &Number << endl; // លំហាត់លេខ ៣ ឡើងវិញ

    // ៨). ផ្លាស់ប្ដូរតម្លៃ Number មក ២០០ តាមរយៈ pNumber រួចបង្ហាញតម្លៃ និង address ម្ដងទៀត
    *pNumber = 200; 
    cout << "8. After changing Number to 200 via pNumber:" << endl;
    cout << "   - Value of Number: " << Number << endl;   // លំហាត់លេខ ២ ឡើងវិញ
    cout << "   - Address of Number: " << &Number << endl; // លំហាត់លេខ ៣ ឡើងវិញ

    return 0;
}