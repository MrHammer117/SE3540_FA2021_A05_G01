
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
	//---
	int scores[13];
	bool used[13];
	void CreateScorecard();
	void getScore(int categoryIndex); //gets the score at an index in array scores[]
	void displayFinalScoreCard();//display final scores along with bonuses and final score
	void checkCat();
	bool selectCat(int user_input);
	void addScore();
	void setFinalScore();
	void DisplayScoreCard();//call this at the beginning of each round so user can see scores, as well as used and unused categories
	//bool IsValidCat(int userInput); 
	void DisplayScoringRules();//call this at the begining of the gama
};
#include "Scorecard.cpp"
#endif