/*
	House.h
	June 24, 2017
	bernblend

	This is the header file.
 */
#ifndef HOUSE_H_
#define HOUSE_H_
#include <string>
using namespace std;

class House {
private:             //instance data declared as private.
	string houseColor;
	int numBathrooms;
	int numBedrooms;
	double squareFeet;

public:           //function protoypes declares as public.
	//constructors
	House();
	House(string, int, int, double);

	//destructor
	~House();

	//accessor methods
	string getColor();
	int getNumBath();
	int getNumBed();
	double getSqft();

	//mutator methods
	void setColor(string);
	void setNumBath(int);
	void setNumBed(int);
	void setSqft(double);
};

#endif /* HOUSE_H_ */
