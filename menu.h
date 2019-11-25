#ifndef MENU_H
#define MENU_H

#include "character.h"
#include <string>
#include <vector>

using namespace std;

int		getUserInput();
int		selectInfoType();

// Universal info functions
int		selectFromUniversal();
void	printInfoGRD();
void	printInfoVorpal();

// Character info functions
Character	selectFromCharacter(const vector<Character> &vec);
int	selectFromCharacterData(const Character &c);
void selectCharacterInfoCategory(const Character &c, const int user_input);




#endif