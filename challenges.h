//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - challenges class header

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
class Challenges
{
private:
int begin_score; // what is this score for i dont know ------------------------------------------------------------
static const int size_ = 25;// size of trivia array 
static const int asize_ = 10; // size of ambush array
string Trivia[size_]; // holds trivia answers
string Ambush[asize_];// holds ambush trivia answer
public:
Challenges(); // default constructor
Challenges(int,string[],string[]); // parameterized constructor
string getTrivia(); // gets the trivia answer
int getScore(); //gets score value of challenge room (this may be wrong)
void setScore(int score); // changes score value
string getAmbush(); // gets ambush trivia answers
void setAmbush(string AmbushArr[]); // alter the challenge answers (the ambush functions may be wrong too)
};
