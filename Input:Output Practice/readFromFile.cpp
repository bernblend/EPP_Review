/*
  readFromFile.cpp
  July 15, 2017
  bernblend
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <ctime>

using namespace std;

string removeSpaces(string);

int main()
{
  ifstream inputfile;
  int num;

  inputfile.open("SuperBowlList.txt", ios::in);

  char superbowl[100];
  string superbowls[52];
  int pos = 0;

  while(!inputfile.eof())
  {
    inputfile.getline(superbowl, 100);
    superbowls[pos] = superbowl;
    pos++;
  }

  while(num != -1)
  {
    cout << "Which Super Bowl would you like to look up?" << endl;
    cin >> num;

    cout << superbowls[num - 1] << "\n" << endl;
  }


  return 0;
}
