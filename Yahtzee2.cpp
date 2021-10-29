// Yahtzee2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include "Dice.h"
#include "Scorecard.h"
using namespace std;

class Game {
public:
    void play();
    int totalresult;
    
};

void Game::play(){
    srand(time(0));
    string word;
    int checkCategory = 0;
    string word2;
    string word3;
    int num = 0; 
    Dice newDice;
    scorecard card;
    
        
       /* cout << "Hello. Welcome to Yahtzee." << endl;
        cout << "Type 'play' or 'Play' to play Yahtzee." << endl;
        cout << "Type 'stop' or 'Stop' if you do not want to play the game." << endl;
        cout << endl;
        cout << "-----------------------------------" << endl;
        cout << endl;
        cin >> word;
        if (word == "stop" || word == "Stop"){
            cout << "Leaving game.";
        }
        if (word!= "stop" || word!= "Stop"){

        }
        if (word == "play" || word == "Play") {
            while (checkCategory != 14 || (word2 == "yes" || word2 == "Yes")) {
                for (int i = 0; i < 5; i++) {
                    newDice.dieArray[i].value = newDice.rollDice(newDice.dieArray[i]);
                }
                newDice.sortDice();
                cout << endl;
                cout << "-----------------------------------" << endl;
                cout << endl;
                card.DisplayScoringRules();
                cout << endl;
                cout << "-----------------------------------" << endl;
                cout << endl;
                card.DisplayScoreCard();
                cout << endl;
                cout << "-----------------------------------" << endl;
                cout << endl;
                for (int i = 0; i < 5; i++) {
                    cout << " |" << newDice.getValue(newDice.dieArray[i]) << "| ";
                }
                
                    cout << endl;
                    cout << "Please input number of category you would like" << endl;
                    cin >> num;
                    card.selectCat(num, newDice);
                checkCategory++;
            }
        }

    cout << "Exiting Game..." << endl;
}
    
    */
    
    
    
    
    
    
    // Menu options for game.
    cout << "Hello. Welcome to Yahtzee." << endl;
     cout << "Type 'play' to play Yahtzee." << endl;
     cout << "Type 'stop' if you do not want to play the game." << endl;

     //Asks for user input if they want to play or leave the game.
    cin >> word;

// Leaves game if user input is stop/
     if (word == "stop") {
         cout << "Leaving game.";
     }

     // Checks for errors and reasks user if they want to play the game.
     if (word != "stop" && word != "play") {
         cout << "Error! Please try again.";
         cout << "Hello. Welcome to Yahtzee." << endl;
         cout << "Type 'play" " Enter 'yes' to roll the dice." << endl;
         cin >> word2;
     };
     // If user wants to play the game. They will be asked if the want to roll the dice.
     if (word == "play")
     cout << "Enter 'yes' to roll the dice."<< endl;
    cout <<" Enter 'no' to not roll the dice." << endl;
    cout << "Enter 'stop' to stop the game." << endl;
         cin >> word2;
    };

        // If they do not want to roll the dice it asks if the user wants to leave the game, continue to play the game, or return to main menu.
         if (word2 == "no") {
             cout << "Would you like to leave the game? "
             cout << "Enter 'yes' to leave the game." << endl;
              cout << "Enter 'no' to continue the game" << endl;
              cout << "Enter 'return' to return to main menu." << endl;
             cin >> word3;
         };
//If user types yes they will leave the game.
             if (word3 == "yes"){
                 "Leaving game. Goodbye."
             };
// If user types return they will return to main menu.
             if (word3 == "return"){
     cout << "Hello. Welcome to Yahtzee." << endl;
     cout << "Type 'play' to play Yahtzee." << endl;
     cout << "Type 'stop' if you do not want to play the game." << endl;
     cin >> word;
     };
// If user input is no they will be asked again if they want to roll the dice.
             if (word3 == "no"){
cout << "Would you like to roll the dice? Enter 'yes' to roll the dice." << endl;
    cout <<" Enter 'no' to not roll the dice." << endl;
    cout << "Enter 'stop' to stop the game." << endl;
         cin >> word2;
             };
            
    // If user answers a invalid response it will ask them if they want to roll the dice.        
      if (word3!= "yes" && word3! == "no" && word3!== "return"){
    cout << "Error. Please try again."
    cout << "Would you like to roll the dice? Enter 'yes' to roll the dice." << endl;
    cout <<" Enter 'no' to not roll the dice." << endl;
    cout << "Enter 'stop' to stop the game." << endl;
         cin >> word2;
             };
         }
    // If users want to stop the game they will close the game.
         if (word2 == "stop") {
             cout << "Closing game. Goodbye";
         };
    // Checks if user input is invalid.
         if (word2 != "no" && word2 != "yes" && word2 != "stop") {
             cout << "Input not valid. Please try again.";
             cout << "Would you like to roll the dice? Enter 'yes' to roll the dice. Enter 'no' to not roll the dice." << endl;
             cin >> word2;
         };

    // Will roll dice if user wants to roll dice.
          if (word2 == "yes") {
             cout << "Rolling Dice..." << endl;
               while (checkCategory != 14) {
          

             for (int i = 0; i < 5; i++) {
                    newDice.dieArray[i].value = newDice.rollDice(newDice.dieArray[i]);
                }
                newDice.sortDice();
                cout << endl;
                cout << "-----------------------------------" << endl;
                cout << endl;
                card.DisplayScoringRules();
                cout << endl;
                cout << "-----------------------------------" << endl;
                cout << endl;
                card.DisplayScoreCard();
                cout << endl;
                cout << "-----------------------------------" << endl;
                cout << endl;
                for (int i = 0; i < 5; i++) {
                    cout << " |" << newDice.getValue(newDice.dieArray[i]) << "| ";
                }
                
                    cout << endl;
                    cout << "Please input number of category you would like" << endl;
                    cin >> num;
                    card.selectCat(num, newDice);
                checkCategory++;
            
         }

            
};

       
     int main() {
         Game newGame;
         newGame.play();

     }

