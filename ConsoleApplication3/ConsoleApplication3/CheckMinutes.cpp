#include"CheckMinutes.h"
#include "stdafx.h"

using namespace std;

//This bool is used to check if the user input is valid
bool CheckMinutes(int minutes) {
	//If minutes are null or 0
	if (minutes == NULL) {
		//Return as false
		return false;
	}

	//If it's anything else
	else
	{
		//Return true
		return true;
	}

}