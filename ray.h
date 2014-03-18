#pragma once

#include "vector.h"

struct ray {
	Vector start;
	Vector vel;
	int bounces;
	bool state; //false = dead
}
