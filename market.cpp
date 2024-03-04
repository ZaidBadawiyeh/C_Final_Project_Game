//CSCI1300 Fall 2022
//Author: Zaid Badawiyeh and Will James
//Recitation: Enora Rice
//Project 3 - market class implementation


//potion catalouge is the potion type (as number) and effect (as number)
//will have to do lots with split for this
// not sure if file reading should be implemented here or in driver

#include "market.h"
Market::Market()
{
 begin_potion_stock_health = 0;
 begin_potion_stock_money = 0;
 begin_potion_stock_cheating = 0;
 begin_potion_stock_random = 0;
 for(int i =0; i< size_; i++)
    { 
    potion_catalogue[i] = 0;
    }
}
Market::Market(int healthStock,int coinStock,int cheatingStock,int randomStock, int catalog[])
{
 begin_potion_stock_health = healthStock;
 begin_potion_stock_money = coinStock;
 begin_potion_stock_cheating = cheatingStock;
 begin_potion_stock_random = randomStock;
 for(int i =0; i< size_; i++)
    { 
    potion_catalogue[i] = catalog[i];
    }
}
int Market::getNumHealth()
{
 return begin_potion_stock_health;
}
void Market::setNumHealth(int healthStock)
{
 begin_potion_stock_health = healthStock;
}
int Market::getNumMoney()
{
 return begin_potion_stock_money;
}
void Market::setNumMoney(int coinStock)
{
 begin_potion_stock_money = coinStock;
}
int Market::getNumCheat()
{
 return begin_potion_stock_cheating;
}
void Market::setNumCheat(int cheatingStock)
{
 begin_potion_stock_cheating = cheatingStock;
}
int Market::getNumRandom()
{
 return begin_potion_stock_random;
}
void Market::setNumRandom(int randomStock)
{
  begin_potion_stock_random = randomStock;
}
int Market::getPotionEffect()
{
    for(int i =0; i<size_; i++)
    { 
     return potion_catalogue[i];
    }
 return 0; 
}
