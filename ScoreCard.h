//header file for Score_card.cpp
#ifndef SCORE_CARD_
#define SCORE_CARD_

#include "Dice.h"

Class ScoreCard
{
	private:
		int scores[13];
		bool used[13];
		bool newSC;
 	
	public:
		ScoreCard(int score[13], int isUsed[13], bool newSC);
		void DisplayScoreCard();
		int CheckCat(int scoreAtCat);
}

#include "ScoreCard.cpp"
#endif