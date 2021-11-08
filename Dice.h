/*
Adrian Humphrey
Rogelio Rojas (Bulk of sort die)
SE 3450
Group 01
Assignment 5 Yahtzee game
Dice class implementation
Modified last: 10/26/21
*/

#ifndef DICE_H
#define DICE_H
#include "Die.h"
#include <string>

using namespace std;
class Dice{
public:
	// Initializes an array of Die objects so they can easily be sorted and compared
	Dice();
	Dice(Die first, Die second, Die thrid, Die fourth, Die fifth);

	// Sends a value into getDie to retrieve the Die value
	int getValue(Die retrieve);

	// Rolls each individual die within the Dice array
	int rollDice(Die rollDie);

	// Given an array of 5 die, it will sort them in ascending order
	void sortDice();

	Die dieArray[5];
};
#endif
