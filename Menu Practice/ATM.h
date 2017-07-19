
#ifndef ATM_H_
#define ATM_H_

#include <iostream>
using namespace std;

class ATM {

  // Private Members
private:
  string firstName;
  string lastName;
  string accountNumber;
  float balance;
  float lastDeposit;
  float lastWithdraw;

public:
  // Constructors
  ATM();
  ATM(string,string,string,float);

  // Setters
  void setFirstName(string);
  void setLastName(string);
  void setAccountNumber(string);
  void setBalance(float);

  // Getters
  string getName();
  string getFirstName();
  string getLastName();
  string getAccountNumber();
  float getBalance();

  // Helper Methods
  void deposit(float);
  void withdraw(float);


};

#endif
