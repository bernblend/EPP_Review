/*
	fortuneTeller.cpp
	June 12, 2014
	bernblend
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>  //read, write and create file.
#include <ctime>
using namespace std;

string getRandomReply(string [], int);

int main()
{
	ifstream inputfile;
	//declare an input file
	inputfile.open("replies.txt", ios::in);  //reading data in from this file

	char answer[30];
	string answers[20];
	int pos = 0;

	//read from the file until end of file (eof)
	while(!inputfile.eof())
	{
		inputfile.getline(answer, 30);
		answers[pos] = answer;
		pos ++;
	}

	cout<<"Think of a question for the fortune teller, "
			"\npress enter for the answer "<<endl;
	cin.ignore();  //Don't read in 'enter' from user as reply
	cout << getRandomReply(answers,20) << endl;

}
string getRandomReply(string replies[],int size)
{
	srand(time(0));
	int randomNum = rand() % 20;  //random # 0-19
	return replies[randomNum];
}
