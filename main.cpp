// ------------- FILE HEADER -------------
// Author ✅: August Fabbri
// Assignment ✅: 2
// Date ✅: 10/4/2025
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 2
// Participation ✅: 70 //did not fully complete because it felt redundant
// Challenge ✅: 70
// Labs ✅: 100


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅:yes
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char* argv[]) {
  int numCookies = 0;
  double numServings = 0;
  double numCalories = 0;

  const int cookiesPerServing = 5;
  const int caloriesPerCookie = 160;

  cout << "Welcome to my Oreo Calculator:)\n" << endl;
  cout << "How many Oreos have you eaten?(Whole numbers only pls)\n" << endl;

  cin >> numCookies;

  //Calculations
  numServings = static_cast<double>(numCookies)/5;
  numCalories = numCookies * 160;
  cout << fixed << setprecision(1);
  cout << "You ate " << numServings << " Serving of Oreos." << endl;
  cout << "You consumed " << numCalories << " calories.\n" << endl;
  cout << "Congrats!";


  




  return 0;
}



// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
DECLARE int numCookies

B. OUTPUT
DECLARE double numServings
DECLARE double numCalories

C. CALCULATIONS
numServings = numCookies/5  *remember to cast to a double to avoid integer division
numCalories = numCookies * 160


D. LOGIC and ALGORITHMS
const cookiesPerServing = 5
const caloriesPerCookie = 160

MESSAGE "Welcome to the Oreo Calculator!!"

MESSAGE "How many Oreos have you eaten?(Whole numbers only pls)"
INPUT numCookies

MESSAGE You ate (numServings) Servings of Oreos.
MESSAGE You ate (numCalories) Calories worth of Oreos.


SAMPLE RUNS
Welcome to my Oreo Calculator:)

How many Oreos have you eaten?(Whole numbers only pls)

100
You ate 20.0 Serving of Oreos.
You consumed 16000.0 calories.

Congrats!

*/
