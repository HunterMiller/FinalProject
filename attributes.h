#pragma once

class Attributes {
private:
	int strength, constitution, intelligence, dexterity, charisma, wisdom;
public:
	void setStrength(const int &v) {
		strength = v;
	}
	int getStrength() {
		return strength;
	}
	int getStrengthMod() {
		return strength / 2 - 5;
	}
	void setConstitution(const int &v) {
		constitution = v;
	}
	int getConstitution() {
		return constitution;
	}
	int getConstitutionMod() {
		return constitution / 2 - 5;
	}
	void setIntelligence(const int &v) {
		intelligence = v;
	}
	int getIntelligence() {
		return intelligence;
	}
	int getIntelligenceMod() {
		return intelligence / 2 - 5;
	}
	void setDexterity(const int &v) {
		dexterity = v;
	}
	int getDexterity() {
		return dexterity;
	}
	int getDexterityMod() {
		return dexterity / 2 - 5;
	}
	void setCharisma(const int &v) {
		charisma = v;
	}
	int getCharisma() {
		return charisma;
	}
	int getCharismaMod() {
		return charisma / 2 - 5;
	}
	void setWisdom(const int &v) {
		wisdom = v;
	}
	int getWisdom() {
		return wisdom;
	}
	int getWisdomMod() {
		return wisdom / 2 - 5;
	}
}