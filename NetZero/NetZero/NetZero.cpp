// Jeremy Harrell
// ITSE 1307
// Programming Problem net zero 
// Making a program to calculate if a number is positive negative or at the zero mark 

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{	//Setting up the ints so I can have my base number and my if number
	int intIfNumber = 1;
	int intBaseNum = 0;

	// Choosing a number so it can be determined if it's negative, positive, or zero
	cout << "Choose a number: ";
	cin >> intIfNumber;

	// Using an if statement so it can determine if the number is negative
	if (intIfNumber < intBaseNum)
		cout << "Your number is negative " << endl;

	// Else statements so it can determing if it's zero
	else if (intIfNumber == intBaseNum)
		cout << "Your number is Zero " << endl;
	
	// Another else statement so it can determing if the number is positive 
	else if (intIfNumber > intBaseNum)
		cout << "Your Number is positive " << endl;

    return 0;
}

