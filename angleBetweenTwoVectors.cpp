/*
  angleBetweenTwoVectors.cpp
  June 12, 2017
  Author: bernblend
  Details:
  Calculate the angle between two vectors.
  Simply enter the components of i(x), j(y) and k(z).
  - bern
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double angleBetweenVectors(double vectAi, double vectAj, double vectAk, double vectBi, double vectBj, double vectBk)
{
  double magA;
  double magB;
  double aTimesB;
  double result;
  double input;
  magA = sqrt((vectAi * vectAi) + (vectAj * vectAj) + (vectAk * vectAk));
  cout << "\nMagnitude A: " << magA << endl;
  magB = sqrt((vectBi * vectBi) + (vectBj * vectBj) + (vectBk * vectBk));
  cout << "Magnitude B: " << magB << endl;
  aTimesB = (vectAi * vectBi) + (vectAj * vectBj) + (vectAk * vectBk);
  cout << "\nThe Dot Product: " << aTimesB << endl;
  input = ((aTimesB)/(magA * magB));
  result = (acos ( input ));
  return result;
}
int main(int argc, char const *argv[])
{
  //variables
  double vectAi;
  double vectAj;
  double vectAk;
  double vectBi;
  double vectBj;
  double vectBk;
  double angle;
  double PI = 3.1415926535897;
  cout << "Vector A (i):" << endl;
  cin >> vectAi;
  cout << "Vector A (j):" << endl;
  cin >> vectAj;
  cout << "Vector A (k):" << endl;
  cin >> vectAk;
  cout << "Vector B (i):" << endl;
  cin >> vectBi;
  cout << "Vector B (j):" << endl;
  cin >> vectBj;
  cout << "Vector B (k):" << endl;
  cin >> vectBk;
  angle = angleBetweenVectors(vectAi, vectAj, vectAk, vectBi, vectBj, vectBk);
  std::cout << "\nThe angle between the two vectors is: \n" << angle << " in radians." << '\n';
  angle *= (180.0/PI);
  std::cout << angle << " in degrees." << '\n';
  return 0;
}
