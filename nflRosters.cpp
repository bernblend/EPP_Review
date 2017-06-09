#include <iostream>
#include <iomanip>
using namespace std;

string Steelers()
{
  cout << "QB1: Ben Roethlisberger" << endl;
  cout << "RB1: Le'Veon Bell" << endl;
  cout << "WR1: Antonio Brown" << endl;

}

string Eagles()
{
  cout << "QB1: Carson Wentz" << endl;
  cout << "RB1: Ryan Matthews" << endl;
  cout << "WR1: Jordan Matthews" << endl;
}

int main(int argc, char const *argv[])
{
  //variables
  string team, position;

  cout << "Enter NFL team: " << endl;
  cin >> team;

  if(team == "Steelers")
    Steelers();


  if(team == "Eagles")
    Eagles();

  cout << "\n" << team << endl;

  return 0;
}
