#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{

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
    
    //string for Name
    string name;
    
    cout<<"What is your name?"<<endl;
    
    //Get name from user input
    cin>>name;

	cout << "Hello "<<name<<", the current automated programs that the CIA uses to decode enemy transmissions have always"<<endl<<"worked well until recently. Recently the enemy is using single scrambled low-tech keywords to signal other enemies to start" << endl << "attacks which our current code decryption programs have not been successful against." << endl;
    cout<<"You will be given three words to guess. Try to get them correct. You have amaximum of 8 guesses for each word\n"<<endl;
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

			//used chars
			string used = "";

			cout << "\nSimulation # " << wordNumber;

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
			
			cout << "\nThe word was " << THE_WORD << endl<<endl;
			
			//if the wordcoutn is equal to 3
			if (wordNumber == 3) {
				
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
