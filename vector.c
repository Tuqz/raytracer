#include <math.h>
#include "vector.h"

Vector Vector_new(double x, double y, double z) {
	Vector out;
	out.x = x;
	out.y = y;
	out.z = z;
	return out;
}

Vector add(Vector a, Vector b) {
	return Vector_new(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector sub(Vector a, Vector b) {
	return Vector_new(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector mult(Vector a, double b) {
	return Vector_new(b*a.x, b*a.y, b*a.z);
}

double dot(Vector a, Vector b) {
	return (a.x*b.x) + (a.y*b.y) + (a.z*b.z);
}

Vector cross(Vector a, Vector b) {
	return Vector_new(a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x);
}

double mag(Vector a) {
	return sqrt((a.x*a.x) + (a.y*a.y) + (a.z*a.z));
}

Vector normal(Vector a) {
	double scale = 1.0/mag(a);
	return mult(a, scale);
}
