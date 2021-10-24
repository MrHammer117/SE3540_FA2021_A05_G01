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
        cout << "Hello. Welcome to Yahtzee. Type 'play' to play, type 'stop' in order to exit the game." << endl;
        cin >> word;
        if (word == "play") {
            cout << "Rolling Dice..." << endl;
            srand(time(0));
            Dice object1;
            Show scorecard;
            choose cat
                show updated scoreboard
                roll dice again.


        };

        if (word == "stop") {
            cout << "Leaving game.";

        };
        if (word != "stop" && word != "play") {
            cout << "Error! Please try again.";
        };
    };

}


