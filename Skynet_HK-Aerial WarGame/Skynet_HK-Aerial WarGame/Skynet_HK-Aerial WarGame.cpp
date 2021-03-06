#include"stdafx.h"
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include<string>
//use standard library
using namespace std;

//Variables
bool found;
int randomTries;
int binaryTries;
int humanTries;
int guess;
int highNumber = 64;
int lowNumber = 1;

string again="Y";
//Main fucntion
void main() {

	//seed random number generator
	srand(static_cast<unsigned int>(time(0)));




	while (again == "Y"||again=="y")
	{
		//Set variables
		bool found = false;
		int randomTries = 0;
		int binaryTries = 0;
		int humanTries = 0;
		int guess = 0;

		//generate random location
		int randomLocation = rand();


	//random location
	int location = (randomLocation % 64) + 1;





	//While found is false
	while (found == false) {

		//Increase humanTries
		humanTries++;
		cout << "What is your guess?" << endl;

		//input for guess
		cin >> guess;



		//If guess is equal to location
		if (guess == location) {

			//found is true
			found = true;
			cout << "It took " << humanTries << " human tries to locate the enemy." << endl;
		}

	}

	//Set found to false for binary search method
	found = false;

	//Loop until the enemy is found
	while (found == false) {

		//Binary search algorithim
		int targetLocationPrediction = ((highNumber - lowNumber) / 2) + lowNumber;

		//Increase ping count
		binaryTries++;


		//If prediction is equal to location
		if (targetLocationPrediction == location) {


			//Set found to true
			found = true;
		}

		//If prediction is greater than location
		if (targetLocationPrediction > location) {

			//decrease the highNumber by 1
			highNumber = targetLocationPrediction - 1;

		}

		//If prediction is less than location
		else if (targetLocationPrediction < location)
		{
			//increase the lowNumber by 1
			lowNumber = targetLocationPrediction + 1;

		}

	}
	cout << "Binary Search " << binaryTries << " predictions to locate the enemy on a 8x8 (64) grid." << endl;


	//Setting up for random search
	found = false;



	//Linear Search
	//Check through each grid number
	for (int i = 0; i < 64; i++)
	{
		//If i is the same as the location
		if (i == location) {
			cout << "It took " << i << " tries to find the enemy using the linear method" << endl;

			//Break out of loop
			break;

		}
	}

	//Set up random search
	found = false;

	//Random search
	//While found is false
	while (found == false) {
		//Increase the randomTries count
		randomTries++;
		//generate random number
		int randomNumber = rand();

		//get random number
		int guess = (randomNumber % 64) + 1;

		//If random guess is the same as the enemy location
		if (guess == location) {
			cout << "It took random search " << randomTries << " tries to find the enemy" << endl;
			//Set found to true
			found = true;
		}
	}

	cout << "Would you like to try again? Y/N" << endl;
	cin >> again;
	
	}
}

