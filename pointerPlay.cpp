/*
  pointerPlay.cpp
  July 4, 2017
  bernblend
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

void addFive(int);

/* Make the num Parameter variable as pointer type, to receive the address of numPtr variable from main*/
void addFive(int *num)
{
  /*To get the value, we will deference num by using *(asterisk) operator */
  cout << "The value of *num in function: " << *num << endl;
  cout << "The value of &num in function: " << &num << endl;
  cout << "The value of num in function: " << num << endl;
  *num += 5;
  cout << "The value of *num in function after adding 5: " << *num << endl;
  cout << "The value of &num in function after adding 5: " << &num << endl;
  cout << "The value of num in function after adding 5: " << num << endl;
}


int main(int argc, char const *argv[]) {
 int num = 5;
 int* numPtr = &num;

 addFive(numPtr);/*Argument passed will be of pointer type,so that all the changes made by that function will be automatically reflected without even returning any value */

 cout << "The value of numPtr in main: " << numPtr << endl;
 cout << "The value of *numPtr in main: " << *numPtr << endl;
 cout << "The value of &numPtr in main: " << &numPtr << endl;
 cout << "The value of num in main: " << num << endl;
 cout << "The value of &num in main: " << &num << endl;

 return 0;
}
