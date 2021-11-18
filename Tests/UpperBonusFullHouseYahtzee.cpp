#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Dice.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Die.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Die.cpp"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Dice.cpp"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Scorecard.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Scorecard.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ScorecardTest3
{

	TEST_CLASS(ScorecardTest3)
	{
	public:

		// Testing to see if FULL HOUSE is NOT EQUAL
		TEST_METHOD(FullHouseOne) {
			Dice Dice;
			scorecard Scorecard;

			Dice.dieArray[0].value = 2;
			Dice.dieArray[1].value = 2;
			Dice.dieArray[2].value = 4;
			Dice.dieArray[3].value = 4;
			Dice.dieArray[4].value = 4;

			int val = Scorecard.addScore(9, Dice);
			Assert::AreEqual(val, 25)
		}

		TEST_METHOD(FullHouseTwo) {
			Dice Dice;
			scorecard Scorecard;

			Dice.dieArray[0].value = 3;
			Dice.dieArray[1].value = 3;
			Dice.dieArray[2].value = 3;
			Dice.dieArray[3].value = 6;
			Dice.dieArray[4].value = 6;

			int val = Scorecard.addScore(9, Dice);
			Assert::AreEqual(val, 25);
		}
		
		// Testing to see if FULL HOUSE is NOT EQUAL
		TEST_METHOD(FullHouseThree) {
			Dice Dice;
			scorecard Scorecard;

			Dice.dieArray[0].value = 3;
			Dice.dieArray[1].value = 3;
			Dice.dieArray[2].value = 3;
			Dice.dieArray[3].value = 6;
			Dice.dieArray[4].value = 8;

			int val = Scorecard.addScore(9, Dice);
			Assert::AreNotEqual(val, 25);
		}

		TEST_METHOD(FullHouseThree) {
			Dice Dice;
			scorecard Scorecard;

			Dice.dieArray[0].value = 1;
			Dice.dieArray[1].value = 3;
			Dice.dieArray[2].value = 8;
			Dice.dieArray[3].value = 8;
			Dice.dieArray[4].value = 8;

			int val = Scorecard.addScore(9, Dice);
			Assert::AreNotEqual(val, 25);
		}

		// Testing to see if UPPER BONUS works
		TEST_METHOD(UpperBonusTest) {
			Dice Dice;
			scorecard Scorecard;

			Dice.dieArray[0].value = 6;
			Dice.dieArray[1].value = 6;
			Dice.dieArray[2].value = 6;
			Dice.dieArray[3].value = 6;
			Dice.dieArray[4].value = 6;

			Scorecard.addScore(6, Dice);

			Dice.dieArray[0].value = 5;
			Dice.dieArray[1].value = 5;
			Dice.dieArray[2].value = 5;
			Dice.dieArray[3].value = 5;
			Dice.dieArray[4].value = 5;

			Scorecard.addScore(5, Dice);

			Dice.dieArray[0].value = 4;
			Dice.dieArray[1].value = 4;
			Dice.dieArray[2].value = 4;
			Dice.dieArray[3].value = 4;
			Dice.dieArray[4].value = 4;

			Scorecard.addScore(4, Dice);

			int val = Scorecard.upperBonus();
			Assert::AreEqual(val, 35);

		}

		// Testing to see if YAHTZEE is EQUAL
		TEST_METHOD(YahtzeeTestOne) {
			Dice Dice;
			scorecard Scorecard;

			Dice.dieArray[0].value = 1;
			Dice.dieArray[1].value = 1;
			Dice.dieArray[2].value = 1;
			Dice.dieArray[3].value = 1;
			Dice.dieArray[4].value = 1;

			int val = Scorecard.addScore(12, Dice);
			Assert::AreEqual(val, 50);
		}

		// Testing to see if YAHTZEE is NOT EQUAL
		TEST_METHOD(YahtzeeTestTwo) {
			Dice Dice;
			scorecard Scorecard;

			Dice.dieArray[0].value = 5;
			Dice.dieArray[1].value = 7;
			Dice.dieArray[2].value = 5;
			Dice.dieArray[3].value = 5;
			Dice.dieArray[4].value = 5;

			int val = Scorecard.addScore(12, Dice);
			Assert::AreNotEqual(val, 50);
		}

	};
}
