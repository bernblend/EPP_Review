/*
This file will read from superbowl.txt and reorder them in the correct order.
The original order is from 50 - 1
After order should be 1 - 50
*/
#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>
#include <cstring>
using namespace std;

// String class is use to convert string to integer

string removeSpaces(string);


int main(int argc, char const *argv[]) {

// Variables for input and output files
string originalSBFile = "originalSBFile.txt";
string sortedSBFile = "sortedSBFile.txt";

int numOfSuperbowls = 100;

string* lines = new string[numOfSuperbowls];

string* dates = new string[numOfSuperbowls];
string* num = new string[numOfSuperbowls];
string* winningTeam = new string[numOfSuperbowls];
string* losingTeam = new string[numOfSuperbowls];
string* MVP = new string[numOfSuperbowls];
string* stadium = new string[numOfSuperbowls];
string* stadiumCity = new string[numOfSuperbowls];
string* stadiumState = new string[numOfSuperbowls];

/*int* winningTeamScore = new int[numOfSuperbowls];
int* losingTeamScore = new int[numOfSuperbowls];*/
string* winningTeamScore = new string[numOfSuperbowls];
string* losingTeamScore = new string[numOfSuperbowls];

/*
    To get each item in each line.
    Will have to get the line number and use in for loop to move through column
    Line Number: Row
    For loop Interator: Column
*/

// Input file
ifstream input;
input.open(originalSBFile.c_str());

int lineNumber = 0;
string line = "";

// Check if file is open
if (!input.is_open()) {
    cout << "Error  couldn\'t  open! ";
}else {
    //
    while (getline(input,line, '\n')) {
        if (line.size() > 1){
            line = removeSpaces(line);
            lines[lineNumber] = line;
            lineNumber++;
        }
    }
}
input.close();

    /*String reorder/reverse order*/
    string* newstrings = new string[numOfSuperbowls];
    int inc = 0;
   ofstream out(sortedSBFile.c_str());
    for(int i = lineNumber-1;i >= 0;i--){
        newstrings[inc] = lines[i];
       out << newstrings[inc] << endl;
        inc++;
    }
    for(int j=0; j<lineNumber-1; j++){
        cout << newstrings[j] << endl;
    }

return 0;
}


/*----------Remove Spaces Method-----------*/
// https://stackoverflow.com/questions/16329358/remove-spaces-from-a-string-in-c
string removeSpaces(string input)
{
input.erase(remove(input.begin(),input.end(),' '),input.end());
return input;
}
