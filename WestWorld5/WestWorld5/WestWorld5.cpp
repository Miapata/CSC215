// WestWorld5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Host.h"
#include "Guest.h"
//Encapsulation
//Polymorphism

using namespace std;
int main()
{
	//create the object from our classes
	//we only use object not classes
	
	Denizen personX("Fred", "Tall", "Sweetwater");
	personX.talk("Hello, I am person X");


	//Create hosts
	

	system("pause");
    return 0;
}

