#include "character_data.h"
#include <string>
#include <vector>
#include <iostream>


// Helper function to push onto the character vector
void insertCharacter(vector<Character> &vec, Character c)
{
	vec.push_back(c);
}

vector<Character> getCharacterVector()
{
	// TO DO: change parameters to be correct
	vector<Character> character_vector;
	
	Character Akatsuki("Akatsuki", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Akatsuki);

	Character Byakuya("Byakuya", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Byakuya);

	Character Carmine("Carmine", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Carmine);

	Character Chaos("Chaos", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Chaos);

	Character Eltnum("Eltnum", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Eltnum);

	Character Enkidu("Enkidu", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Enkidu);

	Character Gordeau("Gordeau", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Gordeau);

	Character Hilda("Hilda", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Hilda);

	Character Hyde("Hyde", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Hyde);

	Character Linne("Linne", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Linne);

	Character Londrekia("Londrekia", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Londrekia);

	Character Merkava("Merkava", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Merkava);

	Character Mika("Mika", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Mika);

	Character Nanase("Nanase", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Nanase);

	Character Orie("Orie", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Orie);

	Character Phonon("Phonon", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Phonon);

	Character Seth("Seth", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Seth);

	Character Vatista("Vatista", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Vatista);

	Character Wagner("Wagner", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Wagner);

	Character Waldstein("Waldstein", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Waldstein);

	Character Yuzuriha("Yuzuriha", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Yuzuriha);

	return character_vector;
}

Character selectCharacter(vector<Character> vec, int index)
{
	return vec[index];
}