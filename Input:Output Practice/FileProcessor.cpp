// File Input
#include <fstream>
#include <iostream>

// To use the getline method ad stoi method
#include <string>
using namespace std;

void getNumbers();
void practiceMet();
void randomText();

/*
    Add methods above to main method to run program
        - The methods are implemented below
        - One method read data from a file
        - One method input data into a file
        - The other method uses both
 */

int main() {
    practiceMet();
}


void practiceMet() {
    ofstream output;
    output.open("testFile.txt");
    
    output << "Hello World!" << endl;
    output << "Hello there!" << endl;
    output << "Hello again!" << endl;
    
    output.close();
    
    ifstream input;
    input.open("testFile.txt");
    
    string line;
    
    while (getline(input,line)) {
        cout << line << endl;
    }
}


/*
 Question 2
    Create (outside of a .cpp file), a text file with a sequence of 5 numbers. 
    Create a 5 integer array within a .cpp file, open the text file, and then assign the array to the numbers within the file.
    Change the values of those variables, and then override the values originally within the file with the new values.

*/

void getNumbers() {
    ifstream input;
    input.open("numbers.txt");
    
    string line;
    int array[5];
    int i = 0;
    
    while (getline(input,line)) {
        array[i] = stoi(line);
        i++;
    }
    
    input.close();
    
    ofstream output;
    output.open("numbers.txt");
    
    
    for (int j = 0; j < 5; j++) {
        array[j] *= 2;
        output << array[j] << endl;
        cout << array[j] << endl;
    }
    output.close();
    
}

/*
 Question 3
    Create (outside of a .cpp file), a text file with at least 4 lines of random text. 
    Modify each odd numbered line at the beginning with “I am odd ” and each even numbered line at the beginning with “I am not ”.
*/


void randomText(){
    ifstream input;
    input.open("randomText.txt");
    
    string ln;
    int lineNumber = 0;
    
    while (getline(input,ln)) {
        lineNumber++;
    }
    
    input.close();
    
    string *line = new string[lineNumber];
    string *lineCopy = new string[lineNumber];
    
    lineNumber = 0;
    
    input.open("randomText.txt");
    
    while (getline(input,ln)) {
        line[lineNumber] = ln;
        lineCopy[lineNumber] = ln;
        lineNumber++;
    }
    
    input.close();
    
    // Statistic Professor: Edward Pineda
    
    ofstream output;
    output.open("randomText1.txt");
    
    for (int i = 0; i < lineNumber; i++) {
        if(i%2 == 0) {
            line[i] = "I am odd\t" + lineCopy[i];
        }else {
            line[i] = "I am not\t" + lineCopy[i];
        }
        
        output << line[i] << endl;
    }
    
    output.close();
    
}

