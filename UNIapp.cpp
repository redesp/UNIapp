#include "character.h"
#include "character_data.h"
#include "menu.h"
#include "universal_info.h"

#include <iostream>
#include <vector>

#define UNIVERSAL_INFO 1
#define CHARACTER_INFO 2
#define QUIT_INFO	   3
#define DEBUG_INFO	   4

using namespace std;

int main()
{
	// Initialize the character vector
	vector<Character> character_vector = getCharacterVector();

	// Program runs until the user quits
	while (1)
	{
		int user_input = selectInfoType();	// Universal [1] or Character [2]

		if (user_input == UNIVERSAL_INFO)
		{

			int universal_info_input = selectFromUniversal();	// User inputs a decision here

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

		else if (user_input == CHARACTER_INFO)
		{
			string character_name = selectFromCharacter(character_vector);

			cout << "\nYou entered " << character_name << "\n";
		}

		else if (user_input == DEBUG_INFO)
		{
			// Enter debug mode
			char temp = character_vector[0].getName()[1];
			temp = tolower(temp);

			cout << "This character is: " << temp << "\n";

		
			//Character temp = selectCharacter(vec,0);

			//cout << "This character's name is: " << vec[0].getName() << "\n";
			//cout << "His style is: " << vec[0].getArchetype() << "\n";
		}
		else
			return 0;	// End the program

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