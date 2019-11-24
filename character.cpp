#include "character.h"

#include <string>
#include <iostream>

#define EMPTY_STRING ""

Character::Character()
{
	m_name = EMPTY_STRING;
	m_archetype = EMPTY_STRING;
	m_theme = EMPTY_STRING;
	m_date_of_birth = EMPTY_STRING;
	m_gender = EMPTY_STRING;
	m_alias = EMPTY_STRING;
	m_ability = EMPTY_STRING;
	m_weapon = EMPTY_STRING;

	m_health = 0;

}

Character::Character(string name, string archetype, string theme, string date_of_birth,
	string gender, string alias, string ability, string weapon)
{
	m_name = name;
	m_archetype = archetype;
	m_theme = theme;
	m_date_of_birth = date_of_birth;
	m_gender = gender;
	m_alias = alias;
	m_ability = ability;
	m_weapon = weapon;
}

string Character::getName()
{
	return m_name;
}

string Character::getArchetype()
{
	return m_archetype;
}

string Character::getTheme()
{
	return m_theme;
}

string Character::getDateOfBirth()
{
	return m_date_of_birth;
}

string Character::getGender() 
{
	return m_gender;
}

string Character::getAlias()
{
	return m_alias;
}

string Character::getAbility()
{
	return m_ability;
}

string Character::getWeapon()
{
	return m_weapon;
}

int Character::getHealth()
{
	return m_health;
}

string selectCharacter(string name)
{
	return name;
}