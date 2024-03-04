//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - challenges class implementation




///trivia array is the answers only


#include "challenges.h"
Challenges::Challenges() // default constructor
{
 begin_score = 0; // again not sure
for(int i =0; i< size_; i++) // loop to make every index of trivia array empty
    { 
     Trivia[i] = "";
    }
for(int i =0; i< asize_; i++) // loop to make every index of ambush array empty
    { 
    Ambush[i] = "";
    }

}
Challenges::Challenges(int score, string trivArr[],string ambushArr[]) // parameterized constructor
{
 begin_score = score; 
 for(int i =0; i< size_; i++)
    { 
    Trivia[i] = trivArr[i];
    }
for(int i =0; i< asize_; i++)
    { 
    Ambush[i] = ambushArr[i];
    }
}
string Challenges::getTrivia()
{
    for (int i = 0; i <= size_; i++) // loops through trivia question and returns the answers
    {
    return Trivia[i]; 
    }
    return 0;
}


int Challenges::getScore() // returns score
{
    return begin_score;
}
void Challenges::setScore(int score) // sets score == begin_score
{
 begin_score = score;
}
string Challenges::getAmbush()
{
 for(int i =0; i< asize_; i++) // loop through and return each index of ambush trivia array
    { 
    return Ambush[i];
    }
    return 0;
}
void Challenges::setAmbush(string ambushArr[]) // change trivia??
{
  for(int i =0; i< asize_; i++)
    { 
    Ambush[i] = ambushArr[i];
    }
}
