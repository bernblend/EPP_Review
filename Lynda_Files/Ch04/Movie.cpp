/*
	Movie.cpp
	June 25, 2017
	bernblend

	This is the Class file.
*/

#include "Movie.h"
#include <iostream>
using namespace std;

//default constructor
Movie::Movie() {
	movieName = "";
	year = 1900;
	rating = "G";
}
Movie::Movie(string name, int year, string rating)
{
	movieName = name;
	while(year < 1950 || year > 2017)
	{
		cout << "Invalid year, please re-enter between 1950 and present: \n";
		cin >> year;
		cin.ignore();    //ignore user enter input.
	}
	this->year = year;   //set object var = year (from arg).
	this->rating = rating;
}

Movie::~Movie() {
	// TODO Auto-generated destructor stub
}
string Movie::getName()
{
	return movieName;
}
void Movie::setName(string name)
{
	movieName = name;
}
int Movie::getYear()
{
	return year;
}
void Movie::setYear(int year)
{
	while(year < 1950 || year > 2017)
	{
		cout << "Invalid year, please re-enter between 1950 and present: \n";
		cin >> year;
		cin.ignore();
	}
	this->year = year;
}
string Movie::getRating()
{
	return rating;
}
void Movie::setRating(string rating)
{
	this->rating = rating;
}
