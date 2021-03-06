// ConsoleApplication3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <iomanip>
#include "CheckMinutes.h"
#include <vector>

//Declare the timer method
void Timer(int minutes);
//Decalre the RandomFruit method
void RandomFruit();

//Namespace for Standard library
using namespace std;

//BASE CLASS
class Food {
public:
	//Anthything
};

//CHILD CLASS
class Fruit :Food {

public:

	//string for name
	string name;

	//String method to get the name
	string getName(Fruit fruit);


};

//Fruit getName method
string Fruit::getName(Fruit fruit) {

	//Return the name of the fruit
	return (fruit.name);
}

//Vector for fruits
vector<string> fruits;

//Main
int main()
{

	//Apple object
	Fruit apple;

	//Set Apple's to apple
	apple.name = "Apple";

	//Push the object's name to the fruit vector
	fruits.push_back(apple.name);


	//Fruit object called Orange
	Fruit Orange;

	//Set name to Orange
	Orange.name = "Orange";

	//Push the object's name to the fruit vector
	fruits.push_back(Orange.name);

	//Fruit object called Pineapple
	Fruit Pineapple;

	//Set Pineapple's name to Pineapple
	Pineapple.name = "Pineapple";

	//Push the object's name to the fruit vector
	fruits.push_back(Pineapple.name);


	//Declare name string
	string name;

	cout << "Hello, what is your name?\n";

	//Get name from user
	cin >> name;


	cout << "\nHello " << name << ". For this program, you will be notified when you have sat down for the time that you set in minutes.\nIf no time is set, the default is 15 minutes.\n";

	//Declare time 
	int time;

	//Get time from user
	cin >> time;

	//Timer method, pass time to the method
	Timer(time);


	system("Pause");
	return 0;
}


//Timer method
void Timer(int minutes) {

	//If CheckMinutes method returns false
	if (CheckMinutes(minutes) == false) {

		//Set minutes to 15
		minutes = 15;
	}

	//For loop for going throuhg the minutes
	for (int i = 0; i < minutes; )
	{
		//Call the RandomFruit function
		RandomFruit();

		

		//Increase the value of i by one
		i++;

		//Example of a reference
		int& y=i;
		
		//Example of pointers
		//Initialize a pointer
		int* pointer;

		//point it to the i adress
		pointer = &i;

		//Derefernece it in the sleep method
		//Since sleep uses millisecons, I multipled by 60,000 for a minute.
		Sleep((*pointer) * 60000);

		//If all minutes have been looped
		if (i == minutes) {

			cout << "Time is up!\n";

		}

		//Else, tell how much time has passed
		else
		{
			cout << "One minute has passed" << endl << "\nTime remaining: " << minutes - i << " minute(s)\n";

		}


	}

}

//Random Fruit Function
void RandomFruit() {

	//Declare int for the index
	int index;

	//set it to a random number in the length
	index = rand() % fruits.size();

	cout << "\nHey, here is a random fruit:" << fruits[index] << endl;
}