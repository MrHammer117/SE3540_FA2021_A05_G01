//implementation of functions/methods of scorecard Class
#include <iostream>
#include <string>
#include "Scorecard.h"

//creates an new scorecard, fills the score array with -1
//and the used array with false
scorecard::scorecard() {
	int bonus = 100;
	bool newSC = false;
	int lowerScore = 0;
	int upperScore = 0;
	int grandScore = 0;
	int score[15];
	bool used[15];
}

//gets the score at a particular category
int scorecard::getScore(int categoryIndex) {
	return score[categoryIndex];
}

void scorecard::DisplayScoringRules() {


	// will print all options and description
	string msg = "------------\nThe objective of YAHTZEE is to get as many points as\npossible by rolling five dice and getting certain combinations of dice.\nEach turn, a player may roll 5 die and choose a category to score.\nUnlike classic YAHTZEE, the player may not reroll unwanted die.\nAfter choosing a category, the game will move to the next round.\nThe player may choose a categoy even if they have no die to match\nthe category, however, upon doing so, they will receive a zero at that category.\nThe game will end after all categoies have been filled.\n------------\n";
	cout << msg;
	cout << "\n*** Upper Section ***";
	cout << "\n 1)'Aces' - Adds all ones in hand";
	cout << "\n 2)'Twos' - Add all twos in hand";
	cout << "\n 3)'Threes' - Add all threes in hand";
	cout << "\n 4)'Fours' - Add all fours in hand";
	cout << "\n 5)'Fives' - Add all fives in hand";
	cout << "\n 6)'Sixes' - Add all sixes in hand";
	cout << "\n*** Lower Section ***";
	cout << "\n 7)'3 of a Kind' - Add all 5 dice, and enter sum to score.";
	cout << "\n 8)'4 of a Kind' - Add all 5 dice, and enter sum to score.";
	cout << "\n 9)'Full House' - 3 of a kind, and a separate pair. Worth 25 points.";
	cout << "\n 10)'Small Straight' - Roll 4 sequential numbers. Worth 30 points.";
	cout << "\n 11)'Large Straight' - Roll 5 sequential numbers. Worth 40 points.";
	cout << "\n 12)'YAHTZEE!' - Roll 5 of the same number. Worth 50 points.";
	cout << "\n 13)'Chance' - Add the total of all five dice, and enter sum to score.";
	cout << "\n 14)'Bonus' - Roll 5 of the same number. Worth 100 points after you have used YAHTZEE.";
}


void scorecard::DisplayScoreCard() {

	//prints scorecard with its current scores... prints EMPTY if not been used ";

	cout << "\nPlease select an EMPTY category(1-13)";
	cout << "\n*** Upper Section ***";

	if (getScore(0) <= -1 && used[0] == false) {
		cout << "\n 1)'Aces': EMPTY";
	}
	else {
		cout << "\n 1)'Aces': " << getScore(0);
	}
	if (getScore(1) <= -1 && used[1] == false) {
		cout << "\n 2)'Twos': EMPTY";
	}
	else {
		cout << "\n 2)'Twos': " << getScore(1);
	}
	if (getScore(2) <= -1 && used[2] == false) {
		cout << "\n 3)'Threes': EMPTY";
	}
	else {
		cout << "\n 3)'Threes': " << getScore(2);
	}
	if (getScore(3) <= -1 && used[3] == false) {
		cout << "\n 4)'Fours': EMPTY";
	}
	else {
		cout << "\n 4)'Fours': " << getScore(3);
	}
	if (getScore(4) <= -1 && used[4] == false) {
		cout << "\n 5)'Fives': EMPTY";
	}
	else {
		cout << "\n 5)'Fives': " << getScore(4);
	}
	if (getScore(5) <= -1 && used[5] == false) {
		cout << "\n 6)'Sixes': EMPTY";
	}
	else {
		cout << "\n 6)'Sixes': " << getScore(5);
	}
	cout << "\n*** Lower Section ***";
	if (getScore(6) <= -1 && used[6] == false) {
		cout << "\n 7)'3 of a Kind': EMPTY";
	}
	else {
		cout << "\n 7)'3 of a Kind': " << getScore(6);
	}
	if (getScore(7) <= -1 && used[7] == false) {
		cout << "\n 8)'4 of a Kind': EMPTY";
	}
	else {
		cout << "\n 8)'4 of a Kind': " << getScore(7);
	}
	if (getScore(8) <= -1 && used[8] == false) {
		cout << "\n 9)'Full House': EMPTY";
	}
	else {
		cout << "\n 9)'Full House': " << getScore(8);
	}
	if (getScore(9) <= -1 && used[9] == false) {
		cout << "\n 10)'Small Straight': EMPTY";
	}
	else {
		cout << "\n 10)'Small Straight': " << getScore(9);
	}
	if (getScore(10) <= -1 && used[10] == false) {
		cout << "\n 11)'Large Straight': EMPTY";
	}
	else {
		cout << "\n 11)'Large Straight': " << getScore(10);
	}
	if (getScore(11) <= -1 && used[11] == false) {
		cout << "\n 12)'YAHTZEE!': EMPTY";
	}
	else {
		cout << "\n 12)'YAHTZEE!': " << getScore(11);
	}
	if (getScore(12) <= -1 && used[12] == false) {
		cout << "\n 13)'Chance': EMPTY";
	}
	else {
		cout << "\n 13)'Chance': " << getScore(12);
	}
	/* - Need to figure out how to better implement this!
	if (getScore(15) <= -1) {
		cout << "\n 14)'Bonus': EMPTY";
	}
	else {
		cout << "\n 14)'Bonus': " << getScore(13);
	}
	*/


}


