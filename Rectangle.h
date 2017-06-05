#pragma once

#include "Figure.h"

class Rectangle : public Figure
{
public:
	Rectangle(int x1, int y1, int x2, int y2, int r, int g, int b, int R, int G, int B);

	int* Get();

	static const int ID = 3;

private:
	Point p1;
	Point p2;
	int r, g, b;
	int R, G, B;
};
