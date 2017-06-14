/*
  Calculate Scalar Product (Dot Product).
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double dotProduct(double vectAi, double vectAj, double vectBi, double vectBj)
{
  double result;

  result = (vectAi * vectBi) + (vectAj * vectBj);

  return result;
}

int main(int argc, char const *argv[])
{

  //variables
  double vectAi;
  double vectAj;
  double vectBi;
  double vectBj;
  double product;

  cout << "Vector A (i):" << endl;
  cin >> vectAi;
  cout << "Vector A (j):" << endl;
  cin >> vectAj;
  cout << "Vector B (i):" << endl;
  cin >> vectBi;
  cout << "Vector B (j):" << endl;
  cin >> vectBj;

  product = dotProduct(vectAi, vectAj, vectBi, vectBj);

  std::cout << "\nThe scalar product of the two vectors is: " << product << '\n';

  return 0;
}
