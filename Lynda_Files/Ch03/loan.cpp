/*
 * loan.cpp
 *
 *  Created on: May 13, 2014
 *      Author: Peggy Fisher
 */

#include <iostream>
using namespace std;
int main()
{
	int months = 0;
	double balance = 0;
	double payment = 0;

	while(balance > 0)
	{
		months=months+1; 	//or months++;
		balance = balance - payment;	//or balance -= payment
	}
	cout<<"It will take you "<<months<<" months to pay off your loan"<<endl;
}
