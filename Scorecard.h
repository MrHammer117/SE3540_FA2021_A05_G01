#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <"Dice.h">
#include <"Die.h">
#include <"Yahtzee2.cpp">
using namespace std;
 
class scorecard {
private:
	int bonus = 100;
	bool newSC = false;
public:
	
	int final_score;
	int total;
	int scores[14];
	bool used[14];
	void CreateScorecard();
	void getScore(int categoryIndex);
	bool selectCat(int user_input);
	void addScore(int key);
	void setFinalScore();
	void DisplayScoreCard();
	bool IsValidCat(int userInput);
	void DisplayScoringRules()
};
#include "Scorecard.cpp"
#endif
