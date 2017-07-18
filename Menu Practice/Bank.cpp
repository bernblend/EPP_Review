#include "ATM.h"
#include <iostream>
#include <string>
using namespace std;

void printAccount(ATM account);


int main(int argc, char const *argv[]) {

    int numOfAccounts = 10;
    ATM* accounts = new ATM[numOfAccounts];
    int input;

    do {

        // Prompt User
        cout << "Welcome to Bank Of The Student\'s!\n";
        cout << "How may I help you today\n";
        cout << "Enter Number To Make Choice (-1 to Exit Program)\n";

        // Present Menu
        if (accounts[0].getName() == "" && accounts[0].getAccountNumber() == "") {
            cout << "1. Create Account\n";
        }else {
            cout << "1. Create Account\n";
            cout << "2. Already Have An Account\n";
        }

        cin >> input;


        if(input == 1){
            string name;
            string accountNumber;
            float balance;

            cout << "Enter Full Name:\n";
            getline(cin,name);

            cout << "Enter Account Number:\n";
            getline(cin, accountNumber);

            cout << "Enter Your Balance:\n";
            cin >> balance;

            ATM newAccount = ATM(name,accountNumber,balance);

            // Search for empty slot
            for(int i = 0;i < numOfAccounts;i++){
                if (accounts[i].getName() == "") {
                    accounts[i] = newAccount;
                    break;
                }
            }

            printAccount(newAccount);
        }else if (input == 2) {
            int bankInput;
            cout << "Enter Number To Make Choice\n";
            cout << "1. Enter Name: ";
            cout << "2. Enter Account Number: ";

            cin >> bankInput;
            if (bankInput == 1) {
                string name;
                cin >> name;
                // Search for person name in array
                for(int i = 0;i < numOfAccounts;i++){
                    string currentAccountName = accounts[i].getName();
                    transform(currentAccountName.begin(), currentAccountName.end(), currentAccountName.begin(), ::tolower);
                    transform(name.begin(), name.end(), name.begin(), ::tolower);
                    if (currentAccountName == name) {
                        printAccount(accounts[i]);
                        break;
                    }
                }
            } else if (bankInput == 2) {
                string accountNumber;
                cin >> accountNumber;

                // Search for person account number in array
                for(int i = 0;i < numOfAccounts;i++){
                    string currentAccountNumber = accounts[i].getName();
                    transform(currentAccountNumber.begin(), currentAccountNumber.end(), currentAccountNumber.begin(), ::tolower);
                    transform(accountNumber.begin(), accountNumber.end(), accountNumber.begin(), ::tolower);
                    if (currentAccountNumber == accountNumber) {
                        printAccount(accounts[i]);
                        break;
                    }
                }
            }
        }else {
            break;
        }
    }while (input != -1);
    return 0;
}


void printAccount(ATM account){
    cout << "Account Name: " << account.getName() << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: $ " << account.getBalance() << endl << endl << endl;
}
