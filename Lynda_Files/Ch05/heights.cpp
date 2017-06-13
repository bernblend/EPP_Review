/*
arrays.cpp
May 22, 2014
Peggy Fisher
*/
#include <iostream>
#include <string>
using namespace std;

void getHeights(double[], int);
double findAverage(double[], int);
double findTallest(double[], int);

int main()
{
	double heights[10];
	getHeights(heights, 10);
	cout<<"The average height of all students is: "
			<<findAverage(heights, 10)<<" inches"<<endl;
	cout<<"The tallest students is: "
				<<findTallest(heights, 10)<<" inches"<<endl;

	return 0;
}
void getHeights(double h[], int size)
{
	for(int i = 0; i<size; i++)
	{
		cout<<"Enter student height in inches: \n";
		cin>>h[i];
	}
}
double findAverage(double h[], int size)
{
	int count = 0;
	double total = 0;
	for(int i = 0; i<size; i++)
		{
			count++;
			total += h[i];
		}
	return total/count;
}
double findTallest(double h[], int size)
{
	double tallest = h[0];
	for(int i = 1; i<size; i++)
	{
		if(h[i] > tallest)
		{
			tallest = h[i];
		}
	}
	return tallest;
}
