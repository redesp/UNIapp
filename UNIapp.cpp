#include "character.h"
#include "character_data.h"
#include "menu.h"
#include "universal_info.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Initialize the character vector
	vector<Character> character_vector = createCharacterVector();

	// Program runs until the user quits
	while (1)
	{
		const int user_input = selectInfoType();	// Universal [1] or Character [2]

		// The choices are mapped to the following numbers
		const int universal_info = 1;
		const int character_info = 2;
		const int quit_info = 3;
		const int debug_info = 4;

		// User selected universal info
		if (user_input == universal_info)
		{

			const int universal_info_input = selectFromUniversal();	// User inputs a decision here

			switch (universal_info_input)
			{
			case 1:
				printInfoGRD();		// GRD
				break;

			case 2:
				printInfoVorpal();	// Vorpal
				break;

			// TO DO: Add more universal options later, consider putting this into a separate function in this file
			}

		}

		// User selected character info
		else if (user_input == character_info)
		{
			const Character selected_character = selectFromCharacter(character_vector);
			const int character_data_input = selectFromCharacterData(selected_character);

			//some function takes in data input, outputs character info
		}
		
		// User has quit the program
		else if (user_input == quit_info)
		{
			cout << "Quitting...\n";
			return 0;
		}

		// Enter debug mode
		else if (user_input == debug_info)
		{
			cout << "Entering debug mode...\n";
			continue;
		}
		else
			return 0;	// Execution should never reach here

	}

	// TO DO:
	//select type of information
		//selectUniversalInfo()
			//reversals
			//throws
			//meter gain
		//selectCharacterInfo()
			//selectCharacter()
				//displayHealth()
				//displayMoveData()
				//displayArchetype()
				//displayLore()
				//displayRange()
		

	return 0;
}