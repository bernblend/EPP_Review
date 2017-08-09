/*
 1. Write a complete C++ program that takes the judges’ scores for a gymnastic event and finds each
 contestant’s score. It should satisfy all the following specifications: it first reads in an integer N that
 gives the number of judges. It then reads in a contestant number followed by N integers which are the
 scores given the contestant by the N judges. The scores should be read into an array, and then the
 program calls a function called findAverageScore that takes N and the array of judges’ scores as
 arguments. The function should find and drop the highest score and the lowest score, and then find
 and return the average of the remaining N-2 scores. The main should then print the contestant
 number and the average score s/he receives for the event to the screen. It will continue to do this
 (read in the contestant number, then the N integers, then print the contestant number and the
 calculated score on a new line) until a negative value is entered for the contestant number. The
 program will then print the contestant number who scored the highest. (You may assume no ties will
 occur.) All input will be from the keyboard and you may also assume that N will never be greater than
 10 and never less than 3. You may format the output in any way as long as it is readable and
 correct, and you may assume all inputs are correct. (JUST WRITE CODE; NO
 DOCUMENTATION REQUIRED except for your NAME and ID at the start of the file!)

 Name your program prob1.cpp. Submit it to the EPP - Problem 1 section on the class Titanium site. If
 you wrote more than one file containing code, make sure to send and copy them as well. Remember to
 put in your name and ID at the start of each file.
 Sample output screen for a session (Bold numbers are printed by the program; normal numbers are
 typed in by the user.)

 Number of Judges: 5
 34 7 5 3 7 6
 Contestant 34 6
 28 8 5 8 10 7
 Contestant 28 7.666666667
 3 5 5 3 4 4
 Contestant 3 4.333333333
 −1
 Contestant 28 had the highest score.
 <program ends>

*/

#include <iostream>
#include <string>
using namespace std;

double findAverageScore(int* array,int size);
void input();

int main() {
    input();
    return 0;
}

void input() {
    // Variable for the number of judges
    int numOfJudges;

    // Print out to the console the number of judges
    cout << "Number of Judges: ";
    // Get keyboard input
    cin >> numOfJudges;


    // Scores array
    int scores[numOfJudges];
    int index = 0;
    bool valid = true;

    // Averages array
    double averages[10];
    // Contestants array
    int contestants[10];


    // Set each array element to 0
    for (int i = 0; i < 10; i++) {
        averages[i] = 0.0;
        contestants[i] = 0;
    }



    while (valid) {
        // Get user
        int contestant;
        // Get contestant number from keyboard
        cin >> contestant;

        // If user inputs a number less than 0 exit program
        if (contestant < 0) {
            valid = false;
            break;
        }
        // If user input a valid input run the rest of the program
        else {

            // Add contestant to array
            contestants[index] = contestant;

            // Add scores to array
            for (int i = 0; i < numOfJudges; i++) {
                cin >> scores[i];
            }

            // Get average scores for each contestant
            double average = findAverageScore(scores,numOfJudges);

            // Add averages to averages array
            averages[index] = average;

            // Print Contestant number and average to console
            printf("Contestant %i %f\n", contestant, average);

            // Iterate index + 1
            index++;

            // Set valid to true if not true
            // Should always be true if inside this control statement
            valid = true;
        }
    }
    // Variables to find contestant with highest score
    double highest = 0;
    int highestContestant = 0;
    // Search through averages array to find index of highest average
    for (int i = 0; i < 10; i++) {
        if (highest <= averages[i]) {
            highest = averages[i];
            highestContestant = contestants[i];
        }
    }
    // Print contestant with highest score
    printf("Contestant %i had the highest score.\n",highestContestant);
} // End main


// Find the average score of the judges functions
double findAverageScore(int *array,int size){
    // variables
    double total = 0;
    int highest = 0;
    int lowest = 10;
    // Iterate through array of scores and find the highest number and lowest number
    for (int i = 0; i < size; i++) {
        // Find highest number
        if (highest < array[i]) {
            highest = array[i];
        }
        // Find lowest number
        if (lowest > array[i]) {
            lowest = array[i];
        }
    }
    // Remove highest and lowest and get total
    for (int i = 0; i < size; i++)
    {
        // Remove highest number
        if (highest == array[i])
        {
            array[i] = 0;
            highest = 0;
        }
        // Remove lowest number
        if (lowest == array[i]){
            array[i] = 0;
            lowest = 0;
        }
        // Add up total amount
        total += array[i];
    }
    // Return average score
    return total/(size-2);
}
