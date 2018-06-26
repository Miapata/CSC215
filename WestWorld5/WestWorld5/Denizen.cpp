#include "stdafx.h"
#include "Denizen.h"
#include <iostream>
using namespace std;

//Here we implement/define code for the functions of the Denizen class
//Notice this is a source file .cpp

///This is a constructor function.
Denizen::Denizen(string name, string height, string location) {
	m_name = name;
	m_height = height;
	m_location = location;

}
/// Allows public access to get the private name
string Denizen::getName() {
	return m_name;
}
/// Allows host or guest to talk to user via console.
void Denizen::talk(string stuffToSay) {

	cout << m_name << " at " << m_location<<" says: "<<stuffToSay<<endl;

}


