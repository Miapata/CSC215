// Interactive Fiction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include <vector>


using namespace std;
 vector <string> items;
 string inputText;
 int inputNumber;
 bool isAlive;
 enum Choices
 {
	 EAST, SOUTH, WEST, NORTH
 };

 string GetTextFromUser() {
	 string text;
	 cin >> text;

	 return text;
 }

 int GetNumberFromUser() {
	 int number;
	 cin >> number;
	 return number;
 }

  string Input() {
	string text;
	cin >> text;
	return text;
}
int main()
{

	while (isAlive)
	{
		
	}

    return 0;
}





