# include "Die.h"
# include <string>
# include <iostream>

using namespace std;

Die::Die() {
	int value = 0;
}

// Return the number from each dice roll, called from getValue() in the Dice class to simplify getting values
int Die::getDie() {
	return value;
}