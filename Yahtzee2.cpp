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
/*
void Game::play(){
    srand(time(0));
    string word;
    int checkCategory = 0;
    string word2;
    int num = 0; 
    Dice newDice;
    scorecard card;*/
    
        
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
    
    
    
    
   /* 
    
    // Menu options for game.
    cout << "Hello. Welcome to Yahtzee." << endl;
     cout << "Type 'play' to play Yahtzee." << endl;
     cout << "Type 'stop' if you do not want to play the game." << endl;

     //Asks for user input if they want to play or leave the game.
    cin >> word;

// Leaves game if user input is stop
     if (word == "stop") {
         cout << "Leaving game.";
     }

// Checks for errors
     
    if (word != "play" && word! = "stop"){
        cout << "Error. Please try again.";
        cout << "Hello. Welcome to Yahtzee." << endl;
        cout << "Type 'play' to play Yahtzee" << endl;
        cout << "Type 'stop' if you do not want to play the game." << endl;
        cin >> word;
    };
    
if (word=="play"){
 while (checkCategory!=14){

        cout << "Would you like to roll the dice?" << endl;
        cout << "Type 'yes' if you would like to roll." << endl;
        cout << "Type 'no' if you do not want to exit game" << endl;
        cin >> word2;

        if(word2 == "no"){
            cout << "Leaving game."
        }
        if(word2! == "yes" && word2!= "no"){
            cout << "Leaving game." << endl;
        }
        if(word2 == "yes"){



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
                    card.addScore(num,newDice);
                    
                checkCategory++;
    
            
         };
         
         cout << "Your Yahtzee score is " << card.SetFinalScore;
        };
    };

            
};
*/


void Game::play() {
    srand(time(0));
    string word;
    int checkCategory = 0;
    string word2;
    int num = 0;
    Dice newDice;
    scorecard card;
    bool allFilled=false;

   

    //prints out the rules of the game
    card.DisplayScoringRules();


    
    while (allFilled == false) { //while the scorecard is not completely filled with scores
       
        

        //checks used[] array in scorecard to see if all elements are !EMPTY
        for (int i = 0; i < 14; i++) {
            if (card.used[i] == false) {
                allFilled = false;
            }
            else { allFilled = true; }
        }


        for (int i = 0; i < 5; i++) {
            newDice.dieArray[i].value = newDice.rollDice(newDice.dieArray[i]);
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
    //cout << "Your Yahtzee score is " << card.SetFinalScore();

}
       
     int main() {
         Game newGame;
         newGame.play(); // Runs the game

     }

