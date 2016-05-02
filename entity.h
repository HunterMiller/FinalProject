#pragma once
#include <string>
#include "attributes.h"
#include "random.h"

class Entity : public Attributes, public Random {
private:
	std::string name;
	int health;
	int maxHealth;
	int level;
	int armor;
public:
	void setName(const std::string &v) {
		name = v;
	}
	std::string getName() {
		return name;
	}
	int getHealth() {
		return health;
	}
	void setHealth(const int &v) {
		health = v;
	}
	int getMaxHealth() {
		return maxHealth;
	}
	void setMaxHealth(const int &v) {
		maxHealth = v;
	}
	int getLevel() {
		return level;
	}
	virtual void levelUp() {

	}
	int getArmor() {
		return armor;
	}
	void setArmor(const int &v) {
		armor = v;
	}
	virtual int attack(Entity *other) {
		return 0;
	}

	virtual int getDamage() {
		return 0;
	}
	virtual bool hitBy(Entity *other) {
		return false;
	}
};