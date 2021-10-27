/*
Adrian Humphrey
SE 3450
Group 01
Assignment 5 Yahtzee game
Die class implementation
Modified last: 10/26/21
*/

# include "Die.h"
# include <string>
# include <iostream>

using namespace std;

// Initalizes value of the roll
Die::Die() {
	int value = 0;
}

// Return the number from each dice roll, called from getValue in Dice.cpp
int Die::getDie() {
	return value;
}