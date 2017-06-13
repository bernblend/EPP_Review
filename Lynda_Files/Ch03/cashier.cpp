/*
cashier.cpp
May 21, 2014
Peggy Fisher
*/
#include <iostream>
using namespace std;

void printChange(int&, int&, int&, int&, int&);
void findCoins(int&, int&, int&, int&, int&);


int main()
{
	double price;
	double payment;
	char answer = 'y';
	int dollars, quarters, dimes, nickels, pennies;
	while(answer == 'y')
	{
		cout<<"Enter price of an item: "<<endl;
		cin>>price;
		cout<<"Enter payment from customer: "<<endl;
		cin>>payment;
		double change = payment - price;
		dollars = change;				//use implicit conversion
		change = change * 100;			//multiplication

		int coins = change - dollars * 100;
		findCoins(coins, quarters, dimes, nickels, pennies);

		printChange(dollars, quarters, dimes, nickels, pennies);
		cout<<"Do you have another transaction?";
		cin>>answer;
	}
	cout<<"Thanks for shopping at Albertsons!"<<endl;
	return 0;
}

void printChange(int& dol, int& q, int& d, int& n, int& p)
{
	cout<<"dollars "<<dol<<endl;
	cout<<"quarters: "<<q<<endl;
	cout<<"dimes:  "<<d<<endl;
	cout<<"nickels: "<<n<<endl;
	cout<<"pennies: "<<p<<endl;
}
void findCoins(int& coins, int& quarters, int& dimes,
		int& nickels, int& pennies)
{
	quarters = coins/25;				//use implicit conversion
	dimes = coins % 25 / 10;			//use remainder division
	nickels = coins % 25 % 10 / 5;
	pennies = coins % 25 % 10 % 5;
}
