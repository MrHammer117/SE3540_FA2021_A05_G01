//implementation of functions/methods of scorecard Class

#include "Scorecard.h"




//creates an new scorecard, fills the score array with -1 
//and the used array with false 
void scorecard::CreateScorecard(){
	for(int i = 0; i < 13; i++){
			SetScore(scores[i],used[i],-1,false);
	}
	
}

//gets the score at a particular category
int scorecard::getScore(int categoryIndex){
	return scores[categoryIndex];
}



void scorecard::DisplayScoringRules(){
		
	
	// will print all options and description
	string msg  = "------------\nThe objective of YAHTZEE is to get as many points as\npossible by rolling five dice and getting certain combinations of dice.\nEach turn, a player may roll 5 die and choose a category to score.\nUnlike classic YAHTZEE, the player may not reroll unwanted die.\nAfter choosing a category, the game will move to the next round.\nThe player may choose a categoy even if they have no die to match\nthe category, however, upon doing so, they will receive a zero at that category.\nThe game will end after all categoies have been filled.\n------------\n";
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
	}
	
	
}


void scorecard::DisplayScoreCard(){
		
	//prints scorecard with its current scores... prints EMPTY if not been used ";	
	
		cout << "\nPlease select an EMPTY category(1-13)";
		cout << "\n*** Upper Section ***";
		
		if (getScore[0] == -1 && used[0] == false){
			cout << "\n 1)'Aces': EMPTY"
		}else{
			cout << "\n 1)'Aces': " << getScore[0];
		}
		if (getScore[1] == -1 && used[1] == false){
			cout << "\n 2)'Twos': EMPTY"
		}else{
			cout << "\n 2)'Twos': " << getScore[1];
		}
		if (getScore[2] == -1 && used[2] == false){
			cout << "\n 3)'Threes': EMPTY"
		}else{
			cout << "\n 3)'Threes': " << getScore[2] ;
		}
		if (getScore[3] == -1 && used[3] == false){
			cout << "\n 4)'Fours': EMPTY"
		}else{
			cout << "\n 4)'Fours': " << getScore[3];
		}
		if (getScore[4] == -1 && used[4] == false){
			cout << "\n 5)'Fives': EMPTY"
		}else{
			cout << "\n 5)'Fives': " << getScore[4];
		}
		if (getScore[5] == -1 && used[5] == false){
			cout << "\n 6)'Sixes': EMPTY"
		}else{
			cout << "\n 6)'Sixes': " << getScore[5];
		}
		cout << "\n*** Lower Section ***";
		if (getScore[6] == -1 && used[6] == false){
			cout << "\n 7)'3 of a Kind': EMPTY"
		}else{
			cout << "\n 7)'3 of a Kind': " << getScore[6];
		}
		if (getScore[7] == -1 && used[7] == false){
			cout << "\n 8)'4 of a Kind': EMPTY"
		}else{
			cout << "\n 8)'4 of a Kind': " << getScore[7];
		}
		if (getScore[8] == -1 && used[8] == false){
			cout << "\n 9)'Full House': EMPTY"
		}else{
			cout << "\n 9)'Full House': " << getScore[8];
		}
		if (getScore[9] == -1 && used[9] == false){
			cout << "\n 10)'Small Straight': EMPTY"
		}else{
			cout << "\n 10)'Small Straight': " << getScore[9];
		}
		if (getScore[10] == -1 && used[10] == false){
			cout << "\n 11)'Large Straight': EMPTY"
		}else{
			cout << "\n 11)'Large Straight': " << getScore[10];
		}
		if (getScore[11] == -1 && used[11] == false){
			cout << "\n 12)'YAHTZEE!': EMPTY"
		}else{
			cout << "\n 12)'YAHTZEE!': " << getScore[11];
		}
		if (getScore[12] == -1 && used[12] == false){
			cout << "\n 13)'Chance': EMPTY"
		}else{
			cout << "\n 13)'Chance': " << getScore[12];
		}
			
	
	
}
//display final scores along with bonuses and final score
void displayFinalScoreCard(){
	Scorer myScorer;
	
	cout << "\n*** Upper Section ***";
	cout << "\n Aces: "<< scores[0];
	cout << "\n Twos: "<< scores[1];
	cout << "\n Threes: "<< scores[2];
	cout << "\n Fours: "<< scores[3];
	cout << "\n Fives: "<< scores[4];
	cout << "\n Sixes: "<< scores[5];
	cout << "\n Total Score: "<< myScorer.getUpperScore();
	cout << "\n Bonus: "<< myScorer.getUpperBonus();
	cout << "\n Total of Upper Section: " << myScorer.getTotalUpper;
	cout << "\n*** Lower Section ***";
	cout << "\n 3 of a Kind "<< scores[6];
	cout << "\n 4 of a Kind "<< scores[7];
	cout << "\n Full House "<< scores[8];
	cout << "\n Small Straight "<< scores[9];
	cout << "\n Large Straight "<< scores[10];
	cout << "\n YAHTZEE! "<< scores[11];
	cout << "\n Chance "<< scores[12];
	cout << "\n YAHTZEE Bonus: "<< myScorer.getYahtzeeBonus();;
	cout << "\n Total Of Lower Section: "<< myScorer.getTotalLower();
	cout << "\n Grand Score: "<< myScorer.getGrandTotal();
	
		
}


/*
//checks to see if user input is a valid category
//will probably crash if non integer number is entered
bool scorecard::IsValidCat(int userInput){
	if (userInput > 0 && userInput <=13){  
		cout << "Please enter a valid category (1-13)"
		return false;
	}
	return true;
	
}
*/
void selectCat()
{
	int user_intput = 0;
	int temp_score = NULL;
		DisplayScoreCard();
		cout << "Select a Catogory" << endl;
		cin >> user_input;

		switch (user_input)
		case '1':
			if (used[0] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[0] = temp_score;
			}
		case '2':
			if (used[1] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[1] = temp_score;
			}
		case '3':
			if (used[2] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[2] = temp_score;
			}
		case '4':
			if (used[3] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[3] = temp_score;
			}
		case '5':
			if (used[4] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[4] = temp_score;
			}
		case '6':
			if (used[5] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[5] = temp_score;
			}
		case '7':
			if (used[6] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[6] = temp_score;
			}
		case '8':
			if (used[7] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[7] = temp_score;
			}
		case '9':
			if (used[8] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[8] = temp_score;
			}
		case '10':
			if (used[9] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[9] = temp_score;
			}
		case '11':
			if (used[10] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[10] = temp_score;
			}
		case '12':
			if (used[11] == false)
			{

			}

		case '13':
			if (used[12] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[12] = temp_score;
			}
		case '14'
			if (used[13] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[13] = temp_score;
			}
}			
			
int setFinalScore()
{
	for (int i = 0; i < 13)
	{
		final_score += scores[0]
	}
}
bool CheckCat(int key)
{
	if (key == 1)
	{
		
	}
	else if (key == 2)
	{

	}
	else if (key == 3)
	{

	}
	else if (key == 4)
	{

	}
	else if (key == 5)
	{

	}
	else if (key == 6)
	{

	}
	else if (key == 7)
	{

	}
	else if (key == 8)
	{

	}
	else if (key == 9)
	{

	}
	else if (key == 10)
	{

	}
	else if (key == 11)
	{

	}
	else if (key == 12)
	{

	}
	else if (key == 13)
	{

	}

}