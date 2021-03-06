// CodeHunter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
////Standard library
using namespace std;

//Main Method
int main()
{
	//Variables for the program
	string textToAnalyze;

	//Doesn't do anything
	int foo = 0;
	//Int vowels
	int vowels = 0;
	//Int constants
	int consonants = 0;
	//Int digits
	int digits = 0;
	//int spaces
	int spaces = 0;
	//length of the sentence
	int lengthOfStringSubmittedForAnalysis = 0;
	//Int for unknown characters
	int unknownCharacters = 0;
	//used for comparing the length
	int checkSum = 0;
	//Doesn't do anything
	int bar = 0;

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	//get's the characters of the string using cin
	getline(cin,textToAnalyze);

	//Loops through each char
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//Checks index for vowels
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//Increase instead of subtract
			++vowels;
		}

		//Checks for letters A-Z- Consonants
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			//Uncommented
			++consonants;
		}
		//Checks for digits
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			//Increase digits
			++digits;
		}
		//Checks for spaces
		else if (textToAnalyze[i] == ' ')
		{
			//Increase spaces
			++spaces;
		}
		//Checks for unknown characters
		else
		{
			//Increase unknown characters
			++unknownCharacters;
		}
	}

	//Set int to text length
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();

	//Sum of all of chars
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//checksum determines if the length is the same
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}

	//If checksum is not equal to length
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	//Pasue the system
	system("pause");

	//Return int
	return 0;
}