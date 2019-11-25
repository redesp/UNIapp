#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

/*
 * This class contains info about each character.
 * More specific information like frame data will be included in 
 * a separate class - it will be linked to this class via character name.
 */

class Character
{
	private:
		string m_name;
		string m_archetype;
		string m_theme;
		string m_date_of_birth;
		string m_gender;
		string m_alias;
		string m_ability;
		string m_weapon;
	

	public:
		Character();
		Character(string name, string archetype, string theme, string date_of_birth, 
						string gender, string alias, string ability, string weapon);
		string getName() const;
		string getArchetype() const;
		string getTheme() const;
		string getDateOfBirth() const;
		string getGender() const;
		string getAlias() const;
		string getAbility() const;
		string getWeapon() const;

};


#endif
