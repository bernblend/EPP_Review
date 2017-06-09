#include <iostream>
#include <iomanip>
using namespace std;

void Steelers()
{
  cout << "QB1: Ben Roethlisberger" << endl;
  cout << "RB1: Le'Veon Bell" << endl;
  cout << "WR1: Antonio Brown" << endl;
}

void Eagles()
{
  cout << "QB1: Carson Wentz" << endl;
  cout << "RB1: Ryan Matthews" << endl;
  cout << "WR1: Jordan Matthews" << endl;
}

void Chargers()
{
  cout << "QB1: Phillip Rivers" << endl;
  cout << "RB1: Melvin Gordon" << endl;
  cout << "WR1: Mike Williams" << endl;
}

int main(int argc, char const *argv[])
{
  //variables
  string team, position;

  cout << "Enter NFL team: " << endl;
  cin >> team;

  if(team == "Steelers")
  {
    Steelers();
  }
  else if(team == "Eagles")
  {
    Eagles();
  }
  else if(team == "Chargers")
  {
    Chargers();
  }
  else
    cout << "Not an NFL team." << endl;

  cout << "\n" << team << endl;

  return 0;
}
