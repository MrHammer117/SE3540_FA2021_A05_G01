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

//checks to see if user input is a valid category
//will probably crash if non integer number is entered
bool scorecard::IsValidCat(int userInput){
	if (userInput > 0 && userInput <=13){  
		cout << "Please enter a valid category (1-13)"
		return false;
	}
	return true;
	
}
