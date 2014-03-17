#pragma once

struct Vector {
	double x, y, z;
};

typedef struct Vector Vector;

Vector Vector_new(double x, double y, double z);
Vector add(Vector a, Vector b);
Vector sub(Vector a, Vector b);
Vector mult(Vector a, double b);
double dot(Vector a, Vector b);
Vector cross(Vector a, Vector b);
double mag(Vector a);
Vector normal(Vector a);
