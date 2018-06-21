// Assignment11-Header.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mathf.h"
#include "ioStream"

//Standard Library
using namespace std;

//Variables
double number1;
double number2;


//Main Program
int main()
{

	cout << "Hello, please enter a number"<<endl;
	//Get number1
	cin >> number1;
	cout << "Enter a second number: " << endl;
	//Get number2
	cin >> number2;

	cout << "\nHere are your numbers divided:\n";
	cout << number1 << "/" << number2 << "= " << DivideNumbers(number1, number2);
	cout << "\nHere are your numbers added:\n";
	cout << number1 << "+" << number2 << "= " << AddNumbers(number1, number2);
	cout << "\nHere are your numbers multiplied:\n";
	cout << number1 << "*" << number2 << "= " << MultiplyNumbers(number1, number2);
	cout << endl;

	//Pause the system
	system("pause");
	//End the program
    return 0;
}

