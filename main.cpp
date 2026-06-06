/******************************************************************************
# Author:           Lucy P
# Lab:              Assignment 9
# Date:             June 6, 2026
# Description:      prompt user for number of positive digits, and then the
#                   digits they want before calculating the max and minimum 
#                   number, in the position it appears. 
# Output:           min, max, minPosition, maxPosition as ints.
# Sources:          zybooks, assignment 9 resources, zoom recordings.
#******************************************************************************/
#include <iostream>

using namespace std;

// Function prototypes   
void welcome();
void goodbye();

// Prompt a user for the number of miles they want to 
// ride (walk, run, swim, whatever you want) this week. 
// This is their goal. 
// Implement and use this function to get the user's input.
// If the user enters 0 or less, print a message that
// no miles were tracked this week. 
// The message should be printed in 
// main() and not in the function.
void getInput(int &goal);


// In this function, use a for loop to prompt for the 
// number of miles ridden each day for a week. 
// Include the day of the week (Sunday, Monday, etc) in your prompts
// If the user enters a number less than 0, 
// print an error message and prompt for the same day again. 
// (See sample run tests below).
// After all of the days have been entered, 
// calculate and return the total miles for the week 
int calcTotal();

int main() {
  int goal = 0;
  welcome();
  
  getInput(goal);
  if (goal <= 0) {
    cout << "\nno miles were tracked this week." << endl;
  }

  calcTotal();

  goodbye();
  return 0;
}

// Function implementations (if any)
void getInput(int &goal) {
  cout << "\nHow many miles do you want to ride this week?: ";
  cin >> goal;
}

int calcTotal() {
  int totalMiles = 0;
  int userInput = 0;

  for(int i = 0; i <= 7; i++){
    switch(i) {
      case 0:
        cout << "\nHow many miles did you ride on Monday?: ";
        cin >> userInput;
          if(userInput < 0) {
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Monday?: ";
            cin >> userInput;
          }
        totalMiles += userInput;
      case 1:
        cout << "How many miles did you ride on Tuesday?: ";
        cin >> userInput;
          if(userInput < 0) {
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Tuesday?: ";
            cin >> userInput;
          }
        totalMiles += userInput;
      case 2:
        cout << "How many miles did you ride on Wednesday?: ";
        cin >> userInput;
          if(userInput < 0) {
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Wednesday?: ";
            cin >> userInput;
          }
        totalMiles += userInput;
      case 3:
        cout << "How many miles did you ride on Thursday?: ";
        cin >> userInput;
          if(userInput < 0) {
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Thursday?: ";
            cin >> userInput;
          }
        totalMiles += userInput;
      case 4:
        cout << "How many miles did you ride on Friday?: ";
        cin >> userInput;
          if(userInput < 0) {
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Friday?: ";
            cin >> userInput;
          }
        totalMiles += userInput;
      case 5:
        cout << "How many miles did you ride on Saturday?: ";
        cin >> userInput;
          if(userInput < 0) {
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Saturday?: ";
            cin >> userInput;
          }
        totalMiles += userInput;
      case 6:
        cout << "How many miles did you ride on Sunday?: ";
        cin >> userInput;
          if(userInput < 0) {
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Sunday?: ";
            cin >> userInput;
          }
        totalMiles += userInput;
    } 
  }

  return 0;
}

void welcome() {
  cout << "Welcome to my Miles Tracker Program!" << endl;
}

void goodbye() {
  cout << "\nThank you for using my program!" << endl;
}
