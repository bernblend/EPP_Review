/*
	shipping.cpp
	June 22, 2017
	bernblend
*/
#include <iostream>
#include <iomanip>  //for fixed and setprecision
using namespace std;
int main()
{
	double price, shipping;

	cout << "Enter the total price of the order: " << endl;
	cin >> price;

	if(price > 75)
		shipping = 0;
	else if(price > 50)
		shipping = 5;
	else if(price > 25)
		shipping = 10;
	else if(price > 0)
		shipping = 15;

	cout << "Total price including shipping is: $" << fixed <<  setprecision(2) << price + shipping<<endl;

  return 0;
}
