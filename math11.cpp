#include <iostream>
#include <iomanip> // For controlling decimal output

using namespace std;

int main() {
    int choice;
    double amount, rate, result;

    cout << "--- Currency Converter ---" << endl;
    cout << "1. Convert USD ($) to KHR (?)" << endl;
    cout << "2. Convert KHR (?) to USD ($)" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter the amount: ";
    cin >> amount;
    cout << "Enter the exchange rate (e.g., 4100): ";
    cin >> rate;

    // Set output to 2 decimal places for better readability
    cout << fixed << setprecision(2);

    if (choice == 1) {
        // Formula: USD * Rate = KHR
        result = amount * rate;
        cout << "Converted Amount: " << result << " KHR" << endl;
    } else if (choice == 2) {
        // Formula: KHR / Rate = USD
        result = amount / rate;
        cout << "Converted Amount: $" << result << endl;
    } else {
        cout << "Invalid choice! Please restart the program." << endl;
    }

    return 0;
}
