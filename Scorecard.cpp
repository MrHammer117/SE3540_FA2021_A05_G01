//implementation of functions/methods of scorecard Class

#include "Scorecard.h"




//creates an new scorecard, fills the score array with -1 
//and the used array with false 
void scorecard::CreateScorecard(){
	for(int i = 0; i < 14; i++){
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
		cout << "\n 14)'Bonus' - Roll 5 of the same number. Worth 100 points after you have used YAHTZEE.";
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
		if (getScore[13] == -1 && used[13] == false) {
			cout << "\n 14)'Bonus': EMPTY"
		}
		else {
			cout << "\n 14)'Bonus': " << getScore[13];
		}
	
	
}

//checks to see if user input is a valid category
//will probably crash if non integer number is entered
bool scorecard::IsValidCat(int userInput){
	if (userInput > 0 && userInput <=13){  
		cout << "Please enter a valid category (1-14)"
		return false;
	}
	return true;
	
}

// Asks user to pick a Cateogory and then calls ??? for the score then
// moves scores into the score[]
void scorecard::selectCat()
{
	int user_intput = 0;
	int temp_score = NULL;
		DisplayScoringRules();
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
				temp_score = ? ? ? ? (user_input);
				score[11] = temp_score;
			}

		case '13':
			if (used[12] == false)
			{
				temp_score = ? ? ? ? (user_input);
				score[12] = temp_score;
			}
		case '14'
			if (used[11] == true)
			{
				temp_score = ? ? ? ? (user_input);
				score[13] += temp_score;
			}
}			
		
// This method adds all the scores in the scores[] into final score
int scorecard::setFinalScore()
{
	for (int i = 0; i < 14, i++)
	{
		final_score += scores[i]
	}
	return(final_score);
}

// Key is the cateogory number and this method is for getting the dice values and make the score and send it to selectCat
int scorecard::addScore(int key)
{

}
}