/*
//checks to see if user input is a valid category
//will probably crash if non integer number is entered
bool scorecard::IsValidCat(int userInput){
	if (userInput > 0 && userInput <=13){
		cout << "Please enter a valid category (1-14)"
		return false;
	}
	return true;

}
*/


bool scorecard::selectCat(int user_input, Dice dice)
{
	int temp_score = NULL;
	DisplayScoreCard();

	if (used[user_input-1] == false)
	{
		temp_score = addScore(user_input, dice);
		score[user_input - 1] = temp_score;
		used[user_input - 1] = true;
	}
	else
	{
		cout << "This catogory is already filled please select another one.";
	}
	return used[user_input - 1];
}

// This method adds all the scores in the scores[] into final score
int scorecard::setFinalScore()
{
	for (int i = 0; i < 14; i++)
	{
		final_score += score[i];
	}
	return(final_score);
}

// Key is the cateogory number and this method is for getting the dice values and make the score and send it to selectCat
int scorecard::addScore(int key, Dice dice)
{

	// Goes to all of the spots in myScorecard.used and then gets the score. If myScorecard.used[i] != true then,
			 // it will go to the next.

	int check = 0;
	int count = 0;
	int countAcending = 0;
	int countDecending = 0;
	int check1 = 0;
	int check2 = 0;
	int newVal = 0;


	switch (key) {


		///////////////////////
		// UPPER SCORE SHEET // - Working
		///////////////////////


	// ACES
	case 1:
		// Goes through all of the dice and if they equal 1. IF it does, increment count by 1.
		// IF count is 0 score for that cat = 0. Else add count * 1 to upperScore.
		for (int j = 0; j < 5; j++) {
			if (dice.getValue(dice.dieArray[j]) == 1) { count++; }
		}
		upperScore += (count * 1);
		return (count * 1);

	// TWOS
	case 2:
		// Goes through all of the dice and if they equal 2. IF it does, increment count by 1.
		// IF count is 0 score for that cat = 0. Else add count * 2 to upperScore.
		for (int j = 0; j < 5; j++) {
			if (dice.getValue(dice.dieArray[j]) == 2) { count++; }
		}

		upperScore += (count * 2);
		return (count * 2);

	// THREES
	case 3:
		// Goes through all of the dice and if they equal 3. IF it does, increment count by 1.
		// IF count is 0 score for that cat = 0. Else add count * 3 to upperScore.
		for (int j = 0; j < 5; j++) {
			if (dice.getValue(dice.dieArray[j]) == 3) { count++; }
		}
			upperScore += (count * 3);
			return (count * 3);

	// FOURS
	case 4:
		// Goes through all of the dice and if they equal 4. IF it does, increment count by 1.
		// IF count is 0 score for that cat = 0. Else add count * 4 to upperScore.
		for (int j = 0; j < 5; j++) {
			if (dice.getValue(dice.dieArray[j]) == 4) { count++; }
		}
			upperScore += (count * 4);
			return (count * 4);

	// FIVES
	case 5:
		// Goes through all of the dice and if they equal 5. IF it does, increment count by 1.
		// IF count is 0 score for that cat = 0. Else add count * 5 to upperScore.
		for (int j = 0; j < 5; j++)
			if (dice.getValue(dice.dieArray[j]) == 5) { count++; }

		upperScore += (count * 5);
		return (count * 5);

	// SIXES
	case 6:
		// Goes through all of the dice and if they equal 6. IF it does, increment count by 1.
		// IF count is 0 score for that cat = 0. Else add count * 6 to upperScore.
		for (int j = 0; j < 5; j++)
			if (dice.getValue(dice.dieArray[j]) == 6) { count++; }

		upperScore += (count * 6);
		return (count * 6);

/*
	// TOP BONUS - Should this really be a category? I feel this throws off the number system - Adrian Humphrey
	case 7:

		if(grandScore >= 63){
			upperScore += 35;
			return 35;
		}

*/
		///////////////////////
		// LOWER SCORE SHEET //
		///////////////////////


	// 3 OF A KIND - FIXED?
	// [3,3,3,5,6]
	// [1,2,4,4,4]
	case 7:
		check = 0;
		count = 0;
		/*
		// Checks if valid dice input. Using checks because the dice are sorted.
		for (int j = 0; j < 5; j++) {

			if (check != dice.getValue(dice.dieArray[j])) {
				check = dice.getValue(dice.dieArray[j]);
			}
			else {
				count++;
			}
		}


		if (count >= 3) {
			for (int j = 0; j < 5; j++){
				newVal += dice.getValue(dice.dieArray[j]);
				lowerScore += dice.getValue(dice.dieArray[j]);
			}
		}
		*/
		if ((dice.getValue(dice.dieArray[0]) == dice.getValue(dice.dieArray[1])) && (dice.getValue(dice.dieArray[1]) == dice.getValue(dice.dieArray[2]))) {
			for (int j = 0; j < 5; j++) {
				lowerScore += dice.getValue(dice.dieArray[j]);
				newVal += dice.getValue(dice.dieArray[j]);
			}
		}
		if ((dice.getValue(dice.dieArray[1]) == dice.getValue(dice.dieArray[2])) && (dice.getValue(dice.dieArray[2]) == dice.getValue(dice.dieArray[3]))) {
			for (int j = 0; j < 5; j++) {
				lowerScore += dice.getValue(dice.dieArray[j]);
				newVal += dice.getValue(dice.dieArray[j]);
			}
		}
		if ((dice.getValue(dice.dieArray[2]) == dice.getValue(dice.dieArray[3])) && (dice.getValue(dice.dieArray[3]) == dice.getValue(dice.dieArray[4]))) {
			for (int j = 0; j < 5; j++) {
				lowerScore += dice.getValue(dice.dieArray[j]);
				newVal += dice.getValue(dice.dieArray[j]);
			}
		}
		return newVal;

	// 4 of a kind -- FIXED?
	// [1,1,1,1,3]
	// [3,5,5,5,5]
	case 8:

		check = dice.getValue(dice.dieArray[0]);
		count = 0;
		/*
		// Checks if valid dice input. Using checks because the dice are sorted.
		for (int j = 1; j < 5; j++) {
			if (check != dice.getValue(dice.dieArray[j])) {

				check = dice.getValue(dice.dieArray[j]);
			}
			else {
				count++;
			}
		}

		if (count == 4) {
			for (int j = 0; j < 5; j++){
				lowerScore += dice.getValue(dice.dieArray[j]);
				newVal += dice.getValue(dice.dieArray[j]);
			}
		}
		*/

		if ((dice.getValue(dice.dieArray[0]) == dice.getValue(dice.dieArray[1])) && (dice.getValue(dice.dieArray[1]) == dice.getValue(dice.dieArray[2]))
			&& (dice.getValue(dice.dieArray[2]) == dice.getValue(dice.dieArray[3]))) {
			for (int j = 0; j < 5; j++) {
				lowerScore += dice.getValue(dice.dieArray[j]);
				newVal += dice.getValue(dice.dieArray[j]);
			}
		}
		if ((dice.getValue(dice.dieArray[1]) == dice.getValue(dice.dieArray[2])) && (dice.getValue(dice.dieArray[2]) == dice.getValue(dice.dieArray[3]))
			&& (dice.getValue(dice.dieArray[3]) == dice.getValue(dice.dieArray[4]))) {
			for (int j = 0; j < 5; j++) {
				lowerScore += dice.getValue(dice.dieArray[j]);
				newVal += dice.getValue(dice.dieArray[j]);
			}
		}

		return newVal;


	// FULL HOUSE (3 of a kind AND two of a kind) - WORKING
	// [1,1,1,5,5]
	// [2,2,4,4,4]
	case 9:

		//if (3 of a kind && 2 of a kind) || (2 of a kind && 3 of a kind)
		if (((dice.getValue(dice.dieArray[0]) == dice.getValue(dice.dieArray[1])) && (dice.getValue(dice.dieArray[1]) == dice.getValue(dice.dieArray[2])) && // 3 of a kind
			(dice.getValue(dice.dieArray[3]) == dice.getValue(dice.dieArray[4])) && //two of a kind
			(dice.getValue(dice.dieArray[2]) != dice.getValue(dice.dieArray[3]))) || //not 4 of a kind
			((dice.getValue(dice.dieArray[0]) == dice.getValue(dice.dieArray[1])) && //two of a kind
			(dice.getValue(dice.dieArray[2]) == dice.getValue(dice.dieArray[3])) && (dice.getValue(dice.dieArray[3]) == dice.getValue(dice.dieArray[4])) && //3 of a kind
			(dice.getValue(dice.dieArray[1]) != dice.getValue(dice.dieArray[2])))) //not 3 of kind in first 3 die
			{
				lowerScore += 25; //add 25 to lowerScore
				return 25;
			}

		return 0;

	// SMALL STRAIGHT (four number sequence) - Working some of the time
	// [1,2,3,4,6]
	// [1,3,4,5,6]
	case 10:

		countAcending = 0;
		countDecending = 0;

		for (int j = 0; j < 5; j++) {
			if ((dice.getValue(dice.dieArray[j])) == dice.getValue(dice.dieArray[j+1])+1) {
				countAcending++;
			}
		}

		if (countAcending >= 3) {
			lowerScore += 30;
			return 30;
		}

		for (int j = 4; j > -1; j--) {
			if ((dice.getValue(dice.dieArray[j])-1) == dice.getValue(dice.dieArray[j - 1])) {
				countDecending++;
			}
		}

		if (countDecending >= 3) {
			lowerScore += 30;
			return 30;
		}

		return 0;


	// LARGE STRAIGHT (five number sequence) - Working some of the time
	// [1,2,3,4,5]
	case 11:

		count = 0;
		for (int j = 0; j < 4; j++) {
			if (((dice.getValue(dice.dieArray[j]) + 1) == (dice.getValue(dice.dieArray[j+1])))) {
				count++;
			}
		}
		if (count == 3) {
			lowerScore += 40;
			return 40;
		}

		return 0;


	// YAHTZEE AND YAHTZEE BONUS - unsure
	// [1,1,1,1,1]
	case 12:

		count = 1;
		check = dice.getValue(dice.dieArray[0]);

		for(int j = 0; j < 5; j++){
			if(check == dice.getValue(dice.dieArray[j])) {
				count++;
			}
		}

		if(count == 5){
			lowerScore += 50;
			return 50;
		}

		return 0;


	// CHANCE
	// Adds up all of the dice - WORKING
	case 13:

		for (int j = 0; j < 5; j++) {
			newVal += dice.getValue(dice.dieArray[j]);
			lowerScore += dice.getValue(dice.dieArray[j]);
		}
		return newVal;
	}

}
