// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

// validate first


int main()
{

	// Local variable declarations placed here
	int number;
	int remainder;
	string name = "Thomas Sanger\n";
	string classNum = "ELET115";

	// Inform user what program does


	// Prompt user to enter data needed by the program
	cout << name;
	cout << classNum << endl;
	cout << endl;


	cout << "Write a number between 100 and 200\n" << "and I will divide it by 2."
		<< "Then tell you if it's higher or lower than 150:";
	cin >> number;
	cout << endl;

	while (number < 100 || number > 200)
	{
		cout << "Please follow the instructions and enter a number greater than 100 and less than 200.";
		cin >> number;
	}

	remainder = number / 2;
	cout << number << " divided by 2 = " << remainder << endl << endl;
		
	if (number == 150)
	{
		cout << "Number is = 150.\n";
	} 
	else if (number > 150)
	{
		cout << "Number is > 150.\n";
	}
	else
	{
		cout << "Number is < 150.\n";
	}
	
	// A software algorithm would typically be executed after all data has been input


	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
PROOF 1:
Thomas Sanger
ELET115

Write a number between 100 and 200
and I will divide it by 2.Then tell you if it's higher or lower than 150:149

149 divided by 2 = 74

Number is < 150.
Press any key to continue . . .

PROOF 2:
Thomas Sanger
ELET115

Write a number between 100 and 200
and I will divide it by 2.Then tell you if it's higher or lower than 150:150

150 divided by 2 = 75

Number is = 150.
Press any key to continue . . .

PROOF 3:
Thomas Sanger
ELET115

Write a number between 100 and 200
and I will divide it by 2.Then tell you if it's higher or lower than 150:151

151 divided by 2 = 75

Number is > 150.
Press any key to continue . . .
*/