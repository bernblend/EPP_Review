/*
  NFLteam.h
  June 30, 2017
  bernblend

  Add QB playoff records.
*/
#ifndef _NFLteam_
#define _NFLteam_
using namespace std;

class NFLteam {
private:
  string name;
  string location;
  int superBowlWins;

public:
  NFLteam();
  NFLteam(string, string, int);

  ~NFLteam();

  string getName();
  string getLocation();
  int getSuperBowlWins();


  void setName(string);
  void setLocation(string);
  void setSuperBowlWins(int);

};
