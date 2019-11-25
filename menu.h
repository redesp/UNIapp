#ifndef MENU_H
#define MENU_H

#include "character.h"
#include <string>
#include <vector>

using namespace std;

string  getInfoName();
int		getInfoNumber();
int		selectInfoType();
int		selectFromUniversal();
string	selectFromCharacter(vector<Character> vec);
void	printInfoGRD();
void	printInfoVorpal();


#endif