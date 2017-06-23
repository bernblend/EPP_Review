/*
	expressions.cpp
	June 22, 2017
	bernblend
*/
#include <iostream>
using namespace std;
int main()
{
	int length, width, area, perimeter;
	int radius, circleArea, circumference;
	string firstName, lastName, fullName;

	cout << "\n";
	cout << "Enter the length of a rectangle: ";
	cin >> length;
	cout << "\nEnter the width of a rectangle: ";
	cin >> width;
	area = length * width;
	perimeter = 2 * length + 2 * width;
	cout << "\n\nThe area of the rectangle is: " << area << endl;
	cout << "\nThe perimeter of the rectangle is: " << perimeter << endl;
	cout << "\n\n\n\n";

	cout << "\nEnter the radius of a circle: ";
	cin >> radius;
	circleArea = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;
	cout << "\nThe area of the circle is: " << circleArea << endl;
	cout << "\nThe circumference of the circle is: " << circumference << endl;
	cout << "\n\n\n\n";

	cout << "Enter the first name: ";
	cin >> firstName;
	cout << "\nEnter the last name: ";
	cin >> lastName;
	fullName = firstName + " " + lastName;
	cout << "\nThe full name is: " << fullName<<endl;
	cout << "\n";
	return 0;

}
