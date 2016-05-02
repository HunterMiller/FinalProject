#pragma once
#include <time.h>
#include <stdlib.h>

class Random {
public:
	Random() {
		srand(time(NULL));
	}
	int getRandomNumber(int min, int max) {
		return rand() % max + min;
	}
	bool getRandomBoolean() {
		return rand() % 2;
	}
};