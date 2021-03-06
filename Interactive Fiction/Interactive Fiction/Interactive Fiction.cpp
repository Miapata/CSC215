// Interactive Fiction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

//Standard Library
using namespace std;

//string for name
string name;

//Used for options
int option;

//Bool to check if the branch is still in the way.
bool branchInWay = true;

//Bool to check if Jake has been found
bool JakeNotFound = true;

//Function for Getting Text Input
string GetTextFromUser() {

	//string to store input
	string text;

	//text is user input
	cin >> text;

	//return the text
	return text;
}

//Function for getting numbers from user
int GetNumberFromUser() {

	//integer for storage
	int number;

	//get number
	cin >> number;

	//return number
	return number;
}

//Method used for pausing and clearing the console
void Continue() {

	//Pause the console
	system("pause");

	//Clear the console
	system("cls");
}


//Main Loop
int main()
{
	cout << "What is your name?\n";

	//Use Text Method to set name
	name=GetTextFromUser();

	cout << "You were sent by a king to go explore some of the outskirts of your home village.\n";

	//pause and clear the console
	Continue();

	cout << "Though, you aren't alone. Two villagers that you grew up who used to pick on you as a kid were there as well.\n";

	Continue();

	cout << "Along the way, you stumbled upon a huge branch in the way.\n\n";

	//While branch is in the way
	while (branchInWay) {
		cout << "Options: [1]Talk to Thorn	[2]Talk to Creed	[3]Use Axe\n";
		cout << "Pick a choice:";

		//option is user numper input
		option = GetNumberFromUser();
		
			//If option is 1
			if (option == 1) {
				cout << "Thorn: This branch is so big, is there anything we can do?\n\n";
				
			}

			//If option is 2
			if (option == 2) {
				cout << "Creed: You have an axe right? " << name << ", try using it!\n\n";
				
			}

			//If option is 3
			if (option == 3) {

				cout << "You gave three slashes and the branch broke apart!\n";

				Continue();

				//Set branch in the way to false
				branchInWay = false;
			}
		}
	
	
	
	cout << "Creed: Good Job! Let's go!\n";

	Continue();

	cout << "You guys hear a voice coming from across the woods.\n";
	cout << "???: Oh man! My saw is done for!\n";

	Continue();
	
	//While Jake is not found
	while (JakeNotFound) {

		cout << "Options: [1]Look Left	[2]Look Right	[3]Look Up\n";

		//Use method to get number input
		option = GetNumberFromUser();

		//if option is 1
		if (option == 1) {
			cout << "To your left you see nobody in sight, just a small cottage.\n\n";
		}
			
		//If option is 2
		if (option == 2) {
			cout << "The right side shows a trail leading to a dead end.\n\n";
		}

		//If option is 3
		if (option == 3) {
			cout << "You look up and see a strange figure clothed in all blue\n\n";

			//Jake is found
			JakeNotFound = false;

			Continue();

			}
	
	}

		cout << "???: Oh, well look here.\n\n";
		cout << "???: *Slides down tree*\n\n";

		Continue();

		cout << "???: My name is Jake! Sorry about the branch in the way.\n\n";

		Continue();

		cout << "Jake: Anyway, what are your names?\n\n";

		Continue();

		cout << "Creed: Im Creed, this fellow to the right is " << name << " and the one to the\n";
		cout << "left is Thorn. We were sent by King Joseph to explore these outskirts.\n\n";
		cout << "Jake: Ah, villagers... Is it because of the monsters that have been around\n";
		cout << "lately?\n\n";
		cout << "Thorn: MONSTERS!?!\n\n";

		Continue();

		cout << "Creed: Calm down! I assure you this man is just joking around.\n\n";
		cout << "Jake: You aren't aware? Ever since 2-score days ago, there have been\n";
		cout << "disturbances and missing people all over.\n\n";
		cout << "Creed: Explain more...\n\n";

		Continue();

		cout << "Jake: These things aren't nice, I have never seen one. I'm pretty sure\n";
		cout << "anyone who has are the ones who are gone.\n\n";
		Continue();

		cout << "----END OF CHAPTER 1----\n\n\n\n\n";
		cout << "-Thanks for playing!\n\n";

		//Pause the console
		system("pause");
	
		
	return 0;
}





