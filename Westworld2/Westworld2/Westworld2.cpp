// Westworld2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <ioStream>
using namespace std;

class Host
{
public:
	void talk(string words) 
	{
		cout << name <<" who is currently at "<<location<< " says: " << words << endl;
	}
	string location = "SweetWater";
	string name = "";

private:
	
	
};

int main()
{
	Host Delores;
	Host Arnold;
	Host Teddy;
	Delores.name = "Delores";
	Delores.talk("Welcome to Westworld, enjoy your stay.");


	Teddy.name = "Teddy";
	Teddy.talk("Howdy Partner.");


	Delores.talk("Where am I?");


	//Cahnge delores location
	Delores.location = "Mesa";
	Delores.talk("Welcome to Westworld, enjoy your stay.");
	system("pause");
    return 0;
}

