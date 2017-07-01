/*
  NFLplayer.cpp
  June 30, 2017
  bernblend
*/
#include "NFLplayer.h"
#include <iostream>

using namespace std;

  NFLplayer::NFLplayer()
  {
    name = "NA";
    jersey = -1;
    position = "NA"
    yearsInLeague = -1;
    playOffRecord = -1;
    superBowlWins = -1;
    salary = -1;
  }

  NFLplayer::NFLplayer(string n, int j, string p, int yil, int por, int sbw, double s)
  {
    name = n;
    jersey = j;
    position = p;
    yearsInLeague = yil;
    playOffRecord = por;
    superBowlWins = sbw;
    salary = s;
  }

  NFLplayer::~NFLplayer()
  {
    //
  }



  string NFLplayer::getName()
  {
    return name;
  }
  int NFLplayer::getJersey()
  {
    return jersey;
  }
  string NFLplayer::getPosition()
  {
    return position;
  }
  int NFLplayer::getYearsInLeague()
  {
    return yearsInLeague;
  }
  int NFLplayer::getPlayOffRecord()
  {
    return playOffRecord;
  }
  int NFLplayer::getSuperBowlWins()
  {
    return superBowlWins;
  }
  double NFLplayer::getSalary()
  {
    return salary;
  }
