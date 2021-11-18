#include "pch.h"
#include "CppUnitTest.h"
#include "D:\se3540\Game\Scorecard.cpp"
#include "D:\se3540\Game\Dice.cpp"
#include "D:\se3540\Game\Die.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ScorecardTest
{
	TEST_CLASS(ScorecardTest)
	{
	public:
		
		//test the first 6 categories to see if correct values 
		TEST_METHOD(TestUpperScorer)
		{
			Dice testDice;
			scorecard testCard = scorecard();
			int score = 0;

			testDice.dieArray[0].value = 1;
			testDice.dieArray[1].value = 2;
			testDice.dieArray[2].value = 3;
			testDice.dieArray[3].value = 4;
			testDice.dieArray[4].value = 5;
			//aces
			score = testCard.addScore(1, testDice);
			Assert::AreEqual(score, 1);

			//twos
			score = testCard.addScore(2, testDice);
			Assert::AreEqual(score, 2);
			
			//threes
			score = testCard.addScore(3, testDice);
			Assert::AreEqual(score, 3);

			//fours
			score = testCard.addScore(4, testDice);
			Assert::AreEqual(score, 4);

			//fives
			score = testCard.addScore(5, testDice);
			Assert::AreEqual(score, 5);

			//sixes
			score = testCard.addScore(6, testDice);
			Assert::AreEqual(score, 0);

		}

		
		

		//fills a scorecard and compares grand total
		TEST_METHOD(TestFinalScore)
		{
			Dice testDice;
			scorecard testCard = scorecard();
			int score = 0;

			testDice.dieArray[0].value = 1;
			testDice.dieArray[1].value = 2;
			testDice.dieArray[2].value = 3;
			testDice.dieArray[3].value = 4;
			testDice.dieArray[4].value = 5;

			for (int i = 1; i < 14; i++) {
				testCard.selectCat(i, testDice);
			}
			
			/*
			1: 1
			2: 2
			3: 3
			4: 4
			5: 5
			6: 0
			totalUpr: 15
			upperBonus: 0
			3oK: 0
			4oK: 0
			fullHouse: 0
			smallStr: 30
			largeStr: 40
			yahtzee: 0
			chance: 15
			totalLwr: 85
			GT: 100
			*/

			score = testCard.setFinalScore();

			Assert::AreEqual(score, 100);

		}

		//checks used array to see if it is changed as the categories are being filled
		TEST_METHOD(TestUsedCat)
		{
			Dice testDice;
			scorecard testCard = scorecard();
			bool res;

			testDice.dieArray[0].value = 1;
			testDice.dieArray[1].value = 2;
			testDice.dieArray[2].value = 3;
			testDice.dieArray[3].value = 4;
			testDice.dieArray[4].value = 5;
			
			testCard.selectCat(5, testDice);
			testCard.selectCat(1, testDice);
			testCard.selectCat(13, testDice);

			Assert::IsTrue(testCard.used[4]);
			Assert::IsTrue(testCard.used[0]);
			Assert::IsTrue(testCard.used[12]);
		}

	};

}
