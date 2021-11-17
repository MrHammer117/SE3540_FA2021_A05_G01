#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Programming projects\Yahtzee\Dice.h"
#include "D:\Programming projects\Yahtzee\Die.h"
#include "D:\Programming projects\Yahtzee\Die.cpp"
#include "D:\Programming projects\Yahtzee\Dice.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DiceTest
{
	TEST_CLASS(DiceTest)
	{
	public:
		
		TEST_METHOD(rngTestOne){
			Dice diceRoll;
			int val1 = diceRoll.rollDice(diceRoll.dieArray[0]);
			Assert::AreNotEqual(val1, 0);
			Assert::AreNotEqual(val1, 7);
		}
		TEST_METHOD(rngTestTwo) {
			Dice diceRoll;
			int val2 = diceRoll.rollDice(diceRoll.dieArray[1]);
			Assert::AreNotEqual(val2, 0);
			Assert::AreNotEqual(val2, 7);
		}
		TEST_METHOD(rngTestThree) {
			Dice diceRoll;
			int val3 = diceRoll.rollDice(diceRoll.dieArray[2]);
			Assert::AreNotEqual(val3, 0);
			Assert::AreNotEqual(val3, 7);
		}
		TEST_METHOD(rngTestFour) {
			Dice diceRoll;
			int val4 = diceRoll.rollDice(diceRoll.dieArray[3]);
			Assert::AreNotEqual(val4, 0);
			Assert::AreNotEqual(val4, 7);
		}
		TEST_METHOD(rngTestFive) {
			Dice diceRoll;
			int val5 = diceRoll.rollDice(diceRoll.dieArray[4]);
			Assert::AreNotEqual(val5, 0);
			Assert::AreNotEqual(val5, 7);
		}
		TEST_METHOD(testSortMethod) {
			Dice diceRoll;
			diceRoll.dieArray[0].value = diceRoll.rollDice(diceRoll.dieArray[0]);
			diceRoll.dieArray[1].value = diceRoll.rollDice(diceRoll.dieArray[1]);
			diceRoll.dieArray[2].value = diceRoll.rollDice(diceRoll.dieArray[2]);
			diceRoll.dieArray[3].value = diceRoll.rollDice(diceRoll.dieArray[3]);
			diceRoll.dieArray[4].value = diceRoll.rollDice(diceRoll.dieArray[4]);
			diceRoll.sortDice();
			int check = diceRoll.checkSort(diceRoll);
			Assert::AreEqual(check, 1);
		}
		TEST_METHOD(testGetMethod) {
			Dice diceRoll;
			diceRoll.dieArray[0].value = 5;
			int currVal = diceRoll.getValue(diceRoll.dieArray[0]);
			Assert::AreEqual(currVal, 5);
		}
	};
}
