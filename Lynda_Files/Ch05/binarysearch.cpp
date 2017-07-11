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
	for(int i = 0; i<10; i++)
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
		cout << "index is the lowest value : " << index << endl;
		cout << "j says now I'm: " << j << endl;
		for(int k = j; k < 10; k++)
		{
			cout << "  index is the lowest value: " << index << endl;
			cout << "  j is element we are setting: " << j << endl;
			cout << "  k will now check element: " << k << endl;

			cout << "    if (nums[index] > nums[k]) " << endl;

			if(nums[index] > nums[k]) //1st run: k=1 && index=0
			{

				index = k;   //1st run: k=1 && index=1
				cout << "        index set from k (new lowest): " << index << endl;
				cout << "        j stays the same: " << j << endl;
				cout << "        k gave value to index: " << k << endl;
			}  //1st run: k=1 && index=1 && j=0
		}

		cout << "          index after for b4 temp: " << index << endl;
		cout << "          j after for b4 temp: " << j << endl;

		int temp = nums[j];    // j runs thru 0 - 9
		cout << "            index after temp set: " << index << endl;
		cout << "            j after temp set: " << j << endl;
		cout << "            temp after temp set: " << index << endl;
		nums[j] = nums[index];  //value of index & j switch.
		cout << "              index after index to j: " << index << endl;
		cout << "              j after index to j: " << j << endl;
		cout << "              temp after index to j: " << index << endl;
		nums[index] = temp; //switch first element with index.
		cout << "                index after temp to index: " << index << endl;
		cout << "                j after temp to index: " << j << endl;
		cout << "                temp after temp to index: " << index << endl;
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
