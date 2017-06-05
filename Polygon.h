#pragma once

#include "Figure.h"

class Polygon : public Figure
{
public:
	Polygon(int* coordTab, int n, int r, int g, int b, int R, int G, int B);
	~Polygon();

	int* Get();

	static const int ID = 4;

private:
	Point* nodes;
	int n;
	int r, g, b;
	int R, G, B;
};
