/*
  jobs.cpp
  June 25, 2017
  bernblend
*/
#include <iostream>
#include <iomanip>
#include "Job.h"
#include "Job.cpp"
#include <string>
using namespace std;

void totalPay(Job);

int main(int argc, char const *argv[]) {

  double horp, r;
  char answer = 'y';

  do {

    cout << "\nHow many hours or patients completed?" << endl;
    cin >> horp;
    cout << "What is the rate (per hour/per patient)?" << endl;
    cin >> r;

    Job job1(horp, r);

    job1.setPay(horp, r);

    cout << job1.getPay();

    totalPay(job1);

    cout << "\n\nDo you have another transaction?";
		cin >> answer;

  } while(answer == 'y');

  return 0;
}

void totalPay(Job job)
{
  cout << "\n\nThe total pay is: " << job.getPay();

}
