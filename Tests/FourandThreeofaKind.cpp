#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Dice.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Die.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Die.cpp"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Dice.cpp"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Scorecard.h"
#include "C:\Users\kille\source\repos\se3540_Assignment_6\Scorecard.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ScorecardTest
{
		
		TEST_CLASS(ScorecardTest)
		{
		public:

			TEST_METHOD(ThreeOfKindTestOne) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 5;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 5;
				Dice.sortDice();
				int val1 = Scorecard.addScore(7,Dice);
				Assert::AreEqual(val1,19);
			}
			TEST_METHOD(ThreeOfKindTestTwo) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 3;
				Dice.sortDice();
				int val2 = Scorecard.addScore(7, Dice);
				Assert::AreEqual(val2, 11);

			}
			TEST_METHOD(ThreeOfKindTestThree) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 2;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 2;
				Dice.dieArray[4].value = 1;
				Dice.sortDice();
				int val3 = Scorecard.addScore(7, Dice);
				Assert::AreEqual(val3, 7);
			}

			TEST_METHOD(ThreeOfKindTestFour) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 3;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 5;
				Dice.sortDice();
				int val4 = Scorecard.addScore(7, Dice);
				Assert::AreEqual(val4, 17);
			}

			TEST_METHOD(ThreeOfKindTestFive) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 5;
				Dice.dieArray[1].value = 6;
				Dice.dieArray[2].value = 3;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 3;
				Dice.sortDice();
				int val5 = Scorecard.addScore(7, Dice);
				Assert::AreEqual(val5, 20);
			}
			TEST_METHOD(ThreeOfKindTestSix) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 5;
				Dice.dieArray[1].value = 6;
				Dice.dieArray[2].value = 3;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 1;
				Dice.sortDice();
				int val6 = Scorecard.addScore(7, Dice);
				Assert::AreEqual(val6, 0);
			}

			TEST_METHOD(FourOfKindTestOne) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 1;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 3;
				Dice.sortDice();
				int val7 = Scorecard.addScore(8, Dice);
				Assert::AreEqual(val7, 7);
			}
			TEST_METHOD(FourOfKindTestTwo) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 1;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 1;
				Dice.sortDice();
				int val8 = Scorecard.addScore(8, Dice);
				Assert::AreEqual(val8, 7);
			}
			TEST_METHOD(FourOfKindTestThree) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 1;
				Dice.sortDice();
				int val9 = Scorecard.addScore(8, Dice);
				Assert::AreEqual(val9, 7);
			}
			TEST_METHOD(FourOfKindTestFour) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 6;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 1;
				Dice.sortDice();
				int val10 = Scorecard.addScore(8, Dice);
				Assert::AreEqual(val10, 0);
			}
			TEST_METHOD(FourOfKindTestFive) {
				Dice Dice;
				scorecard Scorecard = scorecard();
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 1;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 1;
				Dice.sortDice();
				int val11 = Scorecard.addScore(8, Dice);
				Assert::AreEqual(val11, 7);
			}
		};
}



