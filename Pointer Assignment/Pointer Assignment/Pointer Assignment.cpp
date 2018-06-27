#include "stdafx.h"
#include <iostream>
#include <ctime>


using namespace std;

// function to generate and retrun random numbers.
int * getRandom() {
	static int  r[10];

	// set the seed
	srand((unsigned)time(NULL));

	//Loop through the r array
	for (int i = 0; i < 10; ++i) {
		//Set the index to random value
		r[i] = rand();
		cout << r[i] << endl;
	}

	//return pointer
	return r;
}

// main function to call above defined function.
int main() {
	// a pointer to an int.
	int *p;
	//p points to the function
	p = getRandom();
	for (int i = 0; i < 10; i++) {

		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}
	system("Pause");

	return 0;
}
