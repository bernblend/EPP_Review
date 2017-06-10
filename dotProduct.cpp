#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double dotProduct(double vectAi, double vectAj, double vectBi, double vectBj)
{
  double magA;
  double magB;
  double aTimesB;
  double result;
  double input;
  double PI = 3.1415926535897;

  magA = sqrt((vectAi * vectAi) + (vectAj * vectAj));

  cout << magA << endl;

  magB = sqrt((vectBi * vectBi)+(vectBj * vectBj));

  cout << magB << endl;

  aTimesB = (vectAi * vectBi) + (vectAj * vectBj);

  cout << aTimesB << endl;

  input = ((aTimesB)/(magA * magB));

  result = (acos ( input )) * (180.0/PI);

  return result;
}

int main(int argc, char const *argv[])
{

  //variables
  double vectAi;
  double vectAj;
  double vectBi;
  double vectBj;
  double angle;

  cout << "Vector A (i):" << endl;
  cin >> vectAi;
  cout << "Vector A (j):" << endl;
  cin >> vectAj;
  cout << "Vector B (i):" << endl;
  cin >> vectBi;
  cout << "Vector B (j):" << endl;
  cin >> vectBj;

  angle = dotProduct(vectAi, vectAj, vectBi, vectBj);

  std::cout << angle << '\n';

  return 0;
}
