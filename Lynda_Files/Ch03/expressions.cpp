/*
expressions.cpp
May 21, 2014
Peggy Fisher
*/
#include <iostream>
using namespace std;
int main()
{
	int length, width, area, perimeter;
	int radius, circleArea, circumference;
	string firstName, lastName, fullName;

	cout<<"Enter the length and width of a rectangle";
	cin>>length;
	cin>>width;
	area = length*width;
	perimeter = 2*length + 2*width;
	cout<<"The area of the rectangle is: "<<area<<endl;
	cout<<"The perimeter of the rectangle is: "<<perimeter<<endl;

	cout<<"Enter the radius of a circle:";
	cin>>radius;
	circleArea = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;
	cout<<"The area of the circle is: "<<circleArea<<endl;
	cout<<"The circumference of the circle is: "<<circumference<<endl;

	cout<<"Enter the first and last name"<<endl;
	cin>>firstName;
	cin>>lastName;
	fullName = firstName + " " +lastName;
	cout<<"The full name is: "<<fullName<<endl;
	return 0;
}
