//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - player class implementation

#include "player.h"
player::player()
{
    name_input= ""; //sets the initial name to empty string
    for(int i =0; i< size_; i++) //loop to go through every element in the answers array
    { 
    answers[i] = ""; // array for riddle answers starts empty
    }
    for(int i =0; i<sizePast; i++) // loop to go through every element in the past players array
    { 
    past_players[i] = "";
    }
healthScore = 100; // health score starts at 100
coinScore = 0; // coins start at 0
playerScore = 0;  // player score starts at 0
}
player::player(string name, string answerArr[],string pastArr[], int health, int coins, int score) // parameterized constructor
{
 name_input = name; // set name ==
 for(int i =0; i< size_; i++) // set answer arrays ==
    { 
    answers[i] = answerArr[i]; 
    }
for(int i =0; i< sizePast; i++)
    { 
    past_players[i] = pastArr[i];
    }

}
string player::getNameInput()
{
 return name_input; //get the users name
}
void player::setNameInput(string name)
{
 name_input = name; // change the users name
}
int player::getHealthScore()
{
 return healthScore; // get the health score for player
}
void player::setHealthScore(int health)
{
 healthScore = health; // change the health score for player
}
int player::getCoins()
{
 return coinScore; // get the coins in player inventory
}
void player::setCoins(int coins)
{
 coinScore = coins; // change the coins in player inventory
}
int player::getPlayerScore()
{
 return playerScore; // get the current player score
}
void player::setPlayerScore(int score)
{
  playerScore = score; // change the current player score
}
