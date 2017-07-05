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


void addFive(int num)
{
  cout << "The value of num in function: " << num << endl;
  num += 5;
  cout << "The value of num in function after adding 5: " << num << endl;
}


int main(int argc, char const *argv[]) {
 int num = 5;
 int* numPtr = &num;

 addFive(*numPtr);

 cout << "The value of numPtr in main: " << numPtr << endl;
 cout << "The value of *numPtr in main: " << *numPtr << endl;
 cout << "The value of num in main: " << num << endl;

 return 0;
}
