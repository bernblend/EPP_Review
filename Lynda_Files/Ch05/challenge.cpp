/*
challenge.cpp
May 23, 2014
Peggy Fisher
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string menuItems[] = {"Hot Dogs", "Hamburgers", "Turkey Burgers",
			"Salad"};
	double prices[] = {1.50, 3.00, 3.00, 4.00};
	int choice, quantity;
	do{
	cout<<"Choose an item from the menu: "<<endl;

	for (int i = 0; i < 4; i++)
	{
		cout<<i+1<<" ";
		cout<<setw(20)<<fixed<<setprecision(2)<<left;
		cout<<menuItems[i]<<prices[i]<<endl;
	};
	cout<<"5 Exit\n";
	cin>>choice;
	if(choice == 5)
		break;
	cout<<"How many? ";
	cin>>quantity;
	cout<<"Your total cost is: $"<<quantity * prices[choice-1]<<endl<<endl;
	}	while(choice != 5);
return 0;
}
