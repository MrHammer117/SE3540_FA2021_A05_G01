#ifndef SCORECARD_H
#define SCORECARD_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;
 
class scorecard {
private:
	string catogories[];
	int bonus = 50;
public:
	int total;
	int scores[13];
	bool used[13];
	void getScore(int score)
	void checkCat()
	void selectCat()
	void addScore()
	void setFinalScore()
};