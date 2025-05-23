Constructors: Default and Parameterized
Accept() & Display() methods
Dynamic memory allocation using new
Menu-driven approach for opening accounts, depositing, withdrawing, and searching accounts
this pointer to check object addresses
C++ Program:
cpp
Copy
Edit
#include <iostream>
using namespace std;

class Account {
private:
    int accNo;
    char name[50];
    double balance;

public:
    // Default Constructor
    Account() : accNo(0), balance(0.0) {
        cout << "Default Constructor Called. Object Address: " << this << endl;
    }

    // Parameterized Constructor
    Account(int a, const char* n, double b) : accNo(a), balance(b) {
        strcpy(name, n);
        cout << "Parameterized Constructor Called. Object Address: " << this << endl;
    }

    // Function to accept account details
    void Accept() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to display account details
    void Display() {
        cout << "\nAccount Number: " << accNo 
             << "\nName: " << name 
             << "\nBalance: " << balance << endl;
        cout << "This Pointer Address: " << this << endl; // Printing `this` pointer
    }

    // Function to deposit amount
    void Deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited Successfully! New Balance: " << balance << endl;
        } else {
            cout << "Invalid Deposit Amount!" << endl;
        }
    }

    // Function to withdraw amount
    void Withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully! New Balance: " << balance << endl;
        } else {
            cout << "Invalid Withdrawal Amount or Insufficient Balance!" << endl;
        }
    }

    // Function to check account number
    int getAccNo() {
        return accNo;
    }
};

// Function to find an account by account number
Account* FindAccount(Account* accounts, int n, int accNo) {
    for (int i = 0; i < n; i++) {
        if (accounts[i].getAccNo() == accNo) {
            return &accounts[i];
        }
    }
    return nullptr;
}

// Menu function
void Menu() {
    int choice, n = 0;
    Account* accounts = nullptr; // Pointer for dynamic array of accounts

    do {
        cout << "\nMenu:\n";
        cout << "1. Open Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Find Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Open Account
            cout << "Enter number of accounts to open: ";
            int newAccounts;
            cin >> newAccounts;

            Account* temp = new Account[n + newAccounts]; // Allocate new memory
            for (int i = 0; i < n; i++) {
                temp[i] = accounts[i]; // Copy existing accounts
            }

            delete[] accounts; // Free old memory
            accounts = temp; // Point to new array

            for (int i = n; i < n + newAccounts; i++) {
                cout << "\nEnter details for Account " << i + 1 << ":\n";
                accounts[i].Accept();
            }

            n += newAccounts;
        } 
        else if (choice == 2) {
            // Display Accounts
            if (n == 0) {
                cout << "No Accounts Available!" << endl;
            } else {
                for (int i = 0; i < n; i++) {
                    accounts[i].Display();
                }
            }
        } 
        else if (choice == 3) {
            // Find Account
            int accNo;
            cout << "Enter Account Number to Find: ";
            cin >> accNo;

            Account* acc = FindAccount(accounts, n, accNo);
            if (acc) {
                acc->Display();
            } else {
                cout << "Account Not Found!" << endl;
            }
        } 
        else if (choice == 4) {
            // Deposit
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            Account* acc = FindAccount(accounts, n, accNo);
            if (acc) {
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                acc->Deposit(amount);
            } else {
                cout << "Account Not Found!" << endl;
            }
        } 
        else if (choice == 5) {
            // Withdraw
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            Account* acc = FindAccount(accounts, n, accNo);
            if (acc) {
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                acc->Withdraw(amount);
            } else {
                cout << "Account Not Found!" << endl;
            }
        }

    } while (choice != 6);

    delete[] accounts; // Free allocated memory before exiting
}

// Main function
int main() {
    Menu(); // Call the menu for account management
    return 0;
}
Explanation:
Account Class Implementation:

Constructors:
Default Constructor: Initializes accNo = 0, balance = 0.0 and prints this pointer.
Parameterized Constructor: Initializes accNo, name, balance, and prints this pointer.
Accept() & Display() Methods:
Accept() takes input for accNo, name, and balance.
Display() prints account details and this pointer.
Transaction Methods:
Deposit(double amount): Adds amount to balance.
Withdraw(double amount): Deducts amount from balance if sufficient funds are available.
getAccNo(): Returns accNo for searching accounts.
Menu-Driven System:

Open Account: User can open multiple accounts (expanding the array dynamically).
Display All Accounts: Displays details of all stored accounts.
Find Account: Searches by account number and displays details.
Deposit Money: Adds money to an existing account.
Withdraw Money: Deducts money from an account if the balance is sufficient.
Exit: Ends the program.
Dynamic Memory Management:

Uses new and delete to dynamically allocate and free memory for account objects.
When new accounts are added, a larger array is created, old data is copied, and the old array is deleted.
Example Execution:
Opening Accounts:
yaml
Copy
Edit
Enter number of accounts to open: 2

Enter details for Account 1:
Enter Account Number: 101
Enter Name: Alice
Enter Initial Balance: 5000

Enter details for Account 2:
Enter Account Number: 102
Enter Name: Bob
Enter Initial Balance: 3000
Displaying Accounts:
yaml
Copy
Edit
Account Number: 101
Name: Alice
Balance: 5000
This Pointer Address: 0x55a1cda

Account Number: 102
Name: Bob
Balance: 3000
This Pointer Address: 0x55a1cdf
Transactions:
yaml
Copy
Edit
Enter Account Number: 101
Enter Amount to Deposit: 2000
Amount Deposited Successfully! New Balance: 7000

Enter Account Number: 102
Enter Amount to Withdraw: 1000
Amount Withdrawn Successfully! New Balance: 2000
Key Features:
✅ Constructors, dynamic memory allocation, and this pointer usage.
✅ Handles multiple accounts efficiently.
✅ Deposit, Withdraw, Search functionalities.
✅ Expandable array to store accounts dynamically.
