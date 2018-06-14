// Swap
// Demonstrates passing references to alter argument variables
#include "stdafx.h"
#include <iostream>

using namespace std;



//Declaring Fucntions
void Swap(int x, int y);
void HackedTransaction(int& x, int& y);


int main()
{
	//Decalring and (init/ assigning value to) my variable
	int JoesBank_amt = 150;
	int otherBank = 1000;

	//Writing original starting values to screen for user
	cout << "Original values\n";
	cout << "Joe's Bank Account: $" << JoesBank_amt << "\n";
	cout << "Other Bank Account: $" << otherBank << "\n\n";

	cout << "Calling Swap()\n";
	//Calling function and passing arguments
	Swap(JoesBank_amt,otherBank);
	cout << "Joe's Bank Account: $" << JoesBank_amt << "\n";
	cout << "Other Bank Account: $" << otherBank << "\n\n";

	cout << "Calling HackedTransaction()\n";
	HackedTransaction(JoesBank_amt, otherBank);
	cout << "Joe's Bank Account: $" << JoesBank_amt << "\n";
	cout << "Other Bank Account: $" << otherBank << "\n\n";

	system("pause");
	return 0;
}

//swaping two local values (copies of the original) that are passed to the function
void Swap(int x, int y)
{

	//Create a temp variable
	int temp = x;
	//Set x to y
	x = y;

	//Now y is x, the variables are swapped
	y = temp;

	cout<<

}

//Swaping two referneces th
void HackedTransaction(int& x, int& y)
{
	//Jesus Christ Jesus Christ Jesus Christ
	int temp = x;
	x = y;
	y = temp;
}

