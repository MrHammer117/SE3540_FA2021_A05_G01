
#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <"Dice.h">
#include <"Die.h">
using namespace std;
 
class scorecard {
private:
	//string catogories[]; unused?
	int bonus = 50;
	bool newSC = false;
	;
public:
	
	//---
	int final_score;
	int total;
	int scores[13];
	bool used[13];
	void CreateScorecard();
	void getScore(int categoryIndex)
	void checkCat()
	bool selectCat(int user_input)
	void addScore()
	void setFinalScore()
	void DisplayScoreCard();
	bool IsValidCat(int userInput);
	void DisplayScoringRules()
};
#include "Scorecard.cpp"
#endif