#pragma once
#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
#include <string>
#include "Dice.h"

using namespace std;

class scorecard {
private:
	int bonus = 100;
	bool newSC = false;
	int lowerScore = 0;
	int upperScore = 0;
	int grandScore = 0;
	int final_score;
	int total;
	int score[14];
	
public:
	bool used[14] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false };

	scorecard();
	
	int getScore(int categoryIndex);

	void DisplayScoringRules();

	void DisplayScoreCard();

	bool selectCat(int user_input, Dice dice);

	int setFinalScore();

	int addScore(int key, Dice dice);

};
#endif;
