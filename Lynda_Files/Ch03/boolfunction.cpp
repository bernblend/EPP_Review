/*
	boolfunction.cpp
	June 22, 2017
	bernblend
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
 * display a message
 */
int number;
bool guess(int);   //signature or prototype guess()

int main()
{
	int usernum;
	srand(time(0));    //show me rand and put this.

	number = rand() % 50 + 1;  //now run rand() from 1-50.

	cout << "Guess a number between 1 and 50: " << endl;
	cin >> usernum;
	while(guess(usernum) != true)
	{
		cout << "Try again: " << endl;
		cin >> usernum;
	}
	cout << "You guessed it!!! " << endl;
	return 0;
}
bool guess(int num)      //guess() function defined
{
	if(num == number)
		return true;
	if(num > number)
		cout << "Too high " << endl;
	else
		cout << "Too low " << endl;

	return false;
}
