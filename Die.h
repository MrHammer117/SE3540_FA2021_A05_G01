#pragma once
#ifndef DIE_H
#define DIE_H
#include <string>

using namespace std;
class Die {
public: 
	Die();
	// Returns the value of each die roll
	int getDie();

	int value = 0;
};
#endif;
