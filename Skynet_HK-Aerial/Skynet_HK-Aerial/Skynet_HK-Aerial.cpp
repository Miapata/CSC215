#include"stdafx.h"
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#include<string>
//use standard library
using namespace std;

//Variables
bool found;
int ping = 0;
int highNumber = 64;
int lowNumber = 1;

//Main fucntion
int main() {
	

	//seed random number generator
	srand(static_cast<unsigned int>(time(0)));

	//generate random
	int randomLocation = rand();

	//random location
	int location = (randomLocation % 64) + 1;

	cout << "Enemy at location " << location << endl << endl;

	//Loop until the enemy is found
	while (found == false) {

		//Binary search algorithim
		int targetLocationPrediction = ((highNumber - lowNumber) / 2) + lowNumber;

		//Increase ping count
		ping++;
		cout << "Ping #" << ping;
		cout << " Location: " << targetLocationPrediction << endl;

		//If prediction is equal to location
		if (targetLocationPrediction == location) {
			cout << endl << "ENEMY FOUND!";

			//Set found to true
			found = true;
		}

		//If prediction is greater than location
		if (targetLocationPrediction>location) {

			//decrease the highNumber by 1
			highNumber = targetLocationPrediction - 1;
			cout << "The predicted location was higher than the location of the enemy" << endl;
			cout << "New high number: " << highNumber;
		}

		//If prediction is less than location
		else if (targetLocationPrediction<location)
		{
			//increase the lowNumber by 1
			lowNumber = targetLocationPrediction + 1;
			cout << "The predicted location was lower than the location of the enemy" << endl;
			cout << "New low number: " << lowNumber;
		}
		cout << endl;
		cout << endl;
		cout << endl;
	}


	cout << "Skynet HK-Aerial took " << ping << " predictions to locate the enemy on a 8x8 (64) grid." << endl;
	//Pause the terminal
	system("pause");

	//return int
	return 0;
}

