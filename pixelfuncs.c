#include "pixelfuncs.h"

Vector vecGen(Vector pixel, double dist, Vector forward, Vector up) {
	Vector sideways = cross(up, forward);
	Vector point = add(mult(forward, dist), add(mult(sideways, pixel.x), mult(up, pixel.y)));
	return normal(point);
}
