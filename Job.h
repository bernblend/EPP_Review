/*
  Job.h
  June 24, 2017
  bernblend
*/
#ifndef _JOB_
#define _JOB_
#include <string>
using namespace std;

class Job {
private:
  double rate;
  double hoursOrPatients;
  double pay;

public:
  Job();
  Job(double, double);

  ~Job();

  double getRate();
  double getHoursOrPatients();
  double getPay();


  void setRate(double);
  void setHoursOrPatients(double);
  void setPay(double, double);


};

#endif
