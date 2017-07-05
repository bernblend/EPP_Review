/*
  arrayPlay.cpp
  June 27, 2017
  bernblend
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

double findGreatest(double[], int);

int main(int argc, char const *argv[]) {

  srand(time(0));

  double number[50];
  double greatestNum;

  for (int i = 0; i < 51; i++) {

    number[i] = rand();

    //'fixed' - the value is represented with exactly as many digits in the decimal part as specified by the precision field (precision) and with no exponent part.

    cout << fixed << i << setw(15) << setprecision(2) << number[i] << "\t" << i << setw(15) << number[i] << "\t" << i << setw(15) << number[i] << endl;

  }

  cout << number[48] << endl;
  cout << number[49] << endl;
  cout << number[50] << endl;

  cout << "The greatest number randomly produced was: " << fixed << setw(15) << findGreatest(number, 50) << endl;

  return 0;
}


double findGreatest(double n[], int size)
{
  double greatest = n[0];   //set to first index
  for (int i = 1; i < size; i++)
  {
    if (n[i] > greatest)
    {
      greatest = n[i];
    }
  }
  return greatest;
}
