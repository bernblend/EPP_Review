/*
  NFLteam.cpp
  June 30, 2017
  bernblend
*/
#include "NFLteam.h"
#include <iostream>

using namespace std;

  NFLteam::NFLteam()
  {
    name = "NA";
    location = "NA";
    superBowlWins = -1;
  }

  NFLteam::NFLteam(string n, string l, int sbw)
  {
    name = n;
    location = l;
    superBowlWins = sbw;
  }

  NFLplayer::~NFLplayer()
  {
    //
  }


  string NFLteam::getName()
  {
    return name;
  }
  string NFLteam::getLocation()
  {
    return location;
  }
  int NFLteam::getSuperBowlWins()
  {
    return superBowlWins;
  }


  void NFLteam::setName(string n)
  {
    name = n;
  }
  void NFLteam::setLocation(string l)
  {
    location = l;
  }
  void NFLteam::setSuperBowlWins(int sbw)
  {
    superBowlWins = sbw;
  }
