/*
errorhandling.cpp
May 23, 2014
Peggy Fisher
*/
#include <iostream>
using namespace std;
int main()
{
	int errorcode= 10;
	int numerator;
	int denominator;
	do{
	cout<<"Enter numerator: ";
	cin>>numerator;
	cout<<"Enter denominator: ";
	cin>>denominator;
	try
	{
		if(denominator == 0)
			throw errorcode;
		else
			cout<<"The ratio is: "<<numerator/denominator<<endl;
	}
	catch(int error)
	{
		if(error == errorcode)
		{
			cout<<"\nDivide by zero error!! \n ";
		}
	}
	}while(denominator != 0);
return 0;
}
