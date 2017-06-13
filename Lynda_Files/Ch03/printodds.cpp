/*
 * printodds.cpp
 *
 *  Created on: May 13, 2014
 *      Author: Peggy Fisher
 */

#include <iostream>
using namespace std;
int main()
{

	for(int num = 1; num <= 100; num++)
	{
		if(num %2 != 0)
			cout<<num<<endl;
	}
}
