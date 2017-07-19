/*
  This file will read from superbowl.txt and reorder them in the correct order.
  The original order is from 50 - 1
  After order should be 1 - 50
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// String class is use to convert string to integer

string removeSpaces(string);


int main(int argc, char const *argv[]) {

  // Variables for input and output files
  string originalSBFile = "originalSBFile.txt";
  string sortedSBFile = "sortedSBFile.txt";

  int numOfSuperbowls = 50;

  string* lines = new string[numOfSuperbowls];

  string* dates = new string[numOfSuperbowls];
  string* num = new string[numOfSuperbowls];
  string* winningTeam = new string[numOfSuperbowls];
  string* losingTeam = new string[numOfSuperbowls];
  string* MVP = new string[numOfSuperbowls];
  string* stadium = new string[numOfSuperbowls];
  string* stadiumCity = new string[numOfSuperbowls];
  string* stadiumState = new string[numOfSuperbowls];

  int* winningTeamScore = new int[numOfSuperbowls];
  int* losingTeamScore = new int[numOfSuperbowls];

  /*
    To get each item in each line.
    Will have to get the line number and use in for loop to move through column
    Line Number: Row
    For loop Interator: Column
  */

  // Input file
  ifstream input;
  input.open(originalSBFile);

  int lineNumber = 0;
  string line;

  // Check if file is open
  if (!input.is_open()) {
    cout << "Error couldn\'t open!";
    exit(1);
  }else {
    //

    while (getline(input,line)) {
      line = removeSpaces(line);
      line = removeSpaces(line);
      lines[lineNumber] = line;
      cout << line << endl << endl;
      lineNumber++;
    }
  }
  input.close();

  /*

  for(int i = 0;i < numOfSuperbowls;i++){
    cout << lines[i] << endl;
    char* lineToChar = new char[lines[i].length() + 1];
    char* word = new char[30];
    strcpy(lineToChar,lines[i].c_str());
    //cout << lines[i] << endl;
    // for (int counter = 0; counter < lines[i].length() + 1; counter++) {
    //   if (counter > 0) {
    //     if (lineToChar[counter] == '\t') {
    //       //cout << lineToChar[counter];
    //       //std::cout << "tab" << '\n';
    //     }else{
    //       //cout << word[counter];
    //       word[counter] = lineToChar[counter];
    //     }
    //   }
    //   else {
    //     //cout << word[counter] << endl;
    //     word[counter] = lineToChar[counter];
    //   }
    // }

    // for(int j = 0;j <10;j++){
    //   switch (j) {
    //     case 0:
    //       dates[i] = lines[j]
    //       break;
    //     case 1:
    //       num[i] = lines[j];
    //       break;
    //     case 2:
    //       winningTeam[i] = lines[j];
    //       break;
    //     case 3:
    //       winningTeamScore[i] = lines[j];
    //       break;
    //     case 4:
    //       losingTeam[i] = lines[j];
    //       break;
    //     case 5:
    //       losingTeamScore[i] = lines[j];
    //       break;
    //     case 6:
    //       MVP[i] = lines[j];
    //       break;
    //     case 7:
    //       stadium[i] = lines[j];
    //       break;
    //     case 8:
    //       stadiumCity[i] = lines[j];
    //       break;
    //     case 9:
    //       stadiumState[i] = lines[j];
    //       break;
    //       default:
    //       break;
    //   }
    // }
  }

  */

  return 0;
}


/*----------Remove Spaces Method-----------*/
// https://stackoverflow.com/questions/16329358/remove-spaces-from-a-string-in-c
string removeSpaces(string input)
{
  input.erase(std::remove(input.begin(),input.end(),' '),input.end());
  return input;
}
