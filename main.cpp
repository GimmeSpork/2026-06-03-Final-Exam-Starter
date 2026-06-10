/******************************************************************************
# Author:           Lucy P
# Lab:              Final Exam
# Date:             June 9, 2026
# Description:      prompt user for a how many miles they want to ride, then
#                   prompt user for how many miles they did ride for each day
#                   of the week. Calculate the total miles, and whether or not
#                   they met their goal, then output both solutions to the user.
# Output:           totalMiles, exceededBy, and missedBy as ints.
# Sources:          zybooks, assignment resources, given starter template.
#******************************************************************************/
#include <iostream>

using namespace std;

// Function prototypes   
void welcome();
void goodbye();
void getInput(int &goal);

int calcTotal();

// Start of main function
int main() {
  // Declare variables
  int goal = 0;
  int totalMiles = 0;
  int missedBy = 0;
  int exceededBy = 0;
  
  // Call welcome message
  welcome();
  
  // Call getInput and print error message
  getInput(goal);
  if (goal <= 0) {
    cout << "\nno miles were tracked this week." << endl;
    goodbye();
    return 0;
  }

  // Call calcTotal function, set totalMiles to the returned value
  totalMiles = calcTotal();
  cout << "\nYou rode " << totalMiles << " miles this week." << endl; // Print total miles
  if(totalMiles == goal) { // If goal is met
    cout << "Good job! You met your goal!" << endl;
  }else if(totalMiles > goal) { // If goal is exceeded
    exceededBy = totalMiles - goal;
    cout << "Great job! You exceeded your goal by " << exceededBy << " miles!" << endl;
  }else { // If goal is not met
    missedBy = goal - totalMiles;
    cout << "Uh oh! You missed your goal by " << missedBy << " miles!" << endl;
  }

  // call goodbye message
  goodbye();
  return 0;
}

// Function to get user input
void getInput(int &goal) {
  cout << "\nHow many miles do you want to ride this week?: ";
  cin >> goal;
}

// Function to calculate total miles
int calcTotal() {

  // Decalare variables
  int totalMiles = 0;
  int userInput = 0;
  int goal;

  // For loop for days of the week
  for(int i = 0; i <= 6; i++){
    switch(i) { // Cases for each day
      case 0:
        cout << "\nHow many miles did you ride on Sunday?: ";
        cin >> userInput;
          while(userInput < 0) { // While userInput is greater than 0
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Sunday?: ";
            cin >> userInput;
          }
        totalMiles += userInput; // Update totalMiles
      break;
      case 1:
        cout << "How many miles did you ride on Monday?: ";
        cin >> userInput;
          while (userInput < 0) { // While userInput is greater than 0
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Monday?: ";
            cin >> userInput;
          }
        totalMiles += userInput; // update totalMiles
      break;
      case 2:
        cout << "How many miles did you ride on Tuesday?: ";
        cin >> userInput;
          while (userInput < 0) { // While userInput is greater than 0
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Tuesday?: ";
            cin >> userInput;
          }
        totalMiles += userInput; // Update totalMiles
      break;
      case 3:
        cout << "How many miles did you ride on Wednesday?: ";
        cin >> userInput;
          while (userInput < 0) { // While userInput is greater than 0
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Wednesday?: ";
            cin >> userInput;
          }
        totalMiles += userInput; // update totalMiles
      break;
      case 4:
        cout << "How many miles did you ride on Thursday?: ";
        cin >> userInput;
          while (userInput < 0) { // While userInput is greater than 0
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Thursday?: ";
            cin >> userInput;
          }
        totalMiles += userInput; // Update totalMiles
      break;
      case 5:
        cout << "How many miles did you ride on Friday?: ";
        cin >> userInput;
          while (userInput < 0) { // While userInput is greater than 0
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Friday?: ";
            cin >> userInput;
          }
        totalMiles += userInput; // Update totalMiles
      break;
      case 6:
        cout << "How many miles did you ride on Saturday?: ";
        cin >> userInput;
          while (userInput < 0) { // While userInput is greater than 0
            cout << "Miles must be 0 or greater!" << endl;
            cout << "How many miles did you ride on Saturday?: ";
            cin >> userInput;
          }
        totalMiles += userInput; // Update totalMiles
      break;
    } 
  }

  return totalMiles;
}

// Welcome message
void welcome() {
  cout << "Welcome to my Miles Tracker Program!" << endl;
}

// Goodbye message
void goodbye() {
  cout << "\nKeep riding!" << endl;
}
