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
				scorecard Scorecard;
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 5;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 5;
				int val1 = Scorecard.getScore(6);
				Assert::AreEqual(val1,19);
			}
			TEST_METHOD(ThreeOfKindTestTwo) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 3;
				int val2 = Scorecard.getScore(6);
				Assert::AreEqual(val2, 11);



			}
			TEST_METHOD(ThreeOfKindTestThree) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 2;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 2;
				Dice.dieArray[4].value = 1;
				int val3 = Scorecard.getScore(6);
				Assert::AreEqual(val3, 7);



			}

			TEST_METHOD(ThreeOfKindTestFour) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 3;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 5;
				int val4 = Scorecard.getScore(6);
				Assert::AreEqual(val4, 17);
			}

			TEST_METHOD(ThreeOfKindTestFive) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 5;
				Dice.dieArray[1].value = 6;
				Dice.dieArray[2].value = 3;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 3;
				int val5 = Scorecard.getScore(6);
				Assert::AreEqual(val5, 20);
			}
			TEST_METHOD(ThreeOfKindTestSix) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 5;
				Dice.dieArray[1].value = 6;
				Dice.dieArray[2].value = 3;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 1;
				int val6 = Scorecard.getScore(6);
				Assert::AreEqual(val6, 0);
			}

			TEST_METHOD(FourOfKindTestOne) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 1;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 3;
				int val7 = Scorecard.getScore(7);
				Assert::AreEqual(val7, 7);
			}
			TEST_METHOD(FourOfKindTestTwo) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 3;
				Dice.dieArray[1].value = 1;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 1;
				int val8 = Scorecard.getScore(7);
				Assert::AreEqual(val8, 7);
			}
			TEST_METHOD(FourOfKindTestThree) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 3;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 1;
				Dice.dieArray[4].value = 1;
				int val9 = Scorecard.getScore(7);
				Assert::AreEqual(val9, 7);
			}
			TEST_METHOD(ThreeOfKindTestFour) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 6;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 1;
				int val10 = Scorecard.getScore(7);
				Assert::AreEqual(val10, 0);
			}
			TEST_METHOD(FourOfKindTestFour) {
				Dice Dice;
				scorecard Scorecard;
				Dice.dieArray[0].value = 1;
				Dice.dieArray[1].value = 1;
				Dice.dieArray[2].value = 1;
				Dice.dieArray[3].value = 3;
				Dice.dieArray[4].value = 1;
				int val11 = Scorecard.getScore(7);
				Assert::AreEqual(val11, 7);
			}
			
	};
}
