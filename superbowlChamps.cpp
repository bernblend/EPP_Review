/*
	superbowlChamps.cpp
	June 14, 2017
	bernblend
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>  //read, write and create file.
#include <ctime>
using namespace std;

string getSuperbowlChamp(int);

int main()
{
	ifstream inputfile;
	//declare an input file
	inputfile.open("superBowlChamps.txt", ios::in);

	char answer[30];
	string answers[20];
	int pos = 0;
  int year;

	//read from the file until end of file (eof)
	while(!inputfile.eof())
	{
		inputfile.getline(answer, 30);
		answers[pos] = answer;
		pos ++;
	}

	cout<<"Enter a Super Bowl year and "
			"\npress enter to get the Super Bowl Champ "
      "\nof that year." <<endl;
	cin >> year;
	cout << getSuperbowlChamp(answers,20) << endl;

}
string getSuperbowlChamp(int year)
{
	string champ;

	return champ[year];
}
