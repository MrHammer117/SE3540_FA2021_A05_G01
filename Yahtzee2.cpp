// Yahtzee2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;
class Game {
public:
    void play();
    int totalresult;
};

 void Game ::play()
    {
        string word;
        string word2;
        srand(time(0));
    cout << "Hello. Welcome to Yahtzee." << endl;
     cout << "Type 'play' to play Yahtzee." << endl;
     cout << "Type 'stop' if you do not want to play the game." << endl;
        cin >> word;
         if (word == "stop") {
         cout << "Leaving game.";
     };
     if (word != "stop" && word != "play") {
         cout << "Error! Please try again.";
         cout << "Hello. Welcome to Yahtzee." << endl;
         cout << "Type 'play' to play Yahtzee." << endl;
         cout << "Type 'stop' if you do not want to play the game." << endl;
         cin >> word;
     };
        
        if (word == "play") {
             cout << "Would you like to roll the dice? Enter 'yes' to roll the dice. Enter 'no' to not roll the dice. Enter 'stop' to stop the game." << endl;
         cin >> word2;

         if (word2 == "no") {
             cout << "Would you like to roll the dice? Enter 'yes' to roll the dice. Enter 'no' to not roll the dice." << endl;
             cin >> word2;
         };
         if (word2 == "stop") {
             cout << "Closing game. Goodbye";
         }
         if (word2 != "no" && word2 != "yes" && word2 != "stop") {
             cout << "Input not valid. Please try again";
             cout << "Would you like to roll the dice? Enter 'yes' to roll the dice. Enter 'no' to not roll the dice." << endl;
             cin >> word2;
         };
          if (word2 == "yes") {
             cout << "Rolling Dice..." << endl;
             Dice object;
             scoreboard object2;
             object2.DisplayScoringRules;
             for (int i = 0; i <= 13; i++) {
             object.rollDice;
             object.sortDice;
             object2.DisplayCat;
             object2.selectCat;
             object2.CheckCat;
             object2.DisplayScorecard;
         };
             object2.displayFinalScoreboard;
         };

            
};

       
        

        

        
    };
     int main() {
         play();

     };

}

        };
    };

}


