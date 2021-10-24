# include "Dice.h"
# include "Die.h"
# include <string>
# include <iostream>

using namespace std;

Dice::Dice() {
	Die dieList[5];
}

// Sends a value into getDie to retrieve the Die value
int Dice::getValue(Die retrieve) {
	return retrieve.getDie();
}

//Rolls each individual die within the Dice array
int Dice::rollDice(Die rollDie) {
	int tempReturn = 0;
	int min = 1;
	int max = 6;
	// For this to truly randomly generate please include <ctime> and have srand(time(0)); included somewhere within your code, 
	// otherwise it will repeat the same numbers
	rollDie.value = rand() % (max - min + 1) + min;
	return rollDie.value;
}


//given an array of 5 die, it will sort them in ascending order
void Dice::sortDice() {
	Die temp;
	Dice tempArr;


	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (tempArr.getValue(dieArray[i]) > tempArr.getValue(dieArray[j])) {
				temp = dieArray[i];
				dieArray[i] = dieArray[j];
				dieArray[j] = temp;
			}
		}
	}
}

