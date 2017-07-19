
#ifndef ATM_H_
#define ATM_H_

#include <iostream>
using namespace std;

class ATM {

  // Private Members
private:
  string name;
  string accountNumber;
  float balance;
  float lastDeposit;
  float lastWithdraw;

public:
  // Constructors
  ATM();
  ATM(string,string,float);

  // Setters
  void setName(string);
  void setAccountNumber(string);
  void setBalance(float);

  // Getters
  string getName();
  string getAccountNumber();
  float getBalance();

  // Helper Methods
  void deposit(float);
  void withdraw(float);


};

#endif
