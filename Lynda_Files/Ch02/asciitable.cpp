/*
asciitable.cpp
May 20, 2014
Peggy Fisher
*/
#include <iostream>
using namespace std;
int main()
{
	char temp;
	for(int num = 0; num < 128; num++)
	{
		temp = num;
		cout<<num<<" : "<<temp<<endl;
	}
return 0;
}
