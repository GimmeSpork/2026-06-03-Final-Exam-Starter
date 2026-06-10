/******************************************************************************
# Author:           Lucy P
# Lab:              Final Exam
# Date:             June 9, 2026
# Description:      prompt user for how many miles they want to ride, then
#                   prompt user for how many miles they did ride for each day
#                   of the week. Calculate the total miles, and whether or not
#                   they met their goal, then output both solutions to the user.
# Output:           totalMiles, exceededBy, and missedBy as ints.
# Sources:          zybooks, assignment resources, given starter template.
#******************************************************************************/
#include <iostream>
#include <limits>
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
  cout << endl;
}

// Function to calculate total miles
int calcTotal() {

  // Decalare variables
  string userPrompt;

  int totalMiles = 0;
  int userInput = 0;
  int goal;


  // For loop for days of the week
  for(int i = 0; i <= 6; i++){
    switch(i) { // Cases for each day
      case 0:
        userPrompt = "How many miles did you ride on Sunday?: ";
        break;
      case 1:
        userPrompt = "How many miles did you ride on Monday?: ";
        break;
      case 2:
        userPrompt = "How many miles did you ride on Tuesday?: ";
        break;
      case 3:
        userPrompt = "How many miles did you ride on Wednesday?: ";
        break;
      case 4:
        userPrompt = "How many miles did you ride on Thursday?: ";
        break;
      case 5:
        userPrompt = "How many miles did you ride on Friday?: ";
        break;
      case 6:
        userPrompt = "How many miles did you ride on Saturday?: ";
        break;
    }
    cout << userPrompt;
    cin >> userInput;
    
    // Input validation for proper miles
    while(!cin || userInput < 0) {
      cout << "Miles must be 0 or greater!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << userPrompt;
      cin >> userInput;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    totalMiles += userInput;
  }

  return totalMiles; // Return the total miles
}

// Welcome message
void welcome() {
  cout << "Welcome to my Miles Tracker Program!" << endl;
}

// Goodbye message
void goodbye() {
  cout << "\nKeep riding!" << endl;
}
