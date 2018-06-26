#pragma once
#include<string>

using namespace std;

//Using this as our base class
class Denizen {
public:
	Denizen(string name, string height, string location);
	void talk(string stuffToSay);
	string getName();
private:
	string m_name;
	string m_height;
	string m_location;
};