/*
	binarysearch.cpp
	June 5, 2017
	bernblend
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool search(int[], int, int);

int main()
{
	srand(time(0));
	int nums[10];
	for(int i = 0;i<10;i++)
	{
		nums[i] = rand() % 100 + 1;
	}
	cout << "Array before sort" << endl;
		for(int i = 0; i < 10; i++)
			cout << nums[i] << " "; //allows #'s on one line.
		cout << endl;    //this is the actual end of the line.

	//sort the array using a selection sort
	for(int j = 0; j < 10; j++)
	{
		int index = j;
		cout << "index before for: " << index << endl;
		cout << "j before for: " << j << endl;
		for(int k = j; k < 10; k++)
		{
			cout << "index inside for: " << index << endl;
			cout << "j inside for: " << j << endl;
			cout << "k inside for: " << k << endl;
			if(nums[index] > nums[k]) //1st run: k=1 && index=0
			{
				cout << "index inside if b4: " << index << endl;
				cout << "j inside if b4: " << j << endl;
				cout << "k inside if b4: " << k << endl;
				index = k;   //1st run: k=1 && index=1
				cout << "index inside if after: " << index << endl;
				cout << "j inside if after: " << j << endl;
				cout << "k inside for after: " << k << endl;
			}  //1st run: k=1 && index=1 && j=0
		}

		cout << "index after for: " << index << endl;
		cout << "j after for: " << j << endl;

		int temp = nums[j];
		nums[j] = nums[index];
		nums[index] = temp;
	}
	cout << "Array after sort" << endl;
	for(int i = 0; i < 10; i++)
		cout << nums[i] << " ";  //allows #'s on one line.
	cout << endl;     //this is the actual end of the line.

	int value;
		cout << "Enter a number between 1 and 100: " << endl;
		cin >> value;

	if(search(nums, 10, value)== true)
	{
		cout << "Value " << value << " was found\n";
	}
	else
	{
		cout << "Value " << value << " was not found\n";
	}
}
bool search(int numbers[], int size, int value)
{
	//to use a binary search, the array must
	//already be in sorted order
	bool found = false;
	int low = 0;
	int high = size - 1;
	int pos = 0;
	while(low <= high && !found)
	{
		pos = (low + high)/2;
		if(numbers[pos] == value)
		{
			found = true;
		}
		else if(numbers[pos] < value)
			{
				low = pos+1;
			}
			else
			{
				high = pos - 1;
			}
	}
	return found;
}
