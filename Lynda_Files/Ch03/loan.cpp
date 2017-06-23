/*
	loan.cpp
	June 22, 2017
	bernblend
 */

#include <iostream>
using namespace std;
int main()
{
	int months = 0;
	double balance = 5000.00;
	double payment = 500.00;

	while(balance > 0)
	{
		months++;
		balance -= payment;
	}

	cout << "It will take you " << months << " months to pay off your loan." << endl;
}
