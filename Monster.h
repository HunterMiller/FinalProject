#pragma once
#include "entity.h"
#include "Player.h"

class Monster : public Entity {
public:
	Monster() {
		setHealth(20);
	}
	bool hitBy(Entity *other) {
		return getRandomBoolean();
	}
	int getDamage() {
		return getRandomNumber(1, 8);
	}
	/*
	int attack(Entity *other) {
	int h = other->getHealth();
	int d = getDamage();

	h -= d;

	other->setHealth(h);
	return d;
	}
	*/
	int attack(Player *other) {
		int h = other->getHealth();
		int d = getDamage();

		h -= d;

		other->setHealth(h);
		return d;
	}
};