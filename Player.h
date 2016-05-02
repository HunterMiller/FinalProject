#pragma once
#include "entity.h"

class Player : public Entity {
public:
	Player() {
		setHealth(20);
	}

	bool hitBy(Entity *other) {
		return getRandomBoolean();
	}
	int getDamage() {
		return getRandomNumber(1, 10);
	}
	int attack(Entity *other) {
		int h = other->getHealth();
		int d = getDamage();

		h -= d;

		other->setHealth(h);
		return d;
	}
};