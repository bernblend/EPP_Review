/*
	asciitable.cpp
	June 22, 2017
	bernblend

	Prints number and corresponding ascii character.
*/
#include <iostream>
using namespace std;
int main()
{
	char temp;
	char a = 33;
	for(int num = 0; num < 128; num++)
	{
		temp = num;
		cout << num << " : " << temp << endl;
	}

	cout << a << endl;  //Prints exclamation at end.

	return 0;
}
