#pragma once

#include "Figure.h"

class Line : public Figure
{
public:
	Line(int x1, int y1, int x2, int y2, int r, int g, int b);

	int* Get();

	static const int ID = 1;

private:
	Point p1;
	Point p2;
	int r, g, b;
};
