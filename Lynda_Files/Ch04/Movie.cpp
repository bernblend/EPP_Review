/*
 * Movie.cpp
 *
 *  Created on: May 23, 2014
 *      Author: Peggy Fisher
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
	while(year < 1950 || year > 2014)
	{
		cout<<"invalid year, please re-enter between 1950 and present: \n";
		cin>>year;
		cin.ignore();
	}
	this->year = year;
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
	while(year < 1950 || year > 2014)
	{
		cout<<"invalid year, please re-enter between 1950 and present: \n";
		cin>>year;
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

