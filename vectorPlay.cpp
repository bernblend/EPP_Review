/*
  vectorPlay.cpp
  July 5, 2017
  bernblend
*/
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
  vector<string> players;
  int numPlayers;
  string name;

  cout << "How many players are there?" << endl;
  cin >> numPlayers;
  for (int i; i < numPlayers; i++)
  {
    cout << "Enter name of player number " << i+1 << endl;
    cin >> name;
    players.push_back(name);
  }

  for (int i = 0; i < players.size(); i++)
  {
    string element;
    cout << "Player " << i + 1 << " is " << players[i] << endl;
    cout << "players.size(): " << players.size() << endl;
  }

  cout << "players.capacity(): " << players.capacity() << endl;

  cout << "players.at(1): " << players.at(1) << endl;

  players.pop_back();

  cout << "players.size(): " << players.size() << endl;

  cout << "players.capacity(): " << players.capacity() << endl;

  cout << "players.at(0): " << players.at(0) << endl;

  players.clear();

  cout << "players.size(): " << players.size() << endl;

  cout << "players.capacity(): " << players.capacity() << endl;

  if (players.empty() == true) {
    cout << "Vector is now empty" << endl;
  }

  //NOTE: capacity never changes, size does change.

  return 0;
}
