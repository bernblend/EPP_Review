/*
  NFLplayer.h
  June 30, 2017
  bernblend
*/
#ifndef _NFLplayer_
#define _NFLplayer_

using namespace std;

class NFLplayer {
private:
  string name;
  int jersey;
  string position;
  int yearsInLeague;
  int playOffRecord;
  int superBowlWins;
  double salary;

public:
  NFLplayer();
  NFLplayer(string, int, string, int, int, int, double);

  ~NFLplayer();

  string getName();
  int getJersey();
  string getPosition();
  int getYearsInLeague();
  int getPlayOffRecord();
  int getSuperBowlWins();
  double getSalary();

  void setName();
  void setJersey();
  void setPosition();
  void setYearsInLeague();
  void setPlayOffRecord();
  void setSuperBowlWins();
  void setSalary();

};
