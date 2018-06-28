// Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int f(int i) { return 2 * i; }

int main()
{
	int(*g) (int) = f;
	cout << "g(4) is " << g(4) << endl;    // Will output "g(4) is 8"
	cout << "(*g)(5) is " << g(5) << endl; // Will output "g(5) is 10"
	return 0;
}



