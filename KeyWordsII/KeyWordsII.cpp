#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
//Jesus
using namespace std;

int main()
{


	//// Display Title of program to user
	//cout << "Welcome to KeyWords II" << endl;
	//// Ask the recruit to login using thier name
	//cout << "Please enter your name:  ";

	//// Hold the recruit's name in a var, and address them by it throughout the simulation.
	//string name;
	//cin >> name;

	//// Display an overview of what Keywords II is to the recruit 
	//cout << "The current automated programs that the CIA uses to decode enemy transmissions have always worked well until recently." << endl << "Recently the enemy is using single scrambled low-tech keywords to signal other enemies to start" << endl << "attacks which our current code decryption programs have not been successful against." << endl;

	//// Display an directions to the recruit on how to use Keywords
	//cout << "You will be given three words to decode, your job is to figure out what those words are." << endl;
	//cout << "When you are asked for a guess, just enter in a single character" << endl;

	//// Create a collection of 10 words you had wrote down manually
	//vector<string> words;
	//words.push_back("GUESS");
	//words.push_back("HANGMAN");
	//words.push_back("DIFFICULT");
	//words.push_back("APPLE");
	//words.push_back("KEYBOARD");
	//words.push_back("DIGITAL");
	//words.push_back("HOUSE");
	//words.push_back("HEAL");
	//words.push_back("POSITIVE");
	//words.push_back("BIBLE");

	//// Create an int var to count the number of simulations being run starting at 1
	//int wordCount = 1;

	//// Display the simulation # is staring to the recruit. 
	//cout << "Simulation #" << wordCount << endl;

	//// Pick new 3 random words from your collection as the secret code word the recruit has to guess.
	//srand(static_cast<unsigned int>(time(0)));
	//random_shuffle(words.begin(), words.end());
	//string word1 = words[0];
	//string word2 = words[1];
	//string word3 = words[2];

	//// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
	//const int MAX_WRONG = 8;
	//int wrong = 0;
	//string soFar = "";
	//while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	//	//     Tell recruit how many incorrect guesses he or she has left

	//	//     Show recruit the letters he or she has guessed

	//	//     Show player how much of the secret word he or she has guessed

	//	//     Get recruit's next guess

	//	//     While recruit has entered a letter that he or she has already guessed

	//	//          Get recruit ’s guess

	//	//     Add the new guess to the group of used letters

	//	//     If the guess is in the secret word

	//	//          Tell the recruit the guess is correct

	//	//          Update the word guessed so far with the new letter

	//	//     Otherwise

	//	//          Tell the recruit the guess is incorrect

	//	//          Increment the number of incorrect guesses the recruit has made

	//	// If the recruit has made too many incorrect guesses

	//	//     Tell the recruit that he or she has failed the Keywords II course.

	//	// Otherwise

	//	//     Congratulate the recruit on guessing the secret words

	//	// Ask the recruit if they would like to run the simulation again

	//	// If the recruit wants to run the simulation again

	//	//     Increment the number of simiulations ran counter

	//	//     Move program execution back up to // Display the simulation # is staring to the recruit. 

	//	// Otherwise 

	//	//     Display End of Simulations to the recruit

	//	//     Pause the Simulation with press any key to continue




	// set-up
	// maximum number of incorrect guesses allowed
	const int MAX_WRONG = 8;  

	// collection of possible words to guess
	vector<string> words;  
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	words.push_back("APPLE");
	words.push_back("KEYBOARD");
	words.push_back("DIGITAL");
	words.push_back("HOUSE");
	words.push_back("HEAL");
	words.push_back("POSITIVE");
	words.push_back("BIBLE");

	//RANDOM SEED
	srand(static_cast<unsigned int>(time(0)));

	//Simulation answer
	string  answer = "Y";


	cout << "Welcome to Hangman.  Good luck!\n";

	// main loop
	while (answer == "Y") {
		
		//Word count to zero
		int wordNumber = 0;
		
		//Looping for 3 words
		while (wordNumber < 3) {

			//shuffle the word list
			random_shuffle(words.begin(), words.end());

			//add to the word count
			wordNumber++;

			//Word to guess
			const string THE_WORD = words[0];

			//replace the size with, -
			string soFar(THE_WORD.size(), '-');

			//wrong score
			int wrong = 0;

			cout << THE_WORD;

			//used chars
			string used = "";

			cout << "Word " << wordNumber;

			// if wrong is less than 8 and the chars used so far are not equal to the word
			while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
			{
				cout << "\n\nYou have " << (MAX_WRONG - wrong);
				cout << " incorrect guesses left.\n";
				cout << "\nYou've used the following letters:\n" << used << endl;
				cout << "\nSo far, the word is:\n" << soFar << endl;

				//guess char
				char guess;

				cout << "\n\nEnter your guess: ";

				//Get char from user input
				cin >> guess;

				//make uppercase since secret word in uppercase
				guess = toupper(guess); 

				//while guess is already in used letters
				while (used.find(guess) != string::npos)
				{
					cout << "\nYou've already guessed " << guess << endl;
					cout << "Enter your guess: ";

					//Get guess again
					cin >> guess;

					//make uppercase
					guess = toupper(guess);
				}

				//Add guess to used letters
				used += guess;

				//Check if the guess is in the word
				if (THE_WORD.find(guess) != string::npos)
				{
					cout << "That's right! " << guess << " is in the word.\n";

					// update soFar to include newly guessed letter
					for (int i = 0; i < THE_WORD.length(); ++i)
					{
						//if index is equal to char
						if (THE_WORD[i] == guess)
						{
							//what we have so fat is equal to that guess
							soFar[i] = guess;
						}
					}
				}
				//If the guess is not in the word
				else
				{
					cout << "Sorry, " << guess << " isn't in the word.\n";
					//Add to the wrong count
					++wrong;
				}
			}


			// shut down
			if (wrong == MAX_WRONG) {
				cout << "\nYou've been hanged!";
			}
			//If the word is correct
			else {
				cout << "\nYou guessed it!";
			}
			//Jesus
			
			cout << "\nThe word was " << THE_WORD << endl<<endl;
			
			//if the wordcoutn is equal to 3
			if (wordNumber == 3) {
				//Set answer to blank
				
				
				cout << "Do you want to try again? [Y/N]" << endl<<endl;
				//char input
				char input;
				//get input
				cin >> input;
				//change to upper case
				input = toupper(input);
				//answer is equal to input	
				answer = input;
					
				
			}
		}
	}

	//End
	return 0;
}
