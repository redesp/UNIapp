#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

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
		
		int m_health{ 0 };


	public:
		Character();
		Character(string name, string archetype, string theme, string date_of_birth, 
						string gender, string alias, string ability, string weapon);
		string getName();
		string getArchetype();
		string getTheme();
		string getDateOfBirth();
		string getGender();
		string getAlias();
		string getAbility();
		string getWeapon();

		int getHealth();

};

string selectCharacter(string name);

#endif
