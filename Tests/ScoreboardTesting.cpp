#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\Desktop\Testing\Scorecard.cpp"
#include "C:\Users\HP\Desktop\Testing\Scorecard.h"
#include "C:\Users\HP\Desktop\Testing\Dice.h"
#include "C:\Users\HP\Desktop\Testing\Dice.cpp"
#include "C:\Users\HP\Desktop\Testing\Die.h"
#include "C:\Users\HP\Desktop\Testing\Die.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ScorecardTest2
{
	TEST_CLASS(ScorecardTest2)
	{
	public:
	TEST_METHOD(YahtzeeBonus)
		{
			Dice rollingDice;
			Dice rollingDice2;
			rollingDice.dieArray[0].value = 5;
			rollingDice.dieArray[1].value = 5;
			rollingDice.dieArray[2].value = 5;
			rollingDice.dieArray[3].value = 5;
			rollingDice.dieArray[4].value = 5;
			
			rollingDice2.dieArray[0].value = 5;
			rollingDice2.dieArray[1].value = 5;
			rollingDice2.dieArray[2].value = 5;
			rollingDice2.dieArray[3].value = 5;
			rollingDice2.dieArray[4].value = 5;
			
			
			scorecard card;
			int score = card.addScore(12, rollingDice);
			int score2 = card.addScore(12, rollingDice2);
			int score3 = score + card.getYahtzeeCount();
			Assert::AreEqual(score3, 150);
		};
		
		TEST_METHOD(YahtzeeBonus2) {
		Dice rollingDice;
		Dice rollingDice2;
		Dice rollingDice3;

		rollingDice.dieArray[0].value = 5;
		rollingDice.dieArray[1].value = 5;
		rollingDice.dieArray[2].value = 5;
		rollingDice.dieArray[3].value = 5;
		rollingDice.dieArray[4].value = 5;

		rollingDice2.dieArray[0].value = 5;
		rollingDice2.dieArray[1].value = 5;
		rollingDice2.dieArray[2].value = 5;
		rollingDice2.dieArray[3].value = 5;
		rollingDice2.dieArray[4].value = 5;

		rollingDice3.dieArray[0].value = 5;
		rollingDice3.dieArray[1].value = 5;
		rollingDice3.dieArray[2].value = 5;
		rollingDice3.dieArray[3].value = 5;
		rollingDice3.dieArray[4].value = 5;


		scorecard card;
		int score = card.addScore(12, rollingDice);
		int score2 = card.addScore(12, rollingDice2);
		int score3 = card.addScore(12, rollingDice3);
		int score4 = score + card.getYahtzeeCount();
		Assert::AreEqual(score4, 250);

	}
		
	
	TEST_METHOD(large)
		{
			Dice rollingDice;
			scorecard scoreCard;
			rollingDice.dieArray[0].value = 1;
			rollingDice.dieArray[1].value = 2;
			rollingDice.dieArray[2].value = 3;
			rollingDice.dieArray[3].value = 4;
			rollingDice.dieArray[4].value = 5;
int score2 = scoreCard.addScore(11, rollingDice);
			Assert::AreEqual(score2, 40);
		};

		
		
		TEST_METHOD(small)
		{
			Dice rollingDice;
			scorecard scoreCard;
			rollingDice.dieArray[0].value = 1;
			rollingDice.dieArray[1].value = 3;
			rollingDice.dieArray[2].value = 4;
			rollingDice.dieArray[3].value = 5;
			rollingDice.dieArray[4].value = 6;
			int score3 = scoreCard.addScore(10, rollingDice);
			Assert::AreEqual(30, score3);
		};

		TEST_METHOD(small2)
		{

			Dice rollingDice;
			scorecard scoreCard;
			rollingDice.dieArray[0].value = 1;
			rollingDice.dieArray[1].value = 2;
			rollingDice.dieArray[2].value = 3;
			rollingDice.dieArray[3].value = 4;
			rollingDice.dieArray[4].value = 6;
			int score3 = scoreCard.addScore(10, rollingDice);
			Assert::AreEqual(30, score3);
		};
	};
}
