#ifndef CHARACTER_DATA_H
#define CHARACTER_DATA_H

#include "character.h"
#include <vector>

void insertCharacter(vector<Character> &vec, const Character c);
vector<Character> createCharacterVector();
Character selectCharacter(const vector<Character> &vec, const int index);

#endif