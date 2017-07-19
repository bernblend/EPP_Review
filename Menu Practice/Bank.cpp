#include "ATM.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void printAccount(ATM account);
void askAccountDetails(ATM account);
void archiveAccounts(ATM* accounts);
ATM* grabAccounts();
void updateAccount(ATM account,ATM* accounts);


int main(int argc, char const *argv[]) {

    int numOfAccounts = 100;
    ATM* accounts = grabAccounts();
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
        cin.ignore();

        switch (input) {
            case 1: {
                string firstName,lastName;
                string accountNumber;
                float balance;

                cout << "Enter First Name:\n";
                cin >> firstName;

                cout << "Enter Last Name:\n";
                cin >> lastName;

                cout << "Enter Account Number:\n";
                cin >> accountNumber;

                cout << "Enter Your Balance:\n";
                cin >> balance;

                ATM newAccount = ATM(firstName,lastName,accountNumber,balance);

                // Search for empty slot
                for(int i = 0;i < numOfAccounts;i++){
                    if (accounts[i].getFirstName() == "") {
                        accounts[i] = newAccount;
                        break;
                    }
                }

                printAccount(newAccount);
                archiveAccounts(accounts);
                break;
            }// End case 1
            case 2: {
                int bankInput;
                int index;
                cout << "Enter Number To Make Choice\n";
                cout << "1. Enter Name:\n";
                cout << "2. Enter Account Number:\n";

                cin >> bankInput;
                cin.ignore();

                switch (bankInput) {
                    case 1:{
                        cout << "Enter your name: \n";
                        string name;
                        getline(cin,name);
                        cin.ignore();

                        // Search for person name in array
                        for(int i = 0;i < numOfAccounts;i++){
                            string currentAccountName = accounts[i].getName();
                            transform(currentAccountName.begin(), currentAccountName.end(), currentAccountName.begin(), ::tolower);
                            transform(name.begin(), name.end(), name.begin(), ::tolower);
                            if (currentAccountName == name) {
                                index = i;
                                break;
                            }
                        }
                        break;
                    }
                    case 2:{
                        cout << "Enter your account number: \n";
                        string accountNumber;
                        cin.ignore();
                        getline(cin,accountNumber);
                        cin.ignore();

                        // Search for person account number in array
                        for(int i = 0;i < numOfAccounts;i++){
                            string currentAccountNumber = accounts[i].getAccountNumber();
                            if (currentAccountNumber == accountNumber) {
                                index = i;
                                break;
                            }
                        }
                        break;
                    }

                    default:
                        break;
                }// End inner switch statement
                askAccountDetails(accounts[index]);
                updateAccount(accounts[index],accounts);
                input = -1;
            }// End case 2
                break;

            default:
                break;
        }
    }while (input != -1);
    return 0;
}


void printAccount(ATM account){
    cout << "Account Name: " << account.getFirstName() << " " << account.getLastName() << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: $ " << account.getBalance() << endl << endl << endl;
}


void askAccountDetails(ATM account){
    cout << "1. Withdraw\n";
    cout << "2. Deposit\n";
    cout << "3. Print Reciept\n";
    cout << "4. Exit\n";

    int input;
    cin >> input;

    switch (input) {
        case 1:{
            cout << "Withdraw Amount: ";
            cout << "1. $20\t2. $40\t3. $100\n";
            cout << "4. Quick Cash\n";
            int withdrawInput;
            cin >> withdrawInput;
            switch (withdrawInput) {
                case 1:
                    account.withdraw(20);
                    printAccount(account);
                    break;
                case 2:
                    account.withdraw(40);
                    printAccount(account);
                    break;
                case 3:
                    account.withdraw(100);
                    printAccount(account);
                    break;
                case 4:
                    int withdraw;
                    cout << "Enter amount: ";
                    cin >> withdraw;
                    account.withdraw(withdraw);
                    printAccount(account);
                    break;
                default:
                    cout << "Invalid input!\n";
                    break;
            }

            break;
        }
        case 2:{
            cout << "Deposit Amount: ";
            cout << "1. $20\t2. $40\t3. $100\n";
            cout << "4. Quick Cash\n";
            int depositInput;
            cin >> depositInput;
            switch (depositInput) {
                case 1:
                    account.deposit(20);
                    printAccount(account);
                    break;
                case 2:
                    account.deposit(40);
                    printAccount(account);
                    break;
                case 3:
                    account.deposit(100);
                    printAccount(account);
                    break;
                case 4:
                    int deposit;
                    cout << "Enter amount: ";
                    cin >> deposit;
                    account.deposit(deposit);
                    printAccount(account);
                    break;
                default:
                    cout << "Invalid input!\n";
                    break;
            }

            break;
        }
        case 3:
            printAccount(account);
            break;
        case 4:
            break;
        default:
            break;
    }
}

ATM* grabAccounts(){
    ifstream input;
    input.open("accounts.txt");
    int index = 0;
    string name,info;
    ATM* accounts = new ATM[100];

    while (!input.eof()) {
        input >> name;
        ATM account = ATM();
        account.setFirstName(name);
        for (int i = 0; i < 3; i++) {
            input >> info;
            if(i == 0)
                account.setLastName(info);
            else if(i == 1){
                account.setAccountNumber(info);
            }else{
                account.setBalance(stoi(info));
            }
        }
        accounts[index] = account;
        index++;
    }
    return  accounts;
}

void archiveAccounts(ATM* accounts){
    ofstream output;
    output.open("accounts.txt");

    for (int i = 0; i < 100; i++) {
        if (accounts[i].getFirstName() != "" && accounts[i].getAccountNumber() != "") {
            output << accounts[i].getName();
            output << " " << accounts[i].getAccountNumber();
            output << " " << accounts[i].getBalance() << endl;
        }
    }

    output.close();
}

void updateAccount(ATM account,ATM* accounts){

    ofstream output;
    output.open("accounts.txt");

    for (int i = 0; i < 100; i++) {
        if(accounts[i].getFirstName() == account.getFirstName() && accounts[i].getAccountNumber() == account.getAccountNumber()){
            output << accounts[i].getFirstName() << " " << accounts[i].getLastName();
            output << " " << accounts[i].getAccountNumber();
            output << " " << accounts[i].getBalance() << endl;
        }
    }
}
