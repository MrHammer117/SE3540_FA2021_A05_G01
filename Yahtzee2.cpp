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
    
        
        cout << "Hello. Welcome to Yahtzee." << endl;
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
    
    
    
    
    
    
    
    
    /*
    cout << "Hello. Welcome to Yahtzee." << endl;
     cout << "Type 'play' to play Yahtzee." << endl;
     cout << "Type 'stop' if you do not want to play the game." << endl;
    cin >> word;
     if (word == "stop") {
         cout << "Leaving game.";
     }
     if (word != "stop" && word != "play") {
         cout << "Error! Please try again.";
         cout << "Hello. Welcome to Yahtzee." << endl;
         cout << "Type 'play' to play Yahtzee." << endl;
         cout << "Type 'stop' if you do not want to play the game." << endl;
         cin >> word;
     };
        
    if (word == "play") {
    cout << "Would you like to roll the dice? Enter 'yes' to roll the dice." << endl;
    cout <<" Enter 'no' to not roll the dice." << endl;
    cout << "Enter 'stop' to stop the game." << endl;
         cin >> word2;

         if (word2 == "no") {
             cout << "Would like to leave the game. Enter 'yes' to leave the game. Enter 'no' to continue the game" << endl;
             cin >> word3;
             if (word3 == "yes"){
                 "Leaving game. Goodbye."
             }
             if (word3 == "no"){

   cout << "Would you like to roll the dice? Enter 'yes' to roll the dice." << endl;
    cout <<" Enter 'no' to not roll the dice." << endl;
    cout << "Enter 'stop' to stop the game." << endl;
         cin >> word2;
             };
         }
         if (word2 == "stop") {
             cout << "Closing game. Goodbye";
         }
         if (word2 != "no" && word2 != "yes" && word2 != "stop") {
             cout << "Input not valid. Please try again.";
             cout << "Would you like to roll the dice? Enter 'yes' to roll the dice. Enter 'no' to not roll the dice." << endl;
             cin >> word2;
         };
          if (word2 == "yes") {
             cout << "Rolling Dice..." << endl;
             
            
         }

            
};
*/
       
     int main() {
         Game newGame;
         newGame.play();

     }

