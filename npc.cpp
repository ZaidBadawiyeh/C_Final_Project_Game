//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - npc class implementation

#include "npc.h"
 
NPC::NPC()
{
 int begin_health = 100;
 string visualHolder = "";
}
NPC::NPC(int npcHealth,string visual)
{
 begin_health = npcHealth;
 visualHolder = visual;
}
int NPC::getHealth()
{
 return begin_health;
}
void NPC::setHealth( int health)
{
 begin_health = health;
}
string NPC::getVisuals()
{
    return visualHolder;
}
void NPC::setVisuals(string visual)
{
  visualHolder = visual;
}
