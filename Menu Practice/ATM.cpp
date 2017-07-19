#include "ATM.h"
#include <iostream>

using namespace std;

ATM::ATM(){
  this->firstName = "";
  this->lastName = "";
  this->accountNumber = "";
  this->balance = 0.0;
}

ATM::ATM(string firstName,string lastName,string accountNumber,float balance){
  this->firstName = firstName;
  this->lastName = lastName;
  this->accountNumber = accountNumber;
  this->balance = balance;
}

// Setters
void ATM::setFirstName(string firstName){
  this->firstName = firstName;
}

void ATM::setLastName(string lastName){
  this->lastName = lastName;
}

void ATM::setAccountNumber(string accountNumber){
  this->accountNumber = accountNumber;
}

void ATM::setBalance(float balance){
  this->balance = balance;
}

// Getters
string ATM::getName(){
  return this->firstName + " " + this->lastName;
}

string ATM::getFirstName(){
  return this->firstName;
}

string ATM::getLastName(){
  return this->lastName;
}

string ATM::getAccountNumber(){
  return this->accountNumber;
}

float ATM::getBalance(){
  return this->balance;
}

// Helpers
void ATM::deposit(float deposit){
  this->lastDeposit = deposit;
  setBalance(deposit + this->balance);
}

void ATM::withdraw(float withdraw){
  if(this->balance <= 0.0){
    cout << "Insuffecent Funds" << endl;
  }else if ((this->balance - withdraw) < 0.0) {
    this->lastWithdraw = this->balance;
    setBalance(0.0);
  }else{
    setBalance(this->balance - withdraw);
  }
}
