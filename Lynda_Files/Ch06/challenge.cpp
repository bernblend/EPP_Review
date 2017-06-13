/*
challenge.cpp
May 23, 2014
Peggy Fisher
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	double col1 = 0;
	double col1Total = 0;
	double col2 = 0;
	double col2Total = 0;
	int count = 0;
	int readError = 20;
	ifstream inputfile;
	try{
		if(inputfile.fail())
			throw readError;
	}
	catch(int error)
	{
		if(error == readError)
			cout<<"Error reading input file"<<endl;
	}
	inputfile.open("challenge.txt");
	while(!inputfile.eof())
	{
		inputfile>>col1;
		col1Total += col1;
		inputfile>>col2;
		col2Total += col2;
		count++;
	}
	cout<<"Average of column 1 is: "<<col1Total/count<<endl;
	cout<<"Average of column 2 is: "<<col2Total/count<<endl;

	return 0;
}
