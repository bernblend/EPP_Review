#include<iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  int mass[];
  int distance[];
  static int numMass;
  cout << "\nNumber of masses? \n" << endl;
  cin >> numMass;

  for (size_t i = 0; i < numMass; i++) {
    cout << "Enter mass: " << endl;
    cin >> mass[i];
    cout << mass[i] << endl;
    cout << "\nEnter x (distance) of mass: \n" << endl;
    cin >> distance[i];
    cout << distance[i] << endl;
  }

  return 0;
}
