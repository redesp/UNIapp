#include "character_data.h"
#include <string>
#include <vector>
#include <iostream>


// Helper function to push onto the character vector
void insertCharacter(vector<Character> &vec, Character c)
{
	vec.push_back(c);
}

vector<Character> createCharacterVector()
{
	vector<Character> character_vector;
	
	Character Akatsuki("Akatsuki", "Straight-forward", "Open War -Again-", "Unknown", "Male", "Thunder God of Present Age", "Blitz Motor", "Taktischeblitzanzug");
	insertCharacter(character_vector, Akatsuki);

	Character Byakuya("Byakuya", "Setplay/Rushdown", "Beat Eat Nest", "December 24th", "Male", "The Non-volitional Predator", "Chelicerata", "The Predator");
	insertCharacter(character_vector, Byakuya);

	Character Carmine("Carmine", "Setplay/Control/Pressure", "Bad Surface", "May 8th", "Male", "Carmine-Prime", "Blood Spike", "Rein Blood");
	insertCharacter(character_vector, Carmine);

	Character Chaos("Chaos", "Zoner/Puppeteer", "Erudite Eyes", "December 5th", "Male", "Bloody Chaos", "Umbral", "Chaos Code");
	insertCharacter(character_vector, Chaos);

	Character Eltnum("Eltnum", "Rushdown", "Blood Drain -Again-", "June 1st", "Female", "The Wanderer", "Analysis", "Etherite");
	insertCharacter(character_vector, Eltnum);

	Character Enkidu("Enkidu", "Footsies/Counter", "Extreme Stream", "August 24th", "Male", "The Maneater", "Maelstrom", "--");
	insertCharacter(character_vector, Enkidu);

	Character Gordeau("Gordeau", "Footsies/Mix-up", "Rushing Heart", "June 23rd", "Male", "The Harvester of Greed", "Snatcher", "Devourer");
	insertCharacter(character_vector, Gordeau);

	Character Hilda("Hilda", "Zoner/Setplay", "Overwhelming Despair", "November 11th", "Female", "The Uncommon Witch", "Paradox", "Masquerade");
	insertCharacter(character_vector, Hilda);

	Character Hyde("Hyde", "All-rounder/Pressure", "Scraper Sky High", "April 14th", "Male", "Unknown Actor", "Void Red", "The Insulator");
	insertCharacter(character_vector, Hyde);

	Character Linne("Linne", "Speedy", "Night Walker", "March 18th", "Female", "The Princess of the Night Blade", "Speed Star", "No Name and Nameless");
	insertCharacter(character_vector, Linne);

	Character Londrekia("Londrekia", "Tricky", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Londrekia);

	Character Merkava("Merkava", "Setplay/Poker", "Unseen Entities", "Unknown", "Male", "The Basilisk of the Abyss", "Jormungandr", "Dark Bite");
	insertCharacter(character_vector, Merkava);

	Character Mika("Mika", "Rushdown/Grappler", "Forceful Step", "March 2nd", "Female", "The Cannonball Girl", "Diesel", "Palchelbel Cannon");
	insertCharacter(character_vector, Mika);

	Character Nanase("Nanase", "Speedy/Setplay/Mix-up", "Gallant Girl", "February 15th", "Female", "The Assassin", "Windmill", "Zephyr");
	insertCharacter(character_vector, Nanase);

	Character Orie("Orie", "Footsies/Mix-ups", "Purely & Strictly", "October 7th", "Female", "Fifth Executor", "Thanatos", "The Ruler");
	insertCharacter(character_vector, Orie);

	Character Phonon("Phonon", "Zoner/Pressure", "Sounds of Night Wind", "August 5th", "Female", "Cleaving Flurry", "Baroque Noise", "Muniel");
	insertCharacter(character_vector, Phonon);

	Character Seth("Seth", "Speedy/Mix-up", "Monochrome Memory", "January 7th", "Male", "The Assassin", "Kerykeion", "The Eliminator");
	insertCharacter(character_vector, Seth);

	Character Vatista("Vatista", "All-rounder", "Snow Sisters", "Unknown", "Female", "The Puppet of Resurrection", "Restriction", "Seven Flowers");
	insertCharacter(character_vector, Vatista);

	Character Wagner("Wagner", "Rushdown/Pressure", "Flame & Destiny", "May 23rd", "Female", "The Crimson Knight", "Flame Tyrant", "Flame Brand and Ancile");
	insertCharacter(character_vector, Wagner);

	Character Waldstein("Waldstein", "Grappler", "Maximiaze Power!", "September 15th", "Male", "The Strong-armed Ancient", "Hecatoncheir", "The Destroyers");
	insertCharacter(character_vector, Waldstein);

	Character Yuzuriha("Yuzuriha", "Zoner", "Moving Like a Blossoming Lily", "July 20th", "Female", "Blade of the Godspeed", "Ainsel Lost", "Kamiji-no-Homare");
	insertCharacter(character_vector, Yuzuriha);

	return character_vector;
}

Character selectCharacter(vector<Character> vec, int index)
{
	return vec[index];
}