// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>
#include <list>
#include "CheckMinutes.h"
void Timer(int minutes);

using namespace std;
class Food {
public:
	
	
};

class Fruit:Food {

public:
	string name;
	string getName(Fruit fruit);
	

};


string getName(Fruit fruit) {
	return (fruit.name);
}


int main()
{
	string name;
	cout << "Hello, what is your name?\n";

	cin >> name;
	

	cout << "\nHello "<<name<<". For this program, you will be notified when you have sat down for the time that you set in minutes.\nIf no time is set, the default is 15 minutes.\n";

	int time;
	cin >> time;
	if (cin.fail()) {
		cout << "Fail";
}
	Timer(time);
	system("Pause");
    return 0;
}
//Get

//Timer method
void Timer(int minutes) {
	if (CheckMinutes(minutes) == false) {
		minutes = 15;
	}

	//For loop for going throuhg the minutes
	for (int i = 0; i < minutes; )
	{

		//Example of pointers
		i++;
		//Initialize a pointer
		int* pointer;

		//point it to minutes adress
		pointer = &minutes;

		//Derefernece it in the Sleep method
		Sleep((*pointer) *60000);
		if (i == minutes) {

			cout << "Time is up!\n";

		}
		else
		{
			cout << "One minute has passed" << endl;
			cout << "Time remaining: " << minutes - i << " minute(s)";
		}
	
		

	}

	
	
}
