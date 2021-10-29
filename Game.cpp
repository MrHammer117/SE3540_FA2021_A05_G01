// Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <stdlib.h>
#include "Dice.h"
#include "Scorecard.h"
using namespace std;

class Game {
public:
    void play();
};



void Game::play() {
    srand(time(0));
    string word;
    int checkCategory = 0;
    string word2;
    int num = 0;
    Dice newDice;
    scorecard card;
    bool allFilled=false;

    //Menu message

   cout << "Yahtzee" << endl;
   cout << "Type 'play' to play Yahtzee." << endl;
   cout << "Type 'stop' to exit the game." << endl;
   cin >> word2;
   
   while (word2 != "stop" && word2 != "play"){
    cout << "Yahtzee" << endl;
    cout << "Type 'play' to play Yahtzee" << endl;
    cout << "Type 'stop' to exit the game" << endl;
    cin >> word2;
   }
   if (word2 == "stop") {
       cout << "Leaving game";
       exit(EXIT_FAILURE);
   }


    //prints out the rules of the game
    card.DisplayScoringRules();


    if (word2 == "play"){
    for (int i = 0; i < 13; i++) { //while the scorecard is not completely filled with scores


        cout << "\n" << "Roll? (Y/N)" << endl;
        cin >> word;
        if (word == "Y" || word == "y") {
            for (int i = 0; i < 5; i++) {
                newDice.dieArray[i].value = newDice.rollDice(newDice.dieArray[i]);
            }
        }
        else if (word == "N" || word == "n"){
            cout << "\n" << "Your Yahtzee score is " << card.setFinalScore();
            exit(EXIT_FAILURE);
        }
        else {
            while ((word != "Y" || word != "y") || (word != "N" || word != "n")) {
                cout << "\n" << "Roll? (Y/N)" << endl;
                cin >> word;
                if (word == "Y" || word == "y") {
                    for (int i = 0; i < 5; i++) {
                        newDice.dieArray[i].value = newDice.rollDice(newDice.dieArray[i]);
                    }
                    break;
                }
                else if (word == "N" || word == "n") {
                    cout << "\n" << "Your Yahtzee score is " << card.setFinalScore();
                    exit(EXIT_FAILURE);
                }
            } 
        }
        newDice.sortDice();

        cout << "\nYour dice:";
        for (int i = 0; i < 5; i++) {
            cout << " |" << newDice.getValue(newDice.dieArray[i]) << "| ";
        }

        

        cout << endl;
        cout << "Please input number of category you would like" << endl;
        cin >> num;
        while (card.selectCat(num, newDice) == false) { //if the category has already been filled ask user until a valid category is given
               cout << "\nPlease choose an EMPTY category:\n";
               cin >> num;
        }
       

        checkCategory++;
        card.DisplayScoreCard();//print the scorecard and its values at the end of every round
    
    }
    card.DisplayFinalScoreCard();
    };

}
       
     int main() {
         Game newGame;
         newGame.play(); // Runs the game

         return 0;
     }

