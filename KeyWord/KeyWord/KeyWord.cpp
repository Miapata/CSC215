
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//Using Standard Library
using namespace std;


//Main method
int main()
{
	//Enumerator for acessing array
	enum fields { WORD, HINT, NUM_FIELDS };
	//cont int of 10 
	const int NUM_WORDS = 10;
	//The array of words and hints
	string words[NUM_WORDS][NUM_FIELDS] = { { "bible","A holy book" },{ "key","Something you use to unlock a door" }
		,{ "orange","Fruit found on tress" },{ "dog","It wags it tail a lot and is known for being loyal" },
	{ "paper","Used for writing." },{ "computer","Soething that you're using." },{ "screen","Your computer has one" },{ "verse","The bible has a lot of them" },{ "language","English is called a-" },{ "sacred","something that is related to God is most likely... " } };

	//Used for playing the game
	string answer = "Y";

	//Seeds random
	srand(static_cast<unsigned int>(time(0)));
	cout << "Welcome to Word Jumble!\n";
	cout << "You will be asked to solve three words that are scrambled, if you ever need help, just type [help]"<<endl;

	//While the player wats to play again
	while (answer == "Y" || answer == "y") {
	
		//Used for the 3 words
		int wordCount = 0;
		
		//While word count is less than 3
		while (wordCount < 3) {

			//Increase word count
			wordCount++;
			//Generate random number
			int choice = (rand() % 10);
			//string that is equal to index of array
			string theWord = words[choice][WORD];

			//Hint that is equal to index
			string hint = words[choice][HINT];

			//Declare string for scrambleing
			string jumble = theWord;
			//length of word
			int length = jumble.size();


			//For loop to o through each char in the word
			for (int i = 0; i < length; ++i)
			{
				//random integers
				int index1 = (rand() % length);
				int index2 = (rand() % length);

				//swap chars
				char temp = jumble[index1];
				jumble[index1] = jumble[index2];
				jumble[index2] = temp;

			}


			cout << "Here is your word: " << jumble << endl;

			//player guess
			string guess = "";
			
			//Loop for guess
			while (guess != theWord) {
				
				cout << "Your guess: ";
				//Get the player guess
				cin >> guess;
				cout << endl;

				//if guess is not help
				if (guess != "help") {
					//If guess is the same as the word
					if (guess == theWord) {
						cout << "That's it!" << endl;
					}
					//If not, it's incorrect
					else
					{
						cout << "Sorry, that's not it!" << endl;
					}
				}
				//If guess is the same as help
				else
				{
					cout << hint<<endl;
				}
		}
			

		}
		cout << "Do you want to go again? Y/N" << endl;
		cin >> answer;
	}
    return 0;
}

