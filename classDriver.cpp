#include "challenges.h"
#include "market.h"
#include "npc.h"
#include "player.h"
#include <iostream>
#include <fstream>
#include <string>


int main()
{
    int playerHealth= 100;
    int playerScore= 0;
    int playerMoney = 25;
    int mainMenu;
    int menu;
    int merchInput;
    int tomDifficulty = 100;
    int randPotion;
    int continues;
    int continues1;
    int continues2;
    int pmazeReward = 0;
    int practiceRoomChoice;
    int practiceMazecontinue;
    int project1Choice;
    int fuckshitfuck;
    string practicemazeArray[] = {"3","2","1","1","3"};
    string project1mazeArray[] = {"2","1","3","3","2"};
    string project1mazeArray22[]= {"3","1","2","1","3"};
    string pmazeGuess1;
    string projectMazeGuess;
    int trivia;
    int shit;
    int coinscounter;

    int j = 1;
    int i = 0;
    string inputName;
    while (playerScore<70){
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "Welcome to CSCI 1300" << endl;
    cout << "The premise of this game is quite simple, survive the class by passing with a score of 70 or higher" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Visit the merchant to purchase potions that help you along your journey" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Each room represents a challenge and holds a monster, monster difficulty" << endl << "level determines what the passing rate for each room is" << endl;
    cout << "and the damage to player health incurred from failing" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Visit the practice room for no penalty exercises and move on as you feel comfortable." << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Coins can be found by engaging with NPC's and Side quests in the challenge rooms" << endl;
    cout << "Press 1 to continue" << endl;
    cin >> continues;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Remember to continously note your money, health, and score throughout the game." << endl << "Failing to pay attention can result in an untimely death" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Now enter your player name, this will populate the leaderboards for later so choose a fun alias" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cin >> inputName;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Welcome " << inputName << endl;
    cout << "Press 1 to continue to the main menu and 2 to quit the program" << endl;
    cin >> mainMenu;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    if (mainMenu == 1)
    {
    
    
    while (menu != 8 || playerScore < 70){
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "======= Here is your current scoreboard =======" << endl;
    cout << "Player Score: " << playerScore << "%" << endl;
    cout << "Player Health: " << playerHealth << endl;
    cout << "Player Money: " << playerMoney << endl;
    cout << "Final Boss Difficulty: " << tomDifficulty << "%" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                                         " << endl;
    cout << "======Main Menu=====" << endl;
    cout << "1. Reread Instructions" << endl;
    cout << "2. Merchant Store" << endl;
    cout << "3. Practice Room" << endl;
    cout << "4. Project 1 (Lvl 1)" << endl;
    cout << "5. Project 2 (Lvl 2)" << endl;
    cout << "6. Exam 1 (Lvl 3)" << endl;
    cout << "7. Final Exam (Lvl 4/Boss)" << endl;
    cout << "8. Quit" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Now, enter your choice" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cin >> menu;
    switch(menu)
    {
                case 1:
                {
                    cout << "                                                                                                         " << endl;
                    cout << "                                                                                                         " << endl;
                    cout << "                                                                                                         " << endl;
                    cout << "The premise of this game is quite simple, survive the class by passing with a score of 70 or higher" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "Visit the merchant to purchase potions that help you along your journey" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "Each room represents a challenge and holds a monster, monster difficulty" << endl << "level determines what the passing rate for each room is" << endl;
                    cout << "and the damage to player health incurred from failing" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "Visit the practice room for no penalty exercises and move on as you feel comfortable." << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "Coins can be found by engaging with NPC's and Side quests in the challenge rooms" << endl;
                    cout << "Press 1 to continue" << endl;
                    cout << "                                                                                                         " << endl;
                    cin >> continues;
                break;
                }
                case 2:
                {
                    cout << "                                                                                                         " << endl;
                    cout << "                                                                                                         " << endl;
                    cout << "                                                                                                         " << endl;
                    cout << "Welcome to the merchant!!" << endl;
                    cout << "Find my inventory and prices below, to select something press the number associated with the item." << endl;
                    cout << "Potions cost gold coins and can help with your health and player scores, as well as monster difficulty," << endl << "take a look around..." << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << "                                                                                                         " << endl;
                    cout << "                                                                                                         " << endl;
                    cout << "                                                                                                         " << endl;
                    do {
                        cout << "                                                                                                         " << endl;
                        cout << "                                                                                                         " << endl;
                        cout << "======Merchant Menu=====" << endl;
                        cout << "1. Health Potion (15 gold coins) || Increases Health by 10" << endl;
                        cout << "2. Score Potion (25 gold coins) || Increases Score by 10" << endl;
                        cout << "3. Monster Potion (10 gold coins) || Decreases final boss difficulty by 10" << endl;
                        cout << "4. Potion of chance (5 gold coins) || Can affect Health, Score, and Difficulty" << endl << "                                      positively or negatively (take your chances)" << endl;
                        cout << "5. Exit merchant" << endl;
                        cout << "---------------------------------------------------------------------------------------" << endl;
                        cout << "---------------------------------------------------------------------------------------" << endl;
                        cout << "                                                                                                         " << endl;
                        cout << "Enter your choice" << endl;
                        cin >> merchInput;
                        if (merchInput == 1)
                        {
                            if (playerMoney >= 15)
                            {
                            playerHealth +=10;
                            playerMoney -= 15;
                            cout << "Effect: Player Health +10" << endl;
                            cout << "Effect: Player Money -15" << endl;
                            }
                            else{ 
                               
                                cout << "not enough money, sorry!" << endl;}
                        }
                        else if (merchInput == 2)
                        {
                            if (playerMoney >= 25)
                            {
                            playerScore +=10;
                            playerMoney -= 25;
                            cout << "Effect: Player Score +10" << endl;
                            cout << "Effect: Player Money -25" << endl;
                            }
                            else{ cout << "not enough money, sorry!" << endl;}
                        }
                        else if (merchInput == 3)
                        {
                            if (playerMoney >= 10)
                            {
                            tomDifficulty -=10;
                            playerMoney -= 10;
                            cout << "Effect: Final Boss Difficulty -10" << endl;
                            cout << "Effect: Player Money -10" << endl;
                            }
                            else{ cout << "not enough money, sorry!" << endl;}
                        }
                        else if (merchInput == 4)
                        {
                            if (playerMoney >= 5)
                            {
                            cout << "enter a number (1-3)" << endl;
                            cin >> randPotion;
                            playerMoney -= 5;
                            switch (randPotion)
                            {
                            case 1:
                                playerScore += 20;
                                cout << "Random effect: Player Score +20" << endl;
                                break;
                            case 2:
                                playerHealth -= 25;
                                cout << "Random effect: Player Health -25" << endl;
                                break;
                            case 3:
                                tomDifficulty += 2;
                                cout << "Random effect: Final Boss Difficulty +2" << endl;
                                break;
                            }
                            }
                            else{ cout << "not enough money, sorry!" << endl;}
                        }
                        else {
                            cout << "Please enter a valid input" << endl;
                        }

                    }
                    while (merchInput != 5);
                    break;
                }
                case 3:
                {
                    do{
                    cout<< "There are three types of challenges you may encounter" << endl;
                    cout<< "Hidden treasures are more likely to appear in side quests" << endl << "however, they don't help your completion score" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout<< "1. Side quest patterns" << endl;
                    cout<< "2. C++ Trivia" << endl;
                    cout<< "3. General Trivia" << endl;
                    cout<< "4. Leave Practice Room" << endl;
                    cout << "---------------------------------------------------------------------------------------" << endl;
                    cout << " " << endl;
                    cout << "Choose what you'd like to begin practicing" << endl;
                    cin >> practiceRoomChoice;
                    
                        switch (practiceRoomChoice)
                        {

                                case 1:
                                {
                                    cout << "For this task, we will test your recollection of patterns." << endl;
                                    cout << "You will be asked to move left(1), right(2), or straight(3) in order to escape a maze." << endl;
                                    cout << "There is one correct path, each time you go the wrong direction the maze will restart (so remember the right path)" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "The reward for completing a side quest is offered in fine gold, however with each attept your treasure depletes." << endl;
                                    cout << "You will have 8 attempts to guess the 5 correct directions. Good luck!" << endl;
                                    cout << "Press 1 when you're ready to begin" << endl;
                                    cout << " " << endl;
                                    cin >> practiceMazecontinue;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    
                                    while (j<9)
                                    {
                                        
                                    do{
                                    cout << "Move left(1), right(2), or straight(3)" << endl;
                                    cin >> pmazeGuess1;
                                    i++;
                                    if (i == 5)
                                    {
                                            if (j<=3)
                                            {
                                                pmazeReward += 20;
                                                playerMoney += 20;
                                            }
                                            else if (j>3 && j<7)
                                            {
                                                pmazeReward += 10;
                                                playerMoney += 10;
                                            }
                                            else
                                            {
                                                pmazeReward += 5;
                                                playerMoney += 5;
                                            }
                                        cout << "Congrats!! You passed the maze!" << endl;
                                        cout << "It took you: " << j << " attempts" << endl;
                                        cout << "Your reward will be: " << pmazeReward << " Gold Coins" << endl;
                                        
                
                                    }
                                    }
                                    while(pmazeGuess1 == practicemazeArray[i-1]);
                                        
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Sorry, you went the wrong way and ran into a monster" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Press 1 to start your " << j+1<< " turn." << endl;
                                    j++;
                                    i = 0;
                                    cin >> continues1;
                        
                                    }
                                    while (j<8);
                                          
                                    
                                   cout << "You ran out of attempts! NO REWARD" << endl;
                                   
                                   
                                    break;
                                    
                                
                                }
                                case 2:
                                {
                                    int i = 0;
                                    string practice_answer1;
                                    string practice_answer2;
                                    string practice_answer3;
                                    string real_answer1 = "interger";
                                    string real_answer2 = "split";
                                    string real_answer3 = "endl;";
                                    cout << "Welcome to the C++ trivia practice room"<< endl;
                                    cout<< "Here you will be able to practice your knowledge of C++ without penalty to prepare you for the challenges ahead"<<endl;
                                    cout<<"you will be given three questions, answer carefully in all lowercase"<<endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout<<"Question 1:  Enter the variable type you would use for a whole number."<<endl;
                                    cin>>practice_answer1;
                                    if(practice_answer1 == real_answer1)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        i++;

                                    }
                                    else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  integer"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    cout<<"Question 2:  you can use a _____ function to turn one string into multiple with a deliminator"<<endl;
                                    cin>>practice_answer2;
                                    if(practice_answer2 == real_answer2)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        i++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  split"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    
                                    cout<<"Question 3:  how do you end a line after a cin statement? (hint: include punctiation)"<<endl;
                                    cin>>practice_answer3;
                                if(practice_answer3 == real_answer3)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        i++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  endl;"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }

                                    cout<<"Good job! you have completed the practice room C++ trivia"<<endl;
                                    cout<<"you got "<<i<<"/3 correct"<<endl;
                                    break;

                                    int countercoins= (i*2);
                                    playerMoney += countercoins;
                                }
                                case 3:
                                {
                                    int i = 0;
                                    string practice_gen_answer1;
                                    string practice_gen_answer2;
                                    string practice_gen_answer3;
                                    string real_gen_answer1 = "denver";
                                    string real_gen_answer2 = "skateboard";
                                    string real_gen_answer3 = "frog";
                                    cout << "Welcome to the General trivia practice room"<< endl;
                                    cout<< "Here you will be able to practice your knowledge of the world without penalty to prepare you for the challenges ahead"<<endl;
                                    cout<<"you will be given three questions, answer carefully in all lowercase"<<endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout<<"Question 1:  What is the capital of Colorado?"<<endl;
                                    cin>>practice_gen_answer1;
                                    if(practice_gen_answer1 == real_gen_answer1)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        i++;
                                    }
                                    else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is: " << real_gen_answer1 <<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    cout<<"Question 2:  Tom gets to class on a ______"<<endl;
                                    cin>>practice_gen_answer2;
                                    if(practice_gen_answer2 == real_gen_answer2)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        i++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  split"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    
                                    cout<<"Question 3: What is an amphibian that starts with an f"<<endl;
                                    cin>>practice_gen_answer3;
                                if(practice_gen_answer3 == real_gen_answer3)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        i++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  endl;"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }

                                    cout<<"Good job! you have completed the practice room C++ trivia"<<endl;
                                    cout<<"you got "<<i<<"/3 correct"<<endl;
                                    coinscounter= (i*2);
                                    playerMoney += coinscounter;
                                    cout << "Your reward is " << coinscounter << " Gold coins.";


                                    break;
                                }


                    




                        }
                    }




                    

                    while(practiceRoomChoice != 4);
                    
                    break;
                    
                }
                case 4:
                {
                    do{
                    cout << "Welcome to project 1!" << endl;
                    cout << "First things first, would you like to do the: " << endl;
                    cout << "1. Side Quest" << endl;
                    cout << "2. Main Mission" << endl;
                    cout << "3. Exit" << endl;
                    cin >> project1Choice;
                    switch (project1Choice)
                    {
                    case 1:
                                {
                                    cout << "For this task, we will test your recollection of patterns." << endl;
                                    cout << "You will be asked to move left(1), right(2), or straight(3) in order to escape a maze." << endl;
                                    cout << "There is one correct path, each time you go the wrong direction the maze will restart (so remember the right path)" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "The reward for completing a side quest is offered in fine gold, however with each attept your treasure depletes." << endl;
                                    cout << "You will have 8 attempts to guess the 5 correct directions. Good luck!" << endl;
                                    cout << "Press 1 when you're ready to begin" << endl;
                                    cout << " " << endl;
                                    cin >> practiceMazecontinue;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    
                                    while (j<9)
                                    {
                                        
                                    do{
                                    cout << "Move left(1), right(2), or straight(3)" << endl;
                                    cin >> pmazeGuess1;
                                    i++;
                                    if (i == 5)
                                    {
                                            if (j<=3)
                                            {
                                                pmazeReward += 20;
                                                playerMoney += 20;
                                            }
                                            else if (j>3 && j<7)
                                            {
                                                pmazeReward += 10;
                                                playerMoney += 10;
                                            }
                                            else
                                            {
                                                pmazeReward += 5;
                                                playerMoney += 5;
                                            }
                                        cout << "Congrats!! You passed the maze!" << endl;
                                        cout << "It took you: " << j << " attempts" << endl;
                                        cout << "Your reward will be: " << pmazeReward << " Gold Coins" << endl;
                                        
                
                                    }
                                    }
                                    while(pmazeGuess1 == practicemazeArray[i-1]);
                                        
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Sorry, you went the wrong way and ran into a monster" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Press 1 to start your " << j+1<< " turn." << endl;
                                    j++;
                                    i = 0;
                                    cin >> continues1;
                        
                                    }
                                    while (j<8);
                                          
                                    
                                   cout << "You ran out of attempts! NO REWARD" << endl;
                                   
                                   
                                    break;
                                    
                                
                                }
                         case 2:
                         {
                            cout<<"Welcome to the main mission for project 1!"<<endl;
                            cout<<"You must gain a 40%/ on this Project to defeat the monster, Goob"<<endl;
                            cout<<"You will have 5 questions, 3 about C++ and 2 general trivia"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            int j = 0;
                            string proj1_gen_answer1;
                            string proj1_gen_answer2;
                            string proj1_real_answer1 = "quack";
                            string proj1_real_answer2 = "1876";
                            cout << "Welcome to the General trivia for project 1"<< endl;
                            cout<< "Here you will be given 2 questions about the general world and you must complete them to the best of your ability"<<endl;
                            cout<<"answer carefully in all lowercase"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout<<"Question 1:  What noise does a duck make"<<endl;
                            cin>>proj1_gen_answer1;
                            if(proj1_real_answer1 == proj1_gen_answer1)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                j++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  quack"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                            cout<<"Question 2:  What year was colorado founded?"<<endl;
                            cin>>proj1_gen_answer2;
                            if(proj1_real_answer2 == proj1_gen_answer2)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                j++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  1876"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                        cout<<"Now that you have completetd the general trivia section, we will move on to the C++ trivia"<<endl;
                        cout<<"enter your answers in all lowerecase"<<endl;
                                    string proj1_cpp_input1;
                                    string proj1_cpp_input2;
                                    string proj1_cpp_input3;
                                    string proj1_cpp_answer1 = "array";
                                    string proj1_cpp_answer2 = "char";
                                    string proj1_cpp_answer3 = "main";
                                    cout << "Welcome to C++ trivia for project 1"<< endl;
                                    cout<< "Here you will be able to test your knowledge of C++ and advance further in the game"<<endl;
                                    cout<<"you will be given three questions, answer carefully in all lowercase"<<endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout<<"Question 1:  What is something that stores information begining with: a"<<endl;
                                    cin>>proj1_cpp_input1;
                                    if(proj1_cpp_input1 == proj1_cpp_answer1)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        j++;
                                    }
                                    else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  array"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    cout<<"Question 2:  the variable that contain one letter is abbreviated by _____"<<endl;
                                    cin>>proj1_cpp_input2;
                                    if(proj1_cpp_input2 == proj1_cpp_answer2)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        j++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  char"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    
                                    cout<<"Question 3: a driver file contains a ______ function, used to test the code "<<endl;
                                    cin>>proj1_cpp_input3;
                                if(proj1_cpp_input3 == proj1_cpp_answer3)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        j++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  main"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }

                                    cout<<"Good job! you have completed the project room trivia"<<endl;
                                    cout<<"you got "<<j<<"/5 correct"<<endl;
                                    if(j<2)
                                    {
                                        cout<<"You scored less than a 40%/ and failed to destroy the monster"<<endl;
                                        cout<<"You suck :)"<<endl;
                                        int cw = (5-j) * 3;
                                        cout << "You lost " << cw << "health for the questions answered incorrectly" << endl;
                                        playerHealth -= cw;
                                    }
                                    else
                                    {
                                        cout<<"good job you got above a 40%/ and destroyed the monster"<<endl;
                                        cout<<"you dont suck... for now"<<endl;
                                        int countercounter = j*2;
                                        int countercountercounter = (5-j) * 2;
                                        cout << "your reward will be " <<countercounter << " Gold Coins and 20 points to your player score" << endl;
                                        cout << "You lost " << countercountercounter << "health for the questions answered incorrectly" << endl;
                                        playerScore += 20;
                                        playerHealth -= countercountercounter;
                                    }
                                break;
                         }
                    }
                         
                    }
                    while (project1Choice !=3);
                    break;
                    
                    
                }
            case 5:
            {
                    cout << "Welcome to project 2!" << endl;
                    cout << "First things first, would you like to do the: " << endl;
                    cout << "1. Main Mission" << endl;
                    cout << "2. Side Quest" << endl;
                    cin >> trivia;
                switch (trivia)
                {
                case 1:
                    {
                          cout<<"Welcome to the main mission for project 2!"<<endl;
                            cout<<"You must gain a 60%/ on this Project to defeat the monster, Foob"<<endl;
                            cout<<"You will have 5 questions, 3 about C++ and 2 general trivia"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            int k = 0;
                            string proj2_gen_answer1;
                            string proj2_gen_answer2;
                            string proj2_real_answer1 = "MIT";
                            string proj2_real_answer2 = "to cross the road";
                            cout << "Welcome to the General trivia for project 1"<< endl;
                            cout<< "Here you will be given 2 questions about the general world and you must complete them to the best of your ability"<<endl;
                            cout<<"answer carefully in all lowercase"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout<<"Question 1:  Where did Tom go to college (abbreviate: YOU MUST ANSWER IN ALL CAPS FOR ONLY THIS QUESTION)"<<endl;
                            cin>>proj2_gen_answer1;
                            if(proj2_real_answer1 == proj2_gen_answer1)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                k++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  MIT"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                            cout<<"Question 2:  why did the chicken cross the road?"<<endl;
                            cin >> proj2_gen_answer2;

                            if(proj2_real_answer2 == proj2_gen_answer2)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                k++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  to get to the other side"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                        cout<<"Now that you have completetd the general trivia section, we will move on to the C++ trivia"<<endl;
                        cout<<"enter your answers in all lowerecase"<<endl;
                                    string proj2_cpp_input1;
                                    string proj2_cpp_input2;
                                    string proj2_cpp_input3;
                                    string proj2_cpp_answer1 = "public";
                                    string proj2_cpp_answer2 = "no";
                                    string proj2_cpp_answer3 = "function";
                                    cout << "Welcome to C++ trivia for project 2"<< endl;
                                    cout<< "Here you will be able to test your knowledge of C++ and advance further in the game"<<endl;
                                    cout<<"you will be given three questions, answer carefully in all lowercase"<<endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout<<"Question 1:  What type of function in a class is a member function that can be called"<<endl;
                                    cin>>proj2_cpp_input1;
                                    if(proj2_cpp_input1 == proj2_cpp_answer1)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        k++;
                                    }
                                    else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  public"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    cout<<"Question 2: yes or no... Can someone using your class access private data members"<<endl;
                                    cin>>proj2_cpp_input2;
                                    if(proj2_cpp_input2 == proj2_cpp_answer2)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        k++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer"<<endl;
                                        cout<< "the correct answer is:  no"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    
                                    cout<<"Question 3: what is a reusable section of code that you can call "<<endl;
                                    cin>>proj2_cpp_input3;
                                if(proj2_cpp_input3 == proj2_cpp_answer3)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        k++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  function"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }

                                    cout<<"Good job! you have completed the project room trivia"<<endl;
                                    cout<<"you got "<<k<<"/5 correct"<<endl;
                                    if(k<3)
                                    {
                                        cout<<"You scored less than a 60%/ and failed to destroy the monster"<<endl;
                                        cout<<"You suck :)"<<endl;
                                        int cl = (5-k) * 3;
                                        cout << "You lost " << cl << "health for the questions answered incorrectly" << endl;
                                        playerHealth -= cl;
                                    }
                                    else
                                    {
                                        cout<<"good job you got above a 60%/ and destroyed the monster"<<endl;
                                        cout<<"you dont suck... for now"<<endl;
                                        int cc = k*3;
                                        int ccc = (5-k) * 2;
                                        playerScore +=30;
                                        playerHealth -= ccc;
                                        cout << "your reward will be " << cc << " Gold Coins and 30 points to your player score";
                                        cout << "You lost " << ccc << "health for the questions answered incorrectly";
                                    }
                            break;
                    }
                                    case 2:
                                {
                                    cout << "For this task, we will test your recollection of patterns." << endl;
                                    cout << "You will be asked to move left(1), right(2), or straight(3) in order to escape a maze." << endl;
                                    cout << "There is one correct path, each time you go the wrong direction the maze will restart (so remember the right path)" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "The reward for completing a side quest is offered in fine gold, however with each attept your treasure depletes." << endl;
                                    cout << "You will have 8 attempts to guess the 5 correct directions. Good luck!" << endl;
                                    cout << "Press 1 when you're ready to begin" << endl;
                                    cout << " " << endl;
                                    cin >> practiceMazecontinue;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    
                                    while (j<9)
                                    {
                                        
                                    do{
                                    cout << "Move left(1), right(2), or straight(3)" << endl;
                                    cin >> pmazeGuess1;
                                    i++;
                                    if (i == 5)
                                    {
                                            if (j<=3)
                                            {
                                                pmazeReward += 20;
                                                playerMoney += 20;
                                            }
                                            else if (j>3 && j<7)
                                            {
                                                pmazeReward += 10;
                                                playerMoney += 10;
                                            }
                                            else
                                            {
                                                pmazeReward += 5;
                                                playerMoney += 5;
                                            }
                                        cout << "Congrats!! You passed the maze!" << endl;
                                        cout << "It took you: " << j << " attempts" << endl;
                                        cout << "Your reward will be: " << pmazeReward << " Gold Coins" << endl;
                                        
                
                                    }
                                    }
                                    while(pmazeGuess1 == practicemazeArray[i-1]);
                                        
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Sorry, you went the wrong way and ran into a monster" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Press 1 to start your " << j+1<< " turn." << endl;
                                    j++;
                                    i = 0;
                                    cin >> continues1;
                        
                                    }
                                    while (j<8);
                                          
                                    
                                   cout << "You ran out of attempts! NO REWARD" << endl;
                                   
                                   
                                    break;
                                    
                                
                                }
            }
            }
            case 6:
            {
                cout << "Welcome to Exam 1!" << endl;
                    cout << "First things first, would you like to do the: " << endl;
                    cout << "1. Main Mission" << endl;
                    cout << "2. Side Quest" << endl;
                    cin >> shit;
                switch(shit)
                {
                    case 1:
                    {
                            cout<<"Welcome to the main mission for exam 1!"<<endl;
                            cout<<"You must gain an 80%/ on this Project to defeat the monster, Loob"<<endl;
                            cout<<"You will have 5 questions, 3 about C++ and 2 general trivia"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            int H = 0;
                            string Exam1_gen_answer1;
                            string Exam1_gen_answer2;
                            string Exam1_real_answer1 = "yes";
                            string Exam1_real_answer2 = "blue";
                            cout << "Welcome to the General trivia for Exam 1"<< endl;
                            cout<< "Here you will be given 2 questions about the general world and you must complete them to the best of your ability"<<endl;
                            cout<<"answer carefully in all lowercase"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout<<"Question 1:  yes or no... Does tom have children?"<<endl;
                            cin>>Exam1_gen_answer1;
                            if(Exam1_real_answer1 == Exam1_gen_answer1)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                H++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  yes"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                            cout<<"Question 2: fill in the blank... one fish two fish red fish ____ fish"<<endl;
                            cin>>Exam1_gen_answer2;
                            if(Exam1_real_answer2 ==Exam1_gen_answer2)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                H++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  blue"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                        cout<<"Now that you have completed the general trivia section, we will move on to the C++ trivia"<<endl;
                        cout<<"enter your answers in all lowerecase"<<endl;
                                    string Exam1_cpp_input1;
                                    string Exam1_cpp_input2;
                                    string Exam1_cpp_input3;
                                    string Exam1_cpp_answer1 = "false";
                                    string Exam1_cpp_answer2 = "parameterized";
                                    string Exam1_cpp_answer3 = "default";
                                    cout << "Welcome to C++ trivia for project 2"<< endl;
                                    cout<< "Here you will be able to test your knowledge of C++ and advance further in the game"<<endl;
                                    cout<<"you will be given three questions, answer carefully in all lowercase"<<endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout<<"Question 1:  true or false... in a class there are a limited number of member functions you can create"<<endl;
                                    cin>>Exam1_cpp_input1;
                                    if(Exam1_cpp_input1 == Exam1_cpp_answer1)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        H++;
                                    }
                                    else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  false"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    cout<<"Question 2: the constructor that has parameters is called the ______ constructor "<<endl;
                                    cin>>Exam1_cpp_input2;
                                    if(Exam1_cpp_input2 == Exam1_cpp_answer2)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        H++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer"<<endl;
                                        cout<< "the correct answer is:  parameterized"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    
                                    cout<<"Question 3: The constructor that does not take parameters is called the _____ constructor"<<endl;
                                    cin>>Exam1_cpp_input3;
                                if(Exam1_cpp_input3 == Exam1_cpp_answer3)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        H++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  default"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }

                                    cout<<"Good job! you have completed the Exam room trivia"<<endl;
                                    cout<<"you got "<<H<<"/5 correct"<<endl;
                                    if(H<4)
                                    {
                                        cout<<"You scored less than an 80%/ and failed to destroy the monster"<<endl;
                                        cout<<"You suck :)"<<endl;
                                        int czz = (5-H) * 3;
                                        cout << "You lost " << czz << "health for the questions answered incorrectly" << endl;
                                        playerHealth -= czz;
                                    }
                                    else
                                    {
                                        cout<<"good job you got above an 80%/ and destroyed the monster"<<endl;
                                        cout<<"you dont suck... for now"<<endl;
                                        int cr = H*3;
                                        int crr = (5-H) * 2;
                                        playerScore +=40;
                                        playerHealth -= crr;
                                        cout << "your reward will be " << cr << " Gold Coins and 40 points to your player score" << endl;
                                        cout << "You lost " << crr << "health for the questions answered incorrectly" << endl;
                                    }
                                    break;
                    }    
                                  
            }
            case 7:
            {
                    cout << "Welcome to Exam 2/ Final Boss!" << endl;
                    cout << "First things first, would you like to do the: " << endl;
                    cout << "1. Main Mission" << endl;
                    cout << "2. Side Quest" << endl;
                    cin >> fuckshitfuck;
               switch(fuckshitfuck)
                {
                    case 1:
                    {
                            cout<<"Welcome to the main mission for FINAL EXAM!"<<endl;
                            cout<<"You must gain an 100%/ on this Project to defeat the monster, TOM"<<endl;
                            cout<<"You will have 5 questions, 3 about C++ and 2 general trivia"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            int L = 0;
                            string Exam2_gen_answer1;
                            string Exam2_gen_answer2;
                            string Exam2_real_answer1 = "bark";
                            string Exam2_real_answer2 = "lemon";
                            cout << "Welcome to the General trivia for the final exam"<< endl;
                            cout<< "Here you will be given 2 questions about the general world and you must complete them to the best of your ability"<<endl;
                            cout<<"answer carefully in all lowercase"<<endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout<<"Question 1:  this part of a tree is used to make cinamon, also a dog makes this noise"<<endl;
                            cin>>Exam2_gen_answer1;
                            if(Exam2_real_answer1 == Exam2_gen_answer1)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                L++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  bark"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                            cout<<"Question 2: yellow citris fruit"<<endl;
                            cin>>Exam2_gen_answer2;
                            if(Exam2_real_answer2 ==Exam2_gen_answer2)
                            {
                                cout<<"Correct!"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                L++;
                            }
                            else 
                            {
                                cout<<"incorrect answer :("<<endl;
                                cout<< "the correct answer is:  lemon"<<endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                            }
                        cout<<"Now that you have completed the general trivia section, we will move on to the C++ trivia"<<endl;
                        cout<<"enter your answers in all lowerecase"<<endl;
                                    string Exam2_cpp_input1;
                                    string Exam2_cpp_input2;
                                    string Exam2_cpp_input3;
                                    string Exam2_cpp_answer1 = "true";
                                    string Exam2_cpp_answer2 = "buffchat";
                                    string Exam2_cpp_answer3 = "true";
                                    cout << "Welcome to C++ trivia for project 2"<< endl;
                                    cout<< "Here you will be able to test your knowledge of C++ and advance further in the game"<<endl;
                                    cout<<"you will be given three questions, answer carefully in all lowercase"<<endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout<<"Question 1:  true or false... one letter variable can be a string or a char"<<endl;
                                    cin>>Exam2_cpp_input1;
                                    if(Exam2_cpp_input1 == Exam2_cpp_answer1)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        L++;
                                    }
                                    else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  true"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    cout<<"Question 2: in project 2 we created a social media platform called ______ "<<endl;
                                    cin>>Exam2_cpp_input2;
                                    if(Exam2_cpp_input2 == Exam2_cpp_answer2)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        L++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer"<<endl;
                                        cout<< "the correct answer is:  buffchat"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }
                                    
                                    cout<<"Question 3: true or false... you will recomend this course to upcoming students (be careful Tom is watching)"<<endl;
                                    cin>>Exam2_cpp_input3;
                                if(Exam2_cpp_input3 == Exam2_cpp_answer3)
                                    {
                                        cout<<"Correct!"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        L++;
                                    }
                                   else 
                                    {
                                        cout<<"incorrect answer :("<<endl;
                                        cout<< "the correct answer is:  true"<<endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                        cout << " " << endl;
                                    }

                                    cout<<"Good job! you have completed the Final Exam room trivia"<<endl;
                                    cout<<"you got "<<L<<"/5 correct"<<endl;
                                    if(L<5)
                                    {
                                        cout<<"You scored less than an 100%/ and failed to destroy the monster"<<endl;
                                        cout<<"You suck :)"<<endl;
                                    }
                                    else
                                    {
                                        cout<<"good job you got above an 100%/ and destroyed the final boss"<<endl;
                                        cout<<"you dont suck... for now"<<endl;
                                        int ce = L*3;
                                        int cee = (5-L) * 2;
                                        playerScore +=50;
                                        playerHealth -= cee;
                                        cout << "your reward will be " << ce << " Gold Coins and 40 points to your player score" << endl;
                                        cout << "You lost " << cee << "health for the questions answered incorrectly" << endl;
                                    }
                                break;
                    }

                                   case 2:
                                {
                                    cout << "For this task, we will test your recollection of patterns." << endl;
                                    cout << "You will be asked to move left(1), right(2), or straight(3) in order to escape a maze." << endl;
                                    cout << "There is one correct path, each time you go the wrong direction the maze will restart (so remember the right path)" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "The reward for completing a side quest is offered in fine gold, however with each attept your treasure depletes." << endl;
                                    cout << "You will have 8 attempts to guess the 5 correct directions. Good luck!" << endl;
                                    cout << "Press 1 when you're ready to begin" << endl;
                                    cout << " " << endl;
                                    cin >> practiceMazecontinue;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    
                                    while (j<9)
                                    {
                                        
                                    do{
                                    cout << "Move left(1), right(2), or straight(3)" << endl;
                                    cin >> pmazeGuess1;
                                    i++;
                                    if (i == 5)
                                    {
                                            if (j<=3)
                                            {
                                                pmazeReward += 20;
                                                playerMoney += 20;
                                            }
                                            else if (j>3 && j<7)
                                            {
                                                pmazeReward += 10;
                                                playerMoney += 10;
                                            }
                                            else
                                            {
                                                pmazeReward += 5;
                                                playerMoney += 5;
                                            }
                                        cout << "Congrats!! You passed the maze!" << endl;
                                        cout << "It took you: " << j << " attempts" << endl;
                                        cout << "Your reward will be: " << pmazeReward << " Gold Coins" << endl;
                                        
                
                                    }
                                    }
                                    while(pmazeGuess1 == practicemazeArray[i-1]);
                                        
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Sorry, you went the wrong way and ran into a monster" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << "---------------------------------------------------------------------------------------" << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << " " << endl;
                                    cout << "Press 1 to start your " << j+1<< " turn." << endl;
                                    j++;
                                    i = 0;
                                    cin >> continues1;
                        
                                    }
                                    while (j<8);
                                          
                                    
                                   cout << "You ran out of attempts! NO REWARD" << endl;
                                   
                                   
                                    break;
                                    
                                
                                }




                }
                break;
            }


    }
       
    
    }
    
   
    
    }
    }
}
    cout << "Your game has ended! Congrats! (If you survived)" << endl;
    cout << " Here is the final score board: " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "======= Final scoreboard =======" << endl;
    cout << "Player Score: " << playerScore << "%" << endl;
    cout << "Player Health: " << playerHealth << endl;
    cout << "Player Money: " << playerMoney << endl;
    cout << "Final Boss Difficulty: " << tomDifficulty << "%" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
}

    
   