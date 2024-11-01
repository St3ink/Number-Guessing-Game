/*
Title: Number Guessing Game
File Name:RandGuessGame.cpp
Programmer: Kason Steiner
Date: 10/2024
Write a program that generates a random number and asks the user to guess what the number is. If the user’s guess is higher than the random number, the program should display “Too high, try again.” If the user’s guess is lower than the random number, the program should display “Too low, try again.” The program should use a loop that repeats until the user correctly guesses the random number.
*/  


#include <iostream>
#include <random>

using namespace std;
int main() { 

  int guess = 0;
  random_device myEngine;
  uniform_int_distribution<int> randomInt(1, 100);
  int answer = randomInt(myEngine);
  int tries = 0;

  while (guess != answer)
    {
      cout << "Guess a number between 1 and 100: ";
      cin >> guess;
      
      if(guess > answer)
        cout << "Too high, try again.\n";

     if(guess < answer)
        cout << "Too low, try again.\n";
      
          tries++;
    }    
  
  cout << "You got it in " << tries << " tries!";

return 0;
}