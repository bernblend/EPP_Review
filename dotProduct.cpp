#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double dotProduct(int vectAi, int vectAj, int vectBi, int vectBj)
{
  double magA;
  double magB;
  double aTimesB;
  double result;
  double input;

  magA = sqrt(exp(vectAi)+exp(vectBi));

  magB = sqrt(exp(vectAj)+exp(vectBj));

  aTimesB = (vectAi * vectBi) + (vectAj * vectBj);

  input = ((aTimesB)/(magA * magB));

  result = acos ( input * PI / 180.0 );

  return result;
}

int int main(int argc, char const *argv[])
{

  //variables
  double vectAi;
  double vectAj;
  double vectBi;
  double vectBj;
  double angle;

  

  return 0;
}
