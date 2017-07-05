#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
void extraCredit(int);
void extraCredit(int *score)
{
  *score += 15;
}
int main(int argc, char const *argv[]) {
  int myScore = 100;
  int* myScorePtr = &myScore;
  extraCredit(myScorePtr);
  cout << "myScore: " << myScore << endl;
  cout << "*myScorePtr: " << *myScorePtr << endl;
  return 0;
}
