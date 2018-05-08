//Timothy Fisher
//EECS 1500
//Final Exam 




#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <string>                   //include libraries
#include <cmath>


using namespace std;

int main() {
	
	int guess;
	srand(time(0));              //setting random seed
	int realNum = rand() % 100;         // limiting random number to 100
	int score;
	int tries;
	score = 0;
	tries = 4;
	
	cout << "********************************" << endl;
	cout << "\n*_* Welcome to GUESS the number game*_*" << endl;
	cout << "\n******************************" << endl;                       
	cout << "\nYou have 4 chances to guess the random number!(between 0 - 100)";
	
	for (int i = 1; i <= tries; i++)                    //loop for the game to be run in
	{
		
		cout << "\nGuess the number: ";            //ask user for guess
		cin >> guess;
		if (guess == realNum) {                      //to be run if user guesses correctly
			cout << "\nYOU are correct!!" << endl;
			if (i > 1) {                             
				score = score + 30;
			}
			else {           //only run if user guesses correctly the first time
				score = score + 100;
			}
			cout << "\nYour total score: " << score << endl;
			break;

		}
		if (guess != realNum && guess <= realNum + 15 && guess >= realNum - 15){                   //to be run if the user's guess is within 15 of the random number
			score = score + 20;
			cout << "\nYou are close!! :)" << endl;
			
			if (guess > realNum) {                            //if the guess is greater
				cout << "\nHINT: Try a little lower!" << endl;
			}
			
			 if (guess < realNum) {                 //if the guess is lower

				cout << "\nHINT: Try a little Higher!" << endl;
			}


	}
		else if (guess != realNum && guess > realNum + 15 || guess < realNum - 15) {          // to be run if the number guessed is more than 15 numbers away from the random number
			cout << "\nYour guess is far away!" << endl;
			score = score + 10;
			if (guess > realNum + 15) {                       // if the number guessed is greater than the random number
				cout << "\nHINT: Try Lower" << endl;
			
			}
			if (guess < realNum - 15) {                     // if the number guessed is less than the random number
				cout << "\nHINT: Try higher" << endl;

			}



		}
		cout << "Your current score is: " << score << endl; // print the user's running score
		cout << "Your are left with: " << 4 - i << " chances" << endl;            // tell the user the chances they have left

		if (4 - i == 0) {             //run if the users chances left are zero
			cout << "\nOUT OF CHANCES :( :( :( " << endl;        
			cout << "\nYour total score: " << score;
		}
		
}
	

	cout << "\nThe Random Number was: "<< realNum;             //print the random number

	_getch();
	return 0;
}