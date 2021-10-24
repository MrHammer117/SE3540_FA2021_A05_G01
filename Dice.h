#pragma once
#ifndef DICE_H
#define DICE_H
# include "Die.h"
#include <string>

using namespace std;
class Dice{
public:
	Dice();

	int getValue(Die retrieve);

	int rollDice(Die rollDie);

	void sortDice();

	Die dieArray[5];
};
#endif;