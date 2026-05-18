#include <iostream>
#include <string>
using namespace std;

int main() {
    string barcode, name;
    float price, quantity, total, discountRate, discountAmount, finalTotal;
    int score;

    // Input product info
    cout << "Enter product barcode: ";
    cin >> barcode;

    cout << "Enter product name: ";
    cin.ignore(); // clear newline before getline
    getline(cin, name);

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter score (0-100): ";
    cin >> score;

    // Calculate total
    total = price * quantity;

    // Determine discount rate
    if (score >= 90)
        discountRate = 0.10;
    else if (score >= 80)
        discountRate = 0.09;
    else if (score >= 70)
        discountRate = 0.07;
    else if (score >= 60)
        discountRate = 0.06;
    else if (score >= 50)
        discountRate = 0.05;
    else
        discountRate = 0.0;

    // Apply discount
    discountAmount = total * discountRate;
    finalTotal = total - discountAmount;

    // Output result
    cout << "\n--- Product Summary ---" << endl;
    cout << "Barcode       : " << barcode << endl;
    cout << "Name          : " << name << endl;
    cout << "Price         : $" << price << endl;
    cout << "Quantity      : " << quantity << endl;
    cout << "Total         : $" << total << endl;
    cout << "Discount Rate : " << discountRate * 100 << "%" << endl;
    cout << "Discount      : $" << discountAmount << endl;
    cout << "Final Total   : $" << finalTotal << endl;

    return 0;
}

