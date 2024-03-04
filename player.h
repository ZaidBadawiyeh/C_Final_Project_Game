//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - player class header


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
class player
{
   private:
   static int const size_ = 25; //size of array holding trivia answers
   static int const sizePast = 5; // size of array holding previous players scores
   string name_input; //username of player
   string answers[size_]; // array for answer storage for printing at the end
   string past_players[sizePast]; // array for holding the past players ranking
   int healthScore; // amount of health remaining
   int coinScore; // amount of coins held by player
   int playerScore; // player score out of 100 (needs 70)
   
   public:
   player(); // default constructor
   player(string, string[], string[],int,int,int); // parameterized constructor
   string getNameInput();  // gets player name
   void setNameInput(string name_input); // sets the name input
   int getHealthScore(); // gets the current health score
   void setHealthScore(int health); // changes current health score
   int getCoins(); // get current coins in inventory
   void setCoins(int coins); // change current coins in inventory
   int getPlayerScore(); //get current player score
   void setPlayerScore(int score); //change the players score
};

