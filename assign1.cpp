/*
  This program deals with arrays.
*/



#include <iostream>
#include <iomanip> // Set width
#include <array> // For Array Class
#include <vector>  // For vectors
#include <cstdlib> // For Random Number
#include <ctime> // For Time
using namespace std;

// Array Size
const int arraySize = 10;

// Doubles Methods
int double1(int number);
void double2(int &number);
void double3(int *number);

// Triples Methods
void triple1(int array[], int size);
void triple2(array<int,arraySize> &array);
void triple3(vector<int> *array);

//Print Methods
void printArray1(int array[], int size, string name);
void printArray2(array<int,arraySize> array, string name);
void printArray3(vector <int> array, string name);


// Main Function
int main() {

    srand(time(0));

    int array1[arraySize]; // C-Style Array
    array<int, arraySize> array2; // Array Class
    vector<int> array3(arraySize); // Vector Class


    // Array 1
    for(int i = 0; i<arraySize;i++)
    {
        int num = 1 + (rand()%100);
        // Check to see if number is greater than or equal 50
        if (num >= 50)
            array1[i] = num;
        else
            i--;
    }// End For Loop

    // Array 2
    for(int i = 0; i<arraySize;i++)
    {
        int num = 1 + (rand()%100);
        // Check to see if number is greater than or equal 50
        if (num >= 50)
            array2[i] = num;
        else
            i--;
    }// End For Loop

    // Array 3
    for(int i = 0; i<arraySize;i++)
    {
        int num = 1 + (rand()%100);
        // Check to see if number is greater than or equal 50
        if (num >= 50)
            array3[i] = num;
        else
            i--;
    }// End For Loop


    // Array Copies
    int array1_copy[arraySize];
    array<int,arraySize> array2_copy;
    vector <int> array3_copy(arraySize);

    // Copy elements
    for(int i = 0; i<arraySize;i++)
    {
        array1_copy[i] = array1[i];
        array2_copy[i] = array2[i];
        array3_copy[i] = array3[i];
    }

    // Print Array
    printArray1(array1,arraySize,"array1:");
    printArray2(array2,"array2:");
    printArray3(array3,"array3:");

    cout << endl << "Arrays after passing them to a function to double each element in the arrays: \n\n";

    // Loop through array and double the number
    for(int i; i <arraySize;i++)
        array1[i] = double1(array1[i]);

    for(int &i: array2)
        double2(i);

    for(int &i: array3)
        double3(&i);

    // Print Array
    printArray1(array1,arraySize,"array1:");
    printArray2(array2,"array2:");
    printArray3(array3,"array3:");


    cout << endl << "Arrays after passing them to a function to triple each element in the arrays: \n\n";


    // Triple 1
    triple1(array1_copy,arraySize);

    // Triple 2
    triple2(array2_copy);

    // Triple 3
    triple3(&array3_copy);

    // Print Array
    printArray1(array1_copy,arraySize,"array1_copy:");
    printArray2(array2_copy,"array2_copy:");
    printArray3(array3_copy,"array3_copy:");


}// END MAIN



// Doubles Methods
int double1(int number)
{
    number *= 2;
    return number;
}// END double1

void double2(int &number)
{
    number *= 2;
}// END double2

void double3(int *number)
{
    *number *= 2;
}// END double3




// Triples Methods
void triple1(int array[], int size)
{
    for (int i = 0; i <= size;i++)
        array[i] *= 3;
}// END triple1

void triple2(array<int,arraySize> &array)
{
    for (int &i :array)
        i *= 3;
}// END triple2

void triple3(vector<int> *array)
{
    for (int &i: *array)
        i *= 3;
}// END triple3



//Print Methods
void printArray1(int array[], int size, string name)
{
    cout << setw(12) << name;
    for (int i = 0; i < size; i++)
        cout << setw(8) << array[i];
    cout << endl;
}// END printArray1

void printArray2(array<int,arraySize> array, string name)
{
    cout << setw(12) << name;
    for (int i : array)
        cout << setw(8) << i;
    cout << endl;
}// END printArray2

void printArray3(vector <int> array, string name)
{
    cout << setw(12) << name;
    for (int i : array)
        cout << setw(8) << i;
    cout << endl;
}// END printArray3
