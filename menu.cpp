#include "menu.h"
#include "character.h"

#include <iostream>
#include <vector>

using namespace std;

#define UNIVERSAL_INFO 1
#define CHARACTER_INFO 2
#define QUIT_INFO	   3
#define DEBUG_INFO	   4
#define SMALLEST_NAME_LENGTH	4

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
Character selectFromCharacter(vector<Character> vec)
{
	while (1)	// Continues to ask the user for a valid input
	{
		cout << "What character would you like to know more about?\n";

		string input_character_name{};
		cin >> input_character_name;

		// Names shorter than four characters are not possible
		if (input_character_name.size() < SMALLEST_NAME_LENGTH)
		{
			cout << "Please enter a valid character name.\n";
			continue;
		}

		// Put the input string into a temporary string
		string temp1{};
		Character return_character;
		bool valid_character = false;

		for (size_t j = 0; j < input_character_name.size(); j++)
		{
			temp1.push_back(tolower(input_character_name[j]));
		}

		// Compare the user input string with the actual character name to see if a matching character exists
		for (size_t i = 0; i < vec.size(); i++)
		{
			size_t actual_character_name_length = vec[i].getName().size();
			string temp2{};

			// Do a case insensitive comparison between strings
			for (size_t j = 0; j < actual_character_name_length; j++)
			{
				temp2.push_back(tolower(vec[i].getName()[j]));
	
				// Placing the comparison here allows for shorthand names like "Wald" or "Yuzu" to be valid inputs
				if (temp1 == temp2)
				{
					return_character = vec[i];
					valid_character = true;
					break;
				}
			

			}
		}
		
		if (valid_character)
		{
			return return_character;
		}
			
	
		else // Character is invalid
		{
			cout << "Please enter a valid character name.\n";
			continue;
		}
			

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