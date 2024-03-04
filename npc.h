//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - npc header class

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
class NPC
{
private:
int begin_health;
string visualHolder;
 
public:
NPC();
NPC(int,string);
int getHealth();
void setHealth(int health);
string getVisuals();
void setVisuals(string visualTemp);
};
