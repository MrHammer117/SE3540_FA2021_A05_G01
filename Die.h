/*
Adrian Humphrey
SE 3450
Group 01
Assignment 5 Yahtzee game
Die class implementation
Modified last: 10/26/21
*/

#pragma once
#ifndef DIE_H
#define DIE_H
#include <string>

using namespace std;
class Die {
public: 
	// Initalizes value of the roll
	Die();

	// Return the number from each dice roll, called from getValue in Dice.cpp
	int getDie();

	// roll value
	int value = 0;
};
#endif;
