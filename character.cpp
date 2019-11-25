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

string Character::getName() const
{
	return m_name;
}

string Character::getArchetype() const
{
	return m_archetype;
}

string Character::getTheme() const
{
	return m_theme;
}

string Character::getDateOfBirth() const
{
	return m_date_of_birth;
}

string Character::getGender() const
{
	return m_gender;
}

string Character::getAlias() const
{
	return m_alias;
}

string Character::getAbility() const
{
	return m_ability;
}

string Character::getWeapon() const
{
	return m_weapon;
}
