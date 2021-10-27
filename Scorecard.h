
#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <"Dice.h">
#include <"Die.h">
using namespace std;
 
class scorecard {
private:
	string catogories[];
	int bonus = 50;
	bool newSC = false;
public:
	
	int final_score;
	int total;
	int scores[14];
	bool used[14];
	void CreateScorecard();
	void getScore(int categoryIndex);
	int addScore(int key);
	void setFinalScore();
	void DisplayScoreCard();
	void selectCat();
	bool IsValidCat(int userInput);
	void DisplayScoringRules();
};
#include "Scorecard.cpp"
#endif