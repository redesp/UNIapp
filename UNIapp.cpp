// BBTAGapp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "character.h"
#include "menu.h"
#include "universal_info.h"

#include <iostream>

#define UNIVERSAL_INFO 1
#define CHARACTER_INFO 2

using namespace std;

int main()
{
	while (1)
	{
		int user_input = selectInfoType();	// Universal [1] or Character [2]

		if (user_input == UNIVERSAL_INFO)
		{

			int universal_info_input = selectFromUniversal();	// User inputs a decision here

			switch (universal_info_input)
			{
			case 1:
				cout << "Cross Burst\n";
				break;

			case 2:
				cout << "Cross Combo\n";
				break;
			}

		}

		else if (user_input == CHARACTER_INFO)
		{
			string character_name = selectFromCharacter();

			cout << "\nYou entered " << character_name << "\n";
		}

		else
			return 0;

	}


	//select type of information
		//selectUniversalInfo()
			//cross burst
			//cross raid
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
				//displayTeamPlacement()
				//displayPartners()
		

	return 0;
}