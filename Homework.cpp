#include <iostream>
#include <string>
#include <sstream> // Included to safely convert numbers to strings

using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    string history[5] = {"Empty", "Empty", "Empty", "Empty", "Empty"};
    
    cout << "--- Welcome to the ATM Simulation ---" << endl;

    while (true) {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Transaction History" << endl;
        cout << "5. Exit" << endl;
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;

            case 2: {
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;
                
                if (amount > 0) {
                    balance += amount;
                    
                    // Shift history down
                    for (int i = 4; i > 0; i--) {
                        history[i] = history[i-1];
                    }
                    
                    // Safely convert double to string using stringstream
                    stringstream ss;
                    ss << "Deposited: $" << amount;
                    history[0] = ss.str();
                    
                    cout << "Successfully deposited!" << endl;
                } else {
                    cout << "Invalid amount." << endl;
                }
                break;
            }

            case 3: {
                double amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                
                if (amount > balance) {
                    cout << "Insufficient funds!" << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount." << endl;
                } else {
                    balance -= amount;
                    
                    // Shift history down
                    for (int i = 4; i > 0; i--) {
                        history[i] = history[i-1];
                    }
                    
                    // Safely convert double to string using stringstream
                    stringstream ss;
                    ss << "Withdrew: $" << amount;
                    history[0] = ss.str();
                    
                    cout << "Please take your cash." << endl;
                }
                break;
            }

            case 4:
                cout << "--- Last 5 Transactions ---" << endl;
                for (int i = 0; i < 5; i++) {
                    cout << i + 1 << ". " << history[i] << endl;
                }
                break;

            case 5:
                cout << "Thank you for using our ATM. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
    return 0;
}
