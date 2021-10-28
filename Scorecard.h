#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Dice.h"
#include "Die.h"
/*
#include "Yahtzee2.cpp"
*/
using namespace std;

class scorecard {
private:
	int bonus = 100;
	bool newSC = false;
	int lowerScore = 0;
	int upperScore = 0;
	int grandScore = 0;
public:

	int final_score;
	int total;
	int scores[14];
	bool used[14];
	void CreateScorecard();
	int getScore(int categoryIndex);
	bool selectCat(int user_input, Dice dice);
	int addScore(int key, Dice dice);
	int setFinalScore();
	void DisplayScoreCard();
	bool IsValidCat(int userInput);
	void DisplayScoringRules();
};
#include "Scorecard.cpp"
#endif
