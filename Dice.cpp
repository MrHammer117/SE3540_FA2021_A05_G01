# include "Dice.h"
# include "Die.h"
# include <string>
# include <iostream>

using namespace std;

Dice::Dice() {
	Die dieList[5];
}

int Dice::getValue(Die retrieve) {
	return retrieve.getDie();
}

int Dice::rollDice(Die rollDie) {
	int tempReturn = 0;
	int min = 1;
	int max = 6;
	rollDie.value = rand() % (max - min + 1) + min;
	return rollDie.value;
}

