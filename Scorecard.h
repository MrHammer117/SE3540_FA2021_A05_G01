
#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
//include dice
using namespace std;
 
class scorecard {
private:
	string catogories[];
	int bonus = 50;
	bool newSC = false;
public:
	
	int total;
	int scores[13];
	bool used[13];
	void CreateScorecard();
	void getScore(int categoryIndex)
	void checkCat()
	void selectCat()
	void addScore()
	void setFinalScore()
	void DisplayScoreCard();
	bool IsValid(int userInput);
	void DisplayScoringRules()
};
#include "Scorecard.cpp"
#endif