#pragma once
#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
#include <string>
#include "Dice.h"

using namespace std;

class scorecard {
private:
	bool newSC = false;
	int lowerScore = 0;
	int upperScore = 0;
	int score[13];
	int yahtzeeCount = -1;

public:
	bool used[13] = { false, false, false, false, false, false, false, false, false, false, false, false, false };

	scorecard();

	int getScore(int categoryIndex);

	void DisplayScoringRules();

	void DisplayScoreCard();

	bool selectCat(int user_input, Dice dice);

	int setFinalScore();

	void DisplayFinalScoreCard();

	int upperBonus();

	int getYahtzeeCount();

	int addScore(int key, Dice dice);

	int CalcUpperSection(int catIndex, int count, Dice dice);

};
#endif
