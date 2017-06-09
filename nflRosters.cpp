#include <iostream>
#include <iomanip>
using namespace std;

string Steelers()
{
  cout << "QB1: Ben Roethlisberger" << endl;
  cout << "RB1: Le'Veon Bell" << endl;
  cout << "WR1: Antonio Brown" << endl;

}


int main(int argc, char const *argv[])
{
  //variables
  string team, position;

  cout << "Enter NFL team: " << endl;
  cin >> team;

  if(team == "Steelers")
    Steelers();

  cout << "\n" << team << endl;

  return 0;
}
