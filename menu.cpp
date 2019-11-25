#include "menu.h"
#include "character.h"

#include <iostream>
#include <vector>

using namespace std;

/*
 *	getUserInput():
 *	Inputs:			none
 *	Outputs:		Valid user input
 *	Description:	Helper function. Retrieves the user's input from cin.
 */
int getUserInput()
{
	int input{};
	cin >> input;

	if (cin.fail()) // has a previous extraction failed?
	{
		cin.clear(); // put us back in 'normal' operation mode
		cin.ignore(32767, '\n'); // and remove the bad input
	}

	return input;
}

/*
 *	selectInfoType():
 *	Inputs:			none
 *	Outputs:		Valid user input
 *	Description:	Chooses whether universal info or character info is displayed to the user.
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

		int universal_info = 1;
		int character_info = 2;
		int quit_info	   = 3;
		int debug_info	   = 4;

		int user_input = getUserInput();

		// Return if a valid number is entered
		if ((user_input == universal_info) || (user_input == character_info) 
			|| (user_input == quit_info) || (user_input == debug_info))
				return user_input;

		else
			cout << "Please enter a valid number.\n";
	}

	return 0;
}


/*
 *	selectFromUniversal():
 *	Inputs:			none
 *	Outputs:		Valid user input
 *	Description:	Determines which type of universal info to display to the user.
 */
int selectFromUniversal()
{
	while (1) // Continues to ask the user for a valid input
	{
		cout << "What would you like to know more about?\n";
		cout << "Enter [1] for 'GRD'\n";
		cout << "Enter [2] for 'Vorpal'\n";

		int user_input = getUserInput();

		// Return if a valid number was entered
		if ((user_input == 1) || (user_input == 2))
			return user_input;

		else
			cout << "Please enter a valid number.\n";
	}
	return 0;
}


/*
 *	selectFromCharacter():
 *	Inputs:			none
 *	Outputs:		Valid character
 *	Description:	Selects a character from the list of available characters.
 */
Character selectFromCharacter(vector<Character> vec)
{
	while (1)	// Continues to ask the user for a valid input
	{
		cout << "What character would you like to know more about?\n";

		string input_character_name{};
		cin >> input_character_name;

		// Names shorter than four characters are not possible
		int smallest_name_length = 4;

		if (input_character_name.size() < smallest_name_length)
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
				// Push the actual character name into a temporary string
				temp2.push_back(tolower(vec[i].getName()[j]));
	
				// Placing the comparison here allows for shorthand names like "Wald" or "yuzu" to be valid inputs
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

int selectFromCharacterData(Character c)
{
	while (1)
	{
		cout << "\nWhat would you like to know about " << c.getName() << "?\n";
		cout << "Enter [1] for general character info\n";
		cout << "Enter [2] for notable moves\n";
		cout << "Enter [3] for vorpal trait information\n";
		cout << "Enter [4] for reversal information\n";

		int general = 1;
		int notable_moves = 2;
		int vorpal_trait = 3;
		int reversals = 4;

		int user_input = getUserInput();

		// Return if a valid number was entered
		if ((user_input == general) || (user_input == notable_moves) 
			|| (user_input == vorpal_trait) || (user_input == reversals))
				return user_input;
		else
			cout << "Please enter a valid number.\n";
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