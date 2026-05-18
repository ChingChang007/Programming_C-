#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    string s1, s2;

    cout << "Addition of two binary numbers:" << endl;
    cout << "Input the 1st binary number: ";cin >> s1;
    cout << "Input the 2nd binary number: ";cin >> s2;

    unsigned long n1 = bitset<32>(s1).to_ulong();
    unsigned long n2 = bitset<32>(s2).to_ulong();

    unsigned long sum = n1 + n2;

    string result = bitset<32>(sum).to_string();

    result.erase(0, result.find_first_not_of('0'));

    cout << "The sum of two binary numbers is: " << (result.empty() ? "0" : result) << endl;

    return 0;
}
