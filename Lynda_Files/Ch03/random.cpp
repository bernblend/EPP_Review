/*
 * random.cpp
 *
 *  Created on: May 15, 2014
 *      Author: Peggy Fisher
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	for(int i = 0;i<10;i++)
	{
		cout<<rand()<<endl;
	}
}
