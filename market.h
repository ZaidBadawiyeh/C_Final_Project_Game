//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - market class header

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
class Market
{
private:
static int const size_= 50;
int begin_potion_stock_health;//starting num of health potion
int begin_potion_stock_money;//starting num of money potion
int begin_potion_stock_cheating;//starting num of cheating potion
int begin_potion_stock_random;//starting num of random potion
int potion_catalogue[size_]; //this should include the potion affect? feel free to edit
 
public://public class functions
Market();
Market(int,int,int,int,int[]);
int getNumHealth();
void setNumHealth(int healthStock);
int getNumMoney();
void setNumMoney(int coinStock);
int getNumCheat();
void setNumCheat(int cheatingStock);
int getNumRandom();
void setNumRandom(int randomStock);
int getPotionEffect();
};
