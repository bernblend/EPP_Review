/*
 * houses.cpp
 *
 *  Created on: May 17, 2014
 *      Author: Peggy Fisher
 */
#include <iostream>
#include "House.h"
#include <string>
using namespace std;

void printHouse(House);

int main()
{
	//Create an instance of the House class
	//using the default constructor
	House house1;
	
	//Create a second instance
	//provide values for color, bed, bath, and sqft
	House h2("Tan", 3, 2, 2500);
	
	//print house information
	printHouse(house1);
	printHouse(house2);
	return 0;
}
void printHouse(House house)
{
	//print the house information using
	//the dot operator
	cout<<"House Color: "<<house.getColor()
			<<"\nNumber Bathrooms: "
			<<house.getNumBath()
			<<"\nNumberBedrooms: "
			<<house.getSqft()<<endl;
	cout<<"Total Square feet: "
			<<house.getSqft()<<endl;
	cout<<endl<<endl;
	
	//since it is a void function,
	//I do not need a return statement
}
