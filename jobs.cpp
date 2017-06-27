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
#include <fstream>  //Add this header file
using namespace std;
void totalPay(Job);
int main(int argc, char const *argv[]) {
  double horp, r;
  double allpays = 0; //Make a double variable with value 0 and increment it with pays of all jobs
  Job jobs[100]; //Create an array of objects of Jobs class to keep track of all jobs
  int i = 0;

  ofstream fout;//Create an instance of ofstream class for output
  fout.open("jobs.txt");//Open file for writing.
  fout << "JOB #" << setw(18) << right << "hoursOrPatients" << setw(11) << "Rate" << setw(22) << "Final Total Pay\n"; //Write first line of table

  char answer = 'y';
  do {
    cout << "\n\nHow many hours or patients completed? " << endl;
    cin >> horp;
    cout << "What is the rate (per hour/per patient)? " << endl;
    cin >> r;
    jobs[i].setHoursOrPatients(horp);
    jobs[i].setRate(r);
    jobs[i].setPay(horp, r);
    totalPay(jobs[i]);
    allpays += jobs[i].getPay(); //Increment the value of all pays
    fout << i+1 << fixed << setprecision(2) << setw(14) << horp << setw(20) << r << setw(13) << "$" << jobs[i].getPay()<<"\n"; //Write rest of lines to text file
    i++;
    cout << "\n\nDo you have another transaction? ";
    cin >> answer;
  } while(answer == 'y');
  cout << "\n\nThe total pay of ALL JOBS is: $" << fixed << setprecision(2) << allpays << "\n\nHave a FANTASTIC day!\n\n\n" << setw(20)  << right << "-bern\n" << "\n";//Print the value of allpays

  fout << "\n\nThe total pay of ALL JOBS is: $" << fixed << setprecision(2) << allpays << "\n\nHave a FANTASTIC day!\n\n\n" << setw(20)  << right << "-bern\n" << "\n";

  return 0;
}
void totalPay(Job job)
{
cout << "\n\nThe total pay for this job is: $" << fixed << setprecision(2) << job.getPay() << "\n" << endl;
}
