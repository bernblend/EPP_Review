/*
	random.cpp
  June 23, 2017
	bernblend
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(0));

	cout << setw(15) << right << "Column 1" << setw(15) << right << "Column 2" << endl;

	for(int i = 0;i < 10;i++)
	{
		cout << setw(15) << right << rand() << setw(15) << right << rand() << endl;
	}
}
