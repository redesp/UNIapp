#ifndef CHARACTER_DATA_H
#define CHARACTER_DATA_H

#include "character.h"
#include <vector>

void insertCharacter(vector<Character> &vec, Character c);
vector<Character> getCharacterVector();
Character selectCharacter(vector<Character> vec, int index);

#endif