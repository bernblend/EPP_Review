/*
	Job.cpp
	June 24, 2017
	bernblend

	This is the class file and contains the body of the function protoypes listed in the header file.
*/
#include "Job.h"
#include <iostream>

using namespace std;

  Job::Job()
  {
    rate = 0.00;
    hoursOrPatients = 0.00;
  }

  Job::Job(double r, double h)
  {
    rate = r;
    hoursOrPatients = h;
  }


  Job::~Job()
  {
    //
  }



  double Job::getRate()
  {
    return rate;
  }
  double Job::getHoursOrPatients()
  {
    return hoursOrPatients;
  }
  double Job::getPay()
  {
    return pay;
  }


  void Job::setRate(double r)
  {
    rate = r;
  }
  void Job::setHoursOrPatients(double hop)
  {
    hoursOrPatients = hop;
  }
  void Job::setPay(double r, double hop)
  {
    pay = hop * r;
  }
