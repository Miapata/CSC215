// Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int CharactersInName(string *text);

int main()
{
	int* age;
	string name;
	

	cout << "Hello, user, tell me your name:";
	cin >> name;
}


int CharactersInName(string *text) {

	string textLength;
	int length=0;
	for ( int i = 0; i < text.length(); i++)
	{
		length++;
	}
	return length;

}



