#include "ATM.h"
#include <iostream>

using namespace std;

ATM::ATM(){
  this->name = "";
  this->accountNumber = "";
  this->balance = 0.0;
}

ATM::ATM(string name,string accountNumber,float balance){
  this->name = name;
  this->accountNumber = accountNumber;
  this->balance = balance;
}

// Setters
void ATM::setName(string name){
  this->name = name;
}

void ATM::setAccountNumber(string accountNumber){
  this->accountNumber = accountNumber;
}

void ATM::setBalance(float balance){
  this->balance = balance;
}

// Getters
string ATM::getName(){
  return this->name;
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
  }else if ((withdraw - this->balance) < 0.0) {
    this->lastWithdraw = this->balance;
    setBalance(0.0);
  }else{
    setBalance(withdraw - this->balance);
  }
}
