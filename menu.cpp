#include "menu.h"

#include <iostream>

using namespace std;

#define UNIVERSAL_INFO 1
#define CHARACTER_INFO 2
#define QUIT_INFO	   3
#define DEBUG_INFO	   4

string getInfoName()
{
	string info{};
	cin >> info;

	return info;
}

int getInfoNumber()
{
	return 0;
}

/*
 *	selectInfoType():
 *	Inputs:			none
 *	Outputs:		Valid user input
 *	Description:	Chooses whether universal info or character info is displayed to the user 
 */
int selectInfoType()
{
	while (1)
	{
		cout << "Would you like to know universal info or character specific info?\n";
		cout << "Enter [1] for 'Universal Info'\n";
		cout << "Enter [2] for 'Character Info'\n";
		cout << "Enter [3] to quit\n";
		cout << "Enter [4] for debug mode\n";

		int info{};
		cin >> info;

		if (cin.fail()) // has a previous extraction failed?
		{
			cin.clear(); // put us back in 'normal' operation mode
			cin.ignore(32767, '\n'); // and remove the bad input
		}

		if (info == UNIVERSAL_INFO || info == CHARACTER_INFO)
			return info;

		else if (info == QUIT_INFO)
		{
			cout << "\nQuitting...";
			break;
		}

		else if (info == DEBUG_INFO)
		{
			cout << "Entering debug mode...\n";
			return info;
		}

		else
			cout << "Please type in a valid number.\n";
	}

	return 0;
}


/*
 *	selectFromUniversal():
 *	Inputs:			none
 *	Outputs:		Valid user input
 *	Description:	Determines which type of universal info to display to the user
 */
int selectFromUniversal()
{
	while (1) // Continues to ask the user for a valid input
	{
		cout << "What would you like to know more about?\n";
		cout << "Enter [1] for 'GRD'\n";
		cout << "Enter [2] for 'Vorpal'\n";

		int info{};
		cin >> info;

		if (cin.fail()) // has a previous extraction failed?
		{
			cin.clear(); // put us back in 'normal' operation mode
			cin.ignore(32767, '\n'); // and remove the bad input
		}

		if (info == 1)
			return info;

		else if (info == 2)
			return info;

		else
			cout << "Please type in a valid number.\n";
	}

	return 0;

}


/*
 *	selectFromCharacter():
 *	Inputs:			none
 *	Outputs:		Valid user input
 *	Description:	Selects a character from the list of available characters
 */
string selectFromCharacter()
{
	while (1)	// Continues to ask the user for a valid input
	{
		cout << "What character would you like to know more about?\n";

		string character_name{};
		cin >> character_name;

		bool valid_character = true;		// needs to be set based on if a character exists
		
		if (valid_character)
			return character_name;

		else // Character is invalid
			cout << "Please enter a valid character name.\n";

	}
	
}

void printInfoGRD()
{
	cout << "GRD Placeholder\n";
}

void printInfoVorpal()
{
	cout << "Vorpal Placeholder\n";
}